/*
    Copyright (c) Microsoft Corporation.  All rights reserved.

    Microsoft Confidential

    THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
    KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR
    PURPOSE.

    Module Name:
    dot11wdi.h

    Abstract:
    WDI based NDIS miniport driver interface (Specific to WDI Interface Version 0.90)

    */
#ifndef __DOT11WDI_H__
#define __DOT11WDI_H__
    
#pragma once
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)



#include <packon.h>

#ifdef __cplusplus
extern "C" {
#endif 

//
// Message IDs
//
#define WDI_TASK_OPEN                                               1
#define WDI_TASK_CLOSE                                              2
#define WDI_SET_HOST_DETECT_ERROR                                   3
#define WDI_TASK_SCAN                                               4
#define WDI_TASK_P2P_DISCOVER                                       5
#define WDI_TASK_CONNECT                                            6
#define WDI_TASK_DOT11_RESET                                        7
#define WDI_TASK_DISCONNECT                                         8
#define WDI_TASK_P2P_SEND_REQUEST_ACTION_FRAME                      9
#define WDI_TASK_P2P_SEND_RESPONSE_ACTION_FRAME                     10
#define WDI_TASK_SET_RADIO_STATE                                    11
#define WDI_TASK_CREATE_PORT                                        12
#define WDI_TASK_DELETE_PORT                                        13
#define WDI_TASK_START_AP                                           14
#define WDI_TASK_STOP_AP                                            15

#define WDI_TASK_SEND_AP_ASSOCIATION_RESPONSE                       17
#define WDI_TASK_SET_READY_TO_RECEIVE_INDICATIONS                   18
#define WDI_SET_POWER_STATE                                         19
#define WDI_INDICATION_DISCONNECT_COMPLETE                          21
#define WDI_INDICATION_SET_RADIO_STATE_COMPLETE                     22
#define WDI_INDICATION_SET_READY_TO_RECEIVE_INDICATIONS_COMPLETE    23
#define WDI_SET_OPERATION_MODE                                      24
#define WDI_SET_P2P_ADDITIONAL_IE                                   25
#define WDI_SET_P2P_LISTEN_STATE                                    26

#define WDI_SET_PRIVACY_EXEMPTION_LIST                              28
#define WDI_SET_ADD_CIPHER_KEYS                                     29
#define WDI_SET_DELETE_CIPHER_KEYS                                  30
#define WDI_SET_DEFAULT_KEY_ID                                      31
#define WDI_SET_CONNECTION_QUALITY                                  32
#define WDI_GET_STATISTICS                                          34
#define WDI_SET_RECEIVE_PACKET_FILTER                               36
#define WDI_GET_ADAPTER_CAPABILITIES                                37
#define WDI_SET_NETWORK_LIST_OFFLOAD                                41
#define WDI_SET_RECEIVE_COALESCING                                  46
#define WDI_GET_BSS_ENTRY_LIST                                      47


#define WDI_INDICATION_DISASSOCIATION                               51
#define WDI_INDICATION_ROAMING_NEEDED                               52
#define WDI_INDICATION_LINK_STATE_CHANGE                            53
#define WDI_INDICATION_P2P_ACTION_FRAME_RECEIVED                    54
#define WDI_INDICATION_AP_ASSOCIATION_REQUEST_RECEIVED              55
#define WDI_INDICATION_NLO_DISCOVERY                                56
#define WDI_INDICATION_WAKE_REASON                                  57
#define WDI_INDICATION_PMKID_CANDIDATE_LIST_UPDATE                  58
#define WDI_INDICATION_TKIP_MIC_FAILURE                             59
#define WDI_INDICATION_SCAN_COMPLETE                                60
#define WDI_INDICATION_P2P_DISCOVERY_COMPLETE                       61
#define WDI_INDICATION_BSS_ENTRY_LIST                               62
#define WDI_INDICATION_DOT11_RESET_COMPLETE                         63
#define WDI_INDICATION_CONNECT_COMPLETE                             64
#define WDI_INDICATION_P2P_SEND_REQUEST_ACTION_FRAME_COMPLETE       65
#define WDI_INDICATION_P2P_SEND_RESPONSE_ACTION_FRAME_COMPLETE      66
#define WDI_INDICATION_RADIO_STATUS                                 67
#define WDI_INDICATION_CREATE_PORT_COMPLETE                         68
#define WDI_INDICATION_DELETE_PORT_COMPLETE                         69
#define WDI_INDICATION_START_AP_COMPLETE                            70
#define WDI_INDICATION_STOP_AP_COMPLETE                             71
#define WDI_INDICATION_SEND_AP_ASSOCIATION_RESPONSE_COMPLETE        73

#define WDI_INDICATION_ASSOCIATION_RESULT                           76
#define WDI_SET_AUTO_POWER_SAVE                                     77
#define WDI_GET_AUTO_POWER_SAVE                                     78
#define WDI_SET_ADD_WOL_PATTERN                                     79
#define WDI_SET_REMOVE_WOL_PATTERN                                  80
#define WDI_SET_MULTICAST_LIST                                      81
#define WDI_SET_ADD_PM_PROTOCOL_OFFLOAD                             82
#define WDI_SET_REMOVE_PM_PROTOCOL_OFFLOAD                          83
#define WDI_INDICATION_P2P_GROUP_OPERATING_CHANNEL                  84
#define WDI_SET_ADAPTER_CONFIGURATION                               85
#define WDI_GET_RECEIVE_COALESCING_MATCH_COUNT                      86
#define WDI_SET_CLEAR_RECEIVE_COALESCING                            87
#define WDI_GET_PM_PROTOCOL_OFFLOAD                                 88
#define WDI_SET_ADVERTISEMENT_INFORMATION                           89
#define WDI_TASK_CHANGE_OPERATION_MODE                              90
#define WDI_INDICATION_CHANGE_OPERATION_MODE_COMPLETE               91
#define WDI_TASK_DELETE_PEER_STATE                                  92
#define WDI_IHV_REQUEST                                             93
#define WDI_INDICATION_IHV_EVENT                                    94
#define WDI_INDICATION_OPEN_COMPLETE                                95
#define WDI_INDICATION_CLOSE_COMPLETE                               96
#define WDI_SET_FLUSH_BSS_ENTRY                                     97
#define WDI_INDICATION_ASSOCIATION_PARAMETERS_REQUEST               98
#define WDI_SET_ASSOCIATION_PARAMETERS                              99
#define WDI_TASK_ROAM                                               100
#define WDI_INDICATION_ROAM_COMPLETE                                101
#define WDI_TASK_SEND_REQUEST_ACTION_FRAME                          102
#define WDI_INDICATION_ACTION_FRAME_RECEIVED                        103
#define WDI_INDICATION_TASK_OFFLOAD_CURRENT_CONFIG                  104
#define WDI_TASK_SEND_RESPONSE_ACTION_FRAME                         105
#define WDI_INDICATION_SEND_REQUEST_ACTION_FRAME_COMPLETE           106
#define WDI_INDICATION_SEND_RESPONSE_ACTION_FRAME_COMPLETE          107
#define WDI_GET_NEXT_ACTION_FRAME_DIALOG_TOKEN                      108
#define WDI_TASK_IHV                                                109
#define WDI_INDICATION_IHV_TASK_REQUEST                             110
#define WDI_INDICATION_IHV_TASK_COMPLETE                            111

#define WDI_INDICATION_STOP_AP                                      115
#define WDI_INDICATION_CAN_SUSTAIN_AP                               116
#define WDI_SET_TCP_OFFLOAD_PARAMETERS                              117
#define WDI_TCP_RSC_STATISTICS                                      118
#define WDI_SET_P2P_START_BACKGROUND_DISCOVERY                      119
#define WDI_SET_P2P_STOP_BACKGROUND_DISCOVERY                       120
#define WDI_INDICATION_FIRMWARE_STALLED                             121
#define WDI_INDICATION_P2P_OPERATING_CHANNEL_ATTRIBUTES             122
#define WDI_SET_P2P_WPS_ENABLED                                     123
#define WDI_SET_ENCAPSULATION_OFFLOAD                               124
#define WDI_SET_END_DWELL_TIME                                      125
#define WDI_INDICATION_FT_ASSOC_PARAMS_NEEDED                       126
#define WDI_SET_FAST_BSS_TRANSITION_PARAMETERS                      127
#define WDI_SET_NEIGHBOR_REPORT_ENTRIES                             128

// Special codes
/*++
 Abort task request
 -- */
#define WDI_ABORT_TASK                                              75


#include <packoff.h>
//
// Type defs and constants
//
typedef struct _WDI_MAC_ADDRESS
{
    UINT8 Address[6];
} WDI_MAC_ADDRESS, *PWDI_MAC_ADDRESS;
typedef const struct _WDI_MAC_ADDRESS * PCWDI_MAC_ADDRESS;

typedef UINT16 WDI_PORT_ID;

#define WDI_PORT_ID_ADAPTER ((UINT16)-1) // special port id to represent adapter


//
// Indications, except ones for task command completion indications, has this special transaction Id
//
#define WDI_TRANSACTION_ID_UNSOLICIT (0)

typedef struct _WDI_MESSAGE_HEADER
{
    // MessageId, MessageLength come from the NDIS_OID_REQUEST or NDIS_STATUS fields
    WDI_PORT_ID  PortId;
    UINT16 Reserved;
    NDIS_STATUS Status;         // Operation completion status for indication & response
    UINT32  TransactionId;
    UINT32  IhvSpecificId;
} WDI_MESSAGE_HEADER, *PWDI_MESSAGE_HEADER;


typedef enum _WDI_OPERATION_MODE
{
    WDI_OPERATION_MODE_STA = 0x01,
    // Reserved 0x02
    // Reserved 0x04
    WDI_OPERATION_MODE_P2P_DEVICE = 0x08,
    WDI_OPERATION_MODE_P2P_CLIENT = 0x10,
    WDI_OPERATION_MODE_P2P_GO = 0x20,
    // Reserved 0x40
}WDI_OPERATION_MODE;

typedef struct _WDI_P2P_SERVICE_NAME_HASH
{
    UINT8 Hash[6];
} WDI_P2P_SERVICE_NAME_HASH, *PWDI_P2P_SERVICE_NAME_HASH;
typedef const struct _WDI_P2P_SERVICE_NAME_HASH * PCWDI_P2P_SERVICE_NAME_HASH;

/*************************************************************************
*
*
*      Data Path Handlers
*
*
*************************************************************************/

typedef UINT16 WDI_FRAME_ID;

typedef UINT16 WDI_PEER_ID;


/* 5 bit TID:
0-15: 802.11 TIDs
16: non-QoS (WDI_EXT_TID_NON_QOS)
17-24: IHV reserved
31: unknown/unspecified (WDI_EXT_TID_UNKNOWN)
*/
typedef UINT8 WDI_EXTENDED_TID;

#define WDI_PEER_ANY ((WDI_PEER_ID)0xFFFF)
#define WDI_PORT_ANY ((WDI_PORT_ID)0xFFFF)
#define WDI_EXT_TID_UNKNOWN ((WDI_EXTENDED_TID)0x1F)

#define WDI_QUANTUM_INVALID (0xFFFFFFFF)
#define WDI_TX_MAX_FRAME_COUNT_INVALID (0xFF)
#define WDI_TX_CREDIT_INVALID (0xFFFF)

typedef enum _WDI_TXRX_PEER_QOS_CAPS
{
    WDI_TXRX_PeerCfgQosNone = 0,
    WDI_TXRX_PeerCfgQosCapable = 1,
    WDI_TXRX_PeerCfgUapsdTids = 2,
} WDI_TXRX_PEER_QOS_CAPS;

typedef struct _WDI_TXRX_PEER_CFG
{
    WDI_TXRX_PEER_QOS_CAPS PeerQoSConfig;
} WDI_TXRX_PEER_CFG, *PWDI_TXRX_PEER_CFG;

typedef enum _WDI_INTERCONNECT_TYPE
{
    WDI_INTERCONNECT_MEMORY_MAPPED = 0,
    WDI_INTERCONNECT_MESSAGE_BASED = 1,
    WDI_INTERCONNECT_UNKNOWN = 0xFF
} WDI_INTERCONNECT_TYPE;

/*************************************************************************
*
*
*       RX-specific types
*
*
*************************************************************************/

typedef enum _WDI_FRAME_PAYLOAD_TYPE
{
    WDI_FRAME_MSDU = 0,
    WDI_FRAME_MSDU_FRAGMENT = 1,
} WDI_FRAME_PAYLOAD_TYPE;

typedef union _WDI_TXRX_MPDU_PN
{
    /* WEP: 24-bit PN */
    UINT32 Pn24;

    /* TKIP or CCMP: 48-bit PN */
    UINT64 Pn48;

    /* WAPI: 128-bit PN */
    UINT64 Pn128[2];
} WDI_TXRX_MPDU_PN;

/* These levels are to be considered as hints.
* Interpretation and mechanisms for implementation
* are up to IHV
*/
typedef enum _WDI_RX_THROTTLE_LEVEL
{
    WDI_RxThrottleLevelNone = 0x0,
    WDI_RxThrottleLevelMedium = 0x1,
    WDI_RxThrottleLevelAggressive = 0x2,
    WDI_RxThrottleLevelMax = 0xF,
} WDI_RX_THROTTLE_LEVEL;

typedef enum _WDI_TX_FRAME_STATUS
{
    WDI_TxFrameStatus_Ok = 0,
    WDI_TxFrameStatus_Discard,
    WDI_TxFrameStatus_NoAck,
    WDI_TxFrameStatus_TransferCancelled,
    WDI_TxFrameStatus_SendCancelled,
    WDI_TxFrameStatus_SendPostponed,
    WDI_TxFrameStatus_TransferFailed = 128,
} WDI_TX_FRAME_STATUS;

typedef struct _WDI_TX_COMPLETE_DATA
{
    UINT16                SeqCtl;
    UINT8                 PnLength;
    UINT8                 RetryCount;
    UINT16                wPad; // padding to 64 bit
    WDI_TXRX_MPDU_PN     MpduPN;

    UINT64                ReplayIHVReserved0;
    UINT64                ReplayIHVReserved1;
} WDI_TX_COMPLETE_DATA, *PWDI_TX_COMPLETE_DATA;

typedef enum _WDI_EXEMPTION_ACTION_TYPE
{
    WDI_EXEMPT_NO_EXEMPTION = 0,
    WDI_EXEMPT_ALWAYS = 1,
    WDI_EXEMPT_ON_KEY_MAPPING_KEY_UNAVAILABLE = 2,
} WDI_EXEMPTION_ACTION_TYPE;

typedef enum _WDI_TX_PAUSE_REASON
{
    WDI_TX_PAUSE_REASON_NULL        = 0x00000000,
    WDI_TX_PAUSE_REASON_CREDIT      = 0x00000001,
    WDI_TX_PAUSE_REASON_PEER_CREATE = 0x00000002,
    WDI_TX_PAUSE_REASON_PS          = 0x00000004,
    WDI_TX_PAUSE_REASON_IHV_START   = 0x01000000,
    WDI_TX_PAUSE_REASON_IHV_END     = 0x80000000
} WDI_TX_PAUSE_REASON;

typedef enum _WDI_RX_INDICATION_LEVEL
{
    WDI_RX_INDICATION_DISPATCH_GENERAL = 0,
    WDI_RX_INDICATION_DISPATCH_FIRST_OF_DPC = 1,
    WDI_RX_INDICATION_FROM_RX_RESUME_FRAMES = 2,
    WDI_RX_INDICATION_PASSIVE = 3,

    WDI_RX_INDICATION_FLAG_RESOURCES = 0x80000000,

    WDI_RX_INDICATION_DISPATCH_GENERAL_WITH_LOW_RESOURCES       = WDI_RX_INDICATION_FLAG_RESOURCES | WDI_RX_INDICATION_DISPATCH_GENERAL,
    WDI_RX_INDICATION_DISPATCH_FIRST_OF_DPC_WITH_LOW_RESSOURCES = WDI_RX_INDICATION_FLAG_RESOURCES | WDI_RX_INDICATION_DISPATCH_FIRST_OF_DPC,
    WDI_RX_INDICATION_FROM_RX_RESUME_FRAMES_WITH_LOW_RESOURCES  = WDI_RX_INDICATION_FLAG_RESOURCES | WDI_RX_INDICATION_FROM_RX_RESUME_FRAMES,
    WDI_RX_INDICATION_PASSIVE_WITH_LOW_RESOURCES                = WDI_RX_INDICATION_FLAG_RESOURCES | WDI_RX_INDICATION_PASSIVE,
} WDI_RX_INDICATION_LEVEL;

typedef struct _WDI_TXRX_TARGET_CAPABILITIES
{
    WDI_INTERCONNECT_TYPE InterconnectType;
    struct
    {
        BOOLEAN TargetPriorityQueueing;

        UINT16  MaxScatterGatherElementsPerFrame;

        BOOLEAN ExplicitSendCompleteFlagRequired;
        UINT8   bPad;
        UINT16  MinEffectiveSize;
        UINT16  FrameSizeGranularity;
    }TransmitCapabilities;

    struct
    {
        BOOLEAN RxTxForwarding;
        UINT32 MaxThroughput;
    }ReceiveCapabilities;

} WDI_TXRX_CAPABILITIES, *PWDI_TXRX_CAPABILITIES;

typedef struct _WDI_TXRX_PARAMETERS
{
    WDI_TXRX_CAPABILITIES TxRxCapabilities;
} WDI_TXRX_PARAMETERS, *PWDI_TXRX_PARAMETERS;

typedef struct _WDI_TXRX_TARGET_CONFIGURATION
{
    WDI_TXRX_PARAMETERS TxRxParams;
    UINT8 MaxNumPorts;
    UINT8 MaxNumPeers;
} WDI_TXRX_TARGET_CONFIGURATION, *PWDI_TXRX_TARGET_CONFIGURATION;

typedef struct _TAL_TXRX_PARAMETERS
{
    UINT16 MaxOutstandingTransfers;
} TAL_TXRX_PARAMETERS, *PTAL_TXRX_PARAMETERS;

typedef struct _WDI_TX_METADATA
{
    WDI_PORT_ID       PortID;
    WDI_PEER_ID       PeerID;
    WDI_EXTENDED_TID  ExTID;   // 8bit

    BOOLEAN                    IsUnicast;
    BOOLEAN                    bAllowLegacyRates;
    UINT16                     Ethertype;

    BOOLEAN                    bTxCompleteRequired;
    UINT8                      PnLength;
    UINT16                     TxCost;

    WDI_EXEMPTION_ACTION_TYPE ExemptionAction;
    WDI_TXRX_MPDU_PN          MpduPn;

    UINT64                     ReplayIHVReserved0;
    UINT64                     ReplayIHVReserved1;
    UINT16                     SeqCtl;
    UINT16                     wPad;

} WDI_TX_METADATA, *PWDI_TX_METADATA;

typedef struct _WDI_RX_METADATA
{
    WDI_FRAME_PAYLOAD_TYPE  PayloadType;

} WDI_RX_METADATA, *PWDI_RX_METADATA;

typedef struct _WDI_FRAME_METADATA
{
    LIST_ENTRY         Linkage;

    PNET_BUFFER_LIST   pNBL;

    WDI_FRAME_ID      FrameID;

    UINT16             wPad;   // Pad to 32-bit

#ifdef _WIN64
    UINT32             dPad;   // Pad to 64-bit offset
#endif

    union {
        WDI_TX_METADATA txMetaData;
        WDI_RX_METADATA rxMetaData;
    } u;
} WDI_FRAME_METADATA, *PWDI_FRAME_METADATA;


typedef NDIS_HANDLE TAL_TXRX_HANDLE, *PTAL_TXRX_HANDLE;

#include <packon.h>

/*************************************************************************
*
*       TxEng API
*
*************************************************************************/

typedef
void
(MINIPORT_WDI_TX_ABORT)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _Out_ NDIS_STATUS * pWifiStatus
);
typedef MINIPORT_WDI_TX_ABORT (*MINIPORT_WDI_TX_ABORT_HANDLER);

