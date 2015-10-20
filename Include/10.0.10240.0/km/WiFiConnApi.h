

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __wificonnapi_h__
#define __wificonnapi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWiFiHandle_FWD_DEFINED__
#define __IWiFiHandle_FWD_DEFINED__
typedef interface IWiFiHandle IWiFiHandle;

#endif 	/* __IWiFiHandle_FWD_DEFINED__ */


#ifndef __IWiFiAdapterManager_FWD_DEFINED__
#define __IWiFiAdapterManager_FWD_DEFINED__
typedef interface IWiFiAdapterManager IWiFiAdapterManager;

#endif 	/* __IWiFiAdapterManager_FWD_DEFINED__ */


#ifndef __IWiFiNetwork_FWD_DEFINED__
#define __IWiFiNetwork_FWD_DEFINED__
typedef interface IWiFiNetwork IWiFiNetwork;

#endif 	/* __IWiFiNetwork_FWD_DEFINED__ */


#ifndef __IWiFiNetworkList_FWD_DEFINED__
#define __IWiFiNetworkList_FWD_DEFINED__
typedef interface IWiFiNetworkList IWiFiNetworkList;

#endif 	/* __IWiFiNetworkList_FWD_DEFINED__ */


#ifndef __IWiFiBssList_FWD_DEFINED__
#define __IWiFiBssList_FWD_DEFINED__
typedef interface IWiFiBssList IWiFiBssList;

#endif 	/* __IWiFiBssList_FWD_DEFINED__ */


#ifndef __IWiFiCertificate_FWD_DEFINED__
#define __IWiFiCertificate_FWD_DEFINED__
typedef interface IWiFiCertificate IWiFiCertificate;

#endif 	/* __IWiFiCertificate_FWD_DEFINED__ */


#ifndef __IWiFiCertificateList_FWD_DEFINED__
#define __IWiFiCertificateList_FWD_DEFINED__
typedef interface IWiFiCertificateList IWiFiCertificateList;

#endif 	/* __IWiFiCertificateList_FWD_DEFINED__ */


#ifndef __IWiFiSupportedEapMethodList_FWD_DEFINED__
#define __IWiFiSupportedEapMethodList_FWD_DEFINED__
typedef interface IWiFiSupportedEapMethodList IWiFiSupportedEapMethodList;

#endif 	/* __IWiFiSupportedEapMethodList_FWD_DEFINED__ */


#ifndef __IWiFiEventHandler_FWD_DEFINED__
#define __IWiFiEventHandler_FWD_DEFINED__
typedef interface IWiFiEventHandler IWiFiEventHandler;

#endif 	/* __IWiFiEventHandler_FWD_DEFINED__ */


#ifndef __IWiFiUiRequestDetailsServer_FWD_DEFINED__
#define __IWiFiUiRequestDetailsServer_FWD_DEFINED__
typedef interface IWiFiUiRequestDetailsServer IWiFiUiRequestDetailsServer;

#endif 	/* __IWiFiUiRequestDetailsServer_FWD_DEFINED__ */


#ifndef __IWiFiUiRequestDetailsCertificates_FWD_DEFINED__
#define __IWiFiUiRequestDetailsCertificates_FWD_DEFINED__
typedef interface IWiFiUiRequestDetailsCertificates IWiFiUiRequestDetailsCertificates;

#endif 	/* __IWiFiUiRequestDetailsCertificates_FWD_DEFINED__ */


#ifndef __IWiFiAutoConnectList_FWD_DEFINED__
#define __IWiFiAutoConnectList_FWD_DEFINED__
typedef interface IWiFiAutoConnectList IWiFiAutoConnectList;

#endif 	/* __IWiFiAutoConnectList_FWD_DEFINED__ */


#ifndef __IWiFiSocialNetwork_FWD_DEFINED__
#define __IWiFiSocialNetwork_FWD_DEFINED__
typedef interface IWiFiSocialNetwork IWiFiSocialNetwork;

#endif 	/* __IWiFiSocialNetwork_FWD_DEFINED__ */


#ifndef __IWiFiSocialNetworkList_FWD_DEFINED__
#define __IWiFiSocialNetworkList_FWD_DEFINED__
typedef interface IWiFiSocialNetworkList IWiFiSocialNetworkList;

#endif 	/* __IWiFiSocialNetworkList_FWD_DEFINED__ */


#ifndef __IWiFiAddr6List_FWD_DEFINED__
#define __IWiFiAddr6List_FWD_DEFINED__
typedef interface IWiFiAddr6List IWiFiAddr6List;

#endif 	/* __IWiFiAddr6List_FWD_DEFINED__ */


#ifndef __IWiFiHandle_FWD_DEFINED__
#define __IWiFiHandle_FWD_DEFINED__
typedef interface IWiFiHandle IWiFiHandle;

#endif 	/* __IWiFiHandle_FWD_DEFINED__ */


#ifndef __IWiFiAdapterManager_FWD_DEFINED__
#define __IWiFiAdapterManager_FWD_DEFINED__
typedef interface IWiFiAdapterManager IWiFiAdapterManager;

#endif 	/* __IWiFiAdapterManager_FWD_DEFINED__ */


#ifndef __IWiFiNetwork_FWD_DEFINED__
#define __IWiFiNetwork_FWD_DEFINED__
typedef interface IWiFiNetwork IWiFiNetwork;

#endif 	/* __IWiFiNetwork_FWD_DEFINED__ */


#ifndef __IWiFiNetworkList_FWD_DEFINED__
#define __IWiFiNetworkList_FWD_DEFINED__
typedef interface IWiFiNetworkList IWiFiNetworkList;

#endif 	/* __IWiFiNetworkList_FWD_DEFINED__ */


#ifndef __IWiFiSocialNetwork_FWD_DEFINED__
#define __IWiFiSocialNetwork_FWD_DEFINED__
typedef interface IWiFiSocialNetwork IWiFiSocialNetwork;

#endif 	/* __IWiFiSocialNetwork_FWD_DEFINED__ */


#ifndef __IWiFiSocialNetworkList_FWD_DEFINED__
#define __IWiFiSocialNetworkList_FWD_DEFINED__
typedef interface IWiFiSocialNetworkList IWiFiSocialNetworkList;

#endif 	/* __IWiFiSocialNetworkList_FWD_DEFINED__ */


#ifndef __IWiFiBssList_FWD_DEFINED__
#define __IWiFiBssList_FWD_DEFINED__
typedef interface IWiFiBssList IWiFiBssList;

#endif 	/* __IWiFiBssList_FWD_DEFINED__ */


#ifndef __IWiFiCertificate_FWD_DEFINED__
#define __IWiFiCertificate_FWD_DEFINED__
typedef interface IWiFiCertificate IWiFiCertificate;

#endif 	/* __IWiFiCertificate_FWD_DEFINED__ */


#ifndef __IWiFiCertificateList_FWD_DEFINED__
#define __IWiFiCertificateList_FWD_DEFINED__
typedef interface IWiFiCertificateList IWiFiCertificateList;

#endif 	/* __IWiFiCertificateList_FWD_DEFINED__ */


#ifndef __IWiFiSupportedEapMethodList_FWD_DEFINED__
#define __IWiFiSupportedEapMethodList_FWD_DEFINED__
typedef interface IWiFiSupportedEapMethodList IWiFiSupportedEapMethodList;

#endif 	/* __IWiFiSupportedEapMethodList_FWD_DEFINED__ */


#ifndef __IWiFiEventHandler_FWD_DEFINED__
#define __IWiFiEventHandler_FWD_DEFINED__
typedef interface IWiFiEventHandler IWiFiEventHandler;

#endif 	/* __IWiFiEventHandler_FWD_DEFINED__ */


#ifndef __IWiFiUiRequestDetailsServer_FWD_DEFINED__
#define __IWiFiUiRequestDetailsServer_FWD_DEFINED__
typedef interface IWiFiUiRequestDetailsServer IWiFiUiRequestDetailsServer;

#endif 	/* __IWiFiUiRequestDetailsServer_FWD_DEFINED__ */


#ifndef __IWiFiUiRequestDetailsCertificates_FWD_DEFINED__
#define __IWiFiUiRequestDetailsCertificates_FWD_DEFINED__
typedef interface IWiFiUiRequestDetailsCertificates IWiFiUiRequestDetailsCertificates;

#endif 	/* __IWiFiUiRequestDetailsCertificates_FWD_DEFINED__ */


#ifndef __IWiFiAutoConnectList_FWD_DEFINED__
#define __IWiFiAutoConnectList_FWD_DEFINED__
typedef interface IWiFiAutoConnectList IWiFiAutoConnectList;

#endif 	/* __IWiFiAutoConnectList_FWD_DEFINED__ */


#ifndef __WiFiHandle_FWD_DEFINED__
#define __WiFiHandle_FWD_DEFINED__

#ifdef __cplusplus
typedef class WiFiHandle WiFiHandle;
#else
typedef struct WiFiHandle WiFiHandle;
#endif /* __cplusplus */

#endif 	/* __WiFiHandle_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "wlantypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wificonnapi_0000_0000 */
/* [local] */ 

//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (c) Microsoft Corporation. All rights reserved.
//
//--------------------------------------------------------------------------

#define WiFiRequestHandleAll 0xFFFFFFFF
#define WiFiPowerBackOnDefaultTimer 0
















typedef 
enum WiFiPowerState
    {
        WiFiPowerOff	= 0,
        WiFiPowerOn	= 1,
        WiFiPowerGoingOff	= 2,
        WiFiPowerGoingOn	= 3
    } 	WiFiPowerState;

typedef 
enum WiFiPowerFlag
    {
        WiFiPowerFlagUser	= 0x1,
        WiFiPowerFlagSoftAP	= 0x2,
        WiFiPowerFlagVoip	= 0x4,
        WiFiPowerFlagP2P	= 0x8
    } 	WiFiPowerFlag;

typedef 
enum WiFiPowerBackOnOption
    {
        WiFiPowerBackOnNever	= 0,
        WiFiPowerBackOnTimer	= 1,
        WiFiPowerBackOnFavorite	= 2
    } 	WiFiPowerBackOnOption;

typedef 
enum WiFiPromptingState
    {
        WiFiPromptingOff	= 0,
        WiFiPromptingOn	= 1
    } 	WiFiPromptingState;

typedef 
enum WiFiScanMode
    {
        WiFiPassiveScan	= 0,
        WiFiActiveScan	= 1
    } 	WiFiScanMode;

typedef 
enum WiFiConnectionState
    {
        WiFiDisconnected	= 0,
        WiFiConnecting	= 1,
        WiFiWaitingForIp	= 2,
        WiFiExtAuth	= 3,
        WiFiHijacked	= 4,
        WiFiConnected	= 5,
        WiFiDisconnecting	= 6,
        WiFiDisconnectingHijacked	= 7,
        WiFiDisconnectingNoInternet	= 8
    } 	WiFiConnectionState;

typedef 
enum WiFiCredentialType
    {
        WiFiNoCreds	= 0,
        WiFiPSKWPA	= 1,
        WiFiPSKWEP	= 2,
        WiFiOneX	= 3,
        WiFiIHV	= 4,
        WiFiUnknownCreds	= 5
    } 	WiFiCredentialType;

typedef 
enum WiFiSecurityType
    {
        WiFiSecurityOpen	= 0,
        WiFiSecurityWEP	= 1,
        WiFiSecurityWPA	= 2,
        WiFiSecurityWPA2	= 3,
        WiFiSecurityWPAEnterprise	= 4,
        WiFiSecurityWPA2Enterprise	= 5,
        WiFiSecurityIHV	= 6,
        WiFiSecurityUnknown	= 7
    } 	WiFiSecurityType;

typedef 
enum WiFiConnectFailureReason
    {
        WiFiConnectNoError	= 0,
        WiFiConnectGeneralFailure	= 1,
        WiFiConnectAuthenticationFailed	= 2,
        WiFiConnectInvalidIPAddress	= 3
    } 	WiFiConnectFailureReason;

typedef 
enum WiFiConfiguredState
    {
        WiFiNotConfigured	= 0,
        WiFiInvalidConfiguration	= 1,
        WiFiConfigured	= 2
    } 	WiFiConfiguredState;

typedef 
enum WiFiCredentialRequestReason
    {
        WiFiNoCredentials	= 0,
        WiFiCredentialsChanged	= ( WiFiNoCredentials + 1 ) ,
        WiFiCredentialsFailed	= ( WiFiCredentialsChanged + 1 ) ,
        WiFiEAPError	= ( WiFiCredentialsFailed + 1 ) ,
        WiFiRetry	= ( WiFiEAPError + 1 ) 
    } 	WiFiCredentialRequestReason;

typedef 
enum WiFiCredentialRequestFlag
    {
        WiFiRequestPassword	= 0x80,
        WiFiRequestUsernamePassword	= 0x40,
        WiFiRequestCertificate	= 0x20,
        WiFiRequestCertificateTls	= 0x10,
        WiFiRequestAcceptCertificate	= 0x8,
        WiFiRequestSim	= 0x4,
        WiFiRequestCancel	= 0x1
    } 	WiFiCredentialRequestFlag;

typedef 
enum WiFiResponseAction
    {
        WiFiResponseAccept	= 0,
        WiFiResponseDeny	= 1
    } 	WiFiResponseAction;

typedef 
enum WiFiEapFlags
    {
        WiFiEapFlagForceServerValidation	= 0x1
    } 	WiFiEapFlags;

