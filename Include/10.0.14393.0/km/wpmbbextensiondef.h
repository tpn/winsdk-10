/*++

Copyright (c) 2003 Microsoft Corporation

Module Name:

    wpmbbextensiondef.h

Abstract:

    MBB device service extension definitions for Win Phone

Revision History:

    Sam Tang (shatng)       15-Sept-2011   Created

--*/

#ifndef _WP_MBB_EXTENSION_DEF_h
#define _WP_MBB_EXTENSION_DEF_h

#define _WWAN_WP_FIRST_MODEM_NUMBER             1
#define _WWAN_WP_MAX_MODEM_NUMBER               1
#define _WWAN_WP_FIRST_EXECUTOR_ID              0
#define _WWAN_WP_MAX_EXECUTOR_NUMBER            2

// maximum possible number of MBB adapters per modem sub-phone in WinPhone.
// The actual count for each device/build does not have to be the maximum count
#define _WinPhoneMbbAdapterCountLimitPerExec    8

// MBB Device Service Extension for WinPhone
// {84a3bfbf-f1d8-496e-9f05-d3de70973152}
DEFINE_GUID(
    _WinPhoneExtensionDeviceServiceGuid,
    0x84a3bfbf,
    0xf1d8,
    0x496e,
    0x9f, 0x05, 0xd3,0xde, 0x70, 0x97, 0x31, 0x52);

// VZW IMS and LTE attach
//{20AE8FC1-7B8D-4790-8108-79F9FD80EA51}
DEFINE_GUID(
    _VZWIMSandLTEAttachGUID,
    0x20AE8FC1,
    0x7B8D,
    0x4790,
    0x81, 0x08, 0x79, 0xF9, 0xFD, 0x80, 0xEA, 0x51);

// VZW Admin
//{EB1826E8-5D5A-4BE5-BE34-943EC6679DEE}
DEFINE_GUID(
    _VZWAdminGUID,
    0xEB1826E8,
    0x5D5A,
    0x4BE5,
    0xBE, 0x34, 0x94, 0x3E, 0xC6, 0x67, 0x9D, 0xEE);

// VZW Internet
//{4D3494D1-7581-48B1-9E51-A5B69B853B43}
DEFINE_GUID(
    _VZWInternetGUID,
    0x4D3494D1,
    0x7581,
    0x48B1,
    0x9E, 0x51, 0xA5, 0xB6, 0x9B, 0x85, 0x3B, 0x43);

// VZW Apps
//{1F96FA6B-9529-44C7-9C38-183A1C50ABF4}
DEFINE_GUID(
    _VZWAppsGUID,
    0x1F96FA6B,
    0x9529,
    0x44C7,
    0x9C, 0x38, 0x18, 0x3A, 0x1C, 0x50, 0xAB, 0xF4);

// ATT General internet and LTE Attach
//{9476C91D-608F-47B6-856A-1D90C1BED333}
DEFINE_GUID(
    _ATTGeneralInternetandLTEAttachGUID,
    0x9476C91D,
    0x608F,
    0x47B6,
    0x85, 0x6A, 0x1D, 0x90, 0xC1, 0xBE, 0xD3, 0x33);

// Sprint general internet and LTE attach
// {3F1DE464-1DD2-40BB-944E-D2F00FB83A06}
DEFINE_GUID(
    _SprintInternetGUID,
    0x3f1de464,
    0x1dd2,
    0x40bb,
    0x94, 0x4e, 0xd2, 0xf0, 0xf, 0xb8, 0x3a, 0x6);

// Sprint tethering profile
// {BD382A7A-8777-47C5-969C-39023DB382E8}
DEFINE_GUID(
    _SprintPamGUID,
    0xbd382a7a,
    0x8777,
    0x47c5,
    0x96, 0x9c, 0x39, 0x2, 0x3d, 0xb3, 0x82, 0xe8);

// Sprint OTA provisioning
// {E2704AAC-0B88-47B8-B1DF-AA4AC6D9E19D}
DEFINE_GUID(
    _SprintOtaGUID,
    0xe2704aac,
    0xb88,
    0x47b8,
    0xb1, 0xdf, 0xaa, 0x4a, 0xc6, 0xd9, 0xe1, 0x9d);

