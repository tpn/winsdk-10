/*++

Copyright (c) 2000      Microsoft Corporation

Module Name:

        BTHDDI.H

Abstract:

   Public structures common to the BTHPORT and BTH client device drivers

Environment:

    Kernel & user mode

Revision History:

  --*/

#ifndef   __BTHDDI_H__
#define   __BTHDDI_H__

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201) // nameless struct/union

#if (NTDDI_VERSION >= NTDDI_VISTA)

//
// DEFINES
//

// BTHPORT BRB header context size.
#define BTHPORT_CONTEXT_SIZE                (4)

#define BTHPORT_RESERVED_FIELD_SIZE     (2)


//////////////////////// NOTES ///////////////////////////////////////////////
// 1)   BRB Clients need to send IRP_MJ_INTERNAL_DEVICE_CONTROL to
//      the BTH Port driver with IOCTL_INTERNAL_BTH_SUBMIT_BRB Device I/O code.
//      In addition, the client driver needs to pass a BRB pointer in Argument1
//      of IRP stack location.
// 2)   Client drivers can submit data buffers of either type MDL, or PVOID
//      buffer but not both.
// 3)   Client drivers need to QI the bus driver before they can submit any BRB.
//      This is necessary in order to provide the event callback entry points.
//      Optional event handlers are designated as such with [O] in the
//      BTHPORT_INTERFACE structure below.
/////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Possible error codes returned by the bus driver.
//
//  STATUS_PENDING : Request is queued for execution.
//
//  STATUS_SUCCESS: Request completed successfully.
//
//  STATUS_INSUFFICIENT_RESOURCES: request failed due to lack of resources.
//
//  STATUS_UNSUCCESSFUL: Request did not complte successfully.
//
//  STATUS_CANCELLED: BRB/IRP was cancelled .
//
//  STATUS_INVALID_PARAMETER: sumbitted BRB has invalid paramters.
//
// STATUS_INVALID_DEVICE_REQUEST: undefined request.
//
//  STATUS_PROTOCOL_UNREACHBLE: remote device did not accept the
//  l2cap connection with the specified PSM.
//
//  STATUS_DEVICE_CONFIGURATION_ERROR: remote device did not
//  agree to L2cap default configuration parameters and/or MTU size.
//
//  STATUS_DEVICE_NOT_EXIST: Radio is not available.
//
//  STATUS_BUFFER_TOO_SMALL: client submitted buffer is too small.
//
// The following Bluetooth error codes will be mapped to NTSTATUS code:

/*
BTHSTATUS:                                  NTSTATUS:

BTH_ERROR_SUCCESS                          STATUS_SUCCESS
BTH_ERROR_NO_CONNECTION                    STATUS_INVALID_HANDLE
BTH_ERROR_HARDWARE_FAILURE                 STATUS_ADAPTER_HARDWARE_ERROR
BTH_ERROR_PAGE_TIMEOUT                     STATUS_TIMEOUT
BTH_ERROR_AUTHENTICATION_FAILURE           STATUS_MUTUAL_AUTHENTICATION_FAILED
BTH_ERROR_KEY_MISSING                      STATUS_NO_USER_SESSION_KEY
BTH_ERROR_MEMORY_FULL                      STATUS_INSUFFICIENT_RESOURCES
BTH_ERROR_CONNECTION_TIMEOUT               STATUS_LINK_TIMEOUT
BTH_ERROR_MAX_NUMBER_OF_CONNECTIONS        STATUS_CONNECTION_COUNT_LIMIT
BTH_ERROR_MAX_NUMBER_OF_SCO_CONNECTIONS    STATUS_CONNECTION_COUNT_LIMIT
BTH_ERROR_ACL_CONNECTION_ALREADY_EXISTS    STATUS_CONNECTION_IN_USE
BTH_ERROR_COMMAND_DISALLOWED               STATUS_INVALID_PARAMETER
BTH_ERROR_HOST_REJECTED_LIMITED_RESOURCES  STATUS_INSUFFICIENT_RESOURCES
BTH_ERROR_HOST_REJECTED_SECURITY_REASONS   STATUS_CONNECTION_REFUSED
BTH_ERROR_HOST_REJECTED_PERSONAL_DEVICE    STATUS_CONNECTION_REFUSED
BTH_ERROR_HOST_TIMEOUT                     STATUS_TIMEOUT
BTH_ERROR_UNSUPPORTED_FEATURE_OR_PARAMETER STATUS_INVALID_PARAMETER
BTH_ERROR_INVALID_HCI_PARAMETER            STATUS_INVALID_PARAMETER
BTH_ERROR_REMOTE_USER_ENDED_CONNECTION     STATUS_REMOTE_DISCONNECT
BTH_ERROR_REMOTE_LOW_RESOURCES             STATUS_REMOTE_RESOURCES
BTH_ERROR_REMOTE_POWERING_OFF              STATUS_REMOTE_RESOURCES
BTH_ERROR_LOCAL_HOST_TERMINATED_CONNECTION STATUS_CONNECTION_DISCONNECTED
BTH_ERROR_PAIRING_NOT_ALLOWED              STATUS_MUTUAL_AUTHENTICATION_FAILED
BTH_ERROR_UNSUPPORTED_REMOTE_FEATURE       STATUS_ADAPTER_HARDWARE_ERROR
BTH_ERROR_UNSPECIFIED_ERROR                STATUS_ADAPTER_HARDWARE_ERROR
BTH_ERROR_ROLE_CHANGE_NOT_ALLOWED          STATUS_INVALID_PARAMETER

  */



//
// version for QI, encoded in binary encoded decimal, ie 1.0
//
#define BTHDDI_ENUMERATOR_INTERFACE_VERSION_FOR_QI          (0x0200)
#define BTHDDI_PROFILE_DRIVER_INTERFACE_VERSION_FOR_QI      (0x0200)

//
// Create - enumerate the PDO, the device is in range
// Remove - remove the PDO, the device is in range
// Destroy - force remove the PDO, the user no longer wants to use this
//           protocol / service
//

#ifndef ENUMERATORACTION
typedef enum _ENUMERATOR_ACTION {
    ENUMERATOR_ACTION_CREATE = 0,
    ENUMERATOR_ACTION_REMOVE,
    ENUMERATOR_ACTION_DESTROY,
    ENUMERATOR_ACTION_MAX,
} ENUMERATOR_ACTION, *PENUMERATOR_ACTION;
#endif //ENUMERATORACTION


typedef enum _ENUMERATOR_TYPE {
    ENUMERATOR_TYPE_PROTOCOL = 0,
    ENUMERATOR_TYPE_SERVICE,
    ENUMERATOR_TYPE_DEVICE,
    ENUMERATOR_TYPE_MAX,
} ENUMERATOR_TYPE, *PENUMERATOR_TYPE;

//
// BTH_ENUMERATOR_INFO Flags
//

#define BTH_ENUMERATORFL_INCOMING 0x00000001
#define BTH_ENUMERATORFL_OUTGOING 0x00000002
#define BTH_ENUMERATORFL_REENUM   0x00000004

typedef struct _BTH_ENUMERATOR_INFO {
    //
    // Type of connection being requested
    //
    ENUMERATOR_TYPE EnumeratorType;

    //
    // Action to take
    //
    ENUMERATOR_ACTION Action;

    //
    // Psm being connected to if this is an L2CAP connect request, RFCOMM
    // DLCI if this is an RFCOMM connection request.
    //
    ULONG Port;

    //
    // Flags
    //

    ULONG Flags;

    //
    // Protocol / Service UUID for the enumeration action
    //
    GUID Guid;

    //
    // Instance ID of the Protocol / Service for BTH_ENUMERATORFL_INCOMING
    //
    ULONG InstanceId;

    //
    // Instance ID str of the Protocol / Service for BTH_ENUMERATORFL_OUTGOING
    //

    WCHAR InstanceIdStr[BTH_MAX_SERVICE_NAME_SIZE];

    //
    // Vendor ID, retrieved from DI SDP record
    //
    USHORT Vid;

    //
    // Product ID, retrieved from DI SDP record
    //
    USHORT Pid;

    //
    // Manufacturer, retrieved from DI SDP record
    //
    USHORT Mfg;

    //
    // Local radio manufacturer, retreived via HCI Command
    //
    USHORT LocalMfg;
    
    
    //
    // Vendor ID type, retrieved from DI SDP record
    //
    USHORT VidType;

    //
    // Service Name (Used for local services)
    //
    WCHAR ServiceName[BTH_MAX_SERVICE_NAME_SIZE];

    //
    // Identifier used for remote services.
    //
    CHAR SdpPriLangServiceName[BTH_MAX_SERVICE_NAME_SIZE];

    //
    // Device string passed down on BTH_UPDATE ADD
    //
    WCHAR DeviceString[BTH_MAX_SERVICE_NAME_SIZE];

} BTH_ENUMERATOR_INFO, *PBTH_ENUMERATOR_INFO;



typedef PVOID L2CAP_CHANNEL_HANDLE;

typedef PVOID L2CAP_SERVER_HANDLE;

typedef PVOID SCO_SERVER_HANDLE;

//
// BRB types..
//

