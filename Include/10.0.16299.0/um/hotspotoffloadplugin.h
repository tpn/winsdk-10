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


#pragma once


#ifdef __cplusplus
extern "C" {
#endif


// -----------------------------------------
// Registry key settings
// -----------------------------------------
//

// Required Registry key settings
#define REG_szPluginsKey                        L"Software\\Microsoft\\Windows Phone\\HotspotOffload\\Plugins"
#define REG_szPluginRank                        L"PluginRank"
#define REG_szPluginPath                        L"PluginPath"

// The Plugin Rank cannot fall outside the following range
#define HS_CONST_PLUGIN_MIN_RANK_VALUE                      1
#define HS_CONST_PLUGIN_MAX_RANK_VALUE                      250

// -----------------------------------------
// Version Information
// -----------------------------------------

// Current API Version supported.
#define HS_CONST_HOST_CURRENT_API_VERSION       1


// Version exchange between // Hotspot framework and Plugin
typedef struct
{
   DWORD    dwVerMin;
   DWORD    dwVerMax;
} HS_PLUGIN_VERSION, *PHS_PLUGIN_VERSION;


// -----------------------------------------
// Plugin Config
// -----------------------------------------

//
// Capabilities requested by Plugin
//
#define HS_FLAG_CAPABILITY_NETWORK_TYPE_VISIBLE             0x00000001
#define HS_FLAG_CAPABILITY_NETWORK_TYPE_HIDDEN              0x00000002
#define HS_FLAG_CAPABILITY_NETWORK_DISPLAY_NAME             0x00000010
#define HS_FLAG_CAPABILITY_NETWORK_AUTH_NO_SIM              0x00000100
#define HS_FLAG_CAPABILITY_NETWORK_AUTH_HTTP                0x00000200
#define HS_FLAG_CAPABILITY_NETWORK_AUTH_EAP_SIM             0x00001000
#define HS_FLAG_CAPABILITY_NETWORK_AUTH_EAP_AKA             0x00002000
#define HS_FLAG_CAPABILITY_NETWORK_AUTH_EAP_AKA_PRIME       0x00004000
#define HS_FLAG_CAPABILITY_NETWORK_CUSTOM_REALM             0x00010000

#define HS_FLAG_CAPABILITIES_NETWORK_TYPES              ( \
    HS_FLAG_CAPABILITY_NETWORK_TYPE_VISIBLE             | \
    HS_FLAG_CAPABILITY_NETWORK_TYPE_HIDDEN              )

#define HS_FLAG_CAPABILITIES_NETWORK_AUTH_EAP           ( \
    HS_FLAG_CAPABILITY_NETWORK_AUTH_EAP_SIM             | \
    HS_FLAG_CAPABILITY_NETWORK_AUTH_EAP_AKA             | \
    HS_FLAG_CAPABILITY_NETWORK_AUTH_EAP_AKA_PRIME       )

#define HS_FLAG_CAPABILITIES_NETWORK_AUTH_ALL           ( \
    HS_FLAG_CAPABILITY_NETWORK_AUTH_NO_SIM              | \
    HS_FLAG_CAPABILITY_NETWORK_AUTH_HTTP                | \
    HS_FLAG_CAPABILITIES_NETWORK_AUTH_EAP               )

// -----------------------------------------
// Hotspot Plugin-Specific settings
// -----------------------------------------

#define HS_CONST_MAX_PROVIDER_NAME_LENGTH               63
#define HS_CONST_MAX_NETWORK_DISPLAY_NAME_LENGTH        32
#define HS_CONST_MAX_ADVANCED_PAGE_STRING_LENGTH        255
#define HS_CONST_MAX_REALM_LENGTH                       127

#define HS_CONST_MIN_CONN_KEEPALIVE_TIME_IN_MINS        5
#define HS_CONST_MIN_PROFILE_UPDATE_TIME_IN_DAYS        7

#define HS_CONST_MAX_PHONE_NUMBER_LENGTH                32

