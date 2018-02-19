/*++ 

Copyright (c) 1991  Microsoft Corporation

Module Name:

    iscsilog.h

Abstract:

    Constant definitions for the iSCSI error code log values.

--*/

#ifndef _ISCSILOG_
#define _ISCSILOG_

//
//  Status values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-------------------------+-------------------------------+
//  |Sev|C|       Facility          |               Code            |
//  +---+-+-------------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//

//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: ISCSI_ERR_TDI_CONNECT_FAILED
//
// MessageText:
//
// Initiator failed to connect to the target. Target IP address and TCP Port number are given in dump data.
//
#define ISCSI_ERR_TDI_CONNECT_FAILED     ((NTSTATUS)0xC0000001L)

//
// MessageId: ISCSI_ERR_INSUFFICIENT_SESSION_RESOURCES
//
// MessageText:
//
// The initiator could not allocate resources for an iSCSI session.
//
#define ISCSI_ERR_INSUFFICIENT_SESSION_RESOURCES ((NTSTATUS)0xC0000002L)

//
// MessageId: ISCSI_ERR_INVALID_COMMAND_SEQUENCE_NUMBER
//
// MessageText:
//
// Maximum command sequence number is not serially greater than expected command sequence number in login response.
// Dump data contains Expected Command Sequence number followed by Maximum Command Sequence number.
//
#define ISCSI_ERR_INVALID_COMMAND_SEQUENCE_NUMBER ((NTSTATUS)0xC0000003L)

//
// MessageId: ISCSI_ERR_INVALID_BURST_LENGTH
//
// MessageText:
//
// MaxBurstLength is not serially greater than FirstBurstLength.
// Dump data contains FirstBurstLength followed by MaxBurstLength.
//
#define ISCSI_ERR_INVALID_BURST_LENGTH   ((NTSTATUS)0xC0000004L)

//
// MessageId: ISCSI_ERR_SETUP_NETWORK_NODE
//
// MessageText:
//
// Failed to setup initiator portal. Error status is given in the dump data.
//
#define ISCSI_ERR_SETUP_NETWORK_NODE     ((NTSTATUS)0xC0000005L)

//
// MessageId: ISCSI_ERR_INSUFFICIENT_CONNECTION_RESOURCES
//
// MessageText:
//
// The initiator could not allocate resources for an iSCSI connection
//
#define ISCSI_ERR_INSUFFICIENT_CONNECTION_RESOURCES ((NTSTATUS)0xC0000006L)

//
// MessageId: ISCSI_ERR_SEND_FAILED
//
// MessageText:
//
// The initiator could not send an iSCSI PDU. Error status is given in the dump data.
//
#define ISCSI_ERR_SEND_FAILED            ((NTSTATUS)0xC0000007L)

//
// MessageId: ISCSI_ERR_ISCSI_REQUEST_TIMEOUT
//
// MessageText:
//
// Target or discovery service did not respond in time for an iSCSI request sent by the initiator. 
// iSCSI Function code is given in the dump data. For details about iSCSI Function code please refer 
// to iSCSI User's Guide.
//
#define ISCSI_ERR_ISCSI_REQUEST_TIMEOUT  ((NTSTATUS)0xC0000008L)

//
// MessageId: ISCSI_ERR_SCSI_REQUEST_TIMEOUT
//
// MessageText:
//
// Target did not respond in time for a SCSI request. The CDB is given in the dump data.
//
#define ISCSI_ERR_SCSI_REQUEST_TIMEOUT   ((NTSTATUS)0xC0000009L)

//
// MessageId: ISCSI_ERR_LOGIN_FAILED
//
// MessageText:
//
// Login request failed. The login response packet is given in the dump data.
//
#define ISCSI_ERR_LOGIN_FAILED           ((NTSTATUS)0xC000000AL)

//
// MessageId: ISCSI_ERR_LOGIN_PDU_ERROR
//
// MessageText:
//
// Target returned an invalid login response packet. The login response packet is given in the dump data.
//
#define ISCSI_ERR_LOGIN_PDU_ERROR        ((NTSTATUS)0xC000000BL)

