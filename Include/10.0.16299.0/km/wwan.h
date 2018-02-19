/*++
Copyright (c) 2007  Microsoft Corporation

Module Name:
    wwan.h

Abstract:
    Header file for WWAN structures

Revision History:
    DATE            DESCRIPTION
    ------------        -----------
    23-FEB-2007     V0.40 Driver Model Compliant
    23-MAY-2007     V0.50 Driver Model Compliant
    01-AUG-2007     V0.60 Driver Model Compliant
    02-APR-2008     V1.00 Driver Model Compliant
    15-FEB-2011     Incorporated device services
    21-NOV-2011     V2.00 Driver Model Compliant
    30-NOV-2012     V2.1  Driver Model Compliant

--*/

#ifndef __WWAN_DECL__
#define __WWAN_DECL__

#if _MSC_VER >= 1200  
#pragma warning(push)  
#endif  
#pragma warning(disable:4201) // nameless struct/union  

#define WWAN_ERROR_UNSUPPORTED_FIRMWARE                         0xf0f0f000
#define WWAN_ERROR_COM_PORT_CONFLICT                            0xf0f0f001
#define WWAN_ERROR_RESOURCE_CONFLICT_OTHER                      0xf0f0ffff

typedef ULONG WWAN_STATUS;

#define WWAN_STATUS_SUCCESS                                     STATUS_SUCCESS
#define WWAN_STATUS_BUSY                                        0xC0040002
#define WWAN_STATUS_FAILURE                                     0xC0040003
#define WWAN_STATUS_SIM_NOT_INSERTED                            0xC0040004
#define WWAN_STATUS_BAD_SIM                                     0xC0040005
#define WWAN_STATUS_PIN_REQUIRED                                0xC0040006
#define WWAN_STATUS_PIN_DISABLED                                0x40040007
#define WWAN_STATUS_NOT_REGISTERED                              0x40040008
#define WWAN_STATUS_PROVIDERS_NOT_FOUND                         0x40040009
#define WWAN_STATUS_NO_DEVICE_SUPPORT                           0xC004000a
#define WWAN_STATUS_PROVIDER_NOT_VISIBLE                        0x4004000b
#define WWAN_STATUS_DATA_CLASS_NOT_AVAILABLE                    0x4004000c
#define WWAN_STATUS_PACKET_SVC_DETACHED                         0xC004000d
#define WWAN_STATUS_MAX_ACTIVATED_CONTEXTS                      0xC004000e
#define WWAN_STATUS_NOT_INITIALIZED                             0xC004000f
#define WWAN_STATUS_VOICE_CALL_IN_PROGRESS                      0x40040010
#define WWAN_STATUS_CONTEXT_NOT_ACTIVATED                       0xC0040011
#define WWAN_STATUS_SERVICE_NOT_ACTIVATED                       0xC0040012
#define WWAN_STATUS_INVALID_ACCESS_STRING                       0xC0040013
#define WWAN_STATUS_INVALID_USER_NAME_PWD                       0xC0040014
#define WWAN_STATUS_RADIO_POWER_OFF                             0xC0040015
#define WWAN_STATUS_INVALID_PARAMETERS                          0xC0040016
#define WWAN_STATUS_READ_FAILURE                                0xC0040017
#define WWAN_STATUS_WRITE_FAILURE                               0xC0040018
#define WWAN_STATUS_DENIED_POLICY                               0xC0040019
#define WWAN_STATUS_INVALID_DEVICE_SERVICE_OPERATION            0xC004001a
#define WWAN_STATUS_MORE_DATA                                   0xC004001b
#define WWAN_STATUS_INTER_RESOURCE_CONFLICT                     0xC004001c
#define WWAN_STATUS_PREFERREDMEDIA_NOT_AVAILABLE                0xC004001d
#define WWAN_STATUS_MEDIA_PREF_CONFLICT                         0xC004001e
#define WWAN_STATUS_MEDIA_PREF_SOME_SERVICES_UNSUPPORTED        0xC004001f
#define WWAN_STATUS_NOT_SUPPORTED                               0xC0040020

//SMS specific error codes
#define WWAN_STATUS_SMS_OPERATION_NOT_ALLOWED                   0xC0040100
#define WWAN_STATUS_SMS_MEMORY_FAILURE                          0xC0040101
#define WWAN_STATUS_SMS_INVALID_MEMORY_INDEX                    0xC0040102
#define WWAN_STATUS_SMS_UNKNOWN_SMSC_ADDRESS                    0xC0040103
#define WWAN_STATUS_SMS_NETWORK_TIMEOUT                         0xC0040104
#define WWAN_STATUS_SMS_MEMORY_FULL                             0xC0040105
#define WWAN_STATUS_SMS_UNKNOWN_ERROR                           0xC0040106
#define WWAN_STATUS_SMS_FILTER_NOT_SUPPORTED                    0xC0040107
#define WWAN_STATUS_SMS_MORE_DATA                               0x40040108
#define WWAN_STATUS_SMS_LANG_NOT_SUPPORTED                      0xC0040109
#define WWAN_STATUS_SMS_ENCODING_NOT_SUPPORTED                  0xC004010A
#define WWAN_STATUS_SMS_FORMAT_NOT_SUPPORTED                    0xC004010B

//Authentication Algorithm specific error codes
#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630 )
#define WWAN_STATUS_AUTH_INCORRECT_AUTN                         0xC0040200
#define WWAN_STATUS_AUTH_SYNC_FAILURE                           0xC0040201
#define WWAN_STATUS_AUTH_AMF_NOT_SET                            0xC0040202
#endif

//Low-Level UICC Access specific error codes
#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS1 || NDIS_SUPPORT_NDIS660 )
#define WWAN_STATUS_UICC_NO_LOGICAL_CHANNELS                    0xC0040300
#define WWAN_STATUS_UICC_SELECT_FAILED                          0xC0040301
#define WWAN_STATUS_UICC_INVALID_LOGICAL_CHANNEL                0xC0040302
#endif

typedef enum _WWAN_STRUCT_TYPE {
    WwanStructTN = 0,
    WwanStructContext,
    WwanStructProvider,
    WwanStructSmsPdu,
    WwanStructReserved0,
    WwanStructReserved1,
    WwanStructReserved2,
    WwanStructSmsCdma,
    WwanStructReserved3,
    WwanStructDeviceServiceEntry,
    WwanStructProvider2,
    WwanStructDeviceServiceGuid,
    WwanStructDeviceServiceCommandId,
    WwanStructCellularClass,
    WwanStructDeviceSlotMap,
    WwanStructUiccApplication,
    WwanStructRegisterAcquisitionOrder,
    WwanStructRegistrationState,
    WwanStructSignalState,
    WwanStructUiccTerminalCapability,
    WwanStructSarConfig,
    WwanStructContextV2,
    WwanStructNetworkBlacklistProvider,
    WwanStructMax
} WWAN_STRUCT_TYPE, *PWWAN_STRUCT_TYPE;

typedef struct _WWAN_LIST_HEADER {
    WWAN_STRUCT_TYPE    ElementType;
    ULONG       ElementCount;
} WWAN_LIST_HEADER, *PWWAN_LIST_HEADER;

#define WWAN_MANUFACTURER_LEN           32
#define WWAN_MODEL_LEN              32
#define WWAN_FIRMWARE_LEN           32
#define WWAN_DEVICEID_LEN           18
#define WWAN_CUSTOM_DATA_CLASS_LEN          12
#define WWAN_CUSTOM_BAND_CLASS_LEN          20
#define WWAN_PROVIDERID_LEN         7
#define WWAN_PROVIDERNAME_LEN           21
#define WWAN_PROVIDERNAMELONG_LEN       65
#define WWAN_ROAMTEXT_LEN           64
#define WWAN_ACCESSSTRING_LEN           101
#define WWAN_USERNAME_LEN           256
#define WWAN_PASSWORD_LEN           256
#define WWAN_SUBSCRIBERID_LEN           16

#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630)
//
// Starting Win 8, we are changing the PIN length to 16
//
#define WWAN_PIN_LEN               17
#else
//
// Win 7
//
#define WWAN_PIN_LEN                12

#endif

#define WWAN_SUBSCRIBERID_LEN_EX        19
#define DEFAULT_MIN_PIN_LENGTH          4

#define WWAN_SIMICCID_LEN           21

// 
// Starting with Blue, and MBIM Errata, the MSISDN (telephone number) length grows to 22 (23 with null termination)
//
#if ( _WIN32_WINNT >= _WIN32_WINNT_WINBLUE || NTDDI_VERSION >= NTDDI_WINBLUE || NDIS_SUPPORT_NDIS640 )
#define WWAN_TN_LEN             23
#else
//
// Win 8 and below
//
#define WWAN_TN_LEN             16
#endif

#define WWAN_SCA_MAX_LEN            14
#define WWAN_SMS_ADDRESS_MAX_LEN        16
#define WWAN_SC_TIME_STAMP_MAX_LEN      20
#define WWAN_SMS_CDMA_ADDR_MAX_LEN      50
#define WWAN_SMS_CDMA_TIMESTAMP_MAX_LEN         20
#define WWAN_SMS_MSG_PDU_LEN            183
#define WWAN_SMS_RAW_PDU_LEN            (WWAN_SMS_MSG_PDU_LEN - 12)
#define WWAN_SMS_PDU_HEX_BUF_LEN        (WWAN_SMS_MSG_PDU_LEN * 2)
#define WWAN_CDMA_SHORT_MSG_SIZE_UNKNOWN    0
#define WWAN_CDMA_SHORT_MSG_SIZE_MAX        160
#define WWAN_SMS_CDMA_MAX_BUF_LEN       160
#define WWAN_SMS_CDMA_MAX_MSG_LEN       WWAN_CDMA_SHORT_MSG_SIZE_MAX
#define WWAN_USSD_STRING_LEN_MAX        160

#define WWAN_CDMA_DEFAULT_PROVIDER_ID   (0)

#define WWAN_AUTH_RAND_LEN           16
#define WWAN_AUTH_AUTN_LEN           16
#define WWAN_AUTH_SRES_LEN           4
#define WWAN_AUTH_KC_LEN             8
#define WWAN_AUTH_RES_MAX_LEN        16
#define WWAN_AUTH_IK_LEN             16
#define WWAN_AUTH_CK_LEN             16
#define WWAN_AUTH_AUTS_LEN           14
#define WWAN_AUTH_NETWORK_NAME_MAX_LEN   256

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )
#define WWAN_UICC_APP_ID_MAX_LEN        32
#define WWAN_UICC_FILE_PATH_MAX_LEN     8
#define WWAN_EF_ACCESS_TYPES_LEN        4
#define WWAN_UICC_RECORD_DATA_MAX_LEN   256
#endif

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS1 || NDIS_SUPPORT_NDIS660 )
#define WWAN_ATR_MAX_LEN                36
#define WWAN_UICC_STATUS_LEN            2
#endif

typedef enum _WWAN_ASYNC_GETSET_TYPE {
    WwanAsyncGetDeviceCaps = 0,
    WwanAsyncGetReadyInfo,
    WwanAsyncGetRadioState,
    WwanAsyncSetRadioState,
    WwanAsyncGetPin,
    WwanAsyncSetPin,
    WwanAsyncGetPinList,
    WwanAsyncGetHomeProvider,
    WwanAsyncSetHomeProvider,
    WwanAsyncGetPreferredProviders,
    WwanAsyncSetPreferredProviders,
    WwanAsyncGetVisibleProviders,
    WwanAsyncGetRegisterState,
    WwanAsyncSetRegisterState,
    WwanAsyncGetPacketService,
    WwanAsyncSetPacketService,
    WwanAsyncGetSignalState,
    WwanAsyncSetSignalState,
    WwanAsyncGetConnect,
    WwanAsyncSetConnect,
    WwanAsyncGetProvisionedContexts,
    WwanAsyncSetProvisionedContext,
    WwanAsyncSetServiceActivation,
    WwanAsyncGetSmsConfiguration,
    WwanAsyncSetSmsConfiguration,
    WwanAsyncSmsRead,
    WwanAsyncSmsSend,
    WwanAsyncSmsDelete,
    WwanAsyncSmsStatus,
    WwanAsyncSetVendorSpecific,
    WwanAsyncSetProfileIndex,
    WwanAsyncGetDeviceServices,
    WwanAsyncSubscribeDeviceServiceEvents,
    WwanAsyncAuthChallenge,
    WwanAsyncUssdRequest,
    WwanAsyncSetPinEx,
    WwanAsyncGetPinEx,
    WwanAsyncGetDeviceServiceCommand,
    WwanAsyncSetDeviceServiceCommand,
    WwanAsyncQueryDeviceServiceSupportedCommands,
    WwanAsyncGetPreferredMultiCarrierProviders,
    WwanAsyncSetPreferredMultiCarrierProviders,
    WwanAsyncSetDeviceServiceSession,
    WwanAsyncWriteDeviceServiceSession,
    WwanAsyncSetNetworkIdleHint,
    WwanAsyncSetPreshutdown,
    WwanAsyncGetAtr,
    WwanAsyncUiccOpenChannel,
    WwanAsyncUiccCloseChannel,
    WwanAsyncUiccSendApdu,
    WwanAsyncUiccGetTerminalCapability,
    WwanAsyncUiccSetTerminalCapability,
    WwanAsyncGetPsMediaConfig,
    WwanAsyncSetPsMediaConfig,
    WwanAsyncGetSarConfig,
    WwanAsyncSetSarConfig,
    WwanAsyncGetSarTransmissionStatus,
    WwanAsyncSetSarTransmissionStatus,
    WwanAsyncGetNetworkBlacklist,
    WwanAsyncSetNetworkBlacklist,
    WwanAsyncGetLteAttachConfig,
    WwanAsyncSetLteAttachConfig,
    WwanAsyncGetLteAttachStatus,
    WwanAsyncSetLteAttachStatus,
    WwanAsyncGetProvisionedContextsV2,
    WwanAsyncSetProvisionedContextV2,
    WwanAsyncGetSysCap,
    WwanAsyncGetDeviceCapsEx,
    WwanAsyncGetUiccSlotMapping,
    WwanAsyncSetUiccSlotMapping,
    WwanAsyncGetUiccSlotInfo,
    WwanAsyncGetModemConfigInfo,
    WwanAsyncGetPcoStatus,
    WwanAsyncUiccGetReset,
    WwanAsyncUiccSetReset,
    WwanAsyncSetDeviceReset,
    WwanAsyncGetCellInfo,
    WWAN_ASYNC_GETSET_TYPE_MAX
} WWAN_ASYNC_GETSET_TYPE, *PWWAN_ASYNC_GETSET_TYPE;