#define HS_CONST_MAX_SUPPORTED_SIMS                     1000
#define HS_CONST_MAX_CELLULAR_EXCEPTION_HOSTS           5

#define HS_CONST_MAX_AUTH_ERROR_MSG_LENGTH              512
#define HS_CONST_MAX_USER_MESSAGES_IN_MINUTES           7*24*60     // 7 days

typedef struct
{
    UCHAR ucHSMacAddress[6];
} HS_MAC_ADDRESS, * PHS_MAC_ADDRESS;

typedef enum _eHS_SIM_TYPE
{
    HS_SIM_TYPE_GSM,
    HS_SIM_TYPE_CDMA,
    HS_SIM_TYPE_NONE,
    HS_SIM_TYPE_MAX
} eHS_SIM_TYPE;

typedef struct
{
    eHS_SIM_TYPE        SimType;
#ifdef __midl
    [switch_is(SimType)]
#endif  //  __midl
    union
    {
#ifdef __midl
        [case(HS_SIM_TYPE_GSM)]
#endif  //  __midl
        struct 
        {
            DWORD               dwMNC;
            DWORD               dwMCC;
        }GSM;
#ifdef __midl
        [case(HS_SIM_TYPE_CDMA)]
#endif  //  __midl
        struct 
        {
            DWORD               dwNID;
            DWORD               dwSID;
        }CDMA;
    }u;

    DWORD               dwEapMethods;
} HS_SIM_IDENTITY, *PHS_SIM_IDENTITY;


#define HS_CONST_MAX_DEVICE_INFO_LENGTH                255
// **********************************************
//  dwSystemType below is defined as of type RILSYSTEMTYPE in rilapitypes.h
//          RIL_SYSTEMTYPE_NONE = 0,
//          RIL_SYSTEMTYPE_1XRTT    = 0x1,
//          RIL_SYSTEMTYPE_EVDO = 0x2,
//          RIL_SYSTEMTYPE_GSM  = 0x4,
//          RIL_SYSTEMTYPE_UMTS = 0x8,
//          RIL_SYSTEMTYPE_LTE  = 0x10,
//          RIL_SYSTEMTYPE_TDSCDMA  = 0x20,
//          RIL_SYSTEMTYPE_CDMA = ( RIL_SYSTEMTYPE_1XRTT | RIL_SYSTEMTYPE_EVDO ) ,
//          RIL_SYSTEMTYPE_GSMUMTS  = ( RIL_SYSTEMTYPE_GSM | RIL_SYSTEMTYPE_UMTS ) ,
//          RIL_SYSTEMTYPE_ALL  = 0x3f
// **********************************************

typedef struct
{
    DWORD               dwSystemType;               // Defined as of type RILSYSTEMTYPE in rilapitypes.h
    WCHAR               wszPhoneManufacturer      [HS_CONST_MAX_DEVICE_INFO_LENGTH + 1];
    WCHAR               wszPhoneModelName         [HS_CONST_MAX_DEVICE_INFO_LENGTH + 1];
    WCHAR               wszPhoneManufacturerModel [HS_CONST_MAX_DEVICE_INFO_LENGTH + 1];
    WCHAR               wszDeviceModel            [HS_CONST_MAX_DEVICE_INFO_LENGTH + 1];
} HS_DEVICE_IDENTITY, *PHS_DEVICE_IDENTITY;

#define HS_CONST_MAX_ICCID_LENGTH                       20
#define HS_CONST_MAX_SPN_LENGTH                         20
#define HS_CONST_MAX_GID1_LENGTH                        20
#define HS_CONST_MAX_IMEI_LENGTH                        20
#define HS_CONST_MAX_MEID_ME_LENGTH                     20
#define HS_CONST_MAX_SF_EUIMID_LENGTH                   20

