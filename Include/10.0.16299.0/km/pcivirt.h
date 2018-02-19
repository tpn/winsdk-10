/*++

Copyright (c) 2008 Microsoft Corporation. All Rights Reserved.

Module Name:

    pcivirt.w

Abstract:

    This file defines the interfaces used for PCI virtualization.  The IOCTLs
    are "internal" in that they can't be sent from user mode and they use
    IRP_MJ_INTERNAL_DEVICE_CONTROL.

    This interface is published as-is and is not guaranteed to be supported by the
    windows virtualization subsystem.

    If this statement of support ever changes, this notice will be updated.
    7/29/2016

--*/

#ifndef _PCIVIRT_H_
#define _PCIVIRT_H_

typedef struct _VPCI_PNP_ID
{
    //
    // These make up the PnP identifiers for a virtual PCI device.
    //

    USHORT  VendorID;
    USHORT  DeviceID;
    UCHAR   RevisionID;
    UCHAR   ProgIf;
    UCHAR   SubClass;
    UCHAR   BaseClass;
    USHORT  SubVendorID;
    USHORT  SubSystemID;

} VPCI_PNP_ID, *PVPCI_PNP_ID;


// {A13A7A93-11F0-4bd2-A9F5-6B5C5B88527D}
DEFINE_GUID(GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
0xa13a7a93, 0x11f0, 0x4bd2, 0xa9, 0xf5, 0x6b, 0x5c, 0x5b, 0x88, 0x52, 0x7d);

//
// IOCTLs defined for drivers which support an SR-IOV PCIM interface
// (GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE)
//
#define SRIOV_IOCTL(_index_, _method_)                                      \
    CTL_CODE (FILE_DEVICE_UNKNOWN, (_index_ + 0x810), METHOD_BUFFERED, FILE_READ_DATA)

typedef enum _SRIOV_PF_EVENT
{
    SriovEventPfQueryStopDevice,
    SriovEventPfRestart,
    SriovEventPfMaximum
} SRIOV_PF_EVENT, *PSRIOV_PF_EVENT;

//
// IOCTL_SRIOV_NOTIFICATION is sent by the Virtual PCI Virtualization Service
// Provider (VSP) in the partition with the SR-IOV Physical Function (PF).  It
// is held in a queue by the PF driver until it is either cancelled by the VPCI
// VSP or the SR-IOV device experiences one of the events listed in
// SRIOV_PF_EVENT, at which time the PF driver completes this IOCTL. The return output
// buffer for this IOCTL is simply a single SRIOV_PF_EVENT (effectively a single DWORD).
//
// If the device is currently processing a plug and play event for which it has not 
// yet completed a notification the device should complete the IOCTL immediately with the 
// event details.  Otherwise the device should queue the IRP until either it is cancelled
//  or until a plug and play event that requires notification occurs.
//
// Note that the virtualization stack may send this IOCTL immediately after it completes, 
// before sending IOCTL_SRIOV_EVENT_COMPLETE.   The driver must keep track of the fact 
// that an event notification has been delivered and must not complete two IOCTLs for the same event twice.
//

#define IOCTL_SRIOV_NOTIFICATION SRIOV_IOCTL(1, METHOD_OUT_DIRECT)

//
// IOCTL_SRIOV_EVENT_COMPLETE is sent by the VPCI VSP when the event described
// by IOCTL_SRIOV_NOTIFICATION can be completed.  This IOCTL can be completed
// synchronously.  SRIOV_PNP_EVENT_COMPLETE is the input buffer for this IOCTL,
// and it indicates the status to use for completion of the event.
//

typedef struct _SRIOV_PNP_EVENT_COMPLETE
{
    NTSTATUS    QueryStatus;

} SRIOV_PNP_EVENT_COMPLETE, *PSRIOV_PNP_EVENT_COMPLETE;

#define IOCTL_SRIOV_EVENT_COMPLETE SRIOV_IOCTL(2, METHOD_IN_DIRECT)

