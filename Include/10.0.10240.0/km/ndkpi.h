/*++

Copyright (c) Microsoft Corporation

Module Name:

    ndkpi.h

Abstract:

    NetworkDirect kernel-mode provider interface

Environment:

    Kernel  mode only.

--*/

#ifndef _NDKPI_H_
#define _NDKPI_H_

#if _MSC_VER > 1000
#pragma once
#endif

#include <ndkinfo.h>
#include <ws2def.h>

typedef enum _NDK_OBJECT_TYPE {
    NdkObjectTypeUndefined = 0,
    NdkObjectTypeAdapter = 1,
    NdkObjectTypeQp = 2,
    NdkObjectTypeCq = 3,
    NdkObjectTypeMr = 4,
    NdkObjectTypeMw = 5,
    NdkObjectTypePd = 6,
    NdkObjectTypeSharedEndpoint = 7,
    NdkObjectTypeConnector = 8,
    NdkObjectTypeListener = 9,
    NdkObjectTypeSrq = 10,
    NdkObjectTypeMax = 11    
} NDK_OBJECT_TYPE;

typedef struct _NDK_OBJECT_HEADER_RESERVED_BLOCK {
    PVOID rf[4];    
} NDK_OBJECT_HEADER_RESERVED_BLOCK;

typedef struct _NDK_OBJECT_HEADER {
    NDK_VERSION Version;
    NDK_OBJECT_TYPE ObjectType;
    NDK_OBJECT_HEADER_RESERVED_BLOCK NdkReserved;    
} NDK_OBJECT_HEADER;

typedef struct _NDK_RESULT {
    NTSTATUS Status;
    ULONG BytesTransferred;
    PVOID QPContext;
    PVOID RequestContext;
} NDK_RESULT;

typedef enum _NDK_OPERATION_TYPE
{
    NdkOperationTypeReceive = 1,
    NdkOperationTypeReceiveAndInvalidate = 32769,
    NdkOperationTypeSend = 2,
    NdkOperationTypeFastRegister = 4,
    NdkOperationTypeBind = 8,
    NdkOperationTypeInvalidate = 16,
    NdkOperationTypeRead = 32,
    NdkOperationTypeWrite = 64
} NDK_OPERATION_TYPE;

typedef struct _NDK_RESULT_EX {
    NTSTATUS Status;
    ULONG BytesTransferred;
    PVOID QPContext;
    PVOID RequestContext;
    NDK_OPERATION_TYPE Type;
    ULONG_PTR TypeSpecificCompletionOutput;
} NDK_RESULT_EX;

typedef PHYSICAL_ADDRESS NDK_LOGICAL_ADDRESS;

typedef 
_Struct_size_bytes_(FIELD_OFFSET(NDK_LOGICAL_ADDRESS_MAPPING, AdapterPageArray) + 
	(AdapterPageCount * sizeof(NDK_LOGICAL_ADDRESS)))
struct _NDK_LOGICAL_ADDRESS_MAPPING {
    PVOID AdapterContext; // Reserved for NDK provider's use
    ULONG AdapterPageCount;
    _Field_size_(AdapterPageCount) NDK_LOGICAL_ADDRESS AdapterPageArray[1]; // actual size is AdapterPageCount
} NDK_LOGICAL_ADDRESS_MAPPING;

typedef struct _NDK_SGE {
    union {
        PVOID VirtualAddress;
        NDK_LOGICAL_ADDRESS LogicalAddress;
    };
    ULONG Length;
    UINT32 MemoryRegionToken;
} NDK_SGE;

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_CLOSE_COMPLETION) (
    _In_opt_ PVOID Context
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_REQUEST_COMPLETION) (
    _In_opt_ PVOID Context,
    _In_ NTSTATUS Status
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_CREATE_COMPLETION) (
    _In_opt_ PVOID Context,
    _In_ NTSTATUS Status,
    _In_ NDK_OBJECT_HEADER *pNdkObject
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CLOSE_OBJECT) (
    _In_ NDK_OBJECT_HEADER *pNdkObject,
    _In_ NDK_FN_CLOSE_COMPLETION CloseCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef struct _NDK_EXTENSION_INTERFACE {
    CONST VOID *Dispatch;
} NDK_EXTENSION_INTERFACE;

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_QUERY_EXTENSION_INTERFACE) (
    _In_ NDK_OBJECT_HEADER *pNdkObject,
    _In_ GUID *ExtensionInterfaceID,
    _In_ NDK_VERSION ExtensionInterfaceVersion,
    _Out_ NDK_EXTENSION_INTERFACE *pExtensionInterface 
    );

