 
/********************************************************************************
*                                                                               *
* threadpoolapi.h -- ApiSet Contract for api-ms-win-core-threadpool-l1          *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _THREADPOOLLEGACYAPISET_H_
#define _THREADPOOLLEGACYAPISET_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-threadpool-legacy-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_THREADPOOL_LEGACY_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_THREADPOOL_LEGACY_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

//
// Thread pool API's
//

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
QueueUserWorkItem(
    _In_ LPTHREAD_START_ROUTINE Function,
    _In_opt_ PVOID Context,
    _In_ ULONG Flags
    );


WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
UnregisterWaitEx(
    _In_ HANDLE WaitHandle,
    _In_opt_ HANDLE CompletionEvent
    );


WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateTimerQueue(
    VOID
    );


WINBASEAPI
BOOL
WINAPI
CreateTimerQueueTimer(
    _Outptr_ PHANDLE phNewTimer,
    _In_opt_ HANDLE TimerQueue,
    _In_ WAITORTIMERCALLBACK Callback,
    _In_opt_ PVOID Parameter,
    _In_ DWORD DueTime,
    _In_ DWORD Period,
    _In_ ULONG Flags
    );


WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
ChangeTimerQueueTimer(
    _In_opt_ HANDLE TimerQueue,
    _Inout_ HANDLE Timer,
    _In_ ULONG DueTime,
    _In_ ULONG Period
    );


WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
DeleteTimerQueueTimer(
    _In_opt_ HANDLE TimerQueue,
    _In_ HANDLE Timer,
    _In_opt_ HANDLE CompletionEvent
    );


WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
DeleteTimerQueueEx(
    _In_ HANDLE TimerQueue,
    _In_opt_ HANDLE CompletionEvent
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _THREADPOOLLEGACYAPISET_H_