#ifndef WWAN_MAJOR_VERSION

#define WWAN_MAJOR_VERSION_1        1
#define WWAN_MAJOR_VERSION_2        2

#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630 )
#define WWAN_MAJOR_VERSION          WWAN_MAJOR_VERSION_2
#else
#define WWAN_MAJOR_VERSION          WWAN_MAJOR_VERSION_1
#endif

#endif

typedef ULONG WWAN_VERSION;         /* A value specifies the version. */
                                    /* bit[16:31]: major version      */
                                    /* bit[0:15]:  minor version      */

#define WWAN_FORM_VERSION( _MAJOR_, _MINOR_ ) \
    ((WWAN_VERSION)(((_MAJOR_) << 16) | (_MINOR_)))

#ifndef WWAN_MINOR_VERSION

#define WWAN_MINOR_VERSION_0        0
#define WWAN_MINOR_VERSION_1        1
#define WWAN_MINOR_VERSION_159      159
#define WWAN_MINOR_VERSION_160      160

#if ( _WIN32_WINNT > _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS1 || NDIS_SUPPORT_NDIS660 )
#define WWAN_MINOR_VERSION          WWAN_MINOR_VERSION_160
#else
#if ( _WIN32_WINNT >= _WIN32_WINNT_WINBLUE || NTDDI_VERSION >= NTDDI_WINBLUE || NDIS_SUPPORT_NDIS640 )
#define WWAN_MINOR_VERSION          WWAN_MINOR_VERSION_1
#else
#define WWAN_MINOR_VERSION          WWAN_MINOR_VERSION_0
#endif
#endif

// Major = 1, Minor = 0
#define WWAN_VERSION_1_0        \
    WWAN_FORM_VERSION( WWAN_MAJOR_VERSION_1, WWAN_MINOR_VERSION_0 )

// Major = 2, Minor = 0
#define WWAN_VERSION_2_0        \
    WWAN_FORM_VERSION( WWAN_MAJOR_VERSION_2, WWAN_MINOR_VERSION_0 )

// Major = 2, Minor = 1
#define WWAN_VERSION_2_1        \
    WWAN_FORM_VERSION( WWAN_MAJOR_VERSION_2, WWAN_MINOR_VERSION_1 )

// Major = 2, Minor = 159
#define WWAN_VERSION_2_159        \
    WWAN_FORM_VERSION( WWAN_MAJOR_VERSION_2, WWAN_MINOR_VERSION_159 )

// Major = 2, Minor = 160
#define WWAN_VERSION_2_160        \
    WWAN_FORM_VERSION( WWAN_MAJOR_VERSION_2, WWAN_MINOR_VERSION_160 )

#endif

#ifndef WWAN_CURRENT_VERSION
#define WWAN_CURRENT_VERSION    \
    WWAN_FORM_VERSION( WWAN_MAJOR_VERSION, WWAN_MINOR_VERSION )
#endif

#define WWAN_VERSION_IS_WIN7( _MAJOR_, _MINOR_ ) \
    (((_MAJOR_) == WWAN_MAJOR_VERSION_1) && ((_MINOR_) == WWAN_MINOR_VERSION_0))

#define WWAN_VERSION_IS_WIN8( _MAJOR_, _MINOR_ ) \
    (((_MAJOR_) == WWAN_MAJOR_VERSION_2) && ((_MINOR_) == WWAN_MINOR_VERSION_0))

#define WWAN_VERSION_IS_WIN8_OR_HIGHER( _MAJOR_, _MINOR_ ) \
    ((_MAJOR_) >= WWAN_MAJOR_VERSION_2)

#define WWAN_VERSION_IS_BLUE( _MAJOR_, _MINOR_ ) \
    (((_MAJOR_) == WWAN_MAJOR_VERSION_2) && ((_MINOR_) == WWAN_MINOR_VERSION_1))

#define WWAN_VERSION_IS_BLUE_OR_HIGHER( _MAJOR_, _MINOR_ ) \
    ((((_MAJOR_) == WWAN_MAJOR_VERSION_2) && ((_MINOR_) >= WWAN_MINOR_VERSION_1)) || \
     ((_MAJOR_) > WWAN_MAJOR_VERSION_2))

#define WWAN_VERSION_IS_WIN10RS1_OR_HIGHER( _MAJOR_, _MINOR_ ) \
    ((((_MAJOR_) == WWAN_MAJOR_VERSION_2) && ((_MINOR_) >= WWAN_MINOR_VERSION_160)) || \
     ((_MAJOR_) > WWAN_MAJOR_VERSION_2))

#define WWAN_DRIVER_CAPS_NONE       0x00000000
//Work around for GetD3ColdCapability of UDE and can be removed once UDE supports GetD3ColdCapability
#define WWAN_DRIVER_CAPS_UDE        0x00000001


typedef struct _WWAN_DRIVER_CAPS {
    ULONG ulMajorVersion;
    ULONG ulMinorVersion;
    ULONG ulDriverCaps;
} WWAN_DRIVER_CAPS, *PWWAN_DRIVER_CAPS;

typedef enum _WWAN_DEVICE_TYPE {
    WwanDeviceTypeUnknown = 0,
    WwanDeviceTypeEmbedded,
    WwanDeviceTypeRemovable,
    WwanDeviceTypeRemote,
    WwanDeviceTypeMax
} WWAN_DEVICE_TYPE, *PWWAN_DEVICE_TYPE;

typedef enum _WWAN_CELLULAR_CLASS {
    WwanCellularClassUnknown = 0,
    WwanCellularClassGsm,
    WwanCellularClassCdma,
    WwanCellularClassMax
} WWAN_CELLULAR_CLASS, *PWWAN_CELLULAR_CLASS;

typedef enum _WWAN_VOICE_CLASS {
    WwanVoiceClassUnknown = 0,
    WwanVoiceClassNoVoice,
    WwanVoiceClassSeparateVoiceData,
    WwanVoiceClassSimultaneousVoiceData,
    WwanVoiceClassMax
} WWAN_VOICE_CLASS, *PWWAN_VOICE_CLASS;

typedef enum _WWAN_SIM_CLASS {
    WwanSimClassUnknown = 0,
    WwanSimClassSimLogical,
    WwanSimClassSimRemovable,
    WwanSimClassSimRemote,
    WwanSimClassMax
} WWAN_SIM_CLASS, *PWWAN_SIM_CLASS;

#define WWAN_DATA_CLASS_NONE            0x00000000
#define WWAN_DATA_CLASS_GPRS            0x00000001
#define WWAN_DATA_CLASS_EDGE            0x00000002 /* EGPRS */
#define WWAN_DATA_CLASS_UMTS            0x00000004
#define WWAN_DATA_CLASS_HSDPA           0x00000008
#define WWAN_DATA_CLASS_HSUPA           0x00000010
#define WWAN_DATA_CLASS_LTE             0x00000020
#define WWAN_DATA_CLASS_TDSCDMA         0x00001000
#define WWAN_DATA_CLASS_1XRTT           0x00010000
#define WWAN_DATA_CLASS_1XEVDO          0x00020000
#define WWAN_DATA_CLASS_1XEVDO_REVA     0x00040000
#define WWAN_DATA_CLASS_1XEVDV          0x00080000
#define WWAN_DATA_CLASS_3XRTT           0x00100000
#define WWAN_DATA_CLASS_1XEVDO_REVB     0x00200000 /* for future use */
#define WWAN_DATA_CLASS_UMB             0x00400000
#define WWAN_DATA_CLASS_CUSTOM          0x80000000

#define WWAN_BAND_CLASS_UNKNOWN     0x00000000
#define WWAN_BAND_CLASS_0       0x00000001
#define WWAN_BAND_CLASS_I       0x00000002
#define WWAN_BAND_CLASS_II      0x00000004
#define WWAN_BAND_CLASS_III     0x00000008
#define WWAN_BAND_CLASS_IV      0x00000010
#define WWAN_BAND_CLASS_V       0x00000020
#define WWAN_BAND_CLASS_VI      0x00000040
#define WWAN_BAND_CLASS_VII     0x00000080
#define WWAN_BAND_CLASS_VIII        0x00000100
#define WWAN_BAND_CLASS_IX      0x00000200
#define WWAN_BAND_CLASS_X       0x00000400
#define WWAN_BAND_CLASS_XI      0x00000800
#define WWAN_BAND_CLASS_XII     0x00001000
#define WWAN_BAND_CLASS_XIII        0x00002000
#define WWAN_BAND_CLASS_XIV     0x00004000
#define WWAN_BAND_CLASS_XV      0x00008000
#define WWAN_BAND_CLASS_XVI     0x00010000
#define WWAN_BAND_CLASS_XVII        0x00020000
#define WWAN_BAND_CLASS_CUSTOM          0x80000000

#define WWAN_CTRL_CAPS_NONE     0x00000000
#define WWAN_CTRL_CAPS_REG_MANUAL   0x00000001
#define WWAN_CTRL_CAPS_HW_RADIO_SWITCH  0x00000002
#define WWAN_CTRL_CAPS_CDMA_MOBILE_IP   0x00000004
#define WWAN_CTRL_CAPS_CDMA_SIMPLE_IP   0x00000008
#define WWAN_CTRL_CAPS_PROTECT_UNIQUEID 0x00000010
#define WWAN_CTRL_CAPS_MODEL_MULTI_CARRIER  0x00000020
#define WWAN_CTRL_CAPS_USSD  0x00000040
#define WWAN_CTRL_CAPS_MULTI_MODE  0x00000080

#define WWAN_SMS_CAPS_NONE      0x00000000
#define WWAN_SMS_CAPS_PDU_RECEIVE   0x00000001
#define WWAN_SMS_CAPS_PDU_SEND      0x00000002
#define WWAN_SMS_CAPS_TEXT_RECEIVE  0x00000004
#define WWAN_SMS_CAPS_TEXT_SEND     0x00000008

#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630 )
#define WWAN_AUTH_ALGO_CAPS_NONE     0x00000000
#define WWAN_AUTH_ALGO_CAPS_SIM      0x00000001
#define WWAN_AUTH_ALGO_CAPS_AKA      0x00000002
#define WWAN_AUTH_ALGO_CAPS_AKAPRIME 0x00000004
#endif