// Generic profile guids. These guids are meant to use by the MBB driver to target specific profiles for different configurations. It is up to
// the SV and OEMs to define the mapping and use of these guids to configure the modem for different MOs.
DEFINE_GUID(_MBBExtProfileGuid01, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01); // {8CC16109-279F-4C53-A447-000000000001}
DEFINE_GUID(_MBBExtProfileGuid02, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02); // {8CC16109-279F-4C53-A447-000000000002}
DEFINE_GUID(_MBBExtProfileGuid03, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03); // {8CC16109-279F-4C53-A447-000000000003}
DEFINE_GUID(_MBBExtProfileGuid04, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04); // {8CC16109-279F-4C53-A447-000000000004}
DEFINE_GUID(_MBBExtProfileGuid05, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05); // {8CC16109-279F-4C53-A447-000000000005}
DEFINE_GUID(_MBBExtProfileGuid06, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06); // {8CC16109-279F-4C53-A447-000000000006}
DEFINE_GUID(_MBBExtProfileGuid07, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07); // {8CC16109-279F-4C53-A447-000000000007}
DEFINE_GUID(_MBBExtProfileGuid08, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08); // {8CC16109-279F-4C53-A447-000000000008}
DEFINE_GUID(_MBBExtProfileGuid09, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09); // {8CC16109-279F-4C53-A447-000000000009}
DEFINE_GUID(_MBBExtProfileGuid10, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A); // {8CC16109-279F-4C53-A447-00000000000A}
DEFINE_GUID(_MBBExtProfileGuid11, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B); // {8CC16109-279F-4C53-A447-00000000000B}
DEFINE_GUID(_MBBExtProfileGuid12, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C); // {8CC16109-279F-4C53-A447-00000000000C}
DEFINE_GUID(_MBBExtProfileGuid13, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D); // {8CC16109-279F-4C53-A447-00000000000D}
DEFINE_GUID(_MBBExtProfileGuid14, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E); // {8CC16109-279F-4C53-A447-00000000000E}
DEFINE_GUID(_MBBExtProfileGuid15, 0x8cc16109, 0x279f, 0x4c53, 0xa4, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F); // {8CC16109-279F-4C53-A447-00000000000F}


//
// Modem property name mappings for VZW OMA-DM connectivity management requirements
//
//  ./ManagedObjects/ConnMO/LTE/APN/*/Setting/MAX_CONN_T
//      : Max Time for Elapsed time over which MAX_CONN is applied (0 to 3600 seconds)
#define _MBBExtProfile_MaxConnAttemptTime       L"MAX_PDN_CONN_TIMER"
//  ./ManagedObjects/ConnMO/LTE/APN/*/Setting/MAX_CONN
//      : Max number of connection attempts per APN within MAX_CONN_T time (0 to 1023)
#define _MBBExtProfile_MaxConnAttempt           L"MAX_PDN_CONN_PER_BLOCK"
//  ./ManagedObjects/ConnMO/LTE/APN/*/Setting/WAIT_TIME
//      : Wait Time in seconds between successive PDN Connection attempts (0 to 1023 seconds)
#define _MBBExtProfile_ConnAttemptWaitTime      L"PDN_REQ_WAIT_INTERVAL"

//
// Modem property group and names for MBBUE Interface Spec, Sections 7.22.1 and 7.22.2
//
#define _GroupDataEnablementAndRoamControlCfg                       L"DataEnablementAndRoamControlCfg"
#define _PropertyfMayUseDataEnablementAndRoamControl                L"fMayUseDataEnablementAndRoamControl"
#define _PropertyInternetDataONOFF                                  L"InternetDataONOFF"
#define _PropertyInternetDataRoamingONOFF                           L"InternetDataRoamingONOFF"
#define _PropertyfMayUseRoamFilter                                  L"fMayUseRoamFilter"
#define _PropertyRoamFilterHomePLMNComponent                        L"RoamFilterHomePLMNComponent"
#define _PropertyRoamFilterExceptionComponent                       L"RoamFilterExceptionComponent"

// device service command IDs
#define _WinPhoneExtensionCommandIDDataSuspensionState                  0xbeef1001
#define _WinPhoneExtensionCommandIDLTEInfo                              0xbeef1002
#define _WinPhoneExtensionCommandIDActivationOption                     0xbeef1003
#define _WinPhoneExtensionCommandIDDataDormancyHint                     0xbeef1004
#define _WinPhoneExtensionCommandIDModemExecutorNumber                  0xbeef1005
#define _WinPhoneExtensionCommandIDDMConnConfig                         0xbeef1006
#define _WinPhoneExtensionCommandIDIPV6eHRPDConfig                      0xbeef1007
#define _WinPhoneExtensionCommandIDModemDualSIMCap                      0xbeef1008
#define _WinPhoneExtensionCommandIDMaxCntxtNumber                       0xbeef1009
#define _WinPhoneExtensionCommandIDDMConnConfigV2                       0xbeef100A
#define _WinPhoneExtensionCommandIDDMConfig                             0xbeef100B
/* new for Windows 10 (MBB driver 2.151); query only; no payload */
#define _WinPhoneExtensionCommandIDIWlanState                           0xbeef100C
/* new for Windows 10 (MBB driver 2.151); query only; no payload */
#define _WinPhoneExtensionCommandIDConnectionMediumState                0xbeef100D

