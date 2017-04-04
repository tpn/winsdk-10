#ifndef _iscsiop_h_
#define _iscsiop_h_

// MSiSCSI_Operations - MSiSCSI_Operations


//***************************************************************************
//
//  iscsiop.h
// 
//  Module: iSCSI Discovery api
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
// The iSCSI initiator service relies upon this
// class in order to interface with the adapter. Implement one instance
// per miniport instance (adapter). 
//
// This class must be registered using PDO instance names with a single instance.
//

#define MSiSCSI_OperationsGuid \
    { 0xea4d82bf,0x29da,0x4e12, { 0x80,0x0a,0xe5,0x43,0x79,0x64,0x46,0x2c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_Operations_GUID, \
            0xea4d82bf,0x29da,0x4e12,0x80,0x0a,0xe5,0x43,0x79,0x64,0x46,0x2c);
#endif

//
// Method id definitions for MSiSCSI_Operations

//
// This method is required.
//
// SendTargets instructs the adapter to use an existing discovery session
// with the target portal and issue the SendTargets command to it.
// SendTargetsText specifies the value for the SendTargets key in
// the PDU sent to the target.
//

#define SendTargets     10
typedef struct _SendTargets_IN
{
    // Unique Session ID on which to do send targets. This is the session ID returned from the LoginToTarget method.
    ULONGLONG UniqueSessionId;
    #define SendTargets_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define SendTargets_IN_UniqueSessionId_ID 1

    // SendTargets key text
    WCHAR SendTargetsText[223 + 1];
    #define SendTargets_IN_SendTargetsText_ID 2

} SendTargets_IN, *PSendTargets_IN;

typedef struct _SendTargets_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define SendTargets_OUT_Status_SIZE sizeof(ULONG)
    #define SendTargets_OUT_Status_ID 3

    // Number of bytes in SendTargets response
    ULONG ResponseSize;
    #define SendTargets_OUT_ResponseSize_SIZE sizeof(ULONG)
    #define SendTargets_OUT_ResponseSize_ID 4

    // Response to SendTargets in UTF8 characters. NOTE: This field is a variable length array
    UCHAR Response[1];
    #define SendTargets_OUT_Response_ID 5

} SendTargets_OUT, *PSendTargets_OUT;



//
// This method is required.
//
// LoginTarget instructs the adapter to perform a login to the target
// portal and esatablish a session with the target.
//
// Types of login sessions.
//     Discovery - a discovery session is used exclusively for SendTargets
//                 operations.
//
//     Informational - an informational session is a full featured session
//                     but the miniport should not report the devices on
//                     the target to the port driver since the devices 
//                     should not be exposed as local devices to Windows.
//                     Instead a subset of SCSI commands can be executed
//                     on the devices via other WMI methods. This allows
//                     applications to gather information about the devices
//                     without causing the corresponding Windows device
//                     driver stack to be loaded.
//
//     Data - a data session is a full featured session and the miniport
//            should report the devices on the target to the port driver.
//            In this way the corresponding driver stack will be loaded and
//            the device will be available to all applications.
//
//         The session id assigned to a session must remain constant for
//     the lifetime of a session. Reconnections due to async logout or
//     network event should not affect the value of the session id. Also
//     the session must be reported to the MSiSCSI_InitiatorSessionInfo
//     class.
//
//         Data and informational sessions have specific rules related to
//     how reconnections should be handled. If a session is disconnected due
//     to async logout or a network event then the initiator must periodically
//     retry logging back into the session until the session is either 
//     successfully reconnected or the initiator is called to
//     logout of the session. The period between retries is not mandated
//     though it is recommended that 5 seconds be a default value. Another
//     rule is that the miniport should not immediately call the port
//     driver to remove the devices on the target when a session is
//     disconnected due to a network event or async logout. If this were to
//     happen then the devices would disappear and no longer be available to
//     applications. Instead the miniport should maintain the availability
//     of the device by queueing requests and faking success for
//     INQUIRY and REPORT LUNS commands. It would need to do this for a 
//     period of time (60 seconds is recommended). If the session is 
//     reconnected before the end of that period then an application will
//     suffer no interruption in its work. If times runs out the miniport
//     should report the removal of the devices on the target to the port
//     driver. Note that a longer time might mean more requests being queued
//     and more system resources used. It is recommended that these value
//     be configurable.
//
typedef enum {
           // Discovery session is used for SendTargets.
    ISCSI_LOGINTARGET_DISCOVERY = 0,

           // Informational session is used for sending Scsi
           // Commands and should not cause LUNs to be reported
           // to the port driver
    ISCSI_LOGINTARGET_INFORMATIONAL = 1,

           // Data session is used for full operations
           // to a device and should cause LUNs to be reported
           // to the port driver
    ISCSI_LOGINTARGET_DATA = 2

} LOGINSESSIONTYPE, *PLOGINSESSIONTYPE;

#define LoginToTarget     30
typedef struct _LoginToTarget_IN
{
    // Port number corresponding to port in which to initiate the session
    ULONG PortNumber;
    #define LoginToTarget_IN_PortNumber_SIZE sizeof(ULONG)
    #define LoginToTarget_IN_PortNumber_ID 1


//
// Options that affect how login is performed. See ISCSI_LoginOptions
//

    // 
    ISCSI_LoginOptions LoginOptions;
    #define LoginToTarget_IN_LoginOptions_SIZE sizeof(ISCSI_LoginOptions)
    #define LoginToTarget_IN_LoginOptions_ID 2

    // **typedef**Specifies the session type - either discovery, informational or data
    ULONG SessionType;
    #define LoginToTarget_IN_SessionType_SIZE sizeof(ULONG)
    #define LoginToTarget_IN_SessionType_ID 3

    // Security flags
    ULONGLONG SecurityFlags;
    #define LoginToTarget_IN_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define LoginToTarget_IN_SecurityFlags_ID 4

    // On target portal to use for initial connection. 
    ISCSI_TargetPortal TargetPortal;
    #define LoginToTarget_IN_TargetPortal_SIZE sizeof(ISCSI_TargetPortal)
    #define LoginToTarget_IN_TargetPortal_ID 5

    // Size in bytes of authentication Username
    ULONG UsernameSize;
    #define LoginToTarget_IN_UsernameSize_SIZE sizeof(ULONG)
    #define LoginToTarget_IN_UsernameSize_ID 6

    // Size in bytes of authentication Password
    ULONG PasswordSize;
    #define LoginToTarget_IN_PasswordSize_SIZE sizeof(ULONG)
    #define LoginToTarget_IN_PasswordSize_ID 7

    // Size in bytes of preshared key associated with target ip address
    ULONG KeySize;
    #define LoginToTarget_IN_KeySize_SIZE sizeof(ULONG)
    #define LoginToTarget_IN_KeySize_ID 8

    // The service will pass an id that is guaranteed to be gloally unique over all initiators for use when connecting to this target. It may be useful as part of the the ISID
    USHORT UniqueIdForISID;
    #define LoginToTarget_IN_UniqueIdForISID_SIZE sizeof(USHORT)
    #define LoginToTarget_IN_UniqueIdForISID_ID 9

    // If TRUE then this login should be persisted in non-volatile memory.  The adapter will then automatically login to the target using the information passed each time the device driver loads. The driver should not attempt to login, just save the information for login later.
    BOOLEAN PersistentLogin;
    #define LoginToTarget_IN_PersistentLogin_SIZE sizeof(BOOLEAN)
    #define LoginToTarget_IN_PersistentLogin_ID 10

    // The InitiatorNode specifies the iSCSI name of the initiator node to use for the connection. If empty, then the HBA can choose any initiator node
    WCHAR InitiatorNode[223 + 1];
    #define LoginToTarget_IN_InitiatorNode_ID 11

    // The InitiatorAlias specifies the iSCSI alias of the initiator node to use for the connection.
    WCHAR InitiatorAlias[255 + 1];
    #define LoginToTarget_IN_InitiatorAlias_ID 12

    // TargetName specifies the iSCSI target name to which a session should be established.
    WCHAR TargetName[223 + 1];
    #define LoginToTarget_IN_TargetName_ID 13

    // Target mappings. If no mappings are specified then the initiator can use any mappings for the LUNs. If mappings are specified then any LUN on the target that is not specified in the mappings should not be exposed to the port driver.
    ISCSI_TargetMapping Mappings;
    #define LoginToTarget_IN_Mappings_SIZE sizeof(ISCSI_TargetMapping)
    #define LoginToTarget_IN_Mappings_ID 14

    // **field**Preshared key associated with target ip address. NOTE: This field is a variable length array, the field that follows this field starts immediately after the end of this field subject to appropriate padding. All fields after this are commented out in the header.
    UCHAR Key[1];
    #define LoginToTarget_IN_Key_ID 15

    // Authentication Username, for CHAP this is the CHAP Name (CHAP_N) to use when authenticating the target. NOTE: This field is a variable length array, the field that follows this field starts immediately after the end of this field subject to appropriate padding.
//  UCHAR Username[1];
    #define LoginToTarget_IN_Username_ID 16

    // Authentication Password, for CHAP this is the shared secret to use when generating the respose to the target challange. NOTE: This field is a variable length array.
//  UCHAR Password[1];
    #define LoginToTarget_IN_Password_ID 17

} LoginToTarget_IN, *PLoginToTarget_IN;