typedef struct _WWAN_DEVICE_CAPS {
    WWAN_DEVICE_TYPE    WwanDeviceType;
    WWAN_CELLULAR_CLASS WwanCellularClass;
    WWAN_VOICE_CLASS    WwanVoiceClass;
    WWAN_SIM_CLASS      WwanSimClass;
    ULONG               WwanDataClass;
    WCHAR               CustomDataClass[WWAN_CUSTOM_DATA_CLASS_LEN];
    ULONG               WwanGsmBandClass;
    ULONG               WwanCdmaBandClass;
    WCHAR               CustomBandClass[WWAN_CUSTOM_BAND_CLASS_LEN];
    ULONG               WwanSmsCaps;
    ULONG               WwanControlCaps;
    WCHAR               DeviceId [WWAN_DEVICEID_LEN];
    WCHAR               Manufacturer [WWAN_MANUFACTURER_LEN];
    WCHAR               Model [WWAN_MODEL_LEN];
    WCHAR               FirmwareInfo [WWAN_FIRMWARE_LEN];
    ULONG               MaxActivatedContexts;
#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630 )
    ULONG               WwanAuthAlgoCaps;
    WWAN_LIST_HEADER    CellularClassListHeader;
#endif
} WWAN_DEVICE_CAPS, *PWWAN_DEVICE_CAPS;

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )
// Leftover from TH1 for MBIM2.0/VoiceExtension. Should not be used.
typedef struct _WWAN_DEVICE_CAPS_EX2 {
    WWAN_DEVICE_TYPE    WwanDeviceType;
    WWAN_CELLULAR_CLASS WwanCellularClass;
    WWAN_VOICE_CLASS    WwanVoiceClass;
    WWAN_SIM_CLASS      WwanSimClass;
    ULONG               WwanDataClass;
    WCHAR               CustomDataClass[WWAN_CUSTOM_DATA_CLASS_LEN];
    ULONG               WwanGsmBandClass;
    ULONG               WwanCdmaBandClass;
    WCHAR               CustomBandClass[WWAN_CUSTOM_BAND_CLASS_LEN];
    ULONG               WwanSmsCaps;
    ULONG               WwanControlCaps;
    WCHAR               DeviceId[WWAN_DEVICEID_LEN];
    WCHAR               Manufacturer[WWAN_MANUFACTURER_LEN];
    WCHAR               Model[WWAN_MODEL_LEN];
    WCHAR               FirmwareInfo[WWAN_FIRMWARE_LEN];
    ULONG               MaxActivatedContexts;
    ULONG               DeviceIndex;
    ULONG               WwanAuthAlgoCaps;
    WWAN_LIST_HEADER    CellularClassListHeader;
} WWAN_DEVICE_CAPS_EX2, *PWWAN_DEVICE_CAPS_EX2;
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2 || NDIS_SUPPORT_NDIS670)
// Bits for WWAN_DEVICE_CAPS_EX::WwanOptionalServiceCaps
// Each bit corresponds to an optional service that a miniport may or may not support.
// A bit set indicates that the corresponding optional service is supported.
// A bit cleared indicates that the corresponding optional service is not supported.
// All currently undefined bits must be cleared by miniport.
#define WWAN_OPTIONAL_SERVICE_CAPS_NONE                             0x00000000
#define WWAN_OPTIONAL_SERVICE_CAPS_LTE_ATTACH                       0x00000001
#define WWAN_OPTIONAL_SERVICE_CAPS_PROVISIONED_CONTEXT_MGMT         0x00000002
#define WWAN_OPTIONAL_SERVICE_CAPS_MULTI_SIM                        0x00000004
#define WWAN_OPTIONAL_SERVICE_CAPS_SAR                              0x00000008
#define WWAN_OPTIONAL_SERVICE_CAPS_NETWORK_BLACKLIST                0x00000010
#endif
#if (NTDDI_VERSION >= NTDDI_WIN10_RS3 || NDIS_SUPPORT_NDIS680)
#define WWAN_OPTIONAL_SERVICE_CAPS_MODEM_BULK_CONFIG                0x00000020
#define WWAN_OPTIONAL_SERVICE_CAPS_BASE_STATIONS_INFO               0x00000040
#define WWAN_OPTIONAL_SERVICE_CAPS_PCO                              0x00000080
#define WWAN_OPTIONAL_SERVICE_CAPS_UICC_RESET                       0x00000100
#define WWAN_OPTIONAL_SERVICE_CAPS_DEVICE_RESET                     0x00000200
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2 || NDIS_SUPPORT_NDIS670)
typedef struct _WWAN_DEVICE_CAPS_EX {
    WWAN_DEVICE_TYPE    WwanDeviceType;
    WWAN_CELLULAR_CLASS WwanCellularClass;
    WWAN_VOICE_CLASS    WwanVoiceClass;
    WWAN_SIM_CLASS      WwanSimClass;
    ULONG               WwanDataClass;
    WCHAR               CustomDataClass[WWAN_CUSTOM_DATA_CLASS_LEN];
    ULONG               WwanGsmBandClass;
    ULONG               WwanCdmaBandClass;
    WCHAR               CustomBandClass[WWAN_CUSTOM_BAND_CLASS_LEN];
    ULONG               WwanSmsCaps;
    ULONG               WwanControlCaps;
    WCHAR               DeviceId[WWAN_DEVICEID_LEN];
    WCHAR               Manufacturer[WWAN_MANUFACTURER_LEN];
    WCHAR               Model[WWAN_MODEL_LEN];
    WCHAR               FirmwareInfo[WWAN_FIRMWARE_LEN];
    ULONG               MaxActivatedContexts;
    ULONG               WwanAuthAlgoCaps;
    ULONG               ExecutorIndex;
    ULONG               WwanOptionalServiceCaps;    // a bitmap of optional service capability
    WWAN_LIST_HEADER    CellularClassListHeader;
} WWAN_DEVICE_CAPS_EX, *PWWAN_DEVICE_CAPS_EX;
#endif

typedef enum _WWAN_READY_STATE {
    WwanReadyStateOff = 0,              /* stack is off                    */
    WwanReadyStateInitialized,          /* ready to power up and register  */
    WwanReadyStateSimNotInserted,       /* SIM not inserted                */
    WwanReadyStateBadSim,               /* SIM is invalid                  */
    WwanReadyStateFailure,              /* Device failure                  */
    WwanReadyStateNotActivated,         /* Device not activated (CDMA)     */
    WwanReadyStateDeviceLocked,         /* Device is locked        */
#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS1 || NDIS_SUPPORT_NDIS660 )
    WwanReadyStateNoEsimProfile,        /* SIM is ready but does not have any enabled profiles */
#endif
    WwanReadyStateMax
} WWAN_READY_STATE, *PWWAN_READY_STATE;

typedef enum _WWAN_EMERGENCY_MODE
{
    WwanEmergencyModeOff = 0,
    WwanEmergencyModeOn,
    WwanEmergencyModeMax
}WWAN_EMERGENCY_MODE, *PWWAN_EMERGENCY_MODE;

typedef struct _WWAN_READY_INFO {
    WWAN_READY_STATE    ReadyState;
    WWAN_EMERGENCY_MODE EmergencyMode;
    WCHAR       SubscriberId [WWAN_SUBSCRIBERID_LEN];
    WCHAR       SimIccId [WWAN_SIMICCID_LEN];
    BYTE        CdmaShortMsgSize;
    WWAN_LIST_HEADER    TNListHeader;
} WWAN_READY_INFO, *PWWAN_READY_INFO;

typedef struct _WWAN_SERVICE_ACTIVATION {
    ULONG uVendorSpecificBufferSize;
} WWAN_SERVICE_ACTIVATION, *PWWAN_SERVICE_ACTIVATION;

typedef enum _WWAN_RADIO {
    WwanRadioOff = 0,
    WwanRadioOn
} WWAN_RADIO, *PWWAN_RADIO;

typedef enum _WWAN_ACE_STATE {
    WwanAutoOff = 0,
    WwanAutoOn,
    WwanManualOff,
    WwanManualOn
} WWAN_ACE_STATE, *PWWAN_ACE_STATE;

typedef struct _WWAN_RADIO_STATE {
    WWAN_RADIO  HwRadioState;
    WWAN_RADIO  SwRadioState;
} WWAN_RADIO_STATE, *PWWAN_RADIO_STATE;

typedef enum _WWAN_PIN_TYPE {
    WwanPinTypeNone = 0,
    WwanPinTypeCustom,
    WwanPinTypePin1,
    WwanPinTypePin2,
    WwanPinTypeDeviceSimPin,
    WwanPinTypeDeviceFirstSimPin,
    WwanPinTypeNetworkPin,
    WwanPinTypeNetworkSubsetPin,
    WwanPinTypeSvcProviderPin,
    WwanPinTypeCorporatePin,
    WwanPinTypeSubsidyLock,
    WwanPinTypePuk1,
    WwanPinTypePuk2,
    WwanPinTypeDeviceFirstSimPuk,
    WwanPinTypeNetworkPuk,
    WwanPinTypeNetworkSubsetPuk,
    WwanPinTypeSvcProviderPuk,
    WwanPinTypeCorporatePuk,
    WwanPinTypeNev,
    WwanPinTypeAdm,
    WwanPinTypeMax
} WWAN_PIN_TYPE, *PWWAN_PIN_TYPE;

typedef enum _WWAN_PIN_STATE {
    WwanPinStateNone = 0,
    WwanPinStateEnter,
    WwanPinStateMax
} WWAN_PIN_STATE, *PWWAN_PIN_STATE;

#define WWAN_ATTEMPTS_REMAINING_UNKNOWN     ~0

typedef struct _WWAN_PIN_INFO {
    WWAN_PIN_TYPE   PinType;
    WWAN_PIN_STATE  PinState;
    ULONG       AttemptsRemaining;
} WWAN_PIN_INFO, *PWWAN_PIN_INFO;

typedef enum _WWAN_PIN_OPERATION {
    WwanPinOperationEnter = 0,
    WwanPinOperationEnable,
    WwanPinOperationDisable,
    WwanPinOperationChange,
    WwanPinOperationMax
} WWAN_PIN_OPERATION, *PWWAN_PIN_OPERATION;

typedef struct _WWAN_PIN_ACTION {
    WWAN_PIN_TYPE       PinType;
    WWAN_PIN_OPERATION  PinOperation;
    WCHAR               Pin [WWAN_PIN_LEN];
    WCHAR               NewPin [WWAN_PIN_LEN];
} WWAN_PIN_ACTION, *PWWAN_PIN_ACTION;

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )
typedef struct _WWAN_PIN_ACTION_EX2 {
    WWAN_PIN_TYPE       PinType;
    WWAN_PIN_OPERATION  PinOperation;
    WCHAR               Pin[WWAN_PIN_LEN];
    WCHAR               NewPin[WWAN_PIN_LEN];
    BYTE                AppIdLength;
    BYTE                AppId[WWAN_UICC_APP_ID_MAX_LEN];
} WWAN_PIN_ACTION_EX2, *PWWAN_PIN_ACTION_EX2;
#endif

typedef enum _WWAN_PIN_FORMAT {
    WwanPinFormatUnknown = 0,
    WwanPinFormatNumeric,
    WwanPinFormatAlphaNumeric,
    WwanPinFormatMax
} WWAN_PIN_FORMAT, *PWWAN_PIN_FORMAT;

typedef enum _WWAN_PIN_MODE {
    WwanPinModeNotSupported = 0,
    WwanPinModeEnabled,
    WwanPinModeDisabled,
    WwanPinModeMax
} WWAN_PIN_MODE, *PWWAN_PIN_MODE;

#define WWAN_PIN_LENGTH_UNKNOWN         ~0

typedef struct _WWAN_PIN_DESC {
    WWAN_PIN_MODE   PinMode;
    WWAN_PIN_FORMAT PinFormat;
    ULONG       PinLengthMin;
    ULONG       PinLengthMax;
} WWAN_PIN_DESC, *PWWAN_PIN_DESC;

typedef struct _WWAN_PIN_LIST {
    WWAN_PIN_DESC   WwanPinDescPin1;
    WWAN_PIN_DESC   WwanPinDescPin2;
    WWAN_PIN_DESC   WwanPinDescDeviceSimPin;
    WWAN_PIN_DESC   WwanPinDescDeviceFirstSimPin;
    WWAN_PIN_DESC   WwanPinDescNetworkPin;
    WWAN_PIN_DESC   WwanPinDescNetworkSubsetPin;
    WWAN_PIN_DESC   WwanPinDescSvcProviderPin;
    WWAN_PIN_DESC   WwanPinDescCorporatePin;
    WWAN_PIN_DESC   WwanPinDescSubsidyLock;
    WWAN_PIN_DESC   WwanPinDescCustom;
} WWAN_PIN_LIST, *PWWAN_PIN_LIST;

#define WWAN_PROVIDER_STATE_UNKNOWN                  0x00000000
#define WWAN_PROVIDER_STATE_HOME                     0x00000001
#define WWAN_PROVIDER_STATE_FORBIDDEN                0x00000002
#define WWAN_PROVIDER_STATE_PREFERRED                0x00000004
#define WWAN_PROVIDER_STATE_VISIBLE                  0x00000008
#define WWAN_PROVIDER_STATE_REGISTERED               0x00000010
#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630 )
#define WWAN_PROVIDER_STATE_PREFERRED_MULTICARRIER   0x00000020
#endif

typedef struct _WWAN_PROVIDER {
    WCHAR   ProviderId [WWAN_PROVIDERID_LEN];
    ULONG   ProviderState;
    WCHAR   ProviderName [WWAN_PROVIDERNAME_LEN];
    ULONG   WwanDataClass;
} WWAN_PROVIDER, *PWWAN_PROVIDER;

typedef enum _WWAN_REGISTER_ACTION {
    WwanRegisterActionAutomatic = 0,
    WwanRegisterActionManual,
    WwanRegisterActionMax
} WWAN_REGISTER_ACTION, *PWWAN_REGISTER_ACTION;

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )
typedef enum _WWAN_REGISTRATION_VOICE_CLASS
{
    WwanRegistrationVoiceClassVoiceCentric  = 0,
    WwanRegistrationVoiceClassDataCentric
} WWAN_REGISTRATION_VOICE_CLASS, *PWWAN_REGISTRATION_VOICE_CLASS;

typedef enum _WWAN_REGISTRATION_VOICE_DOMAIN_PREFERENCE
{
    WwanRegistrationVoiceDomainPreferenceCsOnly         = 0,
    WwanRegistrationVoiceDomainPreferenceCsPreferred,
    WwanRegistrationVoiceDomainPreferenceImsPreferred,
    WwanRegistrationVoiceDomainPreferenceImsOnly
} WWAN_REGISTRATION_VOICE_DOMAIN_PREFERENCE, *PWWAN_REGISTRATION_VOICE_DOMAIN_PREFERENCE;

#define WWAN_REGISTRATION_VOICE_SUPPORT_NONE                0x00000000
#define WWAN_REGISTRATION_VOICE_SUPPORT_IMS                 0x00000001
#define WWAN_REGISTRATION_VOICE_SUPPORT_EMERGENCY_ATTACH    0x00000002
#define WWAN_REGISTRATION_VOICE_SUPPORT_CS                  0x00000004
#define WWAN_REGISTRATION_VOICE_SUPPORT_CSFB                0x00000008
#define WWAN_REGISTRATION_VOICE_SUPPORT_1XCSFB              0x00000010
#define WWAN_REGISTRATION_VOICE_SUPPORT_EMERGENCY           0x00000020

typedef enum _WWAN_REGISTRATION_CDMA_ROAM_MODE
{
    WwanRegistrationCdmaRoamModeAutomatic = 0,
    WwanRegistrationCdmaRoamModeHomeOnly
} WWAN_REGISTRATION_CDMA_ROAM_MODE, *PWWAN_REGISTRATION_CDMA_ROAM_MODE;
#endif

typedef struct _WWAN_SET_REGISTER_STATE {
    WCHAR                                       ProviderId [WWAN_PROVIDERID_LEN];
    WWAN_REGISTER_ACTION                        RegisterAction;
    ULONG                                       WwanDataClass;
} WWAN_SET_REGISTER_STATE, *PWWAN_SET_REGISTER_STATE;

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )
typedef struct _WWAN_SET_REGISTER_STATE_EX {
    WCHAR                                       ProviderId[WWAN_PROVIDERID_LEN];
    WWAN_REGISTER_ACTION                        RegisterAction;
    ULONG                                       WwanDataClass;
    WWAN_REGISTRATION_VOICE_CLASS               WwanVoiceClass;
    WWAN_REGISTRATION_VOICE_DOMAIN_PREFERENCE   WwanVoiceDomain;
    WWAN_REGISTRATION_CDMA_ROAM_MODE            WwanCdmaRoamMode;
    WWAN_LIST_HEADER                            AcquisitionOrderListHeader;
} WWAN_SET_REGISTER_STATE_EX, *PWWAN_SET_REGISTER_STATE_EX;
#endif