#ifndef BRBTYPE
typedef enum _BRB_TYPE {
    BRB_HCI_GET_LOCAL_BD_ADDR           = 0x0001,  
    BRB_L2CA_REGISTER_SERVER            = 0x0100,
    BRB_L2CA_UNREGISTER_SERVER          = 0x0101,
    BRB_L2CA_OPEN_CHANNEL               = 0x0102,
    BRB_L2CA_OPEN_CHANNEL_RESPONSE      = 0x0103,
    BRB_L2CA_CLOSE_CHANNEL              = 0x0104,
    BRB_L2CA_ACL_TRANSFER               = 0x0105,
    BRB_L2CA_UPDATE_CHANNEL             = 0x0106,
    BRB_L2CA_PING                       = 0x0107,
    BRB_L2CA_INFO_REQUEST               = 0x0108,
    BRB_REGISTER_PSM                    = 0x0109,
    BRB_UNREGISTER_PSM                  = 0x010a,
    BRB_SCO_REGISTER_SERVER             = 0x0200,
    BRB_SCO_UNREGISTER_SERVER           = 0x0201,
    BRB_SCO_OPEN_CHANNEL                = 0x0202,
    BRB_SCO_OPEN_CHANNEL_RESPONSE       = 0x0203,
    BRB_SCO_CLOSE_CHANNEL               = 0x0204,
    BRB_SCO_TRANSFER                    = 0x0205,
    BRB_SCO_GET_CHANNEL_INFO            = 0x0207,
    BRB_SCO_GET_SYSTEM_INFO             = 0x0209,
    BRB_SCO_FLUSH_CHANNEL               = 0x020a,
    BRB_SCO_OPEN_UNMANAGED_CHANNEL      = 0x0210,
    BRB_SCO_OPEN_UNMANAGED_CHANNEL_RESPONSE
                                        = 0x0211,

#if (NTDDI_VERSION >= NTDDI_WIN8)
    BRB_L2CA_OPEN_ENHANCED_CHANNEL      = 0x0212,
    BRB_L2CA_OPEN_ENHANCED_CHANNEL_RESPONSE
                                        = 0x0213,
#endif //(NTDDI_VERSION >= NTDDI_WIN8)

    BRB_ACL_GET_MODE                    = 0x0300,
    BRB_ACL_ENTER_ACTIVE_MODE           = 0x0301,
    BRB_STORED_LINK_KEY                 = 0x0310,
    BRB_GET_DEVICE_INTERFACE_STRING     = 0x0320,
} BRB_TYPE;
#endif

typedef enum _BRB_VERSION {
                            //
    BLUETOOTH_V1 = 0,       // Brb was created by Version 1.x code 
                            // (i.e. ExAllocatePool)
                            //
                            
                            //
    BLUETOOTH_V2            // Brb was created by Version 2.0 (or later)
                            // code by BthAllocateBrb.  This implies Brb is
                            // referenced counted
} BRB_VERSION;


//
// BRB HEADER
//
typedef struct _BRB_HEADER {
    //
    // [IN] Used to enqueue BRBs.  This field is to be used by the current owner
    //      of the BRB.  For instance, once the BRB has been sent to BTHPORT,
    //      the client driver may not use this field since BTHPORT may use it
    //      to enqueue the BRB.
    //
    LIST_ENTRY ListEntry;

    //
    // [IN] Size of the BRB including this header
    //
    ULONG Length;

    //
    // [PRIVATE] BRB Version
    // 0  ==> Bluetooth 1.x version
    // >0 ==> Bluetooth 2.x version or later, filled in by 
    // BthCreateBrb
    //
    USHORT Version; // BRB_VERSION

    //
    // [IN] BRB request type.
    //
    USHORT Type;    // BRB_TYPE


    //
    // [PRIVATE] Internal flags for use by BTHPORT
    //
    ULONG BthportFlags;

    //
    // [OUT] BRB completion status
    //
    NTSTATUS Status;

    //
    // [OUT] BRB completion BtStatus
    //
    BTHSTATUS BtStatus;

    //
    // [PRIVATE] for internal use by BTHPORT only.
    //
    PVOID Context[BTHPORT_CONTEXT_SIZE];

    //
    // for use by client drivers, BTHPORT will never touch these fields.
    //
    PVOID ClientContext[BTHPORT_CONTEXT_SIZE];

    //
    // opaque reserved fields
    //
    ULONG Reserved[BTHPORT_RESERVED_FIELD_SIZE];

} BRB_HEADER;



typedef struct _L2CAP_CONFIG_RANGE {
    USHORT Min;
    USHORT Max;
} L2CAP_CONFIG_RANGE, *PL2CAP_CONFIG_RANGE;

typedef struct _L2CAP_CONFIG_VALUE_RANGE {
    USHORT Min;
    USHORT Preferred;
    USHORT Max;
} L2CAP_CONFIG_VALUE_RANGE, *PL2CAP_CONFIG_VALUE_RANGE;

//
// Needs packing to match exact spec size
//
#include <PSHPACK1.H>
typedef struct _L2CAP_FLOWSPEC {
    //
    // Reserved.  Must be zero.
    //
    UCHAR Flags;

    //
    // L2CAP_FLOW_SERVICE_TYPE_XXX value
    //
    UCHAR ServiceType;

    //
    // Bytes/sec
    //
    ULONG TokenRate;

    //
    // Bytes
    //
    ULONG TokenBucketSize;

    //
    // Bytes/sec
    //
    ULONG PeakBandwidth;

    //
    // Microsoeonds
    //
    ULONG Latency;

    //
    // Microseconds
    //
    ULONG DelayVariation;

} L2CAP_FLOWSPEC, *PL2CAP_FLOWSPEC;

#if (NTDDI_VERSION >= NTDDI_WIN8)

typedef struct _L2CAP_RETRANSMISSION_AND_FLOW_CONTROL {
    //
    // Requested mode for the link.
    //
    UCHAR Mode;

    //
    // Size of the transmission window for flow control, retranmission and
    // enhanced retransmission mode. Only Enhanced Retransmission mode is 
    // supported and it has range 1 to 63.
    //
    UCHAR TxWindowSize;

    //
    // Number of transmission of a single I-frame that L2CAP is allowed to try
    // in Retransmission mode and Enhanced Retransmission mode. Minimum is 1.
    //
    UCHAR MaxTransmit;

    //
    // Retransmission timeout
    //
    USHORT RetransmissionTO;

    //
    // Monitor timeout
    //
    USHORT MonitorTO;

    //
    // Maximum PDU Size
    //
    USHORT MaxPDUSize;

} L2CAP_RETRANSMISSION_AND_FLOW_CONTROL, *PL2CAP_RETRANSMISSION_AND_FLOW_CONTROL;

typedef struct _L2CAP_EXTENDED_FLOW_SPEC {
    //
    // unique identifier for the flow specification
    //
    UCHAR Identifier;

    //
    // Indicates level of service required.
    //
    UCHAR ServiceType;

    //
    // Maximum size of SDUs transmitted by the application.
    //
    USHORT MaxSDUSize;

    //
    // Time between consecutive SDUs generated by the application in microseconds.
    //
    ULONG SDUInterArrivalTime;

    //
    // Maximum delay between consecutive transmission opportunities on the air-interface
    // of the connection.
    //
    ULONG AccessLatency;

    //
    // Maximum period after which all segments of the SDU are flushed from L2CAP
    // and the controller.
    //
    ULONG FlushTimeout;

} L2CAP_EXTENDED_FLOW_SPEC, *PL2CAP_EXTENDED_FLOW_SPEC;

#endif // (NTDDI_VERSION >= NTDDI_WIN8)

#include <POPPACK.H>


//
// Use the DynamicBuffer field
//
#define CO_DYNAMIC              (0x0001)

//
// Use the FixedBuffer field
//
#define CO_FIXED                (0x0002)

//
// The option is unknown.  Used during config request validation callback, not
// a valid flag when submitting options to bthport.
//
#define CO_UNKNOWN              (0x0004)

#define VALID_CO_FLAGS       (CO_DYNAMIC | CO_FIXED)

#define IS_CO_TYPE_HINT(type)       (((type) & 0x80) == 0x80)
#define IS_CO_TYPE_REQUIRED(type)   (((type) & 0x80) == 0x00)

typedef UCHAR  CO_TYPE, *PCO_TYPE;
typedef UCHAR  CO_LENGTH, *PCO_LENGTH;
typedef USHORT CO_MTU, *PCO_MTU;
typedef USHORT CO_FLUSHTO, *PCO_FLUSHTO;

#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef UCHAR CO_FCS, *PCO_FCS;
typedef USHORT CO_EXTENDED_WINDOW_SIZE, *PCO_EXTENDED_WINDOW_SIZE;
#endif // (NTDDI_VERSION >= NTDDI_WIN8)

#include <pshpack1.h>
//
// Config Option (CO) header
//
typedef struct _CO_HEADER {
    //
    // Type of vendor-specific option. can be either an option or a hint.
    //
    CO_TYPE Type;

    //
    // Size of the vendor-specific option.
    //
    CO_LENGTH Length;

} CO_HEADER;
#include <poppack.h>

//
// HCI connection handle.
//
typedef USHORT CONNECTION_HANDLE, *PCONNECTION_HANDLE;

//
// HCI SCO Requests
//
typedef PVOID SCO_CHANNEL_HANDLE, *PSCO_CHANNEL_HANDLE;

//
// SCO retransmission  effort.
//
typedef enum _SCO_RETRANSMISSION_EFFORT {
    SCO_RETRANSMISSION_NONE          =   0x00,
    SCO_RETRANSMISSION_MIN1_POWER    =   0x01,
    SCO_RETRANSMISSION_MIN1_QUALITY  =   0x02,
    SCO_RETRANSMISSION_DONT_CARE     =   0xFF
} SCO_RETRANSMISSION_EFFORT, *PSCO_RETRANSMISSION_EFFORT;

//
// SCO voice setting.
//
#define SCO_VS_IN_CODING_MASK           (0x0300)
#define SCO_VS_IN_CODING_LINEAR         (0x0000)
#define SCO_VS_IN_CODING_MULAW          (0x0100)
#define SCO_VS_IN_CODING_ALAW           (0x0200)

#define SCO_VS_IN_DATA_FORMAT_MASK      (0x00C0)
#define SCO_VS_IN_DATA_FORMAT_1C        (0x0000)
#define SCO_VS_IN_DATA_FORMAT_2C        (0x0040)
#define SCO_VS_IN_DATA_FORMAT_SM        (0x0080)
#define SCO_VS_IN_DATA_FORMAT_US        (0x00C0)

#define SCO_VS_IN_SAMPLE_SIZE_MASK      (0x0020)
#define SCO_VS_IN_SAMPLE_SIZE_8BIT      (0x0000)
#define SCO_VS_IN_SAMPLE_SIZE_16BIT     (0x0020)

#define SCO_VS_PCM_BIT_POS_MASK         (0x001C)

#define SCO_VS_AIR_CODING_FORMAT_MASK   (0x0003)
#define SCO_VS_AIR_CODING_FORMAT_CVSD   (0x0000)
#define SCO_VS_AIR_CODING_FORMAT_MULAW  (0x0001)
#define SCO_VS_AIR_CODING_FORMAT_ALAW   (0x0002)
#define SCO_VS_AIR_CODING_DATA          (0x0003)

#define SCO_VS_SETTING_DEFAULT          (0x0060)  // bits 0,1 vendor specific.

