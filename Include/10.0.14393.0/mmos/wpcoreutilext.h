//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

#pragma once

#include <windows.h>

//Bitmask values for configurable options of the reset process.
typedef enum _RESET_FLAG
{
    RESET_NO_FLAGS = 0x00000000,

    //SD card will be wiped during the reset
    RESET_WIPE_SD = 0x00000001,

    //Selected data on the user store will be preserved during the reset
    RESET_PRESERVE_USER_STORE_DATA = 0x00000002,

    //Used in conjuction with internal device brick to allow certain reset actions
    RESET_DO_NOT_BRICK = 0x00000004
} RESET_FLAG;

// ResetPhone
//
// Resets phone and deletes user data. Will return status once the reset has 
// been prepared, then  will wait on an optional event prior to resetting.
// 
// This API requires the ID_CAP_RESET_PHONE capability to call. 
//
// PARAMS
//     bWipeStorageCard - If TRUE, then the storage card(s) will also be formatted. 
//
//     hResetEvent -      Optional event, if passed the service will wait on after 
//                        returning status before restarting.
//
//     dwResetTimeout -   The timeout for hResetEvent in milliseconds (max 2 min).
//

EXTERN_C HRESULT WINAPI
ResetPhone (
    _In_ BOOL bWipeStorageCard,
    _In_ HANDLE hResetEvent,
    _In_ DWORD dwResetTimeout
);


//  ResetPhoneEx
//
//  Resets phone and deletes user data in accordance with the given flags. 
//  Posts a WNF message prior to reset to allow callers to relay any status 
//  off the phone. This function will not normally return.
//
//  PARAMS
//      dwFlags -           Configurable options of the reset process
//      hResetEvent -       An optional event - if passed, the function will 
//                          wait on this handle for up to dwResetTimeout 
//                          milliseconds after posting the WNF status message. 
//      dwResetTimeout -    The timeout for hResetEvent

EXTERN_C HRESULT WINAPI
ResetPhoneEx (
    _In_ DWORD dwFlags,
    _In_ HANDLE hResetEvent,
    _In_ DWORD dwResetTimeout
);


//  RebootToFlashingMode
//
//  Reboot the phone into FFU mode to allow it to be re-imaged. This function will not normally return.
//
//  PARAMS
//      hResetEvent -       An optional event - if passed, the function will wait on
//                          this handle for up to dwResetTimeout milliseconds after posting
//                          the WNF status message. 
//      dwResetTimeout -    The timeout for hResetEvent
//

EXTERN_C HRESULT WINAPI
RebootToFlashingMode (
    _In_ HANDLE hResetEvent,
    _In_ DWORD dwResetTimeout
);


//  RebootToUosFlashing
//
//  Reboot the phone into the UpdateOS-based FFU mode to allow it to be re-imaged.
//  This function will not normally return.
//
//  PARAMS
//      hResetEvent -       An optional event - if passed, the function will wait on
//                          this handle for up to dwResetTimeout milliseconds after posting
//                          the WNF status message. 
//      dwResetTimeout -    The timeout for hResetEvent
//

EXTERN_C HRESULT WINAPI
RebootToUosFlashing (
    _In_ HANDLE hResetEvent,
    _In_ DWORD dwResetTimeout
);
