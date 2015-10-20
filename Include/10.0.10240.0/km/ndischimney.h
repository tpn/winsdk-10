//
//    Copyright (C) Microsoft.  All rights reserved.
//
#ifndef _CHIMNEY_OFFLOAD_
#define _CHIMNEY_OFFLOAD_

#if defined(_MSC_VER)
#if _MSC_VER > 1000
#pragma once
#endif
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4001) /* nonstandard extension : single line comment */
#pragma warning(disable:4201) /* nonstandard extension used : nameless struct/union */
#pragma warning(disable:4214) /* nonstandard extension used : bit field types other then int */
#endif // defined(_MSC_VER)

#if NDIS_SUPPORT_NDIS6

//
// This is the encapsulation type used by the stack for TCP connection offload
//
typedef struct _NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION
{
    struct
    {
        UCHAR   Enabled;
        ULONG   EncapsulationType;
        ULONG   HeaderSize;
    }V4;
    struct
    {
        UCHAR   Enabled;
        ULONG   EncapsulationType;
        ULONG   HeaderSize;
    }V6;

}NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION, NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION;
//
// These are the parameters that the stack sets on the NIC to use during
// connection offload by setting OID OID_TCP_CONNECTION_OFFLOAD_PARAMETERS
//

//
// Header.Type = NDIS_OBJECT_TYPE_DEFAULT;
// Header.Revision = NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS_1;
// Header.Size = sizeof(NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS);
//
#define NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS_1            1
#if NDIS_SUPPORT_NDIS61
#define NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS_2            2
#endif // NDIS_SUPPORT_NDIS61

typedef struct _NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS
{
    NDIS_OBJECT_HEADER Header;
    NDIS_OFFLOAD_ENCAPSULATION Encapsulation;
    ULONG TicksPerSecond;
    UCHAR TcpAckFrequency;
    UCHAR TcpDelayedAckTicks;
    UCHAR TcpMaximumRetransmissions;
    UCHAR TcpDoubtReachabilityRetransmissions;
    ULONG TcpSwsPreventionTicks;
    ULONG TcpDuplicateAckThreshold;
    ULONG TcpPushTicks;
    ULONG NceStaleTicks;
#if NDIS_SUPPORT_NDIS61
    ULONG CongestionAlgorithm;
#endif // NDIS_SUPPORT_NDIS61
} NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS, *PNDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS;

#define NDIS_SIZEOF_TCP_CONNECTION_OFFLOAD_PARAMETERS_REVISION_1 \
    RTL_SIZEOF_THROUGH_FIELD(NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS, NceStaleTicks)
#if NDIS_SUPPORT_NDIS61
#define NDIS_SIZEOF_TCP_CONNECTION_OFFLOAD_PARAMETERS_REVISION_2 \
    RTL_SIZEOF_THROUGH_FIELD(NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS, CongestionAlgorithm)
#endif // NDIS_SUPPORT_NDIS61

//
// NDIS_CHIMNEY_OFFLOAD_TYPE
//
// Specifies the chimney type.
//
typedef enum
{
    NdisTcpChimneyOffload = 1,
    NdisIpsecChimneyOffload,
    NdisRdmaChimneyOffload,
    NdisMaxChimneyOffload
} NDIS_CHIMNEY_OFFLOAD_TYPE, *PNDIS_CHIMNEY_OFFLOAD_TYPE;

//
// INDICATE_OFFLOAD_EVENT
//
// Qualifies a Offload Event indication.
//
typedef enum
{
    NeighborReachabilityInDoubt = 0x0001,
    NeighborReachabilityQuery,
    MaxOffloadEvent
} INDICATE_OFFLOAD_EVENT, *PINDICATE_OFFLOAD_EVENT;

//
// OFFLOAD_STATE_TYPE
//
// State type at each layer in the stack.
//
typedef enum
{
    NeighborOffloadConstState = 0x1,
    NeighborOffloadCachedState,
    NeighborOffloadDelegatedState,
    NeighborOffloadState,
    Ip4OffloadConstState,
    Ip4OffloadCachedState,
    Ip4OffloadDelegatedState,
    Ip4OffloadState,
    Ip6OffloadConstState,
    Ip6OffloadCachedState,
    Ip6OffloadDelegatedState,
    Ip6OffloadState,
    TcpOffloadConstState,
    TcpOffloadCachedState,
    TcpOffloadDelegatedState,
    TcpOffloadResourceState,
    TcpOffloadState,
    FilterReservedOffloadState = 0xFE,
    MaximumOffloadState
} OFFLOAD_STATE_TYPE, *POFFLOAD_STATE_TYPE;