typedef enum _WWAN_REGISTER_STATE {
    WwanRegisterStateUnknown = 0,
    WwanRegisterStateDeregistered,
    WwanRegisterStateSearching,
    WwanRegisterStateHome,
    WwanRegisterStateRoaming,
    WwanRegisterStatePartner,
    WwanRegisterStateDenied,
    WwanRegisterStateMax
} WWAN_REGISTER_STATE, *PWWAN_REGISTER_STATE;

typedef enum _WWAN_REGISTER_MODE {
    WwanRegisterModeUnknown = 0,
    WwanRegisterModeAutomatic,
    WwanRegisterModeManual,
    WwanRegisterModeMax
} WWAN_REGISTER_MODE, *PWWAN_REGISTER_MODE;

#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630 )
#define WWAN_REG_FLAGS_NONE             0x00000000
#define WWAN_REG_FLAGS_NO_MANUAL_REG    0x00000001
#define WWAN_REG_FLAGS_PS_AUTO_ATTACH   0x00000002
#endif

typedef struct _WWAN_REGISTRATION_STATE {
    ULONG                   uNwError;
    WWAN_REGISTER_STATE     RegisterState;
    WWAN_REGISTER_MODE      RegisterMode;
    WCHAR                   ProviderId [WWAN_PROVIDERID_LEN];
    WCHAR                   ProviderName [WWAN_PROVIDERNAME_LEN];
    WCHAR                   RoamingText [WWAN_ROAMTEXT_LEN];
#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630 )
    DWORD                   WwanRegFlags;
    WWAN_CELLULAR_CLASS     CurrentCellularClass;
#endif
} WWAN_REGISTRATION_STATE, *PWWAN_REGISTRATION_STATE;

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )
typedef struct _WWAN_REGISTRATION_STATE_EX {
    ULONG                   uNwError;
    WWAN_REGISTER_STATE     RegisterState;
    WWAN_REGISTER_MODE      RegisterMode;
    WCHAR                   ProviderId[WWAN_PROVIDERID_LEN];
    WCHAR                   ProviderName[WWAN_PROVIDERNAME_LEN];
    WCHAR                   RoamingText[WWAN_ROAMTEXT_LEN];
    DWORD                   WwanRegFlags;
    WWAN_CELLULAR_CLASS     CurrentCellularClass;
    ULONG                   AvailableDataClasses;
    ULONG                   VoiceSupport;
    ULONG                   CurrentRATClass;
} WWAN_REGISTRATION_STATE_EX, *PWWAN_REGISTRATION_STATE_EX;

typedef struct _WWAN_REGISTRATION_STATE_INFOS {
    WWAN_LIST_HEADER    RegistrationStateListHeader;
} WWAN_REGISTRATION_STATE_INFOS, *PWWAN_REGISTRATION_STATE_INFOS;
#endif

typedef enum _WWAN_PACKET_SERVICE_ACTION {
    WwanPacketServiceActionAttach = 0,
    WwanPacketServiceActionDetach
} WWAN_PACKET_SERVICE_ACTION, *PWWAN_PACKET_SERVICE_ACTION;

typedef enum _WWAN_PACKET_SERVICE_STATE {
    WwanPacketServiceStateUnknown = 0,
    WwanPacketServiceStateAttaching,
    WwanPacketServiceStateAttached,
    WwanPacketServiceStateDetaching,
    WwanPacketServiceStateDetached
} WWAN_PACKET_SERVICE_STATE, *PWWAN_PACKET_SERVICE_STATE;

typedef struct _WWAN_PACKET_SERVICE {
    ULONG           uNwError;
    WWAN_PACKET_SERVICE_STATE   PacketServiceState;
    ULONG           AvailableDataClass;
    ULONG           CurrentDataClass;
} WWAN_PACKET_SERVICE, *PWWAN_PACKET_SERVICE;

#define WWAN_RSSI_UNKNOWN               99
#define WWAN_ERROR_RATE_UNKNOWN             99

typedef struct _WWAN_SIGNAL_STATE {
    ULONG   Rssi;
    ULONG   ErrorRate;
    ULONG   RssiInterval;
    ULONG   RssiThreshold;
} WWAN_SIGNAL_STATE, *PWWAN_SIGNAL_STATE;

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )
typedef struct _WWAN_SIGNAL_STATE_EX {
    ULONG   Rssi;
    ULONG   ErrorRate;
    ULONG   RssiInterval;
    ULONG   RssiThreshold;
    ULONG   ErrorRateThreshold;
    ULONG   Snr;
    ULONG   SnrThreshold;
    ULONG   DataClass;
} WWAN_SIGNAL_STATE_EX, *PWWAN_SIGNAL_STATE_EX;

typedef struct _WWAN_SIGNAL_STATE_INFOS {
    WWAN_LIST_HEADER    SignalStateListHeader;
} WWAN_SIGNAL_STATE_INFOS, *PWWAN_SIGNAL_STATE_INFOS;
#endif

#define WWAN_RSSI_DEFAULT               0xffffffff
#define WWAN_RSSI_DISABLE               0

#define WWAN_RSSI_INTERVAL_SECS_WIN8        30
#define WWAN_RSSI_THRESHOLD_CODED_UNIT_WIN8 WWAN_RSSI_DEFAULT
#define WWAN_RSSI_INTERVAL_SECS_BLUE        60
#define WWAN_RSSI_THRESHOLD_CODED_UNIT_BLUE 1

typedef struct _WWAN_SET_SIGNAL_INDICATION {
    ULONG   RssiInterval;
    ULONG   RssiThreshold;
} WWAN_SET_SIGNAL_INDICATION, *PWWAN_SET_SIGNAL_INDICATION;

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )
typedef struct _WWAN_SET_SIGNAL_INDICATION_EX {
    ULONG   RssiInterval;
    ULONG   RssiThreshold;
    ULONG   ErrorRateThreshold;
    ULONG   SnrThreshold;
} WWAN_SET_SIGNAL_INDICATION_EX, *PWWAN_SET_SIGNAL_INDICATION_EX;
#endif

typedef enum _WWAN_ACTIVATION_COMMAND {
    WwanActivationCommandDeactivate = 0,
    WwanActivationCommandActivate,
    WwanActivationCommandMax
} WWAN_ACTIVATION_COMMAND, *PWWAN_ACTIVATION_COMMAND;

typedef enum _WWAN_COMPRESSION {
    WwanCompressionNone = 0,
    WwanCompressionEnable,
    WwanCompressionMax
} WWAN_COMPRESSION, *PWWAN_COMPRESSION;

typedef enum _WWAN_AUTH_PROTOCOL {
    WwanAuthProtocolNone = 0,
    WwanAuthProtocolPap,
    WwanAuthProtocolChap,
    WwanAuthProtocolMsChapV2,
#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )
    WwanAuthProtocolAuto,
#endif
    WwanAuthProtocolMax
} WWAN_AUTH_PROTOCOL, *PWWAN_AUTH_PROTOCOL;

typedef enum _WWAN_IP_TYPE {
    WwanIPTypeDefault = 0,
    WwanIPTypeIPv4,
    WwanIPTypeIPv6,
    WwanIPTypeIpv4v6,
#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )
    WwanIPTypeXlat
#endif
} WWAN_IP_TYPE, *PWWAN_IP_TYPE;

typedef enum _WWAN_PSMEDIA_PREFERENCE {
    WwanPsMediaPreferenceNone = 0,
    WwanPsMediaPreferenceCellularOnly,
    WwanPsMediaPreferenceCellularPreferred,
    WwanPsMediaPreferenceWiFiOnly,
    WwanPsMediaPreferenceWiFiPreferred,
    WwanPsMediaPreferenceMax
} WWAN_PSMEDIA_PREFERENCE, *PWWAN_PSMEDIA_PREFERENCE;

typedef enum _WWAN_CONFIGURATION_SOURCE {
    WwanUserProvisioned = 0,	    // the source is user(s)
    WwanAdminProvisioned,	        // the source is administrator
    WwanOperatorProvisioned,	    // the source is mobile operator
    WwanDeviceProvisioned,	        // the source is device (such as MultiVariant), but not from modem
    WwanModemProvisioned,	        // the source is modem (such as pre-configured in modem)
    WwanMaxProvisionSource
} WWAN_CONFIGURATION_SOURCE, *PWWAN_CONFIGURATION_SOURCE;

typedef struct _WWAN_SET_CONTEXT_STATE {
    ULONG           ConnectionId;
    WWAN_ACTIVATION_COMMAND ActivationCommand;
    WCHAR           AccessString [WWAN_ACCESSSTRING_LEN];
    WCHAR           UserName [WWAN_USERNAME_LEN];
    WCHAR           Password [WWAN_PASSWORD_LEN];
    WWAN_COMPRESSION        Compression;
    WWAN_AUTH_PROTOCOL      AuthType;
#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630 )
    WWAN_IP_TYPE IPType;
#endif
#if ( _WIN32_WINNT > _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS1 || NDIS_SUPPORT_NDIS660 )
    WWAN_PSMEDIA_PREFERENCE     MediaPreference;
    WWAN_CONFIGURATION_SOURCE   ConnectionMediaSource;
#endif
} WWAN_SET_CONTEXT_STATE, *PWWAN_SET_CONTEXT_STATE;

typedef enum _WWAN_ACTIVATION_STATE {
    WwanActivationStateUnknown = 0,
    WwanActivationStateActivated,
    WwanActivationStateActivating,
    WwanActivationStateDeactivated,
    WwanActivationStateDeactivating,
    WwanActivationStateMax
} WWAN_ACTIVATION_STATE, *PWWAN_ACTIVATION_STATE;

typedef enum _WWAN_VOICE_CALL_STATE
{
    WwanVoiceCallStateNone = 0,
    WwanVoiceCallStateInProgress,
    WwanVoiceCallStateHangUp,
    WwanVoiceCallStateMaximum
} WWAN_VOICE_CALL_STATE, *PWWAN_VOICE_CALL_STATE;

typedef enum _WWAN_CONNECTION_MEDIA {
    WwanConnectionMediaUnknown = 0,
    WwanConnectionMediaCellular,
    WwanConnectionMediaWiFi,
    WwanConnectionMediaMax
} WWAN_CONNECTION_MEDIA, *PWWAN_CONNECTION_MEDIA;

typedef struct _WWAN_CONTEXT_STATE {
    ULONG           uNwError;
    ULONG           ConnectionId;
    WWAN_ACTIVATION_STATE   ActivationState;
    WWAN_VOICE_CALL_STATE   VoiceCallState;
#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630 )
    WWAN_IP_TYPE IPType;
#endif
#if ( _WIN32_WINNT > _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS1 || NDIS_SUPPORT_NDIS660 )
    WWAN_CONNECTION_MEDIA   ConnectionMedia;
#endif
} WWAN_CONTEXT_STATE, *PWWAN_CONTEXT_STATE;

// Context type for provisioned contexts stored in modem
// Not every type is currently supported for provisioned contexts
typedef enum _WWAN_CONTEXT_TYPE {
    WwanContextTypeNone = 0,
    WwanContextTypeInternet,
    WwanContextTypeVpn,
    WwanContextTypeVoice,
    WwanContextTypeVideoShare,
    WwanContextTypeCustom,
    WwanContextTypePurchase,
    WwanContextTypeMms,
    WwanContextTypeIms,
    WwanContextTypeAdmin,
    WwanContextTypeApp,
    WwanContextTypeXcap,
    WwanContextTypeTethering,
    WwanContextTypeEmergencyCall,
    WwanContextTypeLteAttach,
    WwanContextTypeMax
} WWAN_CONTEXT_TYPE, *PWWAN_CONTEXT_TYPE;

#define WWAN_CONTEXT_ID_APPEND              0xffffffff


#if ( NTDDI_VERSION >= NTDDI_WIN10_RS2 || NDIS_SUPPORT_NDIS670 )

typedef enum _WWAN_CONTEXT_ROAMING_CONTROL
{
    WwanContextRoamingControlHomeOnly          = 0,
    WwanContextRoamingControlPartnerOnly,
    WwanContextRoamingControlNonPartnerOnly,
    WwanContextRoamingControlHomeAndPartner,
    WwanContextRoamingControlHomeAndNonPartner,
    WwanContextRoamingControlPartnerAndNonPartner,
    WwanContextRoamingControlAllowAll,
    WwanContextRoamingControlMaximum
} WWAN_CONTEXT_ROAMING_CONTROL, *PWWAN_CONTEXT_ROAMING_CONTROL;

typedef enum _WWAN_CONTEXT_MEDIA_TYPE
{
    WwanContextMediaTypeCellularOnly            = 0,
    WwanContextMediaTypeWifiOnly,
    WwanContextMediaTypeAll,
    WwanContextMediaTypeMaximum
} WWAN_CONTEXT_MEDIA_TYPE, *PWWAN_CONTEXT_MEDIA_TYPE;

typedef enum _WWAN_CONTEXT_ENABLE
{
    WwanContextDisabled                         = 0,
    WwanContextEnabled,
    WwanContextEnableMaximum
} WWAN_CONTEXT_ENABLE, *PWWAN_CONTEXT_ENABLE;

typedef enum _WWAN_CONTEXT_OPERATIONS
{
    WwanContextOperationDefault                 = 0,
    WwanContextOperationDelete,
    WwanContextOperationRestoreFactory,
    WwanContextOperationMaximum
} WWAN_CONTEXT_OPERATIONS, *PWWAN_CONTEXT_OPERATIONS;

