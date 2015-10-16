 
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//

//
// API Set Contract:
//
//    api-ms-win-gaming-tcui-l1-1-0
//
// Abstract:
//
//    This header file provides API function signatures for gaming related  
//    TCUI APIs.
//

#ifdef MSC_VER
#pragma once
#endif

#ifndef _GAMING_TCUI_EXT_
#define _GAMING_TCUI_EXT_


#if NTDDI_VERSION >= NTDDI_THRESHOLD

#include <apiset.h>
#include <apisetcconv.h>
#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <windows.h>
#endif

#include <winstring.h>

/* APISET_NAME: api-ms-win-gaming-tcui-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_GAMING_TCUI_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_GAMING_TCUI_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)



#if defined(__cplusplus)
extern "C" {
#endif

typedef VOID (WINAPI * GameUICompletionRoutine) (
    _In_ HRESULT returnCode,
    _In_ void* context
    );

typedef VOID (WINAPI * PlayerPickerUICompletionRoutine) (
    _In_ HRESULT returnCode,
    _In_ void* context,
    _In_reads_(selectedXuidsCount) const HSTRING* selectedXuids,
    _In_ size_t selectedXuidsCount
    );

HRESULT
WINAPI
ShowGameInviteUI(
    _In_ HSTRING serviceConfigurationId,
    _In_ HSTRING sessionTemplateName,
    _In_ HSTRING sessionId,
    _In_ HSTRING invitationDisplayText,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void * context
    );


HRESULT
WINAPI
ShowPlayerPickerUI(
    _In_ HSTRING promptDisplayText,
    _In_reads_(xuidsCount) const HSTRING * xuids,
    _In_ size_t xuidsCount,
    _In_reads_opt_(preSelectedXuidsCount) const HSTRING * preSelectedXuids,
    _In_ size_t preSelectedXuidsCount,
    _In_ size_t minSelectionCount,
    _In_ size_t maxSelectionCount,
    _In_ PlayerPickerUICompletionRoutine completionRoutine,
    _In_opt_ void * context
    );


HRESULT
WINAPI
ShowProfileCardUI(
    _In_ HSTRING targetUserXuid,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void * context
    );


HRESULT
WINAPI
ShowChangeFriendRelationshipUI(
    _In_ HSTRING targetUserXuid,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void * context
    );


HRESULT
WINAPI
ShowTitleAchievementsUI(
    _In_ UINT32 titleId,
    _In_ GameUICompletionRoutine completionRoutine,
    _In_opt_ void * context
    );


HRESULT
WINAPI
ProcessPendingGameUI(
    _In_ BOOL waitForCompletion
    );


BOOL
WINAPI
TryCancelPendingGameUI(
    );



#if defined(__cplusplus)
} // end extern "C"
#endif // defined(__cplusplus)


#endif // NTDDI_VERSION >= NTDDI_THRESHOLD

#endif // _GAMING_TCUI_EXT_