// device service response IDs
#define _WinPhoneExtensionResponseIDDataSuspensionState                 0xceef1001
#define _WinPhoneExtensionResponseIDLTEInfo                             0xceef1002
#define _WinPhoneExtensionResponseIDActivationOption                    0xceef1003
#define _WinPhoneExtensionResponseIDDataDormancyHint                    0xceef1004
#define _WinPhoneExtensionResponseIDModemExecutorNumber                 0xceef1005
#define _WinPhoneExtensionResponseIDDMConnConfig                        0xceef1006
#define _WinPhoneExtensionResponseIDIPV6eHRPDConfig                     0xceef1007
#define _WinPhoneExtensionResponseIDModemDualSIMCap                     0xceef1008
#define _WinPhoneExtensionResponseIDMaxCntxtNumber                      0xceef1009
#define _WinPhoneExtensionResponseIDDMConnConfigV2                      0xceef100A
#define _WinPhoneExtensionResponseIDDMConfig                            0xceef100B
/* new for Windows 10 (MBB driver 2.151); query response only; payload WWAN_WINPHONE_IWLAN_STATE */
#define _WinPhoneExtensionResponseIDIWlanState                          0xceef100C
/* new for Windows 10 (MBB driver 2.151); query response only; payload WWAN_WINPHONE_CONNECTION_MEDIUM_STATE */
#define _WinPhoneExtensionResponseIDConnectionMediumState               0xceef100D

// device service event IDs
#define    _WinPhoneExtensionEventIDDataSuspensionState                 0xdeef1001
#define    _WinPhoneExtensionEventIDInternalErrorCode                   0xdeef1002
#define    _WinPhoneExtensionEventIDLTEAttachDefaultBearer              0xdeef1003
#define    _WinPhoneExtensionEventIDLTEDefaultBearerBridging            0xdeef1004
#define    _WinPhoneExtensionEventIDModemDualSIMCap                     0xdeef1005
/* new for driver 2.102. Payload WWAN_WINPHONE_IWLAN_STATE */
#define    _WinPhoneExtensionEventIDIWlanState                          0xdeef1006
/* new for driver 2.102. Payload WWAN_WINPHONE_CONNECTION_MEDIUM_STATE */
#define    _WinPhoneExtensionEventIDConnectionMediumState               0xdeef1007

// MBB driver version that supports DUAL_SIM features
#define    WWAN_WP_MBB_VER_MAJOR_FOR_DSDx           2
#define    WWAN_WP_MBB_VER_MINOR_FOR_DSDx           100

// MBB driver version that supports DNConnConfig V2
#define    WWAN_WP_MBB_VER_MAJOR_FOR_DMCONNCONFIGV2 WWAN_WP_MBB_VER_MAJOR_FOR_DSDx
#define    WWAN_WP_MBB_VER_MINOR_FOR_DMCONNCONFIGV2 101

// MBB driver version that supports DMConfig V1 and iWLAN feature
#define    WWAN_WP_MBB_VER_MAJOR_FOR_DMCONFIG       WWAN_WP_MBB_VER_MAJOR_FOR_DSDx
#define    WWAN_WP_MBB_VER_MINOR_FOR_DMCONFIG       102

// WIN10 MBB driver version 2.151 (using the same major number as WWAN_WP_MBB_VER_MAJOR_FOR_DSDx)
#define	   WWAN_WP_MBB_VER_MINOR_WIN10              151

// WP MBB driver version that supports dynamic enumeration of interfaces on WinPhone
// The first MBB version to support VMINI is 2.155
// All MBB drivers at or beyond this version must support dynamic enumeration of interfaces
#define    WWAN_WP_MBB_VER_MAJOR_VMINI              WWAN_WP_MBB_VER_MAJOR_FOR_DSDx
#define    WWAN_WP_MBB_VER_MINOR_VMINI              155

// WIN10-RS1 MBB driver version 2.160 (using the same major number as WWAN_WP_MBB_VER_MAJOR_FOR_DSDx)
#define	   WWAN_WP_MBB_VER_MINOR_WIN10RS1           160

// MBB driver version 2.165 (using the same major number as WWAN_WP_MBB_VER_MAJOR_FOR_DSDx)
// Support in-modem roaming filters
#define	   WWAN_WP_MBB_VER_MINOR_ROAMFILTER         165

// Payload for DS response _WinPhoneExtensionResponseIDLTEInfo

#define WWAN_WINPHONE_LTE_INFO_VERSION_1        1
#define WWAN_WINPHONE_LTE_INFO_VERSION_2        2

