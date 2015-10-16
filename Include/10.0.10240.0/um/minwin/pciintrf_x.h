//
//    Copyright (C) Microsoft.  All rights reserved.
//
/*++

Module Name:

    pciintrf_x.w

Abstract:

    Contains interface GUIDs and structures that interface
    directly with the PCI driver via the PNP QUERY_INTERFACE
    mechanism.

Author:

    Davis Walker (dwalker) 19 September 2003

Revision History:

--*/

#pragma once

// begin_ntddk begin_ntosp

#ifndef _PCIINTRF_X_
#define _PCIINTRF_X_

//
// PCI Bus interface
//

typedef
_Function_class_(PCI_READ_WRITE_CONFIG)
_IRQL_requires_max_(HIGH_LEVEL)
ULONG 
PCI_READ_WRITE_CONFIG (
    _In_ PVOID Context,
    _In_ ULONG BusOffset,
    _In_ ULONG Slot,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );

typedef PCI_READ_WRITE_CONFIG *PPCI_READ_WRITE_CONFIG;

typedef
_Function_class_(PCI_PIN_TO_LINE)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID 
PCI_PIN_TO_LINE (
    _In_ PVOID Context,
    _In_ PPCI_COMMON_CONFIG PciData
    );

typedef PCI_PIN_TO_LINE *PPCI_PIN_TO_LINE;

typedef
_Function_class_(PCI_LINE_TO_PIN)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
PCI_LINE_TO_PIN (
    _In_ PVOID Context,
    _In_ PPCI_COMMON_CONFIG PciNewData,
    _In_ PPCI_COMMON_CONFIG PciOldData
    );

typedef PCI_LINE_TO_PIN *PPCI_LINE_TO_PIN;

typedef
_Function_class_(PCI_ROOT_BUS_CAPABILITY)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
PCI_ROOT_BUS_CAPABILITY (
    _In_ PVOID Context,
    _Out_ PPCI_ROOT_BUS_HARDWARE_CAPABILITY HardwareCapability
    );

typedef PCI_ROOT_BUS_CAPABILITY *PPCI_ROOT_BUS_CAPABILITY;

typedef
_Function_class_(PCI_EXPRESS_WAKE_CONTROL)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
PCI_EXPRESS_WAKE_CONTROL (
    _In_ PVOID Context,
    _In_ BOOLEAN EnableWake
    );

typedef PCI_EXPRESS_WAKE_CONTROL *PPCI_EXPRESS_WAKE_CONTROL;

typedef
_Function_class_(PCI_PREPARE_MULTISTAGE_RESUME)
_IRQL_requires_max_(HIGH_LEVEL)
VOID
PCI_PREPARE_MULTISTAGE_RESUME (
    _In_ PVOID Context
    );

typedef PCI_PREPARE_MULTISTAGE_RESUME *PPCI_PREPARE_MULTISTAGE_RESUME;


typedef struct _PCI_BUS_INTERFACE_STANDARD {
    //
    // generic interface header
    //
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    //
    // standard PCI bus interfaces
    //
    PPCI_READ_WRITE_CONFIG ReadConfig;
    PPCI_READ_WRITE_CONFIG WriteConfig;
    PPCI_PIN_TO_LINE PinToLine;
    PPCI_LINE_TO_PIN LineToPin;
    PPCI_ROOT_BUS_CAPABILITY RootBusCapability;
    PPCI_EXPRESS_WAKE_CONTROL ExpressWakeControl;
    PPCI_PREPARE_MULTISTAGE_RESUME PrepareMultistageResume;

} PCI_BUS_INTERFACE_STANDARD, *PPCI_BUS_INTERFACE_STANDARD;

#define PCI_BUS_INTERFACE_STANDARD_VERSION 2
#define PCI_BUS_INTERFACE_STANDARD_VERSION_1_LENGTH \
    FIELD_OFFSET(PCI_BUS_INTERFACE_STANDARD, PrepareMultistageResume)

// end_ntddk
// begin_wdm

//
// Device Presence interface
//
#define PCI_DEVICE_PRESENT_INTERFACE_VERSION 1

//
// Flags for PCI_DEVICE_PRESENCE_PARAMETERS
//
#define PCI_USE_SUBSYSTEM_IDS   0x00000001
#define PCI_USE_REVISION        0x00000002
// The following flags are only valid for IsDevicePresentEx
#define PCI_USE_VENDEV_IDS      0x00000004
#define PCI_USE_CLASS_SUBCLASS  0x00000008
#define PCI_USE_PROGIF          0x00000010
#define PCI_USE_LOCAL_BUS       0x00000020
#define PCI_USE_LOCAL_DEVICE    0x00000040

//
// Search parameters structure for IsDevicePresentEx
//
typedef struct _PCI_DEVICE_PRESENCE_PARAMETERS {

    ULONG Size;
    ULONG Flags;

    USHORT VendorID;
    USHORT DeviceID;
    UCHAR RevisionID;
    USHORT SubVendorID;
    USHORT SubSystemID;
    UCHAR BaseClass;
    UCHAR SubClass;
    UCHAR ProgIf;

} PCI_DEVICE_PRESENCE_PARAMETERS, *PPCI_DEVICE_PRESENCE_PARAMETERS;

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
typedef
BOOLEAN
PCI_IS_DEVICE_PRESENT (
    _In_ USHORT VendorID,
    _In_ USHORT DeviceID,
    _In_ UCHAR RevisionID,
    _In_ USHORT SubVendorID,
    _In_ USHORT SubSystemID,
    _In_ ULONG Flags
);

