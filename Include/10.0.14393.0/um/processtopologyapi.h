 
 
/********************************************************************************
*                                                                               *
* processtopologyapi.h -- ApiSet Contract for api-ms-win-core-processtopology-l1 *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _PROCESSTOPOLOGYAPI_H_
#define _PROCESSTOPOLOGYAPI_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-processtopology-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_PROCESSTOPOLOGY_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINBLUE
#define _APISET_PROCESSTOPOLOGY_VER 0x0200
#elif _APISET_TARGET_VERSION == _APISET_TARGET_VERSION_WIN8
#define _APISET_PROCESSTOPOLOGY_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= 0x0601)

WINBASEAPI
BOOL
WINAPI
GetProcessGroupAffinity(
    _In_ HANDLE hProcess,
    _Inout_ PUSHORT GroupCount,
    _Out_writes_(*GroupCount) PUSHORT GroupArray
    );


#endif // (_WIN32_WINNT >= 0x0601)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion


#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= 0x0601)

WINBASEAPI
BOOL
WINAPI
GetThreadGroupAffinity(
    _In_ HANDLE hThread,
    _Out_ PGROUP_AFFINITY GroupAffinity
    );


WINBASEAPI
BOOL
WINAPI
SetThreadGroupAffinity(
    _In_ HANDLE hThread,
    _In_ CONST GROUP_AFFINITY * GroupAffinity,
    _Out_opt_ PGROUP_AFFINITY PreviousGroupAffinity
    );


#endif // (_WIN32_WINNT >= 0x0601)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _PROCESSTOPOLOGYAPI_H_
