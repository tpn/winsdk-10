#ifndef _iscsiprf_h_
#define _iscsiprf_h_

// MSiSCSI_MMIPSECStats - MSiSCSI_MMIPSECStats
// iSCSI HBA main mode IPSEC Statistics


//***************************************************************************
//
//  iscsiprf.h
// 
//  Module: iSCSI Discovery api
//
//  Purpose: Internal header defining interface between user mode discovery
//           api dll and HBA driver miniport.
//
//  Note: These classes are recommended as by implementing them the data 
//        exposed will be available in sysmon (perfmon) when running on 
//        Windows XP and Windows .Net server
//
//  Copyright (c) 2001 Microsoft Corporation
//
//***************************************************************************

//
// This class exposes the main mode IPSEC statistics
//
// This class must be registered with PDO instance names using a single instance
//

#define MSiSCSI_MMIPSECStatsGuid \
    { 0x36b58ea2,0xc461,0x4bb0, { 0xac,0x8e,0x95,0x2f,0x59,0xd2,0x51,0xed } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_MMIPSECStats_GUID, \
            0x36b58ea2,0xc461,0x4bb0,0xac,0x8e,0x95,0x2f,0x59,0xd2,0x51,0xed);
#endif


typedef struct _MSiSCSI_MMIPSECStats
{

// An acquire is a request by the IPSEC driver to have IKE perform a task. The active acquire statistic includes the outstanding request and the number of any queued requests. Typically, the number of active acquires is 1. Under a heavy load, the number of active acquires is 1 and the number of requests that are queued by IKE for processing.
    // An acquire is a request by the IPSEC driver to have IKE perform a task. The active acquire statistic includes the outstanding request and the number of any queued requests. Typically, the number of active acquires is 1. Under a heavy load, the number of active acquires is 1 and the number of requests that are queued by IKE for processing.
    ULONGLONG ActiveAcquire;
    #define MSiSCSI_MMIPSECStats_ActiveAcquire_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_ActiveAcquire_ID 1


// The number of IKE messages received that are queued for processing.
    // The number of IKE messages received that are queued for processing.
    ULONGLONG ActiveReceive;
    #define MSiSCSI_MMIPSECStats_ActiveReceive_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_ActiveReceive_ID 2


// The number of times that an acquire has failed.
    // The number of times that an acquire has failed.
    ULONGLONG AcquireFailures;
    #define MSiSCSI_MMIPSECStats_AcquireFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_AcquireFailures_ID 3


// The number of times that the TCP stack has failed when receiving IKE messages.
    // The number of times that the TCP stack has failed when receiving IKE messages.
    ULONGLONG ReceiveFailures;
    #define MSiSCSI_MMIPSECStats_ReceiveFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_ReceiveFailures_ID 4


// The number of times that the TCP/IP stack has failed when sending IKE messages.
    // The number of times that the TCP/IP stack has failed when sending IKE messages.
    ULONGLONG SendFailures;
    #define MSiSCSI_MMIPSECStats_SendFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_SendFailures_ID 5


// The number of entries in the acquire heap, which stores active acquires. This number increases under a heavy load and then gradually decreases over time, as the acquire heap is cleared.
    // The number of entries in the acquire heap, which stores active acquires. This number increases under a heavy load and then gradually decreases over time, as the acquire heap is cleared.
    ULONGLONG AcquireHeapSize;
    #define MSiSCSI_MMIPSECStats_AcquireHeapSize_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_AcquireHeapSize_ID 6


// The number of entries in the IKE receive buffers for incoming IKE messages.
    // The number of entries in the IKE receive buffers for incoming IKE messages.
    ULONGLONG ReceiveHeapSize;
    #define MSiSCSI_MMIPSECStats_ReceiveHeapSize_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_ReceiveHeapSize_ID 7


// The total number of negotiation failures that occurred during main mode (also known as Phase I) or quick mode (also known as Phase II) negotiation.
    // The total number of negotiation failures that occurred during main mode (also known as Phase I) or quick mode (also known as Phase II) negotiation.
    ULONGLONG NegotiationFailures;
    #define MSiSCSI_MMIPSECStats_NegotiationFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_NegotiationFailures_ID 8


// The total number of identity authentication failures (Kerberos, certificate, and preshared key) that occurred during main mode negotiation.
    // The total number of identity authentication failures (Kerberos, certificate, and preshared key) that occurred during main mode negotiation.
    ULONGLONG AuthenticationFailures;
    #define MSiSCSI_MMIPSECStats_AuthenticationFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_AuthenticationFailures_ID 9


// A cookie is a value contained in a received IKE message that is used by IKE to find the state of an active main mode. A cookie in a received IKE message that cannot be matched with an active main mode is invalid.
    // A cookie is a value contained in a received IKE message that is used by IKE to find the state of an active main mode. A cookie in a received IKE message that cannot be matched with an active main mode is invalid.
    ULONGLONG InvalidCookiesReceived;
    #define MSiSCSI_MMIPSECStats_InvalidCookiesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_InvalidCookiesReceived_ID 10


// The total number of requests submitted by IKE to obtain a unique Security Parameters Index (SPI).
    // The total number of requests submitted by IKE to obtain a unique Security Parameters Index (SPI).
    ULONGLONG TotalGetSPI;
    #define MSiSCSI_MMIPSECStats_TotalGetSPI_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_TotalGetSPI_ID 11


// The number of outbound quick mode security associations (SAs) added by IKE 
    // The number of outbound quick mode security associations (SAs) added by IKE 
    ULONGLONG KeyAdditions;
    #define MSiSCSI_MMIPSECStats_KeyAdditions_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_KeyAdditions_ID 12


// The number of inbound quick mode security associations (SAs) added by IKE 
    // The number of inbound quick mode security associations (SAs) added by IKE 
    ULONGLONG KeyUpdates;
    #define MSiSCSI_MMIPSECStats_KeyUpdates_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_KeyUpdates_ID 13


// The total number of requests submitted by IKE to obtain a unique Security Parameters Index (SPI) that failed.
    // The total number of requests submitted by IKE to obtain a unique Security Parameters Index (SPI) that failed.
    ULONGLONG GetSPIFailures;
    #define MSiSCSI_MMIPSECStats_GetSPIFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_GetSPIFailures_ID 14


// The number of outbound quick mode security associations (SAs) submitted by IKE that failed
    // The number of outbound quick mode security associations (SAs) submitted by IKE that failed
    ULONGLONG KeyAdditionFailures;
    #define MSiSCSI_MMIPSECStats_KeyAdditionFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_KeyAdditionFailures_ID 15


// The number of inbound quick mode security associations (SAs) added by IKE 
    // The number of inbound quick mode security associations (SAs) added by IKE 
    ULONGLONG KeyUpdateFailures;
    #define MSiSCSI_MMIPSECStats_KeyUpdateFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_KeyUpdateFailures_ID 16


// The number of quick mode state entries.
    // The number of quick mode state entries.
    ULONGLONG ConnectionListSize;
    #define MSiSCSI_MMIPSECStats_ConnectionListSize_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_ConnectionListSize_ID 17


// The total number of successful SAs created during main mode negotiations.
    // The total number of successful SAs created during main mode negotiations.
    ULONGLONG OakleyMainMode;
    #define MSiSCSI_MMIPSECStats_OakleyMainMode_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_OakleyMainMode_ID 18


// The total number of successful SAs created during quick mode negotiations
    // The total number of successful SAs created during quick mode negotiations
    ULONGLONG OakleyQuickMode;
    #define MSiSCSI_MMIPSECStats_OakleyQuickMode_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_OakleyQuickMode_ID 19


// The number of received IKE messages that are invalid, including IKE messages with invalid header fields, incorrect payload lengths, and incorrect values for the responder cookie (when it should be set to 0).
    // The number of received IKE messages that are invalid, including IKE messages with invalid header fields, incorrect payload lengths, and incorrect values for the responder cookie (when it should be set to 0). 
    ULONGLONG InvalidPackets;
    #define MSiSCSI_MMIPSECStats_InvalidPackets_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_InvalidPackets_ID 20


// The total number of negotiations that resulted in the use of plaintext (also known as soft SAs). This typically reflects the number of associations formed with computers that did not respond to main mode negotiation attempts. This can include both non-IPSEC-aware computers and IPSEC-aware computers that do not have IPSEC policy to negotiate security with this IPSEC peer.
    // The total number of negotiations that resulted in the use of plaintext (also known as soft SAs). This typically reflects the number of associations formed with computers that did not respond to main mode negotiation attempts. This can include both non-IPSEC-aware computers and IPSEC-aware computers that do not have IPSEC policy to negotiate security with this IPSEC peer.
    ULONGLONG SoftAssociations;
    #define MSiSCSI_MMIPSECStats_SoftAssociations_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_SoftAssociations_ID 21

} MSiSCSI_MMIPSECStats, *PMSiSCSI_MMIPSECStats;