//
// IOCTL_SRIOV_ATTACH notifies the PF that the VSP is interested in
// plug & play notifications.  The VSP will send
// IOCTL_SRIOV_NOTIFICATION and IOCTL_SRIOV_EVENT_COMPLETE from now
// on.  If the PF is stopped for a re-balance operation, it will delay
// completion of the request until the rebalance is complete.
//
// If the device is currently stopped or stopping for resource rebalance the
//  driver must delay completing the IOCTL until it is restarted.    A device is
//  considered to be stopping once it received  IRP_MN_QUERY_STOP_DEVICE and is 
// restarted when it receives  IRP_MN_CANCEL_STOP_DEVICE or when  IRP_MN_START_DEVICE 
// is completed by the lower devices of the stack.

#define IOCTL_SRIOV_ATTACH SRIOV_IOCTL(3, METHOD_IN_DIRECT)

//
// IOCTL_SRIOV_DETACH notifies the PF that the VSP is no longer
// interested in plug & play notifications and should no longer expect
// IOCTL_SRIOV_EVENT_COMPLETE and IOCTL_SRIOV_NOTIFICATION requests.
//
// A driver that receives this IOCTL should stop waiting for IOCTL_SRIOV_EVENT_COMPLETE.
// If the driver is currently waiting it should stop waiting and continue 
// processing plug and play IRPs in a normal way. 

#define IOCTL_SRIOV_DETACH SRIOV_IOCTL(4, METHOD_IN_DIRECT)

//
// IOCTL_SRIOV_INVALIDATE_BLOCK is sent to the PF by the virtualization stack.
// The PF driver completes it when it wants to indicate to the VF driver that
// one or more of the configuration blocks should be read again.
//

#define IOCTL_SRIOV_INVALIDATE_BLOCK SRIOV_IOCTL(5, METHOD_BUFFERED)

#define SRIOV_INVALIDATE_BLOCK_ALL_VFS  0xFFFF

typedef struct _SRIOV_INVALIDATE_BLOCK
{
    USHORT  VfIndex;
    UINT64  BlockMask;

} SRIOV_INVALIDATE_BLOCK, *PSRIOV_INVALIDATE_BLOCK;

//
// IOCTL_SRIOV_QUERY_MITIGATED_RANGE_COUNT is sent to the PF by the
// virtualization stack to find out how many ranges of memory-mapped I/O space
// must be "mitigated" where that means that the virtualization stack must place
// intercepts on those pages and send the requests to read and write values
// within those pages to the PF driver.
//

#define IOCTL_SRIOV_QUERY_MITIGATED_RANGE_COUNT SRIOV_IOCTL(6, METHOD_BUFFERED)

typedef struct _SRIOV_MITIGATED_RANGE_COUNT_INPUT
{
    USHORT VfIndex;

} SRIOV_MITIGATED_RANGE_COUNT_INPUT, *PSRIOV_MITIGATED_RANGE_COUNT_INPUT;

typedef struct _SRIOV_MITIGATED_RANGE_COUNT_OUTPUT
{
    ULONG  RangeCount[6]; // One for each potential BAR

} SRIOV_MITIGATED_RANGE_COUNT_OUTPUT, *PSRIOV_MITIGATED_RANGE_COUNT_OUTPUT;

//
// IOCTL_SRIOV_QUERY_MITIGATED_RANGES is sent by the PF by the virtualization
// stack to get the specific ranges on which intercepts must be placed.
//

#define IOCTL_SRIOV_QUERY_MITIGATED_RANGES SRIOV_IOCTL(7, METHOD_BUFFERED)

typedef struct _SRIOV_MITIGATED_RANGES_INPUT
{
    USHORT VfIndex;
    UCHAR  BarNumber;

} SRIOV_MITIGATED_RANGES_INPUT, *PSRIOV_MITIGATED_RANGES_INPUT;

typedef struct _SRIOV_MITIGATED_RANGES_OUTPUT
{
    ULONG64 BasePageNumber;
    ULONG   PageCount;
    BOOLEAN InterceptReads;
    BOOLEAN InterceptWrites;
} SRIOV_MITIGATED_RANGES_OUTPUT, *PSRIOV_MITIGATED_RANGES_OUTPUT;

