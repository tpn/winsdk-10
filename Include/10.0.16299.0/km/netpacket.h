/*++

Copyright (C) Microsoft Corporation. All rights reserved.

Module Name:

    NetPacket.h

Abstract:

    This module defines the NET_PACKET type.

Notes:

    Do not include this header directly. This is to be used together with NetAdapterCx 1.0.
    
    NetAdapterCx 1.0 is preview only, any files related to it may be substantially modified
    or removed in future releases of Windows.

 --*/

#pragma once

#if (defined(NET_ADAPTER_CX_1_0) || defined(NET_ADAPTER_CX_1_1))
#    if (NET_ADAPTER_CX_1_0 != 1 && NET_ADAPTER_CX_1_1 != 1)
#        error NetPacket.h can be used only with NetAdapterCx 1.0 or 1.1
#    endif
#else
#    error Include NetAdapterCx.h
#endif // (defined(NET_ADAPTER_CX_1_0) || defined(NET_ADAPTER_CX_1_1))

#pragma warning(push)
#pragma warning(default : 4820) // Warn if the compiler inserted padding

#if _WIN64
#  define NET_PACKET_FRAGMENT_ALIGNMENT_BYTES 32
#  define NET_PACKET_FRAGMENT_ALIGNMENT_SHIFT 5
#else
#  define NET_PACKET_FRAGMENT_ALIGNMENT_BYTES 8
#  define NET_PACKET_FRAGMENT_ALIGNMENT_SHIFT 3
#endif

C_ASSERT(NET_PACKET_FRAGMENT_ALIGNMENT_BYTES == (1 << NET_PACKET_FRAGMENT_ALIGNMENT_SHIFT));

#define NET_PACKET_FRAGMENT_ALIGNMENT_MASK (NET_PACKET_FRAGMENT_ALIGNMENT_BYTES - 1)

#define NET_PACKET_FRAGMENT_ASSERT_ALIGNED(fragment) \
    NT_ASSERTMSG("Packet fragment descriptor must be aligned", \
    !(ULONG_PTR(fragment) & NET_PACKET_FRAGMENT_ALIGNMENT_MASK))

#define NET_PACKET_FRAGMENT_GET_NEXT(fragment) \
    ((NET_PACKET_FRAGMENT*)((ULONG_PTR)((fragment)->NextFragment_Reserved) << NET_PACKET_FRAGMENT_ALIGNMENT_SHIFT))

#define NET_PACKET_FRAGMENT_SET_NEXT(fragment, next)            \
    (NET_PACKET_FRAGMENT_ASSERT_ALIGNED(next),                  \
    ((fragment)->NextFragment_Reserved = (ULONG_PTR)(next) >> NET_PACKET_FRAGMENT_ALIGNMENT_SHIFT),  \
    next)

typedef LARGE_INTEGER PHYSICAL_ADDRESS;

#include <pshpack4.h>
typedef struct DECLSPEC_ALIGN(NET_PACKET_FRAGMENT_ALIGNMENT_BYTES) _NET_PACKET_FRAGMENT
{
    ULONG_PTR LastFragmentOfFrame   : 1;
    ULONG_PTR LastPacketOfChain     : 1;

#if _WIN64
    ULONG_PTR Reserved              : 3;
    ULONG_PTR NextFragment_Reserved : 59;
#else
    ULONG_PTR Reserved              : 1;
    ULONG_PTR NextFragment_Reserved : 29;
#endif

    union
    {
        MDL *Mdl;
        PHYSICAL_ADDRESS DmaLogicalAddress;
        ULONG64 AsInteger;
    } Mapping;

    PVOID VirtualAddress;

    UINT64 ValidLength             : 26;
    UINT64 Capacity                : 26;
    UINT64 Offset                  : 10;

    UINT64 Completed               : 1;
    UINT64 Scratch                 : 1;

} NET_PACKET_FRAGMENT;
#include <poppack.h>