#define MSiSCSI_MMIPSECStats_SIZE (FIELD_OFFSET(MSiSCSI_MMIPSECStats, SoftAssociations) + MSiSCSI_MMIPSECStats_SoftAssociations_SIZE)

// MSiSCSI_QMIPSECStats - MSiSCSI_QMIPSECStats
// iSCSI HBA quick mode IPSEC Statistics

//
// This class exposes the quick mode IPSEC statistics
//
// This class must be registered with PDO instance names using a single instance
//

#define MSiSCSI_QMIPSECStatsGuid \
    { 0xb4d1c606,0x8682,0x4b7a, { 0xac,0x6b,0xd8,0x83,0xd9,0x15,0x55,0xfb } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_QMIPSECStats_GUID, \
            0xb4d1c606,0x8682,0x4b7a,0xac,0x6b,0xd8,0x83,0xd9,0x15,0x55,0xfb);
#endif


typedef struct _MSiSCSI_QMIPSECStats
{

// The number of active IPSEC SAs
    // The number of active IPSEC SAs
    ULONGLONG ActiveSA;
    #define MSiSCSI_QMIPSECStats_ActiveSA_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_ActiveSA_ID 1


// The number of IPSEC key operations in progress
    // The number of IPSEC key operations in progress
    ULONGLONG PendingKeyOperations;
    #define MSiSCSI_QMIPSECStats_PendingKeyOperations_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_PendingKeyOperations_ID 2


// The total number of successful IPSEC SA negotiations
    // The total number of successful IPSEC SA negotiations
    ULONGLONG KeyAdditions;
    #define MSiSCSI_QMIPSECStats_KeyAdditions_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_KeyAdditions_ID 3


// The total number of key deletions for IPSEC SA
    // The total number of key deletions for IPSEC SA
    ULONGLONG KeyDeletions;
    #define MSiSCSI_QMIPSECStats_KeyDeletions_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_KeyDeletions_ID 4


// The number of rekey operations for IPSEC SAs.
    // The number of rekey operations for IPSEC SAs.
    ULONGLONG ReKeys;
    #define MSiSCSI_QMIPSECStats_ReKeys_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_ReKeys_ID 5


// The number of active IPSEC tunnels.
    // The number of active IPSEC tunnels.
    ULONGLONG ActiveTunnels;
    #define MSiSCSI_QMIPSECStats_ActiveTunnels_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_ActiveTunnels_ID 6


// The total number of packets for which the Security Parameters Index (SPI) was incorrect.
    // The total number of packets for which the Security Parameters Index (SPI) was incorrect.
    ULONGLONG BadSPIPackets;
    #define MSiSCSI_QMIPSECStats_BadSPIPackets_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_BadSPIPackets_ID 7


// The total number of packets that failed decryption.
    // The total number of packets that failed decryption.
    ULONGLONG PacketsNotDecrypted;
    #define MSiSCSI_QMIPSECStats_PacketsNotDecrypted_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_PacketsNotDecrypted_ID 8


// The total number of packets for which data could not be verified. 
    // The total number of packets for which data could not be verified. 
    ULONGLONG PacketsNotAuthenticated;
    #define MSiSCSI_QMIPSECStats_PacketsNotAuthenticated_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_PacketsNotAuthenticated_ID 9


// The total number of packets that contained a valid Sequence Number field.
    // The total number of packets that contained a valid Sequence Number field.
    ULONGLONG PacketsWithReplayDetection;
    #define MSiSCSI_QMIPSECStats_PacketsWithReplayDetection_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_PacketsWithReplayDetection_ID 10


// The number of bytes sent using the ESP protocol.
    // The number of bytes sent using the ESP protocol.
    ULONGLONG ConfidentialBytesSent;
    #define MSiSCSI_QMIPSECStats_ConfidentialBytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_ConfidentialBytesSent_ID 11


// The number of bytes received using the ESP protocol.
    // The number of bytes received using the ESP protocol.
    ULONGLONG ConfidentialBytesReceived;
    #define MSiSCSI_QMIPSECStats_ConfidentialBytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_ConfidentialBytesReceived_ID 12


// The number of bytes sent using the AH protocol.
    // The number of bytes sent using the AH protocol.
    ULONGLONG AuthenticatedBytesSent;
    #define MSiSCSI_QMIPSECStats_AuthenticatedBytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_AuthenticatedBytesSent_ID 13


// The number of bytes received using the AH protocol.
    // The number of bytes received using the AH protocol.
    ULONGLONG AuthenticatedBytesReceived;
    #define MSiSCSI_QMIPSECStats_AuthenticatedBytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_AuthenticatedBytesReceived_ID 14


// The number of bytes sent using the IPSEC protocol.
    // The number of bytes sent using the IPSEC protocol.
    ULONGLONG TransportBytesSent;
    #define MSiSCSI_QMIPSECStats_TransportBytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_TransportBytesSent_ID 15


// The number of bytes received using the IPSEC protocol.
    // The number of bytes received using the IPSEC protocol.
    ULONGLONG TransportBytesReceived;
    #define MSiSCSI_QMIPSECStats_TransportBytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_TransportBytesReceived_ID 16


// The number of bytes sent using the IPSEC tunnel mode.
    // The number of bytes sent using the IPSEC tunnel mode.
    ULONGLONG TunnelBytesSent;
    #define MSiSCSI_QMIPSECStats_TunnelBytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_TunnelBytesSent_ID 17


// The number of bytes received using the IPSEC tunnel mode.
    // The number of bytes received using the IPSEC tunnel mode.
    ULONGLONG TunnelBytesReceived;
    #define MSiSCSI_QMIPSECStats_TunnelBytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_TunnelBytesReceived_ID 18

} MSiSCSI_QMIPSECStats, *PMSiSCSI_QMIPSECStats;

