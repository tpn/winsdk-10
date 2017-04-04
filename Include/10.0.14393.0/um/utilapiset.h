 
/********************************************************************************
*                                                                               *
* UtilApiSet.h -- ApiSet Contract for api-ms-win-core-util-l1-1-0               *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _APISETUTIL_
#define _APISETUTIL_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>

/* APISET_NAME: api-ms-win-core-util-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_UTIL_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_UTIL_VER 0x0101
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN7
#define _APISET_UTIL_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
_Ret_maybenull_
PVOID
WINAPI
EncodePointer(
    _In_opt_ PVOID Ptr
    );


WINBASEAPI
_Ret_maybenull_
PVOID
WINAPI
DecodePointer(
    _In_opt_ PVOID Ptr
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
_Ret_maybenull_
PVOID
WINAPI
EncodeSystemPointer(
    _In_opt_ PVOID Ptr
    );


WINBASEAPI
_Ret_maybenull_
PVOID
WINAPI
DecodeSystemPointer(
    _In_opt_ PVOID Ptr
    );



#if !defined(_CONTRACT_GEN) || (_APISET_UTIL_VER >= 0x0101)

WINBASEAPI
HRESULT
WINAPI
EncodeRemotePointer(
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID Ptr,
    _Out_ PVOID * EncodedPtr
    );


WINBASEAPI
HRESULT
WINAPI
DecodeRemotePointer(
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID Ptr,
    _Out_ PVOID * DecodedPtr
    );


#endif // !defined(_CONTRACT_GEN) || (_APISET_UTIL_VER >= 0x0101)

WINBASEAPI
BOOL
WINAPI
Beep(
    _In_ DWORD dwFreq,
    _In_ DWORD dwDuration
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _APISETUTIL_
