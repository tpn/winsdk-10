/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

   kdnic.h

Abstract:

    This module declares the structures shared between kdnet.dll and kdnic.sys.

--*/

#ifndef _KDNIC_H
#define _KDNIC_H

#define KD_NET_NIC_VERSION 3

#define KD_10_MBIT 10
#define KD_100_MBIT 100
#define KD_1_GBIT 1000
#define KD_10_GBIT 10000

//
// The KDNET_NIC stucture enables KDNET to support sending and receiving packets
// through its hardware on behalf of the NDIS kdnic.sys miniport driver.  The 
// physical address of this structure is published in the registry on successful
// initialization, and is used for communication between KDNET and KDNIC.  Note
// that kdnet only supports one instance of kdnic using this interface.
// Kdnic.sys enables Windows networking to function even when kdnet.dll owns the
// only physical NIC available in a machine.
//

typedef struct _KDNET_NIC {
    USHORT Version;
    USHORT Size;
    volatile LONG ReferenceCount;
    NTSTATUS HardwareStatus;
    ULONG ConnectionSpeed;
    SLIST_HEADER TxSlist;
    SLIST_HEADER TxSentSlist;
    SLIST_HEADER RxSlist;
    SLIST_HEADER RxReceivedSlist;
    UCHAR MacAddress[6];
    UCHAR PhysicalMediaState;
    UCHAR Reserved2;
    ULONG MaxConnectionSpeed;
} KDNET_NIC, *PKDNET_NIC;

#if defined(_KDNIC_MINIPORT_)
__declspec(dllexport)
#else
__declspec(dllimport)
#endif
NTSTATUS
CreateNetworkAdapter (
    PKDNET_NIC Net
);

#if defined(_KDNIC_)

#define HW_FRAME_HEADER_SIZE               14
#define HW_FRAME_MAX_DATA_SIZE             1500
#define HW_MAX_FRAME_SIZE                  (HW_FRAME_HEADER_SIZE + HW_FRAME_MAX_DATA_SIZE)
#define HW_MIN_FRAME_SIZE                  60
#define NIC_BUFFER_SIZE                    HW_MAX_FRAME_SIZE

//
// A FRAME represents the physical bits as they are being transmitted on the
// wire.  Normally, a miniport wouldn't need to implement any such tracking,
// but we have to simulate our own Ethernet hub.
//

typedef struct _FRAME
{
    volatile LONG           Ref;
    PMDL                    Mdl;
    ULONG                   ulSize;
    UCHAR                   Data[NIC_BUFFER_SIZE];
} FRAME, *PFRAME;

//
// TCB (Transmit Control Block)
//

typedef struct _TCB {
    SLIST_ENTRY TcbSListEntry;
    LIST_ENTRY TcbListEntry;
    PNET_BUFFER NetBuffer;
    ULONG FrameType;
    ULONG BytesActuallySent;
} TCB, *PTCB;

//
// RCB (Receive Control Block)
//

typedef struct _RCB
{
    SLIST_ENTRY RcbSListEntry;
    LIST_ENTRY RcbListEntry;
    PNET_BUFFER_LIST Nbl;
    PFRAME Frame;
} RCB, *PRCB;

#endif
#endif // _KDNIC_H

