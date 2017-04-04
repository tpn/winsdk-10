#ifndef _iscsimgt_h_
#define _iscsimgt_h_

// MSiSCSI_HBAInformation - MSiSCSI_HBAInformation


//***************************************************************************
//
//  iscsimgt.h
// 
//  Module: iScsi Discovery api
//
//  Purpose: Internal header defining interface between user mode discovery
//           api dll and HBA driver miniport.
//
//  Copyright (c) 2001 Microsoft Corporation
//
//***************************************************************************

#include <iscsidef.h>

//
//
// This class is required.
//
// Adapter Information class. The iSCSI initiator service relies upon this
// class in order to interface with your adapter. Implement one instance
// per adapter instance.
//
// This class must be registered using PDO instance names with a single instance
//

#define MSiSCSI_HBAInformationGuid \
    { 0x58515bf3,0x2f59,0x4f37, { 0xb7,0x4f,0x85,0xae,0xec,0x65,0x2a,0xd6 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_HBAInformation_GUID, \
            0x58515bf3,0x2f59,0x4f37,0xb7,0x4f,0x85,0xae,0xec,0x65,0x2a,0xd6);
#endif


typedef struct _MSiSCSI_HBAInformation
{
    // Id that is globally unique for all instances of iSCSI initiators. Use the address of the Adapter Extension or another address owned by the device driver.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_HBAInformation_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_HBAInformation_UniqueAdapterId_ID 1

    // TRUE if TCP/IP traffic is integrated with the Windows networking TCP/IP stack via a software only initiator. An adapter with its own TCP/IP stack would set this to FALSE.
    BOOLEAN IntegratedTCPIP;
    #define MSiSCSI_HBAInformation_IntegratedTCPIP_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBAInformation_IntegratedTCPIP_ID 2

    // If TRUE the iSCSI Initiator service will perform any DNS lookup and pass binary IP addresses to the adapter; the adapter must be on the same network as the Windows TCP/IP stack. If FALSE then DNS must be available on adapter.
    BOOLEAN RequiresBinaryIpAddresses;
    #define MSiSCSI_HBAInformation_RequiresBinaryIpAddresses_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBAInformation_RequiresBinaryIpAddresses_ID 3

    // Minimum version number of the iScsi spec supported by adapter
    UCHAR VersionMin;
    #define MSiSCSI_HBAInformation_VersionMin_SIZE sizeof(UCHAR)
    #define MSiSCSI_HBAInformation_VersionMin_ID 4

    // Maximum version number of the iSCSI spec supported by adapter
    UCHAR VersionMax;
    #define MSiSCSI_HBAInformation_VersionMax_SIZE sizeof(UCHAR)
    #define MSiSCSI_HBAInformation_VersionMax_ID 5

    // TRUE if this adapter is a multifunction device, that is it also exposes a netcard interface
    BOOLEAN MultifunctionDevice;
    #define MSiSCSI_HBAInformation_MultifunctionDevice_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBAInformation_MultifunctionDevice_ID 6

    // TRUE if the adapter caches are valid
    BOOLEAN CacheValid;
    #define MSiSCSI_HBAInformation_CacheValid_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBAInformation_CacheValid_ID 7

    // Number of ports (or TCP/IP addresses) on the adapter
    ULONG NumberOfPorts;
    #define MSiSCSI_HBAInformation_NumberOfPorts_SIZE sizeof(ULONG)
    #define MSiSCSI_HBAInformation_NumberOfPorts_ID 8


#define ISCSI_HBA_STATUS_WORKING           0
#define ISCSI_HBA_STATUS_DEGRADED          1
#define ISCSI_HBA_STATUS_CRITICAL          2
#define ISCSI_HBA_STATUS_FAILED            3

    // **typedef** Current status of adapter
    ULONG Status;
    #define MSiSCSI_HBAInformation_Status_SIZE sizeof(ULONG)
    #define MSiSCSI_HBAInformation_Status_ID 9



//
// Flags that define the functionality supported by the HBA
//
#define ISCSI_HBA_PRESHARED_KEY_CACHE              0x00000001
#define ISCSI_HBA_ISCSI_AUTHENTICATION_CACHE       0x00000002
#define ISCSI_HBA_IPSEC_TUNNEL_MODE                0x00000004
#define ISCSI_HBA_CHAP_VIA_RADIUS                  0x00000008
#define ISCSI_HBA_ISNS_DISCOVERY                   0x00000010
#define ISCSI_HBA_SLP_DISCOVERY                    0x00000020


    // **typedef** Bit flags that indicate various functionality supported
    ULONG FunctionalitySupported;
    #define MSiSCSI_HBAInformation_FunctionalitySupported_SIZE sizeof(ULONG)
    #define MSiSCSI_HBAInformation_FunctionalitySupported_ID 10

    // This is the GUID value last set by the SetGenerationalGuid method in the MSiSCSI_Operations class.
    UCHAR GenerationalGuid[16];
    #define MSiSCSI_HBAInformation_GenerationalGuid_SIZE sizeof(UCHAR[16])
    #define MSiSCSI_HBAInformation_GenerationalGuid_ID 11

    // Maxumum CDB length supported by the adapter
    ULONG MaxCDBLength;
    #define MSiSCSI_HBAInformation_MaxCDBLength_SIZE sizeof(ULONG)
    #define MSiSCSI_HBAInformation_MaxCDBLength_ID 12

    // TRUE if Bi-directionsal SCSI comamnd supported
    BOOLEAN BiDiScsiCommands;
    #define MSiSCSI_HBAInformation_BiDiScsiCommands_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBAInformation_BiDiScsiCommands_ID 13

    // A text string describing the manufacturer of adapter
    WCHAR VendorID[255 + 1];
    #define MSiSCSI_HBAInformation_VendorID_ID 14

    // A text string set by the manufacturer describing the model of adapter
    WCHAR VendorModel[255 + 1];
    #define MSiSCSI_HBAInformation_VendorModel_ID 15

    // A text string set by the manufacturer describing the version of adapter
    WCHAR VendorVersion[255 + 1];
    #define MSiSCSI_HBAInformation_VendorVersion_ID 16

    // A text string set by the manufacturer describing the firmware version of adapter
    WCHAR FirmwareVersion[255 + 1];
    #define MSiSCSI_HBAInformation_FirmwareVersion_ID 17

    // A text string set by the manufacturer describing the Asic version
    WCHAR AsicVersion[255 + 1];
    #define MSiSCSI_HBAInformation_AsicVersion_ID 18

    // A text string set by the manufacturer describing the option rom version of adapter
    WCHAR OptionRomVersion[255 + 1];
    #define MSiSCSI_HBAInformation_OptionRomVersion_ID 19

    // A text string set by the manufacturer describing the serial number of adapter
    WCHAR SerialNumber[255 + 1];
    #define MSiSCSI_HBAInformation_SerialNumber_ID 20

    // A text string specifying the name of the driver for the adapter
    WCHAR DriverName[255 + 1];
    #define MSiSCSI_HBAInformation_DriverName_ID 21

} MSiSCSI_HBAInformation, *PMSiSCSI_HBAInformation;

// MSiSCSI_HBASessionConfig - MSiSCSI_HBASessionConfig

//
//
// This class is optional.
//
// This class allows the default session configuration to be managed. It 
// contains the default values to use when establishing a session.
//
// This class must be registered using PDO instance names with a single instance
//

#define MSiSCSI_HBASessionConfigGuid \
    { 0xb35694de,0xd323,0x49d2, { 0xab,0xb2,0x81,0x39,0x20,0x9a,0xd1,0x50 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_HBASessionConfig_GUID, \
            0xb35694de,0xd323,0x49d2,0xab,0xb2,0x81,0x39,0x20,0x9a,0xd1,0x50);
#endif


typedef struct _MSiSCSI_HBASessionConfig
{
    // The InitialR2T key is used to turn off the default use of R2T, thus allowing an initiator to start sending data to a target as if it has received an initial R2T with Buffer Offset=0 and Desired Data Transfer Length=min (FirstBurstSize, Expected Data Transfer Length).
    BOOLEAN InitialR2T;
    #define MSiSCSI_HBASessionConfig_InitialR2T_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBASessionConfig_InitialR2T_ID 1

    // The initiator and target negotiate support for immediate data. To turn immediate data off, the initiator or target must state its desire to do so.  ImmediateData can be turned on if both the initiator and target have ImmediateData=Yes.
    BOOLEAN ImmediateData;
    #define MSiSCSI_HBASessionConfig_ImmediateData_SIZE sizeof(BOOLEAN)
    #define MSiSCSI_HBASessionConfig_ImmediateData_ID 2

    // Maximum data segment length in bytes they can receive in an iSCSI PDU.
    ULONG MaxRecvDataSegmentLength;
    #define MSiSCSI_HBASessionConfig_MaxRecvDataSegmentLength_SIZE sizeof(ULONG)
    #define MSiSCSI_HBASessionConfig_MaxRecvDataSegmentLength_ID 3

    // Maximum SCSI data payload in bytes in an Data-In or a solicited Data-Out iSCSI sequence.
    ULONG MaxBurstLength;
    #define MSiSCSI_HBASessionConfig_MaxBurstLength_SIZE sizeof(ULONG)
    #define MSiSCSI_HBASessionConfig_MaxBurstLength_ID 4

    // maximum amount in bytes of unsolicited data an iSCSI initiator may send to the target, during the execution of a single SCSI command. This covers the immediate data (if any) and the sequence of unsolicited Data-Out PDUs (if any) that follow the command.
    ULONG FirstBurstLength;
    #define MSiSCSI_HBASessionConfig_FirstBurstLength_SIZE sizeof(ULONG)
    #define MSiSCSI_HBASessionConfig_FirstBurstLength_ID 5

    // Initiator and target negotiate the maximum number of outstanding R2Ts per task, excluding any implied initial R2T that might be part of that task.  An R2T is considered outstanding until the last data PDU (with the F bit set to 1) is transferred, or a sequence reception timeout (section 6.12.1) is encountered for that data sequence.
    ULONG MaxOutstandingR2T;
    #define MSiSCSI_HBASessionConfig_MaxOutstandingR2T_SIZE sizeof(ULONG)
    #define MSiSCSI_HBASessionConfig_MaxOutstandingR2T_ID 6

} MSiSCSI_HBASessionConfig, *PMSiSCSI_HBASessionConfig;

#define MSiSCSI_HBASessionConfig_SIZE (FIELD_OFFSET(MSiSCSI_HBASessionConfig, MaxOutstandingR2T) + MSiSCSI_HBASessionConfig_MaxOutstandingR2T_SIZE)

// ISCSI_ConnectionStaticInfo - ISCSI_ConnectionStaticInfo
// iSCSI Static Connection Statistics Information
#define ISCSI_ConnectionStaticInfoGuid \
    { 0x3ce2d6a0,0x7346,0x4826, { 0x97,0x2f,0xf2,0xc1,0x97,0x79,0xd1,0xd1 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_ConnectionStaticInfo_GUID, \
            0x3ce2d6a0,0x7346,0x4826,0x97,0x2f,0xf2,0xc1,0x97,0x79,0xd1,0xd1);
#endif


typedef struct _ISCSI_ConnectionStaticInfo
{
    // A uniquely generated connection ID. Do not confuse this with CID.
    ULONGLONG UniqueConnectionId;
    #define ISCSI_ConnectionStaticInfo_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_ConnectionStaticInfo_UniqueConnectionId_ID 1

    // The iSCSI connection ID for this connection instance.
    USHORT CID;
    #define ISCSI_ConnectionStaticInfo_CID_SIZE sizeof(USHORT)
    #define ISCSI_ConnectionStaticInfo_CID_ID 2



    //login          - The TCP connection has been established, but a valid iSCSI
    //                    login response with the final bit set has not been sent or received.
    //full            - A valid iSCSI login response with the final bit set 
    //                   has been sent or received.
    //logout       - A valid iSCSI logout command has been sent or received, but
    //                  the TCP connection has not yet been closed.



// login
#define login 0
// full
#define full 1
// logout
#define logout 2

    // **typedef** Indicates the current state of this connection
    UCHAR State;
    #define ISCSI_ConnectionStaticInfo_State_SIZE sizeof(UCHAR)
    #define ISCSI_ConnectionStaticInfo_State_ID 3


// TCP
#define TCP 6

    // **typedef** The transport protocol over which this connection instance is running.
    UCHAR Protocol;
    #define ISCSI_ConnectionStaticInfo_Protocol_SIZE sizeof(UCHAR)
    #define ISCSI_ConnectionStaticInfo_Protocol_ID 4


// None
#define None 0
// crc32c
#define crc32c 1

    // **typedef** The name of the iSCSI header digest scheme in use within this session.
    UCHAR HeaderIntegrity;
    #define ISCSI_ConnectionStaticInfo_HeaderIntegrity_SIZE sizeof(UCHAR)
    #define ISCSI_ConnectionStaticInfo_HeaderIntegrity_ID 5


// None
#define None 0
// crc32c
#define crc32c 1

    // **typedef** The name of the iSCSI data digest scheme in use within this session.
    UCHAR DataIntegrity;
    #define ISCSI_ConnectionStaticInfo_DataIntegrity_SIZE sizeof(UCHAR)
    #define ISCSI_ConnectionStaticInfo_DataIntegrity_ID 6

    // Must be zero
    USHORT Reserved;
    #define ISCSI_ConnectionStaticInfo_Reserved_SIZE sizeof(USHORT)
    #define ISCSI_ConnectionStaticInfo_Reserved_ID 7

    // The maximum data payload size supported for command or data PDUs within this session.
    ULONG MaxRecvDataSegmentLength;
    #define ISCSI_ConnectionStaticInfo_MaxRecvDataSegmentLength_SIZE sizeof(ULONG)
    #define ISCSI_ConnectionStaticInfo_MaxRecvDataSegmentLength_ID 8

    // **typedef** Authentication type used when establishing the connection.
    ULONG AuthType;
    #define ISCSI_ConnectionStaticInfo_AuthType_SIZE sizeof(ULONG)
    #define ISCSI_ConnectionStaticInfo_AuthType_ID 9

    // The local network address used for the connection
    ISCSI_IP_Address LocalAddr;
    #define ISCSI_ConnectionStaticInfo_LocalAddr_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_ConnectionStaticInfo_LocalAddr_ID 10

    // The local port used for the connection
    ULONG LocalPort;
    #define ISCSI_ConnectionStaticInfo_LocalPort_SIZE sizeof(ULONG)
    #define ISCSI_ConnectionStaticInfo_LocalPort_ID 11

    // The remote network address used for the connection
    ISCSI_IP_Address RemoteAddr;
    #define ISCSI_ConnectionStaticInfo_RemoteAddr_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_ConnectionStaticInfo_RemoteAddr_ID 12

    // The remote port used for the connection
    ULONG RemotePort;
    #define ISCSI_ConnectionStaticInfo_RemotePort_SIZE sizeof(ULONG)
    #define ISCSI_ConnectionStaticInfo_RemotePort_ID 13

    // Estimated throughput of the link in bytes per second
    ULONGLONG EstimatedThroughput;
    #define ISCSI_ConnectionStaticInfo_EstimatedThroughput_SIZE sizeof(ULONGLONG)
    #define ISCSI_ConnectionStaticInfo_EstimatedThroughput_ID 14

    // Maximum Datagram size supported by the transport in bytes
    ULONG MaxDatagramSize;
    #define ISCSI_ConnectionStaticInfo_MaxDatagramSize_SIZE sizeof(ULONG)
    #define ISCSI_ConnectionStaticInfo_MaxDatagramSize_ID 15

} ISCSI_ConnectionStaticInfo, *PISCSI_ConnectionStaticInfo;

#define ISCSI_ConnectionStaticInfo_SIZE (FIELD_OFFSET(ISCSI_ConnectionStaticInfo, MaxDatagramSize) + ISCSI_ConnectionStaticInfo_MaxDatagramSize_SIZE)

// ISCSI_SessionStaticInfo - ISCSI_SessionStaticInfo
// iSCSI Static Sessions Statistics Information
#define ISCSI_SessionStaticInfoGuid \
    { 0xb71d2538,0x57e2,0x4228, { 0x88,0x8b,0x1a,0xf9,0xb3,0xbd,0x01,0xcd } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_SessionStaticInfo_GUID, \
            0xb71d2538,0x57e2,0x4228,0x88,0x8b,0x1a,0xf9,0xb3,0xbd,0x01,0xcd);
#endif


typedef struct _ISCSI_SessionStaticInfo
{
    // A uniquely generated session ID, it is the same id returned by the LoginToTarget method.  Do not confuse this with ISID or SSID.
    ULONGLONG UniqueSessionId;
    #define ISCSI_SessionStaticInfo_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_SessionStaticInfo_UniqueSessionId_ID 1

    // Initiator node name used to establish the session
    WCHAR InitiatoriSCSIName[223 + 1];
    #define ISCSI_SessionStaticInfo_InitiatoriSCSIName_ID 2

    // iSCSI node name of the target
    WCHAR TargetiSCSIName[223 + 1];
    #define ISCSI_SessionStaticInfo_TargetiSCSIName_ID 3

    // Target-defined portion of the iSCSI Session ID
    USHORT TSID;
    #define ISCSI_SessionStaticInfo_TSID_SIZE sizeof(USHORT)
    #define ISCSI_SessionStaticInfo_TSID_ID 4

    // Initiator-defined portion of the iSCSI Session ID
    UCHAR ISID[6];
    #define ISCSI_SessionStaticInfo_ISID_SIZE sizeof(UCHAR[6])
    #define ISCSI_SessionStaticInfo_ISID_ID 5

    // If TRUE, the initiator must wait for an R2T before sending data to the target.  If FALSE, the initiator may send data immediately, within limits set by FirstBurstSize and the expected data transfer length of the request.
    BOOLEAN InitialR2t;
    #define ISCSI_SessionStaticInfo_InitialR2t_SIZE sizeof(BOOLEAN)
    #define ISCSI_SessionStaticInfo_InitialR2t_ID 6

    // If TRUE indicates whether the initiator and target have agreed to support immediate commands on this session.
    BOOLEAN ImmediateData;
    #define ISCSI_SessionStaticInfo_ImmediateData_SIZE sizeof(BOOLEAN)
    #define ISCSI_SessionStaticInfo_ImmediateData_ID 7



    // Type of iSCSI session
    // discoverySession      - session is being used only for discovery
    // informationalSession  - session is used for a limited number of scsi commands
    // dataSession           - session is being used as a full feature session
    // bootSession           - session is being used to boot an initiator



// discoverySession
#define discoverySession 0
// informationalSession
#define informationalSession 1
// dataSession
#define dataSession 2
// bootSession
#define bootSession 3

    // **typedef** Type of iSCSI session
    UCHAR Type;
    #define ISCSI_SessionStaticInfo_Type_SIZE sizeof(UCHAR)
    #define ISCSI_SessionStaticInfo_Type_ID 8

    // If FALSE indicates that data PDU Sequences may be transferred in any order.  If TRUE indicates that data PDU sequences must be transferred using continuously increasing offsets, except during error recovery.
    BOOLEAN DataSequenceInOrder;
    #define ISCSI_SessionStaticInfo_DataSequenceInOrder_SIZE sizeof(BOOLEAN)
    #define ISCSI_SessionStaticInfo_DataSequenceInOrder_ID 9

    // If FALSE indicates that data PDUs within sequences may be in any order. If TRUE indicates that data PDUs within sequences must be at continuously increasing addresses, with no gaps or overlay between PDUs.
    BOOLEAN DataPduInOrder;
    #define ISCSI_SessionStaticInfo_DataPduInOrder_SIZE sizeof(BOOLEAN)
    #define ISCSI_SessionStaticInfo_DataPduInOrder_ID 10

    // The level of error recovery negotiated between the initiator and the target.
    UCHAR ErrorRecoveryLevel;
    #define ISCSI_SessionStaticInfo_ErrorRecoveryLevel_SIZE sizeof(UCHAR)
    #define ISCSI_SessionStaticInfo_ErrorRecoveryLevel_ID 11

    // The maximum number of outstanding request-to-transmit (R2T) per task within this session
    ULONG MaxOutstandingR2t;
    #define ISCSI_SessionStaticInfo_MaxOutstandingR2t_SIZE sizeof(ULONG)
    #define ISCSI_SessionStaticInfo_MaxOutstandingR2t_ID 12

    // The maximum length supported for unsolicited data sent within this session
    ULONG FirstBurstLength;
    #define ISCSI_SessionStaticInfo_FirstBurstLength_SIZE sizeof(ULONG)
    #define ISCSI_SessionStaticInfo_FirstBurstLength_ID 13

    // The maximum number of bytes which can be sent within a single sequence of Data-In or Data-Out PDUs
    ULONG MaxBurstLength;
    #define ISCSI_SessionStaticInfo_MaxBurstLength_SIZE sizeof(ULONG)
    #define ISCSI_SessionStaticInfo_MaxBurstLength_ID 14

    // The maximum number of connections that will be allowed within this session
    ULONG MaxConnections;
    #define ISCSI_SessionStaticInfo_MaxConnections_SIZE sizeof(ULONG)
    #define ISCSI_SessionStaticInfo_MaxConnections_ID 15

    // The number of connections that currently belong to this session
    USHORT ConnectionCount;
    #define ISCSI_SessionStaticInfo_ConnectionCount_SIZE sizeof(USHORT)
    #define ISCSI_SessionStaticInfo_ConnectionCount_ID 16

    // List of ISCSI_ConnectionStaticInfo.  ConnectionCount specifies the number of elements in the array. NOTE: This is a variable length array.
    ISCSI_ConnectionStaticInfo ConnectionsList[1];
    #define ISCSI_SessionStaticInfo_ConnectionsList_ID 17

} ISCSI_SessionStaticInfo, *PISCSI_SessionStaticInfo;

// ISCSI_PortalInfo - ISCSI_PortalInfo
// iSCSI Portal Info
#define ISCSI_PortalInfoGuid \
    { 0x4fb9130e,0x1fef,0x4ae6, { 0x9e,0x48,0x77,0x83,0x92,0x04,0xd4,0x13 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_PortalInfo_GUID, \
            0x4fb9130e,0x1fef,0x4ae6,0x9e,0x48,0x77,0x83,0x92,0x04,0xd4,0x13);
#endif


typedef struct _ISCSI_PortalInfo
{
    // An integer used to uniquely identify a paticular port
    ULONG Index;
    #define ISCSI_PortalInfo_Index_SIZE sizeof(ULONG)
    #define ISCSI_PortalInfo_Index_ID 1


// Initiator
#define InitiatorPortals 0
// Target
#define TargetPortals 1

    // **typedef** The type of portal (Initiator or Target) 

    UCHAR PortalType;
    #define ISCSI_PortalInfo_PortalType_SIZE sizeof(UCHAR)
    #define ISCSI_PortalInfo_PortalType_ID 2


// TCP
#define TCP 6

    // The portal's transport protocol
    UCHAR Protocol;
    #define ISCSI_PortalInfo_Protocol_SIZE sizeof(UCHAR)
    #define ISCSI_PortalInfo_Protocol_ID 3

    // 
    UCHAR Reserved1;
    #define ISCSI_PortalInfo_Reserved1_SIZE sizeof(UCHAR)
    #define ISCSI_PortalInfo_Reserved1_ID 4

    // 
    UCHAR Reserved2;
    #define ISCSI_PortalInfo_Reserved2_SIZE sizeof(UCHAR)
    #define ISCSI_PortalInfo_Reserved2_ID 5

    // The portal's network address
    ISCSI_IP_Address IPAddr;
    #define ISCSI_PortalInfo_IPAddr_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_PortalInfo_IPAddr_ID 6

    // The portal's socket number
    ULONG Port;
    #define ISCSI_PortalInfo_Port_SIZE sizeof(ULONG)
    #define ISCSI_PortalInfo_Port_ID 7

    // The portal's aggregation tag
    USHORT PortalTag;
    #define ISCSI_PortalInfo_PortalTag_SIZE sizeof(USHORT)
    #define ISCSI_PortalInfo_PortalTag_ID 8

} ISCSI_PortalInfo, *PISCSI_PortalInfo;

#define ISCSI_PortalInfo_SIZE (FIELD_OFFSET(ISCSI_PortalInfo, PortalTag) + ISCSI_PortalInfo_PortalTag_SIZE)

// MSiSCSI_PortalInfoClass - MSiSCSI_PortalInfoClass
// iScsi Portal Information Class

//
//
// This class is recommended. 
//
// This class exposes portal information.
//
// This class must be registered using PDO instance names with a single instance
//

#define MSiSCSI_PortalInfoClassGuid \
    { 0x84ca6fd6,0xb152,0x4e6a, { 0x88,0x69,0xfd,0xe5,0xe3,0x7b,0x61,0x57 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_PortalInfoClass_GUID, \
            0x84ca6fd6,0xb152,0x4e6a,0x88,0x69,0xfd,0xe5,0xe3,0x7b,0x61,0x57);
#endif


typedef struct _MSiSCSI_PortalInfoClass
{
    // Number of elements in iScsiPortalInfo array
    ULONG PortalInfoCount;
    #define MSiSCSI_PortalInfoClass_PortalInfoCount_SIZE sizeof(ULONG)
    #define MSiSCSI_PortalInfoClass_PortalInfoCount_ID 1

    // Variable length array of iScsiPortalInfo.  PortalInfoCount specifies the number of elements in the array. NOTE: this is a variable length array.
    ISCSI_PortalInfo PortalInformation[1];
    #define MSiSCSI_PortalInfoClass_PortalInformation_ID 2

} MSiSCSI_PortalInfoClass, *PMSiSCSI_PortalInfoClass;

// MSiSCSI_InitiatorSessionInfo - MSiSCSI_InitiatorSessionInfo
// iSCSI Static Initiator Session Information

//
//
// This class is required. 
//
// This class exposes session and connection information on the initiator.
//
// This class should use PDO instance names with a single instance.
//

#define MSiSCSI_InitiatorSessionInfoGuid \
    { 0xd7931411,0x0376,0x4869, { 0xa4,0x91,0x8d,0x67,0x9b,0xfc,0x00,0x4a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_InitiatorSessionInfo_GUID, \
            0xd7931411,0x0376,0x4869,0xa4,0x91,0x8d,0x67,0x9b,0xfc,0x00,0x4a);
#endif


typedef struct _MSiSCSI_InitiatorSessionInfo
{
    // Id that is globally unique to each instance of each adapter. Using the address of the Adapter Extension is a good idea.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_InitiatorSessionInfo_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_InitiatorSessionInfo_UniqueAdapterId_ID 1

    // Number of elements in SessionList array
    ULONG SessionCount;
    #define MSiSCSI_InitiatorSessionInfo_SessionCount_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorSessionInfo_SessionCount_ID 2

    // Variable length array of sessions.  SessionCount specifies the number of elements in the array. NOTE: this is a variable length array.
    ISCSI_SessionStaticInfo SessionsList[1];
    #define MSiSCSI_InitiatorSessionInfo_SessionsList_ID 3

} MSiSCSI_InitiatorSessionInfo, *PMSiSCSI_InitiatorSessionInfo;

// MSiSCSI_InitiatorNodeFailureEvent - MSiSCSI_InitiatorNodeFailureEvent
// iSCSI Initiator Node Failure Event

//
//
// This class is recommended. 
//
// This class fires an event when a node failure occurs.
//
// This class should use PDO instance names with a single instance.
//

#define MSiSCSI_InitiatorNodeFailureEventGuid \
    { 0x1221948a,0x6332,0x4ac2, { 0xaa,0x04,0x26,0x8a,0xab,0xce,0xce,0x4f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_InitiatorNodeFailureEvent_GUID, \
            0x1221948a,0x6332,0x4ac2,0xaa,0x04,0x26,0x8a,0xab,0xce,0xce,0x4f);
#endif


typedef struct _MSiSCSI_InitiatorNodeFailureEvent
{
    // Timestamp denoting time failure occured
    ULONGLONG FailureTime;
    #define MSiSCSI_InitiatorNodeFailureEvent_FailureTime_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_InitiatorNodeFailureEvent_FailureTime_ID 1


// LoginOtherFail
#define LoginOtherFail 0
// LoginAuthFail
#define LoginAuthFail 1
// LoginAuthenticateFail
#define LoginAuthenticateFail 2
// LoginNegotiateFail
#define LoginNegotiateFail 3
// LogoutOthers
#define LogoutOthers 4

    // **typedef** Types of initiator node failure
    UCHAR FailureType;
    #define MSiSCSI_InitiatorNodeFailureEvent_FailureType_SIZE sizeof(UCHAR)
    #define MSiSCSI_InitiatorNodeFailureEvent_FailureType_ID 2

    // Name of target involved in failure
    WCHAR TargetFailureName[223 + 1];
    #define MSiSCSI_InitiatorNodeFailureEvent_TargetFailureName_ID 3

    // Network address of target involved in failure
    ISCSI_IP_Address TargetFailureAddr;
    #define MSiSCSI_InitiatorNodeFailureEvent_TargetFailureAddr_SIZE sizeof(ISCSI_IP_Address)
    #define MSiSCSI_InitiatorNodeFailureEvent_TargetFailureAddr_ID 4

} MSiSCSI_InitiatorNodeFailureEvent, *PMSiSCSI_InitiatorNodeFailureEvent;

#define MSiSCSI_InitiatorNodeFailureEvent_SIZE (FIELD_OFFSET(MSiSCSI_InitiatorNodeFailureEvent, TargetFailureAddr) + MSiSCSI_InitiatorNodeFailureEvent_TargetFailureAddr_SIZE)

// MSiSCSI_InitiatorInstanceFailureEvent - MSiSCSI_InitiatorInstanceFailureEvent
// iSCSI Initiator Instance Failure Event

//
//
// This class is recommended. 
//
// This class fires an event when an initiator failure occurs.
//
// This class should use PDO instance names with a single instance.
//

#define MSiSCSI_InitiatorInstanceFailureEventGuid \
    { 0xe67e1bdb,0xd130,0x4143, { 0x9e,0xb2,0x8b,0xee,0x18,0x99,0xfd,0x52 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_InitiatorInstanceFailureEvent_GUID, \
            0xe67e1bdb,0xd130,0x4143,0x9e,0xb2,0x8b,0xee,0x18,0x99,0xfd,0x52);
#endif


typedef struct _MSiSCSI_InitiatorInstanceFailureEvent
{

// SessionDigestError
#define SessionDigestError 0
// SessionCxnTimeoutError
#define SessionCxnTimeoutError 1
// SessionFormatError
#define SessionFormatError 2

    // **typedef** Type of failure
    UCHAR FailureType;
    #define MSiSCSI_InitiatorInstanceFailureEvent_FailureType_SIZE sizeof(UCHAR)
    #define MSiSCSI_InitiatorInstanceFailureEvent_FailureType_ID 1

    // Name of target involved in failure
    WCHAR RemoteNodeName[223 + 1];
    #define MSiSCSI_InitiatorInstanceFailureEvent_RemoteNodeName_ID 2

} MSiSCSI_InitiatorInstanceFailureEvent, *PMSiSCSI_InitiatorInstanceFailureEvent;

// ISCSI_Path - ISCSI_Path
// This class describes an iSCSI Path (A TCP Connection to the target)
#define ISCSI_PathGuid \
    { 0xc8775641,0x5430,0x4220, { 0xba,0x25,0x7d,0xa5,0x61,0xcb,0x64,0xce } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_Path_GUID, \
            0xc8775641,0x5430,0x4220,0xba,0x25,0x7d,0xa5,0x61,0xcb,0x64,0xce);
#endif


typedef struct _ISCSI_Path
{
    // iSCSI Unique connection id
    ULONGLONG UniqueConnectionId;
    #define ISCSI_Path_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_Path_UniqueConnectionId_ID 1

    // Estimated speed of the connection in MegaBits Per Second
    ULONGLONG EstimatedLinkSpeed;
    #define ISCSI_Path_EstimatedLinkSpeed_SIZE sizeof(ULONGLONG)
    #define ISCSI_Path_EstimatedLinkSpeed_ID 2

    // Weight assigned to the path
    ULONG PathWeight;
    #define ISCSI_Path_PathWeight_SIZE sizeof(ULONG)
    #define ISCSI_Path_PathWeight_ID 3

    // Flag set to 1 if the path is a primary path, 0 otherwise.
    ULONG PrimaryPath;
    #define ISCSI_Path_PrimaryPath_SIZE sizeof(ULONG)
    #define ISCSI_Path_PrimaryPath_ID 4


// Connected
#define CONNECTION_STATE_CONNECTED 1
// Disconnected
#define CONNECTION_STATE_DISCONNECTED 2
// Reconnecting
#define CONNECTION_STATE_RECONNECTING 3

    // Status of the path - connected, disconnected, reconnecting
    ULONG ConnectionStatus;
    #define ISCSI_Path_ConnectionStatus_SIZE sizeof(ULONG)
    #define ISCSI_Path_ConnectionStatus_ID 5

    // Flag set to 1 if TCP offload is supported for this connection, 0 otherwise.
    ULONG TCPOffLoadAvailable;
    #define ISCSI_Path_TCPOffLoadAvailable_SIZE sizeof(ULONG)
    #define ISCSI_Path_TCPOffLoadAvailable_ID 6

} ISCSI_Path, *PISCSI_Path;

#define ISCSI_Path_SIZE (FIELD_OFFSET(ISCSI_Path, TCPOffLoadAvailable) + ISCSI_Path_TCPOffLoadAvailable_SIZE)

// ISCSI_Supported_LB_Policies - ISCSI_Supported_LB_Policies
// iSCSI Initiator Load Balance Policies supported
#define ISCSI_Supported_LB_PoliciesGuid \
    { 0x749afe4d,0x804d,0x4662, { 0xa6,0x8b,0xdc,0x69,0x66,0x55,0xc7,0x9a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_Supported_LB_Policies_GUID, \
            0x749afe4d,0x804d,0x4662,0xa6,0x8b,0xdc,0x69,0x66,0x55,0xc7,0x9a);
#endif


typedef struct _ISCSI_Supported_LB_Policies
{
    // Id that is unique to this session within this adapter. 
    ULONGLONG UniqueSessionId;
    #define ISCSI_Supported_LB_Policies_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_Supported_LB_Policies_UniqueSessionId_ID 1


// Fail Over Only
#define MSiSCSI_LB_FAILOVER 1
// Round Robin
#define MSiSCSI_LB_ROUND_ROBIN 2
// Round Robin with Subset
#define MSiSCSI_LB_ROUND_ROBIN_WITH_SUBSET 3
// Dynamic Least Queue Depth
#define MSiSCSI_LB_DYN_LEAST_QUEUE_DEPTH 4
// Weighted Paths
#define MSiSCSI_LB_WEIGHTED_PATHS 5
// Vendor Specific
#define MSiSCSI_LB_VENDOR_SPECIFIC 6

    // Load Balance policy supported by the iSCSI Initiator
    ULONG LoadBalancePolicy;
    #define ISCSI_Supported_LB_Policies_LoadBalancePolicy_SIZE sizeof(ULONG)
    #define ISCSI_Supported_LB_Policies_LoadBalancePolicy_ID 2

    // Number of entries in MSiSCSI_Paths array
    ULONG iSCSI_PathCount;
    #define ISCSI_Supported_LB_Policies_iSCSI_PathCount_SIZE sizeof(ULONG)
    #define ISCSI_Supported_LB_Policies_iSCSI_PathCount_ID 3

    // Describes iSCSI Initiator Paths
    ISCSI_Path iSCSI_Paths[1];
    #define ISCSI_Supported_LB_Policies_iSCSI_Paths_ID 4

} ISCSI_Supported_LB_Policies, *PISCSI_Supported_LB_Policies;

// MSiSCSI_LB_Operations - MSiSCSI_LB_Operations
// Set iSCSI Initiator Load Balance Policies
#define MSiSCSI_LB_OperationsGuid \
    { 0xa7dfe761,0xb6bc,0x4490, { 0x91,0xb0,0xd9,0xcf,0x4a,0x24,0xd3,0x7c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_LB_Operations_GUID, \
            0xa7dfe761,0xb6bc,0x4490,0x91,0xb0,0xd9,0xcf,0x4a,0x24,0xd3,0x7c);
#endif

//
// Method id definitions for MSiSCSI_LB_Operations

//
// SetLoadBalancePolicy instructs the iSCSI Initiator what Load Balance
// policy to use.
//

#define SetLoadBalancePolicy     10
typedef struct _SetLoadBalancePolicy_IN
{
    // New Load Balance policy to be set
    ISCSI_Supported_LB_Policies LoadBalancePolicies;
    #define SetLoadBalancePolicy_IN_LoadBalancePolicies_SIZE sizeof(ISCSI_Supported_LB_Policies)
    #define SetLoadBalancePolicy_IN_LoadBalancePolicies_ID 1

} SetLoadBalancePolicy_IN, *PSetLoadBalancePolicy_IN;

#define SetLoadBalancePolicy_IN_SIZE (FIELD_OFFSET(SetLoadBalancePolicy_IN, LoadBalancePolicies) + SetLoadBalancePolicy_IN_LoadBalancePolicies_SIZE)

typedef struct _SetLoadBalancePolicy_OUT
{
    // Status of the operation
    ULONG Status;
    #define SetLoadBalancePolicy_OUT_Status_SIZE sizeof(ULONG)
    #define SetLoadBalancePolicy_OUT_Status_ID 2

} SetLoadBalancePolicy_OUT, *PSetLoadBalancePolicy_OUT;

#define SetLoadBalancePolicy_OUT_SIZE (FIELD_OFFSET(SetLoadBalancePolicy_OUT, Status) + SetLoadBalancePolicy_OUT_Status_SIZE)


// MSiSCSI_QueryLBPolicy - MSiSCSI_QueryLBPolicy
// Query Load Balance policy used by iSCSI Initiator

//
// MSiSCSI_QueryLBPolicy class is used to query the Initiator about
// the load balance policy that is currently used.
//

#define MSiSCSI_QueryLBPolicyGuid \
    { 0xe0aecaee,0xb311,0x426f, { 0xb6,0x7a,0x18,0xd5,0xe5,0x5d,0x09,0x96 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_QueryLBPolicy_GUID, \
            0xe0aecaee,0xb311,0x426f,0xb6,0x7a,0x18,0xd5,0xe5,0x5d,0x09,0x96);
#endif


typedef struct _MSiSCSI_QueryLBPolicy
{
    // Id that is globally unique to each instance of each adapter. Using the address of the Adapter Extension is a good idea.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_QueryLBPolicy_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QueryLBPolicy_UniqueAdapterId_ID 1

    // 
    ULONG Reserved;
    #define MSiSCSI_QueryLBPolicy_Reserved_SIZE sizeof(ULONG)
    #define MSiSCSI_QueryLBPolicy_Reserved_ID 2



    // Number of elements in LoadBalancePolicies array

    // Number of elements in LoadBalancePolicies array
    ULONG SessionCount;
    #define MSiSCSI_QueryLBPolicy_SessionCount_SIZE sizeof(ULONG)
    #define MSiSCSI_QueryLBPolicy_SessionCount_ID 3

    // Load Balance Policy that is currently being used by iSCSI Initiator - one element for each session on the adapter
    ISCSI_Supported_LB_Policies LoadBalancePolicies[1];
    #define MSiSCSI_QueryLBPolicy_LoadBalancePolicies_ID 4

} MSiSCSI_QueryLBPolicy, *PMSiSCSI_QueryLBPolicy;

// MSiSCSI_Eventlog - MSiSCSI_Eventlog
// iSCSI Eventlog generation event

//
// Miniports can fire this event to cause eventlog entries to be
// included in the system eventlog. This is useful as the iscsilog.h
// header has many iSCSI specific eventlog messages that are useful for
// troubleshooting, but can't be fired directly by a miniport. By
// firing this WMI event appropriately a miniport can cause a useful
// eventlog entry to be included in the system eventlog
//

#define MSiSCSI_EventlogGuid \
    { 0xe6b8552b,0x7c62,0x4c6e, { 0x99,0xeb,0x67,0xce,0x60,0x87,0x89,0x4c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_Eventlog_GUID, \
            0xe6b8552b,0x7c62,0x4c6e,0x99,0xeb,0x67,0xce,0x60,0x87,0x89,0x4c);
#endif


typedef struct _MSiSCSI_Eventlog
{
    // Type of eventlog message
    ULONG Type;
    #define MSiSCSI_Eventlog_Type_SIZE sizeof(ULONG)
    #define MSiSCSI_Eventlog_Type_ID 1

    // If zero then this event is not logged to system eventlog
    ULONG LogToEventlog;
    #define MSiSCSI_Eventlog_LogToEventlog_SIZE sizeof(ULONG)
    #define MSiSCSI_Eventlog_LogToEventlog_ID 2

    // Size of Additional Data
    ULONG Size;
    #define MSiSCSI_Eventlog_Size_SIZE sizeof(ULONG)
    #define MSiSCSI_Eventlog_Size_ID 3

    // Additional data to include in eventlog message, typically iSCSI Header
    UCHAR AdditionalData[1];
    #define MSiSCSI_Eventlog_AdditionalData_ID 4

} MSiSCSI_Eventlog, *PMSiSCSI_Eventlog;

// ISCSI_RedirectPortalInfo - ISCSI_RedirectPortalInfo
// iSCSI Redirect Portal Info
#define ISCSI_RedirectPortalInfoGuid \
    { 0xf6004ce6,0x9507,0x4d86, { 0xae,0x1e,0xe9,0xd6,0x4f,0x16,0x6f,0x2f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_RedirectPortalInfo_GUID, \
            0xf6004ce6,0x9507,0x4d86,0xae,0x1e,0xe9,0xd6,0x4f,0x16,0x6f,0x2f);
#endif


typedef struct _ISCSI_RedirectPortalInfo
{
    // A uniquely generated connection ID. Do not confuse this with CID.
    ULONGLONG UniqueConnectionId;
    #define ISCSI_RedirectPortalInfo_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_RedirectPortalInfo_UniqueConnectionId_ID 1

    // Original Target IP Address given in the login
    ISCSI_IP_Address OriginalIPAddr;
    #define ISCSI_RedirectPortalInfo_OriginalIPAddr_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_RedirectPortalInfo_OriginalIPAddr_ID 2

    // Original Target portal's socket number given in the login
    ULONG OriginalPort;
    #define ISCSI_RedirectPortalInfo_OriginalPort_SIZE sizeof(ULONG)
    #define ISCSI_RedirectPortalInfo_OriginalPort_ID 3

    // Redirected Target IP Address
    ISCSI_IP_Address RedirectedIPAddr;
    #define ISCSI_RedirectPortalInfo_RedirectedIPAddr_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_RedirectPortalInfo_RedirectedIPAddr_ID 4

    // Redirected Target portal's socket number
    ULONG RedirectedPort;
    #define ISCSI_RedirectPortalInfo_RedirectedPort_SIZE sizeof(ULONG)
    #define ISCSI_RedirectPortalInfo_RedirectedPort_ID 5

    // TRUE if login was redirected. RedirectedIPAddr and RedirectedPort are valid then.
    UCHAR Redirected;
    #define ISCSI_RedirectPortalInfo_Redirected_SIZE sizeof(UCHAR)
    #define ISCSI_RedirectPortalInfo_Redirected_ID 6

    // TRUE if the redirection is temporary. FALSE otherwise
    UCHAR TemporaryRedirect;
    #define ISCSI_RedirectPortalInfo_TemporaryRedirect_SIZE sizeof(UCHAR)
    #define ISCSI_RedirectPortalInfo_TemporaryRedirect_ID 7

} ISCSI_RedirectPortalInfo, *PISCSI_RedirectPortalInfo;

#define ISCSI_RedirectPortalInfo_SIZE (FIELD_OFFSET(ISCSI_RedirectPortalInfo, TemporaryRedirect) + ISCSI_RedirectPortalInfo_TemporaryRedirect_SIZE)

// ISCSI_RedirectSessionInfo - ISCSI_RedirectSessionInfo
// iSCSI Redirect Session Info
#define ISCSI_RedirectSessionInfoGuid \
    { 0xed60bc3f,0x3d56,0x42f0, { 0xb4,0xd0,0x81,0xdd,0x16,0xe2,0x85,0x15 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_RedirectSessionInfo_GUID, \
            0xed60bc3f,0x3d56,0x42f0,0xb4,0xd0,0x81,0xdd,0x16,0xe2,0x85,0x15);
#endif


typedef struct _ISCSI_RedirectSessionInfo
{
    // A uniquely generated session ID, it is the same id returned by the LoginToTarget method.  Do not confuse this with ISID or SSID.
    ULONGLONG UniqueSessionId;
    #define ISCSI_RedirectSessionInfo_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_RedirectSessionInfo_UniqueSessionId_ID 1

    // Target portal group tag for this Session 
    ULONG TargetPortalGroupTag;
    #define ISCSI_RedirectSessionInfo_TargetPortalGroupTag_SIZE sizeof(ULONG)
    #define ISCSI_RedirectSessionInfo_TargetPortalGroupTag_ID 2



    // Number of elements in RedirectPortalList array

    // Number of elements in RedirectPortalList array
    ULONG ConnectionCount;
    #define ISCSI_RedirectSessionInfo_ConnectionCount_SIZE sizeof(ULONG)
    #define ISCSI_RedirectSessionInfo_ConnectionCount_ID 3

    // Redirect portal info - one element for each connection in the session
    ISCSI_RedirectPortalInfo RedirectPortalList[1];
    #define ISCSI_RedirectSessionInfo_RedirectPortalList_ID 4

} ISCSI_RedirectSessionInfo, *PISCSI_RedirectSessionInfo;

// MSiSCSI_RedirectPortalInfoClass - MSiSCSI_RedirectPortalInfoClass
// iScsi Redirect Portal Information Class

//
//
// This class is recommended. 
//
// This class exposes portal information. It provides the original and 
// redirected target portal information for an iSCSI Connection.
//
// This class must be registered using PDO instance names with a single instance
//

#define MSiSCSI_RedirectPortalInfoClassGuid \
    { 0xdaf7f63a,0xf9ea,0x4869, { 0x87,0xe1,0xae,0x8a,0x7c,0x22,0x61,0xe2 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_RedirectPortalInfoClass_GUID, \
            0xdaf7f63a,0xf9ea,0x4869,0x87,0xe1,0xae,0x8a,0x7c,0x22,0x61,0xe2);
#endif


typedef struct _MSiSCSI_RedirectPortalInfoClass
{
    // Id that is globally unique for all instances of iSCSI initiators.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_RedirectPortalInfoClass_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_RedirectPortalInfoClass_UniqueAdapterId_ID 1

    // Number of elements in RedirectSessionInfo array
    ULONG SessionCount;
    #define MSiSCSI_RedirectPortalInfoClass_SessionCount_SIZE sizeof(ULONG)
    #define MSiSCSI_RedirectPortalInfoClass_SessionCount_ID 2

    // Variable length array of ISCSI_RedirectSessionInfo. SessionCount specifies the number of elements in the array. NOTE: this is a variable length array.
    ISCSI_RedirectSessionInfo RedirectSessionList[1];
    #define MSiSCSI_RedirectPortalInfoClass_RedirectSessionList_ID 3

} MSiSCSI_RedirectPortalInfoClass, *PMSiSCSI_RedirectPortalInfoClass;

// MSiSCSI_ManagementOperations - MSiSCSI_ManagementOperations


//
//
// This class is recommended.
//
// iSCSI management applications rely upon this
// class in order to interface with the adapter. Implement one instance
// per miniport instance (adapter). 
//
// This class must be registered using PDO instance names with a single instance.
//

#define MSiSCSI_ManagementOperationsGuid \
    { 0xb8d765f0,0x2d93,0x4da2, { 0x81,0x86,0xa1,0x87,0x62,0x2b,0x43,0x02 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_ManagementOperations_GUID, \
            0xb8d765f0,0x2d93,0x4da2,0x81,0x86,0xa1,0x87,0x62,0x2b,0x43,0x02);
#endif

//
// Method id definitions for MSiSCSI_ManagementOperations

//
// This method is recommended.
//
// Ping will perform ICMP ping requests to the destination address 
// and return the number of ping responses received. This is only supported
// by some HBA, use the ping command for the software initiator.
//

#define PingIPAddress     10
typedef struct _PingIPAddress_IN
{
    // Number of requests to send
    ULONG RequestCount;
    #define PingIPAddress_IN_RequestCount_SIZE sizeof(ULONG)
    #define PingIPAddress_IN_RequestCount_ID 1

    // Number of bytes in each request
    ULONG RequestSize;
    #define PingIPAddress_IN_RequestSize_SIZE sizeof(ULONG)
    #define PingIPAddress_IN_RequestSize_ID 2

    // Number of ms to wait for response
    ULONG Timeout;
    #define PingIPAddress_IN_Timeout_SIZE sizeof(ULONG)
    #define PingIPAddress_IN_Timeout_ID 3

    // IP address to ping
    ISCSI_IP_Address Address;
    #define PingIPAddress_IN_Address_SIZE sizeof(ISCSI_IP_Address)
    #define PingIPAddress_IN_Address_ID 4

} PingIPAddress_IN, *PPingIPAddress_IN;

#define PingIPAddress_IN_SIZE (FIELD_OFFSET(PingIPAddress_IN, Address) + PingIPAddress_IN_Address_SIZE)

typedef struct _PingIPAddress_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define PingIPAddress_OUT_Status_SIZE sizeof(ULONG)
    #define PingIPAddress_OUT_Status_ID 5

    // Number of responses received
    ULONG ResponsesReceived;
    #define PingIPAddress_OUT_ResponsesReceived_SIZE sizeof(ULONG)
    #define PingIPAddress_OUT_ResponsesReceived_ID 6

} PingIPAddress_OUT, *PPingIPAddress_OUT;

#define PingIPAddress_OUT_SIZE (FIELD_OFFSET(PingIPAddress_OUT, ResponsesReceived) + PingIPAddress_OUT_ResponsesReceived_SIZE)


#endif