typedef struct _NDK_CQ NDK_CQ;

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_RESIZE_CQ) (
    _In_ NDK_CQ *pNdkCq,
    _In_ ULONG CqDepth,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_CQ_NOTIFICATION_CALLBACK) (
    _In_opt_ PVOID CqNotificationContext,
    _In_ NTSTATUS CqStatus
    );

#define NDK_CQ_NOTIFY_ERRORS 0
#define NDK_CQ_NOTIFY_ANY 1
#define NDK_CQ_NOTIFY_SOLICITED 2

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_ARM_CQ) (
    _In_ NDK_CQ *pNdkCq,
    _In_ ULONG Type
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
(*NDK_FN_GET_CQ_RESULTS) (
    _In_ NDK_CQ *pNdkCq,
    _Out_writes_to_(nResults, return) NDK_RESULT Results[],
    _In_ ULONG nResults
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CONTROL_CQ_INTERRUPT_MODERATION) (
    _In_ NDK_CQ *pNdkCq,
    _In_ ULONG ModerationInterval,
    _In_ ULONG ModerationCount
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
(*NDK_FN_GET_CQ_RESULTS_EX) (
    _In_ NDK_CQ *pNdkCq,
    _Out_writes_to_(nResults, return) NDK_RESULT_EX Results[],
    _In_ ULONG nResults
    );

typedef struct _NDK_CQ_DISPATCH {
    NDK_FN_CLOSE_OBJECT NdkCloseCq;
    NDK_FN_QUERY_EXTENSION_INTERFACE NdkQueryExtension;
    NDK_FN_RESIZE_CQ NdkResizeCq;
    NDK_FN_ARM_CQ NdkArmCq;
    NDK_FN_GET_CQ_RESULTS NdkGetCqResults;
    NDK_FN_CONTROL_CQ_INTERRUPT_MODERATION NdkControlCqInterruptModeration;
    NDK_FN_GET_CQ_RESULTS_EX NdkGetCqResultsEx;
} NDK_CQ_DISPATCH;

typedef struct _NDK_CQ {
    NDK_OBJECT_HEADER Header;
    CONST NDK_CQ_DISPATCH* Dispatch;
} NDK_CQ;

typedef struct _NDK_MR NDK_MR;

#define NDK_MR_FLAG_ALLOW_LOCAL_READ             0x00000000
#define NDK_MR_FLAG_ALLOW_LOCAL_WRITE            0x00000001
#define NDK_MR_FLAG_ALLOW_REMOTE_READ            0x00000002
#define NDK_MR_FLAG_ALLOW_REMOTE_WRITE           0x00000005
#define NDK_MR_FLAG_RDMA_READ_SINK               0x00000008

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_REGISTER_MR) (
    _In_ NDK_MR *pNdkMr,
    _In_ MDL *Mdl, // must represent virtually contiguous memory region
    _In_ SIZE_T Length,
    _In_ ULONG Flags,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_DEREGISTER_MR) (
    _In_ NDK_MR *pNdkMr,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_INITIALIZE_FAST_REGISTER_MR) (
    _In_ NDK_MR *pNdkMr,
    _In_ ULONG AdapterPageCount,
    _In_ BOOLEAN RemoteAccess,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
UINT32
(*NDK_FN_GET_REMOTE_TOKEN_FROM_MR) (
    _In_ NDK_MR *pNdkMr
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
UINT32
(*NDK_FN_GET_LOCAL_TOKEN_FROM_MR) (
    _In_ NDK_MR *pNdkMr
    );

typedef struct _NDK_MR_DISPATCH {
    NDK_FN_CLOSE_OBJECT NdkCloseMr;
    NDK_FN_QUERY_EXTENSION_INTERFACE NdkQueryExtension;
    NDK_FN_REGISTER_MR NdkRegisterMr;
    NDK_FN_DEREGISTER_MR NdkDeregisterMr;
    NDK_FN_INITIALIZE_FAST_REGISTER_MR NdkInitializeFastRegisterMr;
    NDK_FN_GET_REMOTE_TOKEN_FROM_MR NdkGetRemoteTokenFromMr;
    NDK_FN_GET_LOCAL_TOKEN_FROM_MR NdkGetLocalTokenFromMr;
} NDK_MR_DISPATCH;

typedef struct _NDK_MR {
    NDK_OBJECT_HEADER Header;
    CONST NDK_MR_DISPATCH* Dispatch;
} NDK_MR;

typedef struct _NDK_MW NDK_MW;

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
UINT32
(*NDK_FN_GET_REMOTE_TOKEN_FROM_MW) (
    _In_ NDK_MW *pNdkMw
    );

typedef struct _NDK_MW_DISPATCH {
    NDK_FN_CLOSE_OBJECT NdkCloseMw;
    NDK_FN_QUERY_EXTENSION_INTERFACE NdkQueryExtension;
    NDK_FN_GET_REMOTE_TOKEN_FROM_MW NdkGetRemoteTokenFromMw;
} NDK_MW_DISPATCH;

typedef struct _NDK_MW {
    NDK_OBJECT_HEADER Header;
    CONST NDK_MW_DISPATCH* Dispatch;
} NDK_MW;

typedef struct _NDK_SRQ NDK_SRQ;

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_MODIFY_SRQ) (
    _In_ NDK_SRQ *pNdkSrq,
    _In_ ULONG SrqDepth,
    _In_ ULONG NotifyThreshold,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_SRQ_NOTIFICATION_CALLBACK) (
    _In_opt_ PVOID SrqNotificationContext,
    _In_ NTSTATUS SrqStatus
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_SRQ_RECEIVE) (
    _In_ NDK_SRQ *pNdkSrq,
    _In_opt_ PVOID RequestContext,
    _In_reads_(nSge) CONST NDK_SGE* pSgl,
    _In_ ULONG nSge
    );

typedef struct _NDK_SRQ_DISPATCH {
    NDK_FN_CLOSE_OBJECT NdkCloseSrq;
    NDK_FN_QUERY_EXTENSION_INTERFACE NdkQueryExtension;
    NDK_FN_MODIFY_SRQ NdkModifySrq;
    NDK_FN_SRQ_RECEIVE NdkSrqReceive;
} NDK_SRQ_DISPATCH;

typedef struct _NDK_SRQ {
    NDK_OBJECT_HEADER Header;
    CONST NDK_SRQ_DISPATCH* Dispatch;
} NDK_SRQ;

typedef struct _NDK_QP NDK_QP;

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_FLUSH) (
    _In_ NDK_QP *pNdkQp
    );

#define NDK_OP_FLAG_SILENT_SUCCESS           0x00000001
#define NDK_OP_FLAG_READ_FENCE               0x00000002
#define NDK_OP_FLAG_SEND_AND_SOLICIT_EVENT   0x00000004
#define NDK_OP_FLAG_ALLOW_REMOTE_READ        0x00000008
#define NDK_OP_FLAG_ALLOW_LOCAL_WRITE        0x00000010 // FRMR
#define NDK_OP_FLAG_ALLOW_REMOTE_WRITE       0x00000030
#define NDK_OP_FLAG_INLINE                   0x00000040
#define NDK_OP_FLAG_RDMA_READ_SINK           0x00000080
#define NDK_OP_FLAG_RDMA_READ_LOCAL_INVALIDATE 0x00000100
#define NDK_OP_FLAG_DEFER                    0x00000200

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_SEND) (
    _In_ NDK_QP *pNdkQp,
    _In_opt_ PVOID RequestContext,
    _In_reads_(nSge) CONST NDK_SGE* pSgl,
    _In_ ULONG nSge,
    _In_ ULONG Flags
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_RECEIVE) (
    _In_ NDK_QP *pNdkQp,
    _In_opt_ PVOID RequestContext,
    _In_reads_(nSge) CONST NDK_SGE* pSgl,
    _In_ ULONG nSge
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_BIND) (
    _In_ NDK_QP *pNdkQp,
    _In_opt_ PVOID RequestContext,
    _In_ NDK_MR *pMr,
    _In_ NDK_MW *pMw,
    _In_ PVOID VirtualAddress,
    _In_ SIZE_T Length,
    _In_ ULONG Flags
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_FAST_REGISTER) (
    _In_ NDK_QP *pNdkQp,
    _In_opt_ PVOID RequestContext,
    _In_ NDK_MR *pMr,
    _In_ ULONG AdapterPageCount,
    _In_reads_(AdapterPageCount) CONST NDK_LOGICAL_ADDRESS* AdapterPageArray,
    _In_ ULONG FBO,
    _In_ SIZE_T Length,
    _In_ PVOID BaseVirtualAddress,
    _In_ ULONG Flags
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_INVALIDATE) (
    _In_ NDK_QP *pNdkQp,
    _In_opt_ PVOID RequestContext,
    _In_ NDK_OBJECT_HEADER *pNdkMrOrMw,
    _In_ ULONG Flags
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_READ) (
    _In_ NDK_QP *pNdkQp,
    _In_opt_ PVOID RequestContext,
    _In_reads_(nSge) CONST NDK_SGE* pSgl,
    _In_ ULONG nSge,
    _In_ UINT64 RemoteAddress,
    _In_ UINT32 RemoteToken,
    _In_ ULONG Flags
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_WRITE) (
    _In_ NDK_QP *pNdkQp,
    _In_opt_ PVOID RequestContext,
    _In_reads_(nSge) CONST NDK_SGE* pSgl,
    _In_ ULONG nSge,
    _In_ UINT64 RemoteAddress,
    _In_ UINT32 RemoteToken,
    _In_ ULONG Flags
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_SEND_AND_INVALIDATE) (
    _In_ NDK_QP *pNdkQp,
    _In_opt_ PVOID RequestContext,
    _In_reads_(nSge) CONST NDK_SGE *pSgl,
    _In_ ULONG nSge,
    _In_ ULONG Flags,
    _In_ UINT32 RemoteToken
    );