//
// OFFLOAD_STATE_HEADER
//
// Offload state header, precedes each offload state.
//
typedef struct _OFFLOAD_STATE_HEADER
{
    ULONG Length;
    ULONG RecognizedOptions;
} OFFLOAD_STATE_HEADER, *POFFLOAD_STATE_HEADER;

//
//
// TCP_OFFLOAD_CONNECTION_STATE
//
// TCP connection state [RFC 793].
//
typedef enum
{
    TcpConnectionClosed,
    TcpConnectionListen,
    TcpConnectionSynSent,
    TcpConnectionSynRcvd,
    TcpConnectionEstablished,
    TcpConnectionFinWait1,
    TcpConnectionFinWait2,
    TcpConnectionCloseWait,
    TcpConnectionClosing,
    TcpConnectionLastAck,
    TcpConnectionTimeWait,
    TcpConnectionMaxState
} TCP_OFFLOAD_CONNECTION_STATE, *PTCP_OFFLOAD_CONNECTION_STATE;

//
// TCP_UPLOAD_REASON
//
// Reason for uploading an offloaded TCP connection back to the host.
//
typedef enum
{
    LowActivity = 1,
    HighDropRate,
    SmallIO,
    NoBufferPreposting,
    NoBufferProposting = NoBufferPreposting, // Legacy spelling error
    ReceivedUrgentData,
    HighFragmentation,
    HighOutOfOrderPackets,
    TimeoutExpiration,
    InvalidState,
    UploadRequested,
    HardwareFailure,
    MaxUploadReason
} TCP_UPLOAD_REASON, *PTCP_UPLOAD_REASON;

//
// Qualifies a disconnect event or a disconnect request on a TCP connection.
//
#define TCP_DISCONNECT_GRACEFUL_CLOSE   0x01
#define TCP_DISCONNECT_ABORTIVE_CLOSE   0x02

//
// TCP_OFFLOAD_EVENT_TYPE
//
// Event indications possible on an offloaded TCP connection.
//
typedef enum
{
    TcpIndicateSendBacklogChange = 1,
    TcpIndicateDisconnect,
    TcpIndicateRetrieve,
    TcpIndicateAbort
} TCP_OFFLOAD_EVENT_TYPE, *PTCP_OFFLOAD_EVENT_TYPE;


//
// Flags part of the TCP constant state.
//
#define TCP_FLAG_TIMESTAMP_ENABLED      0x01
#define TCP_FLAG_SACK_ENABLED           0x02
#define TCP_FLAG_WINDOW_SCALING_ENABLED 0x04

//
// TCP_OFFLOAD_STATE_CONST
//
// Constant fields of a Connection.
//
typedef struct _TCP_OFFLOAD_STATE_CONST
{
    OFFLOAD_STATE_HEADER Header;
    USHORT Flags;
    USHORT RemotePort;
    USHORT LocalPort;
    UCHAR SndWindScale: 4;
    UCHAR RcvWindScale: 4;
    USHORT RemoteMss;
    ULONG HashValue;
} TCP_OFFLOAD_STATE_CONST, *PTCP_OFFLOAD_STATE_CONST;

//
// Flags part of the TCP cached state.
//
#define TCP_FLAG_KEEP_ALIVE_ENABLED     0x01
#define TCP_FLAG_NAGLING_ENABLED        0x02
#define TCP_FLAG_KEEP_ALIVE_RESTART     0x04
#define TCP_FLAG_MAX_RT_RESTART         0x08
#define TCP_FLAG_UPDATE_RCV_WND         0x10