//
// MessageId: ISCSI_ERR_INVALID_LOGIN_REDIRECT_DATA
//
// MessageText:
//
// Target provided invalid data for login redirect. Dump data contains the data returned by the target.
//
#define ISCSI_ERR_INVALID_LOGIN_REDIRECT_DATA ((NTSTATUS)0xC000000CL)

//
// MessageId: ISCSI_ERR_INVALID_AUTHMETHOD
//
// MessageText:
//
// Target offered an unknown AuthMethod. Dump data contains the data returned by the target.
//
#define ISCSI_ERR_INVALID_AUTHMETHOD     ((NTSTATUS)0xC000000DL)

//
// MessageId: ISCSI_ERR_INVALID_CHAP_ALGORITHM
//
// MessageText:
//
// Target offered an unknown digest algorithm for CHAP. Dump data contains the data returned by the target.
//
#define ISCSI_ERR_INVALID_CHAP_ALGORITHM ((NTSTATUS)0xC000000EL)

//
// MessageId: ISCSI_ERR_INVALID_CHAP_CHALLENGE
//
// MessageText:
//
// CHAP challenge given by the target contains invalid characters. Dump data contains the challenge given.
//
#define ISCSI_ERR_INVALID_CHAP_CHALLENGE ((NTSTATUS)0xC000000FL)

//
// MessageId: ISCSI_ERR_INVALID_KEY_DURING_CHAP
//
// MessageText:
//
// An invalid key was received during CHAP negotiation. The key=value pair is given in the dump data.
//
#define ISCSI_ERR_INVALID_KEY_DURING_CHAP ((NTSTATUS)0xC0000010L)

//
// MessageId: ISCSI_ERR_INVALID_CHAP_RESPONSE
//
// MessageText:
//
// CHAP Response given by the target did not match the expected one. Dump data contains the CHAP response.
//
#define ISCSI_ERR_INVALID_CHAP_RESPONSE  ((NTSTATUS)0xC0000011L)

//
// MessageId: ISCSI_ERR_HEADER_DIGEST_NEEDED
//
// MessageText:
//
// Header Digest is required by the initiator, but target did not offer it.
//
#define ISCSI_ERR_HEADER_DIGEST_NEEDED   ((NTSTATUS)0xC0000012L)

//
// MessageId: ISCSI_ERR_HEADER_DATA_NEEDED
//
// MessageText:
//
// Data Digest is required by the initiator, but target did not offer it.
//
#define ISCSI_ERR_HEADER_DATA_NEEDED     ((NTSTATUS)0xC0000013L)

//
// MessageId: ISCSI_ERR_CONNECTION_LOST
//
// MessageText:
//
// Connection to the target was lost. The initiator will attempt to retry the connection.
//
#define ISCSI_ERR_CONNECTION_LOST        ((NTSTATUS)0xC0000014L)

//
// MessageId: ISCSI_ERR_INVALID_DATA_SEGMENT_LENGTH
//
// MessageText:
//
// Data Segment Length given in the header exceeds MaxRecvDataSegmentLength declared by the target.
//
#define ISCSI_ERR_INVALID_DATA_SEGMENT_LENGTH ((NTSTATUS)0xC0000015L)

//
// MessageId: ISCSI_ERR_HEADER_DIGEST_ERROR
//
// MessageText:
//
// Header digest error was detected for the given PDU. Dump data contains the header and digest.
//
#define ISCSI_ERR_HEADER_DIGEST_ERROR    ((NTSTATUS)0xC0000016L)

//
// MessageId: ISCSI_ERR_ISCSI_PDU_ERROR
//
// MessageText:
//
// Target sent an invalid iSCSI PDU. Dump data contains the entire iSCSI header.
//
#define ISCSI_ERR_ISCSI_PDU_ERROR        ((NTSTATUS)0xC0000017L)