typedef struct _LoginToTarget_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define LoginToTarget_OUT_Status_SIZE sizeof(ULONG)
    #define LoginToTarget_OUT_Status_ID 18

    // Unique Session ID. This ID is used to identify this session in subsqeuent method calls. The unique session ID can never change until the session is logged out.
    ULONGLONG UniqueSessionId;
    #define LoginToTarget_OUT_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define LoginToTarget_OUT_UniqueSessionId_ID 19

    // Unique Connection ID
    ULONGLONG UniqueConnectionId;
    #define LoginToTarget_OUT_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define LoginToTarget_OUT_UniqueConnectionId_ID 20

} LoginToTarget_OUT, *PLoginToTarget_OUT;

#define LoginToTarget_OUT_SIZE (FIELD_OFFSET(LoginToTarget_OUT, UniqueConnectionId) + LoginToTarget_OUT_UniqueConnectionId_SIZE)


//
// This method is required.
//
// This method causes a logout from the target and removal of all LUNs
// exposed on that target. If the session is not connected to the target
// then the driver should stop trying to reconnect.
//


#define LogoutFromTarget     31
typedef struct _LogoutFromTarget_IN
{
    // Unique Session ID. This is the session ID that was returned by the driver when the target was logged in.
    ULONGLONG UniqueSessionId;
    #define LogoutFromTarget_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define LogoutFromTarget_IN_UniqueSessionId_ID 1

} LogoutFromTarget_IN, *PLogoutFromTarget_IN;

#define LogoutFromTarget_IN_SIZE (FIELD_OFFSET(LogoutFromTarget_IN, UniqueSessionId) + LogoutFromTarget_IN_UniqueSessionId_SIZE)

typedef struct _LogoutFromTarget_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define LogoutFromTarget_OUT_Status_SIZE sizeof(ULONG)
    #define LogoutFromTarget_OUT_Status_ID 2

} LogoutFromTarget_OUT, *PLogoutFromTarget_OUT;

#define LogoutFromTarget_OUT_SIZE (FIELD_OFFSET(LogoutFromTarget_OUT, Status) + LogoutFromTarget_OUT_Status_SIZE)


//
// This method is required to exist, but the functionality may not be implemented.
// If the functionality is not implemented the driver should return an error
//
// This method causes an additional connection to be established to a target
// over a session
//


#define AddConnectionToSession     32
typedef struct _AddConnectionToSession_IN
{
    // Unique Adapter specific ID. This is the UniqueAdapterId returned by the MSiSCSI_HBAInfo class.
    ULONGLONG UniqueAdapterId;
    #define AddConnectionToSession_IN_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define AddConnectionToSession_IN_UniqueAdapterId_ID 1

    // Unique Session ID. This is the unique session id returned when the target was logged in.
    ULONGLONG UniqueSessionId;
    #define AddConnectionToSession_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define AddConnectionToSession_IN_UniqueSessionId_ID 2

    // Security flags
    ULONGLONG SecurityFlags;
    #define AddConnectionToSession_IN_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define AddConnectionToSession_IN_SecurityFlags_ID 3

    // Port number corresponding to port from which to initiate the connection
    ULONG PortNumber;
    #define AddConnectionToSession_IN_PortNumber_SIZE sizeof(ULONG)
    #define AddConnectionToSession_IN_PortNumber_ID 4


//
// Options that affect how login is performed. See ISCSI_LoginOptions
//

    // 
    ISCSI_LoginOptions LoginOptions;
    #define AddConnectionToSession_IN_LoginOptions_SIZE sizeof(ISCSI_LoginOptions)
    #define AddConnectionToSession_IN_LoginOptions_ID 5

    // Target portal to use for additional connection. 
    ISCSI_TargetPortal TargetPortal;
    #define AddConnectionToSession_IN_TargetPortal_SIZE sizeof(ISCSI_TargetPortal)
    #define AddConnectionToSession_IN_TargetPortal_ID 6

    // Size in bytes of authentication Username.
    ULONG UsernameSize;
    #define AddConnectionToSession_IN_UsernameSize_SIZE sizeof(ULONG)
    #define AddConnectionToSession_IN_UsernameSize_ID 7

    // Size in bytes of authentication Password.
    ULONG PasswordSize;
    #define AddConnectionToSession_IN_PasswordSize_SIZE sizeof(ULONG)
    #define AddConnectionToSession_IN_PasswordSize_ID 8

    // Size in bytes of preshared key associated with target ip address.
    ULONG KeySize;
    #define AddConnectionToSession_IN_KeySize_SIZE sizeof(ULONG)
    #define AddConnectionToSession_IN_KeySize_ID 9

    // **fields** Preshared key associated with target ip address. NOTE: This field is a variable length array, the field that follows this field starts immediately after the end of this field subject to appropriate padding. All fields after this are commented out in the header.
    UCHAR Key[1];
    #define AddConnectionToSession_IN_Key_ID 10

    // Authentication Username, for CHAP this is the CHAP_N value to use when authenticating the target. NOTE: This field is a variable length array, the field that follows this field starts immediately after the end of this field subject to appropriate padding.
//  UCHAR Username[1];
    #define AddConnectionToSession_IN_Username_ID 11

    // Authentication Password, for CHAP this is the shared secret to use when generating the respose to the target challange. NOTE: This field is a variable length array.
//  UCHAR Password[1];
    #define AddConnectionToSession_IN_Password_ID 12

} AddConnectionToSession_IN, *PAddConnectionToSession_IN;