typedef
void
(MINIPORT_WDI_TX_TARGET_DESC_INIT)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ PNET_BUFFER_LIST pNBL,
    _Out_ NDIS_STATUS * pWifiStatus
    );
typedef MINIPORT_WDI_TX_TARGET_DESC_INIT (*MINIPORT_WDI_TX_TARGET_DESC_INIT_HANDLER);

typedef
void
(MINIPORT_WDI_TX_TARGET_DESC_DEINIT)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ PNET_BUFFER_LIST pNBL
    );
typedef MINIPORT_WDI_TX_TARGET_DESC_DEINIT (*MINIPORT_WDI_TX_TARGET_DESC_DEINIT_HANDLER);

typedef
void
(MINIPORT_WDI_TX_DATA_SEND) (
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _In_ WDI_EXTENDED_TID ExTid,
    _In_ UINT16 NumQueueFrames,
    _In_ UINT32 NumActiveFrames,
    _In_ BOOLEAN bRobustnessFlag
    );
typedef MINIPORT_WDI_TX_DATA_SEND (*MINIPORT_WDI_TX_DATA_SEND_HANDLER);

typedef
void
(MINIPORT_WDI_TX_TAL_SEND)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _In_ WDI_EXTENDED_TID ExTid,
    _In_ UINT16 NumQueueFrames,
    _In_ UINT32 NumActiveFrames,
    _In_ BOOLEAN bRobustnessFlag
    );
