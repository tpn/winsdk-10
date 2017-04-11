//----------------------------------------------------------------------------
//
// Simple remote dbgeng extension host.
//
// Copyright (C) Microsoft Corporation, 2006.
//
//----------------------------------------------------------------------------

#ifndef __EXTR_HPP__
#define __EXTR_HPP__

class Extension
{
public:
    Extension(void);
    ~Extension(void);
    
    HRESULT Load(_In_ PCWSTR File);
    void Unload(void);

    void NotifyAccessible(void);
    
    HRESULT Call(_In_ PDEBUG_CLIENT Client,
                 _In_ PCSTR Command,
                 _In_ PCSTR Args,
                 _Out_ HRESULT* CommandStatus);
    
protected:
    HINSTANCE m_Dll;
    ULONG m_Version;
    ULONG m_InitFlags;
    PDEBUG_EXTENSION_INITIALIZE m_Init;
    PDEBUG_EXTENSION_UNINITIALIZE m_Uninit;
    PDEBUG_EXTENSION_NOTIFY m_Notify;
};

#endif // #ifndef __EXTR_HPP__