typedef 
enum WiFiEapMethod
    {
        WiFiEapMethodNone	= 0,
        WiFiEapMethodTLS	= 13,
        WiFiEapMethodPeapMSChapV2	= 25,
        WiFiEapMethodTTLS_PAP	= 21,
        WiFiEapMethodTTLS_CHAP	= ( 21 | 0x100 ) ,
        WiFiEapMethodTTLS_MSCHAP	= ( 21 | 0x200 ) ,
        WiFiEapMethodTTLS_MSCHAPV2	= ( 21 | 0x400 ) ,
        WiFiEapMethodTTLS_EAPMSCHAPV2	= ( 21 | 0x800 ) ,
        WiFiEapMethodTTLS_EAPTLS	= ( 21 | 0x1000 ) ,
        WiFiEapMethodSIM	= 18,
        WiFiEapMethodAKA	= 23,
        WiFiEapMethodAKA_P	= 50
    } 	WiFiEapMethod;

typedef 
enum WiFiEapCredentialType
    {
        WiFiEapCredentialSim	= 0,
        WiFiEapCredentialCertificate	= ( WiFiEapCredentialSim + 1 ) ,
        WiFiEapCredentialUser	= ( WiFiEapCredentialCertificate + 1 ) 
    } 	WiFiEapCredentialType;

typedef 
enum WiFiCertStore
    {
        RootCertStore	= 0,
        MyCertStore	= ( RootCertStore + 1 ) ,
        CACertStore	= ( MyCertStore + 1 ) 
    } 	WiFiCertStore;

typedef 
enum WiFiPhyType
    {
        WiFiPhyType_unknown	= 0,
        WiFiPhyType_any	= WiFiPhyType_unknown,
        WiFiPhyType_fhss	= 1,
        WiFiPhyType_dsss	= 2,
        WiFiPhyType_irbaseband	= 3,
        WiFiPhyType_ofdm	= 4,
        WiFiPhyType_hrdsss	= 5,
        WiFiPhyType_erp	= 6,
        WiFiPhyType_ht	= 7,
        WiFiPhyType_IHV_start	= 0x80000000,
        WiFiPhyType_IHV_end	= 0xffffffff
    } 	WiFiPhyType;

typedef 
enum WiFiAutoConnectNetworkType
    {
        WiFiAutoConnectTypeUserConfigured	= 0,
        WiFiAutoConnectTypeHotspotOffload	= ( WiFiAutoConnectTypeUserConfigured + 1 ) ,
        WiFiAutoConnectTypeFriend	= ( WiFiAutoConnectTypeHotspotOffload + 1 ) ,
        WiFiAutoConnectTypePublicOpen	= ( WiFiAutoConnectTypeFriend + 1 ) ,
        WiFiAutoConnectTypePublicCaptivePortal	= ( WiFiAutoConnectTypePublicOpen + 1 ) ,
        WiFiAutoConnectTypeUnknown	= ( WiFiAutoConnectTypePublicCaptivePortal + 1 ) ,
        WiFiAutoConnectTypeNotAutoConnectable	= ( WiFiAutoConnectTypeUnknown + 1 ) ,
        WiFiAutoConnectTypeRoamed	= ( WiFiAutoConnectTypeNotAutoConnectable + 1 ) ,
        WiFiAutoConnectTypeProvisioned	= ( WiFiAutoConnectTypeRoamed + 1 ) ,
        WiFiAutoConnectTypePaid	= ( WiFiAutoConnectTypeProvisioned + 1 ) 
    } 	WiFiAutoConnectNetworkType;

typedef 
enum WiFiAutoConnectNetworkState
    {
        WiFiNetworkStateActive	= 0,
        WiFiNetworkStateMetered	= ( WiFiNetworkStateActive + 1 ) ,
        WiFiNetworkStateTemporarilyBlocked	= ( WiFiNetworkStateMetered + 1 ) ,
        WiFiNetworkStateBlocked	= ( WiFiNetworkStateTemporarilyBlocked + 1 ) 
    } 	WiFiAutoConnectNetworkState;

typedef 
enum WiFiAutoConnectBackoffReason
    {
        WiFiAutoConnectBackoffReasonNone	= 0,
        WiFiAutoConnectBackoffReasonBelowMinScore	= ( WiFiAutoConnectBackoffReasonNone + 1 ) ,
        WiFiAutoConnectBackoffReasonBelowLinkQuality	= ( WiFiAutoConnectBackoffReasonBelowMinScore + 1 ) ,
        WiFiAutoConnectBackoffReasonNotStationary	= ( WiFiAutoConnectBackoffReasonBelowLinkQuality + 1 ) ,
        WiFiAutoConnectBackoffReasonStackDisconnected	= ( WiFiAutoConnectBackoffReasonNotStationary + 1 ) ,
        WiFiAutoConnectBackoffReason80211Failures	= ( WiFiAutoConnectBackoffReasonStackDisconnected + 1 ) ,
        WiFiAutoConnectBackoffReasonNoIPAddress	= ( WiFiAutoConnectBackoffReason80211Failures + 1 ) ,
        WiFiAutoConnectBackoffReasonProbeFailure	= ( WiFiAutoConnectBackoffReasonNoIPAddress + 1 ) ,
        WiFiAutoConnectBackoffReasonHijacked	= ( WiFiAutoConnectBackoffReasonProbeFailure + 1 ) ,
        WiFiAutoConnectBackoffReasonUserAction	= ( WiFiAutoConnectBackoffReasonHijacked + 1 ) ,
        WiFiAutoConnectBackoffReasonUserDisabled	= ( WiFiAutoConnectBackoffReasonUserAction + 1 ) ,
        WiFiAutoConnectBackoffReasonNoCredentials	= ( WiFiAutoConnectBackoffReasonUserDisabled + 1 ) ,
        WiFiAutoConnectBackoffReasonOther	= ( WiFiAutoConnectBackoffReasonNoCredentials + 1 ) 
    } 	WiFiAutoConnectBackoffReason;

typedef 
enum WiFiExchangeOptInState
    {
        WiFiExchangeOptionUnknown	= 0,
        WiFiExchangeOptedIn	= ( WiFiExchangeOptionUnknown + 1 ) ,
        WiFiExchangeOptedOut	= ( WiFiExchangeOptedIn + 1 ) ,
        WiFiExchangeOptedInDisabled	= ( WiFiExchangeOptedOut + 1 ) ,
        WiFiExchangeOptedOutDisabled	= ( WiFiExchangeOptedInDisabled + 1 ) 
    } 	WiFiExchangeOptInState;

typedef 
enum CaptivePortalSettingType
    {
        CaptivePortalSettingPhone	= 0,
        CaptivePortalSettingName	= 1,
        CaptivePortalSettingEmail	= 2
    } 	CaptivePortalSettingType;

typedef 
enum CaptivePortalSettingState
    {
        CaptivePortalSettingAlwaysAsk	= 0,
        CaptivePortalSettingOptedOut	= 1,
        CaptivePortalSettingOptedIn	= 2
    } 	CaptivePortalSettingState;

typedef 
enum WiFiNetworkExchangeState
    {
        WiFiNetworkUnexchangeable	= 0,
        WiFiNetworkShared	= ( WiFiNetworkUnexchangeable + 1 ) ,
        WiFiNetworkNotShared	= ( WiFiNetworkShared + 1 ) 
    } 	WiFiNetworkExchangeState;

typedef 
enum WiFiNetworkFavoriteState
    {
        WiFiNetworkNotFavorite	= 0,
        WiFiNetworkFavorite	= ( WiFiNetworkNotFavorite + 1 ) 
    } 	WiFiNetworkFavoriteState;

typedef 
enum WiFiActionRequiredFlag
    {
        WiFiActionRequiredNoActionRequired	= 0,
        WiFiActionRequiredCredentials	= 0x1000,
        WiFiActionRequiredHijacked	= 0x2000,
        WiFiActionRequiredCPDetailsName	= 0x4000,
        WiFiActionRequiredCPDetailsPhone	= 0x8000,
        WiFiActionRequiredCPDetailsEmail	= 0x10000,
        WiFiActionRequiredAcceptCert	= 0x20000
    } 	WiFiActionRequiredFlag;

typedef 
enum WiFiRoamingState
    {
        WiFiRoamingStarted	= 0,
        WiFiRoamingComplete	= ( WiFiRoamingStarted + 1 ) 
    } 	WiFiRoamingState;

typedef 
enum WiFiAutoConnectOptInState
    {
        WiFiAutoConnectOptedOut	= 0,
        WiFiAutoConnectEnabled	= 0x1,
        WiFiAutoConnectCaptivePortalEnabled	= 0x2,
        WiFiAutoConnectCredExchangeEnabled	= 0x4,
        WiFiAutoConnectNotAllowed	= 0x8
    } 	WiFiAutoConnectOptInState;

typedef 
enum WiFiNetworkListSortOption
    {
        WiFiSortOptionNone	= 0,
        WiFiSortOptionMostRecentlyUsed	= ( WiFiSortOptionNone + 1 ) 
    } 	WiFiNetworkListSortOption;

typedef 
enum WiFiRandomizationStatus
    {
        WiFiRandomizationStatusNotAvailable	= 1,
        WiFiRandomizationStatusBlockedByAdmin	= 2,
        WiFiRandomizationStatusDisabled	= 3,
        WiFiRandomizationStatusEnabled	= 4
    } 	WiFiRandomizationStatus;

typedef 
enum WiFiProfileRandomizationMode
    {
        WiFiProfileRandomizationModeOn	= 0,
        WiFiProfileRandomizationModeOff	= 1,
        WiFiProfileRandomizationModeDaily	= 2
    } 	WiFiProfileRandomizationMode;

typedef struct WiFiAutoConnectInfo
    {
    WiFiAutoConnectNetworkType networkType;
    WiFiAutoConnectNetworkState networkState;
    WiFiAutoConnectBackoffReason backoffReason;
    FILETIME ftNextConnectionTime;
    DWORD dwNetworkQuality;
    FLOAT fTileManagerScore;
    } 	WiFiAutoConnectInfo;

typedef struct WiFiProxyInfo
    {
    WCHAR pszServer[ 256 ];
    WCHAR pszUsername[ 128 ];
    WCHAR pszPassword[ 128 ];
    WORD Port;
    } 	WiFiProxyInfo;

typedef struct WiFiCertificateHash
    {
    BYTE pbHash[ 20 ];
    DWORD cbHash;
    } 	WiFiCertificateHash;

typedef struct WiFiCredentialRequest
    {
    WiFiCredentialRequestFlag type;
    WCHAR szDomainUsername[ 256 ];
    WCHAR szPassword[ 256 ];
    WiFiCertificateHash certificateHash;
    WiFiResponseAction action;
    } 	WiFiCredentialRequest;

typedef struct WiFiUsername
    {
    WCHAR szUsername[ 257 ];
    } 	WiFiUsername;

typedef struct WiFiUrl
    {
    WCHAR szUrl[ 260 ];
    } 	WiFiUrl;

typedef UCHAR WiFiMacAddress[ 6 ];

typedef struct WiFiAdapterInfo
    {
    WCHAR szIpAddress[ 16 ];
    WCHAR szSubnetMask[ 16 ];
    WCHAR szDefaultGateway[ 16 ];
    WCHAR szDnsServerAddress[ 16 ];
    WCHAR szDnsSuffix[ 256 ];
    WCHAR szMacAddress[ 18 ];
    WiFiMacAddress macAddress;
    } 	WiFiAdapterInfo;

typedef struct WiFiAdapterProperties
    {
    WCHAR szIpAddress[ 16 ];
    WCHAR szSubnetMask[ 16 ];
    WCHAR szDefaultGateway[ 16 ];
    WCHAR szDnsServerAddress[ 16 ];
    WCHAR szDnsSuffix[ 256 ];
    DWORD dwDHCPEnabled;
    BOOL fIpAddressChanged;
    BOOL fSubnetMaskChanged;
    BOOL fDefaultGatewayChanged;
    BOOL fDnsServerAddressChanged;
    BOOL fDnsSuffixAddressChanged;
    BOOL fDHCPEnabledChanged;
    } 	WiFiAdapterProperties;

typedef struct WiFiBssEntry
    {
    DOT11_SSID dot11Ssid;
    ULONG uPhyId;
    WiFiMacAddress macAddress;
    DOT11_BSS_TYPE dot11BssType;
    WiFiPhyType wifiBssPhyType;
    LONG lRssi;
    ULONG uLinkQuality;
    BOOLEAN bInRegDomain;
    USHORT usBeaconPeriod;
    ULONGLONG ullTimestamp;
    ULONGLONG ullHostTimestamp;
    USHORT usCapabilityInformation;
    ULONG ulChCenterFrequency;
    } 	WiFiBssEntry;

typedef struct WiFiAutoConnectEntry
    {
    DOT11_SSID dot11Ssid;
    DOT11_AUTH_ALGORITHM authAlgo;
    DOT11_CIPHER_ALGORITHM cipherAlgo;
    DWORD dwNumberOfBssids;
    DWORD dwLinkQuality;
    DWORD dwPluginPriority;
    DWORD dwTMFlags;
    FLOAT fTMScore;
    DWORD dwWeight;
    USHORT usCPInstructionsLength;
    USHORT usCredentialsLength;
    BOOLEAN bAutoConnect;
    WiFiAutoConnectInfo AutoConnectInfo;
    } 	WiFiAutoConnectEntry;

typedef FLOAT WiFiAutoConnectScore;

typedef struct WiFiHotspotStatus
    {
    WCHAR pluginName[ 64 ];
    WCHAR statusText[ 256 ];
    } 	WiFiHotspotStatus;

typedef struct WiFiAddr6
    {
    UCHAR Byte[ 16 ];
    } 	WiFiAddr6;

typedef struct WiFiAddr6Str
    {
    WCHAR addr[ 65 ];
    } 	WiFiAddr6Str;

