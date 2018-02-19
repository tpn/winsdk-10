//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

#pragma once

#ifndef _ICS_PUBLIC_API_H_
#define _ICS_PUBLIC_API_H_

// ICS Service States
typedef enum _ICS_SHARING_STATE
{
    ICSSS_Unknown = 0,
    ICSSS_Error,
    ICSSS_Sharing,
    ICSSS_NotSharing,
    ICSSS_SharingInProgress,
    ICSSS_NotSharingInProgress,

    ICSSS_Last
} ICS_SHARING_STATE, *PICS_SHARING_STATE;

// Notification Types for Registered Callbacks
typedef enum _ICS_NOTIFICATION_TYPE
{
    ICSNT_Unknown = 0,
    ICSNT_SharingStarted,
    ICSNT_SharingStopped,

} ICS_NOTIFICATION_TYPE, *PICS_NOTIFICATION_TYPE;

typedef VOID(*PICS_NOTIFICATION_CALLBACK)(PVOID, ICS_NOTIFICATION_TYPE, PVOID);

#ifdef __cplusplus
EXTERN_C {
#endif

// Legacy wrapper for TetheringRegisterNotification
HRESULT IcsRegisterNotification(
    __in PICS_NOTIFICATION_CALLBACK pCallback,
    __in_opt PVOID pContext,
    __out PDWORD pdwCookie);

// Legacy wrapper for TetheringUnregisterNotification
VOID IcsUnregisterNotification(
    __in DWORD dwCookie
    );


// Legacy wrapper for TetheringGetSharingState
HRESULT IcsGetSharingState(
    __out PICS_SHARING_STATE pState
    );
    
#ifdef __cplusplus
}
#endif

#endif // _ICS_PUBLIC_API_H_