#ifdef _WIN64
C_ASSERT(sizeof(NET_PACKET_FRAGMENT) == 32);
#else
C_ASSERT(sizeof(NET_PACKET_FRAGMENT) == 24);
#endif

typedef enum _NET_PACKET_LAYER2_TYPE
{
    NET_PACKET_LAYER2_TYPE_UNSPECIFIED                  = 0,
    NET_PACKET_LAYER2_TYPE_NULL                         = 1,
    NET_PACKET_LAYER2_TYPE_ETHERNET                     = 2,
} NET_PACKET_LAYER2_TYPE;

typedef enum _NET_PACKET_LAYER3_TYPE
{
    NET_PACKET_LAYER3_TYPE_UNSPECIFIED                  = 0,
    NET_PACKET_LAYER3_TYPE_IPV4_UNSPECIFIED_OPTIONS     = 1,
    NET_PACKET_LAYER3_TYPE_IPV4_WITH_OPTIONS            = 2,
    NET_PACKET_LAYER3_TYPE_IPV4_NO_OPTIONS              = 3,
    NET_PACKET_LAYER3_TYPE_IPV6_UNSPECIFIED_EXTENSIONS  = 4,
    NET_PACKET_LAYER3_TYPE_IPV6_WITH_EXTENSIONS         = 5,
    NET_PACKET_LAYER3_TYPE_IPV6_NO_EXTENSIONS           = 6,
} NET_PACKET_LAYER3_TYPE;

typedef enum _NET_PACKET_LAYER4_TYPE
{
    NET_PACKET_LAYER4_TYPE_UNSPECIFIED                  = 0,
    NET_PACKET_LAYER4_TYPE_TCP                          = 1,
    NET_PACKET_LAYER4_TYPE_UDP                          = 2,
    NET_PACKET_LAYER4_TYPE_IP_NOT_FRAGMENTED            = 3,
    NET_PACKET_LAYER4_TYPE_IP_FRAGMENT                  = 4,
} NET_PACKET_LAYER4_TYPE;

#include <pshpack1.h>
typedef struct _NET_PACKET_LAYOUT
{
    /// One of the NET_PACKET_LAYER2_TYPE values
    UINT8 Layer2Type : 4;

    /// One of the NET_PACKET_LAYER3_TYPE values
    UINT8 Layer3Type : 4;

    /// One of the NET_PACKET_LAYER4_TYPE values
    UINT8 Layer4Type : 4;
    UINT8 Reserved   : 4;

    UINT16 Layer2HeaderLength : 7;
    UINT16 Layer3HeaderLength : 9;
    UINT8  Layer4HeaderLength : 8;

} NET_PACKET_LAYOUT;
#include <poppack.h>

C_ASSERT(sizeof(NET_PACKET_LAYOUT) == 5);


typedef enum _NET_PACKET_TX_CHECKSUM_ACTION
{
    NET_PACKET_TX_CHECKSUM_PASSTHROUGH                  = 0,
    NET_PACKET_TX_CHECKSUM_REQUIRED                     = 2,
} NET_PACKET_TX_CHECKSUM_ACTION;

typedef enum _NET_PACKET_RX_CHECKSUM_EVALUATION
{
    NET_PACKET_RX_CHECKSUM_NOT_CHECKED                  = 0,
    NET_PACKET_RX_CHECKSUM_VALID                        = 1,
    NET_PACKET_RX_CHECKSUM_INVALID                      = 2,
} NET_PACKET_RX_CHECKSUM_EVALUATION;

