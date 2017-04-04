/*++

Copyright (c) Microsoft Corporation

Module Name:

    HvSocket.h

Abstract:

    This file contains the core definitions for the Hyper-V
    socket address family that can be used by both user-mode and
    kernel mode modules.

    Reference AF_HYPERV in ws2def.h

--*/

#ifdef _MSC_VER
#pragma once
#endif //_MSC_VER

#include <initguid.h>
#include <ws2def.h>

//
// Hyper-v Socket options.
//

//
// Following options are available for Socket option level
// HV_PROTOCOL_RAW:
//

//
// HVSOCKET_CONNECT_TIMEOUT:
// Input:
// Type: ULONG.
// Description:
// The timeout in milliseconds.
//
#define HVSOCKET_CONNECT_TIMEOUT        0x01

//
// The maximum connect timeout is 5 minutes.
//
#define HVSOCKET_CONNECT_TIMEOUT_MAX   300000

//
// HVSOCKET_CONTAINER_PASSTHRU:
// Input:
// Type: ULONG.
// Description:
// Set container passthru flag, non-zero value indicates pass thru.
//
#define HVSOCKET_CONTAINER_PASSTHRU     0x02


//
// Well-known GUIDs.
//
DEFINE_GUID(HV_GUID_ZERO,  0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
DEFINE_GUID(HV_GUID_BROADCAST, 0xFFFFFFFF, 0xFFFF, 0xFFFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF);

//
// HV_GUID_WILDCARD:
//
// Wildcard address. Listeners should bind to this VmId to accept
// connection from all partitions.
//
// 00000000-0000-0000-0000-000000000000
//
#define HV_GUID_WILDCARD HV_GUID_ZERO

//
// HV_GUID_CHILDREN:
//
// Wildcard address for children. Listeners should bind to this VmId
// to accept connection from its children.
//
// 90db8b89-0d35-4f79-8ce9-49ea0ac8b7cd
//

DEFINE_GUID(HV_GUID_CHILDREN, 0x90db8b89, 0x0d35, 0x4f79, 0x8c, 0xe9, 0x49, 0xea, 0x0a, 0xc8, 0xb7, 0xcd);

//
// HV_GUID_LOOPBACK:
//
// Loopback address. Using this VmId connects to the same partition as the connector.
//
// e0e16197-dd56-4a10-9195-5ee7a155a838
//
DEFINE_GUID(HV_GUID_LOOPBACK, 0xe0e16197, 0xdd56, 0x4a10, 0x91, 0x95, 0x5e, 0xe7, 0xa1, 0x55, 0xa8, 0x38);

//
// HV_GUID_PARENT:
//
// Parent address. Using this VmId connects to the parent partition of the connector.
// The parent of a virtual machine is its host.
// The parent of a container is the container's host.
// Connecting from a container running in a virtual machine will connect to the VM
// hosting the container.
//
// Listening on this VmId accepts connection from:
// (Inside containers): Container host.
// (Inside VM: Container host/ no container): VM host.
// (Not inside VM: Container host/ no container): Not supported.
//
// a42e7cda-d03f-480c-9cc2-a4de20abb878
//
DEFINE_GUID(HV_GUID_PARENT, 0xa42e7cda, 0xd03f, 0x480c, 0x9c, 0xc2, 0xa4, 0xde, 0x20, 0xab, 0xb8, 0x78);

#define HV_PROTOCOL_RAW 1

typedef struct _SOCKADDR_HV
{
     ADDRESS_FAMILY Family;
     USHORT Reserved;
     GUID VmId;
     GUID ServiceId;
}SOCKADDR_HV, *PSOCKADDR_HV;