typedef struct _WWAN_WINPHONE_LTE_INFO {
    DWORD           version;                                            // should contains WWAN_WINPHONE_LTE_INFO_VERSION_xxx
    BOOL            bLTEAttached;                                       // TRUE - the device is LTE attached
    WCHAR           LastAttachAPN[WWAN_ACCESSSTRING_LEN];               // the attach APN of last LTE attach
    WWAN_IP_TYPE    LastAttachBearerIPType;                             // IP type of the last attach default bearer 
    BOOL            bUnbridgedBearer;                                   // TRUE - There is an defaultbearer un-bridged to any miniport
    BOOL            bUnbridgedBearerModemUsage;                         // TRUE - modem also internally uses the un-bridged default bearer
    WCHAR           UnbridgedBearerAPN[WWAN_ACCESSSTRING_LEN];          // APN of the un-bridged bearer
    WWAN_IP_TYPE    UnbridgedBearerIPType;                              // IP type of the un-bridged bearer
} WWAN_WINPHONE_LTE_INFO, *PWWAN_WINPHONE_LTE_INFO;

// Payload for DS response _WinPhoneExtensionCommandIDDataSuspensionState
typedef enum {
    _WWAN_WINPHONE_DATA_SUSPENSION_ON = 0,        // data suspension state is ON.
    _WWAN_WINPHONE_DATA_SUSPENSION_OFF            // data suspension state is OFF.
} WWAN_WINPHONE_DATA_SUSPENSION_STATE;

// Payload for DS event _WinPhoneExtensionEventIDIWlanState
typedef enum {
    _WWAN_WINPHONE_IWLAN_UNAVAILABLE = 0x00000000,       // IWlan is unavailable.
    _WWAN_WINPHONE_IWLAN_AVAILABLE   = 0x00000001        // IWlan is available and hence connection types that support IWlan medium are available.
} WWAN_WINPHONE_IWLAN_STATE;

// Payload for DS event _WinPhoneExtensionEventIDConnectionMediumState
typedef enum {
    _WWAN_WINPHONE_MEDIUM_UNKNOWN  = 0x00000000,       // The medium is undefined
    _WWAN_WINPHONE_MEDIUM_CELLULAR = 0x00000001,       // Connection over cellular.
    _WWAN_WINPHONE_MEDIUM_IWLAN    = 0x00000002        // Connection over Wifi.
} WWAN_WINPHONE_MEDIUM_STATE;

#define WWAN_WINPHONE_CONNECTION_MEDIUM_STATE_VERSION_V1 1
typedef struct
{
    ULONG                             Version;      // struct version
    ULONG                             ConnectionId; // Connection Id specified at the time of the connection request by using OID_WWAN_CONNECT
    WWAN_WINPHONE_MEDIUM_STATE        MediumState;
} WWAN_WINPHONE_CONNECTION_MEDIUM_STATE, *PWWAN_WINPHONE_CONNECTION_MEDIUM_STATE;

//payload for DS event _WinPhoneExtensionEventIDInternalErrorCode
typedef struct {
    ULONG            uInternalErrorCodeGroup;            // Internal Error Code Group, defined in 11.3.
    ULONG            uInternalErrorSpecificCause;        // Internal Error Specific Cause, defined in 11.3
    ULONG            uAdditionalInfo;                    // any additional info for internal error, as place holder.
} WWAN_WINPHONE_INTERNAL_ERROR_CODE;

// for uInternalErrorCodeGroup inside WWAN_WINPHONE_INTERNAL_ERROR_CODE
#define WWAN_EXT_ERR_CODE_GRP_NETWORK                     0x00000001        // Network Error Code Group
#define WWAN_EXT_ERR_CODE_GRP_APP_RPOC                    0x00000002        // Application Processor Error Code Group
#define WWAN_EXT_ERR_CODE_GRP_MODEM                       0x00000003        // Modem Processor Code Group


// A network-specific error. The following table shows the connection failure values as documented in the 3GPP TS 24.008 Specification.
// http://msdn.microsoft.com/en-us/library/windows/hardware/ff571202(v=vs.85).aspx
#define WWAN_ERR_3GPP_OPERATOR_BARRED                     0x00000008
#define WWAN_ERR_3GPP_INSUFFICIENT_RESOURCES              0x0000001a
#define WWAN_ERR_3GPP_INVALID_APN                         0x0000001b
#define WWAN_ERR_3GPP_AUTH_FAILURE                        0x0000001d
#define WWAN_ERR_3GPP_ACTIVATION_REJECT                   0x0000001e
#define WWAN_ERR_3GPP_ACTIVATION_REJECT_UNSPECIFIED       0x0000001f
#define WWAN_ERR_3GPP_SO_NOT_SUPPORTED                    0x00000020
#define WWAN_ERR_3GPP_SO_NOT_SUBSCRIBED                   0x00000021