typedef struct _AddConnectionToSession_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define AddConnectionToSession_OUT_Status_SIZE sizeof(ULONG)
    #define AddConnectionToSession_OUT_Status_ID 13

    // Unique Connection ID
    ULONGLONG UniqueConnectionId;
    #define AddConnectionToSession_OUT_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define AddConnectionToSession_OUT_UniqueConnectionId_ID 14

} AddConnectionToSession_OUT, *PAddConnectionToSession_OUT;

#define AddConnectionToSession_OUT_SIZE (FIELD_OFFSET(AddConnectionToSession_OUT, UniqueConnectionId) + AddConnectionToSession_OUT_UniqueConnectionId_SIZE)


//
// This method is required.
//
// This method will remove a target from the list of persistent logins
// maintained by the adapter.
//


#define RemovePersistentLogin     33
typedef struct _RemovePersistentLogin_IN
{
    // Port number corresponding to port from which to initiate the session
    ULONG PortNumber;
    #define RemovePersistentLogin_IN_PortNumber_SIZE sizeof(ULONG)
    #define RemovePersistentLogin_IN_PortNumber_ID 1

    // TargetName specifies the iSCSI target name which should be removed.
    WCHAR TargetName[223 + 1];
    #define RemovePersistentLogin_IN_TargetName_ID 2

    // Target portal. If an empty target portal is specified then all persistent logins to this target name for all portals are removed. 
    ISCSI_TargetPortal TargetPortal;
    #define RemovePersistentLogin_IN_TargetPortal_SIZE sizeof(ISCSI_TargetPortal)
    #define RemovePersistentLogin_IN_TargetPortal_ID 3

} RemovePersistentLogin_IN, *PRemovePersistentLogin_IN;

#define RemovePersistentLogin_IN_SIZE (FIELD_OFFSET(RemovePersistentLogin_IN, TargetPortal) + RemovePersistentLogin_IN_TargetPortal_SIZE)

typedef struct _RemovePersistentLogin_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define RemovePersistentLogin_OUT_Status_SIZE sizeof(ULONG)
    #define RemovePersistentLogin_OUT_Status_ID 4

} RemovePersistentLogin_OUT, *PRemovePersistentLogin_OUT;

#define RemovePersistentLogin_OUT_SIZE (FIELD_OFFSET(RemovePersistentLogin_OUT, Status) + RemovePersistentLogin_OUT_Status_SIZE)


//
// This method is required.
//
// This method will remove a connection from a session. 
//    Note that it is specifically disallowed to remove the last
//    connection from a session, use LogoutIScsiTarget instead
//


#define RemoveConnectionFromSession     34
typedef struct _RemoveConnectionFromSession_IN
{
    // Unique Session ID
    ULONGLONG UniqueSessionId;
    #define RemoveConnectionFromSession_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define RemoveConnectionFromSession_IN_UniqueSessionId_ID 1

    // Unique Connection ID
    ULONGLONG UniqueConnectionId;
    #define RemoveConnectionFromSession_IN_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define RemoveConnectionFromSession_IN_UniqueConnectionId_ID 2

} RemoveConnectionFromSession_IN, *PRemoveConnectionFromSession_IN;

#define RemoveConnectionFromSession_IN_SIZE (FIELD_OFFSET(RemoveConnectionFromSession_IN, UniqueConnectionId) + RemoveConnectionFromSession_IN_UniqueConnectionId_SIZE)

typedef struct _RemoveConnectionFromSession_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define RemoveConnectionFromSession_OUT_Status_SIZE sizeof(ULONG)
    #define RemoveConnectionFromSession_OUT_Status_ID 3

} RemoveConnectionFromSession_OUT, *PRemoveConnectionFromSession_OUT;

#define RemoveConnectionFromSession_OUT_SIZE (FIELD_OFFSET(RemoveConnectionFromSession_OUT, Status) + RemoveConnectionFromSession_OUT_Status_SIZE)


//
// This method is required.
//
// This method causes a SCSI INQUIRY CDB to be sent to a target. The method
// should return success if the SCSI request succeeded. If the SCSI request
// failed the Status returned should be ISDSC_SCSI_REQUEST_FAILED and the
// ScsiStatus and SenseBuffer fields returned.
//


#define ScsiInquiry     50
typedef struct _ScsiInquiry_IN
{
    // Unique Session ID
    ULONGLONG UniqueSessionId;
    #define ScsiInquiry_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ScsiInquiry_IN_UniqueSessionId_ID 1

    // Logical unit to which to send INQUIRY
    ULONGLONG Lun;
    #define ScsiInquiry_IN_Lun_SIZE sizeof(ULONGLONG)
    #define ScsiInquiry_IN_Lun_ID 2

    // Flags to use for inquiry
    UCHAR InquiryFlags;
    #define ScsiInquiry_IN_InquiryFlags_SIZE sizeof(UCHAR)
    #define ScsiInquiry_IN_InquiryFlags_ID 3

    // Page code
    UCHAR PageCode;
    #define ScsiInquiry_IN_PageCode_SIZE sizeof(UCHAR)
    #define ScsiInquiry_IN_PageCode_ID 4

} ScsiInquiry_IN, *PScsiInquiry_IN;

#define ScsiInquiry_IN_SIZE (FIELD_OFFSET(ScsiInquiry_IN, PageCode) + ScsiInquiry_IN_PageCode_SIZE)

typedef struct _ScsiInquiry_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define ScsiInquiry_OUT_Status_SIZE sizeof(ULONG)
    #define ScsiInquiry_OUT_Status_ID 5

    // Size of the response buffer in bytes
    ULONG ResponseBufferSize;
    #define ScsiInquiry_OUT_ResponseBufferSize_SIZE sizeof(ULONG)
    #define ScsiInquiry_OUT_ResponseBufferSize_ID 6

    // SCSI Status result
    UCHAR ScsiStatus;
    #define ScsiInquiry_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define ScsiInquiry_OUT_ScsiStatus_ID 7

    // Sense buffer returned if SCSI error occured
    UCHAR SenseBuffer[18];
    #define ScsiInquiry_OUT_SenseBuffer_SIZE sizeof(UCHAR[18])
    #define ScsiInquiry_OUT_SenseBuffer_ID 8

    // Response to the SCSI CDB. NOTE: This field is a variable length array.
    UCHAR ResponseBuffer[1];
    #define ScsiInquiry_OUT_ResponseBuffer_ID 9

} ScsiInquiry_OUT, *PScsiInquiry_OUT;


//
// This method is required.
//
// This method causes a READ CAPACITY CDB to be sent to a target. The method
// should return success if the SCSI request succeeded. If the SCSI request
// failed the Status returned should be ISDSC_SCSI_REQUEST_FAILED and the
// ScsiStatus and SenseBuffer fields returned.
//