typedef MINIPORT_WDI_TX_TAL_SEND (*MINIPORT_WDI_TX_TAL_SEND_HANDLER);

typedef
void
(MINIPORT_WDI_TX_TAL_SEND_COMPLETE)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ PNET_BUFFER_LIST pNBL,
    _In_ WDI_TX_FRAME_STATUS TxFrameStatus
    );
typedef MINIPORT_WDI_TX_TAL_SEND_COMPLETE (*MINIPORT_WDI_TX_TAL_SEND_COMPLETE_HANDLER);

typedef
void
(MINIPORT_WDI_TX_TAL_QUEUE_IN_ORDER)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PEER_ID PeerId,
    _In_ UINT32 ExTidBitmask
    );
typedef MINIPORT_WDI_TX_TAL_QUEUE_IN_ORDER (*MINIPORT_WDI_TX_TAL_QUEUE_IN_ORDER_HANDLER);

/*************************************************************************
*
*       TxRx WDI Common API
*
*************************************************************************/
typedef
PWDI_FRAME_METADATA 
(NDIS_WDI_ALLOCATE_WDI_FRAME_METADATA)(
    _In_  NDIS_HANDLE NdisMiniportDataPathHandle
    );
typedef NDIS_WDI_ALLOCATE_WDI_FRAME_METADATA (*NDIS_WDI_ALLOCATE_WDI_FRAME_METADATA_HANDLER);

typedef
void
(NDIS_WDI_FREE_WDI_FRAME_METADATA)( 
    _In_  NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ PWDI_FRAME_METADATA pWiFiFrameMetaData);
typedef NDIS_WDI_FREE_WDI_FRAME_METADATA (*NDIS_WDI_FREE_WDI_FRAME_METADATA_HANDLER);

/*************************************************************************
*
*       TXMgr callbacks: datapath indications
*
*************************************************************************/

typedef
void
(NDIS_WDI_TX_DEQUEUE_IND)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ UINT32 Quantum,
    _In_ UINT8 MaxNumFrames,
    _In_ UINT16 Credit,
    _Out_ PNET_BUFFER_LIST *ppNBL
    );
typedef NDIS_WDI_TX_DEQUEUE_IND (*NDIS_WDI_TX_DEQUEUE_IND_HANDLER);

typedef
void
(NDIS_WDI_TX_TRANSFER_COMPLETE_IND)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ WDI_TX_FRAME_STATUS WifiTxFrameStatus,
    _In_ PNET_BUFFER_LIST pNBL
    );
typedef NDIS_WDI_TX_TRANSFER_COMPLETE_IND (*NDIS_WDI_TX_TRANSFER_COMPLETE_IND_HANDLER);

typedef
void
(NDIS_WDI_TX_SEND_COMPLETE_IND)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ WDI_TX_FRAME_STATUS WifiTxFrameStatus,
    _In_ UINT16 NumCompletedSends,
    _In_reads_(NumCompletedSends) WDI_FRAME_ID* WifiTxFrameIdList,
    _In_reads_opt_(NumCompletedSends) WDI_TX_COMPLETE_DATA* WifiTxCompleteList
    );
typedef NDIS_WDI_TX_SEND_COMPLETE_IND (*NDIS_WDI_TX_SEND_COMPLETE_IND_HANDLER);

typedef
void
(NDIS_WDI_TX_QUERY_RA_TID_STATE)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _In_ WDI_EXTENDED_TID ExTid,
    _Out_ NDIS_STATUS * pWifiStatus,
    _Out_ PUINT16 pQueueLength
    );
typedef NDIS_WDI_TX_QUERY_RA_TID_STATE (*NDIS_WDI_TX_QUERY_RA_TID_STATE_HANDLER);

/*************************************************************************
*
*       TX specific control requests
*
*************************************************************************/

typedef
void
(MINIPORT_WDI_TX_PEER_BACKLOG)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _In_ BOOLEAN bBacklogged
    );
typedef MINIPORT_WDI_TX_PEER_BACKLOG (*MINIPORT_WDI_TX_PEER_BACKLOG_HANDLER);

/*************************************************************************
*
*       TX specific control indications
*
*************************************************************************/
typedef
void
(NDIS_WDI_TX_SEND_PAUSE_IND)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _In_ UINT32 ExTidBitmask,
    _In_ WDI_TX_PAUSE_REASON TxPauseReason
    );
typedef NDIS_WDI_TX_SEND_PAUSE_IND (*NDIS_WDI_TX_SEND_PAUSE_IND_HANDLER);

typedef
void
(NDIS_WDI_TX_SEND_RESTART_IND)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _In_ UINT32 ExTidBitmask,
    _In_ WDI_TX_PAUSE_REASON TxRestartReason
    );
typedef NDIS_WDI_TX_SEND_RESTART_IND (*NDIS_WDI_TX_SEND_RESTART_IND_HANDLER);