//
// IOCTL_SRIOV_MITIGATED_RANGE_UPDATE is sent to the PF by the
// virtualization stack. It is held in a queue by the PF driver 
// until it is either cancelled by the VPCI VSP or the PF driver
// would like to request an update to the mitigation ranges for 
// a particular VF.  The VF to update is returned when the IOCTL 
// is completed.  The VPCI VPS will then reinitialize the mitigation
// maps by calling IOCTL_SRIOV_QUERY_MITIGATED_RANGE_COUNT and
// IOCTL_SRIOV_QUERY_MITIGATED_RANGES.  It may additionally  call any
// user mode device simulation for additional ranges to mitigate
// The IOCTL is called for each active virtual function.
//
#define IOCTL_SRIOV_MITIGATED_RANGE_UPDATE SRIOV_IOCTL(8, METHOD_BUFFERED)

typedef struct _SRIOV_MITIGATED_RANGE_UPDATE_INPUT
{
    USHORT VfIndex;
} SRIOV_MITIGATED_RANGE_UPDATE_INPUT, *PSRIOV_MITIGATED_RANGE_UPDATE_INPUT;

typedef struct _SRIOV_MITIGATED_RANGE_UPDATE_OUTPUT
{
    USHORT VfIndex;
} SRIOV_MITIGATED_RANGE_UPDATE_OUTPUT, *PSRIOV_MITIGATED_RANGE_UPDATE_OUTPUT;

//
// This IOCTL is used by the proxy driver in order to supply the local unique
// ID of the Physical Device implementing the interface.  This IOCTL must
// be the only IOCTL that is callable from User Mode.  This IOCTL is only
// required for SR-IOV devices doing direct assignment, and not network devices
// No input buffer is supplied.
//
#define IOCTL_SRIOV_PROXY_QUERY_LUID SRIOV_IOCTL(9, METHOD_BUFFERED)

typedef struct _SRIOV_PROXY_QUERY_LUID_OUTPUT
{
    LUID DeviceLuid;
} SRIOV_PROXY_QUERY_LUID_OUTPUT, *PSRIOV_PROXY_QUERY_LUID_OUTPUT;


// {937EE9B6-0ED3-411c-982B-1F564AFBABD3}
DEFINE_GUID(GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
0x937ee9b6, 0xed3, 0x411c, 0x98, 0x2b, 0x1f, 0x56, 0x4a, 0xfb, 0xab, 0xd3);

#define VPCI_MAX_READ_WRITE_BLOCK_SIZE       128

typedef
_Function_class_(SRIOV_READ_CONFIG)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_READ_CONFIG(
    _In_                        PVOID  Context,
    _Out_writes_bytes_(Length)  PVOID  Data,
    _In_                        USHORT VfIndex,
    _In_                        ULONG  Offset,
    _In_                        ULONG  Length
    );

typedef SRIOV_READ_CONFIG *PSRIOV_READ_CONFIG;

typedef
_Function_class_(SRIOV_WRITE_CONFIG)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_WRITE_CONFIG(
    _In_                        PVOID           Context,
    _In_reads_bytes_(Length)    const VOID*     Data,
    _In_                        USHORT          VfIndex,
    _In_                        ULONG           Offset,
    _In_                        ULONG           Length
    );

typedef SRIOV_WRITE_CONFIG *PSRIOV_WRITE_CONFIG;

typedef
_Function_class_(SRIOV_QUERY_PROBED_BARS)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_QUERY_PROBED_BARS(
    _In_                                PVOID  Context,
    _Out_writes_(PCI_TYPE0_ADDRESSES)   PULONG BaseRegisterValues
    );

typedef SRIOV_QUERY_PROBED_BARS *PSRIOV_QUERY_PROBED_BARS;

typedef
_Function_class_(SRIOV_QUERY_PROBED_BARS_2)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_QUERY_PROBED_BARS_2(
    _In_                        PVOID     Context,
    _In_                        USHORT    VfIndex,
    _Out_writes_(PCI_TYPE0_ADDRESSES)   PULONG BaseRegisterValues
    );

typedef SRIOV_QUERY_PROBED_BARS_2 *PSRIOV_QUERY_PROBED_BARS_2;


typedef
_Function_class_(SRIOV_WRITE_BLOCK)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_WRITE_BLOCK (
    _In_        PVOID  Context,
    _In_        USHORT VfIndex,
    _In_        ULONG  BlockId,
    _In_reads_bytes_(Length)
                PVOID  Buffer,
    _In_range_(<, VPCI_MAX_READ_WRITE_BLOCK_SIZE)
                ULONG  Length
    );

typedef SRIOV_WRITE_BLOCK *PSRIOV_WRITE_BLOCK;

