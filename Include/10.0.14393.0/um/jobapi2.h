 
/********************************************************************************
*                                                                               *
* jobapiset2.h -- ApiSet Contract for api-ms-win-core-job-l2                     *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
#pragma once
#ifndef _JOBAPISET2_H_
#define _JOBAPISET2_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-job-l2 */

#if !defined(RC_INVOKED)

#ifndef _APISET_JOB2_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_JOB2_VER 0x0101
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_JOB2_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family


#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef struct JOBOBJECT_IO_RATE_CONTROL_INFORMATION {
    LONG64 MaxIops;
    LONG64 MaxBandwidth;
    LONG64 ReservationIops;
    PCWSTR VolumeName;
    ULONG BaseIoSize;
    ULONG ControlFlags;
} JOBOBJECT_IO_RATE_CONTROL_INFORMATION;

WINBASEAPI
HANDLE
WINAPI
CreateJobObjectW(
    _In_opt_ LPSECURITY_ATTRIBUTES lpJobAttributes,
    _In_opt_ LPCWSTR lpName
    );



#if !defined(_CONTRACT_GEN) || (_APISET_JOB2_VER >= 0X0101)
WINBASEAPI
VOID
WINAPI
FreeMemoryJobObject(
    _In_ _Frees_ptr_ VOID * Buffer
    );

#endif

WINBASEAPI
HANDLE
WINAPI
OpenJobObjectW(
    _In_ DWORD dwDesiredAccess,
    _In_ BOOL bInheritHandle,
    _In_ LPCWSTR lpName
    );



WINBASEAPI
BOOL
WINAPI
AssignProcessToJobObject(
    _In_ HANDLE hJob,
    _In_ HANDLE hProcess
    );



WINBASEAPI
BOOL
WINAPI
TerminateJobObject(
    _In_ HANDLE hJob,
    _In_ UINT uExitCode
    );



WINBASEAPI
BOOL
WINAPI
SetInformationJobObject(
    _In_ HANDLE hJob,
    _In_ JOBOBJECTINFOCLASS JobObjectInformationClass,
    _In_reads_bytes_(cbJobObjectInformationLength) LPVOID lpJobObjectInformation,
    _In_ DWORD cbJobObjectInformationLength
    );



#if !defined(_CONTRACT_GEN) || (_APISET_JOB2_VER >= 0X0101)
WINBASEAPI
DWORD
WINAPI
SetIoRateControlInformationJobObject(
    _In_ HANDLE hJob,
    _In_ JOBOBJECT_IO_RATE_CONTROL_INFORMATION * IoRateControlInfo
    );

#endif

WINBASEAPI
BOOL
WINAPI
QueryInformationJobObject(
    _In_opt_ HANDLE hJob,
    _In_ JOBOBJECTINFOCLASS JobObjectInformationClass,
    _Out_writes_bytes_to_(cbJobObjectInformationLength, *lpReturnLength) LPVOID lpJobObjectInformation,
    _In_ DWORD cbJobObjectInformationLength,
    _Out_opt_ LPDWORD lpReturnLength
    );



#if !defined(_CONTRACT_GEN) || (_APISET_JOB2_VER >= 0X0101)
WINBASEAPI
DWORD
WINAPI
QueryIoRateControlInformationJobObject(
    _In_opt_ HANDLE hJob,
    _In_opt_ PCWSTR VolumeName,
    _Outptr_result_buffer_(*InfoBlockCount) JOBOBJECT_IO_RATE_CONTROL_INFORMATION ** InfoBlocks,
    _Out_ ULONG * InfoBlockCount
    );

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#pragma endregion

#ifdef __cplusplus
}
#endif


#endif // _JOBAPISET2_H_