typedef struct
{
    WCHAR               wszICCID        [HS_CONST_MAX_ICCID_LENGTH+1];      // EUIMID
    WCHAR               wszIMEI         [HS_CONST_MAX_IMEI_LENGTH+1];       // SerialNumber3gpp
    WCHAR               wszMEID_ME      [HS_CONST_MAX_MEID_ME_LENGTH+1];    // SerialNumber3gpp2, ESN (from IMEI)
    WCHAR               wszSF_EUIMID    [HS_CONST_MAX_SF_EUIMID_LENGTH+1];  // Short Form EUIMID (MEID)
} HS_SIM_DATA, *PHS_SIM_DATA;

typedef struct
{
    HS_MAC_ADDRESS      MacAddress;
    HS_SIM_IDENTITY     SIMIdentity;
    WCHAR               pszPhoneNumber [HS_CONST_MAX_PHONE_NUMBER_LENGTH+1];
} HS_CONNECTION_CONTEXT, *PHS_CONNECTION_CONTEXT;

typedef struct
{
    DWORD               dwPluginCapabilities;       // Required, from HS_FLAG_CAPABILITY_*
    DWORD               dwNumNetworksSupported;     // Required, Total number of networks supported by this Plugin
    DWORD               dwProviderNameStringID;     // Required, to display network owner to the user, upto MAX_PROVIDER_NAME_LENGTH

    DWORD               dwGenericNetworkNameStringID;   // Optional, upto MAX_NETWORK_DISPLAY_NAME_LENGTH
    DWORD               dwAdvancedPageStringID;         // Optional, upto HS_CONST_MAX_ADVANCED_PAGE_STRING_LENGTH

    DWORD               dwProfileUpdateTimeDays;    // Optional, >= HS_CONST_MIN_PROFILE_UPDATE_TIME_IN_DAYS
    WCHAR               szRealm [HS_CONST_MAX_REALM_LENGTH+1];    // Required if HS_FLAG_CAPABILITIES_NETWORK_CUSTOM_REALM is set
    DWORD               dwSupportedSIMCount;        // Set for HTTP-based and EAP-SIM/AKA/AKA' auth
} HS_PLUGIN_PROFILE, *PHS_PLUGIN_PROFILE;


//
// SIMs supported by the Plugin
//
typedef struct
{
    DWORD                   dwCount;
#ifdef  __midl
    [unique, size_is(dwCount)]
    HS_SIM_IDENTITY         pSupportedSIMs[*];      // List of supported SIMs
#else
    HS_SIM_IDENTITY         pSupportedSIMs[1];
#endif

} HS_PLUGIN_SUPPORTED_SIMS, *PHS_PLUGIN_SUPPORTED_SIMS;


//
// Cellular Host-connection exceptions
//
#define HS_CONST_MAX_HOST_NAME_LENGTH   255         // same as DNS_MAX_NAME_LENGTH
typedef struct
{
    WCHAR       pszHostName[HS_CONST_MAX_HOST_NAME_LENGTH+1];
} HS_PLUGIN_HOST_NAME, *PHS_PLUGIN_HOST_NAME;

typedef struct
{
    DWORD                   dwCount;
#ifdef  __midl
    [unique, size_is(dwCount)]
    HS_PLUGIN_HOST_NAME     pExceptions[*];  // List of cellular exceptions
#else
    HS_PLUGIN_HOST_NAME     pExceptions[1];
#endif

} HS_PLUGIN_CELLULAR_EXCEPTION_HOSTS, *PHS_PLUGIN_CELLULAR_EXCEPTION_HOSTS;


// -----------------------------------------
// Hotspot Network-Specific settings
// -----------------------------------------

//
// Hotspot Network Identity (uniquely identifies network)
// Definition is copied from wlantypes.h
//
#define HS_SSID_MAX_LENGTH   32      // 32 bytes
typedef struct _HS_SSID {
#ifndef __midl
    _Field_range_(0,32)
#endif
    ULONG uSSIDLength;
    UCHAR ucSSID[HS_SSID_MAX_LENGTH];
} HS_SSID, * PHS_SSID;