//
// MessageId: ISCSI_ERR_UNKNOWN_ISCSI_OPCODE
//
// MessageText:
//
// Target sent an iSCSI PDU with an invalid opcode. Dump data contains the entire iSCSI header.
//
#define ISCSI_ERR_UNKNOWN_ISCSI_OPCODE   ((NTSTATUS)0xC0000018L)

//
// MessageId: ISCSI_ERR_DATA_DIGEST_ERROR
//
// MessageText:
//
// Data digest error was detected. Dump data contains the calculated checksum followed by the given checksum.
//
#define ISCSI_ERR_DATA_DIGEST_ERROR      ((NTSTATUS)0xC0000019L)

//
// MessageId: ISCSI_ERR_EXCESS_DATA_SENT
//
// MessageText:
//
// Target trying to send more data than requested by the initiator.
//
#define ISCSI_ERR_EXCESS_DATA_SENT       ((NTSTATUS)0xC000001AL)

//
// MessageId: ISCSI_ERR_UNEXPECTED_PDU
//
// MessageText:
//
// Initiator could not find a match for the initiator task tag in the received PDU. Dump data contains the entire iSCSI header.
//
#define ISCSI_ERR_UNEXPECTED_PDU         ((NTSTATUS)0xC000001BL)

//
// MessageId: ISCSI_ERR_INVALID_RTT_PDU
//
// MessageText:
//
// Initiator received an invalid R2T packet. Dump data contains the entire iSCSI header.
//
#define ISCSI_ERR_INVALID_RTT_PDU        ((NTSTATUS)0xC000001CL)

//
// MessageId: ISCSI_ERR_ISCSI_PDU_REJECTED
//
// MessageText:
//
// Target rejected an iSCSI PDU sent by the initiator. Dump data contains the rejected PDU.
//
#define ISCSI_ERR_ISCSI_PDU_REJECTED     ((NTSTATUS)0xC000001DL)

//
// MessageId: ISCSI_ERR_INSUFFICIENT_WORKITEM_RESOURCES
//
// MessageText:
//
// Initiator could not allocate a workitem for processing a request.
//
#define ISCSI_ERR_INSUFFICIENT_WORKITEM_RESOURCES ((NTSTATUS)0xC000001EL)

//
// MessageId: ISCSI_ERR_INSUFFICIENT_REQ_PACKET_RESOURCES
//
// MessageText:
//
// Initiator could not allocate resource for processing a request.
//
#define ISCSI_ERR_INSUFFICIENT_REQ_PACKET_RESOURCES ((NTSTATUS)0xC000001FL)

//
// MessageId: ISCSI_INFO_RECEIVED_ASYNC_LOGOUT
//
// MessageText:
//
// Initiator received an asynchronous logout message. The Target name is given in the dump data.
//
#define ISCSI_INFO_RECEIVED_ASYNC_LOGOUT ((NTSTATUS)0x40000020L)

//
// MessageId: ISCSI_ERR_INVALID_CHAP_CHALLENGE_SIZE
//
// MessageText:
//
// Challenge size given by the target exceeds the maximum specified in iSCSI specification.
//
#define ISCSI_ERR_INVALID_CHAP_CHALLENGE_SIZE ((NTSTATUS)0xC0000021L)

//
// MessageId: ISCSI_INFO_RECONNECTED_TO_TARGET
//
// MessageText:
//
// A connection to the target was lost, but Initiator successfully reconnected to the target. Dump data contains the target name.
//
#define ISCSI_INFO_RECONNECTED_TO_TARGET ((NTSTATUS)0x40000022L)

//
// MessageId: ISCSI_ERR_INVALID_TARGET_CHAP_SECRET
//
// MessageText:
//
// Target CHAP secret is smaller than the minimum size (12 bytes) required by the spec. 
//
#define ISCSI_ERR_INVALID_TARGET_CHAP_SECRET ((NTSTATUS)0xC0000023L)

//
// MessageId: ISCSI_ERR_INVALID_INITIATOR_CHAP_SECRET
//
// MessageText:
//
// Initiator CHAP secret is smaller than the minimum size (12 bytes) required by the spec. Dump data contains the given CHAP secret.
//
#define ISCSI_ERR_INVALID_INITIATOR_CHAP_SECRET ((NTSTATUS)0xC0000024L)