typedef enum _WWAN_CONTEXT_LTE_ATTACH_ROAMING_CONTROL
{
    WwanContextLteAttachRoamingControlHome      = 0,
    WwanContextLteAttachRoamingControlPartner,
    WwanContextLteAttachRoamingControlNonPartner,
    WwanContextLteAttachRoamingControlMaximum
} WWAN_CONTEXT_LTE_ATTACH_ROAMING_CONTROL, *PWWAN_CONTEXT_LTE_ATTACH_ROAMING_CONTROL;

typedef enum _WWAN_CONTEXT_LTE_ATTACH_STATE
{
    WwanContextLteAttachStateDetached          = 0,
    WwanContextLteAttachStateAttached,
    WwanContextLteAttachStateMaximum
} WWAN_CONTEXT_LTE_ATTACH_STATE, *PWWAN_CONTEXT_LTE_ATTACH_STATE;

#endif  // ( NTDDI_VERSION >= NTDDI_WIN10_RS2 || NDIS_SUPPORT_NDIS670 )

typedef struct _WWAN_CONTEXT {
    ULONG                               ContextId;
    WWAN_CONTEXT_TYPE                   ContextType;
    WCHAR                               AccessString [WWAN_ACCESSSTRING_LEN];
    WCHAR                               UserName [WWAN_USERNAME_LEN];
    WCHAR                               Password [WWAN_PASSWORD_LEN];
    WWAN_COMPRESSION                    Compression;
    WWAN_AUTH_PROTOCOL                  AuthType;
} WWAN_CONTEXT, *PWWAN_CONTEXT;

typedef struct _WWAN_SET_CONTEXT
{
    ULONG                               ContextId;
    WWAN_CONTEXT_TYPE                   ContextType;
    WCHAR                               AccessString[WWAN_ACCESSSTRING_LEN];
    WCHAR                               UserName[WWAN_USERNAME_LEN];
    WCHAR                               Password[WWAN_PASSWORD_LEN];
    WWAN_COMPRESSION                    Compression;
    WWAN_AUTH_PROTOCOL                  AuthType;
    WCHAR                               ProviderId[WWAN_PROVIDERID_LEN];
} WWAN_SET_CONTEXT, *PWWAN_SET_CONTEXT;

#if ( NTDDI_VERSION >= NTDDI_WIN10_RS2 || NDIS_SUPPORT_NDIS670 )

// goes with STRUCT_TYPE WwanStructContextV2
typedef struct _WWAN_CONTEXT_V2 {
    WWAN_CONTEXT                        basicInfo;
    WWAN_IP_TYPE                        IPType;
    WWAN_CONTEXT_ENABLE                 Enable;
    WWAN_CONTEXT_ROAMING_CONTROL        Roaming;
    WWAN_CONTEXT_MEDIA_TYPE             MediaType;
    WWAN_CONFIGURATION_SOURCE           Source;
    int                                 Reserved;   // reserve this field to match the structure size released in RS2, may be used for other purpose in future release
} WWAN_CONTEXT_V2, *PWWAN_CONTEXT_V2;

typedef struct _WWAN_SET_CONTEXT_V2
{
    WWAN_SET_CONTEXT                    basicInfo;
    WWAN_CONTEXT_OPERATIONS             Operation;
    WWAN_IP_TYPE                        IPType;
    WWAN_CONTEXT_ENABLE                 Enable;
    WWAN_CONTEXT_ROAMING_CONTROL        Roaming;
    WWAN_CONTEXT_MEDIA_TYPE             MediaType;
    WWAN_CONFIGURATION_SOURCE           Source;
    int                                 Reserved;   // reserve this field to match the structure size released in RS2, may be used for other purpose in future release
} WWAN_SET_CONTEXT_V2, *PWWAN_SET_CONTEXT_V2;

#ifndef TotalRoamingConditions
#define TotalRoamingConditions 3    // counting for home, partner, non-partner
#endif

typedef struct _WWAN_SET_LTE_ATTACH
{
    WWAN_SET_CONTEXT_V2 SetContextArray[TotalRoamingConditions];
} WWAN_SET_LTE_ATTACH, *PWWAN_SET_LTE_ATTACH;

typedef struct _WWAN_LTE_ATTACH_STATUS
{
    WWAN_CONTEXT_LTE_ATTACH_STATE      LteAttachState;
    WWAN_IP_TYPE                       IPType;
    WWAN_CONTEXT                       basicInfo;
} WWAN_LTE_ATTACH_STATUS, *PWWAN_LTE_ATTACH_STATUS;

typedef struct _WWAN_LTE_ATTACH_CONFIG
{
    ULONG           ElementCount;
    WWAN_CONTEXT_V2 LteContextArray[TotalRoamingConditions];
} WWAN_LTE_ATTACH_CONFIG, *PWWAN_LTE_ATTACH_CONFIG;

#endif  // ( NTDDI_VERSION >= NTDDI_WIN10_RS2 || NDIS_SUPPORT_NDIS670 )

typedef enum _WWAN_SMS_FORMAT {
    WwanSmsFormatPdu = 0,
    WwanSmsFormatReserved0,
    WwanSmsFormatReserved1,
    WwanSmsFormatReserved2,
    WwanSmsFormatCdma,
    WwanSmsFormatMax
} WWAN_SMS_FORMAT, *PWWAN_SMS_FORMAT;

typedef struct _WWAN_SET_SMS_CONFIGURATION {
    CHAR        ScAddress [WWAN_SMS_ADDRESS_MAX_LEN];
    WWAN_SMS_FORMAT SmsFormat;
} WWAN_SET_SMS_CONFIGURATION, *PWWAN_SET_SMS_CONFIGURATION;

typedef struct _WWAN_SMS_CONFIGURATION {
    CHAR        ScAddress [WWAN_SMS_ADDRESS_MAX_LEN];
    WWAN_SMS_FORMAT SmsFormat;
    ULONG       ulMaxMessageIndex;
} WWAN_SMS_CONFIGURATION, *PWWAN_SMS_CONFIGURATION;

typedef enum _WWAN_SMS_FLAG {
    WwanSmsFlagAll = 0,
    WwanSmsFlagIndex,
    WwanSmsFlagNew,
    WwanSmsFlagOld,
    WwanSmsFlagSent,
    WwanSmsFlagDraft,
    WwanSmsFlagMax
} WWAN_SMS_FLAG, *PWWAN_SMS_FLAG;

#define WWAN_MESSAGE_INDEX_NONE     0

typedef struct _WWAN_SMS_FILTER {
    WWAN_SMS_FLAG   Flag;
    ULONG       MessageIndex;
} WWAN_SMS_FILTER, *PWWAN_SMS_FILTER;

typedef struct _WWAN_SMS_READ {
    WWAN_SMS_FORMAT SmsFormat;
    WWAN_SMS_FILTER ReadFilter;
} WWAN_SMS_READ, *PWWAN_SMS_READ;

typedef enum _WWAN_MSG_STATUS {
    WwanMsgStatusNew = 0,
    WwanMsgStatusOld,
    WwanMsgStatusDraft,
    WwanMsgStatusSent,
    WwanMsgStatusMax
} WWAN_MSG_STATUS, *PWWAN_MSG_STATUS;

typedef enum _WWAN_SMS_CDMA_LANG {
    WwanSmsCdmaLangUnknown = 0,
    WwanSmsCdmaLangEnglish,
    WwanSmsCdmaLangFrench,
    WwanSmsCdmaLangSpanish,
    WwanSmsCdmaLangJapanese,
    WwanSmsCdmaLangKorean,
    WwanSmsCdmaLangChinese,
    WwanSmsCdmaLangHebrew,
    WwanSmsCdmaLangMax
} WWAN_SMS_CDMA_LANG, *PWWAN_SMS_CDMA_LANG;

typedef enum _WWAN_SMS_CDMA_ENCODING {
    WwanSmsCdmaEncodingOctet = 0,
    WwanSmsCdmaEncodingEpm,
    WwanSmsCdmaEncoding7BitAscii,
    WwanSmsCdmaEncodingIa5,
    WwanSmsCdmaEncodingUnicode,
    WwanSmsCdmaEncodingShiftJis,
    WwanSmsCdmaEncodingKorean,
    WwanSmsCdmaEncodingLatinHebrew,
    WwanSmsCdmaEncodingLatin,
    WwanSmsCdmaEncodingGsm7Bit,
    WwanSmsCdmaEncodingMax
} WWAN_SMS_CDMA_ENCODING, *PWWAN_SMS_CDMA_ENCODING;

typedef struct _WWAN_SMS_CDMA_RECORD {
    ULONG           MessageIndex;
    WWAN_MSG_STATUS     MsgStatus;
    CHAR                        Address[WWAN_SMS_CDMA_ADDR_MAX_LEN];
    CHAR                        ScTimeStamp[WWAN_SMS_CDMA_TIMESTAMP_MAX_LEN];
    WWAN_SMS_CDMA_ENCODING  EncodingId;
    WWAN_SMS_CDMA_LANG      LanguageId;
    USHORT          SizeInBytes;
    BYTE            SizeInCharacters;
    BYTE                        EncodedMsg [WWAN_SMS_CDMA_MAX_BUF_LEN];
} WWAN_SMS_CDMA_RECORD, *PWWAN_SMS_CDMA_RECORD;

typedef struct _WWAN_SMS_PDU_RECORD {
    ULONG       MessageIndex;
    WWAN_MSG_STATUS MsgStatus;
    BYTE        Size;
    CHAR        PduData [WWAN_SMS_PDU_HEX_BUF_LEN];
} WWAN_SMS_PDU_RECORD, *PWWAN_SMS_PDU_RECORD;

typedef struct _WWAN_SMS_SEND_CDMA {
    WWAN_SMS_CDMA_ENCODING  EncodingId;
    WWAN_SMS_CDMA_LANG      LanguageId;
    CHAR            Address [WWAN_SMS_CDMA_ADDR_MAX_LEN];
    USHORT          SizeInBytes;
    BYTE            SizeInCharacters;
    BYTE            EncodedMsg [WWAN_SMS_CDMA_MAX_BUF_LEN];
} WWAN_SMS_SEND_CDMA, *PWWAN_SMS_SEND_CDMA;

typedef struct _WWAN_SMS_SEND_PDU {
    BYTE    Size;
    CHAR    PduData [WWAN_SMS_PDU_HEX_BUF_LEN];
} WWAN_SMS_SEND_PDU, *PWWAN_SMS_SEND_PDU;

typedef struct _WWAN_SMS_SEND {
    WWAN_SMS_FORMAT SmsFormat;

    union {
    WWAN_SMS_SEND_PDU  Pdu;
    WWAN_SMS_SEND_CDMA Cdma;
    } u;
} WWAN_SMS_SEND, *PWWAN_SMS_SEND;

#define WWAN_SMS_FLAG_NONE          0x00000000
#define WWAN_SMS_FLAG_MESSAGE_STORE_FULL    0x00000001
#define WWAN_SMS_FLAG_NEW_MESSAGE       0x00000002

typedef struct _WWAN_SMS_STATUS {
    ULONG   uFlag;
    ULONG   MessageIndex;
} WWAN_SMS_STATUS, *PWWAN_SMS_STATUS;

typedef struct _WWAN_SERVICE_ACTIVATION_STATUS {
    ULONG uNwError;
    ULONG uVendorSpecificBufferSize;
} WWAN_SERVICE_ACTIVATION_STATUS,*PWWAN_SERVICE_ACTIVATION_STATUS;

typedef struct _WWAN_VENDOR_SPECIFIC {
    ULONG   uVendorSpecificBufferSize;
} WWAN_VENDOR_SPECIFIC, *PWWAN_VENDOR_SPECIFIC;

#if ( _WIN32_WINNT >= _WIN32_WINNT_WIN8 || NTDDI_VERSION >= NTDDI_WIN8 || NDIS_SUPPORT_NDIS630 )

typedef enum _WWAN_DEVICE_SERVICE_SESSION_CAPABILITY {
    WwanDeviceServiceSessionNotSupported = 0x00,
    WwanDeviceServiceSessionWriteSupported = 0x01,
    WwanDeviceServiceSessionReadSupported = 0x02
} WWAN_DEVICE_SERVICE_SESSION_CAPABILITY, *PWWAN_DEVICE_SERVICE_SESSION_CAPABILITY;

typedef enum _WWAN_DEVICE_SERVICE_SESSION_STATE {
    WwanDeviceServiceSessionOpen = 0x01,
    WwanDeviceServiceSessionClosed = 0x02
} WWAN_DEVICE_SERVICE_SESSION_STATE, *PWWAN_DEVICE_SERVICE_SESSION_STATE;

typedef struct _WWAN_DEVICE_SERVICE_ENTRY {
  GUID DeviceServiceGuid;
  WWAN_DEVICE_SERVICE_SESSION_CAPABILITY SessionCapability;
  ULONG uMaxSessionInstances;
} WWAN_DEVICE_SERVICE_ENTRY, *PWWAN_DEVICE_SERVICE_ENTRY;

typedef struct _WWAN_SUPPORTED_DEVICE_SERVICES {
  ULONG uMaxCommandDataSize;
  ULONG uMaxSessionDataSize;
  ULONG uMaxSessionCount;
  WWAN_LIST_HEADER ListHeader;
} WWAN_SUPPORTED_DEVICE_SERVICES, *PWWAN_SUPPORTED_DEVICE_SERVICES;

typedef struct _WWAN_DEVICE_SERVICE_COMMAND {
  GUID DeviceServiceGuid;
  ULONG CommandID;
  ULONG uDataSize;
} WWAN_DEVICE_SERVICE_COMMAND, *PWWAN_DEVICE_SERVICE_COMMAND;

typedef struct _WWAN_DEVICE_SERVICE_RESPONSE {
  GUID DeviceServiceGuid;
  ULONG ResponseID;
  ULONG uDataSize;
} WWAN_DEVICE_SERVICE_RESPONSE, *PWWAN_DEVICE_SERVICE_RESPONSE;

