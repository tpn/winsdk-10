 
/********************************************************************************
*                                                                               *
* xstateapi.h -- ApiSet Contract for api-ms-win-core-xstate-l1                  *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#pragma once

#ifndef _APISETXSTATE_
#define _APISETXSTATE_

#include <nt.h>
#include <ntrtl.h>
#include <apiset.h>
#include <apisetcconv.h>

/* APISET_NAME: api-ms-win-core-xstate-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_XSTATE_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_XSTATE_VER 0x0101
#elif _APISET_TARGET_VERSION == _APISET_TARGET_VERSION_WIN7
#define _APISET_XSTATE_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif


#if (NTDDI_VERSION >= NTDDI_WIN7)

NTSYSAPI
NTSTATUS
NTAPI
RtlCopyExtendedContext(
    _Out_ PCONTEXT_EX Destination,
    _In_ ULONG ContextFlags,
    _In_ PCONTEXT_EX Source
    );



#if (defined(_WIN32_WINNT) && !defined(_CONTRACT_GEN)) || (_APISET_XSTATE_VER > 0x0100)

NTSYSAPI
NTSTATUS
NTAPI
RtlCopyContext(
    _Inout_ PCONTEXT Destination,
    _In_ ULONG ContextFlags,
    _In_ PCONTEXT Source
    );


#endif // (defined(_WIN32_WINNT) && !defined(_CONTRACT_GEN)) || (_APISET_XSTATE_VER > 0x0100)

NTSYSAPI
ULONG64
NTAPI
RtlGetEnabledExtendedFeatures(
    _In_ ULONG64 FeatureMask
    );


NTSYSAPI
NTSTATUS
NTAPI
RtlGetExtendedContextLength(
    _In_ ULONG ContextFlags,
    _Out_ PULONG ContextLength
    );


NTSYSAPI
NTSTATUS
NTAPI
RtlInitializeExtendedContext(
    _Out_ PVOID Buffer,
    _In_ ULONG ContextFlags,
    _Out_ PCONTEXT_EX * ContextEx
    );


NTSYSAPI
PCONTEXT
NTAPI
RtlLocateLegacyContext(
    _In_ PCONTEXT_EX ContextEx,
    _Out_opt_ PULONG Length
    );


NTSYSAPI
PVOID
NTAPI
RtlLocateExtendedFeature(
    _In_ PCONTEXT_EX ContextEx,
    _In_ ULONG FeatureId,
    _Out_opt_ PULONG Length
    );


NTSYSAPI
ULONG64
NTAPI
RtlGetExtendedFeaturesMask(
    _In_ PCONTEXT_EX ContextEx
    );


NTSYSAPI
VOID
NTAPI
RtlSetExtendedFeaturesMask(
    _Out_ PCONTEXT_EX ContextEx,
    _In_ ULONG64 FeatureMask
    );


#endif // (NTDDI_VERSION >= NTDDI_WIN7)

#ifdef __cplusplus
}
#endif


#endif // _APISETXSTATE_
