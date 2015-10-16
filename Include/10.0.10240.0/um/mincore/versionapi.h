 
// begin_1_0
// begin_1_1
/********************************************************************************
*                                                                               *
* consoleapi.h -- ApiSet Contract for api-ms-win-core-version-l1                *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
#ifndef _APISETVERSION_
#define _APISETVERSION_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-version-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_VERSION_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_VERSION_VER 0x0101
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_VERSION_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

// end_1_0
// end_1_1
// begin_1_0

WINBASEAPI
DWORD
WINAPI
GetFileVersionInfoSizeExW(
    _In_ DWORD dwFlags,
    _In_ LPCWSTR lpwstrFilename,
    _Out_ LPDWORD lpdwHandle
    );


WINBASEAPI
BOOL
WINAPI
GetFileVersionInfoExW(
    _In_ DWORD dwFlags,
    _In_ LPCWSTR lpwstrFilename,
    _Reserved_ DWORD dwHandle,
    _In_ DWORD dwLen,
    _Out_writes_bytes_(dwLen) LPVOID lpData
    );


WINBASEAPI
DWORD
WINAPI
VerFindFileW(
    _In_ DWORD wFlags,
    _In_ LPCWSTR lpszFileName,
    _In_opt_ LPCWSTR lpszWinDir,
    _In_ LPCWSTR lpszAppDir,
    _Out_writes_(*puCurDirLen) LPWSTR lpszCurDir,
    _Inout_ PUINT puCurDirLen,
    _Out_writes_(*puDestDirLen) LPWSTR lpszDestDir,
    _Inout_ PUINT puDestDirLen
    );


WINBASEAPI
BOOL
WINAPI
VerQueryValueW(
    _In_ LPCVOID pb,
    _In_ LPCWSTR lpSubBlock,
    _Outptr_result_buffer_(_Inexpressible_("buffer can be PWSTR or DWORD*")) LPVOID * lplpBuffer,
    _Out_ PUINT puLen
    );


// end_1_0
// begin_1_1


#if !defined(_CONTRACT_GEN) || (_APISET_VERSION_VER >= 0x0101)

WINBASEAPI
DWORD
WINAPI
GetFileVersionInfoSizeW(
    _In_ LPCWSTR lpwstrFilename,
    _Out_opt_ LPDWORD lpdwHandle
    );


WINBASEAPI
BOOL
WINAPI
GetFileVersionInfoW(
    _In_ LPCWSTR lpwstrFilename,
    _Reserved_ DWORD dwHandle,
    _In_ DWORD dwLen,
    _Out_writes_bytes_(dwLen) LPVOID lpData
    );


#endif // !defined(_CONTRACT_GEN) || (_APISET_VERSION_VER >= 0x0101)

// end_1_1
// begin_1_0
// begin_1_1

#ifdef __cplusplus
}
#endif


#endif // _APISETVERSION_

// end_1_0
// end_1_1