#define ScsiReadCapacity     51
typedef struct _ScsiReadCapacity_IN
{
    // Unique Session ID
    ULONGLONG UniqueSessionId;
    #define ScsiReadCapacity_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ScsiReadCapacity_IN_UniqueSessionId_ID 1

    // Logical unit to which to send READ CAPACITY
    ULONGLONG Lun;
    #define ScsiReadCapacity_IN_Lun_SIZE sizeof(ULONGLONG)
    #define ScsiReadCapacity_IN_Lun_ID 2

} ScsiReadCapacity_IN, *PScsiReadCapacity_IN;

#define ScsiReadCapacity_IN_SIZE (FIELD_OFFSET(ScsiReadCapacity_IN, Lun) + ScsiReadCapacity_IN_Lun_SIZE)

typedef struct _ScsiReadCapacity_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define ScsiReadCapacity_OUT_Status_SIZE sizeof(ULONG)
    #define ScsiReadCapacity_OUT_Status_ID 3

    // Size of the response buffer in bytes
    ULONG ResponseBufferSize;
    #define ScsiReadCapacity_OUT_ResponseBufferSize_SIZE sizeof(ULONG)
    #define ScsiReadCapacity_OUT_ResponseBufferSize_ID 4

    // SCSI Status result
    UCHAR ScsiStatus;
    #define ScsiReadCapacity_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define ScsiReadCapacity_OUT_ScsiStatus_ID 5

    // Sense buffer returned on SCSI error
    UCHAR SenseBuffer[18];
    #define ScsiReadCapacity_OUT_SenseBuffer_SIZE sizeof(UCHAR[18])
    #define ScsiReadCapacity_OUT_SenseBuffer_ID 6

    // Response to the SCSI CDB. NOTE: This field is a variable length array.
    UCHAR ResponseBuffer[1];
    #define ScsiReadCapacity_OUT_ResponseBuffer_ID 7

} ScsiReadCapacity_OUT, *PScsiReadCapacity_OUT;


//
// This method is required.
//
// This method causes a REPORT LUNS CDB to be sent to a target. The method
// should return success if the SCSI request succeeded. If the SCSI request
// failed the Status returned should be ISDSC_SCSI_REQUEST_FAILED and the
// ScsiStatus and SenseBuffer fields returned.
//


#define ScsiReportLuns     52
typedef struct _ScsiReportLuns_IN
{
    // Unique Session ID
    ULONGLONG UniqueSessionId;
    #define ScsiReportLuns_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ScsiReportLuns_IN_UniqueSessionId_ID 1

} ScsiReportLuns_IN, *PScsiReportLuns_IN;

#define ScsiReportLuns_IN_SIZE (FIELD_OFFSET(ScsiReportLuns_IN, UniqueSessionId) + ScsiReportLuns_IN_UniqueSessionId_SIZE)

typedef struct _ScsiReportLuns_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define ScsiReportLuns_OUT_Status_SIZE sizeof(ULONG)
    #define ScsiReportLuns_OUT_Status_ID 2

    // Size of the response buffer in bytes
    ULONG ResponseBufferSize;
    #define ScsiReportLuns_OUT_ResponseBufferSize_SIZE sizeof(ULONG)
    #define ScsiReportLuns_OUT_ResponseBufferSize_ID 3

    // SCSI Status result
    UCHAR ScsiStatus;
    #define ScsiReportLuns_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define ScsiReportLuns_OUT_ScsiStatus_ID 4

    // Sense buffer returned on SCSI error
    UCHAR SenseBuffer[18];
    #define ScsiReportLuns_OUT_SenseBuffer_SIZE sizeof(UCHAR[18])
    #define ScsiReportLuns_OUT_SenseBuffer_ID 5

    // Response to the SCSI CDB. NOTE: This field is a variable length array.
    UCHAR ResponseBuffer[1];
    #define ScsiReportLuns_OUT_ResponseBuffer_ID 6

} ScsiReportLuns_OUT, *PScsiReportLuns_OUT;


//
// This method is required.
//
// This method establishes a CHAP shared secret that is assigned to 
// this initiator and should be used when verifying the CHAP response
// to a challange sent by the initiator. Note that the shared secret
// that is used to generate the CHAP response to a target's challange
// is passed in the LoginToTarget method
//


#define SetCHAPSharedSecret     71
typedef struct _SetCHAPSharedSecret_IN
{
    // Size of Chap shared secret in bytes
    ULONG SharedSecretSize;
    #define SetCHAPSharedSecret_IN_SharedSecretSize_SIZE sizeof(ULONG)
    #define SetCHAPSharedSecret_IN_SharedSecretSize_ID 1

    // CHAP shared secret. NOTE: This field is a variable length array.
    UCHAR SharedSecret[1];
    #define SetCHAPSharedSecret_IN_SharedSecret_ID 2

} SetCHAPSharedSecret_IN, *PSetCHAPSharedSecret_IN;

typedef struct _SetCHAPSharedSecret_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define SetCHAPSharedSecret_OUT_Status_SIZE sizeof(ULONG)
    #define SetCHAPSharedSecret_OUT_Status_ID 3

} SetCHAPSharedSecret_OUT, *PSetCHAPSharedSecret_OUT;

#define SetCHAPSharedSecret_OUT_SIZE (FIELD_OFFSET(SetCHAPSharedSecret_OUT, Status) + SetCHAPSharedSecret_OUT_Status_SIZE)


//
// This method is required.
//
// This method establishes a RADIUS shared secret that is assigned to 
// this initiator and should be used when authenticating oneself
// to the RADIUS server. 
//


#define SetRADIUSSharedSecret     72
typedef struct _SetRADIUSSharedSecret_IN
{
    // Size of RADIUS shared secret in bytes
    ULONG SharedSecretSize;
    #define SetRADIUSSharedSecret_IN_SharedSecretSize_SIZE sizeof(ULONG)
    #define SetRADIUSSharedSecret_IN_SharedSecretSize_ID 1

    // RADIUS shared secret. NOTE: This field is a variable length array.
    UCHAR SharedSecret[1];
    #define SetRADIUSSharedSecret_IN_SharedSecret_ID 2

} SetRADIUSSharedSecret_IN, *PSetRADIUSSharedSecret_IN;

typedef struct _SetRADIUSSharedSecret_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define SetRADIUSSharedSecret_OUT_Status_SIZE sizeof(ULONG)
    #define SetRADIUSSharedSecret_OUT_Status_ID 3

} SetRADIUSSharedSecret_OUT, *PSetRADIUSSharedSecret_OUT;

#define SetRADIUSSharedSecret_OUT_SIZE (FIELD_OFFSET(SetRADIUSSharedSecret_OUT, Status) + SetRADIUSSharedSecret_OUT_Status_SIZE)


//
// This method is optional and does not need to be implemented.
//
// This method informs the initiator that an initiator node name is no
// longer in use.
//


#define DeleteInitiatorNodeName     91
typedef struct _DeleteInitiatorNodeName_IN
{
    // Initiator name that is deleted.
    WCHAR DeletedInitiatorName[223 + 1];
    #define DeleteInitiatorNodeName_IN_DeletedInitiatorName_ID 1

} DeleteInitiatorNodeName_IN, *PDeleteInitiatorNodeName_IN;