// HS_AUTH_ALGO_LIST
#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _HS_AUTH_ALGORITHM {
#else
typedef enum _HS_AUTH_ALGORITHM {
#endif
    HS_AUTH_ALGO_80211_OPEN = 1,
    HS_AUTH_ALGO_80211_SHARED_KEY = 2,
    HS_AUTH_ALGO_WPA = 3,
    HS_AUTH_ALGO_WPA_PSK = 4,
    HS_AUTH_ALGO_WPA_NONE = 5,               // used in NatSTA only
    HS_AUTH_ALGO_RSNA = 6,
    HS_AUTH_ALGO_RSNA_PSK = 7,
    HS_AUTH_ALGO_IHV_START = 0x80000000,
    HS_AUTH_ALGO_IHV_END = 0xffffffff
} HS_AUTH_ALGORITHM, * PHS_AUTH_ALGORITHM;


// Cipher algorithm Ids (for little endian platform)
#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _HS_CIPHER_ALGORITHM {
#else
typedef enum _HS_CIPHER_ALGORITHM {
#endif
    HS_CIPHER_ALGO_NONE = 0x00,
    HS_CIPHER_ALGO_WEP40 = 0x01,
    HS_CIPHER_ALGO_TKIP = 0x02,
    HS_CIPHER_ALGO_CCMP = 0x04,
    HS_CIPHER_ALGO_WEP104 = 0x05,
    HS_CIPHER_ALGO_BIP = 0x06,
    HS_CIPHER_ALGO_WPA_USE_GROUP = 0x100,
    HS_CIPHER_ALGO_RSN_USE_GROUP = 0x100,
    HS_CIPHER_ALGO_WEP = 0x101,
    HS_CIPHER_ALGO_IHV_START = 0x80000000,
    HS_CIPHER_ALGO_IHV_END = 0xffffffff
} HS_CIPHER_ALGORITHM, * PHS_CIPHER_ALGORITHM;


typedef struct
{
    HS_SSID                     Ssid;
    HS_AUTH_ALGORITHM           hsAuthAlgo;
    HS_CIPHER_ALGORITHM         hsCipherAlgo;
} HS_NETWORK_IDENTITY, *PHS_NETWORK_IDENTITY;

typedef enum _eHS_NETWORK_STATE
{
    HS_NETWORK_STATE_NOT_A_HOTSPOT,
    HS_NETWORK_STATE_HOTSPOT_MANUAL_CONNECT,
    HS_NETWORK_STATE_HOTSPOT_AUTO_CONNECT,
    HS_NETWORK_STATE_MAX
} eHS_NETWORK_STATE;

//
// Hotspot Network Profile (provided by plugin)
//
// Network Priority range
#define HS_CONST_MIN_NETWORK_PRIORITY_VALUE     1
#define HS_CONST_MAX_NETWORK_PRIORITY_VALUE     65000

typedef struct
{
    DWORD       dwNetworkCapabilities;  // from HS_FLAG_CAPABILITY_NETWORK_*, subset of HostCapabilities
    USHORT      usPriority;             // Lower value ==> higher priority; Must be 1 for Hidden Network
    DWORD       dwSupportedSIMCount;    // Set for HTTP-based and EAP-SIM/AKA/AKA' auth
    DWORD       dwNumCellularExceptions;    // Optional, Host connections over cellular only
    DWORD       dwNetworkStringID;      // Upto MAX_NETWORK_DISPLAY_NAME_LENGTH
    DWORD       dwKeepAliveTimeMins;    // Optional, >= HS_CONST_MIN_CONN_KEEPALIVE_TIME_IN_MINS
    WCHAR       szRealm [HS_CONST_MAX_REALM_LENGTH+1];    // Network-specific setting
} HS_NETWORK_PROFILE, *PHS_NETWORK_PROFILE;