//
// SCO link types.
//
typedef enum _SCO_LINK_TYPE {
    ScoLinkType  = 0x00,
    eScoLinkType = 0x02,
} SCO_LINK_TYPE, *PSCO_LINK_TYPE;

//
// SCO and eSCO coding formats
//
typedef enum _CODING_FORMAT {
    ScoCodingFormatULaw             = 0x00,
    ScoCodingFormatALaw             = 0x01,
    ScoCodingFormatCVSD             = 0x02,
    ScoCodingFormatTransparent      = 0x03,
    ScoCodingFormatLinearPCM        = 0x04,
    ScoCodingFormatMSBC             = 0x05,
    ScoCodingFormatVendorSpecific   = 0xFF
} CODING_FORMAT, *PCODING_FORMAT;

#define IS_CODING_FORMAT_RESERVED(fmt) ((fmt < ScoCodingFormatVendorSpecific)  && fmt > ScoCodingFormatMSBC)

//
// SCO and eSCO Datapath values
// 
#define SCO_DATAPATH_HCI 0x0
#define SCO_DATAPATH_PCM 0x1

//
// SCO and eSCO PCM Data Formats
//
typedef enum _PCM_DATA_FORMAT {
    ScoPCMCFormatNA             = 0x00,
    ScoPCMFormat1sComplement    = 0x01,
    ScoPCMFormat2sComplement    = 0x02,
    ScoPCMFormatSignMagnitude   = 0x03,
    ScoPCMFormatUnsigned        = 0x04
} PCM_DATA_FORMAT, *PPCM_DATA_FORMAT;

#define IS_PCM_FORMAT_RESERVED(fmt) ((fmt > ScoPCMFormatUnsigned))

//
// BR SCO and eSCO packet types.
//
#define SCO_HV1                         (0x0001)
#define SCO_HV2                         (0x0002)
#define SCO_HV3                         (0x0004)

#define SCO_EV3                         (0x0008)
#define SCO_EV4                         (0x0010)
#define SCO_EV5                         (0x0020)

#define SCO_PKT_ALL                     (0x003F)    

//
// EDR eSCO packet types are not defined.  They are implicitly included,
// but can be explicitly excluded with the following definitions.
//
#define SCO_NO2EV3                      (0x0040)
#define SCO_NO3EV3                      (0x0080)
#define SCO_NO2EV5                      (0x0100)
#define SCO_NO3EV5                      (0x0200)

//
// Frequently used packet type combinations
//

#define PKT_ALL                 (SCO_HV1 | SCO_HV2 | SCO_HV3 | SCO_EV3 | SCO_EV4 | SCO_EV5)  // 0x03F

#define PKT_EDR_ESCO_NONE       (SCO_NO2EV3 | SCO_NO3EV3 | SCO_NO2EV5 | SCO_NO3EV5)  // 0x03C0, not a valid packet type

#define PKT_HV1                 (SCO_HV1 | PKT_EDR_ESCO_NONE)       // 0x3C1
#define PKT_HV2                 (SCO_HV2 | PKT_EDR_ESCO_NONE)       // 0x3C2
#define PKT_HV3                 (SCO_HV3 | PKT_EDR_ESCO_NONE)       // 0x3C4
#define PKT_BR_SCO_ALL          (PKT_HV1 | PKT_HV2 | PKT_HV3)       // 0x3C7


#define PKT_EV3                 (SCO_EV3 | PKT_EDR_ESCO_NONE)       // 0x3C8
#define PKT_EV4                 (SCO_EV4 | PKT_EDR_ESCO_NONE)       // 0x3D0
#define PKT_EV5                 (SCO_EV5 | PKT_EDR_ESCO_NONE)       // 0x3E0
#define PKT_BR_ESCO_ALL         (PKT_EV3 | PKT_EV4 | PKT_EV5)       // 0x3F8

#define PKT_2EV3                (PKT_EDR_ESCO_NONE ^ SCO_NO2EV3)    // 0x380
#define PKT_3EV3                (PKT_EDR_ESCO_NONE ^ SCO_NO3EV3)    // 0x340
#define PKT_2EV5                (PKT_EDR_ESCO_NONE ^ SCO_NO2EV5)    // 0x2C0
#define PKT_3EV5                (PKT_EDR_ESCO_NONE ^ SCO_NO3EV5)    // 0x1C0
#define PKT_EDR_ESCO_ALL        (~PKT_EDR_ESCO_NONE)                // 0x000

#define PKT_ESCO_ALL            (SCO_EV3 | SCO_EV4 | SCO_EV5)       // 0x038, including 2/3EV3/5 



//
// Valid SCO channel flags in OpenChannel/OpenChannel response.
//
#define SCO_CF_LINK_AUTHENTICATED       (0x00020000)
#define SCO_CF_LINK_ENCRYPTED           (0x00040000)
#define SCO_CF_LINK_SUPPRESS_PIN        (0x00080000)

//
// Notify the client when a remote disconnect occurs
//
#define SCO_CALLBACK_DISCONNECT         (0x00000001)

//
// Valid SCO connection indications in OpenChannel/OpenChannel response.
//
#define SCO_VALID_CALLBACK_FLAGS        (SCO_CALLBACK_DISCONNECT)

//
// SCO callback notification codes.
//
typedef enum _SCO_INDICATION_CODE {
    ScoIndicationAddReference = 0,  // Connection indication
    ScoIndicationReleaseReference,  // Connection indication
    ScoIndicationRemoteConnect,     // Connectionless indication
    ScoIndicationRemoteDisconnect,  // Connection indication
} SCO_INDICATION_CODE, *PSCO_INDICATION_CODE;

//
// Reasons why a SCO channel has been disconnected
//
typedef enum _SCO_DISCONNECT_REASON {
    ScoHciDisconnect = 0,
    ScoDisconnectRequest,
    ScoRadioPoweredDown,
    ScoHardwareRemoval,
} SCO_DISCONNECT_REASON, *PSCO_DISCONNECT_REASON;

//
// SCO callback parameters.
//
typedef struct _SCO_INDICATION_PARAMETERS {

    // [IN] SCO connection handle.
    SCO_CHANNEL_HANDLE ConnectionHandle;

    // [IN] Bluetooth address of remote device.
    BTH_ADDR BtAddress;

    union {
        //
        // ScoIndicationRemoteConnect
        //
        struct {
            struct {
                // [IN] Type of link (SCO or ESCO).
                SCO_LINK_TYPE LinkType;
            } Request;
        } Connect;

        //
        // ScoIndicationRemoteDisconnect
        //
        struct {
            // [IN] Reason why the remote device disconnected.
            SCO_DISCONNECT_REASON Reason;

            // [OUT] TRUE to let caller close the connection.
            BOOLEAN CloseNow;
        } Disconnect;

    } Parameters;

} SCO_INDICATION_PARAMETERS, *PSCO_INDICATION_PARAMETERS;

//
// SCO callback prototype.
// 
typedef
void
(*PFNSCO_INDICATION_CALLBACK)(
    IN PVOID Context,
    IN SCO_INDICATION_CODE Indication,
    IN PSCO_INDICATION_PARAMETERS Parameters
    );

//
// Valid SCO 'connectionless indications' in service interface.
//
#define SCO_INDICATION_SCO_REQUEST      (0x00000001)
#define SCO_INDICATION_ESCO_REQUEST     (0x00000002)

#define SCO_INDICATION_VALID_FLAGS      (SCO_INDICATION_SCO_REQUEST     | \
                                         SCO_INDICATION_ESCO_REQUEST)

struct _BRB_SCO_REGISTER_SERVER {
    // BRB header
    BRB_HEADER      Hdr;

    BTH_ADDR        BtAddress;

    //
    // Reserved for future use (set to 0).
    //
    ULONG           Reserved;
    
    //
    // [IN] Combination of SCO_INDICATION_Xxx flags.
    //
    ULONG           IndicationFlags;
    PFNSCO_INDICATION_CALLBACK  IndicationCallback;
    PVOID           IndicationCallbackContext;

    //
    //  [IN] Object to be passed to ObReferenceObject, ObDereferenceObject.
    // The client provides this ReferenceObject in such a way that the port
    // driver can take a reference on the client driver for as long as
    // it has the opportunity to call the IndicationCallback function pointer.  The client
    // driver can have its reference released by calling the RemoveIndicationCallback
    // routine.
    //
    PVOID           ReferenceObject;

    //
    // [OUT] Set by BTHPORT upon a successful set of the server interface.  The
    // client should send a BRB_SCO_REGISTER_SERVER when it 
    // no longer wants to receive remote connect indications (ie, when it
    // receives a PNP rmeove for instance).  The client should pass back
    // the ServerHandle as part of the BRB_SCO_REGISTER_SERVER
    // structure.
    //
    OUT SCO_SERVER_HANDLE ServerHandle;


};

struct _BRB_SCO_UNREGISTER_SERVER {
    // BRB header
    BRB_HEADER  Hdr;

    BTH_ADDR    BtAddress;
    PVOID       ServerHandle;
};

//
//Connect response signal Result values
//
#define SCO_CONNECT_RSP_RESPONSE_SUCCESS            (0x00)
#define SCO_CONNECT_RSP_RESPONSE_NO_RESOURCES       (0x0D)
#define SCO_CONNECT_RSP_RESPONSE_SECURITY_BLOCK     (0x0E)
#define SCO_CONNECT_RSP_RESPONSE_BAD_BD_ADDR        (0x0F)

//
// This request will open an SCO connection on a physical link.
//
struct _BRB_SCO_OPEN_CHANNEL {
    // BRB header
    BRB_HEADER Hdr;

    // [IN] Bluetooth address of target device
    BTH_ADDR BtAddress;

    // [IN] Transmit bandwidth in (bytes/sec).
    ULONG TransmitBandwidth;

    // [IN] Receive bandwidth in (bytes/sec).
    ULONG ReceiveBandwidth;

    // [IN] Max in air delay before discarding the packet (msec). 
    USHORT MaxLatency;
    
    // [IN] HV1 | HV2 | HV3 | EV3 | EV4 | EV5 (See SCO_HV1 etc.)
    USHORT PacketType;

    // [IN] Content format. (See SCO_VS_Xxx defines).
    USHORT ContentFormat;