//
// TCP_OFFLOAD_STATE_CACHED
//
// Cached fields of a TCB.
//
typedef struct _TCP_OFFLOAD_STATE_CACHED
{
    OFFLOAD_STATE_HEADER Header;
    USHORT Flags;
    ULONG InitialRcvWnd;
    ULONG RcvIndicationSize;
    UCHAR KaProbeCount;
    ULONG KaTimeout;
    ULONG KaInterval;
    ULONG MaxRT;
    ULONG FlowLabel:20;
    UCHAR TtlOrHopLimit;
    UCHAR TosOrTrafficClass;
    UCHAR UserPriority:3;
} TCP_OFFLOAD_STATE_CACHED, *PTCP_OFFLOAD_STATE_CACHED;

//
// TCP_OFFLOAD_STATE_DELEGATED
//
// Delegated fields of a TCB.
//
typedef struct _TCP_OFFLOAD_STATE_DELEGATED
{
    OFFLOAD_STATE_HEADER Header;
    TCP_OFFLOAD_CONNECTION_STATE State;
    USHORT Flags;
    ULONG RcvNxt;
    ULONG RcvWnd;
    ULONG SndUna;
    ULONG SndNxt;
    ULONG SndMax;
    ULONG SndWnd;
    ULONG MaxSndWnd;
    ULONG SendWL1;
    ULONG CWnd;
    ULONG SsThresh;
    USHORT SRtt;
    USHORT RttVar;
    ULONG TsRecent;
    ULONG TsRecentAge;
    ULONG TsTime;
    ULONG TotalRT;
    UCHAR DupAckCount;
    UCHAR SndWndProbeCount;

    struct
    {
        UCHAR ProbeCount;
        ULONG TimeoutDelta;
    } KeepAlive;

    struct
    {
        UCHAR Count;
        ULONG TimeoutDelta;
    } Retransmit;

    union
    {
        struct
        {
            PNET_BUFFER_LIST SendDataHead;
            PNET_BUFFER_LIST SendDataTail;
        };

        ULONG SendBacklogSize;
    };

    union
    {
        PNET_BUFFER_LIST BufferedData;
        ULONG ReceiveBacklogSize;
    };
#if NDIS_SUPPORT_NDIS61
    ULONG DWnd;
#endif // NDIS_SUPPORT_NDIS61
} TCP_OFFLOAD_STATE_DELEGATED, *PTCP_OFFLOAD_STATE_DELEGATED;

//
// PATH_OFFLOAD_STATE_CONST
//
// IP path constant parameters.
//
typedef struct _PATH_OFFLOAD_STATE_CONST
{
    OFFLOAD_STATE_HEADER Header;
    CONST UCHAR *SourceAddress;
    CONST UCHAR *DestinationAddress;
} PATH_OFFLOAD_STATE_CONST, *PPATH_OFFLOAD_STATE_CONST;

//
// PATH_OFFLOAD_STATE_CACHED
//
// IP path cached parameters.
//
typedef struct _PATH_OFFLOAD_STATE_CACHED
{
    OFFLOAD_STATE_HEADER Header;
    ULONG PathMtu;
} PATH_OFFLOAD_STATE_CACHED, *PPATH_OFFLOAD_STATE_CACHED;

//
// PATH_OFFLOAD_STATE_DELEGATED
//
// IP path delegated parameters.
//
typedef struct _PATH_OFFLOAD_STATE_DELEGATED
{
    OFFLOAD_STATE_HEADER Header;
} PATH_OFFLOAD_STATE_DELEGATED, *PPATH_OFFLOAD_STATE_DELEGATED;

//
// NEIGHBOR_OFFLOAD_STATE_CONST
//
// Neighbor const parameters.
//
typedef struct _NEIGHBOR_OFFLOAD_STATE_CONST
{
    OFFLOAD_STATE_HEADER Header;
    UCHAR DlSourceAddress[32];
    ULONG VlanId: 12;
} NEIGHBOR_OFFLOAD_STATE_CONST, *PNEIGHBOR_OFFLOAD_STATE_CONST;

//
// NEIGHBOR_OFFLOAD_STATE_CACHED
//
// Neighbor cached parameters.
//
typedef struct _NEIGHBOR_OFFLOAD_STATE_CACHED
{
    OFFLOAD_STATE_HEADER Header;
    UCHAR DlDestinationAddress[32];
    ULONG HostReachabilityDelta;
} NEIGHBOR_OFFLOAD_STATE_CACHED, *PNEIGHBOR_OFFLOAD_STATE_CACHED;

