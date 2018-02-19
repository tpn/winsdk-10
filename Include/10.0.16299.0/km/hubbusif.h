/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    hubbusif.h

Abstract:

    Services exported by the Port driver for use by the hub driver.

Environment:

    Kernel mode
   
--*/

#ifndef   __HUBBUSIF_H__
#define   __HUBBUSIF_H__

/*
  Bus interfaces are supported for Windows XP and later only
*/

#if (NTDDI_VERSION >= NTDDI_WINXP)

typedef PVOID PUSB_DEVICE_HANDLE;

typedef struct _ROOTHUB_PDO_EXTENSION {

    ULONG Signature;

} ROOTHUB_PDO_EXTENSION, *PROOTHUB_PDO_EXTENSION;

// legacy flags
#define USBD_DEVHACK_SLOW_ENUMERATION   0x00000001
#define USBD_DEVHACK_DISABLE_SN         0x00000002
#define USBD_DEVHACK_SET_DIAG_ID        0x00000004



#ifndef USB_BUSIFFN
#define USB_BUSIFFN __stdcall
#endif

/****************************************************************************************************

Module: hubbusif.h

name:  Bus interface for USB Hub
Copyright (c) Microsoft Corporation. All rights reserved

Revision History:

    6-20-99 : created
    1-5-03 : revised 


*******************************************************************************************************/


_Function_class_(USB_BUSIFFN_CREATE_USB_DEVICE)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_CREATE_USB_DEVICE (
    _In_ PVOID BusContext,
    _Outptr_ PUSB_DEVICE_HANDLE *NewDeviceHandle,
    _In_ PUSB_DEVICE_HANDLE HubDeviceHandle,
    _In_ USHORT PortStatus,
    _In_ USHORT PortNumber
    );

typedef USB_BUSIFFN_CREATE_USB_DEVICE *PUSB_BUSIFFN_CREATE_USB_DEVICE;

#define CD_ERR_V1       0x00000001

typedef enum _USBPORT_CREATEDEV_ERROR {
    CreateDevErrNotSet = 0,
    CreateDevBadHubDevHandle,
    CreateDevFailedAllocDevHandle,
    CreateDevFailedOpenEndpoint,
    CreateDevFailedAllocDsBuff,
    CreateDevFailedGetDs,
    CreateDevTtNotFound,
    CreateDevBadDevHandlePtr
} USBPORT_CREATEDEV_ERROR;

typedef struct _USB_CD_ERROR_INFORMATION {

    ULONG Version;
    USBPORT_CREATEDEV_ERROR PathError;
    ULONG UlongArg1;
    ULONG UlongArg2;
    NTSTATUS NtStatus;
    UCHAR XtraInfo[64];

} USB_CD_ERROR_INFORMATION, *PUSB_CD_ERROR_INFORMATION;


_Function_class_(USB_BUSIFFN_CREATE_USB_DEVICE_EX)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_CREATE_USB_DEVICE_EX (
    _In_ PVOID BusContext,
    _Outptr_ PUSB_DEVICE_HANDLE *NewDeviceHandle,
    _In_ PUSB_DEVICE_HANDLE HsHubDeviceHandle,
    _In_ USHORT PortStatus,
    _In_ USHORT PortNumber,
    _Out_ PUSB_CD_ERROR_INFORMATION CdErrorInfo,
    _In_ USHORT TtPortNumber
    );

typedef USB_BUSIFFN_CREATE_USB_DEVICE_EX *PUSB_BUSIFFN_CREATE_USB_DEVICE_EX;

/*
    PortPathDepth -
    Depth of hubs through which a device is attached to a host
    controller.
    0: Root hub device embedded in host controller.
    1: Devices attached directly to a root hub port.
    2 - 6: Devices attached through a chain of a hubs at most 5 deep,
    not including root hub.  (See section 4.1.1 Bus Topology in the USB
    Specification Revision 2.0)

    PortPath -
    List of 1-based port numbers on the chain of hubs through which a
    device is attached.  PortPath list has PortPathDepth valid entries.
*/

typedef struct _USB_PORT_PATH {

    ULONG   PortPathDepth;
    ULONG   PortPath[6];

} USB_PORT_PATH, *PUSB_PORT_PATH;


_Function_class_(USB_BUSIFFN_CREATE_USB_DEVICE_V7)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_CREATE_USB_DEVICE_V7 (
    _In_ PVOID BusContext,
    _Outptr_ PUSB_DEVICE_HANDLE *NewDeviceHandle,
    _In_ PUSB_DEVICE_HANDLE HsHubDeviceHandle,
    _In_ USHORT PortStatus,
    _In_ PUSB_PORT_PATH PortPath,
    _Out_ PUSB_CD_ERROR_INFORMATION CdErrorInfo,
    _In_ USHORT TtPortNumber,
    _In_ PDEVICE_OBJECT PdoDeviceObject,
    _In_ PUNICODE_STRING PhysicalDeviceObjectName
    );

typedef USB_BUSIFFN_CREATE_USB_DEVICE_V7 *PUSB_BUSIFFN_CREATE_USB_DEVICE_V7;
#define ID_ERR_V1       0x00000001

typedef enum _USBPORT_INITDEV_ERROR {
    InitDevErrNotSet = 0,
    InitDevFailedSetAddress,
    InitDevFailedPokeEndpoint,
    InitDevBadDeviceDescriptor,
} USBPORT_INITDEV_ERROR;

typedef struct _USB_ID_ERROR_INFORMATION {

    ULONG Version;
    USBPORT_INITDEV_ERROR PathError;
    ULONG Arg1;
    ULONG UsbAddress;
    NTSTATUS NtStatus;
    USBD_STATUS UsbdStatus;
    UCHAR XtraInfo[64];

} USB_ID_ERROR_INFORMATION, *PUSB_ID_ERROR_INFORMATION;


_Function_class_(USB_BUSIFFN_INITIALIZE_USB_DEVICE)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_INITIALIZE_USB_DEVICE (
    _In_ PVOID BusContext,
    _Inout_ PUSB_DEVICE_HANDLE DeviceHandle
    );

typedef USB_BUSIFFN_INITIALIZE_USB_DEVICE *PUSB_BUSIFFN_INITIALIZE_USB_DEVICE;

_Function_class_(USB_BUSIFFN_INITIALIZE_USB_DEVICE_EX)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_INITIALIZE_USB_DEVICE_EX (
    _In_ PVOID BusContext,
    _Inout_ PUSB_DEVICE_HANDLE DeviceHandle,
    _Out_ PUSB_ID_ERROR_INFORMATION IdErrInfo
    );

typedef USB_BUSIFFN_INITIALIZE_USB_DEVICE_EX *PUSB_BUSIFFN_INITIALIZE_USB_DEVICE_EX;

/*
flags passed to remove device
*/

