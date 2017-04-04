 
/********************************************************************************
*                                                                               *
* wow64app.h - ApiSet Contract for api-ms-win-core-wow64-l1                     *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _WOW64APISET_H_
#define _WOW64APISET_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-wow64-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_WOW64_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_WOW64_VER 0x0101
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_WOW64_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

// RC warns because "WINBASE_DECLARE_GET_SYSTEM_WOW64_DIRECTORY" is a bit long.
#if !defined(RC_INVOKED)

#if _WIN32_WINNT >= 0x0501 || defined(WINBASE_DECLARE_GET_SYSTEM_WOW64_DIRECTORY)

WINBASEAPI
BOOL
WINAPI
Wow64DisableWow64FsRedirection(
    _Out_ PVOID * OldValue
    );


WINBASEAPI
BOOL
WINAPI
Wow64RevertWow64FsRedirection(
    _In_ PVOID OlValue
    );


#endif // _WIN32_WINNT >= 0x0501
#endif // !defined(RC_INVOKED)


#if (_WIN32_WINNT >= 0x0501)

WINBASEAPI
BOOL
WINAPI
IsWow64Process(
    _In_ HANDLE hProcess,
    _Out_ PBOOL Wow64Process
    );


#endif // _WIN32_WINNT >= 0x0501


#if !defined(_CONTRACT_GEN) || (_APISET_WOW64_VER >= 0x0101)

// RC warns because "WINBASE_DECLARE_GET_SYSTEM_WOW64_DIRECTORY" is a bit long.
#if !defined(RC_INVOKED)

#if _WIN32_WINNT >= 0x0501 || defined(WINBASE_DECLARE_GET_SYSTEM_WOW64_DIRECTORY)

WINBASEAPI
_Must_inspect_result_
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemWow64DirectoryA(
    _Out_writes_to_opt_(uSize, return + 1) LPSTR lpBuffer,
    _In_ UINT uSize
    );

WINBASEAPI
_Must_inspect_result_
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemWow64DirectoryW(
    _Out_writes_to_opt_(uSize, return + 1) LPWSTR lpBuffer,
    _In_ UINT uSize
    );

#ifdef UNICODE
#define GetSystemWow64Directory  GetSystemWow64DirectoryW
#else
#define GetSystemWow64Directory  GetSystemWow64DirectoryA
#endif // !UNICODE

WINBASEAPI
_Must_inspect_result_
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemWow64Directory2A(
    _Out_writes_to_opt_(uSize, return + 1) LPSTR lpBuffer,
    _In_ UINT uSize,
    _In_ WORD ImageFileMachineType
    );

WINBASEAPI
_Must_inspect_result_
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemWow64Directory2W(
    _Out_writes_to_opt_(uSize, return + 1) LPWSTR lpBuffer,
    _In_ UINT uSize,
    _In_ WORD ImageFileMachineType
    );

#ifdef UNICODE
#define GetSystemWow64Directory2  GetSystemWow64Directory2W
#else
#define GetSystemWow64Directory2  GetSystemWow64Directory2A
#endif // !UNICODE

#endif // _WIN32_WINNT >= 0x0501
#endif // !defined(RC_INVOKED)


#if (_WIN32_WINNT >= 0x0603)

WINBASEAPI
USHORT
WINAPI
Wow64SetThreadDefaultGuestMachine(
    _In_ USHORT Machine
    );


WINBASEAPI
BOOL
WINAPI
IsWow64Process2(
    _In_ HANDLE hProcess,
    _Out_ USHORT * pProcessMachine,
    _Out_opt_ USHORT * pNativeMachine
    );


#endif // _WIN32_WINNT >= 0x0603

#endif // !defined(_CONTRACT_GEN) || (_APISET_WOW64_VER >= 0x0101)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _WOW64APISET_H_