typedef
void
(NDIS_WDI_TX_RELEASE_FRAMES_IND)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _In_ UINT32 ExTidBitmask,
    _In_ UINT8 MaxNumFrames,
    _In_ UINT16 Credit,
    _Out_ PNET_BUFFER_LIST *ppNBL
    );
typedef NDIS_WDI_TX_RELEASE_FRAMES_IND (*NDIS_WDI_TX_RELEASE_FRAMES_IND_HANDLER);

typedef
void
(NDIS_WDI_TX_INJECT_FRAME_IND)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _In_ WDI_EXTENDED_TID ExTid,
    _In_ PNET_BUFFER_LIST pNBL,
    _In_ BOOLEAN bIsUnicast,
    _In_ BOOLEAN bUseLegacyRates,
    _In_ UINT16 Ethertype,
    _In_ WDI_EXEMPTION_ACTION_TYPE ExemptionAction
    );
typedef NDIS_WDI_TX_INJECT_FRAME_IND (*NDIS_WDI_TX_INJECT_FRAME_IND_HANDLER);

/*************************************************************************
*
* TxEngine Async Request-completion indications
*
************************************************************************/
typedef
void
(NDIS_WDI_TX_ABORT_CONFIRM)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle
    );
typedef NDIS_WDI_TX_ABORT_CONFIRM (*NDIS_WDI_TX_ABORT_CONFIRM_HANDLER);


/*************************************************************************
*
* RxMgr requests to RxEngine
*
************************************************************************/
typedef
void
(MINIPORT_WDI_RX_STOP)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId,
    _Out_ NDIS_STATUS * pWifiStatus
    );
typedef MINIPORT_WDI_RX_STOP (*MINIPORT_WDI_RX_STOP_HANDLER);

typedef
void
(MINIPORT_WDI_RX_FLUSH)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId
    );
typedef MINIPORT_WDI_RX_FLUSH (*MINIPORT_WDI_RX_FLUSH_HANDLER);

typedef
void
(MINIPORT_WDI_RX_RESTART)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId
    );
typedef MINIPORT_WDI_RX_RESTART (*MINIPORT_WDI_RX_RESTART_HANDLER);

typedef
void
(MINIPORT_WDI_RX_GET_MPDUS)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PEER_ID PeerId,
    _In_ WDI_EXTENDED_TID ExTid,
    _Out_ PNET_BUFFER_LIST *ppNBL
    );
typedef MINIPORT_WDI_RX_GET_MPDUS (*MINIPORT_WDI_RX_GET_MPDUS_HANDLER);

typedef
void
(MINIPORT_WDI_RX_RETURN_FRAMES)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ PNET_BUFFER_LIST pNBL
    );
typedef MINIPORT_WDI_RX_RETURN_FRAMES (*MINIPORT_WDI_RX_RETURN_FRAMES_HANDLER);

typedef
void
(MINIPORT_WDI_RX_RESUME)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext
    );
typedef MINIPORT_WDI_RX_RESUME (*MINIPORT_WDI_RX_RESUME_HANDLER);

/*************************************************************************
*
* RxEngine indications to RxMgr
*
************************************************************************/
typedef
void
(NDIS_WDI_RX_INORDER_DATA_IND)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ WDI_RX_INDICATION_LEVEL IndicationLevel,
    _In_ WDI_PEER_ID PeerId,
    _In_ WDI_EXTENDED_TID ExTid,
    _In_ PNDIS_RECEIVE_THROTTLE_PARAMETERS pRxThrottleParams,
    _Out_ NDIS_STATUS * pWifiStatus
    );
typedef NDIS_WDI_RX_INORDER_DATA_IND (*NDIS_WDI_RX_INORDER_DATA_IND_HANDLER);

/*************************************************************************
*
* RxMgr control request
*
************************************************************************/
typedef
void
(MINIPORT_WDI_RX_THROTTLE)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_RX_THROTTLE_LEVEL RxThrottleLevel
    );
typedef MINIPORT_WDI_RX_THROTTLE (*MINIPORT_WDI_RX_THROTTLE_HANDLER);

/*************************************************************************
*
* Per-frame Rx requests
*
************************************************************************/
typedef
void
(MINIPORT_WDI_RX_PPDU_RSSI)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ PNET_BUFFER_LIST pNBL,
    _Out_ UINT8 *pRssi
    );
typedef MINIPORT_WDI_RX_PPDU_RSSI (*MINIPORT_WDI_RX_PPDU_RSSI_HANDLER);

/*************************************************************************
*
* RxEngine Async Request-completion indications
*
************************************************************************/
typedef
void
(NDIS_WDI_RX_STOP_CONFIRM)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle
    );
typedef NDIS_WDI_RX_STOP_CONFIRM (*NDIS_WDI_RX_STOP_CONFIRM_HANDLER);

typedef
void
(NDIS_WDI_RX_FLUSH_CONFIRM)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle
    );
typedef NDIS_WDI_RX_FLUSH_CONFIRM (*NDIS_WDI_RX_FLUSH_CONFIRM_HANDLER);


/*************************************************************************
*
*       TAL API
*
*************************************************************************/

typedef
NDIS_STATUS
(MINIPORT_WDI_TAL_TXRX_START)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ PWDI_TXRX_TARGET_CONFIGURATION pWifiTxRxConfiguration,
    _Out_ PTAL_TXRX_PARAMETERS pTalTxRxParameters
    );
typedef MINIPORT_WDI_TAL_TXRX_START (*MINIPORT_WDI_TAL_TXRX_START_HANDLER);

typedef
void
(MINIPORT_WDI_TAL_TXRX_STOP)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext
    );
typedef MINIPORT_WDI_TAL_TXRX_STOP (*MINIPORT_WDI_TAL_TXRX_STOP_HANDLER);

typedef
void
(MINIPORT_WDI_TAL_TXRX_ADD_PORT)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_OPERATION_MODE OpMode
    );
typedef MINIPORT_WDI_TAL_TXRX_ADD_PORT (*MINIPORT_WDI_TAL_TXRX_ADD_PORT_HANDLER);

typedef
void
(MINIPORT_WDI_TAL_TXRX_DELETE_PORT)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId
    );
typedef MINIPORT_WDI_TAL_TXRX_DELETE_PORT (*MINIPORT_WDI_TAL_TXRX_DELETE_PORT_HANDLER);

typedef
void
(MINIPORT_WDI_TAL_TXRX_SET_PORT_OPMODE)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_OPERATION_MODE Opmode
    );
typedef MINIPORT_WDI_TAL_TXRX_SET_PORT_OPMODE (*MINIPORT_WDI_TAL_TXRX_SET_PORT_OPMODE_HANDLER);

typedef
void
(MINIPORT_WDI_TAL_TXRX_RESET_PORT)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId
    );
typedef MINIPORT_WDI_TAL_TXRX_RESET_PORT (*MINIPORT_WDI_TAL_TXRX_RESET_PORT_HANDLER);

typedef
void
(MINIPORT_WDI_TAL_TXRX_PEER_CONFIG)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _In_ PWDI_TXRX_PEER_CFG pPeerCfg
    );
typedef MINIPORT_WDI_TAL_TXRX_PEER_CONFIG (*MINIPORT_WDI_TAL_TXRX_PEER_CONFIG_HANDLER);

typedef
void
(MINIPORT_WDI_TAL_TXRX_PEER_DELETE_CONFIRM)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId
    );
typedef MINIPORT_WDI_TAL_TXRX_PEER_DELETE_CONFIRM (*MINIPORT_WDI_TAL_TXRX_PEER_DELETE_CONFIRM_HANDLER);


typedef
void
(NDIS_WDI_PEER_CREATE_IND)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _In_ WDI_MAC_ADDRESS PeerAddr
    );
typedef NDIS_WDI_PEER_CREATE_IND (*NDIS_WDI_PEER_CREATE_IND_HANDLER);

typedef
void
(NDIS_WDI_PEER_DELETE_IND)(
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ WDI_PORT_ID PortId,
    _In_ WDI_PEER_ID PeerId,
    _Out_ NDIS_STATUS * pWifiStatus
    );
typedef NDIS_WDI_PEER_DELETE_IND (*NDIS_WDI_PEER_DELETE_IND_HANDLER);

#define NDIS_OBJECT_TYPE_WDI_DATA_API         0xC2

#define NDIS_OBJECT_TYPE_WDI_DATA_API_REVISION_1       1