//
// MessageId: ISCSI_ERR_FIPS_NOT_AVAILABLE
//
// MessageText:
//
// FIPS service could not be initialized. Persistent logons will not be processed.
//
#define ISCSI_ERR_FIPS_NOT_AVAILABLE     ((NTSTATUS)0xC0000025L)

//
// MessageId: ISCSI_ERR_CHAP_NOT_OFFERED
//
// MessageText:
//
// Initiator requires CHAP for logon authentication, but target did not offer CHAP.
//
#define ISCSI_ERR_CHAP_NOT_OFFERED       ((NTSTATUS)0xC0000026L)

//
// MessageId: ISCSI_ERR_DEVICE_RESET
//
// MessageText:
//
// Initiator sent a task management command to reset the target. The target name is given in the dump data.
//
#define ISCSI_ERR_DEVICE_RESET           ((NTSTATUS)0xC0000027L)

//
// MessageId: ISCSI_ERR_CHAP_OFFERED
//
// MessageText:
//
// Target requires logon authentication via CHAP, but Initiator is not configured to perform CHAP.
//
#define ISCSI_ERR_CHAP_OFFERED           ((NTSTATUS)0xC0000028L)

//
// MessageId: ISCSI_ERR_AUTH_METHOD_NOT_OFFERED
//
// MessageText:
//
// Target did not send AuthMethod key during security negotiation phase.
//
#define ISCSI_ERR_AUTH_METHOD_NOT_OFFERED ((NTSTATUS)0xC0000029L)

//
// MessageId: ISCSI_ERR_INVALID_STATUS_SEQ_NUM
//
// MessageText:
//
// Target sent an invalid status sequence number for a connection. Dump data contains 
// Expected Status Sequence number followed by the given status sequence number.
//
#define ISCSI_ERR_INVALID_STATUS_SEQ_NUM ((NTSTATUS)0xC000002AL)

//
// MessageId: ISCSI_ERR_LOGIN_TIMED_OUT
//
// MessageText:
//
// Target failed to respond in time for a login request.
//
#define ISCSI_ERR_LOGIN_TIMED_OUT        ((NTSTATUS)0xC000002BL)

//
// MessageId: ISCSI_ERR_LOGOUT_TIMED_OUT
//
// MessageText:
//
// Target failed to respond in time for a logout request.
//
#define ISCSI_ERR_LOGOUT_TIMED_OUT       ((NTSTATUS)0xC000002CL)

//
// MessageId: ISCSI_ERR_ADDCONNECTION_TIMED_OUT
//
// MessageText:
//
// Target failed to respond in time for a login request. This login request was for adding a new connection to a session.
//
#define ISCSI_ERR_ADDCONNECTION_TIMED_OUT ((NTSTATUS)0xC000002DL)

//
// MessageId: ISCSI_ERR_SENDTARGETS_TIMED_OUT
//
// MessageText:
//
// Target failed to respond in time for a SendTargets command.
//
#define ISCSI_ERR_SENDTARGETS_TIMED_OUT  ((NTSTATUS)0xC000002EL)

//
// MessageId: ISCSI_ERR_SCSICOMMAND_TIMED_OUT
//
// MessageText:
//
// Target failed to respond in time for a SCSI command sent through a WMI request.
//
#define ISCSI_ERR_SCSICOMMAND_TIMED_OUT  ((NTSTATUS)0xC000002FL)

//
// MessageId: ISCSI_ERR_NOP_TIMED_OUT
//
// MessageText:
//
// Target failed to respond in time to a NOP request.
//
#define ISCSI_ERR_NOP_TIMED_OUT          ((NTSTATUS)0xC0000030L)

//
// MessageId: ISCSI_ERR_TASKMGMT_TIMED_OUT
//
// MessageText:
//
// Target failed to respond in time to a Task Management request.
//
#define ISCSI_ERR_TASKMGMT_TIMED_OUT     ((NTSTATUS)0xC0000031L)