#define USBD_KEEP_DEVICE_DATA   0x00000001
#define USBD_MARK_DEVICE_BUSY   0x00000002


_Function_class_(USB_BUSIFFN_REMOVE_USB_DEVICE)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_REMOVE_USB_DEVICE (
    _In_ PVOID BusContext,
    _Inout_ PUSB_DEVICE_HANDLE DeviceHandle,
    _In_ ULONG Flags
    );

typedef USB_BUSIFFN_REMOVE_USB_DEVICE *PUSB_BUSIFFN_REMOVE_USB_DEVICE;

_Function_class_(USB_BUSIFFN_GET_USB_DESCRIPTORS)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_GET_USB_DESCRIPTORS (
    _In_ PVOID BusContext,
    _Inout_ PUSB_DEVICE_HANDLE DeviceHandle,
    _Out_writes_bytes_to_(*DeviceDescriptorBufferLength,*DeviceDescriptorBufferLength) PUCHAR DeviceDescriptorBuffer,
    _Inout_ PULONG DeviceDescriptorBufferLength,
    _Out_writes_bytes_to_(*ConfigDescriptorBufferLength, *ConfigDescriptorBufferLength) PUCHAR ConfigDescriptorBuffer,
    _Inout_ PULONG ConfigDescriptorBufferLength
    );

typedef USB_BUSIFFN_GET_USB_DESCRIPTORS *PUSB_BUSIFFN_GET_USB_DESCRIPTORS;

_Function_class_(USB_BUSIFFN_RESTORE_DEVICE)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_RESTORE_DEVICE (
    _In_ PVOID BusContext,
    _Inout_ PUSB_DEVICE_HANDLE OldDeviceHandle,
    _Inout_ PUSB_DEVICE_HANDLE NewDeviceHandle
    );

typedef USB_BUSIFFN_RESTORE_DEVICE *PUSB_BUSIFFN_RESTORE_DEVICE;

_Function_class_(USB_BUSIFFN_GET_POTRTHACK_FLAGS)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_GET_POTRTHACK_FLAGS (
    _In_ PVOID BusContext,
    _Inout_ PULONG Flags
    );

typedef USB_BUSIFFN_GET_POTRTHACK_FLAGS *PUSB_BUSIFFN_GET_POTRTHACK_FLAGS;

_Function_class_(USB_BUSIFFN_GET_DEVICE_INFORMATION)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_GET_DEVICE_INFORMATION (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE DeviceHandle,
    _Out_writes_bytes_to_(DeviceInformationBufferLength,*LengthOfDataCopied) PVOID DeviceInformationBuffer,
    _In_ ULONG DeviceInformationBufferLength,
    _Inout_ PULONG LengthOfDataCopied
    );

typedef USB_BUSIFFN_GET_DEVICE_INFORMATION *PUSB_BUSIFFN_GET_DEVICE_INFORMATION;

_Function_class_(USB_BUSIFFN_GET_CONTROLLER_INFORMATION)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_GET_CONTROLLER_INFORMATION (
    _In_ PVOID BusContext,
    _Inout_updates_bytes_to_(ControllerInformationBufferLength, *LengthOfDataCopied) PVOID ControllerInformationBuffer,
    _In_ ULONG ControllerInformationBufferLength,
    _Inout_ PULONG LengthOfDataCopied
    );

typedef USB_BUSIFFN_GET_CONTROLLER_INFORMATION *PUSB_BUSIFFN_GET_CONTROLLER_INFORMATION;