typedef struct _WWAN_DEVICE_SERVICE_EVENT {
  GUID DeviceServiceGuid;
  ULONG EventID;
  ULONG uDataSize;
} WWAN_DEVICE_SERVICE_EVENT, *PWWAN_DEVICE_SERVICE_EVENT;

typedef struct _WWAN_DEVICE_SERVICE_SUPPORTED_COMMANDS {
  GUID DeviceServiceGuid;
  WWAN_LIST_HEADER ListHeader;
} WWAN_DEVICE_SERVICE_SUPPORTED_COMMANDS, *PWWAN_DEVICE_SERVICE_SUPPORTED_COMMANDS;

typedef struct _WWAN_DEVICE_SERVICE_SESSION {
  GUID DeviceServiceGuid;
  WWAN_DEVICE_SERVICE_SESSION_STATE State;
  ULONG uSessionID;
} WWAN_DEVICE_SERVICE_SESSION, *PWWAN_DEVICE_SERVICE_SESSION;

typedef struct _WWAN_DEVICE_SERVICE_SESSION_READ {
  ULONG uSessionID;
  ULONG uDataSize;
} WWAN_DEVICE_SERVICE_SESSION_READ, *PWWAN_DEVICE_SERVICE_SESSION_READ;

typedef struct _WWAN_DEVICE_SERVICE_SESSION_WRITE {
  ULONG uSessionID;
  ULONG uDataSize;
} WWAN_DEVICE_SERVICE_SESSION_WRITE, *PWWAN_DEVICE_SERVICE_SESSION_WRITE;

typedef struct _WWAN_PROVIDER2 {
    WWAN_PROVIDER Provider;
    WWAN_CELLULAR_CLASS WwanCellularClass;
    ULONG   Rssi;
    ULONG   ErrorRate;
} WWAN_PROVIDER2, *PWWAN_PROVIDER2;

typedef enum _WWAN_USSD_REQUEST_TYPE {
    WwanUssdRequestInitiate = 0,
    WwanUssdRequestContinue = 1,
    WwanUssdRequestCancel = 2
} WWAN_USSD_REQUEST_TYPE, *PWWAN_USSD_REQUEST_TYPE;

typedef enum _WWAN_USSD_EVENT_TYPE {
    WwanUssdEventNoActionRequired = 0,
    WwanUssdEventActionRequired = 1,
    WwanUssdEventTerminated = 2,
    WwanUssdEventOtherLocalClient = 3,
    WwanUssdEventOperationNotSupported = 4,
    WwanUssdEventNetworkTimeOut = 5
} WWAN_USSD_EVENT_TYPE, *PWWAN_USSD_EVENT_TYPE;

typedef enum _WWAN_USSD_SESSION_STATE {
    WwanUssdSessionStateNew = 0,
    WwanUssdSessionStateExisting = 1
} WWAN_USSD_SESSION_STATE, *PWWAN_USSD_SESSION_STATE;

typedef struct _WWAN_USSD_STRING {
    BYTE DataCodingScheme;
    BYTE StringLength; // 1-160 bytes; 0 indicates absent string
    BYTE String[WWAN_USSD_STRING_LEN_MAX];
} WWAN_USSD_STRING, *PWWAN_USSD_STRING;

typedef struct _WWAN_USSD_REQUEST {
    WWAN_USSD_REQUEST_TYPE  RequestType;
    WWAN_USSD_STRING        UssdString;
} WWAN_USSD_REQUEST, *PWWAN_USSD_REQUEST;

typedef struct _WWAN_USSD_EVENT {
    WWAN_USSD_EVENT_TYPE     EventType;
    WWAN_USSD_SESSION_STATE  SessionState;
    WWAN_USSD_STRING         UssdString;
} WWAN_USSD_EVENT, *PWWAN_USSD_EVENT;


#define WWAN_GET_VISIBLE_PROVIDERS_ALL           0x00000000
#define WWAN_GET_VISIBLE_PROVIDERS_MULTICARRIER  0x00000001

typedef struct _WWAN_GET_VISIBLE_PROVIDERS {
    ULONG Action;
}WWAN_GET_VISIBLE_PROVIDERS, *PWWAN_GET_VISIBLE_PROVIDERS;


#endif


typedef enum _WWAN_AUTH_METHOD{
    WwanAuthSim = 0,
    WwanAuthAka,
    WwanAuthAkaPrime,
    WwanAuthMethodMax
} WWAN_AUTH_METHOD, *PWWAN_AUTH_METHOD;

typedef struct _WWAN_AUTH_SIM_CHALLENGE {
  BYTE Rand1[WWAN_AUTH_RAND_LEN];
  BYTE Rand2[WWAN_AUTH_RAND_LEN];
  BYTE Rand3[WWAN_AUTH_RAND_LEN];
  ULONG n;
} WWAN_AUTH_SIM_CHALLENGE, *PWWAN_AUTH_SIM_CHALLENGE;

typedef struct _WWAN_AUTH_AKA_CHALLENGE {
  BYTE Rand[WWAN_AUTH_RAND_LEN];
  BYTE Autn[WWAN_AUTH_AUTN_LEN];
} WWAN_AUTH_AKA_CHALLENGE, *PWWAN_AUTH_AKA_CHALLENGE;

typedef struct _WWAN_AUTH_AKAP_CHALLENGE {
  BYTE Rand[WWAN_AUTH_RAND_LEN];
  BYTE Autn[WWAN_AUTH_AUTN_LEN];
  BYTE NetworkName[WWAN_AUTH_NETWORK_NAME_MAX_LEN];
  ULONG NetworkNameLength;
} WWAN_AUTH_AKAP_CHALLENGE, *PWWAN_AUTH_AKAP_CHALLENGE;


typedef struct _WWAN_AUTH_CHALLENGE {
  WWAN_AUTH_METHOD AuthMethod;
  union {
    WWAN_AUTH_SIM_CHALLENGE AuthSim;
    WWAN_AUTH_AKA_CHALLENGE AuthAka;
    WWAN_AUTH_AKAP_CHALLENGE AuthAkap;
  } u;
} WWAN_AUTH_CHALLENGE, *PWWAN_AUTH_CHALLENGE;

typedef struct _WWAN_AUTH_SIM_RESPONSE {
    BYTE Sres1[WWAN_AUTH_SRES_LEN];
    BYTE Kc1[WWAN_AUTH_KC_LEN];
    BYTE Sres2[WWAN_AUTH_SRES_LEN];
    BYTE Kc2[WWAN_AUTH_KC_LEN];
    BYTE Sres3[WWAN_AUTH_SRES_LEN];
    BYTE Kc3[WWAN_AUTH_KC_LEN];
    ULONG n;
} WWAN_AUTH_SIM_RESPONSE, *PWWAN_AUTH_SIM_RESPONSE;

typedef struct _WWAN_AUTH_AKA_RESPONSE {
  BYTE Res[WWAN_AUTH_RES_MAX_LEN];
  ULONG ResLength;
  BYTE IK[WWAN_AUTH_IK_LEN];
  BYTE CK[WWAN_AUTH_CK_LEN];
  BYTE Auts[WWAN_AUTH_AUTS_LEN];
} WWAN_AUTH_AKA_RESPONSE, *PWWAN_AUTH_AKA_RESPONSE;

typedef struct _WWAN_AUTH_AKAP_RESPONSE {
  BYTE Res[WWAN_AUTH_RES_MAX_LEN];
  ULONG ResLength;
  BYTE IKP[WWAN_AUTH_IK_LEN];
  BYTE CKP[WWAN_AUTH_CK_LEN];
  BYTE Auts[WWAN_AUTH_AUTS_LEN];
} WWAN_AUTH_AKAP_RESPONSE, *PWWAN_AUTH_AKAP_RESPONSE;

typedef struct _WWAN_AUTH_RESPONSE {
  WWAN_AUTH_METHOD AuthMethod;
  union {
    WWAN_AUTH_SIM_RESPONSE AuthSim;
    WWAN_AUTH_AKA_RESPONSE AuthAka;
    WWAN_AUTH_AKAP_RESPONSE AuthAkap;
  } u;
} WWAN_AUTH_RESPONSE, *PWWAN_AUTH_RESPONSE;

typedef union
{
    ULONG       Value;
    struct
    {
        ULONG   AddressAvailable:1;
        ULONG   GatewayAvailable:1;
        ULONG   DnsServerAvailable:1;
        ULONG   MTUAvailable:1;
    };
} WWAN_IP_CONFIGURATION_FLAGS;

typedef struct _WWAN_IPV4_ADDRESS
{
    ULONG       OnLinkPrefixLength;
    UCHAR       IPV4Address[4];

} WWAN_IPV4_ADDRESS, *PWWAN_IPV4_ADDRESS;

typedef struct _WWAN_IPV6_ADDRESS
{
    ULONG       OnLinkPrefixLength;
    UCHAR       IPV6Address[16];

} WWAN_IPV6_ADDRESS, *PWWAN_IPV6_ADDRESS;

typedef struct _WWAN_IPADDRESS_ENTRY
{
    ULONG                   IsIpv6:1;
    ULONG                   IsReported:1;
    union {
        WWAN_IPV4_ADDRESS    Ipv4;
        WWAN_IPV6_ADDRESS    Ipv6;
    };

} WWAN_IPADDRESS_ENTRY, *PWWAN_IPADDRESS_ENTRY;

typedef struct _WWAN_IP_ADDRESS_STATE
{
    WWAN_IP_CONFIGURATION_FLAGS IPv4Flags;
    WWAN_IP_CONFIGURATION_FLAGS IPv6Flags;
    
    ULONG                       IPv4MTU;
    ULONG                       IPv6MTU;    

    PWWAN_IPADDRESS_ENTRY       IpTable;
    ULONG                       IpCount;
    
    PWWAN_IPADDRESS_ENTRY       GatewayTable;
    ULONG                       GatewayCount;
    
    PWWAN_IPADDRESS_ENTRY       DnsTable;
    ULONG                       DnsCount; 
} WWAN_IP_ADDRESS_STATE, *PWWAN_IP_ADDRESS_STATE;

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WINTHRESHOLD || NDIS_SUPPORT_NDIS650 )

typedef enum _WWAN_UICC_FILE_ACCESSIBILITY {
    WwanUiccFileAccessibilityNotShareable   = 0,
    WwanUiccFileAccessibilityShareable      = 1,
    WwanUiccFileAccessibilityMaximum
} WWAN_UICC_FILE_ACCESSIBILITY, *PWWAN_UICC_FILE_ACCESSIBILITY;

typedef enum _WWAN_UICC_FILE_TYPE {
    WwanUiccFileTypeWorkingEf   = 0,
    WwanUiccFileTypeInternalEf  = 1,
    WwanUiccFileTypeDfOrEf      = 2,
    WwanUiccFileTypeMax
} WWAN_UICC_FILE_TYPE, *PWWAN_UICC_FILE_TYPE;

typedef enum _WWAN_UICC_FILE_STRUCTURE {
    WwanUiccFileStructureUnknown        = 0,
    WwanUiccFileStructureTransparent    = 1,
    WwanUiccFileStructureCyclic         = 2,
    WwanUiccFileStructureLinear         = 3,
    WwanUiccFileStructureBertlv         = 4,
    WwanUiccFileStructureMax
} WWAN_UICC_FILE_STRUCTURE, *PWWAN_UICC_FILE_STRUCTURE;

typedef struct _WWAN_UICC_FILE_PATH {
    BYTE        AppIdLength;
    BYTE        AppId[WWAN_UICC_APP_ID_MAX_LEN];
    BYTE        FilePathLength;
    USHORT      FilePath[WWAN_UICC_FILE_PATH_MAX_LEN];
} WWAN_UICC_FILE_PATH, *PWWAN_UICC_FILE_PATH;

typedef struct _WWAN_UICC_FILE_STATUS {
    ULONG                           StatusWord1;
    ULONG                           StatusWord2;
    WWAN_UICC_FILE_ACCESSIBILITY    FileAccessibility;
    WWAN_UICC_FILE_TYPE             FileType;
    WWAN_UICC_FILE_STRUCTURE        FileStructure;
    ULONG                           ItemCount;
    ULONG                           Size;
    WWAN_PIN_TYPE                   FileLockStatus[WWAN_EF_ACCESS_TYPES_LEN];
} WWAN_UICC_FILE_STATUS, *PWWAN_UICC_FILE_STATUS;

typedef struct _WWAN_UICC_ACCESS_BINARY {
    WWAN_UICC_FILE_PATH     UiccFilePath;
    ULONG                   Offset;
    ULONG                   NumberOfBytes;
    BYTE                    LocalPinLength;
    BYTE                    LocalPin[WWAN_PIN_LEN];
    USHORT                  CommandDataLength;
    BYTE                    CommandData[ANYSIZE_ARRAY];
} WWAN_UICC_ACCESS_BINARY, *PWWAN_UICC_ACCESS_BINARY;

typedef struct _WWAN_UICC_ACCESS_RECORD {
    WWAN_UICC_FILE_PATH     UiccFilePath;
    ULONG                   RecordNumber;
    ULONG                   NumberOfBytes;
    BYTE                    LocalPinLength;
    BYTE                    LocalPin[WWAN_PIN_LEN];
    BYTE                    CommandDataLength;
    BYTE                    CommandData[WWAN_UICC_RECORD_DATA_MAX_LEN];
} WWAN_UICC_ACCESS_RECORD, *PWWAN_UICC_ACCESS_RECORD;

typedef struct _WWAN_UICC_RESPONSE {
    ULONG       StatusWord1;
    ULONG       StatusWord2;
    USHORT      ResponseDataLength;
    BYTE        ResponseData[ANYSIZE_ARRAY];
} WWAN_UICC_RESPONSE, *PWWAN_UICC_RESPONSE;

