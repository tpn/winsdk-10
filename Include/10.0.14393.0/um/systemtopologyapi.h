 
/********************************************************************************
*                                                                               *
* consoleapi.h -- ApiSet Contract for api-ms-win-core-systemtopology-l1         *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _SYSTEMTOPOLOGY_H_
#define _SYSTEMTOPOLOGY_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-systemtopology-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_SYSTEMTOPOLOGY_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN10_RS1
#define _APISET_SYSTEMTOPOLOGY_VER 0x0101
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_SYSTEMTOPOLOGY_VER 0x0100
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
BOOL
WINAPI
GetNumaHighestNodeNumber(
    _Out_ PULONG HighestNodeNumber
    );



#if _WIN32_WINNT >= 0x0601

WINBASEAPI
BOOL
WINAPI
GetNumaNodeProcessorMaskEx(
    _In_ USHORT Node,
    _Out_ PGROUP_AFFINITY ProcessorMask
    );


#endif // (_WIN32_WINNT >=0x0601)


#if !defined(_CONTRACT_GEN) || (_APISET_SYSTEMTOPOLOGY_VER >= 0x0101)


#if _WIN32_WINNT >= 0x0601

WINBASEAPI
BOOL
WINAPI
GetNumaProximityNodeEx(
    _In_ ULONG ProximityId,
    _Out_ PUSHORT NodeNumber
    );


#endif // (_WIN32_WINNT >=0x0601)

#endif // !defined(_CONTRACT_GEN) || (_APISET_EVENTINGPROVIDER_VER >= 0x0101)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _SYSTEMTOPOLOGY_H_