typedef struct _NDIS_WDI_DATA_API
{
    NDIS_OBJECT_HEADER                       Header;


    NDIS_WDI_TX_DEQUEUE_IND_HANDLER                 TxDequeueIndication;
    NDIS_WDI_TX_TRANSFER_COMPLETE_IND_HANDLER       TxTransferCompleteIndication;
    NDIS_WDI_TX_SEND_COMPLETE_IND_HANDLER           TxSendCompleteIndication;
    NDIS_WDI_TX_QUERY_RA_TID_STATE_HANDLER          TxQueryRATIDState;
    NDIS_WDI_TX_SEND_PAUSE_IND_HANDLER              TxSendPauseIndication;
    NDIS_WDI_TX_SEND_RESTART_IND_HANDLER            TxSendRestartIndication;
    NDIS_WDI_TX_RELEASE_FRAMES_IND_HANDLER          TxReleaseFrameIndication;
    NDIS_WDI_TX_INJECT_FRAME_IND_HANDLER            TxInjectFrameIndication;
    NDIS_WDI_TX_ABORT_CONFIRM_HANDLER               TxAbortConfirm;

    NDIS_WDI_RX_INORDER_DATA_IND_HANDLER            RxInorderDataIndication;
    NDIS_WDI_RX_STOP_CONFIRM_HANDLER                RxStopConfirm;
    NDIS_WDI_RX_FLUSH_CONFIRM_HANDLER               RxFlushConfirm;

    NDIS_WDI_PEER_CREATE_IND_HANDLER                PeerCreateIndication;
    NDIS_WDI_PEER_DELETE_IND_HANDLER                PeerDeleteIndication;

    NDIS_WDI_ALLOCATE_WDI_FRAME_METADATA_HANDLER    AllocateWiFiFrameMetaData;
    NDIS_WDI_FREE_WDI_FRAME_METADATA_HANDLER        FreeWiFiFrameMetaData;

} NDIS_WDI_DATA_API, *PNDIS_WDI_DATA_API;

#define NDIS_SIZEOF_WDI_DATA_API_REVISION_1      \
    RTL_SIZEOF_THROUGH_FIELD(NDIS_WDI_DATA_API, FreeWiFiFrameMetaData)



#define NDIS_OBJECT_TYPE_MINIPORT_WDI_DATA_HANDLERS        0xC1

#define NDIS_OBJECT_TYPE_MINIPORT_WDI_DATA_HANDLERS_REVISION_1       1

typedef struct _NDIS_MINIPORT_WDI_DATA_HANDLERS
{
    NDIS_OBJECT_HEADER                      Header;

    MINIPORT_WDI_TX_ABORT_HANDLER                     TxAbortHandler;
    MINIPORT_WDI_TX_TARGET_DESC_INIT_HANDLER          TxTargetDescInitHandler;
    MINIPORT_WDI_TX_TARGET_DESC_DEINIT_HANDLER        TxTargetDescDeInitHandler;
    MINIPORT_WDI_TX_DATA_SEND_HANDLER                 TxDataSendHandler;
    MINIPORT_WDI_TX_TAL_SEND_HANDLER                  TxTalSendHandler;
    MINIPORT_WDI_TX_TAL_SEND_COMPLETE_HANDLER         TxTalSendCompleteHandler;
    MINIPORT_WDI_TX_TAL_QUEUE_IN_ORDER_HANDLER        TxTalQueueInOrderHandler;
    MINIPORT_WDI_TX_PEER_BACKLOG_HANDLER              TxPeerBacklogHandler;

    MINIPORT_WDI_RX_STOP_HANDLER                      RxStopHandler;
    MINIPORT_WDI_RX_FLUSH_HANDLER                     RxFlushHandler;
    MINIPORT_WDI_RX_RESTART_HANDLER                   RxRestartHandler;
    MINIPORT_WDI_RX_GET_MPDUS_HANDLER                 RxGetMpdusHandler;
    MINIPORT_WDI_RX_RETURN_FRAMES_HANDLER             RxReturnFramesHandler;
    MINIPORT_WDI_RX_RESUME_HANDLER                    RxResumeHandler;
    MINIPORT_WDI_RX_THROTTLE_HANDLER                  RxThrottleHandler;
    MINIPORT_WDI_RX_PPDU_RSSI_HANDLER                 RxPpduRssiHandler;

    MINIPORT_WDI_TAL_TXRX_START_HANDLER               TalTxRxStartHandler;
    MINIPORT_WDI_TAL_TXRX_STOP_HANDLER                TalTxRxStopHandler;
    MINIPORT_WDI_TAL_TXRX_ADD_PORT_HANDLER            TalTxRxAddPortHandler;
    MINIPORT_WDI_TAL_TXRX_DELETE_PORT_HANDLER         TalTxRxDeletePortHandler;
    MINIPORT_WDI_TAL_TXRX_SET_PORT_OPMODE_HANDLER     TalTxRxSetPortOpModeHandler;
    MINIPORT_WDI_TAL_TXRX_RESET_PORT_HANDLER          TalTxRxResetPortHandler;
    MINIPORT_WDI_TAL_TXRX_PEER_CONFIG_HANDLER         TalTxRxPeerConfigHandler;
    MINIPORT_WDI_TAL_TXRX_PEER_DELETE_CONFIRM_HANDLER TalTxRxPeerDeleteConfirmHandler;
} NDIS_MINIPORT_WDI_DATA_HANDLERS, *PNDIS_MINIPORT_WDI_DATA_HANDLERS;

#define NDIS_SIZEOF_MINIPORT_WDI_DATA_HANDLERS_REVISION_1      \
RTL_SIZEOF_THROUGH_FIELD(NDIS_MINIPORT_WDI_DATA_HANDLERS, TalTxRxPeerDeleteConfirmHandler)

typedef 
NDIS_STATUS
(MINIPORT_WDI_TAL_TXRX_INITIALIZE)(
    _In_ NDIS_HANDLE MiniportAdapterContext,
    _In_ NDIS_HANDLE NdisMiniportDataPathHandle,
    _In_ PNDIS_WDI_DATA_API NdisWdiDataPathApi,
    _Out_ PTAL_TXRX_HANDLE pMiniportTalTxRxContext,
    _Inout_ PNDIS_MINIPORT_WDI_DATA_HANDLERS pMiniportDataHandlers,
    _Out_ UINT32* pMiniportWdiFrameMetadataExtraSpace
    );
typedef MINIPORT_WDI_TAL_TXRX_INITIALIZE (*MINIPORT_WDI_TAL_TXRX_INITIALIZE_HANDLER);


typedef 
VOID
(MINIPORT_WDI_TAL_TXRX_DEINITIALIZE)(
    _In_ TAL_TXRX_HANDLE MiniportTalTxRxContext
    );
typedef MINIPORT_WDI_TAL_TXRX_DEINITIALIZE (*MINIPORT_WDI_TAL_TXRX_DEINITIALIZE_HANDLER);

/*************************************************************************
*
*       Control Path OS Handlers
*
*************************************************************************/
typedef
void
(NDIS_WDI_OPEN_ADAPTER_COMPLETE)(
    _In_ NDIS_HANDLE              MiniportAdapterHandle,
    _In_ NDIS_STATUS              CompletionStatus
    );
typedef NDIS_WDI_OPEN_ADAPTER_COMPLETE (*NDIS_WDI_OPEN_ADAPTER_COMPLETE_HANDLER);

typedef
void
(NDIS_WDI_CLOSE_ADAPTER_COMPLETE)(
    _In_ NDIS_HANDLE              MiniportAdapterHandle,
    _In_ NDIS_STATUS              CompletionStatus
    );
typedef NDIS_WDI_CLOSE_ADAPTER_COMPLETE (*NDIS_WDI_CLOSE_ADAPTER_COMPLETE_HANDLER);

typedef
void
(NDIS_WDI_IDLE_NOTIFICATION_CONFIRM)(
    _In_ NDIS_HANDLE                MiniportAdapterHandle,
    _In_ NDIS_DEVICE_POWER_STATE    DeviceIdlePowerState); // This must be D2 for USB

typedef NDIS_WDI_IDLE_NOTIFICATION_CONFIRM (*NDIS_WDI_IDLE_NOTIFICATION_CONFIRM_HANDLER);


typedef
void
(NDIS_WDI_IDLE_NOTIFICATION_COMPLETE)(
    _In_ NDIS_HANDLE    MiniportAdapterHandle);

typedef NDIS_WDI_IDLE_NOTIFICATION_COMPLETE (*NDIS_WDI_IDLE_NOTIFICATION_COMPLETE_HANDLER);


#define NDIS_OBJECT_TYPE_WDI_INIT_PARAMETERS               0xC3

#define NDIS_OBJECT_TYPE_WDI_INIT_PARAMETERS_REVISION_1         1

typedef struct _NDIS_WDI_INIT_PARAMETERS
{
    NDIS_OBJECT_HEADER                       Header;
    ULONG                                    WdiVersion;
    NDIS_WDI_OPEN_ADAPTER_COMPLETE_HANDLER   OpenAdapterCompleteHandler;
    NDIS_WDI_CLOSE_ADAPTER_COMPLETE_HANDLER  CloseAdapterCompleteHandler;
    NDIS_WDI_IDLE_NOTIFICATION_CONFIRM_HANDLER       UeIdleNotificationConfirm;
    NDIS_WDI_IDLE_NOTIFICATION_COMPLETE_HANDLER      UeIdleNotificationComplete;
} NDIS_WDI_INIT_PARAMETERS, *PNDIS_WDI_INIT_PARAMETERS;