//
// MessageId: ISCSI_ERR_ASYNC_TEXT_CMD_TIMED_OUT
//
// MessageText:
//
// Target failed to respond in time to a Text Command sent to renegotiate iSCSI parameters.
//
#define ISCSI_ERR_ASYNC_TEXT_CMD_TIMED_OUT ((NTSTATUS)0xC0000032L)

//
// MessageId: ISCSI_ERR_ASYNC_LOGOUT_TIMED_OUT
//
// MessageText:
//
// Target failed to respond in time to a logout request sent in response to an asynchronous message from the target.
//
#define ISCSI_ERR_ASYNC_LOGOUT_TIMED_OUT ((NTSTATUS)0xC0000033L)

//
// MessageId: ISCSI_ERR_CONFIG_IPSEC_TIMED_OUT
//
// MessageText:
//
// Initiator Service failed to respond in time to a request to configure IPSec resources for an iSCSI connection.
//
#define ISCSI_ERR_CONFIG_IPSEC_TIMED_OUT ((NTSTATUS)0xC0000034L)

//
// MessageId: ISCSI_ERR_RELEASE_IPSEC_TIMED_OUT
//
// MessageText:
//
// Initiator Service failed to respond in time to a request to release IPSec resources allocated for an iSCSI connection.
//
#define ISCSI_ERR_RELEASE_IPSEC_TIMED_OUT ((NTSTATUS)0xC0000035L)

//
// MessageId: ISCSI_ERR_ENCRYPT_DECRYPT_TIMED_OUT
//
// MessageText:
//
// Initiator Service failed to respond in time to a request to encrypt or decrypt data.
//
#define ISCSI_ERR_ENCRYPT_DECRYPT_TIMED_OUT ((NTSTATUS)0xC0000036L)

//
// MessageId: ISCSI_ERR_INSUFFICIENT_RESOURCES_FOR_SEND
//
// MessageText:
//
// Initiator failed to allocate resources to send data to target.
//
#define ISCSI_ERR_INSUFFICIENT_RESOURCES_FOR_SEND ((NTSTATUS)0xC0000037L)

//
// MessageId: ISCSI_ERR_FAILED_TO_GET_SYSTEM_ADDRESS
//
// MessageText:
//
// Initiator could not map an user virtual address to kernel virtual address resulting in I/O failure. 
//
#define ISCSI_ERR_FAILED_TO_GET_SYSTEM_ADDRESS ((NTSTATUS)0xC0000038L)

//
// MessageId: ISCSI_ERR_FAILED_TO_ALLOCATE_RESOURCES_FOR_IO
//
// MessageText:
//
// Initiator could not allocate required resources for processing a request resulting in I/O failure. 
//
#define ISCSI_ERR_FAILED_TO_ALLOCATE_RESOURCES_FOR_IO ((NTSTATUS)0xC0000039L)

//
// MessageId: ISCSI_ERR_FAILED_TO_ALLOCATE_REQUEST_TAG
//
// MessageText:
//
// Initiator could not allocate a tag for processing a request resulting in I/O failure. 
//
#define ISCSI_ERR_FAILED_TO_ALLOCATE_REQUEST_TAG ((NTSTATUS)0xC000003AL)

//
// MessageId: ISCSI_ERR_CONNECTION_DROPPED_BEFORE_FFP
//
// MessageText:
//
// Target dropped the connection before the initiator could transition to Full Feature Phase.
//
#define ISCSI_ERR_CONNECTION_DROPPED_BEFORE_FFP ((NTSTATUS)0xC000003BL)

//
// MessageId: ISCSI_ERR_DATA_SENT_IN_SCSI_RESPONSE
//
// MessageText:
//
// Target sent data in SCSI Response PDU instead of Data_IN PDU. Only Sense Data can be sent in SCSI Response.
//
#define ISCSI_ERR_DATA_SENT_IN_SCSI_RESPONSE ((NTSTATUS)0xC000003CL)