//payload for DS event _WinPhoneExtensionEventIDLTEAttachDefaultBearer
typedef struct _WWAN_WINPHONE_LTE_ATTACH_BEARER_DATA {
    WCHAR            AccessString[WWAN_ACCESSSTRING_LEN];        // the attach APN when an attach fault bearer is connected
    WWAN_IP_TYPE    IPType;                                      // IP type of the attach default bearer
} WWAN_WINPHONE_LTE_ATTACH_BEARER_DATA;

// payload for DS event _WinPhoneExtensionEventIDLTEDefaultBearerBridging.
typedef struct _WWAN_WINPHONE_LTE_BRIDGE_EVENT_DATA {
    BOOL    bBridging;                                // TRUE - bridging event; FALSE - un-bridging event.
    WCHAR    AccessString[WWAN_ACCESSSTRING_LEN];     // APN of the default bearer in question
    WWAN_IP_TYPE  IPType;                             // IP type of the attach default bearer in question
} WWAN_WINPHONE_LTE_BRIDGE_EVENT_DATA;

// For set request of _WinPhoneExtensionCommandIDActivationOption,
typedef enum {
  _WWAN_WINPHONE_ACTIVATION_OPTION_NONE = 0,    // No activation option is on. This is the default state.
  _WWAN_WINPHONE_SPRINT_SLOT0_ON,               // SPRINT SLOT-0 state is ON.
  _WWAN_WINPHONE_VZW_TETHER_MODE_ON             // Verizon WiFi tether mode is ON
} WWAN_WINPHONE_ACTIVATION_OPTION;

// WWAN_WINPHONE_SPRINT_SLOT0_STATE_RESPONSE structure
// for _WinPhoneExtensionResponseIDActivationOption
typedef enum {
  _WWAN_WINPHONE_ACTIVATION_OPTION_OK = 0,     // set or query request succeeded
  _WWAN_WINPHONE_ACTIVATION_OPTION_INVALID,    // set or get request failed due to invalid parameter
  _WWAN_WINPHONE_ACTIVATION_OPTION_CONFLICT    // set request failed due to state machine conflict.
} WWAN_WINPHONE_ACTIVATION_OPTION_RESPONSE_CODE;

typedef struct _WWAN_WINPHONE_ACTIVATION_OPTION_RESPONSE {
  WWAN_WINPHONE_ACTIVATION_OPTION_RESPONSE_CODE    ResponseCode;
  WWAN_WINPHONE_ACTIVATION_OPTION        CurrentActivationOption;
} WWAN_WINPHONE_ACTIVATION_OPTION_RESPONSE, *PWWAN_WINPHONE_ACTIVATION_OPTION_RESPONSE;

// For set request of _WinPhoneExtensionCommandIDDataDormancyHint,
typedef enum {
  _WWAN_WINPHONE_DATA_DORMANCY_HINT_DISABLE = 0,    // The current hint to WWAN is to not utilize mechanisms
                                                    // for entering lower power modes faster.
  _WWAN_WINPHONE_DATA_DORMANCY_HINT_ENABLE          // The current hint to WWAN is to utilize mechanisms
                                                    // for entering lower power modes faster.
} WWAN_WINPHONE_DATA_DORMANCY_HINT_STATE;

// WWAN_WINPHONE_DATA_DORMANCY_HINT_STATE_RESPONSE structure
// for _WinPhoneExtensionResponseIDDataDormancyHint
typedef enum {
  _WWAN_WINPHONE_DATA_DORMANCY_HINT_OK = 0,     // set or query request succeeded.
  _WWAN_WINPHONE_DATA_DORMANCY_HINT_INVALID,    // set or get request failed due to invalid parameter.
  _WWAN_WINPHONE_DATA_DORMANCY_HINT_FAIL        // set or get request failed without further detail.
} WWAN_WINPHONE_DATA_DORMANCY_HINT_RESPONSE_CODE;

typedef struct _WWAN_WINPHONE_DATA_DORMANCY_HINT_STATE_RESPONSE {
  WWAN_WINPHONE_DATA_DORMANCY_HINT_RESPONSE_CODE    ResponseCode;
  WWAN_WINPHONE_DATA_DORMANCY_HINT_STATE        CurrentDataDormancyHintState;
} WWAN_WINPHONE_DATA_DORMANCY_HINT_STATE_RESPONSE, *PWWAN_WINPHONE_DATA_DORMANCY_HINT_STATE_RESPONSE;

