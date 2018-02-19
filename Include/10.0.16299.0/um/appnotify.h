 
/********************************************************************************
*                                                                               *
* psmapp.h - ApiSet Contract for api-ms-win-core-psm-app-l1                     *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifndef _APISET_PSMAPPNOTIFY_H_
#define _APISET_PSMAPPNOTIFY_H_

#include <apiset.h>
#include <apisetcconv.h>

#ifdef _CONTRACT_GEN        // Header(s) needed for contract generation only.
#include <windows.h>

#define PSM_APP_API_HOST
#endif

/* APISET_NAME: api-ms-win-core-psm-appnotify-l1 */
/* APISET_TAG: public */

#if !defined(RC_INVOKED)

#ifndef _APISET_PSM_APP_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_PSM_APP_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#undef APICONTRACT
#ifndef PSM_APP_API_HOST
#define APICONTRACT         DECLSPEC_IMPORT
#else
#define APICONTRACT
#endif

#pragma region Application Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef
VOID
(*PAPPSTATE_CHANGE_ROUTINE) (
    _In_ BOOLEAN Quiesced,
    _In_ PVOID Context
    );

typedef struct _APPSTATE_REGISTRATION *PAPPSTATE_REGISTRATION;


#if (NTDDI_VERSION >= NTDDI_WINBLUE)

APICONTRACT
ULONG
NTAPI
RegisterAppStateChangeNotification(
    _In_ PAPPSTATE_CHANGE_ROUTINE Routine,
    _In_opt_ PVOID Context,
    _Out_ PAPPSTATE_REGISTRATION * Registration
    );


APICONTRACT
VOID
NTAPI
UnregisterAppStateChangeNotification(
    _Inout_ PAPPSTATE_REGISTRATION Registration
    );


#endif // (NTDDI_VERSION >= NTDDI_WINBLUE)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _APISET_PSMAPPNOTIFY_H_
