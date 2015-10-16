 
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

#ifndef _THREADPOOLPRIVATEAPISET_H_
#define _THREADPOOLPRIVATEAPISET_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-threadpool-private-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_THREADPOOL_PRIVATE_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_THREADPOOL_PRIVATE_VER 0x0100
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

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINBASEAPI
HANDLE
WINAPI
RegisterWaitForSingleObjectEx(
    _In_ HANDLE hObject,
    _In_ WAITORTIMERCALLBACK Callback,
    _In_opt_ PVOID Context,
    _In_ ULONG dwMilliseconds,
    _In_ ULONG dwFlags
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _THREADPOOLPRIVATEAPISET_H_