    // [IN] Set to zero.
    USHORT Reserved;

    // [IN] Retransmission effort
    SCO_RETRANSMISSION_EFFORT RetransmissionEffort;

    // [IN] Combination of SCO_CF_XXX flags
    ULONG ChannelFlags;

    // [IN] Combo of SCO_CALLBACK_Xxx flags
    ULONG CallbackFlags;

    // [IN] Callback supplied by client
    PFNSCO_INDICATION_CALLBACK Callback;

    // [IN] Context passed to callback
    PVOID CallbackContext;

    // [IN] Object to be passed to ObReferenceObject, ObDereferenceObject
    PVOID ReferenceObject;
    
    //
    // [IN/OUT] handle used to ID the connection upon a successful connect.
    // When sending a BRB_SCO_OPEN_CHANNEL or BRB_SCO_OPEN_UNMANAGED_CHANNEL, 
    // this will be filled in when the BRB completes.
    // When sending an open channel response BRB_SCO_OPEN_CHANNEL_RESPONSE 
    // or BRB_SCO_OPEN_UNMANAGED_CHANNEL_RESPONSE, this must be filled in
    // by the server before sending down the BRB.  The value assigned
    // should be SCO_INDICATION_PARAMETERS::ConnectionHandle which was passed 
    // in during ScoIndicationRemoteConnect.
    //
    SCO_CHANNEL_HANDLE ChannelHandle;

    //
    // [IN] Used only with BRB_SCO_OPEN_CHANNEL_RESPONSE and
    // BRB_SCO_OPEN_UNMANAGED_CHANNEL_RESPONSE.  One of the
    // SCO_CONNECT_RSP_RESPONSE_Xxx values is used.
    //
    UCHAR Response;
};

//
// This request will close an SCO connection on a physical link.
//
struct _BRB_SCO_CLOSE_CHANNEL {
    // BRB header
    BRB_HEADER Hdr;
    
    // [IN] Address of the remote device
    BTH_ADDR BtAddress;

    // [IN] SCO Connection handle to be provided to BTHPORT.
    SCO_CHANNEL_HANDLE ChannelHandle;
};

//
// This request will flush the 'in' and/or 'out' channel's pipe.
//
struct _BRB_SCO_FLUSH_CHANNEL {
    // BRB header
    BRB_HEADER Hdr;
    
    // [IN] Address of the remote device
    BTH_ADDR BtAddress;

    // [IN] SCO Connection handle to be provided to BTHPORT.
    SCO_CHANNEL_HANDLE ChannelHandle;

    // [IN] Combination of SCO_FLUSH_XXX flags.
    ULONG FlushFlags;
};

// SCO write pipe.
#define SCO_FLUSH_DIRECTION_OUT         (0x00000001)

// SCO read pipe.
#define SCO_FLUSH_DIRECTION_IN          (0x00000002)

//
// Baseband channel settings.
//
typedef struct _BASEBAND_CHANNEL_INFO {
    //
    // Time between two consecutive eSCO instants measured in slots. Must be 
    // 0 for SCO links.
    //
    UCHAR       Transmission_Interval;

    // 
    // The size of the retransmission windows measured in slots.  Must be 0
    // for SCO links.
    //
    UCHAR       Retransmission_Window;

    //
    // Air mode data format:
    //  0x00        -   MU-LAW LOG
    //  0x01        -   A-LAW LOG
    //  0x02        -   CVSD
    //  0x03        -   Transparent Data
    //  0x04 - 0xFF -   Reserved.
    //
    UCHAR       AirMode;

    //
    // Length in bytes of the eSCO payload in the receiver direction. Must be
    // 0 for SCO links.
    //
    USHORT      Rx_Packet_Length;

    //
    // Length in bytes of the eSCO payload in the transmit direction. Must be
    // 0 for SCO links.
    //
    USHORT      Tx_Packet_Length;
}BASEBAND_CHANNEL_INFO, *PBASEBAND_CHANNEL_INFO;

//
// This request will return the channel settings.
//
struct _BRB_SCO_GET_CHANNEL_INFO {
    // BRB header
    BRB_HEADER Hdr;
    
    // [IN] Bluetooth address of target device
    BTH_ADDR BtAddress;

    // [IN] SCO Connection handle to be provided to BTHPORT.
    SCO_CHANNEL_HANDLE ChannelHandle;

    // [OUT] Generic informational flags (See SCO_INFO_Xxx defines).
    ULONG InfoFlags;

    // [OUT] Transmit bandwidth in (bytes/sec).
    ULONG TransmitBandwidth;

    // [OUT] Receive bandwidth in (bytes/sec).
    ULONG ReceiveBandwidth;

    // [OUT] Max in air delay before discarding the packet (msec). 
    USHORT MaxLatency;
    
    // [OUT] HV1 | HV2 | HV3 | EV3 | EV4 | EV5 (See SCO_HV1 etc.)
    USHORT PacketType;

    // [OUT] Content format. (See SCO_VS_Xxx defines).
    USHORT ContentFormat;

    // [OUT] Set to zero.
    USHORT Reserved;

    // [OUT] Retransmission effort
    SCO_RETRANSMISSION_EFFORT RetransmissionEffort;

    // [OUT] Combination of SCO_CF_XXX flags
    ULONG ChannelFlags;

    // [OUT] HCI connection handle.
    CONNECTION_HANDLE HciConnectionHandle;

    // [OUT] HCI link type.
    SCO_LINK_TYPE LinkType;
    
    // [OUT] Baseband channel info. This info is only available for links
    // established using the 1.2 Bluetooth Synchronous Commands (see InfoFlags
    // for more info).
    BASEBAND_CHANNEL_INFO BasebandInfo;
};

//
// Get channel informational flags.
//
#define SCO_INFO_BASEBAND_AVAILABLE (0x00000001)

//
// This request will sumbit a data buffer by the client to be filled from the
// open SCO channel associated with the connection handle.  The client driver
// can provide either an MDL ptr or PVOID ptr but not both.  BufferSize
// parameter will be updated upon completion of this request to reflect the
// total bytes read.
//
struct _BRB_SCO_TRANSFER {
    // BRB header
    BRB_HEADER Hdr;
    
    // [IN] Address of the remote device
    BTH_ADDR BtAddress;

    // [IN] SCO Connection handle to be provided to BTHPORT.
    SCO_CHANNEL_HANDLE ChannelHandle;

    // [IN] Combination of SCO_TRANSFER_XXX flags.
    ULONG TransferFlags;

    // [IN/OUT] Length of buffer in bytes.
    ULONG BufferSize;

    // [IN] buffer ptr. should be NULL if BufferMDL is used.
    PVOID Buffer;

    // [IN] MDL buffer ptr. should be NULL if Buffer id used.
    PMDL BufferMDL;

    // [OUT] additional info about the data.
    ULONGLONG DataTag;
};

// SCO write
#define SCO_TRANSFER_DIRECTION_OUT      (0x00000000)

// SCO read
#define SCO_TRANSFER_DIRECTION_IN       (0x00000001)

//
// This request will return system wide SCO information.
//
struct _BRB_SCO_GET_SYSTEM_INFO {
    // BRB header
    BRB_HEADER Hdr;
    
    // [OUT] SCO features. (See SCO_FEATURE_Xxx defines).
    ULONG Features;

    // [OUT] Maximum number of active SCO connections.
    //       Set to -1 if no limit or unknown.
    ULONG MaxChannels;

    // [OUT] Minimum transfer in msec x request.
    //       Set to -1 if variable or unknown.
    ULONG TransferUnit;
    
    // [OUT] Supported (e)SCO packet types. (See SCO_HV1 etc.).
    USHORT PacketTypes;

    // [OUT] Supported data formats. (See SCO_DATA_FORMAT_Xxx defines).
    USHORT DataFormats;

    // [OUT] Reserved for future use.
    ULONG Reserved;
};

//
// Supported SCO features.
//
#define SCO_FEATURE_SCO_LINKS               (0x00000001)
#define SCO_FEATURE_ESCO_LINKS              (0x00000002)
#define SCO_FEATURE_STREAM_OFFSET_DATA_TAG  (0x00000010)

//
// Supported data formats (voice encodings).
//
#define SCO_DATA_FORMAT_MU_LAW_LOG      (0x0001)
#define SCO_DATA_FORMAT_A_LAW_LOG       (0x0002)
#define SCO_DATA_FORMAT_CVSD            (0x0004)
#define SCO_DATA_FORMAT_TRANSPARENT     (0x0008)
#define SCO_DATA_FORMAT_ALL             (0x000F)
#define SCO_DATA_FORMAT_VENDOR_SPECIFIC (0x00FF)

//
// Return TRUE if the reserved values are not used, or FALSE otherwise
// 
#define ALL_RESERVED_DATA_FORMAT_BITS_ARE_ZERO(format)      \
    ((format >) ? FALSE : TRUE)

//
// L2CAP specific data types
//

//
// FLOWSPEC related constants
//
// No traffic will be transmitted in the specified direction.
//
#define L2CAP_FLOW_SERVICE_TYPE_NOTRAFFIC       (0)

//
// Default value, and indicates reasonable efforts
//
#define L2CAP_FLOW_SERVICE_TYPE_BESTEFFORT      (1)

//
// Guarantees ability to transmit data at token rate.
//
#define L2CAP_FLOW_SERVICE_TYPE_GUARANTEED       (2)



//
// connect response signal Result & Status values
//
#define CONNECT_RSP_RESULT_SUCCESS           (0x0)
#define CONNECT_RSP_RESULT_PENDING           (0x1)
#define CONNECT_RSP_RESULT_PSM_NEG           (0x2)
#define CONNECT_RSP_RESULT_SECURITY_BLOCK    (0x3)
#define CONNECT_RSP_RESULT_NO_RESOURCES      (0x4)

//
// Only valid if CONNECT_RSP_RESULT_PENDING is specified
//
#define CONNECT_RSP_STATUS_NO_INFORMATION           (0x00)
#define CONNECT_RSP_STATUS_AUTHENTICATION_PENDING   (0x01)
#define CONNECT_RSP_STATUS_AUTHORIZATION_PENDING    (0x02)