typedef struct _WWAN_SYS_CAPS_INFO {
    ULONG       NumberOfExecutors;
    ULONG       NumberOfSlots;
    ULONG       Concurrency;
    ULONG64     ModemID;
} WWAN_SYS_CAPS_INFO, *PWWAN_SYS_CAPS_INFO;

typedef struct _WWAN_MBIM_VERSION
{
    USHORT      MbimVersion;
} WWAN_MBIM_VERSION, *PWWAN_MBIM_VERSION;

typedef struct _WWAN_DEVICE_SLOT_MAPPING_INFO {
    WWAN_LIST_HEADER    SlotMapListHeader;
} WWAN_DEVICE_SLOT_MAPPING_INFO, *PWWAN_DEVICE_SLOT_MAPPING_INFO;

typedef enum _WWAN_UICCSLOT_STATE {
    WwanUiccSlotStateUnknown   = 0,
    WwanUiccSlotStateOffEmpty,
    WwanUiccSlotStateOff,
    WwanUiccSlotStateEmpty,
    WwanUiccSlotStateNotReady,
    WwanUiccSlotStateActive,
    WwanUiccSlotStateError,
#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)
    WwanUiccSlotStateActiveEsim,
    WwanUiccSlotStateActiveEsimNoProfile,
#endif
    WwanUiccSlotStateMax
} WWAN_UICCSLOT_STATE, *PWWAN_UICCSLOT_STATE;

typedef struct _WWAN_GET_SLOT_INFO {
    ULONG SlotIndex;
} WWAN_GET_SLOT_INFO, *PWWAN_GET_SLOT_INFO;

typedef struct _WWAN_SLOT_INFO {
    ULONG               SlotIndex;
    WWAN_UICCSLOT_STATE State;
} WWAN_SLOT_INFO, *PWWAN_SLOT_INFO;

#define MAX_CNT_UICC_APPS_BOUND_TO_DEVICE       2

typedef struct _WWAN_DEVICE_BINDINGS_INFO {
    WWAN_LIST_HEADER    ApplicationListHeader;
} WWAN_DEVICE_BINDINGS_INFO, *PWWAN_DEVICE_BINDINGS_INFO;

typedef enum _WWAN_IMS_VOICE_STATUS {
    WwanImsVoiceStatusUnknown       = 0,
    WwanImsVoiceStatusUnregistered,
    WwanImsVoiceStatusRegistered,
    WwanImsVoiceStatusMax
} WWAN_IMS_VOICE_STATUS, *PWWAN_IMS_VOICE_STATUS;

typedef struct _WWAN_SET_IMS_VOICE_STATE {
    WWAN_IMS_VOICE_STATUS ImsVoiceStatus;
} WWAN_SET_IMS_VOICE_STATE, *PWWAN_SET_IMS_VOICE_STATE;

typedef struct _WWAN_IMS_VOICE_STATE {
    WWAN_IMS_VOICE_STATUS ImsVoiceStatus;
} WWAN_IMS_VOICE_STATE, *PWWAN_IMS_VOICE_STATE;

typedef enum _WWAN_LOCATION_TRIGGER_MODE {
    WwanLocationTriggerNone         = 0,
    WwanLocationTriggerAreaCode,
    WwanLocationTriggerAreaCellId,
    WwanLocationTriggerMax
} WWAN_LOCATION_TRIGGER_MODE, *PWWAN_LOCATION_TRIGGER_MODE;

typedef struct _WWAN_SET_LOCATION_STATE {
    WWAN_LOCATION_TRIGGER_MODE Trigger;
} WWAN_SET_LOCATION_STATE, *PWWAN_SET_LOCATION_STATE;

typedef struct _WWAN_LOCATION_STATE_INFO {
    WWAN_LOCATION_TRIGGER_MODE Trigger;
    ULONG                      DataClass;
    ULONG                      AreaCode;
    ULONG                      CellId;
} WWAN_LOCATION_STATE_INFO, *PWWAN_LOCATION_STATE_INFO;

typedef struct _WWAN_NITZ_INFO {
    ULONG Year;
    ULONG Month;
    ULONG Day;
    ULONG Hour;
    ULONG Minute;
    ULONG Second;
    ULONG TimeZoneOffsetMinutes;
    ULONG DaylightSavingTimeOffsetMinutes;
    ULONG DataClasses;
} WWAN_NITZ_INFO, *PWWAN_NITZ_INFO;

typedef struct _WWAN_NETWORK_IDLE_HINT
{
    ULONG      IsEnabled;
} WWAN_NETWORK_IDLE_HINT, *PWWAN_NETWORK_IDLE_HINT;

#endif

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS1 || NDIS_SUPPORT_NDIS660 )

typedef struct _WWAN_ATR_INFO {
    ULONG       AtrLength;
    BYTE        Atr[WWAN_ATR_MAX_LEN];
} WWAN_ATR_INFO, *PWWAN_ATR_INFO;

typedef struct _WWAN_SET_UICC_OPEN_CHANNEL {
    ULONG       AppIdLength;
    BYTE        AppId[WWAN_UICC_APP_ID_MAX_LEN];
    ULONG       SelectP2Arg;
    ULONG       ChannelGroup;
} WWAN_SET_UICC_OPEN_CHANNEL, *PWWAN_SET_UICC_OPEN_CHANNEL;

typedef struct _WWAN_UICC_OPEN_CHANNEL_INFO {
    BYTE        Status[WWAN_UICC_STATUS_LEN];
    ULONG       Channel;
    ULONG       ResponseLength;
    BYTE        Response[ANYSIZE_ARRAY];
} WWAN_UICC_OPEN_CHANNEL_INFO, *PWWAN_UICC_OPEN_CHANNEL_INFO;

typedef struct _WWAN_SET_UICC_CLOSE_CHANNEL {
    ULONG       Channel;
    ULONG       ChannelGroup;
    ULONG       SelectP2Arg;
} WWAN_SET_UICC_CLOSE_CHANNEL, *PWWAN_SET_UICC_CLOSE_CHANNEL;

typedef struct _WWAN_UICC_CLOSE_CHANNEL_INFO {
    BYTE        Status[WWAN_UICC_STATUS_LEN];
} WWAN_UICC_CLOSE_CHANNEL_INFO, *PWWAN_UICC_CLOSE_CHANNEL_INFO;

typedef enum _WWAN_UICC_SECURE_MESSAGING {
    WwanUiccSecureMessagingNone = 0,
    WwanUiccSecureMessagingNoHdrAuth = 1,
    WwanUiccSecureMessagingMaximum
} WWAN_UICC_SECURE_MESSAGING, *PWWAN_UICC_SECURE_MESSAGING;

typedef enum _WWAN_UICC_CLASS_BYTE_TYPE {
    WwanUiccClassByteTypeInterindustry = 0,
    WwanUiccClassByteTypeExtended = 1,
    WwanUiccClassByteTypeMaximum
} WWAN_UICC_CLASS_BYTE_TYPE, *PWWAN_UICC_CLASS_BYTE_TYPE;

typedef struct _WWAN_SET_UICC_APDU {
    ULONG                       Channel;
    WWAN_UICC_SECURE_MESSAGING  SecureMessaging;
    WWAN_UICC_CLASS_BYTE_TYPE   Type;
    ULONG                       CommandLength;
    BYTE                        Command[ANYSIZE_ARRAY];
} WWAN_SET_UICC_APDU, *PWWAN_SET_UICC_APDU;

typedef struct _WWAN_UICC_APDU_INFO {
    BYTE        Status[WWAN_UICC_STATUS_LEN];
    ULONG       ResponseLength;
    BYTE        Response[ANYSIZE_ARRAY];
} WWAN_UICC_APDU_INFO, *PWWAN_UICC_APDU_INFO;

typedef struct _WWAN_UICC_TERMINAL_CAPABILITY_TLV {
    BYTE Data[3];
} WWAN_UICC_TERMINAL_CAPABILITY_TLV, *PWWAN_UICC_TERMINAL_CAPABILITY_TLV;

typedef enum _WWAN_PS_SERVICE_BIT {
    WWAN_PS_SERVICE_IMS_SMS         = 0x00000001,
    WWAN_PS_SERVICE_IMS_VOICE       = 0x00000002,
    WWAN_PS_SERVICE_IMS_VIDEO       = 0x00000004,
    WWAN_PS_SERVICE_IMS_CUSTOM      = 0x00000008,
    WWAN_PS_SERVICE_IMS_SUPSVC      = 0x00000010,
    WWAN_PS_SERVICE_IMS_RCS         = 0x00000020,
    WWAN_PS_SERVICE_IMS_USSD        = 0x00000040,
    WWAN_PS_SERVICE_IMS_E_VOICE     = 0x00000080,
    WWAN_PS_SERVICE_MMS             = 0x00010000,
    WWAN_PS_SERVICE_SUPL            = 0x00020000,
    WWAN_PS_SERVICE_BIP             = 0x00040000,
} WWAN_PS_SERVICE_BIT, *PWWAN_PS_SERVICE_BIT;

#define WWAN_PS_SERVICE_ALL    (WWAN_PS_SERVICE_IMS_SMS | \
                                WWAN_PS_SERVICE_IMS_VOICE | \
                                WWAN_PS_SERVICE_IMS_VIDEO | \
                                WWAN_PS_SERVICE_IMS_CUSTOM | \
                                WWAN_PS_SERVICE_IMS_SUPSVC | \
                                WWAN_PS_SERVICE_IMS_RCS | \
                                WWAN_PS_SERVICE_IMS_USSD | \
                                WWAN_PS_SERVICE_IMS_E_VOICE| \
                                WWAN_PS_SERVICE_MMS | \
                                WWAN_PS_SERVICE_SUPL | \
                                WWAN_PS_SERVICE_BIP)

typedef struct _WWAN_PS_MEDIA_CONFIG {
    DWORD                       ServicesBitMap;         // a bit map of services (defined in WWAN_PS_SERVICE_BIT) to be set
    WWAN_PSMEDIA_PREFERENCE     MediaPreference;        // the media preference for the services above
    WWAN_CONFIGURATION_SOURCE   MediaPreferenceSource;	// the source for MediaPreference above
} WWAN_PS_MEDIA_CONFIG_ITEM, *PWWAN_PS_MEDIA_CONFIG_ITEM;

#endif

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS2 || NDIS_SUPPORT_NDIS670 )

typedef enum _WWAN_SAR_BACKOFF_STATE {
    WwanSarBackoffStatusDisabled = 0,
    WwanSarBackoffStatusEnabled
} WWAN_SAR_BACKOFF_STATE, *PWWAN_SAR_BACKOFF_STATE;

typedef enum _WWAN_SAR_CONTROL_MODE {
    WwanSarControlModeDevice = 0,
    WwanSarControlModeOS
} WWAN_SAR_CONTROL_MODE, *PWWAN_SAR_CONTROL_MODE;

typedef struct _WWAN_SAR_CONFIG_INDICES {
    ULONG SarAntennaIndex;
    ULONG SarBackoffIndex;
} WWAN_SAR_CONFIG_INDICES, *PWWAN_SAR_CONFIG_INDICES;

typedef enum _WWAN_SAR_WIFI_HARDWARE_INTEGRATION {
    WwanSarWifiHardwareNotIntegrated = 0,
    WwanSarWifiHardwareIntegrated
} WWAN_SAR_WIFI_HARDWARE_INTEGRATION, *PWWAN_SAR_WIFI_HARDWARE_INTEGRATION;

typedef struct _WWAN_SET_SAR_CONFIG {
    WWAN_SAR_CONTROL_MODE              SarMode;
    WWAN_SAR_BACKOFF_STATE             SarBackoffStatus;
    WWAN_LIST_HEADER                   SarConfigIndexListHeader;
} WWAN_SET_SAR_CONFIG, *PWWAN_SET_SAR_CONFIG;

typedef struct _WWAN_SAR_CONFIG_INFO {
    WWAN_SAR_CONTROL_MODE              SarMode;
    WWAN_SAR_BACKOFF_STATE             SarBackoffStatus;
    WWAN_SAR_WIFI_HARDWARE_INTEGRATION SarWifiIntegration;
    WWAN_LIST_HEADER                   SarConfigIndexListHeader;
} WWAN_SAR_CONFIG_INFO, *PWWAN_SAR_CONFIG_INFO;

typedef enum _WWAN_SAR_TRANSMISSION_STATUS_NOTIFICATION_STATE {
    WwanTransmissionNotificationDisabled = 0,
    WwanTransmissionNotificationEnabled
} WWAN_SAR_TRANSMISSION_STATUS_NOTIFICATION_STATE, *PWWAN_SAR_TRANSMISSION_STATUS_NOTIFICATION_STATE;

typedef enum _WWAN_SAR_TRANSMISSION_STATUS {
    WwanTransmissionStateInactive = 0,
    WwanTransmissionStateActive
} WWAN_SAR_TRANSMISSION_STATUS, *PWWAN_SAR_TRANSMISSION_STATUS;

typedef struct _WWAN_SET_SAR_TRANSMISSION_STATUS {
    WWAN_SAR_TRANSMISSION_STATUS_NOTIFICATION_STATE ChannelNotification;
    ULONG                                           HysteresisTimer;
} WWAN_SET_SAR_TRANSMISSION_STATUS, *PWWAN_SET_SAR_TRANSMISSION_STATUS;

typedef struct _WWAN_SAR_TRANSMISSION_STATUS_INFO {
    WWAN_SAR_TRANSMISSION_STATUS_NOTIFICATION_STATE ChannelNotification;
    WWAN_SAR_TRANSMISSION_STATUS                    TransmissionStatus;
    ULONG                                           HysteresisTimer;
} WWAN_SAR_TRANSMISSION_STATUS_INFO, *PWWAN_SAR_TRANSMISSION_STATUS_INFO;