typedef PCI_IS_DEVICE_PRESENT *PPCI_IS_DEVICE_PRESENT;

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
typedef
BOOLEAN
PCI_IS_DEVICE_PRESENT_EX (
    _In_ PVOID Context,
    _In_ PPCI_DEVICE_PRESENCE_PARAMETERS Parameters
    );

typedef PCI_IS_DEVICE_PRESENT_EX *PPCI_IS_DEVICE_PRESENT_EX;

typedef struct _PCI_DEVICE_PRESENT_INTERFACE {
    //
    // generic interface header
    //
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    //
    // pci device info
    //
    PPCI_IS_DEVICE_PRESENT IsDevicePresent;

    PPCI_IS_DEVICE_PRESENT_EX IsDevicePresentEx;

} PCI_DEVICE_PRESENT_INTERFACE, *PPCI_DEVICE_PRESENT_INTERFACE;

//
// Pci Express Link Quiesce Interface
//

#define PCI_EXPRESS_LINK_QUIESCENT_INTERFACE_VERSION      1

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
typedef
NTSTATUS
PCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE (
    _Inout_ PVOID Context
    );

typedef PCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE *PPCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE;

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
typedef
NTSTATUS
PCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE (
    _Inout_ PVOID Context
    );

typedef PCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE *PPCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE;

typedef struct _PCI_EXPRESS_LINK_QUIESCENT_INTERFACE {

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PPCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE PciExpressEnterLinkQuiescentMode;
    PPCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE PciExpressExitLinkQuiescentMode;

} PCI_EXPRESS_LINK_QUIESCENT_INTERFACE, *PPCI_EXPRESS_LINK_QUIESCENT_INTERFACE;

//
// Pci Express Root Port Access Interface
//

#define PCI_EXPRESS_ROOT_PORT_INTERFACE_VERSION        1

typedef
ULONG
(*PPCI_EXPRESS_ROOT_PORT_READ_CONFIG_SPACE) (
    _In_ PVOID Context,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );

typedef
ULONG
(*PPCI_EXPRESS_ROOT_PORT_WRITE_CONFIG_SPACE) (
    _In_ PVOID Context,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );

typedef struct _PCI_EXPRESS_ROOT_PORT_INTERFACE {

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PPCI_EXPRESS_ROOT_PORT_READ_CONFIG_SPACE ReadConfigSpace;
    PPCI_EXPRESS_ROOT_PORT_WRITE_CONFIG_SPACE WriteConfigSpace;

} PCI_EXPRESS_ROOT_PORT_INTERFACE, *PPCI_EXPRESS_ROOT_PORT_INTERFACE;

//
// MSI-X interrupt table configuration interface
//

#define PCI_MSIX_TABLE_CONFIG_INTERFACE_VERSION 1

_Must_inspect_result_
typedef
NTSTATUS
PCI_MSIX_SET_ENTRY (
    _In_ PVOID Context,
    _In_ ULONG TableEntry,
    _In_ ULONG MessageNumber
    );

typedef PCI_MSIX_SET_ENTRY *PPCI_MSIX_SET_ENTRY;

_Must_inspect_result_
typedef
NTSTATUS
PCI_MSIX_MASKUNMASK_ENTRY (
    _In_ PVOID Context,
    _In_ ULONG TableEntry
    );

typedef PCI_MSIX_MASKUNMASK_ENTRY *PPCI_MSIX_MASKUNMASK_ENTRY;

_Must_inspect_result_
typedef
NTSTATUS
PCI_MSIX_GET_ENTRY (
    _In_ PVOID Context,
    _In_ ULONG TableEntry,
    _Out_ PULONG MessageNumber,
    _Out_ PBOOLEAN Masked
    );

typedef PCI_MSIX_GET_ENTRY *PPCI_MSIX_GET_ENTRY;

_Must_inspect_result_
typedef
NTSTATUS
PCI_MSIX_GET_TABLE_SIZE (
    _In_ PVOID Context,
    _Out_ PULONG TableSize
    );

typedef PCI_MSIX_GET_TABLE_SIZE *PPCI_MSIX_GET_TABLE_SIZE;

typedef struct _PCI_MSIX_TABLE_CONFIG_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PPCI_MSIX_SET_ENTRY SetTableEntry;
    PPCI_MSIX_MASKUNMASK_ENTRY MaskTableEntry;
    PPCI_MSIX_MASKUNMASK_ENTRY UnmaskTableEntry;
    PPCI_MSIX_GET_ENTRY GetTableEntry;
    PPCI_MSIX_GET_TABLE_SIZE GetTableSize;
} PCI_MSIX_TABLE_CONFIG_INTERFACE, *PPCI_MSIX_TABLE_CONFIG_INTERFACE;

#define PCI_MSIX_TABLE_CONFIG_MINIMUM_SIZE \
        RTL_SIZEOF_THROUGH_FIELD(PCI_MSIX_TABLE_CONFIG_INTERFACE, UnmaskTableEntry)

// end_wdm
// begin_ntddk

#endif

// end_ntddk end_ntosp