typedef struct _NDK_QP_DISPATCH {
    NDK_FN_CLOSE_OBJECT NdkCloseQp;
    NDK_FN_QUERY_EXTENSION_INTERFACE NdkQueryExtension;
    NDK_FN_FLUSH NdkFlush;
    NDK_FN_SEND NdkSend;
    NDK_FN_RECEIVE NdkReceive;
    NDK_FN_BIND NdkBind;
    NDK_FN_FAST_REGISTER NdkFastRegister;
    NDK_FN_INVALIDATE NdkInvalidate;
    NDK_FN_READ NdkRead;
    NDK_FN_WRITE NdkWrite;
    NDK_FN_SEND_AND_INVALIDATE NdkSendAndInvalidate;
} NDK_QP_DISPATCH;

typedef struct _NDK_QP {
    NDK_OBJECT_HEADER Header;
    CONST NDK_QP_DISPATCH* Dispatch;
} NDK_QP;

typedef struct _NDK_PD NDK_PD;

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CREATE_MR) (
    _In_ NDK_PD *pNdkPd,
    _In_ BOOLEAN FastRegister,
    _In_ NDK_FN_CREATE_COMPLETION CreateCompletion,
    _In_opt_ PVOID RequestContext,
    _Outptr_ NDK_MR **ppNdkMr
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CREATE_MW) (
    _In_ NDK_PD *pNdkPd,
    _In_ NDK_FN_CREATE_COMPLETION CreateCompletion,
    _In_opt_ PVOID RequestContext,
    _Outptr_ NDK_MW **ppNdkMw
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CREATE_SRQ) (
    _In_ NDK_PD *pNdkPd,
    _In_ ULONG SrqDepth,
    _In_ ULONG MaxReceiveRequestSge,
    _In_ ULONG NotifyThreshold,
    _In_opt_ NDK_FN_SRQ_NOTIFICATION_CALLBACK SrqNotification,
    _In_opt_ PVOID SrqNotificationContext,
    _In_opt_ GROUP_AFFINITY *Affinity,
    _In_ NDK_FN_CREATE_COMPLETION CreateCompletion,
    _In_opt_ PVOID RequestContext,
    _Outptr_ NDK_SRQ **ppNdkSrq
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CREATE_QP) (
    _In_ NDK_PD *pNdkPd,
    _In_ NDK_CQ *pReceiveCq,
    _In_ NDK_CQ *pInitiatorCq,
    _In_opt_ PVOID QPContext,
    _In_ ULONG ReceiveQueueDepth,
    _In_ ULONG InitiatorQueueDepth,
    _In_ ULONG MaxReceiveRequestSge,
    _In_ ULONG MaxInitiatorRequestSge,
    _In_ ULONG InlineDataSize,
    _In_ NDK_FN_CREATE_COMPLETION CreateCompletion,
    _In_opt_ PVOID RequestContext,
    _Outptr_ NDK_QP **ppNdkQp
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CREATE_QP_WITH_SRQ) (
    _In_ NDK_PD *pNdkPd,
    _In_ NDK_CQ *pReceiveCq,
    _In_ NDK_CQ *pInitiatorCq,
    _In_ NDK_SRQ *pSrq,
    _In_opt_ PVOID QPContext,
    _In_ ULONG InitiatorQueueDepth,
    _In_ ULONG MaxInitiatorRequestSge,
    _In_ ULONG InlineDataSize,
    _In_ NDK_FN_CREATE_COMPLETION CreateCompletion,
    _In_opt_ PVOID RequestContext,
    _Outptr_ NDK_QP **ppNdkQp
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_GET_PRIVILEGED_MEMORY_REGION_TOKEN) (
    _In_ NDK_PD *pNdkPd,
    _Out_ UINT32 *pToken
    );