typedef enum _eHS_UNLOAD_REASON
{
    HS_UNLOAD_REASON_NONE,
    HS_UNLOAD_REASON_PLUGIN_INIT_FAILED,
    HS_UNLOAD_REASON_NO_NETWORKS_SUPPORTED,
    HS_UNLOAD_REASON_NO_PROVIDE_NAME_ID,
    HS_UNLOAD_REASON_ZERO_SIM_COUNT,
    HS_UNLOAD_REASON_DISPLAY_FLAG_BUT_NO_DISPLAY_STRING_ID,
    HS_UNLOAD_REASON_CUSTOM_REALM_FLAG_BUT_NO_REALM_STRING,
    HS_UNLOAD_REASON_DUPLICATE_PLUGIN_LOADED,
    HS_UNLOAD_REASON_RELOAD_REQUESTED_BY_PLUGIN,
    HS_UNLOAD_REASON_EXCEPTION_DURING_PLUGIN_CALL,
    HS_UNLOAD_REASON_EXCEPTION_IN_PLUGIN_HOST,
    HS_UNLOAD_REASON_ASYNC_INITIALIZATION_FAILED,
    HS_UNLOAD_REASON_UNSUPPORTED_AUTH_CAPABILITY_REQUESTED,
    HS_UNLOAD_REASON_FAILED_TO_LOAD_PROVIDER_NAME_STRING,
    HS_UNLOAD_REASON_FAILED_TO_LOAD_ADVANCED_PAGE_STRING,
    HS_UNLOAD_REASON_FAILED_TO_LOAD_NETWORK_NAME_STRING,
    HS_UNLOAD_REASON_FAILED_TO_CONFIGURE_HIDDEN_NETWORK,
    HS_UNLOAD_REASON_HIDDEN_NETWORK_ALREADY_CONFIGURED,
    HS_UNLOAD_REASON_FAILED_TO_QUERY_SIMS,
    HS_UNLOAD_REASON_PLUGIN_REQUIRED_SIM_NOT_PRESENT,
    HS_UNLOAD_REASON_SIM_CONFIG_CHANGED,
    HS_UNLOAD_REASON_WIFI_SWITCHED_OFF_IN_OS,
    HS_UNLOAD_REASON_MAX
} eHS_UNLOAD_REASON;

// -----------------------------------------
// Hotspot Plugin callback request
// -----------------------------------------

typedef enum _eHS_AUTHENTICATION_RESULT
{
    HS_AUTHENTICATION_RESULT_SUCCESS = 0,
    HS_AUTHENTICATION_RESULT_FAILED_TIMEOUT = 100,
    HS_AUTHENTICATION_RESULT_FAILED_AUTH,
    HS_AUTHENTICATION_RESULT_FAILED_CONNECT,
    HS_AUTHENTICATION_RESULT_FAILED_OTHER,
    HS_AUTHENTICATION_RESULT_MAX
} eHS_AUTHENTICATION_RESULT;

typedef enum _eHS_UPDATE_RESULT
{
    HS_UPDATE_RESULT_SUCCESS,
    HS_UPDATE_RESULT_ACTION_RECONNECT,
    HS_UPDATE_RESULT_ACTION_RELOAD,
    HS_UPDATE_RESULT_MAX
} eHS_UPDATE_RESULT;


// -----------------------------------------
// Host Handler Functions
// -----------------------------------------
//

#ifndef __midl

typedef DWORD
(WINAPI *HS_HOST_ALLOCATE_MEMORY)(
    __in                                 HANDLE                      hPluginContext,
    __in                                 DWORD                       dwByteCount,
    _Outptr_result_buffer_(dwByteCount)  LPVOID                      *ppvBuffer
    );

typedef VOID
(WINAPI *HS_HOST_FREE_MEMORY)(
    __in                        HANDLE                      hPluginContext,
    __in_opt                    LPVOID                      pvBuffer
    );

typedef DWORD
(WINAPI *HS_HOST_POST_CONNECT_AUTH_COMPLETION)(
    __in                        HANDLE                      hPluginContext,
    __in                        DWORD                       dwConnectionId,
    __in                        eHS_AUTHENTICATION_RESULT   AuthResult,
    __in_opt                    LPVOID                      pvReserved
    );