typedef struct _NET_PACKET_CHECKSUM
{
    // One of NET_PACKET_TX_CHECKSUM_ACTION or NET_PACKET_RX_CHECKSUM_EVALUATION
    UINT8 Layer2 : 2;

    // One of NET_PACKET_TX_CHECKSUM_ACTION or NET_PACKET_RX_CHECKSUM_EVALUATION
    UINT8 Layer3 : 2;

    // One of NET_PACKET_TX_CHECKSUM_ACTION or NET_PACKET_RX_CHECKSUM_EVALUATION
    UINT8 Layer4 : 2;

    UINT8 Reserved : 2;

} NET_PACKET_CHECKSUM;

C_ASSERT(sizeof(NET_PACKET_CHECKSUM) == 1);


#if _WIN64
#  define NET_PACKET_ALIGNMENT_BYTES 64
#else
#  define NET_PACKET_ALIGNMENT_BYTES 16
#endif

typedef struct DECLSPEC_ALIGN(NET_PACKET_ALIGNMENT_BYTES) _NET_PACKET
{
    NET_PACKET_FRAGMENT Data;

    NET_PACKET_LAYOUT Layout;
    NET_PACKET_CHECKSUM Checksum;

    UINT16 IgnoreThisPacket         :  1;
    UINT16 AdvancedOffloadRequested :  1;
    UINT16 Reserved1                : 14;

    UINT32 Hash;

    UINT32 Reserved2;
    PVOID  Reserved3[2];

} NET_PACKET, *PNET_PACKET;

#if _WIN64
C_ASSERT(sizeof(NET_PACKET) == 64);
#else
C_ASSERT(sizeof(NET_PACKET) == 48);
#endif

typedef struct _NET_PACKET_8021Q_HEADER
{
    UINT16 UserPriority : 3;
    UINT16 CanonicalFormatId : 1;
    UINT16 VlanId : 12;
} NET_PACKET_8021Q_HEADER;

C_ASSERT(sizeof(NET_PACKET_8021Q_HEADER) == 2);

#include <pshpack2.h>
typedef struct _NET_PACKET_OFFLOAD_RSC
{
    UINT16 CoalescedSegmentCount;
    UINT32 TimestampDelta;
} NET_PACKET_OFFLOAD_RSC;
#include <poppack.h>

C_ASSERT(sizeof(NET_PACKET_OFFLOAD_RSC) == 6);

typedef enum _NET_PACKET_ENCAPSULATION_TYPE
{
    NET_PACKET_ENCAPSULATION_TYPE_UNSPECIFIED           = 0,
    NET_PACKET_ENCAPSULATION_TYPE_IP_IN_IP              = 1, // RFC2003, RFC2473, RFC4213, etc
    NET_PACKET_ENCAPSULATION_TYPE_IP_IN_GRE             = 2,
    NET_PACKET_ENCAPSULATION_TYPE_NVGRE                 = 3, // RFC7637
    NET_PACKET_ENCAPSULATION_TYPE_VXLAN                 = 4,
} NET_PACKET_ENCAPSULATION_TYPE;

typedef struct _NET_PACKET_ADVANCED_OFFLOAD
{
    UINT16 InsertVlanHeader          :  1;
    UINT16 InsertNestedVlanHeader    :  1;
    UINT16 InsertEncapsulationHeader :  4;

    UINT16 Reserved1                 : 10;

    // One of NET_PACKET_ENCAPSULATION_TYPE
    NET_PACKET_LAYOUT EncapsulatedLayout;

    // One of NET_PACKET_ENCAPSULATION_TYPE
    NET_PACKET_CHECKSUM EncapsulatedChecksum;

    NET_PACKET_8021Q_HEADER VlanHeader;
    NET_PACKET_8021Q_HEADER NestedVlanHeader;

    UINT32 TcpMss : 20;  // TX: LSO
    UINT32 Reserved2 : 12;

    UINT32 VirtualSubnetId : 24; // NVGRE, VXLAN
    UINT32 Reserved3 : 8;

} NET_PACKET_ADVANCED_OFFLOAD;

C_ASSERT(sizeof(NET_PACKET_ADVANCED_OFFLOAD) == 20);

#pragma warning(pop)