// This is for the response data for the response _WinPhoneExtensionResponseIDModemExecutorNumber.
typedef struct _WWAN_WINPHONE_MODEM_EXECUTOR_IDS {
  ULONG    modemNumber;                   // modem number
  ULONG    ExecutorID;                    // ExecutorID
} WWAN_WINPHONE_MODEM_EXECUTOR_IDS;

// For set request of _WinPhoneExtensionCommandIDIPV6eHRPDConfig,
// WWAN_WINPHONE_IPV6_EHRPD_CONFIG should follow WWAN_DEVICE_SERVICE_DATA instance in memory
typedef struct {
  WCHAR  APNString[WWAN_ACCESSSTRING_LEN];      // APN Name associated with fIpv6Enable
  BOOL   fIpv6Enable;                           // TRUE: IPV6 on EHRPD Allowed, FALSE: IPV6 packets should be discarded on eHRPD
} WWAN_WINPHONE_IPV6_EHRPD_CONFIG;

typedef enum {
  _WWAN_WINPHONE_IPV6_EHRPD_CONFIG_OK = 0,     // set or query request succeeded
  _WWAN_WINPHONE_IPV6_EHRPD_CONFIG_INVALID,    // set or get request failed due to invalid parameter
  _WWAN_WINPHONE_IPV6_EHRPD_CONFIG_FAILURE,    // set or get request failed for unspecified reason.
} WWAN_WINPHONE_IPV6_EHRPD_CONFIG_RESPONSE_CODE;

// for response of _WinPhoneExtensionResponseIDIPV6eHRPDConfig
// WWAN_WINPHONE_DM_IPV6_EHRPD_CONFIG_RESPONSE structure should follow WWAN_DEVICE_SERVICE_DATA in memory.
typedef struct _WWAN_WINPHONE_DM_IPV6_EHRPD_CONFIG_RESPONSE {
  WWAN_WINPHONE_IPV6_EHRPD_CONFIG_RESPONSE_CODE    ResponseCode;
  WWAN_WINPHONE_IPV6_EHRPD_CONFIG                CurrentIpv6eHrpdConfig;
} WWAN_WINPHONE_DM_IPV6_EHRPD_CONFIG_RESPONSE, *PWWAN_WINPHONE_DM_IPV6_EHRPD_CONFIG_RESPONSE;


// WinPhone IHV-extendable Device Service Extension for opaque commands, responses and events
// {2DDDB22A-598F-40E2-9C6B-E9382C9B5A8D}
DEFINE_GUID(
    _WinPhoneIHVExtensionDeviceServiceGuid,
    0x2DDDB22A,
    0x598F,
    0x40E2,
    0x9c, 0x6b, 0xe9, 0x38, 0x2c, 0x9b, 0x5a, 0x8d);


// Command ID in OID_WWAN_DEVICE_SERVICE_COMMAND set or query request in WWAN Extension for Apollo phone.
// It sets or queries the connection parameters for IMS and LTE attach.
// This command ID is scoped under the Apollo device service extension _WINPHONEExtensionDeviceServiceGuid.
// The value of the Command ID to be specified in relevant header

typedef enum {
  WWAN_WINPHONE_ROAMING_DISABLED = 0,
  WWAN_WINPHONE_ROAMING_ENABLED = 1,
  WWAN_WINPHONE_ROAMING_DOMESTIC = 2,
} WWAN_WINPHONE_ROAMING_CONTROL;

typedef struct {
  WCHAR                          APNString[WWAN_ACCESSSTRING_LEN];
  BOOL                           fEnabled;                         // true -- enable
  WWAN_WINPHONE_ROAMING_CONTROL  Roaming;                          // Roaming control, one of WWAN_WINPHONE_ROAMING_CONTROL.
  WWAN_IP_TYPE                   ipType;                           // IPv4; IPv6; IPv4v6
  GUID                           OEMConnectionId;                  // Uniquely identifies connection configuration destined for modem
} WWAN_WINPHONE_DM_CONN_CONFIG;

#define WWAN_WINPHONE_DM_CONN_CONFIG_STRUCT_VERSION_2 2

