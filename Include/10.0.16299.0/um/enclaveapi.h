 
// begin_1_0
// begin_1_1
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
/* APISET_TAG: public */

#if !defined(RC_INVOKED)

#ifndef _APISET_ENCLAVE_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN10_RS2
#define _APISET_ENCLAVE_VER 0x0101
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_ENCLAVE_VER 0x0100
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

#pragma region Desktop Family or OneCore Or App Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)

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


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP) */
#pragma endregion

// end_1_0
// begin_1_1

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if !defined(_CONTRACT_GEN) || (_APISET_ENCLAVE_VER >= 0x0101)

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
LoadEnclaveImageA(
    _In_ LPVOID lpEnclaveAddress,
    _In_ LPCSTR lpImageName
    );

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
LoadEnclaveImageW(
    _In_ LPVOID lpEnclaveAddress,
    _In_ LPCWSTR lpImageName
    );

#ifdef UNICODE
#define LoadEnclaveImage  LoadEnclaveImageW
#else
#define LoadEnclaveImage  LoadEnclaveImageA
#endif // !UNICODE

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
CallEnclave(
    _In_ LPENCLAVE_ROUTINE lpRoutine,
    _In_ LPVOID lpParameter,
    _In_ BOOL fWaitForThread,
    _Out_ LPVOID * lpReturnValue
    );


WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
TerminateEnclave(
    _In_ LPVOID lpAddress,
    _In_ BOOL fWait
    );


WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
DeleteEnclave(
    _In_ LPVOID lpAddress
    );


#endif // !defined(_CONTRACT_GEN) || (_APISET_ENCLAVE_VER >= 0x0101)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

// end_1_1
// begin_1_0
// begin_1_1

#ifdef __cplusplus
}
#endif

#endif // _ENCLAVEAPI_H_
// end_1_0
// end_1_1