typedef struct _DeleteInitiatorNodeName_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define DeleteInitiatorNodeName_OUT_Status_SIZE sizeof(ULONG)
    #define DeleteInitiatorNodeName_OUT_Status_ID 2

} DeleteInitiatorNodeName_OUT, *PDeleteInitiatorNodeName_OUT;

#define DeleteInitiatorNodeName_OUT_SIZE (FIELD_OFFSET(DeleteInitiatorNodeName_OUT, Status) + DeleteInitiatorNodeName_OUT_Status_SIZE)


//
// This method is optional and does not need to be implemented.
//
// This method informs the initiator that a new initiator node name is 
// begin to be in use//


#define SetInitiatorNodeName     92
typedef struct _SetInitiatorNodeName_IN
{
    // New initiator name.
    WCHAR CreatedInitiatorName[223 + 1];
    #define SetInitiatorNodeName_IN_CreatedInitiatorName_ID 1

} SetInitiatorNodeName_IN, *PSetInitiatorNodeName_IN;

typedef struct _SetInitiatorNodeName_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define SetInitiatorNodeName_OUT_Status_SIZE sizeof(ULONG)
    #define SetInitiatorNodeName_OUT_Status_ID 2

} SetInitiatorNodeName_OUT, *PSetInitiatorNodeName_OUT;

#define SetInitiatorNodeName_OUT_SIZE (FIELD_OFFSET(SetInitiatorNodeName_OUT, Status) + SetInitiatorNodeName_OUT_Status_SIZE)


//
// This method is optional and does not need to be implemented.
//
// This method adds an iSNS server to the list of iSNS servers the HBA
// should manage
//


#define AddiSNSServer     101
typedef struct _AddiSNSServer_IN
{
    // iSNS Server Name
    WCHAR iSNSServerName[223 + 1];
    #define AddiSNSServer_IN_iSNSServerName_ID 1

} AddiSNSServer_IN, *PAddiSNSServer_IN;

typedef struct _AddiSNSServer_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define AddiSNSServer_OUT_Status_SIZE sizeof(ULONG)
    #define AddiSNSServer_OUT_Status_ID 2

} AddiSNSServer_OUT, *PAddiSNSServer_OUT;

#define AddiSNSServer_OUT_SIZE (FIELD_OFFSET(AddiSNSServer_OUT, Status) + AddiSNSServer_OUT_Status_SIZE)


//
// This method is optional and does not need to be implemented.
//
// This method removes an iSNS server from the list of iSNS servers the HBA
// should manage
//


#define RemoveiSNSServer     102
typedef struct _RemoveiSNSServer_IN
{
    // iSNS Server Name
    WCHAR iSNSServerName[223 + 1];
    #define RemoveiSNSServer_IN_iSNSServerName_ID 1

} RemoveiSNSServer_IN, *PRemoveiSNSServer_IN;

typedef struct _RemoveiSNSServer_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define RemoveiSNSServer_OUT_Status_SIZE sizeof(ULONG)
    #define RemoveiSNSServer_OUT_Status_ID 2

} RemoveiSNSServer_OUT, *PRemoveiSNSServer_OUT;

#define RemoveiSNSServer_OUT_SIZE (FIELD_OFFSET(RemoveiSNSServer_OUT, Status) + RemoveiSNSServer_OUT_Status_SIZE)


//
// This method is optional and does not need to be implemented.
//
// This method adds a RADIUS server to the list of RADIUS servers the initiator/HBA
// should manage
//


#define AddRADIUSServer     103
typedef struct _AddRADIUSServer_IN
{
    // RADIUS Server Address
    ISCSI_IP_Address RADIUSIPAddress;
    #define AddRADIUSServer_IN_RADIUSIPAddress_SIZE sizeof(ISCSI_IP_Address)
    #define AddRADIUSServer_IN_RADIUSIPAddress_ID 1

} AddRADIUSServer_IN, *PAddRADIUSServer_IN;

#define AddRADIUSServer_IN_SIZE (FIELD_OFFSET(AddRADIUSServer_IN, RADIUSIPAddress) + AddRADIUSServer_IN_RADIUSIPAddress_SIZE)

typedef struct _AddRADIUSServer_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define AddRADIUSServer_OUT_Status_SIZE sizeof(ULONG)
    #define AddRADIUSServer_OUT_Status_ID 2

} AddRADIUSServer_OUT, *PAddRADIUSServer_OUT;

#define AddRADIUSServer_OUT_SIZE (FIELD_OFFSET(AddRADIUSServer_OUT, Status) + AddRADIUSServer_OUT_Status_SIZE)


//
// This method is optional and does not need to be implemented.
//
// This method removes a RADIUS server from the list of RADIUS servers the initiator/HBA
// should manage
//


#define RemoveRADIUSServer     104
typedef struct _RemoveRADIUSServer_IN
{
    // RADIUS Server Address
    ISCSI_IP_Address RADIUSIPAddress;
    #define RemoveRADIUSServer_IN_RADIUSIPAddress_SIZE sizeof(ISCSI_IP_Address)
    #define RemoveRADIUSServer_IN_RADIUSIPAddress_ID 1

} RemoveRADIUSServer_IN, *PRemoveRADIUSServer_IN;

#define RemoveRADIUSServer_IN_SIZE (FIELD_OFFSET(RemoveRADIUSServer_IN, RADIUSIPAddress) + RemoveRADIUSServer_IN_RADIUSIPAddress_SIZE)

typedef struct _RemoveRADIUSServer_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define RemoveRADIUSServer_OUT_Status_SIZE sizeof(ULONG)
    #define RemoveRADIUSServer_OUT_Status_ID 2

} RemoveRADIUSServer_OUT, *PRemoveRADIUSServer_OUT;

#define RemoveRADIUSServer_OUT_SIZE (FIELD_OFFSET(RemoveRADIUSServer_OUT, Status) + RemoveRADIUSServer_OUT_Status_SIZE)


// ISCSI_Persistent_Login - ISCSI_Persistent_Login
// Persistent Target login
#define ISCSI_Persistent_LoginGuid \
    { 0x1ac62a5d,0xa418,0x4c15, { 0x96,0xbd,0x2c,0x3a,0x9d,0xb8,0xc8,0xca } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_Persistent_Login_GUID, \
            0x1ac62a5d,0xa418,0x4c15,0x96,0xbd,0x2c,0x3a,0x9d,0xb8,0xc8,0xca);
#endif