typedef
_Function_class_(SRIOV_READ_BLOCK)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_READ_BLOCK (
    _In_        PVOID  Context,
    _In_        USHORT VfIndex,
    _In_        ULONG  BlockId,
    _Out_writes_bytes_(Length)
                PVOID  Buffer,
    _In_range_(<, VPCI_MAX_READ_WRITE_BLOCK_SIZE)
                ULONG  Length
    );

typedef SRIOV_READ_BLOCK *PSRIOV_READ_BLOCK;


typedef
_Function_class_(SRIOV_GET_DEVICE_LOCATION)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
SRIOV_GET_DEVICE_LOCATION (
    _In_        PVOID   Context,
    _In_        USHORT  VfIndex,
    _Out_       PUINT16 SegmentNumber,
    _Out_       PUINT8  BusNumber,
    _Out_       PUINT8  FunctionNumber
    );
typedef SRIOV_GET_DEVICE_LOCATION *PSRIOV_GET_DEVICE_LOCATION;

typedef
_Function_class_(SRIOV_GET_MMIO_REQUIREMENTS)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_GET_MMIO_REQUIREMENTS (
    _In_                        PVOID  Context,
    _In_                        USHORT VfIndex,
    _In_                        ULONG  BlockId,
    _Out_writes_bytes_(Length)  PVOID  Buffer,
    _In_                        ULONG  Length
    );

typedef SRIOV_GET_MMIO_REQUIREMENTS *PSRIOV_GET_MMIO_REQUIREMENTS;

typedef
_Function_class_(SRIOV_RESET_FUNCTION)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_RESET_FUNCTION (
    _In_ PVOID  Context,
    _In_ USHORT VfIndex
    );

typedef SRIOV_RESET_FUNCTION *PSRIOV_RESET_FUNCTION;

typedef
_Function_class_(SRIOV_SET_POWER_STATE)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_SET_POWER_STATE (
    _In_ PVOID              Context,
    _In_ USHORT             VfIndex,
    _In_ DEVICE_POWER_STATE PowerState,
    _In_ BOOLEAN            Wake
    );

typedef SRIOV_SET_POWER_STATE *PSRIOV_SET_POWER_STATE;

typedef
_Function_class_(SRIOV_GET_VENDOR_AND_DEVICE_IDS)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
SRIOV_GET_VENDOR_AND_DEVICE_IDS (
    _In_        PVOID           Context,
    _In_        USHORT          VfIndex,
    _Out_       PUSHORT         VendorId,
    _Out_       PUSHORT         DeviceId
    );

typedef SRIOV_GET_VENDOR_AND_DEVICE_IDS *PSRIOV_GET_VENDOR_AND_DEVICE_IDS;


typedef
_Function_class_(SRIOV_GET_RESOURCE_FOR_BAR)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_GET_RESOURCE_FOR_BAR (
    _In_        PVOID             Context,
    _In_        USHORT            VfIndex,
    _In_        USHORT            BarIndex,
    _Out_       PCM_PARTIAL_RESOURCE_DESCRIPTOR Resource
    );

typedef SRIOV_GET_RESOURCE_FOR_BAR *PSRIOV_GET_RESOURCE_FOR_BAR;

typedef
_Function_class_(SRIOV_QUERY_LUID)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_QUERY_LUID (
    _In_        PVOID               Context,
    _Out_       PLUID               Luid
    );

typedef SRIOV_QUERY_LUID *PSRIOV_QUERY_LUID;

typedef
_Function_class_(SRIOV_QUERY_VF_LUID)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_QUERY_VF_LUID (
    _In_        PVOID               Context,
    _In_        USHORT              VfIndex,
    _Out_       PLUID               Luid
    );

typedef SRIOV_QUERY_VF_LUID *PSRIOV_QUERY_VF_LUID;

typedef
_Function_class_(SRIOV_QUERY_VF_LUID)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
SRIOV_QUERY_LUID_VF (
    _In_        PVOID               Context,
    _In_        LUID                Luid,
    _Out_       PUSHORT             VfIndex
    );

typedef SRIOV_QUERY_LUID_VF *PSRIOV_QUERY_LUID_VF;