#define NDIS_SIZEOF_WDI_INIT_PARAMETERS_REVISION_1      \
    RTL_SIZEOF_THROUGH_FIELD(NDIS_WDI_INIT_PARAMETERS, UeIdleNotificationComplete)


/*************************************************************************
*
*       Control Path Miniport Handlers
*
*************************************************************************/

typedef
NDIS_STATUS
(MINIPORT_WDI_ALLOCATE_ADAPTER)(
    _In_  NDIS_HANDLE                         NdisMiniportHandle,
    _In_  NDIS_HANDLE                         MiniportDriverContext,
    _In_  PNDIS_MINIPORT_INIT_PARAMETERS      MiniportInitParameters,
    _In_  PNDIS_WDI_INIT_PARAMETERS           NdisWdiInitParameters,
    _Inout_ PNDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES   RegistrationAttributes
    );
typedef MINIPORT_WDI_ALLOCATE_ADAPTER (*MINIPORT_WDI_ALLOCATE_ADAPTER_HANDLER);

typedef
NDIS_STATUS
(MINIPORT_WDI_OPEN_ADAPTER)(
    _In_  NDIS_HANDLE                         MiniportAdapterContext,
    _In_  PNDIS_MINIPORT_INIT_PARAMETERS      MiniportInitParameters
    );
typedef MINIPORT_WDI_OPEN_ADAPTER (*MINIPORT_WDI_OPEN_ADAPTER_HANDLER);



typedef 
NDIS_STATUS
(MINIPORT_WDI_START_ADAPTER_OPERATION)(
    _In_  NDIS_HANDLE                         MiniportAdapterContext
    );

typedef MINIPORT_WDI_START_ADAPTER_OPERATION (*MINIPORT_WDI_START_OPERATION_HANDLER);


typedef
void
(MINIPORT_WDI_STOP_ADAPTER_OPERATION)(
    _In_  NDIS_HANDLE                         MiniportAdapterContext
    );

typedef MINIPORT_WDI_STOP_ADAPTER_OPERATION (*MINIPORT_WDI_STOP_OPERATION_HANDLER);

typedef
NDIS_STATUS
(MINIPORT_WDI_CLOSE_ADAPTER)(
    _In_  NDIS_HANDLE                         MiniportAdapterContext
    );
typedef MINIPORT_WDI_CLOSE_ADAPTER (*MINIPORT_WDI_CLOSE_ADAPTER_HANDLER);


typedef
VOID
(MINIPORT_WDI_FREE_ADAPTER)(
    _In_  NDIS_HANDLE             MiniportAdapterContext
    );
typedef MINIPORT_WDI_FREE_ADAPTER (*MINIPORT_WDI_FREE_ADAPTER_HANDLER);


typedef
NDIS_STATUS
(MINIPORT_WDI_POST_ADAPTER_PAUSE)(
    _In_  NDIS_HANDLE             MiniportAdapterContext,
    _In_  PNDIS_MINIPORT_PAUSE_PARAMETERS   PauseParameters
    );

typedef MINIPORT_WDI_POST_ADAPTER_PAUSE (*MINIPORT_WDI_POST_PAUSE_HANDLER);


typedef
NDIS_STATUS
(MINIPORT_WDI_POST_ADAPTER_RESTART)(
    _In_  NDIS_HANDLE                             MiniportAdapterContext,
    _In_  PNDIS_MINIPORT_RESTART_PARAMETERS       RestartParameters
    );

typedef MINIPORT_WDI_POST_ADAPTER_RESTART (*MINIPORT_WDI_POST_RESTART_HANDLER);


typedef enum {
    DiagnoseLevelNone               =0,
    DiagnoseLevelHardwareRegisters  =1, // only device registers
    DiagnoseLevelFirmwareImageDump  =2, // + firmware image dump
    DiagnoseLevelDriverStateDump    =3  // + driver state dump
} eDiagnoseLevel;


typedef
NDIS_STATUS
(MINIPORT_WDI_ADAPTER_HANG_DIAGNOSE)(
    _In_  NDIS_HANDLE         MiniportDriverContext,
    _In_  eDiagnoseLevel      DiagnoseLevel,
    _In_  UINT32              BufferSize,
    _Out_writes_bytes_to_( BufferSize, *pOutputSize )
          UINT8 *             FirmwareBlob,
    _Out_ UINT32*             pOutputSize
    );
/*++
    Default level is DiagnoseLevelHardwareRegisters, 1KB max.
    The information will be included in LiveKD dump.
    Additional firmware full image should dumps to files,
    so is driver state dump. These files are to be collected
    for post mortem.
--*/

typedef MINIPORT_WDI_ADAPTER_HANG_DIAGNOSE (*MINIPORT_WDI_HANG_DIAGNOSE_HANDLER);

//
// LE exposes two handlers for USB Selective Suspend
//
typedef
NDIS_STATUS 
(MINIPORT_WDI_IDLE_NOTIFICATION)(
    _In_ NDIS_HANDLE MiniportAdapterContext,
    _In_ BOOLEAN ForceIdle );

typedef MINIPORT_WDI_IDLE_NOTIFICATION (*MINIPORT_WDI_IDLE_NOTIFICATION_HANDLER);

typedef
VOID 
(MINIPORT_WDI_CANCEL_IDLE_NOTIFICATION)(
    _In_ NDIS_HANDLE MiniportAdapterContext );

typedef MINIPORT_WDI_CANCEL_IDLE_NOTIFICATION (*MINIPORT_WDI_CANCEL_IDLE_NOTIFICATION_HANDLER);


/*************************************************************************
 *
 *       Control Path Ndis Interfaces
 *
 *************************************************************************/

#define NDIS_OBJECT_TYPE_MINIPORT_WDI_CHARACTERISTICS       0xC0

#define NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS_REVISION_1       1

typedef struct _NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS
{
    NDIS_OBJECT_HEADER                       Header;
    ULONG                                    WdiVersion;
    MINIPORT_WDI_ALLOCATE_ADAPTER_HANDLER    AllocateAdapterHandler;
    MINIPORT_WDI_FREE_ADAPTER_HANDLER        FreeAdapterHandler;
    MINIPORT_WDI_OPEN_ADAPTER_HANDLER        OpenAdapterHandler;
    MINIPORT_WDI_CLOSE_ADAPTER_HANDLER       CloseAdapterHandler;
    MINIPORT_WDI_START_OPERATION_HANDLER     StartOperationHandler;
    MINIPORT_WDI_STOP_OPERATION_HANDLER      StopOperationHandler;
    MINIPORT_WDI_POST_PAUSE_HANDLER          PostPauseHandler;
    MINIPORT_WDI_POST_RESTART_HANDLER        PostRestartHandler;

    MINIPORT_WDI_HANG_DIAGNOSE_HANDLER       HangDiagnoseHandler;
    MINIPORT_WDI_TAL_TXRX_INITIALIZE_HANDLER     TalTxRxInitializeHandler;
    MINIPORT_WDI_TAL_TXRX_DEINITIALIZE_HANDLER   TalTxRxDeinitializeHandler;

    // 2 additional handlers for USB Slective Suspend
    MINIPORT_WDI_IDLE_NOTIFICATION_HANDLER LeIdleNotificationHandler;
    MINIPORT_WDI_CANCEL_IDLE_NOTIFICATION_HANDLER  LeCancelIdleNotificationHandler;
} NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS, *PNDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS;

#define NDIS_SIZEOF_MINIPORT_WDI_CHARACTERISTICS_REVISION_1      \
RTL_SIZEOF_THROUGH_FIELD(NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS, LeCancelIdleNotificationHandler)

// For 1.0 compliant drivers
#define WDI_VERSION_1_0                     ((1 << 16) | (0 << 8) | 0x0)

// For 1.0.1 compliant drivers
#define WDI_VERSION_1_0_1                   ((1 << 16) | (0 << 8) | 0x1)

#define WDI_VERSION_LATEST                  WDI_VERSION_1_0_1

#ifndef NDIS_EXPORT
#  define NDIS_EXPORT
#endif

_IRQL_requires_(PASSIVE_LEVEL)
NDIS_EXPORT
NDIS_STATUS
NdisMRegisterWdiMiniportDriver(
    _In_     DRIVER_OBJECT                              *DriverObject,
    _In_     PCUNICODE_STRING                            RegistryPath,
    _In_opt_ NDIS_MINIPORT_DRIVER_CONTEXT                NdisDriverContext,
    _In_     NDIS_MINIPORT_DRIVER_CHARACTERISTICS       *MiniportDriverCharacteristics,
    _In_     NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS   *MiniportWdiCharacteristics,
    _Out_    NDIS_MINIPORT_DRIVER_HANDLE                *NdisMiniportDriverHandle
    );