typedef enum _WWAN_NETWORK_BLACKLIST_TYPE
{
    WwanNetworkBlacklistTypeSIM         = 0,
    WwanNetworkBlacklistTypeNetwork,
    WwanNetworkBlacklistTypeMaximum
} WWAN_NETWORK_BLACKLIST_TYPE;

typedef struct _WWAN_NETWORK_BLACKLIST_PROVIDER
{
    ULONG                                           MCC;
    ULONG                                           MNC;
    WWAN_NETWORK_BLACKLIST_TYPE                     NetworkBlacklistType;
} WWAN_NETWORK_BLACKLIST_PROVIDER, *PWWAN_NETWORK_BLACKLIST_PROVIDER;

typedef enum _WWAN_NETWORK_BLACKLIST_STATE
{
    WwanNetworkBlacklistStateNotActuated            = 0,
    WwanNetworkBlacklistSIMProviderActuated,
    WwanNetworkBlacklistNetworkProviderActuated,
    WwanNetworkBlacklistStateMaximum
} WWAN_NETWORK_BLACKLIST_STATE;

typedef struct _WWAN_NETWORK_BLACKLIST_INFO
{
    WWAN_NETWORK_BLACKLIST_STATE                BlacklistState;
    WWAN_LIST_HEADER                            BlacklistProviderList;
} WWAN_NETWORK_BLACKLIST_INFO, *PWWAN_NETWORK_BLACKLIST_INFO;

#endif // ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS2 || NDIS_SUPPORT_NDIS670 )

#if ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS3 || NDIS_SUPPORT_NDIS680 )

typedef enum _WWAN_MODEM_CONFIG_MODE
{
    WwanModemConfigModeUnknown = 0,
    WwanModemConfigModeModemCentric,
    WwanModemConfigModeHostCentric,
    WwanModemConfigModeMax
} WWAN_MODEM_CONFIG_MODE, *PWWAN_MODEM_CONFIG_MODE;

typedef enum _WWAN_MODEM_CONFIG_REASON
{
    WwanModemConfigReasonNone = 0,
    WwanModemConfigReasonSIMDetected,
    WwanModemConfigReasonSIMRemoved,
    WwanModemConfigReasonNOSIM,
    WwanModemConfigReasonIMSIReset,
    WwanModemConfigReasonActivationFailure,
    WwanModemConfigReasonConfigFileUpdate,
    WwanModemConfigReasonModemReset,
    WwanModemConfigReasonModemRecovery,
    WwanModemConfigReasonMax
} WWAN_MODEM_CONFIG_REASON, *PWWAN_MODEM_CONFIG_REASON;

// WWAN_MODEM_CONFIG_STATE definitions are used by modem to inform its modem condifuration state.

typedef enum _WWAN_MODEM_CONFIG_STATE {
    WwanModemConfigStateUnknown = 0,
//  If OID query ask the state and modem is in middle of selection/activation process, it will return ConfigStatePending state
//  The modem is not allowed to send this as part of unsolicted indication
    WwanModemConfigStatePending,
//  If modem selection process is not able to identify MO specific config file, the default config file is used.
//  Once activation is completed, the modem will inform OS with unsolicted indication where config state default is set
    WwanModemConfigStateActivated,
    WwanModemConfigStateMax
} WWAN_MODEM_CONFIG_STATE, *PWWAN_MODEM_CONFIG_STATE;

typedef struct _WWAN_MODEM_CONFIG_STATUS {
    WWAN_MODEM_CONFIG_STATE     ConfigState;
    WWAN_MODEM_CONFIG_REASON    ConfigReason;
    ULONG                       PreviousConfigID;
    ULONG                       CurrentConfigID;
    DWORD                       DefaultOrNot;
} WWAN_MODEM_CONFIG_STATUS, *PWWAN_MODEM_CONFIG_STATUS;

typedef struct _WWAN_MODEM_CONFIG_INFO
{
    WWAN_MODEM_CONFIG_STATUS    ConfigStatus;
    WWAN_MODEM_CONFIG_MODE      ConfigMode;
} WWAN_MODEM_CONFIG_INFO, *PWWAN_MODEM_CONFIG_INFO;

// According to 3GPP TS24.008 spec, the maximum length of PCO structure is 253 octets
// Make the buffer size for PCO data 256 bytes
#define WWAN_PCO_OCT_BUF_LEN    256

typedef enum _WWAN_PCO_TYPE {
    WwanPcoTypeComplete = 0,  // Specifies that the complete PCO structure will be passed up
    WwanPcoTypePartial,       // Specifies that the modem will only be passing up a subset of PCO structures which is received from the network
    WwanPcoTypeMax
}  WWAN_PCO_TYPE, *PWWAN_PCO_TYPE;

typedef struct _WWAN_PCO_VALUE {
    ULONG           Size;  // PCO data size
    WWAN_PCO_TYPE   Type;
    BYTE            PcoData[WWAN_PCO_OCT_BUF_LEN];
}  WWAN_PCO_VALUE, *PWWAN_PCO_VALUE;

typedef enum _WWAN_UICC_PASSTHROUGH_ACTION {
    WwanUiccPassThroughDisable = 0,
    WwanUiccPassThroughEnable = 1,
    WwanUiccPassThroughActionMaximum
} WWAN_UICC_PASSTHROUGH_ACTION, *PWWAN_UICC_PASSTHROUGH_ACTION;

typedef enum _WWAN_UICC_PASSTHROUGH_STATUS {
    WwanUiccPassThroughDisabled = 0,
    WwanUiccPassThroughEnabled = 1,
    WwanUiccPassThroughStatusMaximum
} WWAN_UICC_PASSTHROUGH_STATUS, *PWWAN_UICC_PASSTHROUGH_STATUS;

typedef struct _WWAN_SET_UICC_RESET {
    WWAN_UICC_PASSTHROUGH_ACTION    PassThroughAction;
} WWAN_SET_UICC_RESET, *PWWAN_SET_UICC_RESET;

typedef struct _WWAN_UICC_RESET_INFO {
    WWAN_UICC_PASSTHROUGH_STATUS    PassThroughStatus;
} WWAN_UICC_RESET_INFO, *PWWAN_UICC_RESET_INFO;

typedef struct _WWAN_BASE_STATIONS_INFO_REQ {
    ULONG       MaxGSMCount;
    ULONG       MaxUMTSCount;
    ULONG       MaxTDSCDMACount;
    ULONG       MaxLTECount;
    ULONG       MaxCDMACount;
} WWAN_BASE_STATIONS_INFO_REQ, *PWWAN_BASE_STATIONS_INFO_REQ;

typedef struct _WWAN_BASE_STATIONS_INFO {
    ULONG       SystemType;             // Bitmask of WWAN_DATA_CLASS_*
    ULONG       GSMServingCellOffset;
    ULONG       GSMServingCellSize;
    ULONG       UMTSServingCellOffset;
    ULONG       UMTSServingCellSize;
    ULONG       TDSCDMAServingCellOffset;
    ULONG       TDSCDMAServingCellSize;
    ULONG       LTEServingCellOffset;
    ULONG       LTEServingCellSize;
    ULONG       GSMNmrOffset;
    ULONG       GSMNmrSize;
    ULONG       UMTSMrlOffset;
    ULONG       UMTSMrlSize;
    ULONG       TDSCDMAMrlOffset;
    ULONG       TDSCDMAMrlSize;
    ULONG       LTEMrlOffset;
    ULONG       LTEMrlSize;
    ULONG       CDMAMrlOffset;
    ULONG       CDMAMrlSize;
    BYTE        BaseStationsData[ANYSIZE_ARRAY];
} WWAN_BASE_STATIONS_INFO, *PWWAN_BASE_STATIONS_INFO;

typedef struct _WWAN_GSM_SERVING_CELL_INFO {
    ULONG       ProviderIdOffset;
    ULONG       ProviderIdSize;
    ULONG       LocationAreaCode;
    ULONG       CellId;
    ULONG       TimingAdvance;
    ULONG       ARFCN;
    ULONG       BaseStationId;
    ULONG       RxLevel;
    BYTE        Data[ANYSIZE_ARRAY];
} WWAN_GSM_SERVING_CELL_INFO, *PWWAN_GSM_SERVING_CELL_INFO;

typedef struct _WWAN_GSM_NMR_INFO {
    ULONG       ProviderIdOffset;
    ULONG       ProviderIdSize;
    ULONG       LocationAreaCode;
    ULONG       CellId;
    ULONG       ARFCN;
    ULONG       BaseStationId;
    ULONG       RxLevel;
    BYTE        Data[ANYSIZE_ARRAY];
} WWAN_GSM_NMR_INFO, *PWWAN_GSM_NMR_INFO;

typedef struct _WWAN_GSM_NMR {
    ULONG       ElementCount;
    BYTE        GSMNmr[ANYSIZE_ARRAY];
} WWAN_GSM_NMR, *PWWAN_GSM_NMR;

typedef struct _WWAN_UMTS_SERVING_CELL_INFO {
    ULONG       ProviderIdOffset;
    ULONG       ProviderIdSize;
    ULONG       LocationAreaCode;
    ULONG       CellId;
    ULONG       FrequencyInfoUL;
    ULONG       FrequencyInfoDL;
    ULONG       FrequencyInfoNT;
    ULONG       UARFCN;
    ULONG       PrimaryScramblingCode;
    ULONG       RSCP;
    ULONG       ECNO;
    ULONG       PathLoss;
    BYTE        Data[ANYSIZE_ARRAY];
} WWAN_UMTS_SERVING_CELL_INFO, *PWWAN_UMTS_SERVING_CELL_INFO;

typedef struct _WWAN_UMTS_MRL_INFO {
    ULONG       ProviderIdOffset;
    ULONG       ProviderIdSize;
    ULONG       LocationAreaCode;
    ULONG       CellId;
    ULONG       UARFCN;
    ULONG       PrimaryScramblingCode;
    ULONG       RSCP;
    ULONG       ECNO;
    ULONG       PathLoss;
    BYTE        Data[ANYSIZE_ARRAY];
} WWAN_UMTS_MRL_INFO, *PWWAN_UMTS_MRL_INFO;

typedef struct _WWAN_UMTS_MRL {
    ULONG       ElementCount;
    BYTE        UMTSMrl[ANYSIZE_ARRAY];
} WWAN_UMTS_MRL, *PWWAN_UMTS_MRL;

typedef struct _WWAN_TDSCDMA_SERVING_CELL_INFO {
    ULONG       ProviderIdOffset;
    ULONG       ProviderIdSize;
    ULONG       LocationAreaCode;
    ULONG       CellId;
    ULONG       UARFCN;
    ULONG       CellParameterId;
    ULONG       TimingAdvance;
    ULONG       RSCP;
    ULONG       PathLoss;
    BYTE        Data[ANYSIZE_ARRAY];
} WWAN_TDSCDMA_SERVING_CELL_INFO, *PWWAN_TDSCDMA_SERVING_CELL_INFO;

typedef struct _WWAN_TDSCDMA_MRL_INFO {
    ULONG       ProviderIdOffset;
    ULONG       ProviderIdSize;
    ULONG       LocationAreaCode;
    ULONG       CellId;
    ULONG       UARFCN;
    ULONG       CellParameterId;
    ULONG       TimingAdvance;
    ULONG       RSCP;
    ULONG       PathLoss;
    BYTE        Data[ANYSIZE_ARRAY];
} WWAN_TDSCDMA_MRL_INFO, *PWWAN_TDSCDMA_MRL_INFO;

typedef struct _WWAN_TDSCDMA_MRL {
    ULONG       ElementCount;
    BYTE        TDSCDMAMrl[ANYSIZE_ARRAY];
} WWAN_TDSCDMA_MRL, *PWWAN_TDSCDMA_MRL;

typedef struct _WWAN_LTE_SERVING_CELL_INFO {
    ULONG       ProviderIdOffset;
    ULONG       ProviderIdSize;
    ULONG       CellId;
    ULONG       EARFCN;
    ULONG       PhysicalCellId;
    ULONG       TAC;
    ULONG       RSRP;
    ULONG       RSRQ;
    ULONG       TimingAdvance;
    BYTE        Data[ANYSIZE_ARRAY];
} WWAN_LTE_SERVING_CELL_INFO, *PWWAN_LTE_SERVING_CELL_INFO;

typedef struct _WWAN_LTE_MRL_INFO {
    ULONG       ProviderIdOffset;
    ULONG       ProviderIdSize;
    ULONG       CellId;
    ULONG       EARFCN;
    ULONG       PhysicalCellId;
    ULONG       TAC;
    ULONG       RSRP;
    ULONG       RSRQ;
    BYTE        Data[ANYSIZE_ARRAY];
} WWAN_LTE_MRL_INFO, *PWWAN_LTE_MRL_INFO;

typedef struct _WWAN_LTE_MRL {
    ULONG       ElementCount;
    BYTE        LTEMrl[ANYSIZE_ARRAY];
} WWAN_LTE_MRL, *PWWAN_LTE_MRL;

typedef struct _WWAN_CDMA_MRL_INFO {
    ULONG       ServingCellFlag;
    ULONG       NID;
    ULONG       SID;
    ULONG       BaseStationId;
    ULONG       BaseLatitude;
    ULONG       BaseLongitude;
    ULONG       RefPn;
    ULONG       GPSSeconds;
    ULONG       PilotStrength;
} WWAN_CDMA_MRL_INFO, *PWWAN_CDMA_MRL_INFO;

typedef struct _WWAN_CDMA_MRL {
    ULONG       ElementCount;
    BYTE        CDMAMrl[ANYSIZE_ARRAY];
} WWAN_CDMA_MRL, *PWWAN_CDMA_MRL;

#endif // ( _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD || NTDDI_VERSION >= NTDDI_WIN10_RS3 || NDIS_SUPPORT_NDIS680 )

#if _MSC_VER >= 1200  
#pragma warning(pop)  
#else  
#pragma warning(default:4201)  
#endif  

#endif