// The first ULONG of the structure contains ulVersion and WWAN_WINPHONE_DM_CONN_CONFIG_V2 only applies when
// ulVersion contains WWAN_WINPHONE_DM_CONN_CONFIG_STRUCT_VERSION_2
// The sizes of Password and UserName should not exceeds 128;
// although, the sizes of the data structure is 256 for consistency with other structures.
typedef struct {
  ULONG                          ulVersion;
  WCHAR                          APNString[WWAN_ACCESSSTRING_LEN]; // APN string for the connection configuration.
  BOOL                           fEnabled;                         // true -- enable
  WWAN_WINPHONE_ROAMING_CONTROL  Roaming;                          // Roaming control, one of WWAN_WINPHONE_ROAMING_CONTROL.
  WWAN_IP_TYPE                   ipType;                           // IPv4; IPv6; IPv4v6
  GUID                           OEMConnectionId;                  // Uniquely identifies connection configuration destined for modem
  WWAN_AUTH_PROTOCOL             AuthType;                         // The authentication protocol.
  WCHAR                          UserName[WWAN_USERNAME_LEN];      // The username for authentication.
  WCHAR                          Password[WWAN_PASSWORD_LEN];      // The password for authentication.
} WWAN_WINPHONE_DM_CONN_CONFIG_V2;

// WWAN_WINPHONE_DM_CONN_CONFIG_RESPONSE structure should follow WWAN_DEVICE_SERVICE_DATA in memory.
typedef enum {
  _WWAN_WINPHONE_DM_CONN_CONFIG_OK = 0,              // set or query request succeeded
  _WWAN_WINPHONE_DM_CONN_CONFIG_INVALID,             // set or get request failed due to invalid parameter
  _WWAN_WINPHONE_DM_CONN_CONFIG_FAILURE,             // set or get request failed for unspecified reason.
  _WWAN_WINPHONE_DM_CONN_CONFIG_UNSUPPORTED_VERSION, // set, query request failed as version unsupported
} WWAN_WINPHONE_DM_CONN_CONFIG_RESPONSE_CODE;

 // The data structure applies only when ulVersion inside CurrentDMConnConfig
 // is WWAN_WINPHONE_DM_CONN_CONFIG_STRUCT_VERSION_2.
typedef struct _WWAN_WINPHONE_DM_CONN_CONFIG_RESPONSE_V2 {
  WWAN_WINPHONE_DM_CONN_CONFIG_RESPONSE_CODE ResponseCode;
  ULONG                                      ulMaxVersion;
  WWAN_WINPHONE_DM_CONN_CONFIG_V2            CurrentDMConnConfig;
} WWAN_WINPHONE_DM_CONN_CONFIG_RESPONSE_V2, *PWWAN_WINPHONE_DM_CONN_CONFIG_RESPONSE_V2;

typedef struct _WWAN_WINPHONE_DM_CONN_CONFIG_RESPONSE {
  WWAN_WINPHONE_DM_CONN_CONFIG_RESPONSE_CODE    ResponseCode;
  WWAN_WINPHONE_DM_CONN_CONFIG                  CurrentDMConnConfig;
} WWAN_WINPHONE_DM_CONN_CONFIG_RESPONSE, *PWWAN_WINPHONE_DM_CONN_CONFIG_RESPONSE;

// Payload data structure for _WinPhoneExtensionResponseIDModemDualSIMCap and _WinPhoneExtensionEventIDModemDualSIMCap
typedef struct {
  BOOL        bIsModemTypeKnown;    // FALSE - Modem type is currently unknown and rest of the fields invalid
                                    // TRUE -- Modem type is known and rest of the fields valid
  ULONG     nExecutors;             // 1 -- Modem supports single-SIM only
                                    // 2 -- Modem supports dual-SIM;
                                    // Other values are unused and invalid at this time.
  ULONG     nActiveExecutors;       // nActiveExecutors must <= nExecutors; Relevant only if nExecutors > 1
                                    // 1 - dual-SIM dual standby
                                    // 2 - dual-SIM dual active
                                    // other values are unused and invalid at this time.
  ULONG     nActiveDataExecutors;   // nActiveDataExecutors must <= nActiveExecutors;
                                    // Relevant only if nActiveExecutors > 1.
                                    // 1 - only one executor can have active PS data call at a time,
                                    //      even though the modem support DS/DA.
                                    // 2 - two executors can have active PS data calls at the same time.
} WWAN_WINPHONE_MODEMTYPE_CAP, *PWWAN_WINPHONE_MODEMTYPE_CAP;

// Determines the type of the DM property
typedef enum
{
    _WWAN_WINPHONE_DM_PROPERTY_UNKNOWN = 0,                         // the type of the property is unknown
    _WWAN_WINPHONE_DM_PROPERTY_BOOLEAN,                             // boolean type
    _WWAN_WINPHONE_DM_PROPERTY_BYTE,                                // byte type
    _WWAN_WINPHONE_DM_PROPERTY_INT32,                               // 32-bit signed integer
    _WWAN_WINPHONE_DM_PROPERTY_UINT32,                              // 32-bit unsigned integer
    _WWAN_WINPHONE_DM_PROPERTY_INT64,                               // 64-bit signed integer
    _WWAN_WINPHONE_DM_PROPERTY_UINT64,                              // 64-bit unsigned integer
    _WWAN_WINPHONE_DM_PROPERTY_STRING,                              // null-terminate unicode string
    _WWAN_WINPHONE_DM_PROPERTY_BLOB,                                // byte array blob
} WWAN_WINPHONE_DM_PROPERTY_TYPE;

