//+-----------------------------------------------------------------------
//
// Microsoft Windows
//
// Copyright (c) Microsoft Corporation
//
// Description: Enterprise Data Protection Win32 APIs
//
//------------------------------------------------------------------------

#ifdef _MSC_VER
#pragma once
#endif

#ifndef _EDPWIN32_H_
#define _EDPWIN32_H_

#ifndef NT_INCLUDED
#include <winnt.h>
#endif /* NT_INCLUDED */

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if NTDDI_VERSION >= NTDDI_WIN10_TH2

STDAPI ProtectFileToEnterpriseIdentity(
    _In_ PCWSTR fileOrFolderPath,
    _In_ PCWSTR identity
    );

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // _EDPWIN32_H_