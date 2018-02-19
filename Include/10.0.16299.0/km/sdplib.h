//
//    Copyright (C) Microsoft.  All rights reserved.
//
#ifndef __SDPLIB_H__
#define __SDPLIB_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "sdpnode.h"

#ifndef NTSTATUS
typedef _Return_type_success_(return >= 0) LONG NTSTATUS;
#endif

#ifdef _NTDDK_
#define SDPLIB_KERNEL
#endif

#ifdef SDPLIB_KERNEL
_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_TREE_ROOT_NODE
SdpCreateNodeTree(
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeNil(
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeUInt128(
    _In_ PSDP_ULARGE_INTEGER_16 puli16Val,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeUInt64(
    _In_ ULONGLONG ullVal,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeUInt32(
    _In_ ULONG ulVal,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeUInt16(
    _In_ USHORT usVal,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeUInt8(
    _In_ UCHAR ucVal,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeInt128(
    _In_ PSDP_LARGE_INTEGER_16 uil16Val,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeInt64(
    _In_ LONGLONG llVal,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeInt32(
    _In_ LONG lVal,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeInt16(
    _In_ SHORT sVal,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeInt8(
    _In_ CHAR cVal,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeUUID128(
    _In_ const GUID *uuid,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeUUID32(
    _In_ ULONG uuidVal4,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeUUID16(
    _In_ USHORT uuidVal2,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeBoolean(
    _In_ SDP_BOOLEAN  bVal,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeSequence(
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeAlternative(
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeUrl(
    _In_reads_bytes_(UrlLength) PCHAR url,
     ULONG urlLength,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
NTSTATUS
SdpAddAttributeToTree(
    _In_ PSDP_TREE_ROOT_NODE Tree,
    _In_ USHORT AttribId,
    _In_ __drv_aliasesMem PSDP_NODE AttribValue,
    _In_ ULONG tag
    );

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
PSDP_NODE
SdpCreateNodeString(
    _In_reads_bytes_(StringLength) PCHAR string, 
     ULONG stringLength, 
    _In_ ULONG tag
    );

#else //SDPLIB_KERNEL

_Must_inspect_result_
PSDP_TREE_ROOT_NODE
SdpCreateNodeTree();

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeNil();

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeUInt128(
    _In_ PSDP_ULARGE_INTEGER_16 puli16Val
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeUInt64(
    _In_ ULONGLONG ullVal
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeUInt32(
    _In_ ULONG ulVal
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeUInt16(
    _In_ USHORT usVal
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeUInt8(
    _In_ UCHAR ucVal
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeInt128(
    _In_ PSDP_LARGE_INTEGER_16 uil16Val
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeInt64(
    _In_ LONGLONG llVal
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeInt32(
    _In_ LONG lVal
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeInt16(
    _In_ SHORT sVal
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeInt8(
    _In_ CHAR cVal
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeUUID128(
    _In_ const GUID *uuid
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeUUID32(
    _In_ ULONG uuidVal4
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeUUID16(
    _In_ USHORT uuidVal2
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeBoolean(
    _In_ SDP_BOOLEAN  bVal
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeSequence();

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeAlternative();

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeUrl(
    _In_reads_bytes_(UrlLength) PCHAR url,
     ULONG urlLength
    );

_Must_inspect_result_
NTSTATUS
SdpAddAttributeToTree(
    _In_ PSDP_TREE_ROOT_NODE Tree,
    _In_ USHORT AttribId,
    _In_ PSDP_NODE AttribValue
    );

_Must_inspect_result_
PSDP_NODE
SdpCreateNodeString(
    _In_reads_bytes_(stringLength) PCHAR string, 
     ULONG stringLength
    );

#endif //SDPLIB_KERNEL

_IRQL_requires_same_
_Success_(TRUE)
NTSTATUS
SdpFreeTree(
    _In_ __drv_freesMem(Mem) PSDP_TREE_ROOT_NODE Tree
    );
    
#define   SdpCreateNodeUUID SdpCreateNodeUUID128

_Must_inspect_result_
_IRQL_requires_same_
NTSTATUS
SdpAppendNodeToContainerNode(
    _In_ PSDP_NODE Parent,
    _In_ __drv_aliasesMem PSDP_NODE Node
    );

_Must_inspect_result_
_IRQL_requires_same_
NTSTATUS
SdpFindAttributeInTree(
    _In_ PSDP_TREE_ROOT_NODE Tree,
    _In_ USHORT AttribId,
    _Out_ PSDP_NODE *Attribute
    );

#ifdef __cplusplus
};
#endif


#endif