typedef struct _NDK_PD_DISPATCH {
    NDK_FN_CLOSE_OBJECT NdkClosePd;
    NDK_FN_QUERY_EXTENSION_INTERFACE NdkQueryExtension;
    NDK_FN_CREATE_MR NdkCreateMr;
    NDK_FN_CREATE_MW NdkCreateMw;
    NDK_FN_CREATE_SRQ NdkCreateSrq;
    NDK_FN_CREATE_QP NdkCreateQp;
    NDK_FN_CREATE_QP_WITH_SRQ NdkCreateQpWithSrq;
    NDK_FN_GET_PRIVILEGED_MEMORY_REGION_TOKEN NdkGetPrivilegedMemoryRegionToken;
} NDK_PD_DISPATCH;

typedef struct _NDK_PD {
    NDK_OBJECT_HEADER Header;
    CONST NDK_PD_DISPATCH* Dispatch;
} NDK_PD;

typedef struct _NDK_SHARED_ENDPOINT NDK_SHARED_ENDPOINT;

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_GET_SHARED_ENDPOINT_LOCAL_ADDRESS) (
    _In_ NDK_SHARED_ENDPOINT *pNdkSharedEndpoint,
    _Out_writes_bytes_to_opt_(*pAddressLength, *pAddressLength) PSOCKADDR pAddress,
    _Inout_ ULONG* pAddressLength
    );

