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
/*++
THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
PARTICULAR PURPOSE.

--*/

#ifndef _WP8_RIL_H_
#define _WP8_RIL_H_

#include <windows.h>
#include <RilAPItypes.h>

#ifdef __cplusplus
extern "C" {
#endif

//
// Macro to extract notification class from notification code
//
#define NCLASS_FROM_NOTIFICATION(code)              ((code) & NOTIFICATION_CLASS_MASK)

typedef HANDLE HRIL, *LPHRIL;

typedef void (CALLBACK *RILRESULTCALLBACK)(
    HRIL            hRil,         // @parm RIL handle to current RIL instance
    DWORD           dwCode,       // @parm result code
    LPVOID          usersContext, // @parm users context assigned by the call that originated this response
    const void*     lpData,       // @parm data associated with the notification
    DWORD           cbData,       // @parm size of the strcuture pointed to lpData
    LPVOID          lpParam       // @parm parameter passed to <f RIL_Initialize>
);              

typedef void (CALLBACK *RILNOTIFYCALLBACK)(
    HRIL  hRil,             // @parm RIL handle to current RIL instance
    DWORD dwCode,           // @parm notification code
    const void* lpData,     // @parm data associated with the notification
    DWORD cbData,           // @parm size of the strcuture pointed to lpData
    LPVOID lpParam          // @parm parameter passed to <f RIL_Initialize> 
);

// BUGBUG: we don't have any definition in the doc for these APIs yet.
// RIL_Initialize is a RIL proxy API that initializes the RIL for use by a client. The RIL proxy implements it as a CreateFile to the MSRIL followed by configuration. It does not directly result in a request to the IHVRIL.
HRESULT RIL_Initialize(
    _In_ DWORD dwIndex,                      // @param index of the RIL port to use (e.g., 1 for RIL1:)
    _In_ RILRESULTCALLBACK pfnResult,        // @param function result callback
    _In_ RILNOTIFYCALLBACK pfnNotify,        // @param notification callback
    _In_ DWORD *lpdwNotifications,           // @param array of notifications to be enabled for this client
    _In_ DWORD dwNotificationCount,          // @param the number of notifications to be enabled for this client    
    _In_ LPVOID lpParam,                     // @param custom parameter passed to result and notification callbacks
    _In_z_ WCHAR* pwszClientName,            // @param the name of the RIL client
    _Out_ HRIL* lphRil                       // @param returned handle to RIL instance
);

// de-initializes the RIL, which ultimately results in a CloseHandle to the MSRIL file handle held by the RIL proxy. It does not directly result in a request to the IHVRIL.
HRESULT RIL_Deinitialize(
    HRIL hRil                           // @param handle to an RIL instance returned by <f RIL_Initialize>
);

// returns the number of logical modem devices (instances of the RIL driver). This function is implemented in the RIL proxy and does not result in a RIL_IOControl request.
HRESULT RIL_GetNumberOfModems(
    DWORD *lpdwNumModem 
);

// enables additional classes of notifications for a client. This is an asynchronous call, but it is implemented internally within the RIL proxy and MSRIL, and does not result in a RIL_IOControl request to IHVRIL. 
HRESULT RIL_EnableNotifications(
    HRIL hRil,                          // @param handle to RIL instance returned by <f RIL_Initialize>
    LPVOID usersContext,                // @param given returned the call back function to identify this particular call
    DWORD *lpdwNotifications,           // @param array of notifications to be enabled for this client
    DWORD dwNotificationCount           // @param the number of notifications to be enabled for this client    
);

// disables classes of notifications for a client. This is an asynchronous call, but it is implemented internally within the RIL proxy and MSRIL, and does not result in a RIL_IOControl request to IHVRIL.
HRESULT RIL_DisableNotifications(
    HRIL hRil,                          // @param handle to RIL instance returned by <f RIL_Initialize>
    LPVOID usersContext,                // @param given returned the call back function to identify this particular call
    DWORD *lpdwNotifications,           // @param array of notifications to be disable for this client
    DWORD dwNotificationCount           // @param the number of notifications to be disable for this client    
);


//////////////////////////////////////////////////
// Asynchronous Functions and Notifications
//////////////////////////////////////////////////

// retrieves the driver version information.
HRESULT RIL_GetDriverVersion(HRIL hRil, LPVOID lpContext, DWORD dwMinVersion, DWORD dwMaxVersion);
    // RIL_COMMAND_GETDRIVERVERSION
    // In: RILGETDRIVERVERSIONPARAMS
    // Async out: DWORD

// queries to retrieve specific device capabilities.
HRESULT RIL_GetDevCaps(HRIL hRil, LPVOID lpContext, DWORD dwCapsType);
    // RIL_COMMAND_GETDEVCAPS
    // In: DWORD
    // Async out: varies
    // dwCapsType    Specifies the capability to be queried. These are itemized in the following sections.

// returns specific device information as requested by the caller
HRESULT RIL_GetDeviceInfo(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILDEVICEINFORMATION dwId);
    // RIL_COMMAND_GETDEVICEINFO
    // In: DEVICEINFO_PARAMS
    // Async out: array of WCHAR


//////////////////////////////////////////////////
// Device State
//////////////////////////////////////////////////

// retrieves the current equipment state. This function can be called to determine both if the radio is on and what features are ready.
HRESULT RIL_GetEquipmentState(HRIL hRil, LPVOID lpContext);
    // RIL_COMMAND_GETEQUIPMENTSTATE
    // In: none
    // Async out: RILEQUIPMENTSTATE

// sets the radio equipment state. It is called to turn the radio on or off. It is also used to quiesce the driver and modem and save all state as part of a system shutdown.
HRESULT RIL_SetEquipmentState(HRIL hRil, LPVOID lpContext, DWORD dwEquipmentState);
//RIL_COMMAND_SETEQUIPMENTSTATE
    // In: DWORD
    // Async out: none (status only)

// used to enable or disable certain notifications at the modem. When the application processor goes into a low power state with the backlight off it can turn off certain notifications such as signal quality reports in order to save current. When a notification is transitioned from enable to disable. The modem shall keep track of the change in notifications even if they are disabled. If the source of a notification at the modem side changes state while disabled, it shall send the new state immediately after being enabled.
HRESULT RIL_SetNotificationFilterState(HRIL hRil, LPVOID lpContext, DWORD dwFilterMask, DWORD dwFilterState);
    // RIL_COMMAND_SETNOTIFICATIONFILTERSTATE
    // In: SETNOTIFICATIONFILTERSTATE_PARAMS
    // Async out: none (status only)

// retrieves the current notification filter state.
HRESULT RIL_GetNotificationFilterState(HRIL hRil, LPVOID lpContext);
    // RIL_COMMAND_GETNOTIFICATIONFILTERSTATE
    // In: None
    // Async Out: DWORD dwFilterStateMask 

// requests a modem reset.
HRESULT RIL_ResetModem(HRIL hRil, LPVOID lpContext, RILRESETMODEMKIND dwResetKind);
    // RIL_COMMAND_RESETMODEM
    // In: RILRESETMODEMKIND
    // Async out: none (status only)

HRESULT RIL_ResetModem_V2(HRIL hRil, LPVOID lpContext, const RILRESETMODEMPARAMS *params);
    // RIL_COMMAND_RESETMODEM
    // In: RILRESETMODEMPARAMS
    // Async out: none (status only)

//////////////////////////////////////////////////
// UICC Slots and Cards
//////////////////////////////////////////////////

// returns information about the number of UICC slots and the state of each.
HRESULT RIL_EnumerateSlots(HRIL hRil, LPVOID lpContext);
    // RIL_COMMAND_ENUMERATESLOTS
    // In: none
    // Async out: RILUICCSLOTINFO

// retrieves information about the UICC card in a specified slot.
HRESULT RIL_GetCardInfo(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex);
    // RIL_COMMAND_GETCARDINFO
    // In: DWORD
    // Async out: RILUICCCARDINFO

// enables/disables power to a specified UICC card slot.
HRESULT RIL_SetSlotPower(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, BOOL fPowerOn);
        // RIL_COMMAND_SETSLOTPOWER
    // In: SETSLOTPOWER_PARAMS
    // Async out: none (status only)
    
// retrieves information about a specified UICC file.
HRESULT RIL_GetUiccRecordStatus(HRIL hRil, LPVOID lpContext,  const RILUICCFILEPATH *lpFilePath);
    // RIL_COMMAND_GETUICCRECORDSTATUS
    // In: RILUICCFILEPATH
    // Async out: RILUICCRECORDSTATUS

// sends a specified restricted command to the UICC.
HRESULT RIL_SendRestrictedUiccCmd(HRIL hRil, LPVOID lpContext, RILUICCCOMMAND dwCommand, const RILUICCCMDPARAMETERS *lpParameters, const BYTE *lpbData, DWORD dwSize, const RILUICCLOCKCREDENTIAL *lpLockVerification);
    // RIL_COMMAND_SENDRESTRICTEDCOMMAND
    // In: SENDRESTRICTEDUICCCMD_PARAMS
    // Async out: RILUICCRESPONSE

// specifies a set of files to RIL driver for which data change notifications are expected. Each call replaces the old list of files watched. On bootup or on UICC power toggle, the RIL driver will not persist the file list. To watch the files, the API will have to be called in these conditions.
HRESULT RIL_WatchUiccFileChange(HRIL hRil, LPVOID lpContext, const RILUICCFILES * lpUiccFiles);
    // RIL_COMMAND_WATCHUICCFILECHANGE
    // In: RILUICCFILES
    // Async out: RILUICCRESPONSE

// returns information pertaining to an UICC application's PRL ID.
HRESULT RIL_GetUiccPRLID(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
    // RIL_COMMAND_GETUICCPRLID
    // In: HUICCAPP
    // Async out: DWORD

// retrieves the International Mobile Subscriber Identity (IMSI) of the specified UICC application.
HRESULT RIL_GetIMSI(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
    // RIL_COMMAND_GETIMSI
    // In: HUICCAPP
    // Async out: array characters

// retrieves the subscriber numbers from the specified UICC application.
HRESULT RIL_GetSubscriberNumbers(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
    // RIL_COMMAND_GETSUBSCRIBERNUMBERS
    // In: HUICCAPP
    // Async out: RILUICCSUBSCRIBERNUMBERS

//retrieves the Answer To Reset message that was received from a UICC card in a specified slot
HRESULT RIL_GetUiccATR(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex);
    // RIL_COMMAND_GETUICCATR
    // In: DWORD
    // Async out: RILUICCATRINFO

//opens a logical channel on the specified UICC by selecting a UICC application using its application identifier
HRESULT RIL_OpenUiccLogicalChannel(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, DWORD dwChannelGroup, DWORD dwAppIdLength, const BYTE *pbAppId, DWORD dwSelectP2Arg);
    // RIL_COMMAND_OPENUICCLOGICALCHANNEL
    // In: RILOPENUICCLOGICALCHANNELPARAMS
    // Async out: RILOPENUICCLOGICALCHANNELINFO

//closes an open logical channel on a specified UICC card
HRESULT RIL_CloseUiccLogicalChannel(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, DWORD dwChannelId);
    // RIL_COMMAND_CLOSEUICCLOGICALCHANNEL
    // In: RILCLOSEUICCLOGICALCHANNELPARAMS
    // Async out: none (status only)

//closes all open logical channels in a specified group on a specified UICC card
HRESULT RIL_CloseUiccLogicalChannelGroup(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, DWORD dwChannelGroup);
    // RIL_COMMAND_CLOSEUICCLOGICALCHANNELGROUP
    // In: RILCLOSEUICCLOGICALCHANNELGROUPPARAMS
    // Async out: none (status only)

//exchanges an Application Protocol Data Unit with a specified UICC card over a specified channel
HRESULT RIL_ExchangeUiccAPDU(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, DWORD dwChannelId, DWORD dwAPDULength, const BYTE *bAPDU);
    // RIL_COMMAND_EXCHANGEUICCAPDU
    // In: RILEXCHANGEUICCAPDUPARAMS
    // Async out: RILEXCHANGEUICCAPDURESPONSE

/////////////////////////////////////
// Locking and UICC Security
/////////////////////////////////////

// queries the state of a UICC lock, asynchronously returning a RILUICCLOCKSTATE. In the case of a virtual R-UIM and applications which do not have any lock associated with them (indicated by key references set to 0s in RILUICCAPPINFO), the asynchronous result will indicate an error RIL_E_INVALIDUICCKEYREF.
HRESULT RIL_GetUiccLockState(HRIL hRil, LPVOID lpContext, const RILUICCLOCK *lpRilUiccLock);
    // RIL_COMMAND_GETUICCLOCKSTATE
    // In: RILUICCLOCK
    // Async out: RILUICCLOCKSTATE

// queries a service to get the service lock, if any. For services such as fixed dialing this represents the PIN2 state for that operation.
HRESULT RIL_GetUiccServiceLock(HRIL hRil, LPVOID lpContext, const RILUICCSERVICE *lpService);
    // RIL_COMMAND_GETUICCSERVICE
    // In: RILUICCSERVICE
    // Async out: RILUICCLOCK

HRESULT RIL_VerifyUiccLock(HRIL hRil, LPVOID lpContext, const RILUICCLOCKCREDENTIAL *lpVerification);
    // RIL_COMMAND_VERIFYUICCLOCK
    // In: RILUICCLOCKCREDENTIAL
    // Async out: none (status only)

// enables or disables a UICC lock.
HRESULT RIL_SetUiccLockEnabled(HRIL hRil, LPVOID lpContext, const RILUICCLOCKCREDENTIAL *lpLockCredential, BOOL fEnable);
    // RIL_COMMAND_SETUICCLOCKENABLED
    // In: RILSETUICCLOCKENABLED_PARAMS
    // Async out: none (status only)

// unblocks a UICC lock that has been blocked by too many failed verification attempts and sets a new PIN password.
HRESULT RIL_UnblockUiccLock(HRIL hRil, LPVOID lpContext, const RILUICCLOCKCREDENTIAL *lpLockCredential, LPCSTR lpszNewPassword);
    // RIL_COMMAND_UNBLOCKUICCLOCK
    // In: RILUNBLOCKUICCLOCK_PARAMS
    // Async out: none (status only)

// changes the lock verification password. (This is the PIN password; there is no API to change the PUK password.)
HRESULT RIL_ChangeUiccLockPassword(HRIL hRil, LPVOID lpContext, const RILUICCLOCKCREDENTIAL *lpLockCredential, LPCSTR lpszNewPassword);
    // RIL_COMMAND_CHANGEUICCLOCKPASSWORD
    // In: CHANGEUICCLOCKPASSWORD_PARAMS
    // Async out: none (status only)

// gets the personalization check state of a UICC application.
HRESULT RIL_GetUiccAppPersoCheckState(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
    // RIL_COMMAND_GETUICCAPPPERSOCHECKSTATE
    // In: HUICCAPP
    // Async out: RILUICCAPPPERSOCHECKSTATUS

// gets the deactivation state information for a specific perso feature.
HRESULT RIL_GetPersoDeactivationState(HRIL hRil, LPVOID lpContext, DWORD dwPersoFeature);
    // RIL_COMMAND_GETPERSODEACTIVATIONSTATE
    // In: DWORD
    // Async out: RILPERSODEACTIVATIONSTATE

// deactivates a perso lock on the device.
HRESULT RIL_DeactivatePerso(HRIL hRil, LPVOID lpContext, DWORD dwPersoFeature, LPCSTR lpszPassword);
    // RIL_COMMAND_DEACTIVATEPERSO
    // In: DEACTIVATEPERSO_PARAMS
    // Async out: none (status only)

///////////////////////
// FDN
/////////////////////
HRESULT RIL_GetUiccServiceState(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILUICCSERVICESERVICE dwService);
    // RIL_COMMAND_GETUICCSERVICESTATE
    // In: RILUICCSERVICE
    // Async out: RILUICCSERVICESTATE

HRESULT RIL_SetUiccServiceState(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILUICCSERVICESERVICE dwService, const RILUICCLOCKCREDENTIAL *lpLockCredential, BOOL fEnable);
    // RIL_COMMAND_SETUICCSERVICESTATE
    // In: RILUICCSERVICEPARAMS
    // Async out: RILUICCSERVICESTATE


////////////////////////
// Phonebook
////////////////////////

// reads phonebook entries from the specified range of indices of the current storage location.
HRESULT RIL_ReadPhonebookEntries(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILPHONEENTRYSTORELOCATION dwStoreLocation, DWORD dwStartIndex, DWORD dwEndIndex);
    // RIL_COMMAND_READPHONEBOOKENTRIES
    // In: READPHONEBOOKENTRIES_PARAMS
    // Async out: array of RILPHONEBOOKENTRY

// writes a phone book entry to the current storage location.
HRESULT RIL_WritePhonebookEntry(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILPHONEENTRYSTORELOCATION dwStoreLocation, const RILPHONEBOOKENTRY *lpEntry, const RILUICCLOCKCREDENTIAL *lpLockVerification);
    // RIL_COMMAND_WRITEPHONEBOOKENTRY
    // In: WRITEPHONEBOOKENTRY_PARAMS
    // Async out: none (status only)

// deletes a phonebook entry from the current storage location.
HRESULT RIL_DeletePhonebookEntry(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILPHONEENTRYSTORELOCATION dwStoreLocation, DWORD dwIndex, const RILUICCLOCKCREDENTIAL *lpLockVerification);
    // RIL_COMMAND_DELETEPHONEBOOKENTRY
    // In: DELETEPHONEBOOKENTRY_PARAMS
    // Async out: none (status only)

// retrieves the current phonebook options.
HRESULT RIL_GetPhonebookOptions(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILPHONEENTRYSTORELOCATION dwStoreLocation);
    // RIL_COMMAND_GETPHONEBOOKOPTIONS
    // In: GETPHONEBOOKOPTIONS_PARAMS
    // Async out: RILPHONEBOOKINFO

// retrieves the additional numbers.
HRESULT RIL_GetAllAdditionalNumberStrings(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
    // RIL_COMMAND_GETALLADDITIONALNUMBERSTRINGS
    // In: GETALLADDITIONALNUMBERSTRINGS_PARAMS
    // Async out: RILPHONEBOOKADDITIONALNUMBERINFO

// writes an additional number string for the UICC phonebook
HRESULT RIL_WriteAdditionalNumberString(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, const RILPHONEBOOKADDITIONALNUMBERSTRING *lpRilPBANS);
    // RIL_COMMAND_WRITEADDITIONALNUMBERSTRING
    // In: RILWRITEADDITIONALNUMBERSTRINGPARAMS
    // Async out: none (status only)

// deletes an additional number string for the UICC phonebook
HRESULT RIL_DeleteAdditionalNumberString(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwNumId);
    //RIL_COMMAND_DELETEADDITIONALNUMBERSTRING
    // In: RILDELETEADDITIONALNUMBERSTRINGPARAMS
    // Async out: none (status only)

// retrieves all the emergency numbers known by the modem. This includes emergency numbers provisioned in the modem itself and all emergency numbers defined by the UICC cards attached to that modem.
HRESULT RIL_GetAllEmergencyNumbers(HRIL hRil, LPVOID lpContext);
    // RIL_COMMAND_GETALLEMERGENCYNUMBERS
    // In: none
    // Async out: RILEMERGENCYNUMBERSLIST 


////////////////////////////////////////
// Radio Network Registration
////////////////////////////////////////

// specifies the configuration to be used by the RIL instance.  This setting persists until the function is called again.  Default configuration index used is 0.
HRESULT RIL_SetRadioConfiguration(HRIL hRil, LPVOID lpContext, DWORD dwConfigIdx);
    // RIL_COMMAND_SETRADIOCONFIGURATION
    // In: DWORD
    // Async out: none (status only)

// gets the current configuration used by the RIL instance.
HRESULT RIL_GetRadioConfiguration(HRIL hRil, LPVOID lpContext);
    // RIL_COMMAND_GETRADIOCONFIGURATION
    // In: none
    // Async out: DWORD

// assigns subscription configuration parameters to an executor.
HRESULT RIL_SetExecutorConfig(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, const RILEXECUTORCONFIG *lpRilExecutorConfig);
    // RIL_COMMAND_SETEXECUTORCONFIG
    // In: SETEXECUTORCONFIG_PARAMS
    // Async out: none (status only)

// retrieves the configuration parameters that are currently associated with an executor.
HRESULT RIL_GetExecutorConfig(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETEXECUTORCONFIG
    // In: DWORD
    // Async out: RILEXECUTORCONFIG

// assigns user preference for radio system selection to an executor.
HRESULT RIL_SetSystemSelectionPrefs_V1(HRIL hRil, LPVOID lpContext, RILSETSYSTEMSELECTIONPREFSFLAG dwFlags, const RILSYSTEMSELECTIONPREFS_V1 *lpRilSystemSelectionPrefs);
    // RIL_COMMAND_SETSYSTEMSELECTIONPREFS
    // In: SETSYSTEMSELECTIONPREFS_PARAMS_V1
    // Async out: none (status only)

// assigns user preference for radio system selection to an executor.
HRESULT RIL_SetSystemSelectionPrefs(HRIL hRil, LPVOID lpContext, RILSETSYSTEMSELECTIONPREFSFLAG dwFlags, const RILSYSTEMSELECTIONPREFS *lpRilSystemSelectionPrefs);
    // RIL_COMMAND_SETSYSTEMSELECTIONPREFS
    // In: SETSYSTEMSELECTIONPREFS_PARAMS
    // Async out: none (status only)

// retrieves the current system selection preferences from the RIL.
HRESULT RIL_GetSystemSelectionPrefs(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETSYSTEMSELECTIONPREFS
    // In: DWORD
    // Async out: RILSYSTEMSELECTIONPREFS

// request RIL driver to do an active radio scan, and returns the list of available operators.
HRESULT RIL_GetOperatorList(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, DWORD dwSystemTypes);
    // RIL_COMMAND_GETOPERATORLIST
    // In: GETOPERATORLIST_PARAMS
    // Async out: array of RILOPERATORINFO

// retrieves the list of preferred operators.
HRESULT RIL_GetPreferredOperatorList(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILGETPREFERENCEDOPERATORLISTFORMAT dwFormat);
    // RIL_COMMAND_GETPREFERREDOPERATORLIST
    // In: GETPREFERREDOPERATORLIST_PARAMS
    // Async out: array of RILOPERATORINFO

// Set the list of preferred operators.
HRESULT RIL_SetPreferredOperatorList(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwPreferredListSize, RILOPERATORNAMES *lpPreferredList);
    // RIL_COMMAND_SETPREFERREDOPERATORLIST
    // In:  RILSETPREFERREDOPERATORLISTPARAMS 
    // Async out:  none (status only)

// retrieves the radio network registration status, for a specified subscription supported by current radio configuration.
HRESULT RIL_GetCurrentRegStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETCURRENTREGSTATUS
    // In: DWORD
    // Async out: RILREGSTATUSINFO


//////////////////////////////////////
// Signal Strength and NITZ
//////////////////////////////////////

// retrieves information about the received signal quality. 
HRESULT RIL_GetSignalQuality(HRIL hRil, LPVOID lpContext, DWORD dwExecutor); 
    // RIL_COMMAND_GETSIGNALQUALITY
    // In: DWORD dwExecutor
    // Async out: array of 1 or 2 RILSIGNALQUALITY structures


////////////////////////////////////////////////////
// Card Application Toolkit (UICC Toolkit)
////////////////////////////////////////////////////

// indicates to the RIL driver that the application processor is ready to handle UICC toolkit events (notably the initial SETUP MENU).
HRESULT RIL_RegisterUiccToolkitService(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex); 
    // RIL_COMMAND_REGISTERUICCTOOLKITSERVICE
    // In: DWORD
    // Async out: none (status only)

// sends the UICC Toolkit Profile to the radio. The sent profile will be stored in the radio/IHVRIL permanent storage and is not sent to the UICC Card until the next reset.
HRESULT RIL_SetUiccToolkitProfile(HRIL hRil, LPVOID lpContext, const RILUICCTOOLKITPROFILE *lpToolkitProfile);
    // RIL_COMMAND_SETUICCTOOLKITPROFILE
    // In: RILSETUICCTOOLKITPROFILEPARAMS
    // Async out: none (status only)

// retrieves the toolkit profile. When called following RIL_SetUiccToolkitProfile, this function returns the profile downloaded and stored in the IHV RIL/modem and not the currently-active profile.
HRESULT RIL_GetUiccToolkitProfile(HRIL hRil, LPVOID lpContext);
    // RIL_COMMAND_GETUICCTOOLKITPROFILE
    // In: DWORD
    // Async out: RILUICCTOOLKITPROFILE

// sends a response to an executed UICC toolkit command.
HRESULT RIL_SendUiccToolkitCmdResponse(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, const LPBYTE pbDetails, DWORD dwDetailSize);
    // RIL_COMMAND_SENDUICCTOOLKITCMDRESPONSE
    // In: RILSENDUICCTOOLKITCMDRESPONSEPARAMS
    // Async out: none (status only)

// sends an envelope command to the UICC. The envelope command is used by the application processor mainly for Menu Selection, Event Download and Call Control.
HRESULT RIL_SendUiccToolkitEnvelope(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, const LPBYTE pbEnvelope, DWORD dwEnvelopeSize);
    // RIL_COMMAND_SENDUICCTOOLKITENVELOPE
    // In: RILSENDUICCTOOLKITENVELOPEPARAMS
    // Async out: none (status only)

/////////////////////////////////////////
// Call Management (Telephony)
/////////////////////////////////////////

// responsible for dialing circuit switched voice calls.
HRESULT RIL_Dial_V1(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, const RILADDRESS *lpraAddress, DWORD dwOptions);
    // RIL_COMMAND_DIAL
    // In: RILDIALPARAMS_V1
    // Async out: DWORD

// responsible for dialing circuit switched or packet switched voice calls.
HRESULT RIL_Dial(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, const RILADDRESS *lpraAddress, DWORD dwOptions, RILCALLTYPE dwType, const LPRILCALLMEDIAOFFERANSWERSET lprcmOfferAnswer);
    // RIL_COMMAND_DIAL
    // In: RILDIALPARAMS_V2
    // Async out: DWORD

// modifies the state of circuit switched calls.
HRESULT RIL_ManageCalls_V1(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILMANAGECALLPARAMSCOMMAND dwCommand, DWORD dwID);
    // RIL_COMMAND_MANAGECALLS
    // In: RILMANAGECALLSPARAMS_V1
    // Async out: none (status only)

// modifies the state of circuit switched or packet switched calls.
HRESULT RIL_ManageCalls_V2(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILMANAGECALLPARAMSCOMMAND dwCommand, DWORD dwID, const LPRILCALLMEDIAOFFERANSWERSET lprcmOfferAnswer);
    // RIL_COMMAND_MANAGECALLS
    // In: RILMANAGECALLSPARAMS_V2
    // Async out: none (status only)

// modifies the state of circuit switched or packet switched calls.
HRESULT RIL_ManageCalls_V3(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILMANAGECALLPARAMSCOMMAND dwCommand, DWORD dwID, const LPRILCALLMEDIAOFFERANSWERSET lprcmOfferAnswer, const LPRILADDRESS lpraAddress);
    // RIL_COMMAND_MANAGECALLS
    // In: RILMANAGECALLSPARAMS_V3
    // Async out: none (status only)

// modifies the state of circuit switched or packet switched calls.
HRESULT RIL_ManageCalls(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILMANAGECALLPARAMSCOMMAND dwCommand, DWORD dwID, const LPRILCALLMEDIAOFFERANSWERSET lprcmOfferAnswer, const LPRILADDRESS lpraAddress, RILCALLRTTACTION dwRTTAction);
    // RIL_COMMAND_MANAGECALLS
    // In: RILMANAGECALLSPARAMS_V3
    // Async out: none (status only)
    
HRESULT RIL_GetCallList(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    //RIL_COMMAND_GETCALLLIST
    // In: DWORD
    // Async out: RILCALLLIST

// controls the modem emergency mode. It is used to exit the CDMA emergency call back mode. It is also used to indicate to one modem in a dual active system that another modem is an emergency mode. 
HRESULT RIL_EmergencyModeControl(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILEMERGENCYMODECONTROLPARAMSCONTROL dwEmergencyModeControl);
    // RIL_COMMAND_EMERGENCYMODECONTROL
    // In: EMERGENCYMODECONTROL_PARAMS
    // Async out: none (status only)

// retrieves current call forwarding rules.
HRESULT RIL_GetCallForwardingSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLFORWARDINGSETTINGSREASON dwReason, BOOL fAllClasses, DWORD dwInfoClasses);
    // RIL_COMMAND_GETCALLFORWARDINGSETTINGS
    // In: GETCALLFORWARDING_PARAMS
    // Async out: array of RILCALLFORWARDINGSETTINGS

// enables or disables the specified call forwarding rule.
HRESULT RIL_SetCallForwardingStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLFORWARDINGSETTINGSREASON dwReason, BOOL fAllClasses, DWORD dwInfoClasses, RILSERVICESETTINGSSTATUS dwStatus);
    // RIL_COMMAND_SETCALLFORWARDINGSTATUS
    // In: SETCALLFORWARDINGSTATUS_PARAMS
    // Async out: none (status only)

// adds a call forwarding rule.
HRESULT RIL_AddCallForwarding(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLFORWARDINGSETTINGSREASON dwReason, const RILCALLFORWARDINGSETTINGS *lpSettings);
    // RIL_COMMAND_ADDCALLFORWARDING
    // In: ADDCALLFORWARDING_PARAMS
    // Async out: none (status only)

// removes a call forwarding rule.
HRESULT RIL_RemoveCallForwarding(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLFORWARDINGSETTINGSREASON dwReason, DWORD dwInfoClasses);
    // RIL_COMMAND_REMOVECALLFORWARDING
    // In: REMOVECALLFORWARDING_PARAMS
    // Async out: none (status only)

// retrieves the status of the specified type of call barring.
HRESULT RIL_GetCallBarringStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLBARRINGSTATUSPARAMSTYPE dwType, BOOL fAllClasses, DWORD dwInfoClasses);
    // RIL_COMMAND_GETCALLBARRINGSTATUS
    // In: GETCALLBARRINGSTATUS_PARAMS
    // Async out: DWORD

// enables or disables the specified type of call barring.
HRESULT RIL_SetCallBarringStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLBARRINGSTATUSPARAMSTYPE dwType, BOOL fAllClasses, DWORD dwInfoClasses, LPCSTR lpszPassword, RILCALLBARRINGSTATUSPARAMSSTATUS dwStatus);
    // RIL_COMMAND_SETCALLBARRINGSTATUS
    // In: SETCALLBARRINGSTATUS_PARAMS
    // Async out: none (status only)

// changes the password for the specified type of call barring.
HRESULT RIL_ChangeCallBarringPassword(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLBARRINGSTATUSPARAMSTYPE dwType, LPCSTR lpwszOldPassword, LPCSTR lpwszNewPassword, LPCSTR lpszConfirmPassword);
    // RIL_COMMAND_CHANGECALLBARRINGPASSWORD
    // In: CHANGECALLBARRINGPASSWORD_PARAMS
    // Async out: none (status only)

// retrieves information classes for which call waiting is currently enabled.
HRESULT RIL_GetCallWaitingSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, BOOL fAllClasses, DWORD dwInfoClasses);
    // RIL_COMMAND_GETCALLWAITINGSETTINGS
    // In: GETCALLWAITINGSETTINGS_PARAMS        
    // Async out: DWORD

// enables or disables call waiting for the specified information class.
HRESULT RIL_SetCallWaitingStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, BOOL fAllClasses, DWORD dwInfoClasses, RILSERVICESETTINGSSTATUS dwStatus);
    // RIL_COMMAND_SETCALLWAITINGSTATUS
    // In: SETCALLWAITINGSTATUS_PARAMS
    // Async out: none (status only)

// retrieves the current caller ID settings.
HRESULT RIL_GetCallerIdSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETCALLERIDSETTINGS
    // In: DWORD
    // Async out: RILCALLERIDSETTINGS

// retrieves the current settings for the dialed ID.
HRESULT RIL_GetDialedIdSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETDIALEDIDSETTINGS
    // In: DWORD
    // Async out: RILDIALEDIDSETTINGS

// retrieves the current settings for the Hide Connected ID option.
HRESULT RIL_GetHideConnectedIdSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETHIDECONNECTEDIDSETTINGS
    // In: DWORD
    // Async out: RILHIDECONNECTEDIDSETTINGS

// retrieves the current settings for the Hide ID option.
HRESULT RIL_GetHideIdSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETHIDEIDSETTINGS
    // In: DWORD
    // Async out: RILHIDEIDSETTINGS

// sends a flash message. A flash message updates the state of active, held and waiting calls on a CDMA device.
HRESULT RIL_SendFlash(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, LPRILADDRESS lpraRilAddress);
    // RIL_COMMAND_SENDFLASH
    // In: RILADDRESS
    // Async out: none (status only)

// sends Phase 1 unstructured supplementary service (USSD) data.
HRESULT RIL_SendSupServiceData(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, const WCHAR *lpwszData);
    // RIL_COMMAND_SENDSUPSERVICEDATA
    // In: SENDSUPSERVICEDATA_PARAMS
    // Async out: none (status only)

// sends unstructured supplementary service (USSD) data response to a USSD request from the network.
HRESULT RIL_SendSupServiceDataResponse(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, const WCHAR *lpwszData);
    // RIL_COMMAND_SENDSUPSERVICEDATA
    // In: SENDSUPSERVICEDATARESPONSE_PARAMS
    // Async out: none (status only)

// cancels an ongoing unstructured supplementary service (USSD) data session.
HRESULT RIL_CancelSupServiceDataSession(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_SENDSUPSERVICEDATA
    // In: CANCELSUPSERVICEDATA_PARAMS
    // Async out: none (status only)

// Responsible for sending RTT data text on packet switched calls.
HRESULT RIL_SendRTT(HRIL hRil, LPVOID lpContext, DWORD dwID, DWORD dwExecutor, const WCHAR *lpwszRTTText);
    // RIL_COMMAND_SENDRTT
    // In: RILSENDRTTDATAPARAMS
    // Async out: none (status only)

//////////////////////////////////
// Audio and DTMF
//////////////////////////////////

// sends Dual-Tone Multifrequency (DTMF) tones across an established voice call.
HRESULT RIL_SendDTMF(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, LPCSTR lpszChars, DWORD dwDigitOnTimeMs, DWORD dwDigitOffTimeMs);
    // RIL_COMMAND_SENDDTMF
    // In: SENDDTMF_PARAMS
    // Async out: none (status only)

// starts a DTMF tone across an established voice call. The tone is played until it is stopped with RIL_StopDTMF.
HRESULT RIL_StartDTMF(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, CHAR ch);
    // RIL_COMMAND_STARTDTMF
    // In: STARTDTMF_PARAMS
    // Async out: none

// stops DTMF tones across an established voice call.
HRESULT RIL_StopDTMF(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_STOPDTMF
    // In: DWORD
    // Async out: none


///////////////////////////
// Messaging
///////////////////////////

// gets the current messaging service options.
HRESULT RIL_GetMsgServiceOptions(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
    // RIL_COMMAND_GETMSGSERVICEOPTIONS
    // In: HUICCAPP
    // Async out: RILMSGSERVICEINFO

// reads a message from the current storage location.
HRESULT RIL_ReadMsg(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwIndex);
    // RIL_COMMAND_READMSG
    // In: READMSG_PARAMS
    // Async out: RILMESSAGEINFO 

// writes a message to the current storage location.
HRESULT RIL_WriteMsg(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, const RILMESSAGE* lpMessage, RILMESSAGESTATUS dwStatus);
    // RIL_COMMAND_WRITEMSG
    // In: WRITEMSG_PARAMS
    // Async out: DWORDThe input parameter is a WRITEMSG_PARAMS struct:

// deletes a message from the current storage location.
HRESULT RIL_DeleteMsg(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwIndex);
    // RIL_COMMAND_DELETEMSG
    // In: DELETEMSG_PARAMS
    // Async out: none (status only 

// retrieves the cell broadcast messaging configuration.
HRESULT RIL_GetCellBroadcastMsgConfig(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETCELLBROADCASTMSGCONFIG
    // In: DWORD
    // Async out: RILCBMSGCONFIG 

// turns on and off notifications for cell broadcast messages with specific IDs and language settings. The GWL structs are used for setting the GW and LTE settings and the CDMA structs are for the CDMA settings.
HRESULT RIL_SetCellBroadcastMsgConfig(HRIL hRil, LPVOID lpContext,  HUICCAPP hUiccApp, const RILCBMSGCONFIG *lpCbMsgConfigInfo);
    // RIL_COMMAND_SETCELLBROADCASTMSGCONFIG
    // In: SETBROADCAST_PARAMS
    // Async out: none (status only)

// checks with a specific SMS message in the UICC is read or unread.
HRESULT RIL_GetMsgInUiccStatus(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwIndex);
    // RIL_COMMAND_GETMSGINUICCSTATUS
    // In: GETMSGINUICCSTATUS_PARAMS
    // Async out: DWORD

// sets the status of a message in the UICC as read or unread.
HRESULT RIL_SetMsgInUiccStatus(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwIndex, RILMESSAGESTATUS dwStatus);
    // RIL_COMMAND_SETMSGINUICCSTATUS
    // In: SETMSGINUICCSTATUS_PARAMS
    // Async out: none (status only)

// tells the radio whether storage for SMS messages is available. In turn, this informs the network of the availability of storage so that the network can suspend delivery where there is no storage for new messages. 
HRESULT RIL_SetMsgMemoryStatus(HRIL hRil, LPVOID lpContext, BOOL bMsgMemoryFull);
    // RIL_COMMAND_SETMSGMEMORYSTATUS
    // In: BOOL
    // Async out: none (status only)

// sends a message.
HRESULT RIL_SendMsg(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, HUICCAPP hUiccApp, const RILMESSAGE *lpMessage, DWORD dwOptions);
    // RIL_COMMAND_SENDMSG
    // In: SENDMSG_PARAMS
    // Async out: RILSENDMSGRESPONSE

// sends a message ACK.
HRESULT RIL_SendMsgAck_V1(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, HUICCAPP hUiccApp, DWORD dwAckID, RILMSGACKSTATUS dwMsgStatus);
    // RIL_COMMAND_SENDMSGACK
    // In: SENDMSG_PARAMS
    // Async out: none (status only)
    
// sends a message ACK.
HRESULT RIL_SendMsgAck(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, HUICCAPP hUiccApp, DWORD dwAckID, RILMSGACKSTATUS dwMsgStatus, RILSMSFORMAT dwSmsFormat, RILSMSACKOPT dwOptions);
    // RIL_COMMAND_SENDMSGACK
    // In: SENDMSG_PARAMS
    // Async out: none (status only)

// gets the address of the Short Message Service Center for a specified UICC application.
HRESULT RIL_GetSMSC(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
    // RIL_COMMAND_GETSMSC
    // In: HUICCAPP
    // Async out: RILADDRESS

// sets the address of the Short Message Service Center for a specified UICC application.
HRESULT RIL_SetSMSC(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, const RILADDRESS *lpraSvcCtrAddress);
    // RIL_COMMAND_SETSMSC
    // In: SETSMSC_PARAMS
    // Async out: none (status only)

// queries the IMS Status.
HRESULT RIL_GetIMSStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETIMSSTATUS
    // In: DWORD
    // Async out: RILIMSSTATUS

// returns device management profile information as configured in the modem
HRESULT RIL_GetDMProfileConfigInfo(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, DWORD dwConfigItem);
    // RIL_GetDMProfileConfigInfo
    // In: DWORD
    // Async out: RILDMCONFIGINFOVALUE

// returns device management profile information as configured in the modem
HRESULT RIL_SetDMProfileConfigInfo(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, DWORD dwConfigItem, const RILDMCONFIGINFOVALUE *rciValue);
    // RIL_SetDMProfileConfigInfo
    // In: DWORD, RILDMCONFIGINFOVALUE
    // Async out: none (status only)


////////////////////
// Location
////////////////////

// retrieves information about location data available to the phone.
HRESULT RIL_GetPositionInfo(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETPOSITIONINFO
    // In: DWORD
    // Async out: RILPOSITIONINFO

// sets the geolocation data (i.e. civic address and/or {latitude, longitude} position) into modem
HRESULT RIL_SetGeolocationData(HRIL hRil, LPVOID lpContext, const RILSETGEOLOCATIONDATAPARAMS* pGeolocationData);
    // RIL_COMMAND_SETGEOLOCATIONDATA
    // In: RILSETGEOLOCATIONDATAPARAMS
    // Async out: none

////////////////////////////////////////////////
// OEM Field Service and Device-Specific
////////////////////////////////////////////////

// retrieves information about radio state grouping available from the phone.
HRESULT RIL_GetRadioStateGroups(HRIL hRil, LPVOID lpContext, DWORD dwParentGroupId);
    // RIL_COMMAND_GETRADIOSTATEGROUPS
    // In: DWORD
    // Async out: RILRADIOSTATEGROUPS

HRESULT RIL_GetRadioStateDetails(HRIL hRil, LPVOID lpContext, DWORD dwGroupId, DWORD dwItemId);
    // RIL_COMMAND_GETRADIOSTATEDETAILS
    // In: GETRADIOSTATEDETAILS_PARAMS
    // Async out: RILRADIOSTATEITEMS

HRESULT RIL_SetRadioStateDetails(HRIL hRil, LPVOID lpContext, const RILRADIOSTATEITEMS *pItems);
    // RIL_COMMAND_SETRADIOSTATEDETAILS
    // In: RILRADIOSTATEITEMS
    // Async out: DWORD

HRESULT RIL_RadioStatePasswordCompare(HRIL hRil, LPVOID lpContext, const RILRADIOSTATEPASSWORD *lpRspRadioStatePassword);
    // RIL_COMMAND_RADIOSTATEPASSWORDCOMPARE
    // In: RILRADIOSTATEPASSWORD
    // Async out: DWORD

// gets the retry count remaining for a given password entry.
HRESULT RIL_RadioStateGetPasswordRetryCount(HRIL hRil, LPVOID lpContext, DWORD dwPasswordId);
    // RIL_COMMAND_RADIOSTATEGETPASSWORDRETRYCOUNT
    // In: DWORD
    // Async out: DWORD

HRESULT RIL_DevSpecific(HRIL hRil, LPVOID lpContext, const BYTE *lpbParams, DWORD dwSize);
    // RIL_COMMAND_DEVSPECIFIC
    // In: array of BYTE
    // Async out: array of BYTE

HRESULT RIL_SetRFState_V1(HRIL hRil, LPVOID lpContext, DWORD dwRFState);    
    // RIL_COMMAND_SETRFSTATE
    // In: DWORD
    // Async out: none (Status only)

HRESULT RIL_SetRFState(HRIL hRil, LPVOID lpContext, const LPRILRFSTATE lpRFState);    
    // RIL_COMMAND_SETRFSTATE
    // In: RILRFSATE
    // Async out: none (Status only)

HRESULT RIL_GetRFState(HRIL hRil, LPVOID lpContext);    
    // RIL_COMMAND_GETRFSTATE
    // In: none
    // Async out: DWORD or RILRFSTATE

HRESULT RIL_GetExecutorFocus(HRIL hRil, LPVOID lpContext);    
    // RIL_COMMAND_GETEXECUTORFOCUS
    // In: none
    // Async out: RILEXECUTORFOCUS

HRESULT RIL_SetExecutorFocus(HRIL hRil, LPVOID lpContext, BOOL *pfFocusState, DWORD dwExecutorCount);    
    // RIL_COMMAND_SETEXECUTORFOCUS
    // In: array of BOOL holding the focus state for all executors and the number of executors.
    // Async out: none (Status only)

HRESULT RIL_GetEmergencyMode(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETEMERGENCYMODE
    // In: DWORD
    // Async out: BOOL

HRESULT RIL_GetExecutorRFState(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETEXECUTORRFSTATE
    // In: DWORD
    // Async out: RILEXECUTORRFSTATE

HRESULT RIL_SetExecutorRFState(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, BOOL fExecutorRFState);
    // RIL_COMMAND_SETEXECUTORRFSTATE
    // In: RILSETEXECUTORRFSTATEPARAMS
    // Async out: none (Status only)

HRESULT RIL_EnableModemFilters(HRIL hRil, LPVOID lpContext, DWORD filterID);
    // RIL_COMMAND_ENABLEMODEMFILTERS
    // In: DWORD
    // Async out: none (Status only)

HRESULT RIL_DisableModemFilters(HRIL hRil, LPVOID lpContext, DWORD filterID);
    // RIL_COMMAND_DISABLEMODEMFILTERS
    // In: DWORD
    // Async out: none (Status only)

HRESULT RIL_StartModemLogs(HRIL hRil, LPVOID lpContext);
    // RIL_COMMAND_STARTMODEMLOGS
    // In: none
    // Async out: none (Status only)

HRESULT RIL_StopModemLogs(HRIL hRil, LPVOID lpContext);
    // RIL_COMMAND_STOPMODEMLOGS
    // In: none
    // Async out: none (Status only)

HRESULT RIL_DrainModemLogs(HRIL hRil, LPVOID lpContext);
    // RIL_COMMAND_DRAINMODEMLOGS
    // In: none
    // Async out: none (Status only)

HRESULT RIL_CancelGetOperatorList(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_CANCELGETOPERATORLIST
    // In: DWORD
    // Async out: None (Status Only)

HRESULT RIL_AvoidCDMASystem(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, enum RILCDMAAVOIDANCEREQUESTYPE requestType);
    // RIL_COMMAND_AVOIDCDMASYSTEM
    // In: AVOIDCDMASYSTEM PARAMS
    // Async out: None (Status Only)

HRESULT RIL_SetPSMediaConfiguration(HRIL hRil, LPVOID lpContext, const LPRILPSMEDIACONFIGURATIONSET pConfigurationSet);
    // RIL_COMMAND_SETPSMEDIACONFIGURATION
    // In: RILPSMEDIACONFIGURATIONSET
    // Async out: RILPSMEDIACONFIGURATIONSET

HRESULT RIL_GetPSMediaConfiguration(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    // RIL_COMMAND_GETPSMEDIACONFIGURATION
    // In: DWORD
    // Async out: RILPSMEDIACONFIGURATIONSET

#ifdef __cplusplus
    }
#endif
#endif // _WP8_RIL_H    