typedef struct _ISCSI_Persistent_Login
{
    // Name of the target for persistent login
    WCHAR TargetName[223 + 1];
    #define ISCSI_Persistent_Login_TargetName_ID 1

    // Security flags
    ULONGLONG SecurityFlags;
    #define ISCSI_Persistent_Login_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define ISCSI_Persistent_Login_SecurityFlags_ID 2

    // Port number on which to perform the login
    ULONG InitiatorPortNumber;
    #define ISCSI_Persistent_Login_InitiatorPortNumber_SIZE sizeof(ULONG)
    #define ISCSI_Persistent_Login_InitiatorPortNumber_ID 3

    // Number of bytes in username
    ULONG UsernameSize;
    #define ISCSI_Persistent_Login_UsernameSize_SIZE sizeof(ULONG)
    #define ISCSI_Persistent_Login_UsernameSize_ID 4

    // TRUE if informational session
    BOOLEAN IsInformationalSession;
    #define ISCSI_Persistent_Login_IsInformationalSession_SIZE sizeof(BOOLEAN)
    #define ISCSI_Persistent_Login_IsInformationalSession_ID 5

    // ISID that the persistent login will use for login
    USHORT UniqueIdForISID;
    #define ISCSI_Persistent_Login_UniqueIdForISID_SIZE sizeof(USHORT)
    #define ISCSI_Persistent_Login_UniqueIdForISID_ID 6

    // Portal to use for initial connection
    ISCSI_TargetPortal TargetPortal;
    #define ISCSI_Persistent_Login_TargetPortal_SIZE sizeof(ISCSI_TargetPortal)
    #define ISCSI_Persistent_Login_TargetPortal_ID 7

    // Login options
    ISCSI_LoginOptions LoginOptions;
    #define ISCSI_Persistent_Login_LoginOptions_SIZE sizeof(ISCSI_LoginOptions)
    #define ISCSI_Persistent_Login_LoginOptions_ID 8

    // Target mappings
    ISCSI_TargetMapping TargetMapping;
    #define ISCSI_Persistent_Login_TargetMapping_SIZE sizeof(ISCSI_TargetMapping)
    #define ISCSI_Persistent_Login_TargetMapping_ID 9

    // Authentication Username, for CHAP this is the CHAP Name (CHAP_N) when authenticating the target. NOTE: This field is a variable length array.
    UCHAR Username[1];
    #define ISCSI_Persistent_Login_Username_ID 10

} ISCSI_Persistent_Login, *PISCSI_Persistent_Login;

// MSiSCSI_PersistentLogins - MSiSCSI_PersistentLogins

//
// This class is required.
//
// This class returns the list of persistent target logins. A persistent
// target login is one where the initiator must login to the 
// target immediately upon loading so that the device is available 
// early in boot
//