typedef struct _NDK_SHARED_ENDPOINT_DISPATCH {
    NDK_FN_CLOSE_OBJECT NdkCloseSharedEndpoint;
    NDK_FN_QUERY_EXTENSION_INTERFACE NdkQueryExtension;
    NDK_FN_GET_SHARED_ENDPOINT_LOCAL_ADDRESS NdkGetLocalAddress;
} NDK_SHARED_ENDPOINT_DISPATCH;

typedef struct _NDK_SHARED_ENDPOINT {
    NDK_OBJECT_HEADER Header;
    CONST NDK_SHARED_ENDPOINT_DISPATCH* Dispatch;
} NDK_SHARED_ENDPOINT;

typedef struct _NDK_CONNECTOR NDK_CONNECTOR;

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CONNECT) (
    _In_ NDK_CONNECTOR *pNdkConnector,
    _In_ NDK_QP *pNdkQp,
    _In_reads_bytes_(SrcAddressLength) CONST PSOCKADDR pSrcAddress,
    _In_ ULONG SrcAddressLength,
    _In_reads_bytes_(DestAddressLength) CONST PSOCKADDR pDestAddress,
    _In_ ULONG DestAddressLength,
    _In_ ULONG InboundReadLimit,
    _In_ ULONG OutboundReadLimit,
    _In_reads_bytes_opt_(PrivateDataLength) CONST PVOID pPrivateData,
    _In_ ULONG PrivateDataLength,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CONNECT_WITH_SHARED_ENDPOINT) (
    _In_ NDK_CONNECTOR *pNdkConnector,
    _In_ NDK_QP *pNdkQp,
    _In_ NDK_SHARED_ENDPOINT *pNdkSharedEndpoint,
    _In_reads_bytes_(DestAddressLength) CONST PSOCKADDR pDestAddress,
    _In_ ULONG DestAddressLength,
    _In_ ULONG InboundReadLimit,
    _In_ ULONG OutboundReadLimit,
    _In_reads_bytes_opt_(PrivateDataLength) CONST PVOID pPrivateData,
    _In_ ULONG PrivateDataLength,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_DISCONNECT_EVENT_CALLBACK) (
    _In_opt_ PVOID DisconnectEventContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_COMPLETE_CONNECT) (
    _In_ NDK_CONNECTOR *pNdkConnector,
    _In_opt_ NDK_FN_DISCONNECT_EVENT_CALLBACK DisconnectEvent,
    _In_opt_ PVOID DisconnectEventContext,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_ACCEPT) (
    _In_ NDK_CONNECTOR *pNdkConnector,
    _In_ NDK_QP *pNdkQp,
    _In_ ULONG InboundReadLimit,
    _In_ ULONG OutboundReadLimit,
    _In_reads_bytes_opt_(PrivateDataLength) CONST PVOID pPrivateData,
    _In_ ULONG PrivateDataLength,
    _In_opt_ NDK_FN_DISCONNECT_EVENT_CALLBACK DisconnectEvent,
    _In_opt_ PVOID DisconnectEventContext,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_REJECT) (
    _In_ NDK_CONNECTOR *pNdkConnector,
    _In_reads_bytes_opt_(PrivateDataLength) CONST PVOID pPrivateData,
    _In_ ULONG PrivateDataLength
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_GET_CONNECTION_DATA) (
    _In_ NDK_CONNECTOR *pNdkConnector,
    _Out_opt_ ULONG* pInboundReadLimit,
    _Out_opt_ ULONG* pOutboundReadLimit,
    _Out_writes_bytes_to_opt_(*pPrivateDataLength, *pPrivateDataLength) PVOID pPrivateData,
    _Inout_ ULONG* pPrivateDataLength
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_GET_LOCAL_ADDRESS) (
    _In_ NDK_CONNECTOR *pNdkConnector,
    _Out_writes_bytes_to_opt_(*pAddressLength, *pAddressLength) PSOCKADDR pAddress,
    _Inout_ ULONG* pAddressLength
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_GET_PEER_ADDRESS) (
    _In_ NDK_CONNECTOR *pNdkConnector,
    _Out_writes_bytes_to_opt_(*pAddressLength, *pAddressLength) PSOCKADDR pAddress,
    _Inout_ ULONG* pAddressLength
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_DISCONNECT) (
    _In_ NDK_CONNECTOR *pNdkConnector,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_DISCONNECT_EX) (
    _In_ NDK_CONNECTOR *pNdkConnector,
    _In_ BOOLEAN Abortive,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef struct _NDK_CONNECTOR_DISPATCH {
    NDK_FN_CLOSE_OBJECT NdkCloseConnector;
    NDK_FN_QUERY_EXTENSION_INTERFACE NdkQueryExtension;
    NDK_FN_CONNECT NdkConnect;
    NDK_FN_CONNECT_WITH_SHARED_ENDPOINT NdkConnectWithSharedEndpoint;
    NDK_FN_COMPLETE_CONNECT NdkCompleteConnect;
    NDK_FN_ACCEPT NdkAccept;
    NDK_FN_REJECT NdkReject;
    NDK_FN_GET_CONNECTION_DATA NdkGetConnectionData;
    NDK_FN_GET_LOCAL_ADDRESS NdkGetLocalAddress;
    NDK_FN_GET_PEER_ADDRESS NdkGetPeerAddress;
    NDK_FN_DISCONNECT NdkDisconnect;
} NDK_CONNECTOR_DISPATCH;

typedef struct _NDK_CONNECTOR {
    NDK_OBJECT_HEADER Header;
    CONST NDK_CONNECTOR_DISPATCH* Dispatch;
} NDK_CONNECTOR;

typedef struct _NDK_LISTENER NDK_LISTENER;

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_CONNECT_EVENT_CALLBACK) (
    _In_opt_ PVOID ConnectEventContext,
    _In_ NDK_CONNECTOR *pNdkConnector
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_CONTROL_CONNECT_EVENTS) (
    _In_ NDK_LISTENER *pNdkListener,
    _In_ BOOLEAN Pause
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_LISTEN) (
    _In_ NDK_LISTENER *pNdkListener,
    _In_reads_bytes_(AddressLength) CONST PSOCKADDR pAddress,
    _In_ ULONG AddressLength,
    _In_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_GET_LISTENER_LOCAL_ADDRESS) (
    _In_ NDK_LISTENER *pNdkListener,
    _Out_writes_bytes_to_opt_(*pAddressLength, *pAddressLength) PSOCKADDR pAddress,
    _Inout_ ULONG* pAddressLength
    );