//
// Config signal response codes
//
#define CONFIG_STATUS_SUCCESS                   (0)
#define CONFIG_STATUS_INVALID_PARAMETER         (1)
#define CONFIG_STATUS_REJECT                    (2)
#define CONFIG_STATUS_UNKNOWN_OPTION            (3)
#define CONFIG_STATUS_DISCONNECT                (0xFFF)

//
// Connection parameter update response codes
//
#define CONNECTION_PARAMETERS_ACCEPTED          (0x0000)
#define CONNECTION_PARAMETERS_REJECTED          (0x0001)



//
// Min, max, and default L2cap Signal MTU.
//

//
// Min, max, default, no retransmit and infinite FlushTO values
//
#define L2CAP_MIN_FLUSHTO                   (1)
#define L2CAP_MAX_FLUSHTO                   (0xFFFF)
#define L2CAP_DEFAULT_FLUSHTO               (L2CAP_MAX_FLUSHTO)

#define L2CAP_NO_REXMIT_FLUSHTO             (L2CAP_MIN_FLUSHTO)
#define L2CAP_INFINITE_FLUSHTO              (L2CAP_MAX_FLUSHTO)

#if (NTDDI_VERSION >= NTDDI_WIN8)

//
// Mode for Retransmission and Flow Control Option
//
#define L2CAP_RAF_BASIC_MODE                        (0x00)
#define L2CAP_RAF_ENHANCED_RETRANSMISSION_MODE      (0x03)
#define L2CAP_RAF_STREAMING_MODE                    (0x04)

#define L2CAP_RAF_DEFAULT_MAX_PDU_SIZE              (0x1F40)

#define L2CAP_RAF_DEFAULT_TX_WINDOW_SIZE            (0x3F)

#define L2CAP_RAF_DEFAULT_MAXTRANSMIT               (0x10)

#define L2CAP_RAF_VALID_CONFIG_REQUEST_RETRANSMISSION_TO  \
                                                    (0x00)

#define L2CAP_RAF_VALID_CONFIG_REQUEST_MONITOR_TO   (0x00)

//
// Min, max, default value for FCS
// 
#define L2CAP_NO_FCS                        (0x00)
#define L2CAP_16_BIT_FCS                    (0x01)
#define L2CAP_DEFAULT_FCS                   (L2CAP_16_BIT_FCS)

#endif // NTDDI_WIN8

//
// Specify which fields contain data.
//
// In the case of OUT parameters where the flag is not set for a particular
// value, the default will be requested.  If the default is rejected by the
// remote host, the suggested value (by the remote host) will be used.
//
// In the case of IN parameters where the flag is not set for a particular
// value, the remote's request value will be accepted.
//
// Link timeout is a local option and is not negotiated across the air.
//
// QOS is specified for the outbound config request
//
#define CFG_MTU                 (0x00000001)
#define CFG_FLUSHTO             (0x00000002)
#define CFG_QOS                 (0x00000004)
#define CFG_EXTRA               (0x00000008)

#define CFG_LINKTO              (0x00000010)
#define CFG_QOS_LOCAL           (0x00000020)

#if (NTDDI_VERSION >= NTDDI_WIN8)

#define CFG_ENHANCED            (0x00000040)
#define CFG_FCS                 (0x00000080)

#define CM_BASIC                (0x00000001)
#define CM_RETRANSMISSION_AND_FLOW    \
                                (0x00000002)
#define CM_STREAMING            (0x00000004)

#endif // NTDDI_WIN8

//
// Indicates the desired role in the connection
//
#define CF_ROLE_EITHER          (0x00000000)
#define CF_ROLE_SLAVE           (0x00000001)
#define CF_ROLE_MASTER          (0x00000002)
#define CF_ROLE_MASK            (CF_ROLE_EITHER | \
                                 CF_ROLE_SLAVE  | \
                                 CF_ROLE_MASTER)

//
// Indicates requirenments on the HCI channel.  Encryption requires
// authentication.
//
#define CF_LINK_NOTHING         (0x00010000)
#define CF_LINK_AUTHENTICATED   (0x00020000)
#define CF_LINK_ENCRYPTED       (0x00040000)
#define CF_LINK_SUPPRESS_PIN    (0x00080000)

#define CF_QUEUE_KEEP_OLD       (0x00000020)
#define CF_QUEUE_KEEP_NEW       (0x00000040)
#define CF_QUEUE_MASK           (CF_QUEUE_KEEP_OLD | CF_QUEUE_KEEP_NEW)

//
// Notify the client when a remote disconnect occurs
//
#define CALLBACK_DISCONNECT             (0x00000001)

//
// Involve the client when the remote host sends a config request with a QOS
// value.  If this flag is not set and the remote host either specifies a QOS
// parameter in a config request or rejects the local host's request for QOS,
// then the channel is disconnected.
//
#define CALLBACK_CONFIG_QOS             (0x00000002)

//
// If specified, the callback will be called when remote host rejects an extra
// config option.
//
// If unspecified and the remote host rejects the config request due to an extra
// config option, the connection will be closed.
//
#define CALLBACK_CONFIG_EXTRA_OUT       (0x00000004)

//
// If specified, the callback will be called when the remote host's config
// request contains extra options.
//
// If unspecified, the extra config options will be rejected as unknown options.
//
#define CALLBACK_CONFIG_EXTRA_IN        (0x00000008)

//
// Client will allow reconfig of the channel.  If this flag is not specified,
// any reconfig is rejected and the channel is torn down.
//
#define CALLBACK_RECONFIG               (0x00000010)

//
// Client wants to be involved in master / slave role switching
//
#define CALLBACK_ROLE_CHANGE            (0x00000020)

//
// Client wants to be notified when an incoming L2CAP packet has been received
//
#define CALLBACK_RECV_PACKET            (0x00000040)

typedef struct _INDICATION_PARAMETERS *PINDICATION_PARAMETERS;
typedef struct _INDICATION_PARAMETERS_ENHANCED *PINDICATION_PARAMETERS_ENHANCED;

#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef enum _INDICATION_CODE {

    IndicationAddReference = 0,
    IndicationReleaseReference,
    IndicationRemoteConnect,
    IndicationRemoteDisconnect,
    IndicationRemoteConfigRequest,
    IndicationRemoteConfigResponse,
    IndicationFreeExtraOptions,
    IndicationRecvPacket,
    IndicationPairDevice,
    IndicationUnpairDevice,
    IndicationUnpersonalizeDevice,
    IndicationRemoteConnectLE,
} INDICATION_CODE, *PINDICATION_CODE;

#else

typedef enum _INDICATION_CODE {
    IndicationAddReference = 0,
    IndicationReleaseReference,
    IndicationRemoteConnect,
    IndicationRemoteDisconnect,
    IndicationRemoteConfigRequest,
    IndicationRemoteConfigResponse,
    IndicationFreeExtraOptions,
    IndicationRecvPacket,
    IndicationPairDevice,
    IndicationUnpairDevice,
    IndicationUnpersonalizeDevice,
} INDICATION_CODE, *PINDICATION_CODE;

#endif // NTDDI_WIN8
typedef
void
(*PFNBTHPORT_INDICATION_CALLBACK)(
    IN PVOID Context,
    IN INDICATION_CODE Indication,
    IN PINDICATION_PARAMETERS Parameters
    );

#if (NTDDI_VERSION >= NTDDI_WIN8)

typedef
void
(*PFNBTHPORT_INDICATION_CALLBACK_ENHANCED)(
    IN PVOID Context,
    IN INDICATION_CODE Indication,
    IN PINDICATION_PARAMETERS_ENHANCED Parameters
    );

#endif //(NTDDI_VERSION >= NTDDI_WIN8)

//
// Full description of config option header and associated data
//
typedef struct _L2CAP_CONFIG_OPTION {
    //
    // Header
    //
    CO_HEADER Header;

    //
    // Valid if Flags == CO_DYNAMIC
    //
    VOID UNALIGNED *DynamicBuffer;

    //
    // Valid if Flags == CO_FIXED
    //
    UCHAR FixedBuffer[4];

    //
    // Combo of CO_XXX flags
    //
    USHORT Flags;

} L2CAP_CONFIG_OPTION, *PL2CAP_CONFIG_OPTION;

typedef struct _CHANNEL_CONFIG_PARAMETERS {
    //
    // Combination of CFG_XXX flags
    //
    ULONG Flags;

    //
    // MTU for the direction
    //
    CO_MTU Mtu;

    //
    // Flush timeout for the direction
    //
    CO_FLUSHTO FlushTO;

    //
    // Number of elements in the ExtraOptions array
    //
    ULONG NumExtraOptions;

    //
    // Array of extra options
    //
    PL2CAP_CONFIG_OPTION ExtraOptions;

    //
    // QOS for the direction
    //
    L2CAP_FLOWSPEC Flow;

} CHANNEL_CONFIG_PARAMETERS, *PCHANNEL_CONFIG_PARAMETERS;

#if (NTDDI_VERSION >= NTDDI_WIN8)

typedef struct _CHANNEL_CONFIG_PARAMETERS_ENHANCED {
    //
    // Combination of CFG_XXX flags
    //
    ULONG Flags;

    //
    // MTU for the direction
    //
    CO_MTU Mtu;

    //
    // Flush timeout for the direction
    //
    CO_FLUSHTO FlushTO;

    //
    // Number of elements in the ExtraOptions array
    //
    ULONG NumExtraOptions;

    //
    // Array of extra options
    //
    PL2CAP_CONFIG_OPTION ExtraOptions;

    //
    // QOS for the direction
    //
    L2CAP_FLOWSPEC Flow;

    //
    // Retransmission and flow for the direction
    //
    L2CAP_RETRANSMISSION_AND_FLOW_CONTROL RetransmissionAndFlow;

    //
    // Frame check sequnce
    //
    CO_FCS  Fcs;

    //
    // Extended flow specification for the l2cap channel.
    // Reserved
    //
    L2CAP_EXTENDED_FLOW_SPEC ExtendedFlowSpec;

    //
    // Extended Window size.
    // Reserved
    //
    CO_EXTENDED_WINDOW_SIZE ExtendedWindowSize;


} CHANNEL_CONFIG_PARAMETERS_ENHANCED, *PCHANNEL_CONFIG_PARAMETERS_ENHANCED;

