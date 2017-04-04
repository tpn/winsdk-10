 
// begin_1_0
/********************************************************************************
*                                                                               *
* enclaveapi.h -- ApiSet Contract for api-ms-win-core-enclave-l1-1-0            *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _ENCLAVEAPI_H_
#define _ENCLAVEAPI_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-enclave-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_ENCLAVE_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_ENCLAVE_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
IsEnclaveTypeSupported(
    _In_ DWORD flEnclaveType
    );


WINBASEAPI
_Ret_maybenull_ _Post_writable_byte_size_(dwSize)
LPVOID
WINAPI
CreateEnclave(
    _In_ HANDLE hProcess,
    _In_opt_ LPVOID lpAddress,
    _In_ SIZE_T dwSize,
    _In_ SIZE_T dwInitialCommitment,
    _In_ DWORD flEnclaveType,
    _In_reads_bytes_(dwInfoLength) LPCVOID lpEnclaveInformation,
    _In_ DWORD dwInfoLength,
    _Out_opt_ LPDWORD lpEnclaveError
    );


WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
LoadEnclaveData(
    _In_ HANDLE hProcess,
    _In_ LPVOID lpAddress,
    _In_reads_bytes_(nSize) LPCVOID lpBuffer,
    _In_ SIZE_T nSize,
    _In_ DWORD flProtect,
    _In_reads_bytes_(dwInfoLength) LPCVOID lpPageInformation,
    _In_ DWORD dwInfoLength,
    _Out_ PSIZE_T lpNumberOfBytesWritten,
    _Out_opt_ LPDWORD lpEnclaveError
    );


WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
InitializeEnclave(
    _In_ HANDLE hProcess,
    _In_ LPVOID lpAddress,
    _In_reads_bytes_(dwInfoLength) LPCVOID lpEnclaveInformation,
    _In_ DWORD dwInfoLength,
    _Out_opt_ LPDWORD lpEnclaveError
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _ENCLAVEAPI_H_
// end_1_0