typedef struct _NDK_LISTENER_DISPATCH {
    NDK_FN_CLOSE_OBJECT NdkCloseListener;
    NDK_FN_QUERY_EXTENSION_INTERFACE NdkQueryExtension;
    NDK_FN_LISTEN NdkListen;
    NDK_FN_GET_LISTENER_LOCAL_ADDRESS NdkGetLocalAddress;
    NDK_FN_CONTROL_CONNECT_EVENTS NdkControlConnectEvents;
} NDK_LISTENER_DISPATCH;

typedef struct _NDK_LISTENER {
    NDK_OBJECT_HEADER Header;
    CONST NDK_LISTENER_DISPATCH* Dispatch;
} NDK_LISTENER;

typedef struct _NDK_ADAPTER NDK_ADAPTER;

typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
(*NDK_FN_QUERY_ADAPTER_INFO) (
    _In_ NDK_ADAPTER *pNdkAdapter,
    _Out_writes_bytes_to_opt_(*pBufferSize, *pBufferSize) NDK_ADAPTER_INFO* pInfo,
    _Inout_ ULONG* pBufferSize
    );

typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
(*NDK_FN_QUERY_ADAPTER_INFO_EX) (
    _In_ NDK_ADAPTER *pNdkAdapter,
    _In_ NDK_VERSION Version,
    _Out_writes_bytes_to_opt_(*pBufferSize, *pBufferSize) 
	  NDK_ADAPTER_INFO* pInfo,
    _Inout_ ULONG* pBufferSize
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CREATE_CQ) (
    _In_ NDK_ADAPTER *pNdkAdapter,
    _In_ ULONG CqDepth,
    _In_ NDK_FN_CQ_NOTIFICATION_CALLBACK CqNotification,
    _In_opt_ PVOID CqNotificationContext,
    _In_opt_ GROUP_AFFINITY *Affinity,
    _In_ NDK_FN_CREATE_COMPLETION CreateCompletion,
    _In_opt_ PVOID RequestContext,
    _Outptr_ NDK_CQ **ppNdkCq
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CREATE_PD) (
    _In_ NDK_ADAPTER *pNdkAdapter,
    _In_ NDK_FN_CREATE_COMPLETION CreateCompletion,
    _In_opt_ PVOID RequestContext,
    _Outptr_ NDK_PD **ppNdkPd
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CREATE_SHARED_ENDPOINT) (
    _In_ NDK_ADAPTER *pNdkAdapter,
    _In_reads_bytes_(AddressLength) CONST PSOCKADDR pAddress,
    _In_ ULONG AddressLength,
    _In_ NDK_FN_CREATE_COMPLETION CreateCompletion,
    _In_opt_ PVOID RequestContext,
    _Outptr_ NDK_SHARED_ENDPOINT **ppNdkSharedEndpoint
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CREATE_CONNECTOR) (
    _In_ NDK_ADAPTER *pNdkAdapter,
    _In_ NDK_FN_CREATE_COMPLETION CreateCompletion,
    _In_opt_ PVOID RequestContext,
    _Outptr_ NDK_CONNECTOR **ppNdkConnector
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_CREATE_LISTENER) (
    _In_ NDK_ADAPTER *pNdkAdapter,
    _In_ NDK_FN_CONNECT_EVENT_CALLBACK ConnectEvent,
    _In_opt_ PVOID ConnectEventContext,
    _In_ NDK_FN_CREATE_COMPLETION CreateCompletion,
    _In_opt_ PVOID RequestContext,
    _Outptr_ NDK_LISTENER **ppNdkListener
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(*NDK_FN_BUILD_LAM) ( //  LAM == Logical Address Mapping
    _In_ NDK_ADAPTER *pNdkAdapter,
    _In_ MDL *Mdl,  // must represent virtually contiguous region
    _In_ SIZE_T Length,
    _In_opt_ NDK_FN_REQUEST_COMPLETION RequestCompletion,
    _In_opt_ PVOID RequestContext,
    _Out_writes_bytes_to_opt_(*pLAMSize, *pLAMSize) NDK_LOGICAL_ADDRESS_MAPPING *pNdkLAM,
    _Inout_ ULONG *pLAMSize,
    _Out_ ULONG *pFBO
    );

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*NDK_FN_RELEASE_LAM) (
    _In_ NDK_ADAPTER *pNdkAdapter,
    _In_ NDK_LOGICAL_ADDRESS_MAPPING *pNdkLAM
    );

typedef struct _NDK_ADAPTER_DISPATCH {
    NDK_FN_QUERY_EXTENSION_INTERFACE NdkQueryExtension;
    NDK_FN_QUERY_ADAPTER_INFO NdkQueryAdapterInfo;
    NDK_FN_CREATE_CQ NdkCreateCq;
    NDK_FN_CREATE_PD NdkCreatePd;
    NDK_FN_CREATE_SHARED_ENDPOINT NdkCreateSharedEndpoint;
    NDK_FN_CREATE_CONNECTOR NdkCreateConnector;
    NDK_FN_CREATE_LISTENER NdkCreateListener;
    NDK_FN_BUILD_LAM NdkBuildLAM;
    NDK_FN_RELEASE_LAM NdkReleaseLAM;
} NDK_ADAPTER_DISPATCH;

typedef struct _NDK_ADAPTER {
    NDK_OBJECT_HEADER Header;
    CONST NDK_ADAPTER_DISPATCH* Dispatch;
} NDK_ADAPTER;

#endif // _NDKPI_H_