//
// NEIGHBOR_OFFLOAD_STATE_DELEGATED
//
// Neighbor cached parameters.
//
typedef struct _NEIGHBOR_OFFLOAD_STATE_DELEGATED
{
    OFFLOAD_STATE_HEADER Header;
    ULONG NicReachabilityDelta;
} NEIGHBOR_OFFLOAD_STATE_DELEGATED, *PNEIGHBOR_OFFLOAD_STATE_DELEGATED;


//
// TCP_OFFLOAD_STATS
//
// Statistics definitions in TCP on a per interface basis
//
typedef struct _TCP_OFFLOAD_STATS
{
    ULONG64 InSegments;
    ULONG64 OutSegments;
    ULONG CurrentlyEstablished;
    ULONG ResetEstablished;
    ULONG RetransmittedSegments;
    ULONG InErrors;
    ULONG OutResets;
} TCP_OFFLOAD_STATS, *PTCP_OFFLOAD_STATS;

//
// IP_OFFLOAD_STATS
//
// Stats definitions in IPV4/IPV6 on a per interface basis
//
typedef struct _IP_OFFLOAD_STATS
{
    ULONG64 InReceives;
    ULONG64 InOctets;
    ULONG64 InDelivers;
    ULONG64 OutRequests;
    ULONG64 OutOctets;
    ULONG InHeaderErrors;
    ULONG InTruncatedPackets;
    ULONG InDiscards;
    ULONG OutDiscards;
    ULONG OutNoRoutes;
} IP_OFFLOAD_STATS, *PIP_OFFLOAD_STATS;


typedef struct _NDIS_OFFLOAD_HANDLE
{
    PVOID NdisReserved[1];
    PVOID MiniportOffloadContext;
} NDIS_OFFLOAD_HANDLE, *PNDIS_OFFLOAD_HANDLE;


//
// Internal wrapper sround NDIS_OFFLOAD_HANDLE.
// ProtocolBindingContext is required for handling Receive Indications in FL.
//
typedef struct _NDIS_OFFLOAD_HANDLE_PRIVATE
{
    NDIS_OFFLOAD_HANDLE Handle;
    PVOID ProtocolBindingContext;
} NDIS_OFFLOAD_HANDLE_PRIVATE, *PNDIS_OFFLOAD_HANDLE_PRIVATE;


typedef struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST
{
    IN NDIS_OBJECT_HEADER Header;
    IN struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *NextBlock;
    IN struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *DependentBlockList;
    OUT NDIS_STATUS Status;
    IN PVOID NdisReserved[3];
    IN OUT PNDIS_OFFLOAD_HANDLE OffloadHandle;
    IN PVOID ProtocolReserved[2];
    IN PVOID MiniportReserved[2];
    IN PVOID ImReserved[2];
    IN PVOID Scratch[2];
    IN PVOID SourceHandle;
    IN NDIS_PORT_NUMBER PortNumber;
    IN OUT PNET_BUFFER_LIST NetBufferListChain;
    //
    // The state specific information (if any)  will follow this.
    //
} NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST, *PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST;

