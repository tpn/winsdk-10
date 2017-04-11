//----------------------------------------------------------------------------
//
// Simple remote dbgeng extension host.
//
// Copyright (C) Microsoft Corporation, 2006.
//
//----------------------------------------------------------------------------

#include <windows.h>
#include <dbgeng.h>

#include "extr.hpp"

//----------------------------------------------------------------------------
//
// Extension.
//
//----------------------------------------------------------------------------

Extension::Extension(void)
{
    m_Dll = NULL;
}

Extension::~Extension(void)
{
    Unload();
}

HRESULT
Extension::Load(_In_ PCWSTR File)
{
    HRESULT Status;
    
    if (m_Dll != NULL)
    {
        return E_UNEXPECTED;
    }

    m_Dll = LoadLibraryEx(File, 0, 0);
    if (!m_Dll)
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }

    // Leave the uninitialize function unset until
    // we have a successful initialize.
    m_Uninit = NULL;
    
    m_Init = (PDEBUG_EXTENSION_INITIALIZE)
        GetProcAddress(m_Dll, "DebugExtensionInitialize");
    if (!m_Init)
    {
        Status = E_NOINTERFACE;
        goto Exit;
    }

    m_Version = 0;
    m_InitFlags = 0;
    Status = m_Init(&m_Version, &m_InitFlags);
    if (Status != S_OK)
    {
        goto Exit;
    }

    // We're initialized, so look up remaining functions.
    m_Uninit = (PDEBUG_EXTENSION_UNINITIALIZE)
        GetProcAddress(m_Dll, "DebugExtensionUninitialize");
    m_Notify = (PDEBUG_EXTENSION_NOTIFY)
        GetProcAddress(m_Dll, "DebugExtensionNotify");

    Status = S_OK;
        
 Exit:
    if (Status != S_OK)
    {
        Unload();
    }
    return Status;
}

void
Extension::Unload(void)
{
    if (m_Dll == NULL)
    {
        return;
    }

    if (m_Uninit)
    {
        m_Uninit();
    }
    
    FreeLibrary(m_Dll);
    m_Dll = NULL;
}

void
Extension::NotifyAccessible(void)
{
    if (!m_Notify)
    {
        return;
    }

    m_Notify(DEBUG_NOTIFY_SESSION_ACTIVE, 0);
    m_Notify(DEBUG_NOTIFY_SESSION_ACCESSIBLE, 0);
}

HRESULT
Extension::Call(_In_ PDEBUG_CLIENT Client,
                _In_ PCSTR Command,
                _In_ PCSTR Args,
                _Out_ HRESULT* CommandStatus)
{
    if (m_Dll == NULL)
    {
        return E_UNEXPECTED;
    }

    PDEBUG_EXTENSION_CALL Cmd;

    Cmd = (PDEBUG_EXTENSION_CALL)GetProcAddress(m_Dll, Command);
    if (!Cmd)
    {
        return E_NOINTERFACE;
    }

    *CommandStatus = Cmd(Client, Args);
    return S_OK;
}