#define MSiSCSI_PersistentLoginsGuid \
    { 0x420512d9,0x0537,0x4c67, { 0xa7,0x79,0x84,0xba,0x7b,0x29,0xce,0x9f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_PersistentLogins_GUID, \
            0x420512d9,0x0537,0x4c67,0xa7,0x79,0x84,0xba,0x7b,0x29,0xce,0x9f);
#endif


typedef struct _MSiSCSI_PersistentLogins
{
    // Number of persistent logins
    ULONG PersistentLoginCount;
    #define MSiSCSI_PersistentLogins_PersistentLoginCount_SIZE sizeof(ULONG)
    #define MSiSCSI_PersistentLogins_PersistentLoginCount_ID 1

    // Reserved
    ULONG Reserved;
    #define MSiSCSI_PersistentLogins_Reserved_SIZE sizeof(ULONG)
    #define MSiSCSI_PersistentLogins_Reserved_ID 2

    // Array of PersistentLoginCount ISCSI_Persistent_Login structures. NOTE: This field is a variable length array.
    ISCSI_Persistent_Login PersistentLogins[1];
    #define MSiSCSI_PersistentLogins_PersistentLogins_ID 3

} MSiSCSI_PersistentLogins, *PMSiSCSI_PersistentLogins;

// MSiSCSI_TargetMappings - MSiSCSI_TargetMappings
// Target mappings for iSCSI LUNs

//
// This class is required.
//
// This class returns the list of current OS mappings for iSCSI LUNs
// The iSCSI initiator service relies upon this
// class in order to interface with your HBA. Implement one instance
// per adapter. This class must be registered using PDO
// instance names.
//

#define MSiSCSI_TargetMappingsGuid \
    { 0x41646815,0x7524,0x4bc0, { 0x90,0x4a,0xcd,0x7d,0x51,0x0e,0xac,0x02 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_TargetMappings_GUID, \
            0x41646815,0x7524,0x4bc0,0x90,0x4a,0xcd,0x7d,0x51,0x0e,0xac,0x02);
#endif


typedef struct _MSiSCSI_TargetMappings
{
    // Id that is globally unique to each instance of each adapter. This should be the value returned by the MSiSCSI_HBAInformation class.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_TargetMappings_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_TargetMappings_UniqueAdapterId_ID 1

    // Number of target mappings
    ULONG TargetMappingCount;
    #define MSiSCSI_TargetMappings_TargetMappingCount_SIZE sizeof(ULONG)
    #define MSiSCSI_TargetMappings_TargetMappingCount_ID 2

    // Reserved
    ULONG Reserved;
    #define MSiSCSI_TargetMappings_Reserved_SIZE sizeof(ULONG)
    #define MSiSCSI_TargetMappings_Reserved_ID 3

    // Array of TargetMappingCount ISCSI_TargetMapping structures. NOTE: This field is a variable length array.
    ISCSI_TargetMapping TargetMappings[1];
    #define MSiSCSI_TargetMappings_TargetMappings_ID 4

} MSiSCSI_TargetMappings, *PMSiSCSI_TargetMappings;

// MSiSCSI_LUNMappingInformation - MSiSCSI_LUNMappingInformation
// LUN Mapping Information

//
// This class is required.
//
// It must be implemented using PDO instance names by the PDO device object
//
// This class exposes the OS SCSI address information for a particular LUN.
// The SCSI address information must be consistent with the information returned
// by the MSIScsi_TargetMappings class and the information reported to the port
// driver. The class must be implemented on the PDO device object so that there
// will be one instance for each device created by the adapter and named by the
// PDO name for the created device and not the adapter
//

#define MSiSCSI_LUNMappingInformationGuid \
    { 0x7bb02370,0xb8ae,0x4d29, { 0x88,0xde,0x76,0x95,0x1d,0x32,0x45,0xba } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_LUNMappingInformation_GUID, \
            0x7bb02370,0xb8ae,0x4d29,0x88,0xde,0x76,0x95,0x1d,0x32,0x45,0xba);
#endif


typedef struct _MSiSCSI_LUNMappingInformation
{
    // Id that is globally unique to each instance of each adapter. Using the address of the Adapter Extension is a good idea.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_LUNMappingInformation_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_LUNMappingInformation_UniqueAdapterId_ID 1

    // Id that is unique to this session within this adapter. This should be the same session id as the one assigned when the session was logged in.
    ULONGLONG UniqueSessionId;
    #define MSiSCSI_LUNMappingInformation_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_LUNMappingInformation_UniqueSessionId_ID 2

    // OS Bus Number
    ULONG OSBus;
    #define MSiSCSI_LUNMappingInformation_OSBus_SIZE sizeof(ULONG)
    #define MSiSCSI_LUNMappingInformation_OSBus_ID 3

    // OS Target Number
    ULONG OSTarget;
    #define MSiSCSI_LUNMappingInformation_OSTarget_SIZE sizeof(ULONG)
    #define MSiSCSI_LUNMappingInformation_OSTarget_ID 4

    // OS LUN Number
    ULONG OSLUN;
    #define MSiSCSI_LUNMappingInformation_OSLUN_SIZE sizeof(ULONG)
    #define MSiSCSI_LUNMappingInformation_OSLUN_ID 5

} MSiSCSI_LUNMappingInformation, *PMSiSCSI_LUNMappingInformation;

#define MSiSCSI_LUNMappingInformation_SIZE (FIELD_OFFSET(MSiSCSI_LUNMappingInformation, OSLUN) + MSiSCSI_LUNMappingInformation_OSLUN_SIZE)

// MSiSCSI_SecurityConfigOperations - MSiSCSI_SecurityConfigOperations

//
// This class is required if your adapter supports IPSEC or CHAP.
//
// An adapter must support the appropriate methods if it implements
// security including IKE (using preshared keys) and/or a non volatile 
// cache for IPSEC preshared keys and iSCSI authentication credentials
// (ie, username and passwords). The adapter should also indicate that
// that the cache is implemented by setting the appropriate flags in the
// MSiSCSI_HBAInformation class
//
// This class must be registered using PDO instance names with a single instance
//

#define MSiSCSI_SecurityConfigOperationsGuid \
    { 0x391f3325,0x0ba3,0x4083, { 0xa8,0x61,0xcf,0x4f,0x6f,0x97,0xa5,0x27 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_SecurityConfigOperations_GUID, \
            0x391f3325,0x0ba3,0x4083,0xa8,0x61,0xcf,0x4f,0x6f,0x97,0xa5,0x27);
#endif

//
// Method id definitions for MSiSCSI_SecurityConfigOperations

//
// This method is required if the initiator supports IKE.
//
// SetPresharedKeyForId allows a management application to configure an
// adapter with a preshared key that is associated with an id. The
// id corresponds to the contents of the identification payload in the
// IKE phase 1 aggressive or main mode exchange. The
// key can be associated with an ip address for use in the IKE phase 1
// main mode exchange. The adapter should maintain the key in its non
// volatile storage if it is available. The adapter should also maintain
// the key in its working memory so that it is available for IKE phase 1
// negotiation. If NVRAM is not available then the initiator service will
// maintain the key on behalf of the adapter.
// 
//
//
// IKE Identification payload types (from RFC 2407)
//
#define       ID_IPV4_ADDR                        1
#define       ID_FQDN                             2
#define       ID_USER_FQDN                        3
#define       ID_IPV6_ADDR                        5


#define SetPresharedKeyForId     1
typedef struct _SetPresharedKeyForId_IN
{
    // Specific port number or 0xffffffff for all ports
    ULONG PortNumber;
    #define SetPresharedKeyForId_IN_PortNumber_SIZE sizeof(ULONG)
    #define SetPresharedKeyForId_IN_PortNumber_ID 1

    // 
    ULONGLONG SecurityFlags;
    #define SetPresharedKeyForId_IN_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define SetPresharedKeyForId_IN_SecurityFlags_ID 2

    // Type of Id to associate with the preshared key
    UCHAR IdType;
    #define SetPresharedKeyForId_IN_IdType_SIZE sizeof(UCHAR)
    #define SetPresharedKeyForId_IN_IdType_ID 3

    // Size in bytes of the Id
    ULONG IdSize;
    #define SetPresharedKeyForId_IN_IdSize_SIZE sizeof(ULONG)
    #define SetPresharedKeyForId_IN_IdSize_ID 4

    // Size in bytes of the Key
    ULONG KeySize;
    #define SetPresharedKeyForId_IN_KeySize_SIZE sizeof(ULONG)
    #define SetPresharedKeyForId_IN_KeySize_ID 5

    // **fields** Id to associate with the key. NOTE: This field is a variable length array, the field that follows this field starts immediately after the end of this field subject to appropriate padding. All fields after this are commented out in the header.
    UCHAR Id[1];
    #define SetPresharedKeyForId_IN_Id_ID 6

    // Key to associate with the id. NOTE: This field is a variable length array.
//  UCHAR Key[1];
    #define SetPresharedKeyForId_IN_Key_ID 7

} SetPresharedKeyForId_IN, *PSetPresharedKeyForId_IN;

typedef struct _SetPresharedKeyForId_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define SetPresharedKeyForId_OUT_Status_SIZE sizeof(ULONG)
    #define SetPresharedKeyForId_OUT_Status_ID 8

} SetPresharedKeyForId_OUT, *PSetPresharedKeyForId_OUT;

#define SetPresharedKeyForId_OUT_SIZE (FIELD_OFFSET(SetPresharedKeyForId_OUT, Status) + SetPresharedKeyForId_OUT_Status_SIZE)


//
// This method is required if the initiator supports IKE.
//
// GetPresharedKeyForId allows a management application to determine if
// a particular IKE identification payload is configured with a preshared
// key
//

#define GetPresharedKeyForId     2
typedef struct _GetPresharedKeyForId_IN
{
    // 
    ULONG PortNumber;
    #define GetPresharedKeyForId_IN_PortNumber_SIZE sizeof(ULONG)
    #define GetPresharedKeyForId_IN_PortNumber_ID 1

    // Type of Id to associate with the preshared key
    UCHAR IdType;
    #define GetPresharedKeyForId_IN_IdType_SIZE sizeof(UCHAR)
    #define GetPresharedKeyForId_IN_IdType_ID 2

    // Size in bytes of the Id
    ULONG IdSize;
    #define GetPresharedKeyForId_IN_IdSize_SIZE sizeof(ULONG)
    #define GetPresharedKeyForId_IN_IdSize_ID 3

    // Id to associate with the key. NOTE: This field is a variable length array.
    UCHAR Id[1];
    #define GetPresharedKeyForId_IN_Id_ID 4

} GetPresharedKeyForId_IN, *PGetPresharedKeyForId_IN;

typedef struct _GetPresharedKeyForId_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define GetPresharedKeyForId_OUT_Status_SIZE sizeof(ULONG)
    #define GetPresharedKeyForId_OUT_Status_ID 5

    // 
    ULONGLONG SecurityFlags;
    #define GetPresharedKeyForId_OUT_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define GetPresharedKeyForId_OUT_SecurityFlags_ID 6

} GetPresharedKeyForId_OUT, *PGetPresharedKeyForId_OUT;

#define GetPresharedKeyForId_OUT_SIZE (FIELD_OFFSET(GetPresharedKeyForId_OUT, SecurityFlags) + GetPresharedKeyForId_OUT_SecurityFlags_SIZE)


//
// This method is required if the initiator supports IKE
//
// SetGroupPresharedKey allows a management application to configure an
// adapter with a group preshared key that is used in an IKE phase 1 exchange
// when there is no specific key available for that exchange. The adapter 
// should maintain the key in its non volatile storage if available and
// maintain the key in its working memory so that it is available for IKE
// phase 1 negotiation
//
//

#define SetGroupPresharedKey     3
typedef struct _SetGroupPresharedKey_IN
{
    // Number of bytes passed in Key for the preshared key
    ULONG KeySize;
    #define SetGroupPresharedKey_IN_KeySize_SIZE sizeof(ULONG)
    #define SetGroupPresharedKey_IN_KeySize_ID 1

    // Preshared key used as group key. NOTE: This field is a variable length array.
    UCHAR Key[1];
    #define SetGroupPresharedKey_IN_Key_ID 2

} SetGroupPresharedKey_IN, *PSetGroupPresharedKey_IN;

typedef struct _SetGroupPresharedKey_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define SetGroupPresharedKey_OUT_Status_SIZE sizeof(ULONG)
    #define SetGroupPresharedKey_OUT_Status_ID 3

} SetGroupPresharedKey_OUT, *PSetGroupPresharedKey_OUT;