#define MSiSCSI_QMIPSECStats_SIZE (FIELD_OFFSET(MSiSCSI_QMIPSECStats, TunnelBytesReceived) + MSiSCSI_QMIPSECStats_TunnelBytesReceived_SIZE)

// MSiSCSI_ConnectionStatistics - MSiSCSI_ConnectionStatistics
// iSCSI Connection Statistics

//
// This class exposes connection statistics statistics
//
// This class must be registered with dynamic instance names using
// a specific format: 
//
//       targetname_#:# where the first # is the SID, and the second
//    # is the CID.
//

#define MSiSCSI_ConnectionStatisticsGuid \
    { 0x4ae27cd9,0x8dfa,0x4c37, { 0xa4,0x2c,0xb8,0x8a,0x93,0xe3,0xe5,0x21 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_ConnectionStatistics_GUID, \
            0x4ae27cd9,0x8dfa,0x4c37,0xa4,0x2c,0xb8,0x8a,0x93,0xe3,0xe5,0x21);
#endif


typedef struct _MSiSCSI_ConnectionStatistics
{
    // Name of the iSCSI Target
    WCHAR iSCSIName[223 + 1];
    #define MSiSCSI_ConnectionStatistics_iSCSIName_ID 1

    // The iSCSI connection ID for this connection instance.
    USHORT CID;
    #define MSiSCSI_ConnectionStatistics_CID_SIZE sizeof(USHORT)
    #define MSiSCSI_ConnectionStatistics_CID_ID 2

    // A uniquely generated session ID used only internally.  This is the value returned by the LoginToTarget method.
    ULONGLONG USID;
    #define MSiSCSI_ConnectionStatistics_USID_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_USID_ID 3

    // Id that is globally unique to each instance of each adapter. This is the value reported by the MSiSCSI_HBAInformation class.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_ConnectionStatistics_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_UniqueAdapterId_ID 4

    // Count of # of bytes sent over this connection
    ULONGLONG BytesSent;
    #define MSiSCSI_ConnectionStatistics_BytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_BytesSent_ID 5

    // Count of # of bytes received over this connection
    ULONGLONG BytesReceived;
    #define MSiSCSI_ConnectionStatistics_BytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_BytesReceived_ID 6

    // Count of # of  PDU sent over this connection
    ULONGLONG PDUCommandsSent;
    #define MSiSCSI_ConnectionStatistics_PDUCommandsSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_PDUCommandsSent_ID 7

    // Count of # of PDU received over this connection
    ULONGLONG PDUResponsesReceived;
    #define MSiSCSI_ConnectionStatistics_PDUResponsesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_PDUResponsesReceived_ID 8

} MSiSCSI_ConnectionStatistics, *PMSiSCSI_ConnectionStatistics;

#define MSiSCSI_ConnectionStatistics_SIZE (FIELD_OFFSET(MSiSCSI_ConnectionStatistics, PDUResponsesReceived) + MSiSCSI_ConnectionStatistics_PDUResponsesReceived_SIZE)

// MSiSCSI_SessionStatistics - MSiSCSI_SessionStatistics
// iSCSI Session Statistics

//
// This class exposes session statistics
//
// This class must be registered with dynamic instance names using
// a specific format: 
//
//       targetname_#  where the  # is the SID
//

#define MSiSCSI_SessionStatisticsGuid \
    { 0xc827993c,0x6d1f,0x4194, { 0x9b,0x5c,0xd7,0xc0,0xa5,0xf1,0xcf,0xb7 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_SessionStatistics_GUID, \
            0xc827993c,0x6d1f,0x4194,0x9b,0x5c,0xd7,0xc0,0xa5,0xf1,0xcf,0xb7);
#endif


typedef struct _MSiSCSI_SessionStatistics
{
    // Name of the iSCSI Target
    WCHAR iSCSIName[223 + 1];
    #define MSiSCSI_SessionStatistics_iSCSIName_ID 1

    // A uniquely generated session ID used only internally.  This is the value returned by the LoginToTarget method.
    ULONGLONG USID;
    #define MSiSCSI_SessionStatistics_USID_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_USID_ID 2

    // Id that is globally unique to each instance of each adapter. This is the value reported by the MSiSCSI_HBAInformation class.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_SessionStatistics_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_UniqueAdapterId_ID 3

    // Number of bytes sent over this session
    ULONGLONG BytesSent;
    #define MSiSCSI_SessionStatistics_BytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_BytesSent_ID 4

    // Number of bytes received over this session
    ULONGLONG BytesReceived;
    #define MSiSCSI_SessionStatistics_BytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_BytesReceived_ID 5

    // Number of PDU sent over this session
    ULONGLONG PDUCommandsSent;
    #define MSiSCSI_SessionStatistics_PDUCommandsSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_PDUCommandsSent_ID 6

    // Number of PDU received over this session
    ULONGLONG PDUResponsesReceived;
    #define MSiSCSI_SessionStatistics_PDUResponsesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_PDUResponsesReceived_ID 7

    // Count of Number of Digest errors occured in this session
    ULONGLONG DigestErrors;
    #define MSiSCSI_SessionStatistics_DigestErrors_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_DigestErrors_ID 8

    // Count of Number of ConnectionTimeout errors occured in this session
    ULONGLONG ConnectionTimeoutErrors;
    #define MSiSCSI_SessionStatistics_ConnectionTimeoutErrors_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_ConnectionTimeoutErrors_ID 9

    // Count of Number of Format errors occured in this session
    ULONGLONG FormatErrors;
    #define MSiSCSI_SessionStatistics_FormatErrors_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_FormatErrors_ID 10

} MSiSCSI_SessionStatistics, *PMSiSCSI_SessionStatistics;

#define MSiSCSI_SessionStatistics_SIZE (FIELD_OFFSET(MSiSCSI_SessionStatistics, FormatErrors) + MSiSCSI_SessionStatistics_FormatErrors_SIZE)

// MSiSCSI_InitiatorLoginStatistics - MSiSCSI_InitiatorLoginStatistics
// iSCSI Initiator Login Statistics

//
// This class exposes login statistics
//
// This class must be registered with PDO instance names
//

#define MSiSCSI_InitiatorLoginStatisticsGuid \
    { 0xf022f413,0x3bf5,0x47ec, { 0xa9,0x42,0x33,0xb8,0x1c,0xf8,0xe7,0xff } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_InitiatorLoginStatistics_GUID, \
            0xf022f413,0x3bf5,0x47ec,0xa9,0x42,0x33,0xb8,0x1c,0xf8,0xe7,0xff);
#endif


typedef struct _MSiSCSI_InitiatorLoginStatistics
{
    // Id that is globally unique to each instance of each adapter. This is the value reported by the MSiSCSI_HBAInformation class.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_InitiatorLoginStatistics_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_InitiatorLoginStatistics_UniqueAdapterId_ID 1

    // Count of Login Accept Responses
    ULONG LoginAcceptRsps;
    #define MSiSCSI_InitiatorLoginStatistics_LoginAcceptRsps_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginAcceptRsps_ID 2

    // Count of Login other failed Responses
    ULONG LoginOtherFailRsps;
    #define MSiSCSI_InitiatorLoginStatistics_LoginOtherFailRsps_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginOtherFailRsps_ID 3

    // Count of Login Redirect Responses
    ULONG LoginRedirectRsps;
    #define MSiSCSI_InitiatorLoginStatistics_LoginRedirectRsps_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginRedirectRsps_ID 4

    // Count of Login Authentication Failed Responses
    ULONG LoginAuthFailRsps;
    #define MSiSCSI_InitiatorLoginStatistics_LoginAuthFailRsps_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginAuthFailRsps_ID 5

    // Count of the number of times a login is aborted due to a target authentication failure
    ULONG LoginAuthenticateFails;
    #define MSiSCSI_InitiatorLoginStatistics_LoginAuthenticateFails_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginAuthenticateFails_ID 6

    // Count of the number of times login failed due to negotiation failure with target
    ULONG LoginNegotiateFails;
    #define MSiSCSI_InitiatorLoginStatistics_LoginNegotiateFails_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginNegotiateFails_ID 7

    // Count of Logout command PDU with reason code 0
    ULONG LogoutNormals;
    #define MSiSCSI_InitiatorLoginStatistics_LogoutNormals_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LogoutNormals_ID 8

    // Count of Logout command PDUs with status code other than 0
    ULONG LogoutOtherCodes;
    #define MSiSCSI_InitiatorLoginStatistics_LogoutOtherCodes_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LogoutOtherCodes_ID 9

    // The object counts the number of times a login attempt from this local initiator has failed
    ULONG LoginFailures;
    #define MSiSCSI_InitiatorLoginStatistics_LoginFailures_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginFailures_ID 10

} MSiSCSI_InitiatorLoginStatistics, *PMSiSCSI_InitiatorLoginStatistics;

#define MSiSCSI_InitiatorLoginStatistics_SIZE (FIELD_OFFSET(MSiSCSI_InitiatorLoginStatistics, LoginFailures) + MSiSCSI_InitiatorLoginStatistics_LoginFailures_SIZE)

// MSiSCSI_InitiatorInstanceStatistics - MSiSCSI_InitiatorInstanceStatistics
// iSCSI Initiator Instance Statistics

//
// This class exposes initiator statistics
//
// This class must be registered with PDO instance names
//

#define MSiSCSI_InitiatorInstanceStatisticsGuid \
    { 0xfa30c290,0x68db,0x430a, { 0xaf,0x76,0x91,0xa2,0xe1,0xc4,0x91,0x54 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_InitiatorInstanceStatistics_GUID, \
            0xfa30c290,0x68db,0x430a,0xaf,0x76,0x91,0xa2,0xe1,0xc4,0x91,0x54);
#endif


typedef struct _MSiSCSI_InitiatorInstanceStatistics
{
    // Id that is globally unique to each instance of each adapter. This is the value reported by the MSiSCSI_HBAInformation class.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_InitiatorInstanceStatistics_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_InitiatorInstanceStatistics_UniqueAdapterId_ID 1

    // Count of Session digest errors
    ULONG SessionDigestErrorCount;
    #define MSiSCSI_InitiatorInstanceStatistics_SessionDigestErrorCount_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorInstanceStatistics_SessionDigestErrorCount_ID 2

    // Count of Session connection timeout error
    ULONG SessionConnectionTimeoutErrorCount;
    #define MSiSCSI_InitiatorInstanceStatistics_SessionConnectionTimeoutErrorCount_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorInstanceStatistics_SessionConnectionTimeoutErrorCount_ID 3

    // Count of Session format error
    ULONG SessionFormatErrorCount;
    #define MSiSCSI_InitiatorInstanceStatistics_SessionFormatErrorCount_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorInstanceStatistics_SessionFormatErrorCount_ID 4

    // Number of Sessions failed belonging to this instance
    ULONG SessionFailureCount;
    #define MSiSCSI_InitiatorInstanceStatistics_SessionFailureCount_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorInstanceStatistics_SessionFailureCount_ID 5

} MSiSCSI_InitiatorInstanceStatistics, *PMSiSCSI_InitiatorInstanceStatistics;

#define MSiSCSI_InitiatorInstanceStatistics_SIZE (FIELD_OFFSET(MSiSCSI_InitiatorInstanceStatistics, SessionFailureCount) + MSiSCSI_InitiatorInstanceStatistics_SessionFailureCount_SIZE)

// MSiSCSI_NICPerformance - MSiSCSI_NICPerformance

//
// NIC performance information class, implement one instance for each port on
// your adapter. 
//
// This class must be registered with PDO instance names with one instance
// names for each port
//

#define MSiSCSI_NICPerformanceGuid \
    { 0x5c59fd61,0xe919,0x4687, { 0x84,0xe2,0x72,0x00,0xab,0xe2,0x20,0x9b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_NICPerformance_GUID, \
            0x5c59fd61,0xe919,0x4687,0x84,0xe2,0x72,0x00,0xab,0xe2,0x20,0x9b);
#endif


typedef struct _MSiSCSI_NICPerformance
{
    // Number of bytes transmitted via ethernet port
    ULONG BytesTransmitted;
    #define MSiSCSI_NICPerformance_BytesTransmitted_SIZE sizeof(ULONG)
    #define MSiSCSI_NICPerformance_BytesTransmitted_ID 1

    // Number of bytes received via ethernet port
    ULONG BytesReceived;
    #define MSiSCSI_NICPerformance_BytesReceived_SIZE sizeof(ULONG)
    #define MSiSCSI_NICPerformance_BytesReceived_ID 2

    // Number of PDU transmitted via ethernet port
    ULONG PDUTransmitted;
    #define MSiSCSI_NICPerformance_PDUTransmitted_SIZE sizeof(ULONG)
    #define MSiSCSI_NICPerformance_PDUTransmitted_ID 3

    // Number of PDU received via ethernet port
    ULONG PDUReceived;
    #define MSiSCSI_NICPerformance_PDUReceived_SIZE sizeof(ULONG)
    #define MSiSCSI_NICPerformance_PDUReceived_ID 4

} MSiSCSI_NICPerformance, *PMSiSCSI_NICPerformance;

#define MSiSCSI_NICPerformance_SIZE (FIELD_OFFSET(MSiSCSI_NICPerformance, PDUReceived) + MSiSCSI_NICPerformance_PDUReceived_SIZE)

// MSiSCSI_RequestTimeStatistics - MSiSCSI_RequestTimeStatistics
// iSCSI Request Processing Time

//
// This class exposes request processing time statistics
//
// This class must be registered with dynamic instance names using
// a specific format: 
//
//       targetname_#:# where the first # is the SID, and the second
//    # is the CID.
//

#define MSiSCSI_RequestTimeStatisticsGuid \
    { 0xe0b40aa8,0x544b,0x4d5e, { 0xba,0x60,0xa0,0x3f,0x13,0x6d,0xa8,0x3d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_RequestTimeStatistics_GUID, \
            0xe0b40aa8,0x544b,0x4d5e,0xba,0x60,0xa0,0x3f,0x13,0x6d,0xa8,0x3d);
#endif


typedef struct _MSiSCSI_RequestTimeStatistics
{
    // Name of the iSCSI Target
    WCHAR iSCSIName[223 + 1];
    #define MSiSCSI_RequestTimeStatistics_iSCSIName_ID 1

    // The iSCSI connection ID for this connection instance.
    USHORT CID;
    #define MSiSCSI_RequestTimeStatistics_CID_SIZE sizeof(USHORT)
    #define MSiSCSI_RequestTimeStatistics_CID_ID 2

    // A uniquely generated session ID used only internally.  This is the value returned by the LoginToTarget method.
    ULONGLONG USID;
    #define MSiSCSI_RequestTimeStatistics_USID_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_RequestTimeStatistics_USID_ID 3

    // Id that is globally unique to each instance of each adapter. This is the value reported by the MSiSCSI_HBAInformation class.
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_RequestTimeStatistics_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_RequestTimeStatistics_UniqueAdapterId_ID 4

    // Maximum time taken to process a request over this connection
    ULONG MaximumProcessingTime;
    #define MSiSCSI_RequestTimeStatistics_MaximumProcessingTime_SIZE sizeof(ULONG)
    #define MSiSCSI_RequestTimeStatistics_MaximumProcessingTime_ID 5

    // Average time taken to process a request over this connection
    ULONG AverageProcessingTime;
    #define MSiSCSI_RequestTimeStatistics_AverageProcessingTime_SIZE sizeof(ULONG)
    #define MSiSCSI_RequestTimeStatistics_AverageProcessingTime_ID 6

} MSiSCSI_RequestTimeStatistics, *PMSiSCSI_RequestTimeStatistics;

#define MSiSCSI_RequestTimeStatistics_SIZE (FIELD_OFFSET(MSiSCSI_RequestTimeStatistics, AverageProcessingTime) + MSiSCSI_RequestTimeStatistics_AverageProcessingTime_SIZE)

#endif