//
// MessageId: ISCSI_ERR_DATA_PDU_IN_ORDER_FALSE
//
// MessageText:
//
// Target set DataPduInOrder to NO when initiator requested YES. Login will be failed.
//
#define ISCSI_ERR_DATA_PDU_IN_ORDER_FALSE ((NTSTATUS)0xC000003DL)

//
// MessageId: ISCSI_ERR_DATA_SEQ_IN_ORDER_FALSE
//
// MessageText:
//
// Target set DataSequenceInOrder to NO when initiator requested YES. Login will be failed.
//
#define ISCSI_ERR_DATA_SEQ_IN_ORDER_FALSE ((NTSTATUS)0xC000003EL)

//
// MessageId: ISCSI_ERR_TOO_MANY_RESET_FAILURE
//
// MessageText:
//
// Can not Reset the Target or LUN. Will attempt session recovery.
//
#define ISCSI_ERR_TOO_MANY_RESET_FAILURE ((NTSTATUS)0xC000003FL)

//
// MessageId: ISCSI_INFO_NIC_BOOT
//
// MessageText:
//
// Attempt to bootstrap Windows using iSCSI NIC Boot (iBF)
//
#define ISCSI_INFO_NIC_BOOT              ((NTSTATUS)0x40000040L)

//
// MessageId: ISCSI_PAGING_IRP_ERROR
//
// MessageText:
//
// Booting from iSCSI, but Could not set any NIC in Paging Path.
//
#define ISCSI_PAGING_IRP_ERROR           ((NTSTATUS)0xC0000041L)

//
// MessageId: ISCSI_ERR_DISABLE_NAGLE
//
// MessageText:
//
// Attempt to disable the Nagle Algorithm for iSCSI connection failed.
//
#define ISCSI_ERR_DISABLE_NAGLE          ((NTSTATUS)0xC0000042L)

//
// MessageId: ISCSI_USING_PROCESSOR_CRC32
//
// MessageText:
//
// If Digest support selected for iSCSI Session, Will use Processor support for Digest computation.
//
#define ISCSI_USING_PROCESSOR_CRC32      ((NTSTATUS)0x40000043L)

//
// MessageId: ISCSI_ERR_FAILED_TO_RECOVER_SESSION_AFTER_ASYNCLOGOUT
//
// MessageText:
//
// After receiving an async logout from the target, attempt to relogin the session failed.  Error status is given in the dump data.
//
#define ISCSI_ERR_FAILED_TO_RECOVER_SESSION_AFTER_ASYNCLOGOUT ((NTSTATUS)0xC0000044L)

//
// MessageId: ISCSI_ERR_FAILED_TO_RECOVER_UNEXPECTED_TERMINATED_SESSION
//
// MessageText:
//
// Attempt to recover an unexpected terminated session failed. Error status is given in the dump data.
//
#define ISCSI_ERR_FAILED_TO_RECOVER_UNEXPECTED_TERMINATED_SESSION ((NTSTATUS)0xC0000045L)

//
// MessageId: ISCSI_ERR_FAILED_TO_PROCESS_LOGON_REQUEST
//
// MessageText:
//
// Error occurred when processing iSCSI logon request. The request was not retried. Error status is given in the dump data.
//
#define ISCSI_ERR_FAILED_TO_PROCESS_LOGON_REQUEST ((NTSTATUS)0xC0000046L)

//
// MessageId: ISCSI_SESSION_RECOVERY_REQUEST_NOT_STARTED
//
// MessageText:
//
// Initiator did not start a session recovery upon receiving the request. Dump data contains the error status.
//
#define ISCSI_SESSION_RECOVERY_REQUEST_NOT_STARTED ((NTSTATUS)0x40000047L)

//
// MessageId: ISCSI_UNEXPECTED_TARGET_PORTAL_IP_TYPE
//
// MessageText:
//
// Unexpected target portal IP types. Dump data contains the expected IP type.
//
#define ISCSI_UNEXPECTED_TARGET_PORTAL_IP_TYPE ((NTSTATUS)0xC0000048L)

#endif /* _ISCSILOG_ */