#define WWAN_WINPHONE_DM_PROPERTY_VERSION_V1 1
typedef struct
{
    ULONG ulVersion;               // struct version
    DWORD dwPropertyNameOffset;    // offset relative to rgProperties + (cProperties * sizeof(WWAN_WINPHONE_DM_PROPERTY)) of WWAN_WINPHONE_DM_CONFIG
                                   // where null-terminate unicode string property name is stored
    WWAN_WINPHONE_DM_PROPERTY_TYPE type;  // type of the property value
    union
    {
        BOOLEAN fValue;            // _WWAN_WINPHONE_DM_PROPERTY_BOOLEAN
        BYTE bValue;               // _WWAN_WINPHONE_DM_PROPERTY_BYTE
        INT32 iValue;              // _WWAN_WINPHONE_DM_PROPERTY_INT32
        UINT32 uiValue;            // _WWAN_WINPHONE_DM_PROPERTY_UINT32
        INT64 lValue;              // _WWAN_WINPHONE_DM_PROPERTY_INT64
        UINT64 ulValue;            // _WWAN_WINPHONE_DM_PROPERTY_UINT64

        struct {
            ULONG cbSize;          // size of blob
            DWORD dwOffset;        // offset relative to rgProperties + (cProperties * sizeof(WWAN_WINPHONE_DM_PROPERTY)) of WWAN_WINPHONE_DM_CONFIG
                                   // so, for first property dwOffset = 0, next one is previous property cbSize...etc.
        } blob;                    // this is for both _WWAN_WINPHONE_DM_PROPERTY_STRING and _WWAN_WINPHONE_DM_PROPERTY_BLOB
    } value;
} WWAN_WINPHONE_DM_PROPERTY, *PWWAN_WINPHONE_DM_PROPERTY;

#define WWAN_WINPHONE_DM_CONFIG_VERSION_V1 1
#define WWAN_DM_PROPERTY_GROUP_LEN 256
typedef struct
{
    ULONG                          ulVersion;                                                     // struct version
    ULONG                          cbSize;                                                        // size of struct + properties + data
    WCHAR                          wszPropertyGroup[WWAN_DM_PROPERTY_GROUP_LEN];                  // property group name. This can be any logical group of properties.
    GUID                           guidPropertyGroupInstance;                                     // property group instance. This instance identifies one set of properties
                                                                                                  // in the group. The meaning should be defined explicitly for each group
                                                                                                  // if required, and this instance could be not necessary depending on the group.
    ULONG                          cProperties;                                                   // Number of properties
    WWAN_WINPHONE_DM_PROPERTY      rgProperties[1];                                               // Array of properties.
} WWAN_WINPHONE_DM_CONFIG, *PWWAN_WINPHONE_DM_CONFIG;

typedef enum
{
    _WWAN_WINPHONE_DM_CONFIG_OK = 0,              // set or query request succeeded
    _WWAN_WINPHONE_DM_CONFIG_INVALID,             // set or get request failed due to invalid parameter
    _WWAN_WINPHONE_DM_CONFIG_FAILURE,             // set or get request failed for unspecified reason.
    _WWAN_WINPHONE_DM_CONFIG_UNSUPPORTED_VERSION, // set, query request failed as version unsupported
} WWAN_WINPHONE_DM_CONFIG_RESPONSE_CODE;

// for uAdditionalInfo inside WWAN_WINPHONE_DM_CONFIG_RESPONSE
#define WWAN_WINPHONE_DM_CONFIG_ADITIONAL_INFO_NONE                  0x00000000        // no extra info for the response
#define WWAN_WINPHONE_DM_CONFIG_PS_DETACH_ATTACH_REQUIRED            0x00000001        // the DM CONFIG needs a PS detach and attach action to take effect

#define WWAN_WINPHONE_DM_CONFIG_RESPONSE_VERSION_V1 1
typedef struct _WWAN_WINPHONE_DM_CONFIG_RESPONSE
{
    ULONG                                  ulVersion;          // struct version
    WWAN_WINPHONE_DM_CONFIG_RESPONSE_CODE  ResponseCode;       // response code
    ULONG                                  uAdditionalInfo;    // any additional info for the DM config
    WWAN_WINPHONE_DM_CONFIG                CurrentDMConfig;    // current config
} WWAN_WINPHONE_DM_CONFIG_RESPONSE, *PWWAN_WINPHONE_DM_CONFIG_RESPONSE;

#endif