//
// Generic offload functions supported by the protocol.
//
typedef
VOID
(*INITIATE_OFFLOAD_COMPLETE_HANDLER)(
    IN NDIS_HANDLE                           ProtocolBindingContext,
    IN PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

typedef
VOID
(*TERMINATE_OFFLOAD_COMPLETE_HANDLER)(
    IN NDIS_HANDLE                           ProtocolBindingContext,
    IN PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

typedef
VOID
(*INVALIDATE_OFFLOAD_COMPLETE_HANDLER)(
    IN NDIS_HANDLE                           ProtocolBindingContext,
    IN PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

typedef
VOID
(*UPDATE_OFFLOAD_COMPLETE_HANDLER)(
    IN NDIS_HANDLE                           ProtocolBindingContext,
    IN PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

typedef
VOID
(*QUERY_OFFLOAD_COMPLETE_HANDLER)(
    IN NDIS_HANDLE                           ProtocolBindingContext,
    IN PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

//
// Generic indication handlers supported by the protocol.
//
typedef
VOID
(*INDICATE_OFFLOAD_EVENT_HANDLER)(
    IN NDIS_HANDLE                           ProtocolBindingContext,
    IN PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST     OffloadBlockList,
    IN ULONG                                 IndicationCode
    );

//
// Tcp offload specific functions supported by the protocol, for completions.
//
typedef
VOID
(*TCP_OFFLOAD_SEND_COMPLETE_HANDLER)(
    IN NDIS_HANDLE                           ProtocolBindingContext,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

typedef
VOID
(*TCP_OFFLOAD_RECV_COMPLETE_HANDLER)(
    IN NDIS_HANDLE                           ProtocolBindingContext,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

typedef
VOID
(*TCP_OFFLOAD_DISCONNECT_COMPLETE_HANDLER)(
    IN NDIS_HANDLE                           ProtocolBindingContext,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

typedef
VOID
(*TCP_OFFLOAD_FORWARD_COMPLETE_HANDLER)(
    IN NDIS_HANDLE                           ProtocolBindingContext,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

//
// Tcp offload specific functions supported by the protocol, for indications.
//
typedef
VOID
(*TCP_OFFLOAD_EVENT_HANDLER)(
    IN PVOID                                 OffloadContext,
    IN ULONG                                 EventType,
    IN ULONG                                 EventSpecificInformation
    );

typedef
NDIS_STATUS
(*TCP_OFFLOAD_RECEIVE_INDICATE_HANDLER)(
    IN PVOID                                 OffloadContext,
    IN PNET_BUFFER_LIST                      NetBufferList,
    IN NDIS_STATUS                           Status,
    OUT PULONG                               BytesConsumed
    );

typedef struct _NDIS_OFFLOAD_CLIENT_HANDLERS
{
    NDIS_OBJECT_HEADER                       Header;
} NDIS_OFFLOAD_CLIENT_HANDLERS, *PNDIS_OFFLOAD_CLIENT_HANDLERS;

typedef struct _NDIS_TCP_OFFLOAD_CLIENT_HANDLERS
{
    NDIS_OBJECT_HEADER                       Header;
    TCP_OFFLOAD_SEND_COMPLETE_HANDLER        TcpOffloadSendCompleteHandler;
    TCP_OFFLOAD_RECV_COMPLETE_HANDLER        TcpOffloadReceiveCompleteHandler;
    TCP_OFFLOAD_DISCONNECT_COMPLETE_HANDLER  TcpOffloadDisconnectCompleteHandler;
    TCP_OFFLOAD_FORWARD_COMPLETE_HANDLER     TcpOffloadForwardCompleteHandler;
    TCP_OFFLOAD_EVENT_HANDLER                TcpOffloadEventHandler;
    TCP_OFFLOAD_RECEIVE_INDICATE_HANDLER     TcpOffloadReceiveIndicateHandler;
} NDIS_TCP_OFFLOAD_CLIENT_HANDLERS, *PNDIS_TCP_OFFLOAD_CLIENT_HANDLERS;


#define NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS_REVISION_1     1

typedef struct _NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS
{
    NDIS_OBJECT_HEADER                      Header;     // Header.Type = NDIS_OBJECT_TYPE_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS
    ULONG                                   Flags;
    //
    // Generic Offload initiation and termination completion handlers.
    //
    INITIATE_OFFLOAD_COMPLETE_HANDLER        InitiateOffloadCompleteHandler;
    TERMINATE_OFFLOAD_COMPLETE_HANDLER       TerminateOffloadCompleteHandler;

    //
    // Generic offload state control request completion handlers.
    //
    UPDATE_OFFLOAD_COMPLETE_HANDLER          UpdateOffloadCompleteHandler;
    INVALIDATE_OFFLOAD_COMPLETE_HANDLER      InvalidateOffloadCompleteHandler;
    QUERY_OFFLOAD_COMPLETE_HANDLER           QueryOffloadCompleteHandler;

    //
    // Generic offload state indication handlers.
    //
    INDICATE_OFFLOAD_EVENT_HANDLER           IndicateOffloadEventHandler;

} NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS, *PNDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS;

#define NDIS_SIZEOF_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS_REVISION_1  \
        RTL_SIZEOF_THROUGH_FIELD(NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS, IndicateOffloadEventHandler)

#define NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS_REVISION_1  1

typedef struct _NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS
{
    NDIS_OBJECT_HEADER                          Header;         // Header.Type = NDIS_OBJECT_TYPE_CLIENT_CHIMNEY_OFFLOAD_CHARACTERISTICS
    ULONG                                       Flags;
    NDIS_CHIMNEY_OFFLOAD_TYPE                   OffloadType;    // NdisTcpChimneyOffload
    TCP_OFFLOAD_SEND_COMPLETE_HANDLER           TcpOffloadSendCompleteHandler;
    TCP_OFFLOAD_RECV_COMPLETE_HANDLER           TcpOffloadReceiveCompleteHandler;
    TCP_OFFLOAD_DISCONNECT_COMPLETE_HANDLER     TcpOffloadDisconnectCompleteHandler;
    TCP_OFFLOAD_FORWARD_COMPLETE_HANDLER        TcpOffloadForwardCompleteHandler;
    TCP_OFFLOAD_EVENT_HANDLER                   TcpOffloadEventHandler;
    TCP_OFFLOAD_RECEIVE_INDICATE_HANDLER        TcpOffloadReceiveIndicateHandler;
} NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS, *PNDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS;

#define NDIS_SIZEOF_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS_REVISION_1  \
        RTL_SIZEOF_THROUGH_FIELD(NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS, TcpOffloadReceiveIndicateHandler)

//
// Generic offload functions supported by NDIS, for use by the protocol.
//
EXPORT
VOID
NdisInitiateOffload(
    IN NDIS_HANDLE                           NdisBindingHandle,
    IN OUT PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST OffloadBlockList
    );

EXPORT
VOID
NdisTerminateOffload(
    IN NDIS_HANDLE                           NdisBindingHandle,
    IN OUT PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST OffloadBlockList
    );

EXPORT
VOID
NdisInvalidateOffload(
    IN NDIS_HANDLE                           NdisBindingHandle,
    IN PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

EXPORT
VOID
NdisUpdateOffload(
    IN NDIS_HANDLE                           NdisBindingHandle,
    IN PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

EXPORT
VOID
NdisQueryOffloadState(
    IN NDIS_HANDLE                           NdisBindingHandle,
    IN PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

//
// Tcp specific offload functions supported by NDIS, for use by the protocol.
//
EXPORT
NDIS_STATUS
NdisOffloadTcpSend(
    IN PNDIS_OFFLOAD_HANDLE                  NdisOffloadHandle,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

EXPORT
NDIS_STATUS
NdisOffloadTcpReceive(
    IN PNDIS_OFFLOAD_HANDLE                  NdisOffloadHandle,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

EXPORT
NDIS_STATUS
NdisOffloadTcpDisconnect(
    IN PNDIS_OFFLOAD_HANDLE                  NdisOffloadHandle,
    IN PNET_BUFFER_LIST                      NetBufferList,
    IN ULONG                                 Flags
    );

EXPORT
NDIS_STATUS
NdisOffloadTcpForward(
    IN PNDIS_OFFLOAD_HANDLE                  NdisOffloadHandle,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

VOID
NdisOffloadTcpReceiveReturn(
    IN NDIS_HANDLE                           NdisBindingHandle,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

typedef struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST
{
    IN NDIS_OBJECT_HEADER  Header;
    IN struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST *NextBlock;
    IN struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST *DependentBlockList;
    OUT NDIS_STATUS         Status;
    IN PVOID                NdisReserved[2];
    IN OUT PVOID           *MiniportOffloadContext;
    IN NDIS_HANDLE          NdisOffloadHandle;
    IN PVOID                ProtocolReserved[2];
    IN PVOID                MiniportReserved[2];
    IN PVOID                ImReserved[2];
    IN PVOID                Scratch[2];
    IN PVOID                SourceHandle;
    IN NDIS_PORT_NUMBER     PortNumber;
    IN OUT PNET_BUFFER_LIST NetBufferListChain;
    //
    // The state specific information (if any) will follow this.
    //
} NDIS_MINIPORT_OFFLOAD_BLOCK_LIST, *PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST;

//
// Generic offload functions supported by the miniport.
//
typedef
VOID
(*W_INITIATE_OFFLOAD_HANDLER)(
    IN NDIS_HANDLE                              MiniportAdapterContext,
    IN OUT PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST    OffloadBlockList
    );

typedef
VOID
(*W_TERMINATE_OFFLOAD_HANDLER)(
    IN NDIS_HANDLE                           MiniportAdapterContext,
    IN OUT PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST OffloadBlockList
    );

typedef
VOID
(*W_INVALIDATE_OFFLOAD_HANDLER)(
    IN NDIS_HANDLE                           MiniportAdapterContext,
    IN PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

typedef
VOID
(*W_UPDATE_OFFLOAD_HANDLER)(
    IN NDIS_HANDLE                           MiniportAdapterContext,
    IN PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

typedef
VOID
(*W_QUERY_OFFLOAD_HANDLER)(
    IN NDIS_HANDLE                           MiniportAdapterContext,
    IN OUT PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST OffloadBlockList
    );

//
// Tcp specific offload functions supported by the miniport.
//
typedef
NDIS_STATUS
(*W_TCP_OFFLOAD_SEND_HANDLER)(
    IN NDIS_HANDLE                           MiniportAdapterContext,
    IN PVOID                                 MiniportOffloadContext,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

typedef
NDIS_STATUS
(*W_TCP_OFFLOAD_RECEIVE_HANDLER)(
    IN NDIS_HANDLE                           MiniportAdapterContext,
    IN PVOID                                 MiniportOffloadContext,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

typedef
NDIS_STATUS
(*W_TCP_OFFLOAD_DISCONNECT_HANDLER)(
    IN NDIS_HANDLE                           MiniportAdapterContext,
    IN PVOID                                 MiniportOffloadContext,
    IN PNET_BUFFER_LIST                      NetBufferList,
    IN ULONG                                        Flags
   );

typedef
NDIS_STATUS
(*W_TCP_OFFLOAD_FORWARD_HANDLER)(
    IN NDIS_HANDLE                           MiniportAdapterContext,
    IN PVOID                                 MiniportOffloadContext,
    IN PNET_BUFFER_LIST                      NetBufferList
    );


typedef
NDIS_STATUS
(*W_TCP_OFFLOAD_RECEIVE_RETURN_HANDLER)(
    IN NDIS_HANDLE                           MiniportAdapterContext,
    IN PNET_BUFFER_LIST                      NetBufferList
    );


typedef struct _NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS
{
    NDIS_OBJECT_HEADER  Header;                 // Header.Type = NDIS_OBJECT_TYPE_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS
    ULONG                                    Flags;

    //
    // Generic Offload initiation and termination handlers.
    //
    W_INITIATE_OFFLOAD_HANDLER               InitiateOffloadHandler;
    W_TERMINATE_OFFLOAD_HANDLER              TerminateOffloadHandler;

    //
    // Generic offload state control functions.
    //
    W_UPDATE_OFFLOAD_HANDLER                 UpdateOffloadHandler;
    W_INVALIDATE_OFFLOAD_HANDLER             InvalidateOffloadHandler;
    W_QUERY_OFFLOAD_HANDLER                  QueryOffloadHandler;

} NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS, *PNDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS;

typedef struct _NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS
{
    NDIS_OBJECT_HEADER  Header;                 // Header.Type = NDIS_OBJECT_TYPE_PROVIDER_CHIMNEY_OFFLOAD_CHARACTERISTICS
    ULONG                                    Flags;
    NDIS_CHIMNEY_OFFLOAD_TYPE                OffloadType;    // NdisTcpChimneyOffload
    //
    // TCP function handlers
    //
    W_TCP_OFFLOAD_SEND_HANDLER               TcpOffloadSendHandler;
    W_TCP_OFFLOAD_RECEIVE_HANDLER            TcpOffloadReceiveHandler;
    W_TCP_OFFLOAD_DISCONNECT_HANDLER         TcpOffloadDisconnectHandler;
    W_TCP_OFFLOAD_FORWARD_HANDLER            TcpOffloadForwardHandler;

    //
    // Receive return handler.
    //
    W_TCP_OFFLOAD_RECEIVE_RETURN_HANDLER     TcpOffloadReceiveReturnHandler;

} NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS, *PNDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS;



//
// Generic offload functions supported by NDIS for use by the miniport.
//
EXPORT
VOID
NdisMInitiateOffloadComplete(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

EXPORT
VOID
NdisMTerminateOffloadComplete(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

EXPORT
VOID
NdisMInvalidateOffloadComplete(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

EXPORT
VOID
NdisMUpdateOffloadComplete(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

EXPORT
VOID
NdisMQueryOffloadStateComplete(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST     OffloadBlockList
    );

//
// Generic offload event indication handlers.
//
EXPORT
VOID
NdisMOffloadEventIndicate(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST     OffloadBlockList,
    IN ULONG                                 IndicationCode
    );

//
// Tcp offload specific functions supported by NDIS used for completions.
//
typedef
VOID
(*NDIS_TCP_OFFLOAD_SEND_COMPLETE)(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

typedef
VOID
(*NDIS_TCP_OFFLOAD_RECEIVE_COMPLETE)(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

typedef
VOID
(*NDIS_TCP_OFFLOAD_DISCONNECT_COMPLETE)(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

typedef
VOID
(*NDIS_TCP_OFFLOAD_FORWARD_COMPLETE)(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN PNET_BUFFER_LIST                      NetBufferList
    );

//
// Tcp offload specific functions supported by NDIS used for indication.
//
typedef
VOID
(*NDIS_TCP_OFFLOAD_EVENT_INDICATE)(
    IN NDIS_HANDLE                           NdisOffloadHandle,
    IN ULONG                                 EventType,
    IN ULONG                                 EventSpecificInformation
    );

typedef
NDIS_STATUS
(*NDIS_TCP_OFFLOAD_RECEIVE_INDICATE)(
    IN NDIS_HANDLE                           NdisOffloadHandle,
    IN PNET_BUFFER_LIST                      NetBufferList,
    IN NDIS_STATUS                           Status,
    OUT PULONG                               BytesConsumed
    );

typedef struct _NDIS_OFFLOAD_EVENT_HANDLERS
{
    NDIS_OBJECT_HEADER                       Header;
} NDIS_OFFLOAD_EVENT_HANDLERS, *PNDIS_OFFLOAD_EVENT_HANDLERS;


EXPORT
NDIS_STATUS
NdisMGetOffloadHandlers(
    IN NDIS_HANDLE                           NdisMiniportHandle,
    IN NDIS_CHIMNEY_OFFLOAD_TYPE             ChimneyType,
    OUT PNDIS_OFFLOAD_EVENT_HANDLERS         *OffloadHandlers
    );


#define NDIS_OBJECT_TCP_OFFLOAD_REVISION_1      1

typedef struct _NDIS_TCP_OFFLOAD_EVENT_HANDLERS
{
    NDIS_OBJECT_HEADER                       Header;
    NDIS_TCP_OFFLOAD_EVENT_INDICATE          NdisTcpOffloadEventHandler;
    NDIS_TCP_OFFLOAD_RECEIVE_INDICATE        NdisTcpOffloadReceiveHandler;
    NDIS_TCP_OFFLOAD_SEND_COMPLETE           NdisTcpOffloadSendComplete;
    NDIS_TCP_OFFLOAD_RECEIVE_COMPLETE        NdisTcpOffloadReceiveComplete;
    NDIS_TCP_OFFLOAD_DISCONNECT_COMPLETE     NdisTcpOffloadDisconnectComplete;
    NDIS_TCP_OFFLOAD_FORWARD_COMPLETE        NdisTcpOffloadForwardComplete;
} NDIS_TCP_OFFLOAD_EVENT_HANDLERS, *PNDIS_TCP_OFFLOAD_EVENT_HANDLERS;

#define NDIS_SIZEOF_TCP_OFFLOAD_EVENT_HANDLERS_REVISION_1  \
        RTL_SIZEOF_THROUGH_FIELD(NDIS_TCP_OFFLOAD_EVENT_HANDLERS, NdisTcpOffloadForwardComplete)

#endif // NDIS_SUPPORT_NDIS6

#if defined (_MSC_VER)
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4001) /* nonstandard extension : single line comment */
#pragma warning(default:4201) /* nonstandard extension used : nameless struct/union */
#pragma warning(default:4214) /* nonstandard extension used : bit field types other then int */
#endif
#endif

#endif //_CHIMNEY_OFFLOAD