_Function_class_(USB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND (
    _In_ PVOID BusContext,
    _In_ BOOLEAN Enable
    );

typedef USB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND *PUSB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND;

/*
    Not supported in LH
*/
_Function_class_(USB_BUSIFFN_GET_EXTENDED_HUB_INFO)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_GET_EXTENDED_HUB_INFO (
    _In_ PVOID BusContext,
    _In_ PDEVICE_OBJECT HubPhysicalDeviceObject,
    _Inout_updates_bytes_to_(HubInformationBufferLength, *LengthOfDataCopied) PVOID HubInformationBuffer,
    _In_ ULONG HubInformationBufferLength,
    _Out_ PULONG LengthOfDataCopied
    );

typedef USB_BUSIFFN_GET_EXTENDED_HUB_INFO *PUSB_BUSIFFN_GET_EXTENDED_HUB_INFO;
/*
    Not supported in LH
*/
_Function_class_(USB_BUSIFFN_GET_ROOTHUB_SYM_NAME)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_GET_ROOTHUB_SYM_NAME (
    _In_ PVOID BusContext,
    _Inout_updates_bytes_to_(HubSymNameBufferLength, *HubSymNameActualLength) PVOID HubSymNameBuffer,
    _In_ ULONG HubSymNameBufferLength,
    _Out_ PULONG HubSymNameActualLength
    );

typedef USB_BUSIFFN_GET_ROOTHUB_SYM_NAME *PUSB_BUSIFFN_GET_ROOTHUB_SYM_NAME;

_Function_class_(USB_BUSIFFN_GET_DEVICE_BUSCONTEXT)
typedef
PVOID
USB_BUSIFFN
USB_BUSIFFN_GET_DEVICE_BUSCONTEXT (
    _In_ PVOID HubBusContext,
    _In_ PVOID DeviceHandle
    );

typedef USB_BUSIFFN_GET_DEVICE_BUSCONTEXT *PUSB_BUSIFFN_GET_DEVICE_BUSCONTEXT;

_Function_class_(USB_BUSIFFN_INITIALIZE_20HUB)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_INITIALIZE_20HUB (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE HubDeviceHandle,
    _In_ ULONG TtCount
    );

typedef USB_BUSIFFN_INITIALIZE_20HUB *PUSB_BUSIFFN_INITIALIZE_20HUB;

_Function_class_(USB_BUSIFFN_IS_ROOT)
typedef
BOOLEAN
USB_BUSIFFN
USB_BUSIFFN_IS_ROOT (
    _In_ PVOID BusContext,
    _In_ PVOID DeviceObject
    );

typedef USB_BUSIFFN_IS_ROOT *PUSB_BUSIFFN_IS_ROOT;

_Function_class_(USB_BUSIFFN_ACQUIRE_SEMAPHORE)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_ACQUIRE_SEMAPHORE (
    _In_ PVOID BusContext
    );

typedef USB_BUSIFFN_ACQUIRE_SEMAPHORE *PUSB_BUSIFFN_ACQUIRE_SEMAPHORE;

_Function_class_(USB_BUSIFFN_RELEASE_SEMAPHORE)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_RELEASE_SEMAPHORE (
    _In_ PVOID BusContext
    );

typedef USB_BUSIFFN_RELEASE_SEMAPHORE *PUSB_BUSIFFN_RELEASE_SEMAPHORE;

_Function_class_(RH_INIT_CALLBACK)
typedef
VOID
__stdcall
RH_INIT_CALLBACK (
    _In_ PVOID CallBackContext
    );

typedef RH_INIT_CALLBACK *PRH_INIT_CALLBACK;

_Function_class_(USB_BUSIFFN_ROOTHUB_INIT_NOTIFY)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_ROOTHUB_INIT_NOTIFY (
    _In_ PVOID BusContext,
    _In_ PVOID CallbackContext,
    _In_ PRH_INIT_CALLBACK CallbackRoutine
    );

typedef USB_BUSIFFN_ROOTHUB_INIT_NOTIFY *PUSB_BUSIFFN_ROOTHUB_INIT_NOTIFY;

_Function_class_(USB_BUSIFFN_FLUSH_TRANSFERS)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_FLUSH_TRANSFERS (
    _In_ PVOID BusContext,
    _In_ PVOID DeviceHandle
    );

typedef USB_BUSIFFN_FLUSH_TRANSFERS *PUSB_BUSIFFN_FLUSH_TRANSFERS;

_Function_class_(USB_BUSIFFN_CALC_PIPE_BANDWIDTH)
typedef
ULONG
USB_BUSIFFN
USB_BUSIFFN_CALC_PIPE_BANDWIDTH (
    _In_ PVOID BusContext,
    _In_ PUSBD_PIPE_INFORMATION PipeInfo,
    _In_ USB_DEVICE_SPEED DeviceSpeed
    );

typedef USB_BUSIFFN_CALC_PIPE_BANDWIDTH *PUSB_BUSIFFN_CALC_PIPE_BANDWIDTH;

_Function_class_(USB_BUSIFFN_SET_BUS_WAKE_MODE)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_SET_BUS_WAKE_MODE (
    _In_ PVOID BusContext,
    _In_ ULONG Mode
    );

typedef USB_BUSIFFN_SET_BUS_WAKE_MODE *PUSB_BUSIFFN_SET_BUS_WAKE_MODE;

_Function_class_(USB_BUSIFFN_SET_DEVICE_FLAG)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_SET_DEVICE_FLAG (
    _In_ PVOID BusContext,
    _In_ GUID *DeviceFlagGuid,
    _In_ PVOID ValueData,
    _In_ ULONG ValueLength
    );

typedef USB_BUSIFFN_SET_DEVICE_FLAG *PUSB_BUSIFFN_SET_DEVICE_FLAG;

_Function_class_(USB_BUSIFFN_SET_DEVHANDLE_DATA)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_SET_DEVHANDLE_DATA (
    _In_ PVOID BusContext,
    _In_ PVOID DeviceHandle,
    _In_ PDEVICE_OBJECT UsbDevicePdo
    );

typedef USB_BUSIFFN_SET_DEVHANDLE_DATA *PUSB_BUSIFFN_SET_DEVHANDLE_DATA;

_Function_class_(USB_BUSIFFN_TEST_POINT)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_TEST_POINT (
    _In_ PVOID BusContext,
    _In_ PVOID DeviceHandle,
    _In_ ULONG Opcode,
    _In_ PVOID TestData
    );

typedef USB_BUSIFFN_TEST_POINT *PUSB_BUSIFFN_TEST_POINT;

_Function_class_(USB_BUSIFFN_GET_DEVICE_PERFORMANCE_INFO)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_GET_DEVICE_PERFORMANCE_INFO (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE DeviceHandle,
    _Out_writes_bytes_to_(DeviceInformationBufferLength,*LengthOfDataCopied) PVOID DeviceInformationBuffer,
    _In_ ULONG DeviceInformationBufferLength,
    _Inout_ PULONG LengthOfDataCopied
    );

typedef USB_BUSIFFN_GET_DEVICE_PERFORMANCE_INFO *PUSB_BUSIFFN_GET_DEVICE_PERFORMANCE_INFO;

_Function_class_(USB_BUSIFFN_WAIT_ASYNC_POWERUP)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_WAIT_ASYNC_POWERUP (
    _In_ PVOID BusContext
    );

typedef USB_BUSIFFN_WAIT_ASYNC_POWERUP *PUSB_BUSIFFN_WAIT_ASYNC_POWERUP;

_Function_class_(USB_BUSIFFN_GET_DEVICE_ADDRESS)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_GET_DEVICE_ADDRESS (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE DeviceHandle,
    _Out_ PUSHORT DeviceAddress
    );

typedef USB_BUSIFFN_GET_DEVICE_ADDRESS *PUSB_BUSIFFN_GET_DEVICE_ADDRESS;

_Function_class_(USB_BUSIFFN_DEREF_DEVICE_HANDLE)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_DEREF_DEVICE_HANDLE (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE DeviceHandle,
    _In_ PVOID Object,
    _In_ ULONG Tag
    );

typedef USB_BUSIFFN_DEREF_DEVICE_HANDLE *PUSB_BUSIFFN_DEREF_DEVICE_HANDLE;

_Function_class_(USB_BUSIFFN_REF_DEVICE_HANDLE)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_REF_DEVICE_HANDLE (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE DeviceHandle,
    _In_ PVOID Object,
    _In_ ULONG Tag
    );

typedef USB_BUSIFFN_REF_DEVICE_HANDLE *PUSB_BUSIFFN_REF_DEVICE_HANDLE;

#define USB_IDLE_NOT_READY                      0
#define USB_IDLE_READY                          1

_Function_class_(USB_BUSIFFN_SET_DEVICE_HANDLE_IDLE_READY_STATE)
typedef
ULONG
USB_BUSIFFN
USB_BUSIFFN_SET_DEVICE_HANDLE_IDLE_READY_STATE (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE DeviceHandle,
    _In_ ULONG NewIdleReadyState
    );

typedef USB_BUSIFFN_SET_DEVICE_HANDLE_IDLE_READY_STATE *PUSB_BUSIFFN_SET_DEVICE_HANDLE_IDLE_READY_STATE;

_Function_class_(USB_BUSIFFN_GET_CONTAINER_ID_FOR_PORT)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_GET_CONTAINER_ID_FOR_PORT (
    _In_ PVOID BusContext,
    _In_ USHORT PortNumber,
    _Out_ LPGUID ContainerId
    );

typedef USB_BUSIFFN_GET_CONTAINER_ID_FOR_PORT *PUSB_BUSIFFN_GET_CONTAINER_ID_FOR_PORT;

_Function_class_(USB_BUSIFFN_SET_CONTAINER_ID_FOR_PORT)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_SET_CONTAINER_ID_FOR_PORT (
    _In_ PVOID BusContext,
    _In_ USHORT PortNumber,
    _In_ LPGUID ContainerId
    );

typedef USB_BUSIFFN_SET_CONTAINER_ID_FOR_PORT *PUSB_BUSIFFN_SET_CONTAINER_ID_FOR_PORT;

_Function_class_(USB_BUSIFFN_ABORT_ALL_DEVICE_PIPES)
typedef
NTSTATUS
USB_BUSIFFN
USB_BUSIFFN_ABORT_ALL_DEVICE_PIPES (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE DeviceHandle
    );

typedef USB_BUSIFFN_ABORT_ALL_DEVICE_PIPES *PUSB_BUSIFFN_ABORT_ALL_DEVICE_PIPES;

_Function_class_(USB_BUSIFFN_GET_DEBUG_PORT_NUMBER)
typedef
USHORT
USB_BUSIFFN
USB_BUSIFFN_GET_DEBUG_PORT_NUMBER (
    _In_ PVOID BusContext
    );

typedef USB_BUSIFFN_GET_DEBUG_PORT_NUMBER *PUSB_BUSIFFN_GET_DEBUG_PORT_NUMBER;


_Function_class_(USB_BUSIFFN_SET_MSOS20_SUPPORT)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_SET_MSOS20_SUPPORT (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE DeviceHandle,
    _In_ PUSB_DEVICE_DESCRIPTOR DeviceDescriptor,
    _In_ UCHAR MsOs20VendorCode
    );

typedef USB_BUSIFFN_SET_MSOS20_SUPPORT *PUSB_BUSIFFN_SET_MSOS20_SUPPORT;


_Function_class_(USB_BUSIFFN_SET_CLEAR_ROOT_PORT_RESUME_TIME)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_SET_CLEAR_ROOT_PORT_RESUME_TIME (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE DeviceHandle,
    _In_ BOOLEAN SetTime,
    _In_ UCHAR ResumeTime
    );

typedef USB_BUSIFFN_SET_CLEAR_ROOT_PORT_RESUME_TIME *PUSB_BUSIFFN_SET_CLEAR_ROOT_PORT_RESUME_TIME;


#define ERRATA_FLAG_RESET_TT_ON_CANCEL              1
#define ERRATA_FLAG_NO_CLEAR_TT_BUFFER_ON_CANCEL    2

_Function_class_(USB_BUSIFFN_SET_DEVICE_ERRATA_FLAG)
typedef
VOID
USB_BUSIFFN
USB_BUSIFFN_SET_DEVICE_ERRATA_FLAG (
    _In_ PVOID BusContext,
    _In_ PUSB_DEVICE_HANDLE DeviceHandle,
    _In_ ULONG DeviceErrataFlag
    );

typedef USB_BUSIFFN_SET_DEVICE_ERRATA_FLAG *PUSB_BUSIFFN_SET_DEVICE_ERRATA_FLAG;

#define USB_BUSIF_HUB_VERSION_0         0x0000
#define USB_BUSIF_HUB_VERSION_1         0x0001
#define USB_BUSIF_HUB_VERSION_2         0x0002
#define USB_BUSIF_HUB_VERSION_3         0x0003
#define USB_BUSIF_HUB_VERSION_4         0x0004
#define USB_BUSIF_HUB_VERSION_5         0x0005
#define USB_BUSIF_HUB_VERSION_6         0x0006
#define USB_BUSIF_HUB_VERSION_7         0x0007
#define USB_BUSIF_HUB_VERSION_8         0x0008
#define USB_BUSIF_HUB_VERSION_9         0x0009

/* {B2BB8C0A-5AB4-11d3-A8CD-00C04F68747A}*/
DEFINE_GUID(USB_BUS_INTERFACE_HUB_GUID,
0xb2bb8c0a, 0x5ab4, 0x11d3, 0xa8, 0xcd, 0x0, 0xc0, 0x4f, 0x68, 0x74, 0x7a);

typedef struct _USB_BUS_INTERFACE_HUB_V0 {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // interface specific entries go here

} USB_BUS_INTERFACE_HUB_V0, *PUSB_BUS_INTERFACE_HUB_V0;


typedef struct _USB_BUS_INTERFACE_HUB_V1 {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // interface specific entries go here

    //
    // functions for the hub driver
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE CreateUsbDevice;
    PUSB_BUSIFFN_INITIALIZE_USB_DEVICE InitializeUsbDevice;
    PUSB_BUSIFFN_GET_USB_DESCRIPTORS GetUsbDescriptors;
    PUSB_BUSIFFN_REMOVE_USB_DEVICE RemoveUsbDevice;
    PUSB_BUSIFFN_RESTORE_DEVICE RestoreUsbDevice;

    PUSB_BUSIFFN_GET_POTRTHACK_FLAGS GetPortHackFlags;
    PUSB_BUSIFFN_GET_DEVICE_INFORMATION QueryDeviceInformation;


} USB_BUS_INTERFACE_HUB_V1, *PUSB_BUS_INTERFACE_HUB_V1;

/*
*/

typedef struct _USB_BUS_INTERFACE_HUB_V2 {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // interface specific entries go here

    //
    // functions for the hub driver
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE CreateUsbDevice;
    PUSB_BUSIFFN_INITIALIZE_USB_DEVICE InitializeUsbDevice;
    PUSB_BUSIFFN_GET_USB_DESCRIPTORS GetUsbDescriptors;
    PUSB_BUSIFFN_REMOVE_USB_DEVICE RemoveUsbDevice;
    PUSB_BUSIFFN_RESTORE_DEVICE RestoreUsbDevice;

    PUSB_BUSIFFN_GET_POTRTHACK_FLAGS GetPortHackFlags;
    PUSB_BUSIFFN_GET_DEVICE_INFORMATION QueryDeviceInformation;

    //
    // new functions for version 2
    //
    PUSB_BUSIFFN_GET_CONTROLLER_INFORMATION GetControllerInformation;
    PUSB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND ControllerSelectiveSuspend;
    PUSB_BUSIFFN_GET_EXTENDED_HUB_INFO GetExtendedHubInformation;
    PUSB_BUSIFFN_GET_ROOTHUB_SYM_NAME GetRootHubSymbolicName;
    PUSB_BUSIFFN_GET_DEVICE_BUSCONTEXT GetDeviceBusContext;    
    PUSB_BUSIFFN_INITIALIZE_20HUB Initialize20Hub;

} USB_BUS_INTERFACE_HUB_V2, *PUSB_BUS_INTERFACE_HUB_V2;


typedef struct _USB_BUS_INTERFACE_HUB_V3 {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // interface specific entries go here

    //
    // functions for the hub driver
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE CreateUsbDevice;
    PUSB_BUSIFFN_INITIALIZE_USB_DEVICE InitializeUsbDevice;
    PUSB_BUSIFFN_GET_USB_DESCRIPTORS GetUsbDescriptors;
    PUSB_BUSIFFN_REMOVE_USB_DEVICE RemoveUsbDevice;
    PUSB_BUSIFFN_RESTORE_DEVICE RestoreUsbDevice;

    PUSB_BUSIFFN_GET_POTRTHACK_FLAGS GetPortHackFlags;
    PUSB_BUSIFFN_GET_DEVICE_INFORMATION QueryDeviceInformation;

    //
    // new functions for version 2
    //
    PUSB_BUSIFFN_GET_CONTROLLER_INFORMATION GetControllerInformation;
    PUSB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND ControllerSelectiveSuspend;
    PUSB_BUSIFFN_GET_EXTENDED_HUB_INFO GetExtendedHubInformation;
    PUSB_BUSIFFN_GET_ROOTHUB_SYM_NAME GetRootHubSymbolicName;
    PUSB_BUSIFFN_GET_DEVICE_BUSCONTEXT GetDeviceBusContext;
    PUSB_BUSIFFN_INITIALIZE_20HUB Initialize20Hub;

    //
    // new for version 3
    //

    PUSB_BUSIFFN_ROOTHUB_INIT_NOTIFY RootHubInitNotification;

} USB_BUS_INTERFACE_HUB_V3, *PUSB_BUS_INTERFACE_HUB_V3;


typedef struct _USB_BUS_INTERFACE_HUB_V4 {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // interface specific entries go here

    //
    // functions for the hub driver
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE CreateUsbDevice;
    PUSB_BUSIFFN_INITIALIZE_USB_DEVICE InitializeUsbDevice;
    PUSB_BUSIFFN_GET_USB_DESCRIPTORS GetUsbDescriptors;
    PUSB_BUSIFFN_REMOVE_USB_DEVICE RemoveUsbDevice;
    PUSB_BUSIFFN_RESTORE_DEVICE RestoreUsbDevice;

    PUSB_BUSIFFN_GET_POTRTHACK_FLAGS GetPortHackFlags;
    PUSB_BUSIFFN_GET_DEVICE_INFORMATION QueryDeviceInformation;

    //
    // new functions for version 2
    //
    PUSB_BUSIFFN_GET_CONTROLLER_INFORMATION GetControllerInformation;
    PUSB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND ControllerSelectiveSuspend;
    PUSB_BUSIFFN_GET_EXTENDED_HUB_INFO GetExtendedHubInformation;
    PUSB_BUSIFFN_GET_ROOTHUB_SYM_NAME GetRootHubSymbolicName;
    PUSB_BUSIFFN_GET_DEVICE_BUSCONTEXT GetDeviceBusContext;
    PUSB_BUSIFFN_INITIALIZE_20HUB Initialize20Hub;

    //
    // new for version 3
    //

    PUSB_BUSIFFN_ROOTHUB_INIT_NOTIFY RootHubInitNotification;

    //
    // new for version 4
    //

    PUSB_BUSIFFN_FLUSH_TRANSFERS FlushTransfers;

} USB_BUS_INTERFACE_HUB_V4, *PUSB_BUS_INTERFACE_HUB_V4;


typedef struct _USB_BUS_INTERFACE_HUB_V5 {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // interface specific entries go here

    //
    // functions for the hub driver
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE CreateUsbDevice;
    PUSB_BUSIFFN_INITIALIZE_USB_DEVICE InitializeUsbDevice;
    PUSB_BUSIFFN_GET_USB_DESCRIPTORS GetUsbDescriptors;
    PUSB_BUSIFFN_REMOVE_USB_DEVICE RemoveUsbDevice;
    PUSB_BUSIFFN_RESTORE_DEVICE RestoreUsbDevice;

    PUSB_BUSIFFN_GET_POTRTHACK_FLAGS GetPortHackFlags;
    PUSB_BUSIFFN_GET_DEVICE_INFORMATION QueryDeviceInformation;

    //
    // new functions for version 2
    //
    PUSB_BUSIFFN_GET_CONTROLLER_INFORMATION GetControllerInformation;
    PUSB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND ControllerSelectiveSuspend;
    PUSB_BUSIFFN_GET_EXTENDED_HUB_INFO GetExtendedHubInformation;
    PUSB_BUSIFFN_GET_ROOTHUB_SYM_NAME GetRootHubSymbolicName;
    PUSB_BUSIFFN_GET_DEVICE_BUSCONTEXT GetDeviceBusContext;
    PUSB_BUSIFFN_INITIALIZE_20HUB Initialize20Hub;

    //
    // new for version 3
    //

    PUSB_BUSIFFN_ROOTHUB_INIT_NOTIFY RootHubInitNotification;

    //
    // new for version 4
    //

    PUSB_BUSIFFN_FLUSH_TRANSFERS FlushTransfers;

    // new for version 5

    PUSB_BUSIFFN_SET_DEVHANDLE_DATA SetDeviceHandleData;

} USB_BUS_INTERFACE_HUB_V5, *PUSB_BUS_INTERFACE_HUB_V5;


typedef struct _USB_BUS_INTERFACE_HUB_V6 {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // interface specific entries go here

    //
    // functions for the hub driver
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE_EX CreateUsbDevice;
    PUSB_BUSIFFN_INITIALIZE_USB_DEVICE_EX InitializeUsbDevice;
    PUSB_BUSIFFN_GET_USB_DESCRIPTORS GetUsbDescriptors;
    PUSB_BUSIFFN_REMOVE_USB_DEVICE RemoveUsbDevice;
    PUSB_BUSIFFN_RESTORE_DEVICE RestoreUsbDevice;

    PUSB_BUSIFFN_GET_POTRTHACK_FLAGS GetPortHackFlags;
    PUSB_BUSIFFN_GET_DEVICE_INFORMATION QueryDeviceInformation;

    //
    // new functions for version 2
    //
    PUSB_BUSIFFN_GET_CONTROLLER_INFORMATION GetControllerInformation;
    PUSB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND ControllerSelectiveSuspend;
    PUSB_BUSIFFN_GET_EXTENDED_HUB_INFO GetExtendedHubInformation;
    PUSB_BUSIFFN_GET_ROOTHUB_SYM_NAME GetRootHubSymbolicName;
    PUSB_BUSIFFN_GET_DEVICE_BUSCONTEXT GetDeviceBusContext;
    PUSB_BUSIFFN_INITIALIZE_20HUB Initialize20Hub;

    //
    // new for version 3
    //

    PUSB_BUSIFFN_ROOTHUB_INIT_NOTIFY RootHubInitNotification;

    //
    // new for version 4
    //

    PUSB_BUSIFFN_FLUSH_TRANSFERS FlushTransfers;

    // new for version 5

    PUSB_BUSIFFN_SET_DEVHANDLE_DATA SetDeviceHandleData;

    // new for version 6 - Longhorn

    PUSB_BUSIFFN_IS_ROOT HubIsRoot;
    PUSB_BUSIFFN_ACQUIRE_SEMAPHORE AcquireBusSemaphore;
    PUSB_BUSIFFN_RELEASE_SEMAPHORE ReleaseBusSemaphore;
    PUSB_BUSIFFN_CALC_PIPE_BANDWIDTH CaculatePipeBandwidth;
    PUSB_BUSIFFN_SET_BUS_WAKE_MODE SetBusSystemWakeMode;
    PUSB_BUSIFFN_SET_DEVICE_FLAG SetDeviceFlag;
    PUSB_BUSIFFN_TEST_POINT HubTestPoint;
    PUSB_BUSIFFN_GET_DEVICE_PERFORMANCE_INFO GetDevicePerformanceInfo;
    PUSB_BUSIFFN_WAIT_ASYNC_POWERUP WaitAsyncPowerUp;
    PUSB_BUSIFFN_GET_DEVICE_ADDRESS GetDeviceAddress;
    PUSB_BUSIFFN_REF_DEVICE_HANDLE RefDeviceHandle;
    PUSB_BUSIFFN_DEREF_DEVICE_HANDLE DerefDeviceHandle;
    PUSB_BUSIFFN_SET_DEVICE_HANDLE_IDLE_READY_STATE SetDeviceHandleIdleReadyState;

} USB_BUS_INTERFACE_HUB_V6, *PUSB_BUS_INTERFACE_HUB_V6;


typedef struct _USB_BUS_INTERFACE_HUB_V7 {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // interface specific entries go here

    //
    // functions for the hub driver
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE_EX CreateUsbDevice;
    PUSB_BUSIFFN_INITIALIZE_USB_DEVICE_EX InitializeUsbDevice;
    PUSB_BUSIFFN_GET_USB_DESCRIPTORS GetUsbDescriptors;
    PUSB_BUSIFFN_REMOVE_USB_DEVICE RemoveUsbDevice;
    PUSB_BUSIFFN_RESTORE_DEVICE RestoreUsbDevice;

    PUSB_BUSIFFN_GET_POTRTHACK_FLAGS GetPortHackFlags;
    PUSB_BUSIFFN_GET_DEVICE_INFORMATION QueryDeviceInformation;

    //
    // new functions for version 2
    //
    PUSB_BUSIFFN_GET_CONTROLLER_INFORMATION GetControllerInformation;
    PUSB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND ControllerSelectiveSuspend;
    PUSB_BUSIFFN_GET_EXTENDED_HUB_INFO GetExtendedHubInformation;
    PUSB_BUSIFFN_GET_ROOTHUB_SYM_NAME GetRootHubSymbolicName;
    PUSB_BUSIFFN_GET_DEVICE_BUSCONTEXT GetDeviceBusContext;
    PUSB_BUSIFFN_INITIALIZE_20HUB Initialize20Hub;

    //
    // new for version 3
    //

    PUSB_BUSIFFN_ROOTHUB_INIT_NOTIFY RootHubInitNotification;

    //
    // new for version 4
    //

    PUSB_BUSIFFN_FLUSH_TRANSFERS FlushTransfers;

    // new for version 5

    PUSB_BUSIFFN_SET_DEVHANDLE_DATA SetDeviceHandleData;

    // new for version 6 - Longhorn

    PUSB_BUSIFFN_IS_ROOT HubIsRoot;
    PUSB_BUSIFFN_ACQUIRE_SEMAPHORE AcquireBusSemaphore;
    PUSB_BUSIFFN_RELEASE_SEMAPHORE ReleaseBusSemaphore;
    PUSB_BUSIFFN_CALC_PIPE_BANDWIDTH CaculatePipeBandwidth;
    PUSB_BUSIFFN_SET_BUS_WAKE_MODE SetBusSystemWakeMode;
    PUSB_BUSIFFN_SET_DEVICE_FLAG SetDeviceFlag;
    PUSB_BUSIFFN_TEST_POINT HubTestPoint;
    PUSB_BUSIFFN_GET_DEVICE_PERFORMANCE_INFO GetDevicePerformanceInfo;
    PUSB_BUSIFFN_WAIT_ASYNC_POWERUP WaitAsyncPowerUp;
    PUSB_BUSIFFN_GET_DEVICE_ADDRESS GetDeviceAddress;
    PUSB_BUSIFFN_REF_DEVICE_HANDLE RefDeviceHandle;
    PUSB_BUSIFFN_DEREF_DEVICE_HANDLE DerefDeviceHandle;
    PUSB_BUSIFFN_SET_DEVICE_HANDLE_IDLE_READY_STATE SetDeviceHandleIdleReadyState;

    //
    // new functions for version 7
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE_V7 CreateUsbDeviceV7;
    PUSB_BUSIFFN_GET_CONTAINER_ID_FOR_PORT GetContainerIdForPort;
    PUSB_BUSIFFN_SET_CONTAINER_ID_FOR_PORT SetContainerIdForPort;
    PUSB_BUSIFFN_ABORT_ALL_DEVICE_PIPES AbortAllDevicePipes;
    PUSB_BUSIFFN_SET_DEVICE_ERRATA_FLAG SetDeviceErrataFlag;
    
} USB_BUS_INTERFACE_HUB_V7, *PUSB_BUS_INTERFACE_HUB_V7;



typedef struct _USB_BUS_INTERFACE_HUB_V8 {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // interface specific entries go here

    //
    // functions for the hub driver
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE_EX CreateUsbDevice;
    PUSB_BUSIFFN_INITIALIZE_USB_DEVICE_EX InitializeUsbDevice;
    PUSB_BUSIFFN_GET_USB_DESCRIPTORS GetUsbDescriptors;
    PUSB_BUSIFFN_REMOVE_USB_DEVICE RemoveUsbDevice;
    PUSB_BUSIFFN_RESTORE_DEVICE RestoreUsbDevice;

    PUSB_BUSIFFN_GET_POTRTHACK_FLAGS GetPortHackFlags;
    PUSB_BUSIFFN_GET_DEVICE_INFORMATION QueryDeviceInformation;

    //
    // new functions for version 2
    //
    PUSB_BUSIFFN_GET_CONTROLLER_INFORMATION GetControllerInformation;
    PUSB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND ControllerSelectiveSuspend;
    PUSB_BUSIFFN_GET_EXTENDED_HUB_INFO GetExtendedHubInformation;
    PUSB_BUSIFFN_GET_ROOTHUB_SYM_NAME GetRootHubSymbolicName;
    PUSB_BUSIFFN_GET_DEVICE_BUSCONTEXT GetDeviceBusContext;
    PUSB_BUSIFFN_INITIALIZE_20HUB Initialize20Hub;

    //
    // new for version 3
    //

    PUSB_BUSIFFN_ROOTHUB_INIT_NOTIFY RootHubInitNotification;

    //
    // new for version 4
    //

    PUSB_BUSIFFN_FLUSH_TRANSFERS FlushTransfers;

    // new for version 5

    PUSB_BUSIFFN_SET_DEVHANDLE_DATA SetDeviceHandleData;

    // new for version 6 - Longhorn

    PUSB_BUSIFFN_IS_ROOT HubIsRoot;
    PUSB_BUSIFFN_ACQUIRE_SEMAPHORE AcquireBusSemaphore;
    PUSB_BUSIFFN_RELEASE_SEMAPHORE ReleaseBusSemaphore;
    PUSB_BUSIFFN_CALC_PIPE_BANDWIDTH CaculatePipeBandwidth;
    PUSB_BUSIFFN_SET_BUS_WAKE_MODE SetBusSystemWakeMode;
    PUSB_BUSIFFN_SET_DEVICE_FLAG SetDeviceFlag;
    PUSB_BUSIFFN_TEST_POINT HubTestPoint;
    PUSB_BUSIFFN_GET_DEVICE_PERFORMANCE_INFO GetDevicePerformanceInfo;
    PUSB_BUSIFFN_WAIT_ASYNC_POWERUP WaitAsyncPowerUp;
    PUSB_BUSIFFN_GET_DEVICE_ADDRESS GetDeviceAddress;
    PUSB_BUSIFFN_REF_DEVICE_HANDLE RefDeviceHandle;
    PUSB_BUSIFFN_DEREF_DEVICE_HANDLE DerefDeviceHandle;
    PUSB_BUSIFFN_SET_DEVICE_HANDLE_IDLE_READY_STATE SetDeviceHandleIdleReadyState;

    //
    // new functions for version 7
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE_V7 CreateUsbDeviceV7;
    PUSB_BUSIFFN_GET_CONTAINER_ID_FOR_PORT GetContainerIdForPort;
    PUSB_BUSIFFN_SET_CONTAINER_ID_FOR_PORT SetContainerIdForPort;
    PUSB_BUSIFFN_ABORT_ALL_DEVICE_PIPES AbortAllDevicePipes;
    PUSB_BUSIFFN_SET_DEVICE_ERRATA_FLAG SetDeviceErrataFlag;

    //
    // new functions for version 8
    //
    PUSB_BUSIFFN_GET_DEBUG_PORT_NUMBER GetDebugPortNumber;
    
} USB_BUS_INTERFACE_HUB_V8, *PUSB_BUS_INTERFACE_HUB_V8;


typedef struct _USB_BUS_INTERFACE_HUB_V9 {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // interface specific entries go here

    //
    // functions for the hub driver
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE_EX CreateUsbDevice;
    PUSB_BUSIFFN_INITIALIZE_USB_DEVICE_EX InitializeUsbDevice;
    PUSB_BUSIFFN_GET_USB_DESCRIPTORS GetUsbDescriptors;
    PUSB_BUSIFFN_REMOVE_USB_DEVICE RemoveUsbDevice;
    PUSB_BUSIFFN_RESTORE_DEVICE RestoreUsbDevice;

    PUSB_BUSIFFN_GET_POTRTHACK_FLAGS GetPortHackFlags;
    PUSB_BUSIFFN_GET_DEVICE_INFORMATION QueryDeviceInformation;

    //
    // new functions for version 2
    //
    PUSB_BUSIFFN_GET_CONTROLLER_INFORMATION GetControllerInformation;
    PUSB_BUSIFFN_CONTROLLER_SELECTIVE_SUSPEND ControllerSelectiveSuspend;
    PUSB_BUSIFFN_GET_EXTENDED_HUB_INFO GetExtendedHubInformation;
    PUSB_BUSIFFN_GET_ROOTHUB_SYM_NAME GetRootHubSymbolicName;
    PUSB_BUSIFFN_GET_DEVICE_BUSCONTEXT GetDeviceBusContext;
    PUSB_BUSIFFN_INITIALIZE_20HUB Initialize20Hub;

    //
    // new for version 3
    //

    PUSB_BUSIFFN_ROOTHUB_INIT_NOTIFY RootHubInitNotification;

    //
    // new for version 4
    //

    PUSB_BUSIFFN_FLUSH_TRANSFERS FlushTransfers;

    // new for version 5

    PUSB_BUSIFFN_SET_DEVHANDLE_DATA SetDeviceHandleData;

    // new for version 6 - Longhorn

    PUSB_BUSIFFN_IS_ROOT HubIsRoot;
    PUSB_BUSIFFN_ACQUIRE_SEMAPHORE AcquireBusSemaphore;
    PUSB_BUSIFFN_RELEASE_SEMAPHORE ReleaseBusSemaphore;
    PUSB_BUSIFFN_CALC_PIPE_BANDWIDTH CaculatePipeBandwidth;
    PUSB_BUSIFFN_SET_BUS_WAKE_MODE SetBusSystemWakeMode;
    PUSB_BUSIFFN_SET_DEVICE_FLAG SetDeviceFlag;
    PUSB_BUSIFFN_TEST_POINT HubTestPoint;
    PUSB_BUSIFFN_GET_DEVICE_PERFORMANCE_INFO GetDevicePerformanceInfo;
    PUSB_BUSIFFN_WAIT_ASYNC_POWERUP WaitAsyncPowerUp;
    PUSB_BUSIFFN_GET_DEVICE_ADDRESS GetDeviceAddress;
    PUSB_BUSIFFN_REF_DEVICE_HANDLE RefDeviceHandle;
    PUSB_BUSIFFN_DEREF_DEVICE_HANDLE DerefDeviceHandle;
    PUSB_BUSIFFN_SET_DEVICE_HANDLE_IDLE_READY_STATE SetDeviceHandleIdleReadyState;

    //
    // new functions for version 7
    //
    PUSB_BUSIFFN_CREATE_USB_DEVICE_V7 CreateUsbDeviceV7;
    PUSB_BUSIFFN_GET_CONTAINER_ID_FOR_PORT GetContainerIdForPort;
    PUSB_BUSIFFN_SET_CONTAINER_ID_FOR_PORT SetContainerIdForPort;
    PUSB_BUSIFFN_ABORT_ALL_DEVICE_PIPES AbortAllDevicePipes;
    PUSB_BUSIFFN_SET_DEVICE_ERRATA_FLAG SetDeviceErrataFlag;

    //
    // new functions for version 8
    //
    PUSB_BUSIFFN_GET_DEBUG_PORT_NUMBER GetDebugPortNumber;
    
    //
    // new functions for version 9
    //
    PUSB_BUSIFFN_SET_MSOS20_SUPPORT SetMsOs20Support;
    PUSB_BUSIFFN_SET_CLEAR_ROOT_PORT_RESUME_TIME SetClearRootPortResumeTime;

} USB_BUS_INTERFACE_HUB_V9, *PUSB_BUS_INTERFACE_HUB_V9;


#define USB_BUSIF_HUB_MIDUMP_VERSION_0         0x0000

/* {c5485f21-4e81-4a23-a8f9-d8518af45c3d} */
DEFINE_GUID(USB_BUS_INTERFACE_HUB_MINIDUMP_GUID,
0xc5485f21, 0x4e81, 0x4a23, 0xa8, 0xf9, 0xd8, 0x51, 0x8a, 0xf4, 0x5c, 0x38);



typedef VOID
    (USB_BUSIFFN *PUSB_BUSIFFN_SET_MINIDUMP_FLAGS) (
        IN PVOID
    );



/*
*/

typedef struct _USB_BUS_INTERFACE_HUB_MINIDUMP {

    USHORT Size;
    USHORT Version;
    // returns
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    //
    // functions for the hub driver
    //

    PUSB_BUSIFFN_SET_MINIDUMP_FLAGS SetUsbPortMiniDumpFlags;

} USB_BUS_INTERFACE_HUB_MINIDUMP, *PUSB_BUS_INTERFACE_HUB_MINIDUMP;


#define USB_BUSIF_HUB_SS_VERSION_0      0x0000

// {BFC3F363-8BA1-4c7b-97BA-9B12B1CA132F}
DEFINE_GUID(USB_BUS_INTERFACE_HUB_SS_GUID, 
0xbfc3f363, 0x8ba1, 0x4c7b, 0x97, 0xba, 0x9b, 0x12, 0xb1, 0xca, 0x13, 0x2f);

typedef NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_SUSPEND_HUB) (
        PDEVICE_OBJECT Pdo
    );