typedef struct _CHANNEL_CONFIG_RESULTS_ENHANCED {
    //
    // Channel parameters for the given direction of the channel
    //
    CHANNEL_CONFIG_PARAMETERS_ENHANCED Params;

    //
    // Amout of buffer required to retrieve the current extra options
    // for the given direction
    //
    ULONG ExtraOptionsBufferSize;

} CHANNEL_CONFIG_RESULTS_ENHANCED, *PCHANNEL_CONFIG_RESULTS_ENHANCED;

#endif //(NTDDI_VERSION >= NTDDI_WIN8)

typedef struct _CHANNEL_CONFIG_RESULTS {
    //
    // Channel parameters for the given direction of the channel
    //
    CHANNEL_CONFIG_PARAMETERS Params;

    //
    // Amout of buffer required to retrieve the current extra options
    // for the given direction
    //
    ULONG ExtraOptionsBufferSize;

} CHANNEL_CONFIG_RESULTS, *PCHANNEL_CONFIG_RESULTS;

//
// Reasons why a channel has been disconnected
//
typedef enum _L2CAP_DISCONNECT_REASON {
    HciDisconnect = 0,
    L2capDisconnectRequest,
    RadioPoweredDown,
    HardwareRemoval,
} L2CAP_DISCONNECT_REASON;


typedef struct _INDICATION_PARAMETERS {

    L2CAP_CHANNEL_HANDLE ConnectionHandle;

    IN BTH_ADDR BtAddress;

    union {

        //
        // IndicationConnect
        //
        struct {
            struct {
                OUT USHORT PSM;
            } Request;
        } Connect;

        struct {
            //
            // The currently agreed upon parameters for the channel.  Only valid
            // if the channel was previously open and is now in config.
            //
            CHANNEL_CONFIG_PARAMETERS CurrentParams;

            //
            // The parameters passed from the remote host for config request
            //
            CHANNEL_CONFIG_PARAMETERS RequestedParams;

            //
            // In Response != CONFIG_STATUS_SUCCESS, then this parameter will
            // contain the parameters that are appropriate for the response
            // code. ResponseParams::Flags controls which parameters are sent
            // across the wire.
            //
            // If CFG_EXTRA is set, the client will be called back with
            // IndicationFreeExtraOptions after the options are no longer
            // needed.
            //
            CHANNEL_CONFIG_PARAMETERS ResponseParams;

            //
            // A CONFIG_STATUS_XXX value
            //
            USHORT Response;

        } ConfigRequest;

        struct {
            //
            // The currently agreed upon parameters for the channel.  Only valid
            // if the channel was previously open and is now in config.
            //
            CHANNEL_CONFIG_PARAMETERS CurrentParams;

            //
            // The parameters that were sent across the wire previously
            //
            CHANNEL_CONFIG_PARAMETERS RequestedParams;

            //
            // The parameters that were rejected by the remote host
            //
            CHANNEL_CONFIG_PARAMETERS RejectedParams;

            PCO_TYPE UnknownTypes;

            ULONG NumUnknownTypes;

            CHANNEL_CONFIG_PARAMETERS NewRequestParams;

            //
            // Will be either CONFIG_STATUS_UNKNOWN_OPTION or
            // CONFIG_STATUS_INVALID_PARAMETER.  Upon return from the call,
            // if the value is CONFIG_STATUS_SUCCESS, NewRequestParams are sent
            // across the wire, otherwise the connection is torn down.
            //
            USHORT Response;

        } ConfigResponse;

        struct {
            ULONG NumExtraOptions;

            //
            // Array of extra options
            //
            PL2CAP_CONFIG_OPTION ExtraOptions;
        } FreeExtraOptions;

        struct {
            L2CAP_DISCONNECT_REASON Reason;
            BOOLEAN CloseNow;
        } Disconnect;

        struct {
            ULONG PacketLength;
            ULONG TotalQueueLength;
        } RecvPacket;

    } Parameters;

} INDICATION_PARAMETERS, *PINDICATION_PARAMETERS;

#if (NTDDI_VERSION >= NTDDI_WIN8)

typedef struct _INDICATION_PARAMETERS_ENHANCED {

    L2CAP_CHANNEL_HANDLE ConnectionHandle;

    IN BTH_ADDR BtAddress;

    union {

        //
        // IndicationConnect
        //
        struct {
            struct {
                OUT USHORT PSM;
            } Request;
        } Connect;

        struct {
            //
            // The currently agreed upon parameters for the channel.  Only valid
            // if the channel was previously open and is now in config.
            //
            CHANNEL_CONFIG_PARAMETERS_ENHANCED CurrentParams;

            //
            // The parameters passed from the remote host for config request
            //
            CHANNEL_CONFIG_PARAMETERS_ENHANCED RequestedParams;

            //
            // In Response != CONFIG_STATUS_SUCCESS, then this parameter will
            // contain the parameters that are appropriate for the response
            // code. ResponseParams::Flags controls which parameters are sent
            // across the wire.
            //
            // If CFG_EXTRA is set, the client will be called back with
            // IndicationFreeExtraOptions after the options are no longer
            // needed.
            //
            CHANNEL_CONFIG_PARAMETERS_ENHANCED ResponseParams;

            //
            // A CONFIG_STATUS_XXX value
            //
            USHORT Response;

        } ConfigRequest;

        struct {
            //
            // The currently agreed upon parameters for the channel.  Only valid
            // if the channel was previously open and is now in config.
            //
            CHANNEL_CONFIG_PARAMETERS_ENHANCED CurrentParams;

            //
            // The parameters that were sent across the wire previously
            //
            CHANNEL_CONFIG_PARAMETERS_ENHANCED RequestedParams;

            //
            // The parameters that were rejected by the remote host
            //
            CHANNEL_CONFIG_PARAMETERS_ENHANCED RejectedParams;

            PCO_TYPE UnknownTypes;

            ULONG NumUnknownTypes;

            CHANNEL_CONFIG_PARAMETERS_ENHANCED NewRequestParams;

            //
            // Will be either CONFIG_STATUS_UNKNOWN_OPTION or
            // CONFIG_STATUS_INVALID_PARAMETER.  Upon return from the call,
            // if the value is CONFIG_STATUS_SUCCESS, NewRequestParams are sent
            // across the wire, otherwise the connection is torn down.
            //
            USHORT Response;

        } ConfigResponse;

        struct {
            ULONG NumExtraOptions;

            //
            // Array of extra options
            //
            PL2CAP_CONFIG_OPTION ExtraOptions;
        } FreeExtraOptions;

        struct {
            L2CAP_DISCONNECT_REASON Reason;
            BOOLEAN CloseNow;
        } Disconnect;

        struct {
            ULONG PacketLength;
            ULONG TotalQueueLength;
        } RecvPacket;

        //
        // Reserved field
        //
        PVOID Reserved;

    } Parameters;

} INDICATION_PARAMETERS_ENHANCED, *PINDICATION_PARAMETERS_ENHANCED;

#endif //(NTDDI_VERSION >= NTDDI_WIN8)

//
// Caller wants to know about the device being unpaired
//
#define INDICATION_PAIR_DEVICE          (0x00000001)
#define INDICATION_UNPAIR_DEVICE        (0x00000002)
#define INDICATION_UNPERSONALIZE_DEVICE (0x00000004)

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define INDICATION_LE_DEVICE            (0x00010000)
#endif // NTDDI_WIN8


struct _BRB_L2CA_REGISTER_SERVER {

    //
    // Common BRB header
    //
    BRB_HEADER  Hdr;
    
    BTH_ADDR    BtAddress;
    USHORT      PSM;
    ULONG       IndicationFlags;

    PFNBTHPORT_INDICATION_CALLBACK  IndicationCallback;

    PVOID       IndicationCallbackContext;

    //
    // Object to be passed to ObReferenceObject, ObDereferenceObject.
    // The client provides this ReferenceObject in such a way that the port
    // driver can take a reference on the client driver for as long as
    // it has the opportunity to call the IndicationCallback function pointer.  The client
    // driver can have its reference released by calling the RemoveIndicationCallback
    // routine.
    //
    PVOID       ReferenceObject;

    //
    // [OUT] Set by BTHPORT upon a successful set of the server interface.  The
    // client should send a BRB_L2CA_UNREGISTER_SERVER when it 
    // no longer wants to receive remote connect indications (ie, when it
    // receives a PNP rmeove for instance).  The client should pass back
    // the ServerHandle as part of the BRB_L2CA_UNREGISTER_SERVER
    // structure.
    //
    OUT L2CAP_SERVER_HANDLE ServerHandle;
};

struct _BRB_L2CA_UNREGISTER_SERVER {

    //
    // Common BRB header
    //
    BRB_HEADER  Hdr;

    BTH_ADDR    BtAddress;
    PVOID       ServerHandle;
    USHORT      Psm;
};

#if (NTDDI_VERSION >= NTDDI_WIN8)

struct _BRB_L2CA_OPEN_ENHANCED_CHANNEL {
    //
    // Common BRB header
    //
    BRB_HEADER Hdr;

    //
    // [IN/OUT] handle used to ID the connection upon a successful connect.
    // When sending a BRB_L2CA_OPEN_CHANNEL, this will be filled in when the BRB
    // complets.  When sending a BRB_L2CA_OPEN_CHANNEL_RESPONSE, this must be
    // filled in by the server before sending down the BRB.  The value assigned
    // should be INDICATION_PARAMETERS::ConnectionHandle which was passed in
    // during IndicationRemoteConnect.
    //
    L2CAP_CHANNEL_HANDLE ChannelHandle;

    union {
        struct {
            //
            // [IN] Used only with BRB_L2CA_OPEN_CHANNEL_RESPONSE.  One of the
            // CONNECT_RSP_RESULT_Xxx values is used.
            //
            // [OUT] If the BRB returns with a status of
            // STATUS_REQUEST_NOT_ACCEPTED, then Response will contain the
            // negative response from the remote host.
            //
            USHORT Response;

            //
            // [IN] if Response is equal to CONNECT_RSP_RESULT_PENDING, then
            // this field is valid.  One of the CONNECT_RSP_STATUS_XXX values
            // is used.
            //
            USHORT ResponseStatus;
        };

        //
        // [IN] Used only with BRB_L2CA_OPEN_CHANNEL.  Channel the connection
        // is intended for.
        //
        USHORT Psm;
    };

    //
    // [IN] Combination of CF_XXX flags
    //
    ULONG ChannelFlags;