typedef DWORD
(WINAPI *HS_HOST_SEND_KEEP_ALIVE_COMPLETION)(
    __in                        HANDLE                      hPluginContext,
    __in                        DWORD                       dwResult
    );

typedef DWORD
(WINAPI *HS_HOST_UPDATE_CONFIGURATION_COMPLETION)(
    __in                        HANDLE                      hPluginContext,
    __in                        eHS_UPDATE_RESULT           UpdateResult
    );

typedef DWORD
(WINAPI *HS_HOST_SEND_USER_MESSAGE)(
    __in                        HANDLE                      hPluginContext,
    __in                        DWORD                       dwConnectionId,
    __in                        DWORD                       dwStringID
    );

typedef struct
{
    //
    // [Optional] Memory management handlers
    //
    HS_HOST_ALLOCATE_MEMORY                         HSHostAllocateMemory;
    HS_HOST_FREE_MEMORY                             HSHostFreeMemory;

    //
    // [Required] Connection-process handlers
    //
    HS_HOST_POST_CONNECT_AUTH_COMPLETION            HSHostPostConnectAuthCompletion;

    //
    // [Optional] Periodic Requests
    //
    HS_HOST_SEND_KEEP_ALIVE_COMPLETION              HSHostSendKeepAliveCompletion;
    HS_HOST_UPDATE_CONFIGURATION_COMPLETION         HSHostUpdateConfigurationCompletion;

    HS_HOST_SEND_USER_MESSAGE                       HSHostSendUserMessage;

} HOTSPOT_HOST_HANDLERS, *PHOTSPOT_HOST_HANDLERS;


// -----------------------------------------
// Plugin API Functions
// -----------------------------------------
//

typedef DWORD
(WINAPI *HS_PLUGIN_QUERY_HIDDEN_NETWORK) (
    __out       HS_NETWORK_IDENTITY                 *pHiddenNetworkIdentity,
    __out       HS_NETWORK_PROFILE                  *pHiddenNetworkProfile
    );

typedef DWORD
(WINAPI *HS_PLUGIN_IS_HOTSPOT_NETWORK)(
    __in        HS_NETWORK_IDENTITY                 *pNetworkIdentity,
    __out       eHS_NETWORK_STATE                   *pNetworkState,
    __inout_opt HS_NETWORK_PROFILE                  *pNetworkProfile
    );

typedef DWORD
(WINAPI *HS_PLUGIN_QUERY_SUPPORTED_SIMS)(
    __in_opt    HS_NETWORK_IDENTITY                 *pNetworkIdentity,
    __inout     HS_PLUGIN_SUPPORTED_SIMS            *pSupportedSIMs
    );

typedef DWORD
(WINAPI *HS_PLUGIN_QUERY_CELLULAR_EXCEPTION_HOSTS)(
    __inout     HS_PLUGIN_CELLULAR_EXCEPTION_HOSTS  *pExceptionsList
    );

typedef DWORD
(WINAPI *HS_PLUGIN_PRE_CONNECT_INIT)(
    __in        HS_NETWORK_IDENTITY                 *pNetworkIdentity
    );

typedef DWORD
(WINAPI *HS_PLUGIN_AUTH_INPUT_REQUEST)(
    );

typedef DWORD
(WINAPI *HS_PLUGIN_START_POST_CONNECT_AUTH)(
    __in        DWORD                               dwConnectionId,
    __in        HS_CONNECTION_CONTEXT               *pConnectContext,
    __in        HS_SIM_DATA                         *pSIMData,
    __in        HS_NETWORK_IDENTITY                 *pNetworkIdentity,
    __in        HS_NETWORK_PROFILE                  *pNetworkProfile
    );