_IRQL_requires_(PASSIVE_LEVEL)
NDIS_EXPORT
VOID
NdisMDeregisterWdiMiniportDriver(
    _In_     NDIS_MINIPORT_DRIVER_HANDLE                 NdisMiniportDriverHandle
    );



//
// OIDS & Indications
//

#define WDI_OID_PREFIX 0x0e4400000U
#define WDI_INDICATION_PREFIX 0x40050000U

#define WDI_DEFINE_OID(_messageId)    \
    ((WDI_OID_PREFIX) | ((_messageId)))

#define WDI_DEFINE_INDICATION(_messageId) \
    ((WDI_INDICATION_PREFIX) | ((_messageId)))   

/*
    Task IOCTL codes
*/
#define OID_WDI_TASK_OPEN    \
    WDI_DEFINE_OID(WDI_TASK_OPEN)

#define OID_WDI_TASK_CLOSE    \
    WDI_DEFINE_OID(WDI_TASK_CLOSE)

#define OID_WDI_TASK_SCAN    \
    WDI_DEFINE_OID(WDI_TASK_SCAN)

#define OID_WDI_TASK_P2P_DISCOVER    \
    WDI_DEFINE_OID(WDI_TASK_P2P_DISCOVER)

#define OID_WDI_TASK_CONNECT    \
    WDI_DEFINE_OID(WDI_TASK_CONNECT)

#define OID_WDI_TASK_DOT11_RESET    \
    WDI_DEFINE_OID(WDI_TASK_DOT11_RESET)

#define OID_WDI_TASK_DISCONNECT    \
    WDI_DEFINE_OID(WDI_TASK_DISCONNECT)

#define OID_WDI_TASK_P2P_SEND_REQUEST_ACTION_FRAME    \
    WDI_DEFINE_OID(WDI_TASK_P2P_SEND_REQUEST_ACTION_FRAME)

#define OID_WDI_TASK_P2P_SEND_RESPONSE_ACTION_FRAME    \
    WDI_DEFINE_OID(WDI_TASK_P2P_SEND_RESPONSE_ACTION_FRAME)

#define OID_WDI_TASK_SET_RADIO_STATE    \
    WDI_DEFINE_OID(WDI_TASK_SET_RADIO_STATE)

#define OID_WDI_TASK_CREATE_PORT    \
    WDI_DEFINE_OID(WDI_TASK_CREATE_PORT)

#define OID_WDI_TASK_DELETE_PORT    \
    WDI_DEFINE_OID(WDI_TASK_DELETE_PORT)

#define OID_WDI_TASK_START_AP    \
    WDI_DEFINE_OID(WDI_TASK_START_AP)

#define OID_WDI_TASK_STOP_AP    \
    WDI_DEFINE_OID(WDI_TASK_STOP_AP)

#define OID_WDI_TASK_SEND_AP_ASSOCIATION_RESPONSE    \
    WDI_DEFINE_OID(WDI_TASK_SEND_AP_ASSOCIATION_RESPONSE)

#define OID_WDI_SET_POWER_STATE    \
    WDI_DEFINE_OID(WDI_SET_POWER_STATE)

#define OID_WDI_SET_OPERATION_MODE    \
    WDI_DEFINE_OID(WDI_SET_OPERATION_MODE)

#define OID_WDI_SET_P2P_ADDITIONAL_IE    \
    WDI_DEFINE_OID(WDI_SET_P2P_ADDITIONAL_IE)

#define OID_WDI_SET_P2P_LISTEN_STATE    \
    WDI_DEFINE_OID(WDI_SET_P2P_LISTEN_STATE)

#define OID_WDI_SET_PRIVACY_EXEMPTION_LIST    \
    WDI_DEFINE_OID(WDI_SET_PRIVACY_EXEMPTION_LIST)

#define OID_WDI_SET_ADD_CIPHER_KEYS    \
    WDI_DEFINE_OID(WDI_SET_ADD_CIPHER_KEYS)

#define OID_WDI_SET_DELETE_CIPHER_KEYS    \
    WDI_DEFINE_OID(WDI_SET_DELETE_CIPHER_KEYS)

#define OID_WDI_SET_DEFAULT_KEY_ID    \
    WDI_DEFINE_OID(WDI_SET_DEFAULT_KEY_ID)

#define OID_WDI_SET_CONNECTION_QUALITY    \
    WDI_DEFINE_OID(WDI_SET_CONNECTION_QUALITY)

#define OID_WDI_GET_STATISTICS    \
    WDI_DEFINE_OID(WDI_GET_STATISTICS)

#define OID_WDI_SET_RECEIVE_PACKET_FILTER    \
    WDI_DEFINE_OID(WDI_SET_RECEIVE_PACKET_FILTER)

#define OID_WDI_GET_ADAPTER_CAPABILITIES    \
    WDI_DEFINE_OID(WDI_GET_ADAPTER_CAPABILITIES)

#define OID_WDI_SET_NETWORK_LIST_OFFLOAD    \
    WDI_DEFINE_OID(WDI_SET_NETWORK_LIST_OFFLOAD)

#define OID_WDI_SET_RECEIVE_COALESCING    \
    WDI_DEFINE_OID(WDI_SET_RECEIVE_COALESCING)

#define OID_WDI_GET_BSS_ENTRY_LIST    \
    WDI_DEFINE_OID(WDI_GET_BSS_ENTRY_LIST)

#define OID_WDI_SET_AUTO_POWER_SAVE    \
    WDI_DEFINE_OID(WDI_SET_AUTO_POWER_SAVE)

#define OID_WDI_GET_AUTO_POWER_SAVE    \
    WDI_DEFINE_OID(WDI_GET_AUTO_POWER_SAVE)

#define OID_WDI_SET_ADD_WOL_PATTERN    \
    WDI_DEFINE_OID(WDI_SET_ADD_WOL_PATTERN)

#define OID_WDI_SET_REMOVE_WOL_PATTERN    \
    WDI_DEFINE_OID(WDI_SET_REMOVE_WOL_PATTERN)

#define OID_WDI_SET_MULTICAST_LIST    \
    WDI_DEFINE_OID(WDI_SET_MULTICAST_LIST)

#define OID_WDI_SET_ADD_PM_PROTOCOL_OFFLOAD    \
    WDI_DEFINE_OID(WDI_SET_ADD_PM_PROTOCOL_OFFLOAD)

#define OID_WDI_SET_REMOVE_PM_PROTOCOL_OFFLOAD    \
    WDI_DEFINE_OID(WDI_SET_REMOVE_PM_PROTOCOL_OFFLOAD)

#define OID_WDI_SET_ADAPTER_CONFIGURATION    \
    WDI_DEFINE_OID(WDI_SET_ADAPTER_CONFIGURATION)

#define OID_WDI_GET_RECEIVE_COALESCING_MATCH_COUNT    \
    WDI_DEFINE_OID(WDI_GET_RECEIVE_COALESCING_MATCH_COUNT)

#define OID_WDI_SET_CLEAR_RECEIVE_COALESCING    \
    WDI_DEFINE_OID(WDI_SET_CLEAR_RECEIVE_COALESCING)

#define OID_WDI_GET_PM_PROTOCOL_OFFLOAD    \
    WDI_DEFINE_OID(WDI_GET_PM_PROTOCOL_OFFLOAD)

#define OID_WDI_SET_ADVERTISEMENT_INFORMATION    \
    WDI_DEFINE_OID(WDI_SET_ADVERTISEMENT_INFORMATION)

#define OID_WDI_TASK_CHANGE_OPERATION_MODE    \
    WDI_DEFINE_OID(WDI_TASK_CHANGE_OPERATION_MODE)

#define OID_WDI_TASK_DELETE_PEER_STATE    \
    WDI_DEFINE_OID(WDI_TASK_DELETE_PEER_STATE)

#define OID_WDI_IHV_REQUEST    \
    WDI_DEFINE_OID(WDI_IHV_REQUEST)

#define OID_WDI_TASK_ROAM    \
    WDI_DEFINE_OID(WDI_TASK_ROAM)

#define OID_WDI_SET_FLUSH_BSS_ENTRY    \
    WDI_DEFINE_OID(WDI_SET_FLUSH_BSS_ENTRY)

#define OID_WDI_SET_ASSOCIATION_PARAMETERS    \
    WDI_DEFINE_OID(WDI_SET_ASSOCIATION_PARAMETERS)

#define OID_WDI_GET_NEXT_ACTION_FRAME_DIALOG_TOKEN    \
    WDI_DEFINE_OID(WDI_GET_NEXT_ACTION_FRAME_DIALOG_TOKEN)

#define OID_WDI_TASK_SEND_REQUEST_ACTION_FRAME    \
    WDI_DEFINE_OID(WDI_TASK_SEND_REQUEST_ACTION_FRAME)