    //
    // [IN] Address of the device the connection is intended for
    //
    BTH_ADDR BtAddress;

    //
    // Parameters specifying outbound request to remote host
    //
    struct {
        //
        // Combination of CFG_XXX flags
        //
        ULONG Flags;

        //
        // Range for MTU
        //
        L2CAP_CONFIG_VALUE_RANGE Mtu;

        //
        // Range for Flush timeout
        //
        L2CAP_CONFIG_VALUE_RANGE FlushTO;

        //
        // QOS data structure
        //
        L2CAP_FLOWSPEC Flow;

        //
        // LM Link timeout
        //
        USHORT LinkTO;

        //
        // How many elements are in the ExtraOptions array
        //
        ULONG NumExtraOptions;

        //
        // Array of extra options
        //
        PL2CAP_CONFIG_OPTION ExtraOptions;

        struct {
            //
            // Must be L2CAP_FLOW_SERVICE_TYPE_GUARANTEED
            //
            UCHAR ServiceType;

            //
            // Latency in microseconds
            //
            ULONG Latency;
        } LocalQos;

        //
        // Type of l2cap channel to open and corresponding parameters
        //
        struct {
            //
            // Combination of CM_XXX flags
            //
            ULONG Flags;
            
            L2CAP_RETRANSMISSION_AND_FLOW_CONTROL RetransmissionAndFlow;
        } ModeConfig;

        //
        // Specifies Frame check sequence support. Valid for ERTM and Streaming mode.
        //
        USHORT Fcs;

        //
        // Extended flow specification for the l2cap channel.
        //
        L2CAP_EXTENDED_FLOW_SPEC ExtendedFlowSpec;

        //
        // Extended Window size.
        //
        USHORT ExtendedWindowSize;

    } ConfigOut;

    //
    // Parameters specifying how to validate inbound requests
    //
    struct {
        //
        // Combination of CFG_XXX flags
        //
        ULONG Flags;

        //
        // Range for MTU
        //
        L2CAP_CONFIG_VALUE_RANGE Mtu;

        //
        // Range for Flush timeout
        //
        L2CAP_CONFIG_RANGE FlushTO;

    } ConfigIn;

    //
    // Combo of CALLBACK_Xxx flags
    //
    ULONG CallbackFlags;

    //
    // Callback supplied by client
    //
    PFNBTHPORT_INDICATION_CALLBACK_ENHANCED Callback;

    //
    // Context passed to callback
    //
    PVOID CallbackContext;

    //
    // Object to be passed to ObReferenceObject, ObDereferenceObject.
    //  If a callback is requested, this parameter is not optional.
    //
    PVOID ReferenceObject;

    //
    // [OUT] Configuration parameters for the outbound direction.
    //
    CHANNEL_CONFIG_RESULTS_ENHANCED OutResults;

    //
    // [OUT] Configuration parametesr ofr the inbound direction
    //
    CHANNEL_CONFIG_RESULTS_ENHANCED InResults;

    UCHAR IncomingQueueDepth;

    //
    // Reserved field
    //
    PVOID Reserved;

};

#endif // (NTDDI_VERSION >= NTDDI_WIN8)

struct _BRB_L2CA_OPEN_CHANNEL {
    //
    // Common BRB header
    //
    BRB_HEADER Hdr;

    //
    // [IN/OUT] handle used to ID the connection upon a successful connect.
    // When sending a BRB_L2CA_OPEN_CHANNEL, this will be filled in when the BRB
    // complets.  When sending a BRB_L2CA_OPEN_CHANNEL_RESPONSE, this must be
    // filled in by the server before sending down the BRB.  The value assigned
    // should be INDICATION_PARAMETERS::ConnectionHandle which was passed in
    // during IndicationRemoteConnect.
    //
    L2CAP_CHANNEL_HANDLE ChannelHandle;

    union {
        struct {
            //
            // [IN] Used only with BRB_L2CA_OPEN_CHANNEL_RESPONSE.  One of the
            // CONNECT_RSP_RESULT_Xxx values is used.
            //
            // [OUT] If the BRB returns with a status of
            // STATUS_REQUEST_NOT_ACCEPTED, then Response will contain the
            // negative response from the remote host.
            //
            USHORT Response;

            //
            // [IN] if Response is equal to CONNECT_RSP_RESULT_PENDING, then
            // this field is valid.  One of the CONNECT_RSP_STATUS_XXX values
            // is used.
            //
            USHORT ResponseStatus;
        };

        //
        // [IN] Used only with BRB_L2CA_OPEN_CHANNEL.  Channel the connection
        // is intended for.
        //
        USHORT Psm;
    };

    //
    // [IN] Combination of CF_XXX flags
    //
    ULONG ChannelFlags;

    //
    // [IN] Address of the device the connection is intended for
    //
    BTH_ADDR BtAddress;

    //
    // Parameters specifying outbound request to remote host
    //
    struct {
        //
        // Combination of CFG_XXX flags
        //
        ULONG Flags;

        //
        // Range for MTU
        //
        L2CAP_CONFIG_VALUE_RANGE Mtu;

        //
        // Range for Flush timeout
        //
        L2CAP_CONFIG_VALUE_RANGE FlushTO;

        //
        // QOS data structure
        //
        L2CAP_FLOWSPEC Flow;

        //
        // LM Link timeout
        //
        USHORT LinkTO;

        //
        // How many elements are in the ExtraOptions array
        //
        ULONG NumExtraOptions;

        //
        // Array of extra options
        //
        PL2CAP_CONFIG_OPTION ExtraOptions;

        struct {
            //
            // Must be L2CAP_FLOW_SERVICE_TYPE_GUARANTEED
            //
            UCHAR ServiceType;

            //
            // Latency in microseconds
            //
            ULONG Latency;
        } LocalQos;
    } ConfigOut;

    //
    // Parameters specifying how to validate inbound requests
    //
    struct {
        //
        // Combination of CFG_XXX flags
        //
        ULONG Flags;

        //
        // Range for MTU
        //
        L2CAP_CONFIG_VALUE_RANGE Mtu;

        //
        // Range for Flush timeout
        //
        L2CAP_CONFIG_RANGE FlushTO;

    } ConfigIn;

    //
    // Combo of CALLBACK_Xxx flags
    //
    ULONG CallbackFlags;

    //
    // Callback supplied by client
    //
    PFNBTHPORT_INDICATION_CALLBACK Callback;

    //
    // Context passed to callback
    //
    PVOID CallbackContext;

    //
    // Object to be passed to ObReferenceObject, ObDereferenceObject.
    //  If a callback is requested, this parameter is not optional.
    //
    PVOID ReferenceObject;

    //
    // [OUT] Configuration parameters for the outbound direction.
    //
    CHANNEL_CONFIG_RESULTS OutResults;

    //
    // [OUT] Configuration parametesr ofr the inbound direction
    //
    CHANNEL_CONFIG_RESULTS InResults;

    UCHAR IncomingQueueDepth;
};

//
// This request will close the L2cap connection specified by the connection
// handle.
//
struct _BRB_L2CA_CLOSE_CHANNEL {
    //
    // BRB header
    //
    BRB_HEADER Hdr;

    //
    // [IN] Address of the remote device
    //
    BTH_ADDR BtAddress;

    //
    // [IN] L2cap connection handle provided by port
    //
    L2CAP_CHANNEL_HANDLE ChannelHandle;
};

//
// This request will sumbit a data buffer by the client to be filled/transmitted
// from/to the open channel associated with the ChannelHandle.
//
// The client driver can provide either an MDL ptr or PVOID pointer.  The
// BufferSize parameter will be updated upon completion of this request to
// reflect the total bytes read if BTHPORT_SHORT_TRANSFER_OK flag was set.
// Otherwise the port driver will return an error.
//


//
// ACL write
//
#define ACL_TRANSFER_DIRECTION_OUT      (0x00000000)

//
// ACl read
//
#define ACL_TRANSFER_DIRECTION_IN       (0x00000001)

//
// Set for L2cap read BRB if the received buffer from remote device is less
// than the submitted buffer size.
//
#define ACL_SHORT_TRANSFER_OK           (0x00000002)

//
// Set if the client desires to have the read timeout after a period of time.
//
#define ACL_TRANSFER_TIMEOUT            (0x00000004)


struct _BRB_L2CA_ACL_TRANSFER {
    // BRB header
    BRB_HEADER Hdr;

    //
    // [IN] Address of the remote device
    //
    BTH_ADDR BtAddress;

    //
    // [IN] L2cap connection handle provided by port
    //
    L2CAP_CHANNEL_HANDLE ChannelHandle;

    //
    // [IN] Combination of ACL_TRANSFER_XXX and ACL_SHORT_TRANSFER_OK flags.
    //
    ULONG TransferFlags;

    //
    // [IN/OUT] Length of buffer in bytes.
    //
    ULONG BufferSize;

    //
    // [IN] buffer ptr. should be NULL if BufferMDL is used.
    //
    PVOID Buffer;

    //
    // [IN] MDL buffer ptr. should be NULL if Buffer id used.
    //
    PMDL BufferMDL;

    //
    // [IN] time in milliseconds before read is cancelled with any data
    // consumed so far
    //
    LONGLONG Timeout;

    //
    // [OUT] how much buffer remains if there is buffer underrun
    //
    ULONG RemainingBufferSize;
};

//
// HCI GENERAL Requests
//

//
// This request will return the address of the local radio
//
struct _BRB_GET_LOCAL_BD_ADDR {
    // BRB header
    BRB_HEADER Hdr;

    //
    // Address of local radio.
    //
    BTH_ADDR BtAddress;
};

struct _BRB_GET_DEVICE_INTERFACE_STRING {
    //
    // BRB header
    //
    BRB_HEADER Hdr;

    //
    // Pointer to the buffer that will contain the string
    //
    PWCHAR DeviceInterfaceString;

    //
    // IN Length in *bytes* of the string
    //

    // OUT if length is too small,  STATUS_MORE_ENTRIES is returned and
    //     this field contains the required number of bytes
    //
    //     upon success, the number of bytes copied.
    //
    ULONG DeviceInterfaceStringCbLength;
};

struct _BRB_L2CA_PING {
    //
    // BRB header
    //
    BRB_HEADER Hdr;

