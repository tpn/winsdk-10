 
/********************************************************************************
*                                                                               *
* oobenotification.h - API Set Contract for api-ms-win-oobe-notification-l1      *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
//
// API Set Contract:
//
//    api-ms-win-oobe-notification-l1
//
// Abstract:
//
//    This header file provides API function signatures for
//    information regarding the completion of Windows Welcome
//    experience, also known as OOBE.
//
//    These signatures are published for external use by
//    application developers.
//
//    Clients of this functionality should include this header
//    and link against the published kernel32.lib.
//
//


#if defined(_MSC_VER)

#if _MSC_VER > 1000
#pragma once
#endif
#endif // defined(_MSC_VER)


#if defined(_CONTRACT_GEN)
#include <nt.h>
#include <minwindef.h>
#endif // defined(_CONTRACT_GEN)

/* APISET_NAME: api-ms-win-oobe-notification-l1 */
/* APISET_TAG: public */

#if !defined(RC_INVOKED)

#ifndef _APISET_OOBENOTIFICATION_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINBLUE
#define _APISET_OOBENOTIFICATION_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if (NTDDI_VERSION >= NTDDI_WINBLUE)

typedef
VOID
(CALLBACK *OOBE_COMPLETED_CALLBACK)(
    _In_opt_ PVOID CallbackContext
    );

_Check_return_ _Success_(return != FALSE)
BOOL
WINAPI
OOBEComplete(
    _Out_ PBOOL OOBEComplete
    );


_Check_return_ _Success_(return != FALSE)
BOOL
WINAPI
RegisterWaitUntilOOBECompleted(
    _In_ OOBE_COMPLETED_CALLBACK OOBECompletedCallback,
    _In_opt_ PVOID CallbackContext,
    _Out_ PVOID * WaitHandle
    );


_Check_return_ _Success_(return != FALSE)
BOOL
WINAPI
UnregisterWaitUntilOOBECompleted(
    _In_ PVOID WaitHandle
    );


#endif // (NTDDI_VERSION >= NTDDI_WINBLUE)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#ifdef __cplusplus
}
#endif
