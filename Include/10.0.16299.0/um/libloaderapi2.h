 
/********************************************************************************
*                                                                               *
* libloaderapi2.h -- ApiSet Contract for api-ms-win-core-libraryloader-l2       *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _APISETLIBLOADER2_
#define _APISETLIBLOADER2_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-libraryloader-L2 */
/* APISET_TAG: public */

#if !defined(RC_INVOKED)

#ifndef _APISET_LIBLOADER2_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_LIBLOADER2_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= 0x0602)

WINBASEAPI
_Ret_maybenull_
HMODULE
WINAPI
LoadPackagedLibrary(
    _In_ LPCWSTR lpwLibFileName,
    _Reserved_ DWORD Reserved
    );


WINBASEAPI
BOOL
WINAPI
QueryOptionalDelayLoadedAPI(
    _In_ HMODULE hParentModule,
    _In_ LPCSTR lpDllName,
    _In_ LPCSTR lpProcName,
    _Reserved_ DWORD Reserved
    );


#endif // _WIN32_WINNT >= 0x0602

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _APISETLIBLOADER2_
