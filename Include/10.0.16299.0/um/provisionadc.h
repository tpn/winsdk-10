//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

#pragma once

#ifndef _PROVISIONADC_H_
#define _PROVISIONADC_H_

/*

The Microsoft-portion of ADC will look for the following Registry value
to identify which DLL to load ADC-export APIs:

[HKEY_LOCAL_MACHINE\Software\OEM\ADC]
"AutoDataConfigDll":reg_expand_sz:"<full path to DLL>"

*/
#define OEM_AUTODATACONFIG_ROOT_KEY       HKEY_LOCAL_MACHINE
#define OEM_AUTODATACONFIG_REG_PATH       L"Software\\OEM\\ADC"
#define OEM_AUTODATACONFIG_DLL_PATH       L"AutoDataConfigDll"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef WINAPI
#define WINAPI __stdcall
#endif

typedef enum PROVISION_BOOTSTATE {
/* Uninitialized or unknown state */
    PROVISION_BOOTSTATE_UNKNOWN  = 0,

/* The very first boot of the device */
    PROVISION_BOOTSTATE_COLDBOOT = 128, 

/* Any boot after the first -- the most common case. */
    PROVISION_BOOTSTATE_WARMBOOT = 512,
} PROVISION_BOOTSTATE; 


/// <summary>
/// Called during first boot (cold boot) before OOBE.
/// * This API must not trigger UI.
/// * This API will not be called if the UICC/SIM is not ready
///   during first boot.
/// </summary>
/// <param name="state">
///     Currently, should only be PROVISION_BOOTSTATE_COLDBOOT.
/// </param>
/// <returns>
///     <para>Returns HRESULT type</para>
/// </returns>
HRESULT WINAPI Provision(PROVISION_BOOTSTATE state);

/// <summary>
/// ProvisionUi will only be called when both the UICC (SIM) and the Start 
/// screen are ready.
/// </summary>
/// <param name="state">
///     Enum value indicate the type of boot. ProvisionUi may be passed either
///     of the following boot states:
///     PROVISION_BOOTSTATE_COLDBOOT
///     PROVISION_BOOTSTATE_WARMBOOT
/// </param>
/// <param name="cchUri">
///     [in] Size, in characters of the szUri buffer.
/// </param>
/// <param name="szUri">
///     [out]  Upon success, if necessary, a URI indicating an Application
///     the user can launch via a Toast message.
/// </param>
/// <param name="pAppGuid">
///     [out] Upon success, if necessary, the GUID of the Application that
///     is the target of the Toast message.
/// </param>
/// <param name="pfUseApp">
///     [out] Upon success, set to TRUE to indicate that the Microsoft 
///     portion of ADC should display a Toast message directing the user
///     to launch an App.
/// </param>
/// <returns>
///     <para>Returns HRESULT type</para>
/// </returns>
HRESULT WINAPI ProvisionUi(
                           PROVISION_BOOTSTATE state,
                           DWORD               cchUri,
    _Out_writes_z_(cchUri) wchar_t*            szUri,
    _Out_                  GUID*               pAppGuid,
    _Out_                  BOOL*               pfUseApp
);

#ifdef __cplusplus
}
#endif

#endif // _PROVISIONADC_H