typedef NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_RESUME_HUB) (
        PDEVICE_OBJECT Pdo
    );


typedef struct _USB_BUS_INTERFACE_HUB_SELECTIVE_SUSPEND {

    USHORT Size;
    USHORT Version;
    
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
    // interface specific entries go here

    PUSB_BUSIFFN_SUSPEND_HUB SuspendHub;
    PUSB_BUSIFFN_RESUME_HUB ResumeHub;
} USB_BUS_INTERFACE_HUB_SELECTIVE_SUSPEND, *PUSB_BUS_INTERFACE_HUB_SELECTIVE_SUSPEND;




/*
    The following structures are used by the GetDeviceInformation APIs
*/

#include <pshpack1.h>

typedef struct _USB_PIPE_INFORMATION_0 {

    /* pad descriptors to maintain DWORD alignment */
    USB_ENDPOINT_DESCRIPTOR EndpointDescriptor;
    UCHAR ED_Pad[1];

    ULONG ScheduleOffset;
} USB_PIPE_INFORMATION_0, *PUSB_PIPE_INFORMATION_0;

typedef struct _USB_LEVEL_INFORMATION {

    /* inputs: information level requested */
    ULONG InformationLevel;

    /* outputs: */
    ULONG ActualLength;

} USB_LEVEL_INFORMATION, *PUSB_LEVEL_INFORMATION;

