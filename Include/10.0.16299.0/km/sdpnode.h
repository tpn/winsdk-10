//
//    Copyright (C) Microsoft.  All rights reserved.
//
#ifndef __SDPNODE_H__
#define __SDPNODE_H__

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201) // nameless struct/union

#if (NTDDI_VERSION >= NTDDI_VISTA)

#ifdef __cplusplus
extern "C" {
#endif


                             typedef UCHAR SDP_BOOLEAN;

typedef struct ISdpNodeContainer ISdpNodeContainer;

typedef struct _SDP_NODE_HEADER {
    LIST_ENTRY Link;
    USHORT Type;
    USHORT SpecificType;
} SDP_NODE_HEADER, *PSDP_NODE_HEADER;

typedef union _SDP_NODE_DATA {
    // the nil type contains no data, so no storage is necessary

    // 16 byte integers
    //
    // ISSUE is there a better way to represent a 16 byte int???
    //
    SDP_LARGE_INTEGER_16 int128;
    SDP_ULARGE_INTEGER_16 uint128;

    // UUID
    GUID uuid128;
    ULONG uuid32;
    USHORT uuid16;

    // 8 byte integers
    LONGLONG int64;
    ULONGLONG uint64;

    // 4 byte integers
    LONG int32;
    ULONG uint32;

    // 2 byte integers
    SHORT int16;
    USHORT uint16;

    // 1 bytes integers
    CHAR int8;
    UCHAR uint8;

    // Boolean
    SDP_BOOLEAN boolean;

    // string
    PCHAR string;

    // URL
    PCHAR url;

    // Sequence
	SDP_NODE_HEADER sequence;

    // Alt list
    SDP_NODE_HEADER alternative;

    ISdpNodeContainer *container;

    struct {
        PUCHAR stream;
        ULONG streamLength;
    };

} SDP_NODE_DATA, *PSDP_NODE_DATA;

typedef struct _SDP_NODE {
	SDP_NODE_HEADER  hdr;

    ULONG DataSize;

	SDP_NODE_DATA u;

	PVOID Reserved;
} SDP_NODE, *PSDP_NODE;

typedef struct _SDP_TREE_ROOT_NODE {
    SDP_NODE RootNode;
} SDP_TREE_ROOT_NODE, *PSDP_TREE_ROOT_NODE;





#ifdef __cplusplus
}

#endif 

#endif // (NTDDI_VERSION >= NTDDI_VISTA)

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4201)
#endif

#endif // __SDPNODE_H__

