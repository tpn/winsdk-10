/*++

Copyright (c) 2008 Microsoft Corporation. All Rights Reserved.

Module Name:

    vpci.w

Abstract:

    This file implements the published interface for the virtual PCI driver

--*/

#pragma once

#if (NTDDI_VERSION >= NTDDI_WIN6)

#define FILE_DEVICE_VPCI FILE_DEVICE_BUS_EXTENDER

// {C066F39A-DE00-4667-8941-3368ED5D83B5}
DEFINE_GUID(GUID_BUS_VPCI,
0xc066f39a, 0xde00, 0x4667, 0x89, 0x41, 0x33, 0x68, 0xed, 0x5d, 0x83, 0xb5);

// {12E65E71-B651-4067-831A-1383203CB0CB}
DEFINE_GUID(GUID_VPCI_INTERFACE_STANDARD,
0x12e65e71, 0xb651, 0x4067, 0x83, 0x1a, 0x13, 0x83, 0x20, 0x3c, 0xb0, 0xcb);

// {57863182-C948-4692-97E3-34B57662A3E0}
DEFINE_GUID(GUID_DEVINTERFACE_VPCI,
0x57863182, 0xc948, 0x4692, 0x97, 0xe3, 0x34, 0xb5, 0x76, 0x62, 0xa3, 0xe0);


typedef
_Function_class_(VPCI_WRITE_BLOCK)
_IRQL_requires_same_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
VPCI_WRITE_BLOCK (
    _In_ PVOID Context,
    _In_ ULONG BlockId,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );

typedef VPCI_WRITE_BLOCK *PVPCI_WRITE_BLOCK;

typedef
_Function_class_(VPCI_READ_BLOCK)
_IRQL_requires_same_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
VPCI_READ_BLOCK (
    _In_ PVOID Context,
    _In_ ULONG BlockId,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );

typedef VPCI_READ_BLOCK *PVPCI_READ_BLOCK;

typedef struct _VPCI_INTERFACE_STANDARD
{
    //
    // generic interface header
    //
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    //
    // VPCI bus interfaces
    //
    PVPCI_WRITE_BLOCK WriteVfConfigBlock;
    PVPCI_READ_BLOCK  ReadVfConfigBlock;

    UINT32 SerialNumber;
}  VPCI_INTERFACE_STANDARD, *PVPCI_INTERFACE_STANDARD;


#define IOCTL_VPCI_INVALIDATE_BLOCK CTL_CODE(FILE_DEVICE_VPCI,  0x1, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_VPCI_READ_BLOCK CTL_CODE(FILE_DEVICE_VPCI, 0x2, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_VPCI_WRITE_BLOCK CTL_CODE(FILE_DEVICE_VPCI, 0x3, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


typedef struct _VPCI_READ_BLOCK_INPUT
{
    ULONG      BlockId;
    ULONG      BytesRequested;
} VPCI_READ_BLOCK_INPUT, *PVPCI_READ_BLOCK_INPUT;

typedef struct _VPCI_WRITE_BLOCK_INPUT
{
    ULONG      BlockId;
    ULONG      DataLength;
    UCHAR      Data[ANYSIZE_ARRAY];
} VPCI_WRITE_BLOCK_INPUT, *PVPCI_WRITE_BLOCK_INPUT;

typedef struct _VPCI_INVALIDATE_BLOCK_OUTPUT
{
    UINT64     BlockMask;
} VPCI_INVALIDATE_BLOCK_OUTPUT, *PVPCI_INVALIDATE_BLOCK_OUTPUT;

#endif // NTDDI_WIN6