typedef struct WiFiEapConfig
    {
    WiFiEapMethod methodType;
    BOOL bForceAlwaysPrompt;
    BOOL bValidateServer;
    BOOL bUseCustomRealm;
    WiFiCertificateHash certServerRootCA;
    WCHAR szCustomRealm[ 256 ];
    } 	WiFiEapConfig;

typedef struct WiFiSupportedEapMethod
    {
    WiFiEapMethod methodType;
    WiFiEapCredentialType credentialType;
    UINT stringID;
    DWORD dwFlags;
    } 	WiFiSupportedEapMethod;



extern RPC_IF_HANDLE __MIDL_itf_wificonnapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wificonnapi_0000_0000_v0_0_s_ifspec;

#ifndef __IWiFiHandle_INTERFACE_DEFINED__
#define __IWiFiHandle_INTERFACE_DEFINED__

/* interface IWiFiHandle */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiHandle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-4600-8894-6D6F0E5EDDCD")
    IWiFiHandle : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterEventHandler( 
            /* [in] */ __RPC__in_opt IWiFiEventHandler *handler) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnregisterEventHandler( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsRegistered( 
            /* [retval][out] */ __RPC__out BOOL *bIsRegistered) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartScan( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartScanEx( 
            /* [in] */ BOOL ensureWiFiOn) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScanForHidden( 
            /* [in] */ __RPC__in BSTR szSSID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConnectionState( 
            /* [retval][out] */ __RPC__out WiFiConnectionState *connectionState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConnectionStateEx( 
            /* [out] */ __RPC__out WiFiConnectionState *connectionState,
            /* [unique] */ __RPC__deref_opt_in_opt IWiFiNetwork **ppWiFiNetwork) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSupportedEapList( 
            /* [retval][out] */ __RPC__deref_out_opt IWiFiSupportedEapMethodList **pWiFiSupportedEapMethodList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StopConnecting( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StopHijackedConnection( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SkipHijackedState( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUIRequestDetails( 
            /* [in] */ DWORD requestHandle,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppDetails) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendRequestedCredentials( 
            /* [in] */ DWORD requestHandle,
            /* [in] */ __RPC__in WiFiCredentialRequest *creds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAlwaysSendUIRequests( 
            /* [in] */ BOOL bEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPowerState( 
            /* [retval][out] */ __RPC__out WiFiPowerState *powerState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPowerStateEx( 
            /* [out] */ __RPC__out WiFiPowerState *powerState,
            /* [unique] */ __RPC__in_opt DWORD *pdwPowerFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPowerState( 
            /* [in] */ WiFiPowerState powerState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPowerStateEx( 
            /* [in] */ WiFiPowerState powerState,
            /* [in] */ WiFiPowerFlag powerFlag) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPowerStateAsync( 
            /* [in] */ WiFiPowerState powerState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPowerStateAsyncEx( 
            /* [in] */ WiFiPowerState powerState,
            /* [in] */ WiFiPowerFlag powerFlag) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPowerBackOnOption( 
            /* [out] */ __RPC__out WiFiPowerBackOnOption *pPowerBackOnOption,
            /* [retval][out] */ __RPC__out DWORD *pdwTimer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPowerBackOnOption( 
            /* [in] */ WiFiPowerBackOnOption powerBackOnOption,
            /* [in] */ DWORD dwTimer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPromptingState( 
            /* [retval][out] */ __RPC__out WiFiPromptingState *promptingState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPromptingState( 
            /* [in] */ WiFiPromptingState promptingState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetScanMode( 
            /* [retval][out] */ __RPC__out WiFiScanMode *scanMode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetScanMode( 
            /* [in] */ WiFiScanMode scanMode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHijackedUrl( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *szUrl) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAvailableNetworkList( 
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetworkList **networkList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNetworkBssList( 
            /* [in] */ __RPC__in PDOT11_SSID pDot11Ssid,
            /* [in] */ BOOL bSecurityEnabled,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiBssList **ppBssList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNetworkBssListEx( 
            /* [in] */ __RPC__in PDOT11_SSID pDot11Ssid,
            /* [in] */ BOOL bSecurityEnabled,
            /* [in] */ BOOL bBypassCache,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiBssList **ppBssList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCurrentBssEntry( 
            /* [retval][out] */ __RPC__out WiFiBssEntry *pBssEntry) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPreferredNetworkList( 
            /* [in] */ BOOL includeHotspotNetworks,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetworkList **networkList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPreferredNetworkListEx( 
            /* [in] */ BOOL includeHotspotNetworks,
            /* [in] */ WiFiNetworkListSortOption option,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetworkList **networkList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSocialNetworkList( 
            /* [retval][out] */ __RPC__deref_out_opt IWiFiSocialNetworkList **ppszSocialNetworkList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetExchangeOptInState( 
            /* [retval][out] */ __RPC__out WiFiExchangeOptInState *pOptInState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetExchangeOptInState( 
            /* [in] */ WiFiExchangeOptInState optInState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendSharedNetworks( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProfileSharingState( 
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in BSTR bstrProfileName,
            /* [retval][out] */ __RPC__out WiFiNetworkExchangeState *pSharingState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProfileSharingState( 
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in BSTR bstrProfileName,
            /* [in] */ WiFiNetworkExchangeState sharingState,
            /* [unique][in] */ __RPC__in_opt BSTR inputPassword) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSharedPassword( 
            /* [in] */ __RPC__in BSTR bstrSsid,
            /* [in] */ __RPC__in BSTR bstrBssid,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrPassword) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetOptInStatusTestHook( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrResponse) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCertificatesFound( 
            /* [in] */ WiFiCertStore wifiCertStore) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAvailableCertificatesList( 
            /* [in] */ WiFiCertStore wifiCertStore,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiCertificateList **pAdapterProperties) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAvailableCertificatesListEx( 
            /* [in] */ WiFiCertStore wifiCertStore,
            /* [in] */ BOOL filterForTlsAuth,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiCertificateList **pAdapterProperties) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHotspotStatus( 
            /* [retval][out] */ __RPC__out BOOL *pbEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHotspotStatusString( 
            /* [out] */ __RPC__out WiFiHotspotStatus *pStatus,
            /* [retval][out] */ __RPC__out BOOL *pbUseDefault) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetHotspotStatus( 
            /* [in] */ BOOL bEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAdapterManager( 
            /* [retval][out] */ __RPC__deref_out_opt IWiFiAdapterManager **ppAdapterManager) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDecryptedWlanProfile( 
            /* [in] */ __RPC__in BSTR bstrProfileName,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrProfileXml) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetActionRequired( 
            /* [in] */ WiFiActionRequiredFlag actionRequiredFlag) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAutoConnectNetworksList( 
            /* [retval][out] */ __RPC__deref_out_opt IWiFiAutoConnectList **ppAutoConnectList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ForceLowPowerState( 
            /* [in] */ BOOL bIsLowPower) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAutoConnectStatus( 
            /* [retval][out] */ __RPC__out WiFiAutoConnectOptInState *pAutoConnectState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAutoConnectStatus( 
            /* [in] */ WiFiAutoConnectOptInState autoConnectState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FreeTileManagerMemory( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ProvisionHotspotApp( 
            /* [unique][in] */ __RPC__in_opt BSTR bstrPackageFamilyName,
            /* [unique][in] */ __RPC__in_opt BSTR bstrPackageFullName,
            /* [in] */ __RPC__in BSTR bstrDoc,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProvideCaptivePortalDetailsStatus( 
            /* [retval][out] */ __RPC__out BOOL *pbEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProvideCaptivePortalDetailsStatus( 
            /* [in] */ BOOL bEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCaptivePortalSetting( 
            /* [in] */ CaptivePortalSettingType type,
            /* [out] */ __RPC__out CaptivePortalSettingState *pState,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetCaptivePortalSetting( 
            /* [in] */ CaptivePortalSettingType type,
            /* [in] */ CaptivePortalSettingState state,
            /* [in] */ __RPC__in BSTR szValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLimtedConnectivityState( 
            /* [retval][out] */ __RPC__out BOOL *pbIsLimitedConnectivity) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHighDwellNetworkState( 
            /* [retval][out] */ __RPC__out BOOL *pbIsHighDwellNetwork) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendTurnOnHint( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendEncourageHint( 
            /* [in] */ GUID guidRuleInstance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMediaStreamingState( 
            /* [out] */ __RPC__out BOOL *pfEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRandomizationStatus( 
            /* [out] */ __RPC__out WiFiRandomizationStatus *pStatus) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRandomizationStatus( 
            /* [in] */ WiFiRandomizationStatus status) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendUIRequest( 
            /* [in] */ DWORD dwRequestFlags,
            /* [in] */ DWORD dwDataSize,
            /* [in] */ __RPC__in BYTE *pbData,
            /* [out] */ __RPC__out WiFiCredentialRequest *pUserCreds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BlacklistProfile( 
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in BSTR bstrProfileName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiHandleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiHandle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiHandle * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegisterEventHandler )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ __RPC__in_opt IWiFiEventHandler *handler);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnregisterEventHandler )( 
            __RPC__in IWiFiHandle * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsRegistered )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out BOOL *bIsRegistered);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartScan )( 
            __RPC__in IWiFiHandle * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartScanEx )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ BOOL ensureWiFiOn);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScanForHidden )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ __RPC__in BSTR szSSID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConnectionState )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out WiFiConnectionState *connectionState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConnectionStateEx )( 
            __RPC__in IWiFiHandle * This,
            /* [out] */ __RPC__out WiFiConnectionState *connectionState,
            /* [unique] */ __RPC__deref_opt_in_opt IWiFiNetwork **ppWiFiNetwork);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSupportedEapList )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiSupportedEapMethodList **pWiFiSupportedEapMethodList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StopConnecting )( 
            __RPC__in IWiFiHandle * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StopHijackedConnection )( 
            __RPC__in IWiFiHandle * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SkipHijackedState )( 
            __RPC__in IWiFiHandle * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUIRequestDetails )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ DWORD requestHandle,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppDetails);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendRequestedCredentials )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ DWORD requestHandle,
            /* [in] */ __RPC__in WiFiCredentialRequest *creds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAlwaysSendUIRequests )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ BOOL bEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPowerState )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out WiFiPowerState *powerState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPowerStateEx )( 
            __RPC__in IWiFiHandle * This,
            /* [out] */ __RPC__out WiFiPowerState *powerState,
            /* [unique] */ __RPC__in_opt DWORD *pdwPowerFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPowerState )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiPowerState powerState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPowerStateEx )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiPowerState powerState,
            /* [in] */ WiFiPowerFlag powerFlag);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPowerStateAsync )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiPowerState powerState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPowerStateAsyncEx )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiPowerState powerState,
            /* [in] */ WiFiPowerFlag powerFlag);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPowerBackOnOption )( 
            __RPC__in IWiFiHandle * This,
            /* [out] */ __RPC__out WiFiPowerBackOnOption *pPowerBackOnOption,
            /* [retval][out] */ __RPC__out DWORD *pdwTimer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPowerBackOnOption )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiPowerBackOnOption powerBackOnOption,
            /* [in] */ DWORD dwTimer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPromptingState )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out WiFiPromptingState *promptingState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPromptingState )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiPromptingState promptingState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetScanMode )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out WiFiScanMode *scanMode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetScanMode )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiScanMode scanMode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHijackedUrl )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *szUrl);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAvailableNetworkList )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetworkList **networkList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNetworkBssList )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ __RPC__in PDOT11_SSID pDot11Ssid,
            /* [in] */ BOOL bSecurityEnabled,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiBssList **ppBssList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNetworkBssListEx )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ __RPC__in PDOT11_SSID pDot11Ssid,
            /* [in] */ BOOL bSecurityEnabled,
            /* [in] */ BOOL bBypassCache,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiBssList **ppBssList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentBssEntry )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out WiFiBssEntry *pBssEntry);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPreferredNetworkList )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ BOOL includeHotspotNetworks,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetworkList **networkList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPreferredNetworkListEx )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ BOOL includeHotspotNetworks,
            /* [in] */ WiFiNetworkListSortOption option,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetworkList **networkList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSocialNetworkList )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiSocialNetworkList **ppszSocialNetworkList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetExchangeOptInState )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out WiFiExchangeOptInState *pOptInState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetExchangeOptInState )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiExchangeOptInState optInState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSharedNetworks )( 
            __RPC__in IWiFiHandle * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProfileSharingState )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in BSTR bstrProfileName,
            /* [retval][out] */ __RPC__out WiFiNetworkExchangeState *pSharingState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProfileSharingState )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in BSTR bstrProfileName,
            /* [in] */ WiFiNetworkExchangeState sharingState,
            /* [unique][in] */ __RPC__in_opt BSTR inputPassword);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSharedPassword )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ __RPC__in BSTR bstrSsid,
            /* [in] */ __RPC__in BSTR bstrBssid,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrPassword);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOptInStatusTestHook )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrResponse);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCertificatesFound )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiCertStore wifiCertStore);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAvailableCertificatesList )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiCertStore wifiCertStore,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiCertificateList **pAdapterProperties);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAvailableCertificatesListEx )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiCertStore wifiCertStore,
            /* [in] */ BOOL filterForTlsAuth,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiCertificateList **pAdapterProperties);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHotspotStatus )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out BOOL *pbEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHotspotStatusString )( 
            __RPC__in IWiFiHandle * This,
            /* [out] */ __RPC__out WiFiHotspotStatus *pStatus,
            /* [retval][out] */ __RPC__out BOOL *pbUseDefault);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetHotspotStatus )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ BOOL bEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAdapterManager )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiAdapterManager **ppAdapterManager);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDecryptedWlanProfile )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ __RPC__in BSTR bstrProfileName,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrProfileXml);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetActionRequired )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiActionRequiredFlag actionRequiredFlag);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAutoConnectNetworksList )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiAutoConnectList **ppAutoConnectList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ForceLowPowerState )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ BOOL bIsLowPower);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAutoConnectStatus )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out WiFiAutoConnectOptInState *pAutoConnectState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAutoConnectStatus )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiAutoConnectOptInState autoConnectState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FreeTileManagerMemory )( 
            __RPC__in IWiFiHandle * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ProvisionHotspotApp )( 
            __RPC__in IWiFiHandle * This,
            /* [unique][in] */ __RPC__in_opt BSTR bstrPackageFamilyName,
            /* [unique][in] */ __RPC__in_opt BSTR bstrPackageFullName,
            /* [in] */ __RPC__in BSTR bstrDoc,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrResult);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProvideCaptivePortalDetailsStatus )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out BOOL *pbEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProvideCaptivePortalDetailsStatus )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ BOOL bEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCaptivePortalSetting )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ CaptivePortalSettingType type,
            /* [out] */ __RPC__out CaptivePortalSettingState *pState,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetCaptivePortalSetting )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ CaptivePortalSettingType type,
            /* [in] */ CaptivePortalSettingState state,
            /* [in] */ __RPC__in BSTR szValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            __RPC__in IWiFiHandle * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLimtedConnectivityState )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsLimitedConnectivity);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHighDwellNetworkState )( 
            __RPC__in IWiFiHandle * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsHighDwellNetwork);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendTurnOnHint )( 
            __RPC__in IWiFiHandle * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendEncourageHint )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ GUID guidRuleInstance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMediaStreamingState )( 
            __RPC__in IWiFiHandle * This,
            /* [out] */ __RPC__out BOOL *pfEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRandomizationStatus )( 
            __RPC__in IWiFiHandle * This,
            /* [out] */ __RPC__out WiFiRandomizationStatus *pStatus);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRandomizationStatus )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ WiFiRandomizationStatus status);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendUIRequest )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ DWORD dwRequestFlags,
            /* [in] */ DWORD dwDataSize,
            /* [in] */ __RPC__in BYTE *pbData,
            /* [out] */ __RPC__out WiFiCredentialRequest *pUserCreds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BlacklistProfile )( 
            __RPC__in IWiFiHandle * This,
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in BSTR bstrProfileName);
        
        END_INTERFACE
    } IWiFiHandleVtbl;

    interface IWiFiHandle
    {
        CONST_VTBL struct IWiFiHandleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiHandle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiHandle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiHandle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiHandle_RegisterEventHandler(This,handler)	\
    ( (This)->lpVtbl -> RegisterEventHandler(This,handler) ) 

#define IWiFiHandle_UnregisterEventHandler(This)	\
    ( (This)->lpVtbl -> UnregisterEventHandler(This) ) 

#define IWiFiHandle_IsRegistered(This,bIsRegistered)	\
    ( (This)->lpVtbl -> IsRegistered(This,bIsRegistered) ) 

#define IWiFiHandle_StartScan(This)	\
    ( (This)->lpVtbl -> StartScan(This) ) 

#define IWiFiHandle_StartScanEx(This,ensureWiFiOn)	\
    ( (This)->lpVtbl -> StartScanEx(This,ensureWiFiOn) ) 

#define IWiFiHandle_ScanForHidden(This,szSSID)	\
    ( (This)->lpVtbl -> ScanForHidden(This,szSSID) ) 

#define IWiFiHandle_GetConnectionState(This,connectionState)	\
    ( (This)->lpVtbl -> GetConnectionState(This,connectionState) ) 

#define IWiFiHandle_GetConnectionStateEx(This,connectionState,ppWiFiNetwork)	\
    ( (This)->lpVtbl -> GetConnectionStateEx(This,connectionState,ppWiFiNetwork) ) 

#define IWiFiHandle_GetSupportedEapList(This,pWiFiSupportedEapMethodList)	\
    ( (This)->lpVtbl -> GetSupportedEapList(This,pWiFiSupportedEapMethodList) ) 

#define IWiFiHandle_StopConnecting(This)	\
    ( (This)->lpVtbl -> StopConnecting(This) ) 

#define IWiFiHandle_StopHijackedConnection(This)	\
    ( (This)->lpVtbl -> StopHijackedConnection(This) ) 

#define IWiFiHandle_SkipHijackedState(This)	\
    ( (This)->lpVtbl -> SkipHijackedState(This) ) 

#define IWiFiHandle_GetUIRequestDetails(This,requestHandle,ppDetails)	\
    ( (This)->lpVtbl -> GetUIRequestDetails(This,requestHandle,ppDetails) ) 

#define IWiFiHandle_SendRequestedCredentials(This,requestHandle,creds)	\
    ( (This)->lpVtbl -> SendRequestedCredentials(This,requestHandle,creds) ) 

#define IWiFiHandle_SetAlwaysSendUIRequests(This,bEnabled)	\
    ( (This)->lpVtbl -> SetAlwaysSendUIRequests(This,bEnabled) ) 

#define IWiFiHandle_GetPowerState(This,powerState)	\
    ( (This)->lpVtbl -> GetPowerState(This,powerState) ) 

#define IWiFiHandle_GetPowerStateEx(This,powerState,pdwPowerFlags)	\
    ( (This)->lpVtbl -> GetPowerStateEx(This,powerState,pdwPowerFlags) ) 

#define IWiFiHandle_SetPowerState(This,powerState)	\
    ( (This)->lpVtbl -> SetPowerState(This,powerState) ) 

#define IWiFiHandle_SetPowerStateEx(This,powerState,powerFlag)	\
    ( (This)->lpVtbl -> SetPowerStateEx(This,powerState,powerFlag) ) 

#define IWiFiHandle_SetPowerStateAsync(This,powerState)	\
    ( (This)->lpVtbl -> SetPowerStateAsync(This,powerState) ) 

#define IWiFiHandle_SetPowerStateAsyncEx(This,powerState,powerFlag)	\
    ( (This)->lpVtbl -> SetPowerStateAsyncEx(This,powerState,powerFlag) ) 

#define IWiFiHandle_GetPowerBackOnOption(This,pPowerBackOnOption,pdwTimer)	\
    ( (This)->lpVtbl -> GetPowerBackOnOption(This,pPowerBackOnOption,pdwTimer) ) 

#define IWiFiHandle_SetPowerBackOnOption(This,powerBackOnOption,dwTimer)	\
    ( (This)->lpVtbl -> SetPowerBackOnOption(This,powerBackOnOption,dwTimer) ) 

#define IWiFiHandle_GetPromptingState(This,promptingState)	\
    ( (This)->lpVtbl -> GetPromptingState(This,promptingState) ) 

#define IWiFiHandle_SetPromptingState(This,promptingState)	\
    ( (This)->lpVtbl -> SetPromptingState(This,promptingState) ) 

#define IWiFiHandle_GetScanMode(This,scanMode)	\
    ( (This)->lpVtbl -> GetScanMode(This,scanMode) ) 

#define IWiFiHandle_SetScanMode(This,scanMode)	\
    ( (This)->lpVtbl -> SetScanMode(This,scanMode) ) 

#define IWiFiHandle_GetHijackedUrl(This,szUrl)	\
    ( (This)->lpVtbl -> GetHijackedUrl(This,szUrl) ) 

#define IWiFiHandle_GetAvailableNetworkList(This,networkList)	\
    ( (This)->lpVtbl -> GetAvailableNetworkList(This,networkList) ) 

#define IWiFiHandle_GetNetworkBssList(This,pDot11Ssid,bSecurityEnabled,ppBssList)	\
    ( (This)->lpVtbl -> GetNetworkBssList(This,pDot11Ssid,bSecurityEnabled,ppBssList) ) 

#define IWiFiHandle_GetNetworkBssListEx(This,pDot11Ssid,bSecurityEnabled,bBypassCache,ppBssList)	\
    ( (This)->lpVtbl -> GetNetworkBssListEx(This,pDot11Ssid,bSecurityEnabled,bBypassCache,ppBssList) ) 

#define IWiFiHandle_GetCurrentBssEntry(This,pBssEntry)	\
    ( (This)->lpVtbl -> GetCurrentBssEntry(This,pBssEntry) ) 

#define IWiFiHandle_GetPreferredNetworkList(This,includeHotspotNetworks,networkList)	\
    ( (This)->lpVtbl -> GetPreferredNetworkList(This,includeHotspotNetworks,networkList) ) 

#define IWiFiHandle_GetPreferredNetworkListEx(This,includeHotspotNetworks,option,networkList)	\
    ( (This)->lpVtbl -> GetPreferredNetworkListEx(This,includeHotspotNetworks,option,networkList) ) 

#define IWiFiHandle_GetSocialNetworkList(This,ppszSocialNetworkList)	\
    ( (This)->lpVtbl -> GetSocialNetworkList(This,ppszSocialNetworkList) ) 

#define IWiFiHandle_GetExchangeOptInState(This,pOptInState)	\
    ( (This)->lpVtbl -> GetExchangeOptInState(This,pOptInState) ) 

#define IWiFiHandle_SetExchangeOptInState(This,optInState)	\
    ( (This)->lpVtbl -> SetExchangeOptInState(This,optInState) ) 

#define IWiFiHandle_SendSharedNetworks(This)	\
    ( (This)->lpVtbl -> SendSharedNetworks(This) ) 

#define IWiFiHandle_GetProfileSharingState(This,pInterfaceGuid,bstrProfileName,pSharingState)	\
    ( (This)->lpVtbl -> GetProfileSharingState(This,pInterfaceGuid,bstrProfileName,pSharingState) ) 

#define IWiFiHandle_SetProfileSharingState(This,pInterfaceGuid,bstrProfileName,sharingState,inputPassword)	\
    ( (This)->lpVtbl -> SetProfileSharingState(This,pInterfaceGuid,bstrProfileName,sharingState,inputPassword) ) 

#define IWiFiHandle_GetSharedPassword(This,bstrSsid,bstrBssid,pbstrPassword)	\
    ( (This)->lpVtbl -> GetSharedPassword(This,bstrSsid,bstrBssid,pbstrPassword) ) 

#define IWiFiHandle_GetOptInStatusTestHook(This,pbstrResponse)	\
    ( (This)->lpVtbl -> GetOptInStatusTestHook(This,pbstrResponse) ) 

#define IWiFiHandle_GetCertificatesFound(This,wifiCertStore)	\
    ( (This)->lpVtbl -> GetCertificatesFound(This,wifiCertStore) ) 

#define IWiFiHandle_GetAvailableCertificatesList(This,wifiCertStore,pAdapterProperties)	\
    ( (This)->lpVtbl -> GetAvailableCertificatesList(This,wifiCertStore,pAdapterProperties) ) 

#define IWiFiHandle_GetAvailableCertificatesListEx(This,wifiCertStore,filterForTlsAuth,pAdapterProperties)	\
    ( (This)->lpVtbl -> GetAvailableCertificatesListEx(This,wifiCertStore,filterForTlsAuth,pAdapterProperties) ) 

#define IWiFiHandle_GetHotspotStatus(This,pbEnabled)	\
    ( (This)->lpVtbl -> GetHotspotStatus(This,pbEnabled) ) 

#define IWiFiHandle_GetHotspotStatusString(This,pStatus,pbUseDefault)	\
    ( (This)->lpVtbl -> GetHotspotStatusString(This,pStatus,pbUseDefault) ) 

#define IWiFiHandle_SetHotspotStatus(This,bEnabled)	\
    ( (This)->lpVtbl -> SetHotspotStatus(This,bEnabled) ) 

#define IWiFiHandle_GetAdapterManager(This,ppAdapterManager)	\
    ( (This)->lpVtbl -> GetAdapterManager(This,ppAdapterManager) ) 

#define IWiFiHandle_GetDecryptedWlanProfile(This,bstrProfileName,pbstrProfileXml)	\
    ( (This)->lpVtbl -> GetDecryptedWlanProfile(This,bstrProfileName,pbstrProfileXml) ) 

#define IWiFiHandle_SetActionRequired(This,actionRequiredFlag)	\
    ( (This)->lpVtbl -> SetActionRequired(This,actionRequiredFlag) ) 

#define IWiFiHandle_GetAutoConnectNetworksList(This,ppAutoConnectList)	\
    ( (This)->lpVtbl -> GetAutoConnectNetworksList(This,ppAutoConnectList) ) 

#define IWiFiHandle_ForceLowPowerState(This,bIsLowPower)	\
    ( (This)->lpVtbl -> ForceLowPowerState(This,bIsLowPower) ) 

#define IWiFiHandle_GetAutoConnectStatus(This,pAutoConnectState)	\
    ( (This)->lpVtbl -> GetAutoConnectStatus(This,pAutoConnectState) ) 

#define IWiFiHandle_SetAutoConnectStatus(This,autoConnectState)	\
    ( (This)->lpVtbl -> SetAutoConnectStatus(This,autoConnectState) ) 

#define IWiFiHandle_FreeTileManagerMemory(This)	\
    ( (This)->lpVtbl -> FreeTileManagerMemory(This) ) 

#define IWiFiHandle_ProvisionHotspotApp(This,bstrPackageFamilyName,bstrPackageFullName,bstrDoc,pbstrResult)	\
    ( (This)->lpVtbl -> ProvisionHotspotApp(This,bstrPackageFamilyName,bstrPackageFullName,bstrDoc,pbstrResult) ) 

#define IWiFiHandle_GetProvideCaptivePortalDetailsStatus(This,pbEnabled)	\
    ( (This)->lpVtbl -> GetProvideCaptivePortalDetailsStatus(This,pbEnabled) ) 

#define IWiFiHandle_SetProvideCaptivePortalDetailsStatus(This,bEnabled)	\
    ( (This)->lpVtbl -> SetProvideCaptivePortalDetailsStatus(This,bEnabled) ) 

#define IWiFiHandle_GetCaptivePortalSetting(This,type,pState,pszValue)	\
    ( (This)->lpVtbl -> GetCaptivePortalSetting(This,type,pState,pszValue) ) 

#define IWiFiHandle_SetCaptivePortalSetting(This,type,state,szValue)	\
    ( (This)->lpVtbl -> SetCaptivePortalSetting(This,type,state,szValue) ) 

#define IWiFiHandle_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IWiFiHandle_GetLimtedConnectivityState(This,pbIsLimitedConnectivity)	\
    ( (This)->lpVtbl -> GetLimtedConnectivityState(This,pbIsLimitedConnectivity) ) 

#define IWiFiHandle_GetHighDwellNetworkState(This,pbIsHighDwellNetwork)	\
    ( (This)->lpVtbl -> GetHighDwellNetworkState(This,pbIsHighDwellNetwork) ) 

#define IWiFiHandle_SendTurnOnHint(This)	\
    ( (This)->lpVtbl -> SendTurnOnHint(This) ) 

#define IWiFiHandle_SendEncourageHint(This,guidRuleInstance)	\
    ( (This)->lpVtbl -> SendEncourageHint(This,guidRuleInstance) ) 

#define IWiFiHandle_GetMediaStreamingState(This,pfEnabled)	\
    ( (This)->lpVtbl -> GetMediaStreamingState(This,pfEnabled) ) 

#define IWiFiHandle_GetRandomizationStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetRandomizationStatus(This,pStatus) ) 

#define IWiFiHandle_SetRandomizationStatus(This,status)	\
    ( (This)->lpVtbl -> SetRandomizationStatus(This,status) ) 

#define IWiFiHandle_SendUIRequest(This,dwRequestFlags,dwDataSize,pbData,pUserCreds)	\
    ( (This)->lpVtbl -> SendUIRequest(This,dwRequestFlags,dwDataSize,pbData,pUserCreds) ) 

#define IWiFiHandle_BlacklistProfile(This,pInterfaceGuid,bstrProfileName)	\
    ( (This)->lpVtbl -> BlacklistProfile(This,pInterfaceGuid,bstrProfileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiHandle_INTERFACE_DEFINED__ */


#ifndef __IWiFiAdapterManager_INTERFACE_DEFINED__
#define __IWiFiAdapterManager_INTERFACE_DEFINED__

/* interface IWiFiAdapterManager */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiAdapterManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-4601-8894-6D6F0E5EDDCD")
    IWiFiAdapterManager : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAdapterInfo( 
            /* [retval][out] */ __RPC__out WiFiAdapterInfo *pAdapterInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAdapterProperties( 
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [retval][out] */ __RPC__out WiFiAdapterProperties *pAdapterProperties) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAdapterProperties( 
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in WiFiAdapterProperties *pAdapterProperties) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddAdapterIpAddressEntry( 
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in WiFiAddr6 *pIpv6Address,
            /* [in] */ UINT8 PrefixLength,
            /* [in] */ UINT8 Origin,
            /* [in] */ ULONG ValidLifetime,
            /* [in] */ ULONG PreferredLifetime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAdapterIpAddressEntry( 
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in WiFiAddr6 *pIpv6Address) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAdapterIpAddressEntries( 
            /* [retval][out] */ __RPC__deref_out_opt IWiFiAddr6List **ppAddr6List) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetInterfaceGuid( 
            /* [retval][out] */ __RPC__out GUID *pInterfaceGuid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiAdapterManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiAdapterManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiAdapterManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiAdapterManager * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAdapterInfo )( 
            __RPC__in IWiFiAdapterManager * This,
            /* [retval][out] */ __RPC__out WiFiAdapterInfo *pAdapterInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAdapterProperties )( 
            __RPC__in IWiFiAdapterManager * This,
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [retval][out] */ __RPC__out WiFiAdapterProperties *pAdapterProperties);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAdapterProperties )( 
            __RPC__in IWiFiAdapterManager * This,
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in WiFiAdapterProperties *pAdapterProperties);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAdapterIpAddressEntry )( 
            __RPC__in IWiFiAdapterManager * This,
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in WiFiAddr6 *pIpv6Address,
            /* [in] */ UINT8 PrefixLength,
            /* [in] */ UINT8 Origin,
            /* [in] */ ULONG ValidLifetime,
            /* [in] */ ULONG PreferredLifetime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAdapterIpAddressEntry )( 
            __RPC__in IWiFiAdapterManager * This,
            /* [in] */ __RPC__in GUID *pInterfaceGuid,
            /* [in] */ __RPC__in WiFiAddr6 *pIpv6Address);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAdapterIpAddressEntries )( 
            __RPC__in IWiFiAdapterManager * This,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiAddr6List **ppAddr6List);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetInterfaceGuid )( 
            __RPC__in IWiFiAdapterManager * This,
            /* [retval][out] */ __RPC__out GUID *pInterfaceGuid);
        
        END_INTERFACE
    } IWiFiAdapterManagerVtbl;

    interface IWiFiAdapterManager
    {
        CONST_VTBL struct IWiFiAdapterManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiAdapterManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiAdapterManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiAdapterManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiAdapterManager_GetAdapterInfo(This,pAdapterInfo)	\
    ( (This)->lpVtbl -> GetAdapterInfo(This,pAdapterInfo) ) 

#define IWiFiAdapterManager_GetAdapterProperties(This,pInterfaceGuid,pAdapterProperties)	\
    ( (This)->lpVtbl -> GetAdapterProperties(This,pInterfaceGuid,pAdapterProperties) ) 

#define IWiFiAdapterManager_SetAdapterProperties(This,pInterfaceGuid,pAdapterProperties)	\
    ( (This)->lpVtbl -> SetAdapterProperties(This,pInterfaceGuid,pAdapterProperties) ) 

#define IWiFiAdapterManager_AddAdapterIpAddressEntry(This,pInterfaceGuid,pIpv6Address,PrefixLength,Origin,ValidLifetime,PreferredLifetime)	\
    ( (This)->lpVtbl -> AddAdapterIpAddressEntry(This,pInterfaceGuid,pIpv6Address,PrefixLength,Origin,ValidLifetime,PreferredLifetime) ) 

#define IWiFiAdapterManager_RemoveAdapterIpAddressEntry(This,pInterfaceGuid,pIpv6Address)	\
    ( (This)->lpVtbl -> RemoveAdapterIpAddressEntry(This,pInterfaceGuid,pIpv6Address) ) 

#define IWiFiAdapterManager_GetAdapterIpAddressEntries(This,ppAddr6List)	\
    ( (This)->lpVtbl -> GetAdapterIpAddressEntries(This,ppAddr6List) ) 

#define IWiFiAdapterManager_GetInterfaceGuid(This,pInterfaceGuid)	\
    ( (This)->lpVtbl -> GetInterfaceGuid(This,pInterfaceGuid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiAdapterManager_INTERFACE_DEFINED__ */


#ifndef __IWiFiNetwork_INTERFACE_DEFINED__
#define __IWiFiNetwork_INTERFACE_DEFINED__

/* interface IWiFiNetwork */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiNetwork;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-4602-8894-6D6F0E5EDDCD")
    IWiFiNetwork : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BOOL bImmediateAutoConnect,
            /* [in] */ BOOL markAsHidden) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureEx( 
            /* [in] */ BOOL bImmediateAutoConnect,
            /* [in] */ BOOL markAsHidden,
            /* [in] */ BOOL markAsManual,
            /* [in] */ BOOL forceUserConfigured) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureOneX( 
            /* [in] */ __RPC__in WiFiEapConfig *pEapConfig,
            /* [in] */ BOOL bImmediateAutoConnect,
            /* [in] */ BOOL markAsHidden) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureOneXEx( 
            /* [in] */ __RPC__in WiFiEapConfig *pEapConfig,
            /* [in] */ BOOL bImmediateAutoConnect,
            /* [in] */ BOOL markAsHidden,
            /* [in] */ BOOL markAsManual) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartConnecting( 
            /* [in] */ BOOL bDeleteOnFailure,
            /* [unique] */ __RPC__in_opt WiFiCredentialRequest *pWiFiCredentials) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteConfig( 
            /* [in] */ BOOL bWaitForResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteConfigEx( 
            /* [in] */ BOOL bWaitForResult,
            /* [in] */ BOOL bBlackListNetwork) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConfiguredState( 
            /* [retval][out] */ __RPC__out WiFiConfiguredState *pConfiguredState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConnectionState( 
            /* [retval][out] */ __RPC__out WiFiConnectionState *pConnState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHiddenState( 
            /* [retval][out] */ __RPC__out BOOL *bHidden) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHotspotState( 
            /* [retval][out] */ __RPC__out BOOL *bHotspot) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetExtStringID( 
            /* [retval][out] */ __RPC__out UINT *pStrID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUsername( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *szCredentials) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEapMethod( 
            /* [retval][out] */ __RPC__out WiFiEapMethod *pEapMethod) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProxyDetails( 
            /* [retval][out] */ __RPC__out WiFiProxyInfo *proxyInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProxyDetails( 
            /* [in] */ __RPC__in WiFiProxyInfo *proxyInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSecurityType( 
            /* [retval][out] */ __RPC__out WiFiSecurityType *secType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProfileSecurityType( 
            /* [retval][out] */ __RPC__out WiFiSecurityType *secType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCredentialType( 
            /* [retval][out] */ __RPC__out WiFiCredentialType *credType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSzSSID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *szSsid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsCmConnection( 
            /* [in] */ __RPC__in BSTR szCmConnName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNameMask( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *nameMask) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSSID( 
            /* [retval][out] */ __RPC__out DOT11_SSID *dot11Ssid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSecurityEnabled( 
            /* [retval][out] */ __RPC__out DWORD *bSecurityEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAuthAlgo( 
            /* [retval][out] */ __RPC__out DOT11_AUTH_ALGORITHM *dot11AuthAlgo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCipherAlgo( 
            /* [retval][out] */ __RPC__out DOT11_CIPHER_ALGORITHM *dot11CiphAlgo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNumberOfBSSIDs( 
            /* [retval][out] */ __RPC__out DWORD *dwNumBssid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSignalStrength( 
            /* [retval][out] */ __RPC__out DWORD *dwSignalStrength) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSmoothedSignalStrength( 
            /* [retval][out] */ __RPC__out DWORD *dwSmoothedSignalStrength) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSortFlags( 
            /* [retval][out] */ __RPC__out DWORD *dwSortFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetActionRequiredFlags( 
            /* [retval][out] */ __RPC__out WiFiActionRequiredFlag *pdwActionRequiredFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsProvisioned( 
            /* [retval][out] */ __RPC__out BOOL *bIsProvisioned) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HasConnected( 
            /* [retval][out] */ __RPC__out BOOL *bHasConnected) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAutoConnectInfo( 
            /* [retval][out] */ __RPC__out WiFiAutoConnectInfo *pAutoconnectInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBssidList( 
            /* [out] */ __RPC__out DWORD *pdwcMacAddresses,
            /* [out] */ __RPC__deref_out_opt WiFiMacAddress **ppMacAddresses) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAutomaticState( 
            /* [retval][out] */ __RPC__out BOOL *pbAutomatic) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAutomaticState( 
            /* [in] */ BOOL bAutomatic) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSharingState( 
            /* [retval][out] */ __RPC__out WiFiNetworkExchangeState *pShared) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSharingState( 
            /* [in] */ WiFiNetworkExchangeState shared,
            /* [unique][in] */ __RPC__in_opt BSTR inputPassword) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RequestLocalAccess( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFavoriteState( 
            /* [retval][out] */ __RPC__out WiFiNetworkFavoriteState *pState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFavoriteState( 
            /* [in] */ WiFiNetworkFavoriteState state) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDwellData( 
            /* [out] */ __RPC__out FILETIME *pLastConnect,
            /* [out] */ __RPC__out FLOAT *pTotalConnections,
            /* [out] */ __RPC__out FLOAT *pTotalDuration) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDwellData( 
            /* [in] */ __RPC__in FILETIME *pLastConnect,
            /* [in] */ __RPC__in FLOAT *pTotalConnections,
            /* [in] */ __RPC__in FLOAT *pTotalDuration) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProfileRandomizationMode( 
            /* [out] */ __RPC__out WiFiProfileRandomizationMode *pMode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProfileRandomizationMode( 
            /* [in] */ WiFiProfileRandomizationMode mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBssid( 
            /* [in] */ __RPC__in_ecount_full(6) WiFiMacAddress bssid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProfileName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *szProfileName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartConnectingDiscovery( 
            /* [in] */ BOOL markAsHidden,
            /* [in] */ BOOL bDeleteOnFailure,
            /* [unique] */ __RPC__in_opt WiFiCredentialRequest *pWiFiCredentials) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiNetworkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiNetwork * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiNetwork * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ BOOL bImmediateAutoConnect,
            /* [in] */ BOOL markAsHidden);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureEx )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ BOOL bImmediateAutoConnect,
            /* [in] */ BOOL markAsHidden,
            /* [in] */ BOOL markAsManual,
            /* [in] */ BOOL forceUserConfigured);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureOneX )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ __RPC__in WiFiEapConfig *pEapConfig,
            /* [in] */ BOOL bImmediateAutoConnect,
            /* [in] */ BOOL markAsHidden);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureOneXEx )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ __RPC__in WiFiEapConfig *pEapConfig,
            /* [in] */ BOOL bImmediateAutoConnect,
            /* [in] */ BOOL markAsHidden,
            /* [in] */ BOOL markAsManual);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartConnecting )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ BOOL bDeleteOnFailure,
            /* [unique] */ __RPC__in_opt WiFiCredentialRequest *pWiFiCredentials);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteConfig )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ BOOL bWaitForResult);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteConfigEx )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ BOOL bWaitForResult,
            /* [in] */ BOOL bBlackListNetwork);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConfiguredState )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiConfiguredState *pConfiguredState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConnectionState )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiConnectionState *pConnState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHiddenState )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out BOOL *bHidden);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHotspotState )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out BOOL *bHotspot);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetExtStringID )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out UINT *pStrID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUsername )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *szCredentials);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEapMethod )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiEapMethod *pEapMethod);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProxyDetails )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiProxyInfo *proxyInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProxyDetails )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ __RPC__in WiFiProxyInfo *proxyInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSecurityType )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiSecurityType *secType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProfileSecurityType )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiSecurityType *secType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCredentialType )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiCredentialType *credType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSzSSID )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *szSsid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsCmConnection )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ __RPC__in BSTR szCmConnName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNameMask )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *nameMask);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSSID )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out DOT11_SSID *dot11Ssid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSecurityEnabled )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out DWORD *bSecurityEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAuthAlgo )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out DOT11_AUTH_ALGORITHM *dot11AuthAlgo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCipherAlgo )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out DOT11_CIPHER_ALGORITHM *dot11CiphAlgo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfBSSIDs )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out DWORD *dwNumBssid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSignalStrength )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out DWORD *dwSignalStrength);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSmoothedSignalStrength )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out DWORD *dwSmoothedSignalStrength);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSortFlags )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out DWORD *dwSortFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetActionRequiredFlags )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiActionRequiredFlag *pdwActionRequiredFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsProvisioned )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out BOOL *bIsProvisioned);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasConnected )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out BOOL *bHasConnected);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAutoConnectInfo )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiAutoConnectInfo *pAutoconnectInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBssidList )( 
            __RPC__in IWiFiNetwork * This,
            /* [out] */ __RPC__out DWORD *pdwcMacAddresses,
            /* [out] */ __RPC__deref_out_opt WiFiMacAddress **ppMacAddresses);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAutomaticState )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out BOOL *pbAutomatic);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAutomaticState )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ BOOL bAutomatic);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSharingState )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiNetworkExchangeState *pShared);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSharingState )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ WiFiNetworkExchangeState shared,
            /* [unique][in] */ __RPC__in_opt BSTR inputPassword);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RequestLocalAccess )( 
            __RPC__in IWiFiNetwork * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFavoriteState )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__out WiFiNetworkFavoriteState *pState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFavoriteState )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ WiFiNetworkFavoriteState state);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDwellData )( 
            __RPC__in IWiFiNetwork * This,
            /* [out] */ __RPC__out FILETIME *pLastConnect,
            /* [out] */ __RPC__out FLOAT *pTotalConnections,
            /* [out] */ __RPC__out FLOAT *pTotalDuration);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDwellData )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ __RPC__in FILETIME *pLastConnect,
            /* [in] */ __RPC__in FLOAT *pTotalConnections,
            /* [in] */ __RPC__in FLOAT *pTotalDuration);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProfileRandomizationMode )( 
            __RPC__in IWiFiNetwork * This,
            /* [out] */ __RPC__out WiFiProfileRandomizationMode *pMode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProfileRandomizationMode )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ WiFiProfileRandomizationMode mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBssid )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ __RPC__in_ecount_full(6) WiFiMacAddress bssid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProfileName )( 
            __RPC__in IWiFiNetwork * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *szProfileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartConnectingDiscovery )( 
            __RPC__in IWiFiNetwork * This,
            /* [in] */ BOOL markAsHidden,
            /* [in] */ BOOL bDeleteOnFailure,
            /* [unique] */ __RPC__in_opt WiFiCredentialRequest *pWiFiCredentials);
        
        END_INTERFACE
    } IWiFiNetworkVtbl;

    interface IWiFiNetwork
    {
        CONST_VTBL struct IWiFiNetworkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiNetwork_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiNetwork_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiNetwork_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiNetwork_Configure(This,bImmediateAutoConnect,markAsHidden)	\
    ( (This)->lpVtbl -> Configure(This,bImmediateAutoConnect,markAsHidden) ) 

#define IWiFiNetwork_ConfigureEx(This,bImmediateAutoConnect,markAsHidden,markAsManual,forceUserConfigured)	\
    ( (This)->lpVtbl -> ConfigureEx(This,bImmediateAutoConnect,markAsHidden,markAsManual,forceUserConfigured) ) 

#define IWiFiNetwork_ConfigureOneX(This,pEapConfig,bImmediateAutoConnect,markAsHidden)	\
    ( (This)->lpVtbl -> ConfigureOneX(This,pEapConfig,bImmediateAutoConnect,markAsHidden) ) 

#define IWiFiNetwork_ConfigureOneXEx(This,pEapConfig,bImmediateAutoConnect,markAsHidden,markAsManual)	\
    ( (This)->lpVtbl -> ConfigureOneXEx(This,pEapConfig,bImmediateAutoConnect,markAsHidden,markAsManual) ) 

#define IWiFiNetwork_StartConnecting(This,bDeleteOnFailure,pWiFiCredentials)	\
    ( (This)->lpVtbl -> StartConnecting(This,bDeleteOnFailure,pWiFiCredentials) ) 

#define IWiFiNetwork_DeleteConfig(This,bWaitForResult)	\
    ( (This)->lpVtbl -> DeleteConfig(This,bWaitForResult) ) 

#define IWiFiNetwork_DeleteConfigEx(This,bWaitForResult,bBlackListNetwork)	\
    ( (This)->lpVtbl -> DeleteConfigEx(This,bWaitForResult,bBlackListNetwork) ) 

#define IWiFiNetwork_GetConfiguredState(This,pConfiguredState)	\
    ( (This)->lpVtbl -> GetConfiguredState(This,pConfiguredState) ) 

#define IWiFiNetwork_GetConnectionState(This,pConnState)	\
    ( (This)->lpVtbl -> GetConnectionState(This,pConnState) ) 

#define IWiFiNetwork_GetHiddenState(This,bHidden)	\
    ( (This)->lpVtbl -> GetHiddenState(This,bHidden) ) 

#define IWiFiNetwork_GetHotspotState(This,bHotspot)	\
    ( (This)->lpVtbl -> GetHotspotState(This,bHotspot) ) 

#define IWiFiNetwork_GetExtStringID(This,pStrID)	\
    ( (This)->lpVtbl -> GetExtStringID(This,pStrID) ) 

#define IWiFiNetwork_GetUsername(This,szCredentials)	\
    ( (This)->lpVtbl -> GetUsername(This,szCredentials) ) 

#define IWiFiNetwork_GetEapMethod(This,pEapMethod)	\
    ( (This)->lpVtbl -> GetEapMethod(This,pEapMethod) ) 

#define IWiFiNetwork_GetProxyDetails(This,proxyInfo)	\
    ( (This)->lpVtbl -> GetProxyDetails(This,proxyInfo) ) 

#define IWiFiNetwork_SetProxyDetails(This,proxyInfo)	\
    ( (This)->lpVtbl -> SetProxyDetails(This,proxyInfo) ) 

#define IWiFiNetwork_GetSecurityType(This,secType)	\
    ( (This)->lpVtbl -> GetSecurityType(This,secType) ) 

#define IWiFiNetwork_GetProfileSecurityType(This,secType)	\
    ( (This)->lpVtbl -> GetProfileSecurityType(This,secType) ) 

#define IWiFiNetwork_GetCredentialType(This,credType)	\
    ( (This)->lpVtbl -> GetCredentialType(This,credType) ) 

#define IWiFiNetwork_GetSzSSID(This,szSsid)	\
    ( (This)->lpVtbl -> GetSzSSID(This,szSsid) ) 

#define IWiFiNetwork_IsCmConnection(This,szCmConnName)	\
    ( (This)->lpVtbl -> IsCmConnection(This,szCmConnName) ) 

#define IWiFiNetwork_GetNameMask(This,nameMask)	\
    ( (This)->lpVtbl -> GetNameMask(This,nameMask) ) 

#define IWiFiNetwork_GetSSID(This,dot11Ssid)	\
    ( (This)->lpVtbl -> GetSSID(This,dot11Ssid) ) 

#define IWiFiNetwork_GetSecurityEnabled(This,bSecurityEnabled)	\
    ( (This)->lpVtbl -> GetSecurityEnabled(This,bSecurityEnabled) ) 

#define IWiFiNetwork_GetAuthAlgo(This,dot11AuthAlgo)	\
    ( (This)->lpVtbl -> GetAuthAlgo(This,dot11AuthAlgo) ) 

#define IWiFiNetwork_GetCipherAlgo(This,dot11CiphAlgo)	\
    ( (This)->lpVtbl -> GetCipherAlgo(This,dot11CiphAlgo) ) 

#define IWiFiNetwork_GetNumberOfBSSIDs(This,dwNumBssid)	\
    ( (This)->lpVtbl -> GetNumberOfBSSIDs(This,dwNumBssid) ) 

#define IWiFiNetwork_GetSignalStrength(This,dwSignalStrength)	\
    ( (This)->lpVtbl -> GetSignalStrength(This,dwSignalStrength) ) 

#define IWiFiNetwork_GetSmoothedSignalStrength(This,dwSmoothedSignalStrength)	\
    ( (This)->lpVtbl -> GetSmoothedSignalStrength(This,dwSmoothedSignalStrength) ) 

#define IWiFiNetwork_GetSortFlags(This,dwSortFlags)	\
    ( (This)->lpVtbl -> GetSortFlags(This,dwSortFlags) ) 

#define IWiFiNetwork_GetActionRequiredFlags(This,pdwActionRequiredFlags)	\
    ( (This)->lpVtbl -> GetActionRequiredFlags(This,pdwActionRequiredFlags) ) 

#define IWiFiNetwork_IsProvisioned(This,bIsProvisioned)	\
    ( (This)->lpVtbl -> IsProvisioned(This,bIsProvisioned) ) 

#define IWiFiNetwork_HasConnected(This,bHasConnected)	\
    ( (This)->lpVtbl -> HasConnected(This,bHasConnected) ) 

#define IWiFiNetwork_GetAutoConnectInfo(This,pAutoconnectInfo)	\
    ( (This)->lpVtbl -> GetAutoConnectInfo(This,pAutoconnectInfo) ) 

#define IWiFiNetwork_GetBssidList(This,pdwcMacAddresses,ppMacAddresses)	\
    ( (This)->lpVtbl -> GetBssidList(This,pdwcMacAddresses,ppMacAddresses) ) 

#define IWiFiNetwork_GetAutomaticState(This,pbAutomatic)	\
    ( (This)->lpVtbl -> GetAutomaticState(This,pbAutomatic) ) 

#define IWiFiNetwork_SetAutomaticState(This,bAutomatic)	\
    ( (This)->lpVtbl -> SetAutomaticState(This,bAutomatic) ) 

#define IWiFiNetwork_GetSharingState(This,pShared)	\
    ( (This)->lpVtbl -> GetSharingState(This,pShared) ) 

#define IWiFiNetwork_SetSharingState(This,shared,inputPassword)	\
    ( (This)->lpVtbl -> SetSharingState(This,shared,inputPassword) ) 

#define IWiFiNetwork_RequestLocalAccess(This)	\
    ( (This)->lpVtbl -> RequestLocalAccess(This) ) 

#define IWiFiNetwork_GetFavoriteState(This,pState)	\
    ( (This)->lpVtbl -> GetFavoriteState(This,pState) ) 

#define IWiFiNetwork_SetFavoriteState(This,state)	\
    ( (This)->lpVtbl -> SetFavoriteState(This,state) ) 

#define IWiFiNetwork_GetDwellData(This,pLastConnect,pTotalConnections,pTotalDuration)	\
    ( (This)->lpVtbl -> GetDwellData(This,pLastConnect,pTotalConnections,pTotalDuration) ) 

#define IWiFiNetwork_SetDwellData(This,pLastConnect,pTotalConnections,pTotalDuration)	\
    ( (This)->lpVtbl -> SetDwellData(This,pLastConnect,pTotalConnections,pTotalDuration) ) 

#define IWiFiNetwork_GetProfileRandomizationMode(This,pMode)	\
    ( (This)->lpVtbl -> GetProfileRandomizationMode(This,pMode) ) 

#define IWiFiNetwork_SetProfileRandomizationMode(This,mode)	\
    ( (This)->lpVtbl -> SetProfileRandomizationMode(This,mode) ) 

#define IWiFiNetwork_SetBssid(This,bssid)	\
    ( (This)->lpVtbl -> SetBssid(This,bssid) ) 

#define IWiFiNetwork_GetProfileName(This,szProfileName)	\
    ( (This)->lpVtbl -> GetProfileName(This,szProfileName) ) 

#define IWiFiNetwork_StartConnectingDiscovery(This,markAsHidden,bDeleteOnFailure,pWiFiCredentials)	\
    ( (This)->lpVtbl -> StartConnectingDiscovery(This,markAsHidden,bDeleteOnFailure,pWiFiCredentials) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiNetwork_INTERFACE_DEFINED__ */


#ifndef __IWiFiNetworkList_INTERFACE_DEFINED__
#define __IWiFiNetworkList_INTERFACE_DEFINED__

/* interface IWiFiNetworkList */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiNetworkList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-4603-8894-6D6F0E5EDDCD")
    IWiFiNetworkList : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetwork **ppWifiNetwork) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [retval][out] */ __RPC__out DWORD *pdwSize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBySzSsid( 
            /* [in] */ __RPC__in BSTR szSsid,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetwork **ppWifiNetwork) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetByCmConnName( 
            /* [in] */ __RPC__in BSTR szCmConnName,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetwork **ppWifiNetwork) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiNetworkListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiNetworkList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiNetworkList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiNetworkList * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IWiFiNetworkList * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetwork **ppWifiNetwork);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Size )( 
            __RPC__in IWiFiNetworkList * This,
            /* [retval][out] */ __RPC__out DWORD *pdwSize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBySzSsid )( 
            __RPC__in IWiFiNetworkList * This,
            /* [in] */ __RPC__in BSTR szSsid,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetwork **ppWifiNetwork);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetByCmConnName )( 
            __RPC__in IWiFiNetworkList * This,
            /* [in] */ __RPC__in BSTR szCmConnName,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiNetwork **ppWifiNetwork);
        
        END_INTERFACE
    } IWiFiNetworkListVtbl;

    interface IWiFiNetworkList
    {
        CONST_VTBL struct IWiFiNetworkListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiNetworkList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiNetworkList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiNetworkList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiNetworkList_Get(This,dwIndex,ppWifiNetwork)	\
    ( (This)->lpVtbl -> Get(This,dwIndex,ppWifiNetwork) ) 

#define IWiFiNetworkList_Size(This,pdwSize)	\
    ( (This)->lpVtbl -> Size(This,pdwSize) ) 

#define IWiFiNetworkList_GetBySzSsid(This,szSsid,ppWifiNetwork)	\
    ( (This)->lpVtbl -> GetBySzSsid(This,szSsid,ppWifiNetwork) ) 

#define IWiFiNetworkList_GetByCmConnName(This,szCmConnName,ppWifiNetwork)	\
    ( (This)->lpVtbl -> GetByCmConnName(This,szCmConnName,ppWifiNetwork) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiNetworkList_INTERFACE_DEFINED__ */


#ifndef __IWiFiBssList_INTERFACE_DEFINED__
#define __IWiFiBssList_INTERFACE_DEFINED__

/* interface IWiFiBssList */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiBssList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-4604-8894-6D6F0E5EDDCD")
    IWiFiBssList : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__out WiFiBssEntry *pWifiBssEntry) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [retval][out] */ __RPC__out DWORD *pdwSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiBssListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiBssList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiBssList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiBssList * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IWiFiBssList * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__out WiFiBssEntry *pWifiBssEntry);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Size )( 
            __RPC__in IWiFiBssList * This,
            /* [retval][out] */ __RPC__out DWORD *pdwSize);
        
        END_INTERFACE
    } IWiFiBssListVtbl;

    interface IWiFiBssList
    {
        CONST_VTBL struct IWiFiBssListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiBssList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiBssList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiBssList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiBssList_Get(This,dwIndex,pWifiBssEntry)	\
    ( (This)->lpVtbl -> Get(This,dwIndex,pWifiBssEntry) ) 

#define IWiFiBssList_Size(This,pdwSize)	\
    ( (This)->lpVtbl -> Size(This,pdwSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiBssList_INTERFACE_DEFINED__ */


#ifndef __IWiFiCertificate_INTERFACE_DEFINED__
#define __IWiFiCertificate_INTERFACE_DEFINED__

/* interface IWiFiCertificate */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiCertificate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-4605-8894-6D6F0E5EDDCD")
    IWiFiCertificate : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetExpired( 
            /* [retval][out] */ __RPC__out BOOL *bIsExpired) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSystemTimeNotBefore( 
            /* [retval][out] */ __RPC__out SYSTEMTIME *pSystemTimeNotBefore) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSystemTimeNotAfter( 
            /* [retval][out] */ __RPC__out SYSTEMTIME *pSystemTimeNotAfter) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetByteString( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszByteString) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSubjectName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszSubjectName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIssuerName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszIssuerName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSerialNumber( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszSerialNumber) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHash( 
            /* [retval][out] */ __RPC__out WiFiCertificateHash *pCertificateHash) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiCertificateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiCertificate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiCertificate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiCertificate * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetExpired )( 
            __RPC__in IWiFiCertificate * This,
            /* [retval][out] */ __RPC__out BOOL *bIsExpired);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSystemTimeNotBefore )( 
            __RPC__in IWiFiCertificate * This,
            /* [retval][out] */ __RPC__out SYSTEMTIME *pSystemTimeNotBefore);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSystemTimeNotAfter )( 
            __RPC__in IWiFiCertificate * This,
            /* [retval][out] */ __RPC__out SYSTEMTIME *pSystemTimeNotAfter);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetByteString )( 
            __RPC__in IWiFiCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszByteString);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSubjectName )( 
            __RPC__in IWiFiCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszSubjectName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIssuerName )( 
            __RPC__in IWiFiCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszIssuerName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )( 
            __RPC__in IWiFiCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszSerialNumber);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            __RPC__in IWiFiCertificate * This,
            /* [retval][out] */ __RPC__out WiFiCertificateHash *pCertificateHash);
        
        END_INTERFACE
    } IWiFiCertificateVtbl;

    interface IWiFiCertificate
    {
        CONST_VTBL struct IWiFiCertificateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiCertificate_GetExpired(This,bIsExpired)	\
    ( (This)->lpVtbl -> GetExpired(This,bIsExpired) ) 

#define IWiFiCertificate_GetSystemTimeNotBefore(This,pSystemTimeNotBefore)	\
    ( (This)->lpVtbl -> GetSystemTimeNotBefore(This,pSystemTimeNotBefore) ) 

#define IWiFiCertificate_GetSystemTimeNotAfter(This,pSystemTimeNotAfter)	\
    ( (This)->lpVtbl -> GetSystemTimeNotAfter(This,pSystemTimeNotAfter) ) 

#define IWiFiCertificate_GetByteString(This,pszByteString)	\
    ( (This)->lpVtbl -> GetByteString(This,pszByteString) ) 

#define IWiFiCertificate_GetSubjectName(This,pszSubjectName)	\
    ( (This)->lpVtbl -> GetSubjectName(This,pszSubjectName) ) 

#define IWiFiCertificate_GetIssuerName(This,pszIssuerName)	\
    ( (This)->lpVtbl -> GetIssuerName(This,pszIssuerName) ) 

#define IWiFiCertificate_GetSerialNumber(This,pszSerialNumber)	\
    ( (This)->lpVtbl -> GetSerialNumber(This,pszSerialNumber) ) 

#define IWiFiCertificate_GetHash(This,pCertificateHash)	\
    ( (This)->lpVtbl -> GetHash(This,pCertificateHash) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiCertificate_INTERFACE_DEFINED__ */


#ifndef __IWiFiCertificateList_INTERFACE_DEFINED__
#define __IWiFiCertificateList_INTERFACE_DEFINED__

/* interface IWiFiCertificateList */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiCertificateList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-4606-8894-6D6F0E5EDDCD")
    IWiFiCertificateList : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiCertificate **ppWifiCertificate) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [retval][out] */ __RPC__out DWORD *pdwSize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCertStoreHandle( 
            /* [retval][out] */ __RPC__out DWORD *ppCertStoreHandle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiCertificateListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiCertificateList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiCertificateList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiCertificateList * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IWiFiCertificateList * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiCertificate **ppWifiCertificate);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Size )( 
            __RPC__in IWiFiCertificateList * This,
            /* [retval][out] */ __RPC__out DWORD *pdwSize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCertStoreHandle )( 
            __RPC__in IWiFiCertificateList * This,
            /* [retval][out] */ __RPC__out DWORD *ppCertStoreHandle);
        
        END_INTERFACE
    } IWiFiCertificateListVtbl;

    interface IWiFiCertificateList
    {
        CONST_VTBL struct IWiFiCertificateListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiCertificateList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiCertificateList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiCertificateList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiCertificateList_Get(This,dwIndex,ppWifiCertificate)	\
    ( (This)->lpVtbl -> Get(This,dwIndex,ppWifiCertificate) ) 

#define IWiFiCertificateList_Size(This,pdwSize)	\
    ( (This)->lpVtbl -> Size(This,pdwSize) ) 

#define IWiFiCertificateList_GetCertStoreHandle(This,ppCertStoreHandle)	\
    ( (This)->lpVtbl -> GetCertStoreHandle(This,ppCertStoreHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiCertificateList_INTERFACE_DEFINED__ */


#ifndef __IWiFiSupportedEapMethodList_INTERFACE_DEFINED__
#define __IWiFiSupportedEapMethodList_INTERFACE_DEFINED__

/* interface IWiFiSupportedEapMethodList */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiSupportedEapMethodList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-4607-8894-6D6F0E5EDDCD")
    IWiFiSupportedEapMethodList : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__out WiFiSupportedEapMethod *pWiFiSupportedEapMethod) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [retval][out] */ __RPC__out DWORD *pdwSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiSupportedEapMethodListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiSupportedEapMethodList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiSupportedEapMethodList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiSupportedEapMethodList * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IWiFiSupportedEapMethodList * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__out WiFiSupportedEapMethod *pWiFiSupportedEapMethod);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Size )( 
            __RPC__in IWiFiSupportedEapMethodList * This,
            /* [retval][out] */ __RPC__out DWORD *pdwSize);
        
        END_INTERFACE
    } IWiFiSupportedEapMethodListVtbl;

    interface IWiFiSupportedEapMethodList
    {
        CONST_VTBL struct IWiFiSupportedEapMethodListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiSupportedEapMethodList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiSupportedEapMethodList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiSupportedEapMethodList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiSupportedEapMethodList_Get(This,dwIndex,pWiFiSupportedEapMethod)	\
    ( (This)->lpVtbl -> Get(This,dwIndex,pWiFiSupportedEapMethod) ) 

#define IWiFiSupportedEapMethodList_Size(This,pdwSize)	\
    ( (This)->lpVtbl -> Size(This,pdwSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiSupportedEapMethodList_INTERFACE_DEFINED__ */


#ifndef __IWiFiEventHandler_INTERFACE_DEFINED__
#define __IWiFiEventHandler_INTERFACE_DEFINED__

/* interface IWiFiEventHandler */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-4608-8894-6D6F0E5EDDCD")
    IWiFiEventHandler : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandlePowerStateChange( 
            /* [in] */ WiFiPowerState newPowerState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleConnectionStateChange( 
            /* [in] */ WiFiConnectionState newConnectionState,
            /* [in] */ __RPC__in BSTR szCmConnName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleAvailableNetworkListChange( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandlePreferredNetworkListChange( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleConnectionComplete( 
            /* [in] */ WiFiConnectFailureReason reason,
            /* [in] */ __RPC__in BSTR szCmConnName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleCredentialRequest( 
            /* [in] */ WiFiCredentialRequestReason reason,
            /* [in] */ WiFiCredentialRequestFlag typeFlags,
            /* [in] */ DWORD requestHandle,
            /* [in] */ __RPC__in BSTR szCmConnName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleRoamingStateChange( 
            /* [in] */ WiFiRoamingState state,
            /* [in] */ __RPC__in_ecount_full(6) WiFiMacAddress bssid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiEventHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiEventHandler * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandlePowerStateChange )( 
            __RPC__in IWiFiEventHandler * This,
            /* [in] */ WiFiPowerState newPowerState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleConnectionStateChange )( 
            __RPC__in IWiFiEventHandler * This,
            /* [in] */ WiFiConnectionState newConnectionState,
            /* [in] */ __RPC__in BSTR szCmConnName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleAvailableNetworkListChange )( 
            __RPC__in IWiFiEventHandler * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandlePreferredNetworkListChange )( 
            __RPC__in IWiFiEventHandler * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleConnectionComplete )( 
            __RPC__in IWiFiEventHandler * This,
            /* [in] */ WiFiConnectFailureReason reason,
            /* [in] */ __RPC__in BSTR szCmConnName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleCredentialRequest )( 
            __RPC__in IWiFiEventHandler * This,
            /* [in] */ WiFiCredentialRequestReason reason,
            /* [in] */ WiFiCredentialRequestFlag typeFlags,
            /* [in] */ DWORD requestHandle,
            /* [in] */ __RPC__in BSTR szCmConnName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleRoamingStateChange )( 
            __RPC__in IWiFiEventHandler * This,
            /* [in] */ WiFiRoamingState state,
            /* [in] */ __RPC__in_ecount_full(6) WiFiMacAddress bssid);
        
        END_INTERFACE
    } IWiFiEventHandlerVtbl;

    interface IWiFiEventHandler
    {
        CONST_VTBL struct IWiFiEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiEventHandler_HandlePowerStateChange(This,newPowerState)	\
    ( (This)->lpVtbl -> HandlePowerStateChange(This,newPowerState) ) 

#define IWiFiEventHandler_HandleConnectionStateChange(This,newConnectionState,szCmConnName)	\
    ( (This)->lpVtbl -> HandleConnectionStateChange(This,newConnectionState,szCmConnName) ) 

#define IWiFiEventHandler_HandleAvailableNetworkListChange(This)	\
    ( (This)->lpVtbl -> HandleAvailableNetworkListChange(This) ) 

#define IWiFiEventHandler_HandlePreferredNetworkListChange(This)	\
    ( (This)->lpVtbl -> HandlePreferredNetworkListChange(This) ) 

#define IWiFiEventHandler_HandleConnectionComplete(This,reason,szCmConnName)	\
    ( (This)->lpVtbl -> HandleConnectionComplete(This,reason,szCmConnName) ) 

#define IWiFiEventHandler_HandleCredentialRequest(This,reason,typeFlags,requestHandle,szCmConnName)	\
    ( (This)->lpVtbl -> HandleCredentialRequest(This,reason,typeFlags,requestHandle,szCmConnName) ) 

#define IWiFiEventHandler_HandleRoamingStateChange(This,state,bssid)	\
    ( (This)->lpVtbl -> HandleRoamingStateChange(This,state,bssid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiEventHandler_INTERFACE_DEFINED__ */


#ifndef __IWiFiUiRequestDetailsServer_INTERFACE_DEFINED__
#define __IWiFiUiRequestDetailsServer_INTERFACE_DEFINED__

/* interface IWiFiUiRequestDetailsServer */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiUiRequestDetailsServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-4609-8894-6D6F0E5EDDCD")
    IWiFiUiRequestDetailsServer : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSubjectName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszSubjectName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIssuerName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszIssuerName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiUiRequestDetailsServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiUiRequestDetailsServer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiUiRequestDetailsServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiUiRequestDetailsServer * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSubjectName )( 
            __RPC__in IWiFiUiRequestDetailsServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszSubjectName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIssuerName )( 
            __RPC__in IWiFiUiRequestDetailsServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pszIssuerName);
        
        END_INTERFACE
    } IWiFiUiRequestDetailsServerVtbl;

    interface IWiFiUiRequestDetailsServer
    {
        CONST_VTBL struct IWiFiUiRequestDetailsServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiUiRequestDetailsServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiUiRequestDetailsServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiUiRequestDetailsServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiUiRequestDetailsServer_GetSubjectName(This,pszSubjectName)	\
    ( (This)->lpVtbl -> GetSubjectName(This,pszSubjectName) ) 

#define IWiFiUiRequestDetailsServer_GetIssuerName(This,pszIssuerName)	\
    ( (This)->lpVtbl -> GetIssuerName(This,pszIssuerName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiUiRequestDetailsServer_INTERFACE_DEFINED__ */


#ifndef __IWiFiUiRequestDetailsCertificates_INTERFACE_DEFINED__
#define __IWiFiUiRequestDetailsCertificates_INTERFACE_DEFINED__

/* interface IWiFiUiRequestDetailsCertificates */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiUiRequestDetailsCertificates;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-460A-8894-6D6F0E5EDDCD")
    IWiFiUiRequestDetailsCertificates : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__out WiFiCertificateHash *pWiFiCertificateHash) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [retval][out] */ __RPC__out DWORD *pdwSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiUiRequestDetailsCertificatesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiUiRequestDetailsCertificates * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiUiRequestDetailsCertificates * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiUiRequestDetailsCertificates * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IWiFiUiRequestDetailsCertificates * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__out WiFiCertificateHash *pWiFiCertificateHash);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Size )( 
            __RPC__in IWiFiUiRequestDetailsCertificates * This,
            /* [retval][out] */ __RPC__out DWORD *pdwSize);
        
        END_INTERFACE
    } IWiFiUiRequestDetailsCertificatesVtbl;

    interface IWiFiUiRequestDetailsCertificates
    {
        CONST_VTBL struct IWiFiUiRequestDetailsCertificatesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiUiRequestDetailsCertificates_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiUiRequestDetailsCertificates_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiUiRequestDetailsCertificates_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiUiRequestDetailsCertificates_Get(This,dwIndex,pWiFiCertificateHash)	\
    ( (This)->lpVtbl -> Get(This,dwIndex,pWiFiCertificateHash) ) 

#define IWiFiUiRequestDetailsCertificates_Size(This,pdwSize)	\
    ( (This)->lpVtbl -> Size(This,pdwSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiUiRequestDetailsCertificates_INTERFACE_DEFINED__ */


#ifndef __IWiFiAutoConnectList_INTERFACE_DEFINED__
#define __IWiFiAutoConnectList_INTERFACE_DEFINED__

/* interface IWiFiAutoConnectList */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiAutoConnectList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-460B-8894-6D6F0E5EDDCD")
    IWiFiAutoConnectList : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__out WiFiAutoConnectEntry *pWifiAutoConnectEntry) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [retval][out] */ __RPC__out DWORD *pdwSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiAutoConnectListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiAutoConnectList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiAutoConnectList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiAutoConnectList * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IWiFiAutoConnectList * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__out WiFiAutoConnectEntry *pWifiAutoConnectEntry);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Size )( 
            __RPC__in IWiFiAutoConnectList * This,
            /* [retval][out] */ __RPC__out DWORD *pdwSize);
        
        END_INTERFACE
    } IWiFiAutoConnectListVtbl;

    interface IWiFiAutoConnectList
    {
        CONST_VTBL struct IWiFiAutoConnectListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiAutoConnectList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiAutoConnectList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiAutoConnectList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiAutoConnectList_Get(This,dwIndex,pWifiAutoConnectEntry)	\
    ( (This)->lpVtbl -> Get(This,dwIndex,pWifiAutoConnectEntry) ) 

#define IWiFiAutoConnectList_Size(This,pdwSize)	\
    ( (This)->lpVtbl -> Size(This,pdwSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiAutoConnectList_INTERFACE_DEFINED__ */


#ifndef __IWiFiSocialNetwork_INTERFACE_DEFINED__
#define __IWiFiSocialNetwork_INTERFACE_DEFINED__

/* interface IWiFiSocialNetwork */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiSocialNetwork;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-460C-8894-6D6F0E5EDDCD")
    IWiFiSocialNetwork : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *socialNetworkName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *identifier) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetOptInStatus( 
            /* [retval][out] */ __RPC__out BOOL *fEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDisabled( 
            /* [retval][out] */ __RPC__out BOOL *fDisabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTokenNeeded( 
            /* [retval][out] */ __RPC__out BOOL *fTokenNeeded) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetOptInStatus( 
            /* [in] */ BOOL fEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetOptInStatusEx( 
            /* [in] */ BOOL fEnabled,
            /* [in] */ __RPC__in BSTR szAccessToken,
            /* [in] */ __RPC__in BSTR szMetadata) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTokenRequestUri( 
            /* [out] */ __RPC__deref_out_opt BSTR *szMetadata,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *szRequestUri) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiSocialNetworkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiSocialNetwork * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiSocialNetwork * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiSocialNetwork * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IWiFiSocialNetwork * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *socialNetworkName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetID )( 
            __RPC__in IWiFiSocialNetwork * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *identifier);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOptInStatus )( 
            __RPC__in IWiFiSocialNetwork * This,
            /* [retval][out] */ __RPC__out BOOL *fEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDisabled )( 
            __RPC__in IWiFiSocialNetwork * This,
            /* [retval][out] */ __RPC__out BOOL *fDisabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTokenNeeded )( 
            __RPC__in IWiFiSocialNetwork * This,
            /* [retval][out] */ __RPC__out BOOL *fTokenNeeded);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            __RPC__in IWiFiSocialNetwork * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOptInStatus )( 
            __RPC__in IWiFiSocialNetwork * This,
            /* [in] */ BOOL fEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOptInStatusEx )( 
            __RPC__in IWiFiSocialNetwork * This,
            /* [in] */ BOOL fEnabled,
            /* [in] */ __RPC__in BSTR szAccessToken,
            /* [in] */ __RPC__in BSTR szMetadata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTokenRequestUri )( 
            __RPC__in IWiFiSocialNetwork * This,
            /* [out] */ __RPC__deref_out_opt BSTR *szMetadata,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *szRequestUri);
        
        END_INTERFACE
    } IWiFiSocialNetworkVtbl;

    interface IWiFiSocialNetwork
    {
        CONST_VTBL struct IWiFiSocialNetworkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiSocialNetwork_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiSocialNetwork_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiSocialNetwork_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiSocialNetwork_GetName(This,socialNetworkName)	\
    ( (This)->lpVtbl -> GetName(This,socialNetworkName) ) 

#define IWiFiSocialNetwork_GetID(This,identifier)	\
    ( (This)->lpVtbl -> GetID(This,identifier) ) 

#define IWiFiSocialNetwork_GetOptInStatus(This,fEnabled)	\
    ( (This)->lpVtbl -> GetOptInStatus(This,fEnabled) ) 

#define IWiFiSocialNetwork_GetDisabled(This,fDisabled)	\
    ( (This)->lpVtbl -> GetDisabled(This,fDisabled) ) 

#define IWiFiSocialNetwork_GetTokenNeeded(This,fTokenNeeded)	\
    ( (This)->lpVtbl -> GetTokenNeeded(This,fTokenNeeded) ) 

#define IWiFiSocialNetwork_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IWiFiSocialNetwork_SetOptInStatus(This,fEnabled)	\
    ( (This)->lpVtbl -> SetOptInStatus(This,fEnabled) ) 

#define IWiFiSocialNetwork_SetOptInStatusEx(This,fEnabled,szAccessToken,szMetadata)	\
    ( (This)->lpVtbl -> SetOptInStatusEx(This,fEnabled,szAccessToken,szMetadata) ) 

#define IWiFiSocialNetwork_GetTokenRequestUri(This,szMetadata,szRequestUri)	\
    ( (This)->lpVtbl -> GetTokenRequestUri(This,szMetadata,szRequestUri) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiSocialNetwork_INTERFACE_DEFINED__ */


#ifndef __IWiFiSocialNetworkList_INTERFACE_DEFINED__
#define __IWiFiSocialNetworkList_INTERFACE_DEFINED__

/* interface IWiFiSocialNetworkList */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiSocialNetworkList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-460D-8894-6D6F0E5EDDCD")
    IWiFiSocialNetworkList : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiSocialNetwork **ppWifiSocialNetwork) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [retval][out] */ __RPC__out DWORD *pdwSize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetByName( 
            /* [in] */ __RPC__in BSTR name,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiSocialNetwork **ppWifiSocialNetwork) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetByID( 
            /* [in] */ __RPC__in BSTR identifier,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiSocialNetwork **ppWifiSocialNetwork) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiSocialNetworkListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiSocialNetworkList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiSocialNetworkList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiSocialNetworkList * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IWiFiSocialNetworkList * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiSocialNetwork **ppWifiSocialNetwork);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Size )( 
            __RPC__in IWiFiSocialNetworkList * This,
            /* [retval][out] */ __RPC__out DWORD *pdwSize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetByName )( 
            __RPC__in IWiFiSocialNetworkList * This,
            /* [in] */ __RPC__in BSTR name,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiSocialNetwork **ppWifiSocialNetwork);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetByID )( 
            __RPC__in IWiFiSocialNetworkList * This,
            /* [in] */ __RPC__in BSTR identifier,
            /* [retval][out] */ __RPC__deref_out_opt IWiFiSocialNetwork **ppWifiSocialNetwork);
        
        END_INTERFACE
    } IWiFiSocialNetworkListVtbl;

    interface IWiFiSocialNetworkList
    {
        CONST_VTBL struct IWiFiSocialNetworkListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiSocialNetworkList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiSocialNetworkList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiSocialNetworkList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiSocialNetworkList_Get(This,dwIndex,ppWifiSocialNetwork)	\
    ( (This)->lpVtbl -> Get(This,dwIndex,ppWifiSocialNetwork) ) 

#define IWiFiSocialNetworkList_Size(This,pdwSize)	\
    ( (This)->lpVtbl -> Size(This,pdwSize) ) 

#define IWiFiSocialNetworkList_GetByName(This,name,ppWifiSocialNetwork)	\
    ( (This)->lpVtbl -> GetByName(This,name,ppWifiSocialNetwork) ) 

#define IWiFiSocialNetworkList_GetByID(This,identifier,ppWifiSocialNetwork)	\
    ( (This)->lpVtbl -> GetByID(This,identifier,ppWifiSocialNetwork) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiSocialNetworkList_INTERFACE_DEFINED__ */


#ifndef __IWiFiAddr6List_INTERFACE_DEFINED__
#define __IWiFiAddr6List_INTERFACE_DEFINED__

/* interface IWiFiAddr6List */
/* [uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IWiFiAddr6List;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7FEAD8-C340-460E-8894-6D6F0E5EDDCD")
    IWiFiAddr6List : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__out WiFiAddr6Str *pWiFiAddr6Str) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [retval][out] */ __RPC__out DWORD *pdwSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWiFiAddr6ListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWiFiAddr6List * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWiFiAddr6List * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWiFiAddr6List * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IWiFiAddr6List * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ __RPC__out WiFiAddr6Str *pWiFiAddr6Str);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Size )( 
            __RPC__in IWiFiAddr6List * This,
            /* [retval][out] */ __RPC__out DWORD *pdwSize);
        
        END_INTERFACE
    } IWiFiAddr6ListVtbl;

    interface IWiFiAddr6List
    {
        CONST_VTBL struct IWiFiAddr6ListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWiFiAddr6List_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWiFiAddr6List_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWiFiAddr6List_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWiFiAddr6List_Get(This,dwIndex,pWiFiAddr6Str)	\
    ( (This)->lpVtbl -> Get(This,dwIndex,pWiFiAddr6Str) ) 

#define IWiFiAddr6List_Size(This,pdwSize)	\
    ( (This)->lpVtbl -> Size(This,pdwSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWiFiAddr6List_INTERFACE_DEFINED__ */



#ifndef __WiFiConnApi_LIBRARY_DEFINED__
#define __WiFiConnApi_LIBRARY_DEFINED__

/* library WiFiConnApi */
/* [version][uuid] */ 
















































EXTERN_C const IID LIBID_WiFiConnApi;

EXTERN_C const CLSID CLSID_WiFiHandle;

#ifdef __cplusplus

class DECLSPEC_UUID("AF7FEAD8-C345-4600-8894-6D6F0E5EDDCD")
WiFiHandle;
#endif
#endif /* __WiFiConnApi_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