typedef struct _USB_DEVICE_INFORMATION_0 {

    /* inputs: information level requested */
    ULONG InformationLevel;

    /* outputs: */
    ULONG ActualLength;

    /* begin level_0 information */
    ULONG PortNumber;

    /* pad descriptors to maintain DWORD alignment */
    USB_DEVICE_DESCRIPTOR DeviceDescriptor;
    UCHAR DD_pad[2];

    UCHAR CurrentConfigurationValue;
    UCHAR ReservedMBZ;
    USHORT DeviceAddress;

    ULONG HubAddress;

    USB_DEVICE_SPEED DeviceSpeed;
    USB_DEVICE_TYPE DeviceType;

    ULONG NumberOfOpenPipes;

    USB_PIPE_INFORMATION_0 PipeList[1];

} USB_DEVICE_INFORMATION_0, *PUSB_DEVICE_INFORMATION_0;



typedef struct _USB_CONTROLLER_INFORMATION_0 {

    ULONG InformationLevel;
    ULONG ActualLength;
    BOOLEAN SelectiveSuspendEnabled;
    BOOLEAN IsHighSpeedController;

} USB_CONTROLLER_INFORMATION_0, *PUSB_CONTROLLER_INFORMATION_0;


typedef struct _USB_CONTROLLER_INFORMATION_1 {

    ULONG InformationLevel;
    ULONG ActualLength;
    BOOLEAN SelectiveSuspendEnabled;
    BOOLEAN IsHighSpeedController;
    ULONG HcBusNumber;
    ULONG HcBusDevice;
    ULONG HcBusFunction;

} USB_CONTROLLER_INFORMATION_1, *PUSB_CONTROLLER_INFORMATION_1;