    //
    // [IN] Device that the ping is sent to
    //
    BTH_ADDR BtAddress;

    // [IN] lenth and data to send in the PING signal
    UCHAR PingRequestLength;
    UCHAR PingRequestData[MAX_L2CAP_PING_DATA_LENGTH];

    // [OUT] length and data that the remote device responded with
    UCHAR PingResponseLength;
    UCHAR PingResponseData[MAX_L2CAP_PING_DATA_LENGTH];
};

struct _BRB_L2CA_UPDATE_CHANNEL {
    //
    // BRB header
    //
    BRB_HEADER Hdr;

    //
    // [IN] Address of the remote device
    //
    BTH_ADDR BtAddress;

    //
    // [IN] L2cap connection handle provided by port
    //
    L2CAP_CHANNEL_HANDLE ChannelHandle;

    //
    // The new flags that are required for the channel
    //
    ULONG NewChannelFlags;

    //
    // If the BRB fails, this will indicate which NewChannelFlags BTHPORT was
    // not able to honor.
    //
    ULONG FailedChannelFlags;
};


/*++

Description:

Send this BRB to register or unregister dynamic PSM values.  Clients can
indicate their preference for a PSM value by specifying the PSM value in
_BRB_PSM.Psm.  If the client has no preference, set _BRB_PSM.Psm to 0, and then
bthport will assign next avaliable PSM.  On successful completion of the BRB,
_BRB_PSM.Psm will contain the assigned PSM value.

Return value:

STATUS_SUCCESS
STATUS_INVALID_BUFFER_SIZE      BrbSize is invalid
STATUS_INVALID_PARAMETER        PSM not in dynamic range
STATUS_INSUFFICIENT_RESOURCES   alloc failed
STATUS_INVALID_CID              Client owns this PSM
STATUS_ALREADY_COMMITTED        PSM not avaliable
STATUS_CONNECTION_IN_USE        PSM in use, cannot unregister

  --*/

struct _BRB_PSM {
    //
    // BRB header
    //
    BRB_HEADER Hdr;

    //
    // The PSM that the client wants to register for
    //
    USHORT Psm;
};

//
// List of possible states of the ACL.
//
typedef enum _ACL_MODE {
    ACL_MODE_ACTIVE         = 0x0,  // Defined in Blutooth Specification
    ACL_MODE_HOLD           = 0x1,  // Defined in Blutooth Specification
    ACL_MODE_SNIFF          = 0x2,  // Defined in Blutooth Specification
    ACL_MODE_PARK           = 0x3,  // Defined in Blutooth Specification
    ACL_MODE_ENTER_ACTIVE   = 0x4,  // About to enter Active mode.
    ACL_MODE_ENTER_HOLD     = 0x5,  // About to enter Hold mode.
    ACL_MODE_ENTER_SNIFF    = 0x6,  // About to enter Sniff mode.
    ACL_MODE_ENTER_PARK     = 0x7,  // About to enter Park mode.
    ACL_DISCONNECTED        = 0x8,  // Disconnected or sent Disconnect.
} ACL_MODE;

//
// BRB to get the ACL mode for the specified remote device.
//
struct _BRB_ACL_GET_MODE {
    //
    // BRB header.
    //
    BRB_HEADER Hdr;

    //
    // [IN] Address of the remote device.
    //
    BTH_ADDR BtAddress;

    //
    // [OUT] The ACL mode.
    //
    ACL_MODE AclMode;
};

//
// BRB to put the specified ACL into active mode.
// This BRB will fail if:
// (1) the connection is disconnected or is about to be disconnected.
// (2) the connection is in 'hold' mode.
//
struct _BRB_ACL_ENTER_ACTIVE_MODE {
    //
    // BRB header.
    //
    BRB_HEADER Hdr;

    //
    // [IN] Address of the remote device.
    //
    BTH_ADDR BtAddress;
};

#ifndef BRBTYPE

//
// Bluetooth Request Block
//
typedef struct _BRB {
    union {
        struct _BRB_HEADER                       BrbHeader;
        struct _BRB_GET_DEVICE_INTERFACE_STRING  BrbGetDeviceInterfaceString;
        struct _BRB_L2CA_REGISTER_SERVER         BrbL2caRegisterServer;
        struct _BRB_L2CA_UNREGISTER_SERVER       BrbL2caUnregisterServer;
        struct _BRB_L2CA_OPEN_CHANNEL            BrbL2caOpenChannel;
        struct _BRB_L2CA_CLOSE_CHANNEL           BrbL2caCloseChannel;
        struct _BRB_L2CA_PING                    BrbL2caPing;
        struct _BRB_L2CA_ACL_TRANSFER            BrbL2caAclTransfer;
        struct _BRB_GET_LOCAL_BD_ADDR            BrbGetLocalBdAddress;
        struct _BRB_PSM                          BrbPsm;
        struct _BRB_L2CA_UPDATE_CHANNEL          BrbL2caUpdateChannel;
        struct _BRB_SCO_REGISTER_SERVER          BrbScoRegisterServer;
        struct _BRB_SCO_UNREGISTER_SERVER        BrbScoUnregisterServer;
        struct _BRB_SCO_OPEN_CHANNEL             BrbScoOpenChannel;
        struct _BRB_SCO_CLOSE_CHANNEL            BrbScoCloseChannel;
        struct _BRB_SCO_FLUSH_CHANNEL            BrbScoFlushChannel;
        struct _BRB_SCO_TRANSFER                 BrbScoTransfer;
        struct _BRB_SCO_GET_CHANNEL_INFO         BrbScoGetChannelInfo;
        struct _BRB_SCO_GET_SYSTEM_INFO          BrbScoGetSystemInfo;
        struct _BRB_ACL_GET_MODE                 BrbAclGetMode;
        struct _BRB_ACL_ENTER_ACTIVE_MODE        BrbAclEnterActiveMode;

#if (NTDDI_VERSION >= NTDDI_WIN8)
        struct _BRB_L2CA_OPEN_ENHANCED_CHANNEL   BrbL2caOpenEnhancedChannel;
#endif //(NTDDI_VERSION >= NTDDI_WIN8)
    };
} BRB, *PBRB;

//
// BthAllocateBrb
//
// Purpose:
//      Allocates a Brb of a given type
//
// Returns:
//     Brb pointer or NULL if the system is out of memory
//
// Note this function is not exported on 1.x bluetooth versions
//
_IRQL_requires_same_
_Must_inspect_result_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef
PBRB
(*PFNBTH_ALLOCATE_BRB)(
    _In_ BRB_TYPE brbType,
    _In_ ULONG tag);


//
// BthFreeBrb
//
// Purpose:
//      Free a Brb
//
// Returns:
//     Nothing
//
// Note this function is not exported on 1.x bluetooth versions
//
_IRQL_requires_same_
typedef
VOID
(*PFNBTH_FREE_BRB)(
    _In_ __drv_freesMem(Mem) PBRB pBrb);

//
// BthInitializeBrb
//
// Purpose:
//      This is used to Initialize stack allocated Brbs.
//
// Returns:
//      Nothing
//
// Note this function is not exported on 1.x bluetooth versions
//
_IRQL_requires_same_
typedef
VOID
(*PFNBTH_INITIALIZE_BRB)(
    _Inout_ PBRB pBrb, 
    _In_ BRB_TYPE brbType);

//
// BthReuseBrb
//
// Purpose:
//      This function is use to reinitialize brb for
//      reuse.
//
// Returns:
//      Nothing
//
// Note this function is not exported on 1.x bluetooth versions
//
_IRQL_requires_same_
typedef
VOID
(*PFNBTH_REUSE_BRB)(
    _Inout_ PBRB pBrb, 
    _In_ BRB_TYPE brbType);

//
// IsBluetoothVersionAvailable
//
// Purpose:
//      Indicate if the installed Bluetooth binary set supports
//      the requested version
//
// Returns:
//      TRUE if the installed bluetooth binaries support the given
//      Major & Minor versions
//
// Note this function is not exported on 1.x bluetooth versions
//
_IRQL_requires_same_
_Must_inspect_result_
typedef
BOOLEAN
(* PFNBTH_IS_BLUETOOTH_VERSION_AVAILABLE)(_In_ UCHAR MajorVersion, _In_ UCHAR MinorVersion);

//
// Bluetooth QI Profile driver interface
//
//
// Profile drivers should register with this QI in order to get function pointers
// for allocating and freeing Brb.  All Brb should be allocated or Initialized using
// these utilities.
//
// MajorFunction = IRP_MJ_PNP;
// MinorFunction = IRP_MN_QUERY_INTERFACE;
//
// {94A59AA8-4383-4286-AA4F-34A160F40004}
// DEFINE_GUID(GUID_BTHDDI_PROFILE_DRIVER_INTERFACE, 
//             0x94a59aa8, 0x4383, 0x4286, 0xaa, 0x4f, 0x34, 0xa1, 0x60, 
//             0xf4, 0x0, 0x4);
//
//
// The QUERY_INTERFACE Irp will provide the profile driver a set of function
// pointers for Brb allocation/frees and to verify if a Bluetooth version is available.
//
// Note this function is not exported on 1.x bluetooth versions
//
typedef struct _BTH_PROFILE_DRIVER_INTERFACE {
    INTERFACE       Interface;
    //
    // Use this function to allocate Brb
    //
    OUT PFNBTH_ALLOCATE_BRB BthAllocateBrb;

    //
    // Use this function to free Brb allocated with BthAllocateBrb
    //
    OUT PFNBTH_FREE_BRB BthFreeBrb;    

    //
    // Use this function to initialize stack allocated Brbs
    //
    OUT PFNBTH_INITIALIZE_BRB BthInitializeBrb;

    //
    // Use this function to reinitialize Brb for reuse
    //
    OUT PFNBTH_REUSE_BRB BthReuseBrb;

    //
    // Indicates if the installed Bluetooth binary set supports the requested version
    //
    OUT PFNBTH_IS_BLUETOOTH_VERSION_AVAILABLE IsBluetoothVersionAvailable;
}BTH_PROFILE_DRIVER_INTERFACE, *PBTH_PROFILE_DRIVER_INTERFACE;

#endif // BRBTYPE

#endif  // (NTDDI_VERSION >= NTDDI_VISTA)

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4201)
#endif

#endif  // __BTHDDI_H__