typedef struct _SRIOV_DEVICE_INTERFACE_STANDARD
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
    // Runtime control functions
    //

    PSRIOV_READ_CONFIG                  ReadVfConfig;
    PSRIOV_WRITE_CONFIG                 WriteVfConfig;

    PSRIOV_READ_BLOCK                   ReadVfConfigBlock;
    PSRIOV_WRITE_BLOCK                  WriteVfConfigBlock;

    PSRIOV_QUERY_PROBED_BARS            QueryProbedBars;
    PSRIOV_GET_VENDOR_AND_DEVICE_IDS    GetVendorAndDevice;

    PSRIOV_GET_DEVICE_LOCATION          GetDeviceLocation;

    PSRIOV_RESET_FUNCTION               ResetVf;

    PSRIOV_SET_POWER_STATE              SetVfPowerState;

    PSRIOV_GET_RESOURCE_FOR_BAR         GetResourceForBar;

    PSRIOV_QUERY_LUID                   QueryLuid;

}  SRIOV_DEVICE_INTERFACE_STANDARD, *PSRIOV_DEVICE_INTERFACE_STANDARD;

//non-ideal but define a new struct to make sure sizeof() is still the same
typedef struct _SRIOV_DEVICE_INTERFACE_STANDARD_2
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
   // Runtime control functions
   //

   PSRIOV_READ_CONFIG                  ReadVfConfig;
   PSRIOV_WRITE_CONFIG                 WriteVfConfig;

   PSRIOV_READ_BLOCK                   ReadVfConfigBlock;
   PSRIOV_WRITE_BLOCK                  WriteVfConfigBlock;

   PSRIOV_QUERY_PROBED_BARS            QueryProbedBars;
   PSRIOV_GET_VENDOR_AND_DEVICE_IDS    GetVendorAndDevice;

   PSRIOV_GET_DEVICE_LOCATION          GetDeviceLocation;

   PSRIOV_RESET_FUNCTION               ResetVf;

   PSRIOV_SET_POWER_STATE              SetVfPowerState;

   PSRIOV_GET_RESOURCE_FOR_BAR         GetResourceForBar;

   PSRIOV_QUERY_LUID                   QueryLuid;

    // version 2 functions added for more flexible SRIOV (not to PCIe spec)
    PSRIOV_QUERY_PROBED_BARS_2          QueryProbedBars_2;

    PSRIOV_QUERY_VF_LUID                QueryVfLuid;
    PSRIOV_QUERY_LUID_VF                QueryLuidVf;
}  SRIOV_DEVICE_INTERFACE_STANDARD_2, *PSRIOV_DEVICE_INTERFACE_STANDARD_2;


// {adfd9567-4245-497e-8572-78d45c1622b8}
DEFINE_GUID(GUID_MITIGABLE_DEVICE_INTERFACE,
0xadfd9567, 0x4245, 0x497e, 0x85, 0x72, 0x78, 0xd4, 0x5c, 0x16, 0x22, 0xb8);


typedef
_Function_class_(READ_WRITE_MITIGATED_REGISTER)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
READ_WRITE_MITIGATED_REGISTER (
    _In_            PVOID             Context,
    _In_            USHORT            VfIndex,
    _In_            BOOLEAN           Read,
    _In_range_(0,5) USHORT            BarIndex,
    _In_            ULONGLONG         Offset,
    _In_range_(1,8) ULONG             Length,
    _When_(Read != FALSE, _Out_writes_bytes_(Length))
    _When_(Read == FALSE, _In_reads_bytes_(Length))
                    PUCHAR            Data
    );

typedef READ_WRITE_MITIGATED_REGISTER *PREAD_WRITE_MITIGATED_REGISTER;


typedef struct _MITIGABLE_DEVICE_INTERFACE
{
    //
    // generic interface header
    //
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PREAD_WRITE_MITIGATED_REGISTER ReadWriteMitigatedRegister;

} MITIGABLE_DEVICE_INTERFACE, *PMITIGABLE_DEVICE_INTERFACE;

// {0db3e0f9-3536-4213-9572-ad77e224be27}
DEFINE_GUID(GUID_DEVINTERFACE_DIRECTLY_ASSIGNABLE_DEVICE,
0x0db3e0f9, 0x3536, 0x4213, 0x95, 0x72, 0xad, 0x77, 0xe2, 0x24, 0xbe, 0x27);

#endif