#define OID_WDI_TASK_SEND_RESPONSE_ACTION_FRAME    \
    WDI_DEFINE_OID(WDI_TASK_SEND_RESPONSE_ACTION_FRAME)

#define OID_WDI_SET_TCP_OFFLOAD_PARAMETERS    \
    WDI_DEFINE_OID(WDI_SET_TCP_OFFLOAD_PARAMETERS)

#define OID_WDI_TCP_RSC_STATISTICS    \
    WDI_DEFINE_OID(WDI_TCP_RSC_STATISTICS)

#define OID_WDI_SET_P2P_WPS_ENABLED \
    WDI_DEFINE_OID(WDI_SET_P2P_WPS_ENABLED)

#define OID_WDI_SET_P2P_START_BACKGROUND_DISCOVERY \
    WDI_DEFINE_OID(WDI_SET_P2P_START_BACKGROUND_DISCOVERY)

#define OID_WDI_SET_P2P_STOP_BACKGROUND_DISCOVERY \
    WDI_DEFINE_OID(WDI_SET_P2P_STOP_BACKGROUND_DISCOVERY)

#define OID_WDI_TASK_IHV \
    WDI_DEFINE_OID(WDI_TASK_IHV)

#define OID_WDI_SET_ENCAPSULATION_OFFLOAD \
    WDI_DEFINE_OID(WDI_SET_ENCAPSULATION_OFFLOAD)

#define OID_WDI_SET_END_DWELL_TIME \
    WDI_DEFINE_OID(WDI_SET_END_DWELL_TIME)
 
#define OID_WDI_SET_FAST_BSS_TRANSITION_PARAMETERS \
    WDI_DEFINE_OID(WDI_SET_FAST_BSS_TRANSITION_PARAMETERS)

#define OID_WDI_SET_NEIGHBOR_REPORT_ENTRIES \
    WDI_DEFINE_OID(WDI_SET_NEIGHBOR_REPORT_ENTRIES)

#define NDIS_STATUS_WDI_INDICATION_DISCONNECT_COMPLETE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_DISCONNECT_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_SET_RADIO_STATE_COMPLETE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_SET_RADIO_STATE_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_DISASSOCIATION    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_DISASSOCIATION)

#define NDIS_STATUS_WDI_INDICATION_ROAMING_NEEDED    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_ROAMING_NEEDED)

#define NDIS_STATUS_WDI_INDICATION_LINK_STATE_CHANGE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_LINK_STATE_CHANGE)

#define NDIS_STATUS_WDI_INDICATION_P2P_ACTION_FRAME_RECEIVED    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_P2P_ACTION_FRAME_RECEIVED)

#define NDIS_STATUS_WDI_INDICATION_AP_ASSOCIATION_REQUEST_RECEIVED    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_AP_ASSOCIATION_REQUEST_RECEIVED)

#define NDIS_STATUS_WDI_INDICATION_NLO_DISCOVERY   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_NLO_DISCOVERY)

#define NDIS_STATUS_WDI_INDICATION_WAKE_REASON    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_WAKE_REASON)

#define NDIS_STATUS_WDI_INDICATION_PMKID_CANDIDATE_LIST_UPDATE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_PMKID_CANDIDATE_LIST_UPDATE)

#define NDIS_STATUS_WDI_INDICATION_TKIP_MIC_FAILURE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_TKIP_MIC_FAILURE)

#define NDIS_STATUS_WDI_INDICATION_ACTION_FRAME_RECEIVED    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_ACTION_FRAME_RECEIVED)

#define NDIS_STATUS_WDI_INDICATION_SEND_REQUEST_ACTION_FRAME_COMPLETE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_SEND_REQUEST_ACTION_FRAME_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_SEND_RESPONSE_ACTION_FRAME_COMPLETE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_SEND_RESPONSE_ACTION_FRAME_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_SCAN_COMPLETE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_SCAN_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_P2P_DISCOVERY_COMPLETE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_P2P_DISCOVERY_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_BSS_ENTRY_LIST    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_BSS_ENTRY_LIST)

#define NDIS_STATUS_WDI_INDICATION_DOT11_RESET_COMPLETE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_DOT11_RESET_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_CONNECT_COMPLETE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_CONNECT_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_P2P_SEND_REQUEST_ACTION_FRAME_COMPLETE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_P2P_SEND_REQUEST_ACTION_FRAME_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_P2P_SEND_RESPONSE_ACTION_FRAME_COMPLETE    \
    WDI_DEFINE_INDICATION(WDI_INDICATION_P2P_SEND_RESPONSE_ACTION_FRAME_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_RADIO_STATUS   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_RADIO_STATUS)

#define NDIS_STATUS_WDI_INDICATION_CREATE_PORT_COMPLETE   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_CREATE_PORT_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_DELETE_PORT_COMPLETE   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_DELETE_PORT_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_START_AP_COMPLETE   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_START_AP_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_STOP_AP_COMPLETE   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_STOP_AP_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_STOP_AP   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_STOP_AP)

#define NDIS_STATUS_WDI_INDICATION_CAN_SUSTAIN_AP   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_CAN_SUSTAIN_AP)

#define NDIS_STATUS_WDI_INDICATION_SEND_AP_ASSOCIATION_RESPONSE_COMPLETE   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_SEND_AP_ASSOCIATION_RESPONSE_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_ASSOCIATION_RESULT   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_ASSOCIATION_RESULT)

#define NDIS_STATUS_WDI_INDICATION_P2P_GROUP_OPERATING_CHANNEL   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_P2P_GROUP_OPERATING_CHANNEL)

#define NDIS_STATUS_WDI_INDICATION_CHANGE_OPERATION_MODE_COMPLETE   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_CHANGE_OPERATION_MODE_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_IHV_EVENT   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_IHV_EVENT)

#define NDIS_STATUS_WDI_INDICATION_OPEN_COMPLETE   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_OPEN_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_CLOSE_COMPLETE   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_CLOSE_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_ROAM_COMPLETE   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_ROAM_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_ASSOCIATION_PARAMETERS_REQUEST   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_ASSOCIATION_PARAMETERS_REQUEST)

#define NDIS_STATUS_WDI_INDICATION_TASK_OFFLOAD_CURRENT_CONFIG   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_TASK_OFFLOAD_CURRENT_CONFIG)

#define NDIS_STATUS_WDI_TCP_RSC_STATISTICS   \
    WDI_DEFINE_INDICATION(WDI_TCP_RSC_STATISTICS)

#define NDIS_STATUS_WDI_INDICATION_P2P_OPERATING_CHANNEL_ATTRIBUTES   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_P2P_OPERATING_CHANNEL_ATTRIBUTES)

#define NDIS_STATUS_WDI_INDICATION_IHV_TASK_REQUEST   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_IHV_TASK_REQUEST)

#define NDIS_STATUS_WDI_INDICATION_IHV_TASK_COMPLETE   \
    WDI_DEFINE_INDICATION(WDI_INDICATION_IHV_TASK_COMPLETE)

#define NDIS_STATUS_WDI_INDICATION_FIRMWARE_STALLED \
    WDI_DEFINE_INDICATION(WDI_INDICATION_FIRMWARE_STALLED)

#define NDIS_STATUS_WDI_INDICATION_FT_ASSOC_PARAMS_NEEDED \
    WDI_DEFINE_INDICATION(WDI_INDICATION_FT_ASSOC_PARAMS_NEEDED)

// Special codes
/*++
 Abort task request
 -- */
#define OID_WDI_ABORT_TASK    \
    WDI_DEFINE_OID(WDI_ABORT_TASK)

//
// Indications
//


//
// TODO: Temporary Completion handlers for OIDs and Indications
//

NDIS_STATUS
Wdi_NdisMRegisterWdiMiniportDriver(
    _In_     PDRIVER_OBJECT                              DriverObject,
    _In_     PUNICODE_STRING                             RegistryPath,
    _In_opt_ NDIS_HANDLE                                 MiniportDriverContext,
    _In_     PNDIS_MINIPORT_DRIVER_CHARACTERISTICS       MiniportDriverCharacteristics,
    _In_     PNDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS   MiniportWdiCharacteristics,
    _Out_    PNDIS_HANDLE                                NdisMiniportDriverHandle
    );


VOID
Wdi_NdisMDeregisterWdiMiniportDriver(
    _In_ NDIS_HANDLE              NdisMiniportDriverHandle
    );


VOID
Wdi_NdisMOidRequestComplete(
    __in  NDIS_HANDLE             MiniportAdapterHandle,
    __in  PNDIS_OID_REQUEST       Request,
    __in  NDIS_STATUS             Status
    );


EXPORT
VOID
Wdi_NdisMIndicateStatusEx(
    _In_ NDIS_HANDLE              MiniportAdapterHandle,
    _In_ PNDIS_STATUS_INDICATION  StatusIndication
    );

#ifdef __cplusplus
}
#endif 

#include <packoff.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif  // __DOT11WDI_H__