#define SetGroupPresharedKey_OUT_SIZE (FIELD_OFFSET(SetGroupPresharedKey_OUT, Status) + SetGroupPresharedKey_OUT_Status_SIZE)


//
// This method is required if the initiator supports IPSEC tunnel mode
//
// SetTunnelModeOuterAddress allows a management application to configure the
// tunnel mode outer address that is used by a port on an adapter
// The adapter should maintain the address in its non volatile
// storage if available 
// 

#define SetTunnelModeOuterAddress     4
typedef struct _SetTunnelModeOuterAddress_IN
{
    // Port number to which to associate tunnel mode address. Use 0xffffffff to associate with all ports.
    ULONG PortNumber;
    #define SetTunnelModeOuterAddress_IN_PortNumber_SIZE sizeof(ULONG)
    #define SetTunnelModeOuterAddress_IN_PortNumber_ID 1

    // Destination address
    ISCSI_IP_Address DestinationAddress;
    #define SetTunnelModeOuterAddress_IN_DestinationAddress_SIZE sizeof(ISCSI_IP_Address)
    #define SetTunnelModeOuterAddress_IN_DestinationAddress_ID 2

    // Tunnel mode outer address
    ISCSI_IP_Address TunnelModeOuterAddress;
    #define SetTunnelModeOuterAddress_IN_TunnelModeOuterAddress_SIZE sizeof(ISCSI_IP_Address)
    #define SetTunnelModeOuterAddress_IN_TunnelModeOuterAddress_ID 3

} SetTunnelModeOuterAddress_IN, *PSetTunnelModeOuterAddress_IN;

#define SetTunnelModeOuterAddress_IN_SIZE (FIELD_OFFSET(SetTunnelModeOuterAddress_IN, TunnelModeOuterAddress) + SetTunnelModeOuterAddress_IN_TunnelModeOuterAddress_SIZE)

typedef struct _SetTunnelModeOuterAddress_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define SetTunnelModeOuterAddress_OUT_Status_SIZE sizeof(ULONG)
    #define SetTunnelModeOuterAddress_OUT_Status_ID 4

} SetTunnelModeOuterAddress_OUT, *PSetTunnelModeOuterAddress_OUT;

#define SetTunnelModeOuterAddress_OUT_SIZE (FIELD_OFFSET(SetTunnelModeOuterAddress_OUT, Status) + SetTunnelModeOuterAddress_OUT_Status_SIZE)


//
// This method is required if the initiator caches information
//
// ClearCache instructs the HBA to clear the iSCSI authentication and
// preshared key caches
// 

#define ClearCache     5
typedef struct _ClearCache_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define ClearCache_OUT_Status_SIZE sizeof(ULONG)
    #define ClearCache_OUT_Status_ID 1

} ClearCache_OUT, *PClearCache_OUT;

#define ClearCache_OUT_SIZE (FIELD_OFFSET(ClearCache_OUT, Status) + ClearCache_OUT_Status_SIZE)


//
// This method is required if the initiator caches information
//
// This method establishes a marker that the service can subsequently
// validate to ensure that the initiator cache is valid
// 

#define SetGenerationalGuid     6
typedef struct _SetGenerationalGuid_IN
{
    // Generational Guid
    UCHAR GenerationalGuid[16];
    #define SetGenerationalGuid_IN_GenerationalGuid_SIZE sizeof(UCHAR[16])
    #define SetGenerationalGuid_IN_GenerationalGuid_ID 1

} SetGenerationalGuid_IN, *PSetGenerationalGuid_IN;

#define SetGenerationalGuid_IN_SIZE (FIELD_OFFSET(SetGenerationalGuid_IN, GenerationalGuid) + SetGenerationalGuid_IN_GenerationalGuid_SIZE)

typedef struct _SetGenerationalGuid_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define SetGenerationalGuid_OUT_Status_SIZE sizeof(ULONG)
    #define SetGenerationalGuid_OUT_Status_ID 2

} SetGenerationalGuid_OUT, *PSetGenerationalGuid_OUT;

#define SetGenerationalGuid_OUT_SIZE (FIELD_OFFSET(SetGenerationalGuid_OUT, Status) + SetGenerationalGuid_OUT_Status_SIZE)


// MSiSCSI_BootInformation - MSiSCSI_BootInformation
#define MSiSCSI_BootInformationGuid \
    { 0xee5a2356,0xc703,0x489b, { 0xb1,0x36,0x69,0xc9,0x94,0xae,0x3a,0x20 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_BootInformation_GUID, \
            0xee5a2356,0xc703,0x489b,0xb1,0x36,0x69,0xc9,0x94,0xae,0x3a,0x20);
#endif


typedef struct _MSiSCSI_BootInformation
{
    // Initiator Node Name used for boot
    UCHAR NodeName[223];
    #define MSiSCSI_BootInformation_NodeName_SIZE sizeof(UCHAR[223])
    #define MSiSCSI_BootInformation_NodeName_ID 1

    // Length of Initiator Shared Secret
    ULONG SharedSecretLength;
    #define MSiSCSI_BootInformation_SharedSecretLength_SIZE sizeof(ULONG)
    #define MSiSCSI_BootInformation_SharedSecretLength_ID 2

    // Initiator Shared Secret
    UCHAR SharedSecret[255];
    #define MSiSCSI_BootInformation_SharedSecret_SIZE sizeof(UCHAR[255])
    #define MSiSCSI_BootInformation_SharedSecret_ID 3

} MSiSCSI_BootInformation, *PMSiSCSI_BootInformation;

#define MSiSCSI_BootInformation_SIZE (FIELD_OFFSET(MSiSCSI_BootInformation, SharedSecret) + MSiSCSI_BootInformation_SharedSecret_SIZE)

// MSiSCSI_AdapterEvent - MSiSCSI_AdapterEvent

typedef enum {
    ISCSI_ADAPTER_TARGETS_CHANGED = 3
} ISCSI_ADAPTER_EVENT_CODE, *PISCSI_ADAPTER_EVENT_CODE; 

//
// This class is required if the HBA supports discovery
//
// This class must be registered using PDO instance names with a single instance
//

#define MSiSCSI_AdapterEventGuid \
    { 0x46b122c0,0x3767,0x4069, { 0x91,0x6e,0x3a,0x43,0x70,0x2f,0x05,0xce } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_AdapterEvent_GUID, \
            0x46b122c0,0x3767,0x4069,0x91,0x6e,0x3a,0x43,0x70,0x2f,0x05,0xce);
#endif


typedef struct _MSiSCSI_AdapterEvent
{
    // Id that is unique to each instance of each adapter. This is the ID returned in the MSiSCSI_HBAInformation class.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_AdapterEvent_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_AdapterEvent_UniqueAdapterId_ID 1

    // **typedef**Adapter Event Code
    ULONG EventCode;
    #define MSiSCSI_AdapterEvent_EventCode_SIZE sizeof(ULONG)
    #define MSiSCSI_AdapterEvent_EventCode_ID 2

} MSiSCSI_AdapterEvent, *PMSiSCSI_AdapterEvent;

#define MSiSCSI_AdapterEvent_SIZE (FIELD_OFFSET(MSiSCSI_AdapterEvent, EventCode) + MSiSCSI_AdapterEvent_EventCode_SIZE)

#endif
