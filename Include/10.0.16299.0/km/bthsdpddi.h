//
//    Copyright (C) Microsoft.  All rights reserved.
//
#ifndef  __BTHSDPDDI_H__
#define  __BTHSDPDDI_H__

#if (NTDDI_VERSION >= NTDDI_VISTA)

#ifdef __cplusplus
extern "C" {
#endif

#define BTHDDI_SDP_PARSE_INTERFACE_VERSION_FOR_QI       (0x0100)
#define BTHDDI_SDP_NODE_INTERFACE_VERSION_FOR_QI        (0x0100)

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_TREE_ROOT_NODE (*PCREATENODETREEROOT)(_In_ ULONG tag);

_IRQL_requires_same_
typedef NTSTATUS (*PFREETREE)(_In_ __drv_freesMem(Mem) PSDP_TREE_ROOT_NODE Tree);

_Must_inspect_result_
_IRQL_requires_same_
typedef NTSTATUS (*PAPPENDNODETOCONTAINERNODE)(_In_ PSDP_NODE Container,
                                               _In_ __drv_aliasesMem PSDP_NODE Node);


_Must_inspect_result_
_IRQL_requires_same_
typedef NTSTATUS (*PADDATTRIBUTETOTREEE)(_In_ PSDP_TREE_ROOT_NODE Root,
                                         _In_ USHORT AttribId,
                                         _In_ __drv_aliasesMem PSDP_NODE AttribValueNode,
                                         _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODENIL)(_In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEBOOLEAN)(_In_ UCHAR bVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEUINT8)(_In_ UCHAR ucVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEUINT16)(_In_ USHORT usVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEUINT32)(_In_ ULONG ulVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEUINT64)(_In_ ULONGLONG ullVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEUINT128)(_In_ PSDP_ULARGE_INTEGER_16 puli16Val, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEINT8)(_In_ CHAR cVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEINT16)(_In_ SHORT sVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEINT32)(_In_ LONG lVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEINT64)(_In_ LONGLONG llVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEINT128)(_In_ PSDP_LARGE_INTEGER_16 pul16Val, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEUUID16)(_In_ USHORT usVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEUUID32)(_In_ ULONG ulVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEUUID128)(_In_ const GUID * pUuidVal, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODESTRING)(_In_reads_bytes_(stringLength) PCHAR string, _In_ ULONG stringLength, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEURL)(_In_reads_bytes_(urlLength) PCHAR url, _In_ ULONG urlLength, _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODEALTERNATIVE)(_In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
_When_(return!=0, __drv_allocatesMem(Mem))
typedef PSDP_NODE (*PCREATENODESEQUENCE)(_In_ ULONG tag);


//
// GUID_BTHDDI_SDP_NODE_INTERFACE
//
typedef struct _BTHDDI_SDP_NODE_INTERFACE {
    INTERFACE           Interface;

    PCREATENODETREEROOT SdpCreateNodeTree;
    PFREETREE           SdpFreeTree;

    PCREATENODENIL      SdpCreateNodeNil;

    PCREATENODEBOOLEAN  SdpCreateNodeBoolean;

    PCREATENODEUINT8    SdpCreateNodeUint8;
    PCREATENODEUINT16   SdpCreateNodeUint16;
    PCREATENODEUINT32   SdpCreateNodeUint32;
    PCREATENODEUINT64   SdpCreateNodeUint64;
    PCREATENODEUINT128  SdpCreateNodeUint128;

    PCREATENODEINT8     SdpCreateNodeInt8;
    PCREATENODEINT16    SdpCreateNodeInt16;
    PCREATENODEINT32    SdpCreateNodeInt32;
    PCREATENODEINT64    SdpCreateNodeInt64;
    PCREATENODEINT128   SdpCreateNodeInt128;

    PCREATENODEUUID16   SdpCreateNodeUuid16;
    PCREATENODEUUID32   SdpCreateNodeUuid32;
    PCREATENODEUUID128  SdpCreateNodeUuid128;

    PCREATENODESTRING   SdpCreateNodeString;

    PCREATENODEURL      SdpCreateNodeUrl;

    PCREATENODEALTERNATIVE SdpCreateNodeAlternative;
    PCREATENODESEQUENCE SdpCreateNodeSequence;

    PADDATTRIBUTETOTREEE SdpAddAttributeToTree;
    PAPPENDNODETOCONTAINERNODE SdpAppendNodeToContainerNode;

} BTHDDI_SDP_NODE_INTERFACE, *PBTHDDI_SDP_NODE_INTERFACE;



_IRQL_requires_same_
typedef void (*PBYTESWAPUUID128)(_In_ GUID *pUuidFrom, _Out_ GUID *pUuiidTo);

_IRQL_requires_same_
typedef void (*PBYTESWAPUINT128)(_In_ PSDP_ULARGE_INTEGER_16 pInUint128,
                                 _Out_ PSDP_ULARGE_INTEGER_16 pOutUint128);

_IRQL_requires_same_
typedef ULONGLONG (*PBYTESWAPUINT64)(_In_ ULONGLONG uint64);

_IRQL_requires_same_
typedef void (*PRETRIEVEUUID128)(_In_ PUCHAR Stream, _Out_ GUID *uuid128);

_IRQL_requires_same_
typedef void (*PRETRIEVEUINT128)(_In_ PUCHAR Stream,
                                 _Out_ PSDP_ULARGE_INTEGER_16 pUint128);

_IRQL_requires_same_
typedef void (*PRETRIEVEUINT64)(_In_ PUCHAR Stream, _Out_ PULONGLONG pUint16);

_Must_inspect_result_
_IRQL_requires_same_
typedef NTSTATUS (*PVALIDATESTREAM)(_In_reads_bytes_(Size) PUCHAR Stream,
                                    _In_ ULONG Size,
                                    _Out_ PULONG_PTR ErrorByte);

_Must_inspect_result_
_IRQL_requires_same_
typedef NTSTATUS (*PFINDATTRIBUTEINTREE)(_In_ PSDP_TREE_ROOT_NODE Tree,
                                         _In_ USHORT AttribId,
                                         _Outptr_ PSDP_NODE *AttribValue);

_Must_inspect_result_
_IRQL_requires_same_
typedef NTSTATUS (*PCONVERTTREETOSTREAM)(_In_ PSDP_TREE_ROOT_NODE Root,
                                         _Post_ _When_(return==0, __drv_allocatesMem(Mem)) PUCHAR *Stream, 
                                         _Out_ PULONG Size, 
                                         _In_ ULONG tag);

_Must_inspect_result_
_IRQL_requires_same_
typedef NTSTATUS (*PCONVERTSTREAMTOTREE)(_In_reads_bytes_(Size) PUCHAR Stream,
                                         _In_ ULONG Size,
                                         _Out_ PSDP_TREE_ROOT_NODE *Node,
                                         _In_ ULONG tag);
_IRQL_requires_same_
typedef VOID (*PGETNEXTELEMENT)(_In_reads_bytes_(StreamSize) PUCHAR Stream,
                                _In_ ULONG StreamSize,
                                _In_opt_ PUCHAR CurrentElement,
                                _Outptr_result_bytebuffer_(*NextElementSize) PUCHAR* NextElement,
                                _Out_ PULONG NextElementSize);

typedef VOID (*pReservedFunction)();


#ifndef __BTHSDPDDIP_H__  

typedef struct _BTHDDI_SDP_PARSE_INTERFACE {
    INTERFACE               Interface;

    PVALIDATESTREAM         SdpValidateStream;

    PCONVERTSTREAMTOTREE    SdpConvertStreamToTree;
    PCONVERTTREETOSTREAM    SdpConvertTreeToStream;
    PFREETREE               SdpFreeTree;
    PBYTESWAPUUID128        SdpByteSwapUuid128;
    PBYTESWAPUINT128        SdpByteSwapUint128;
    PBYTESWAPUINT64         SdpByteSwapUint64;
    PRETRIEVEUUID128        SdpRetrieveUuid128;
    PRETRIEVEUINT128        SdpRetrieveUint128;
    PRETRIEVEUINT64         SdpRetrieveUint64;
    PFINDATTRIBUTEINTREE    SdpFindAttributeInTree;
    PGETNEXTELEMENT         SdpGetNextElement;
    pReservedFunction       Reserved1;
    pReservedFunction       Reserved2;
    pReservedFunction       Reserved3;
    pReservedFunction       Reserved4;
} BTHDDI_SDP_PARSE_INTERFACE, *PBTHDDI_SDP_PARSE_INTERFACE;



#endif


#ifdef __cplusplus
}
#endif 

#endif // (NTDDI_VERSION >= NTDDI_VISTA)

#endif //  __BTHSDPDDI_H__