typedef DWORD
(WINAPI *HS_PLUGIN_STOP_POST_CONNECT_AUTH)(
    __in        HS_NETWORK_IDENTITY                 *pNetworkIdentity
    );

typedef DWORD
(WINAPI *HS_PLUGIN_DISCONNECT_FROM_NETWORK)(
    __in        HS_NETWORK_IDENTITY                 *pNetworkIdentity
    );

typedef DWORD
(WINAPI *HS_PLUGIN_RESET)(
    );

typedef DWORD
(WINAPI *HS_PLUGIN_SEND_KEEP_ALIVE)(
    );

typedef DWORD
(WINAPI *HS_PLUGIN_CHECK_FOR_UPDATES)(
    );

typedef DWORD
(WINAPI *HS_PLUGIN_DEINIT)(
    __in        eHS_UNLOAD_REASON                   UnloadReason
    );


typedef struct
{
    //
    // APIs called during Plugin Init
    //
    HS_PLUGIN_QUERY_SUPPORTED_SIMS                  HSPluginQuerySupportedSIMs;
    HS_PLUGIN_QUERY_CELLULAR_EXCEPTION_HOSTS        HSPluginQueryCellularExceptionHosts;
    HS_PLUGIN_QUERY_HIDDEN_NETWORK                  HSPluginQueryHiddenNetwork;

    //
    // API called while processing scan results
    //
    HS_PLUGIN_IS_HOTSPOT_NETWORK                    HSPluginIsHotspotNetwork;

    //
    // Connection-process APIs
    //
    HS_PLUGIN_PRE_CONNECT_INIT                      HSPluginPreConnectInit;
    HS_PLUGIN_AUTH_INPUT_REQUEST                    HSPluginAuthInputRequest;
    HS_PLUGIN_START_POST_CONNECT_AUTH               HSPluginStartPostConnectAuth;
    HS_PLUGIN_STOP_POST_CONNECT_AUTH                HSPluginStopPostConnectAuth;
    HS_PLUGIN_DISCONNECT_FROM_NETWORK               HSPluginDisconnectFromNetwork;

    //
    // API to Reset the Plugin. If the plugin does not release any pending calls
    // before returning from this call, then the Plugin will get unloaded
    //
    HS_PLUGIN_RESET                                 HSPluginReset;

    //
    // API for Plugin to do periodic updates
    //
    HS_PLUGIN_SEND_KEEP_ALIVE                       HSPluginSendKeepAlive;
    HS_PLUGIN_CHECK_FOR_UPDATES                     HSPluginCheckForUpdates;

    //
    // Deinit and Cleanup before unloading
    //
    HS_PLUGIN_DEINIT                                HSPluginDeinit;

} HOTSPOT_PLUGIN_APIS, *PHOTSPOT_PLUGIN_APIS;



// -----------------------------------------
// Exported Functions required from Plugin
// -----------------------------------------

#define HS_CONST_PLUGIN_FUNC_NAME_GET_VERSION       "HSPluginGetVersion"
#define HS_CONST_PLUGIN_FUNC_NAME_INIT              "HSPluginInitPlugin"

//
// Exported Functions
//
typedef DWORD
(WINAPI *HS_PLUGIN_FUNC_GET_VERSION) (
    __out       HS_PLUGIN_VERSION                   *pHostpotPluginVersion
    );


typedef DWORD
(WINAPI *HS_PLUGIN_FUNC_INIT_PLUGIN) (
    __in        HANDLE                              hPluginContext,
    __in        DWORD                               dwVerNumUsed,
    __in        DWORD                               dwHostCapabilities,
    __in        HS_DEVICE_IDENTITY                  *pDeviceIdentity,
    __in        HOTSPOT_HOST_HANDLERS               *pHotspotHostHandlers,
    __out       HOTSPOT_PLUGIN_APIS                 *pHotspotPluginAPIs,
    __inout     HS_PLUGIN_PROFILE                   *pPluginProfile
    );

#endif  // __midl

// -----------------------------------------

#ifdef __cplusplus
}
#endif