/*
    Structures that define extended hub port characteristics
*/

typedef struct _USB_EXTPORT_INFORMATION_0 {
    /*
       physical port ie number passed in control commands 1, 2, 3..255
    */
    ULONG                 PhysicalPortNumber;
    /*
       label on port may not natch the physical number
     */
    ULONG                 PortLabelNumber;

    USHORT                VidOverride;
    USHORT                PidOverride;
    /*
       extended port attributes as defined in usb.h
    */
    ULONG                 PortAttributes;
} USB_EXTPORT_INFORMATION_0, *PUSB_EXTPORT_INFORMATION;


typedef struct _USB_EXTHUB_INFORMATION_0 {

    /* inputs: information level requested */
    ULONG InformationLevel;

    /* begin level_0 information */
    ULONG NumberOfPorts;

    /* hubs don't have > 255 ports */
    USB_EXTPORT_INFORMATION_0 Port[255];

} USB_EXTHUB_INFORMATION_0, *PUSB_EXTHUB_INFORMATION_0;

/*
* Structures used by the GetPerformanceInfo APIs
*/

typedef struct _USB_DEVICE_PERFORMANCE_INFO_0 {

    /* inputs: information level requested */
    ULONG InformationLevel;

    /* outputs: */
    ULONG ActualLength;

    // total BulkBytes transfered for this device
    ULONG BulkBytes;
    ULONG BulkUrbCount;

    // total control bytes transfered for this device
    ULONG ControlDataBytes;
    ULONG ControlUrbCount;

    // total iso bytes transfered for this device
    ULONG IsoBytes;
    ULONG IsoUrbCount;

    // total interrupt bytes transfered for this device
    ULONG InterruptBytes;
    ULONG InterruptUrbCount;

    // BW in bytes alloced in bits/32ms
    ULONG AllocedInterrupt[6];
    ULONG AllocedIso;

    // Total BW available on the bus in bits/32ms
    ULONG Total32secBandwidth;
    
    // Total BW available on the device's TT in bits/32ms
    ULONG TotalTtBandwidth;
    
    // Count of the total time left between scheduling iso transfers and their start frame
    ULONG TotalIsoLatency;
    
    // ISO packet errors, etc, that are NOT late
    ULONG DroppedIsoPackets;
    
    // Number of transfer URBs completing with errors
    ULONG TransferErrors;

} USB_DEVICE_PERFORMANCE_INFO_0, *PUSB_DEVICE_PERFORMANCE_INFO_0;

#include <poppack.h>

#endif

#endif  /* __HUBBUSIF_H */


