/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

UcxClass.h

Abstract:

This module contains the USB Host Controller (UCX) WDF class extension's
datatypes and exported methods.

Environment:

kernel-mode only

Revision History:

--*/

#ifndef __UCX_CLASS_H__
#define __UCX_CLASS_H__

#ifndef WDFAPI
#error Include WDF.H first
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#include <usbspec.h>
#include <usb.h>
#include <usbioctl.h>
#include <usbdlib.h>

//
// This is a private capability exposed by the host controller to be
// queried by UCX.  If supported by the host controller this capability
// indicates that a Clear TT Buffer request should be issued to a TT hub
// if a transfer is canceled on a control or bulk endpoint on a low
// speed or full speed device downstream of the TT hub.
//
DEFINE_GUID(GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL,
    0x09b76d52, 0x0a6d, 0x4e4f, 0xa9, 0x11, 0xd0, 0x36, 0xd1, 0x92, 0x94, 0x97);

DECLARE_HANDLE(UCXUSBDEVICE);
DECLARE_HANDLE(UCXENDPOINT);

typedef struct _USBDEVICE_MGMT_HEADER {
    ULONG                   Size;
    UCXUSBDEVICE            Hub;
    UCXUSBDEVICE            UsbDevice;
} USBDEVICE_MGMT_HEADER, *PUSBDEVICE_MGMT_HEADER;

typedef struct _USBDEVICE_ENABLE_FAILURE_FLAGS {
    ULONG                   InsufficientHardwareResourcesForDefaultEndpoint:1;
    ULONG                   InsufficientHardwareResourcesForDevice:1;
    ULONG                   Reserved:30;
} USBDEVICE_ENABLE_FAILURE_FLAGS;

typedef struct _USBDEVICE_ENABLE {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
    UCXENDPOINT                      DefaultEndpoint;
    USBDEVICE_ENABLE_FAILURE_FLAGS   FailureFlags;
} USBDEVICE_ENABLE, *PUSBDEVICE_ENABLE;

typedef struct _USBDEVICE_RESET {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
    UCXENDPOINT             DefaultEndpoint;
    ULONG                   EndpointsToDisableCount;
    UCXENDPOINT*            EndpointsToDisable;
} USBDEVICE_RESET, *PUSBDEVICE_RESET;

typedef struct _USBDEVICE_PURGEIO {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
    BOOLEAN                 OnSuspend;                             
} USBDEVICE_PURGEIO, *PUSBDEVICE_PURGEIO;

typedef struct _USBDEVICE_ABORTIO {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
} USBDEVICE_ABORTIO, *PUSBDEVICE_ABORTIO;

typedef struct _USBDEVICE_STARTIO {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
} USBDEVICE_STARTIO, *PUSBDEVICE_STARTIO;

typedef struct _USBDEVICE_TREE_PURGEIO {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
} USBDEVICE_TREE_PURGEIO, *PUSBDEVICE_TREE_PURGEIO;

typedef struct _USBDEVICE_ADDRESS {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
    ULONG                   Reserved;
    ULONG                   Address;
} USBDEVICE_ADDRESS, *PUSBDEVICE_ADDRESS;

typedef struct _ENDPOINTS_CONFIGURE_FAILURE_FLAGS {
    ULONG                   InsufficientBandwidth:1;
    ULONG                   InsufficientHardwareResourcesForEndpoints:1;
    ULONG                   MaxExitLatencyTooLarge:1;
    ULONG                   Reserved:29;
} ENDPOINTS_CONFIGURE_FAILURE_FLAGS;

typedef struct _ENDPOINTS_CONFIGURE {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
    ULONG                               EndpointsToEnableCount;
    _Field_size_(EndpointsToEnableCount)
    UCXENDPOINT*                        EndpointsToEnable;
    ULONG                               EndpointsToDisableCount;
    _Field_size_(EndpointsToDisableCount)
    UCXENDPOINT*                        EndpointsToDisable;
    ULONG                               EndpointsEnabledAndUnchangedCount;
    _Field_size_(EndpointsEnabledAndUnchangedCount)
    UCXENDPOINT*                        EndpointsEnabledAndUnchanged;
    ENDPOINTS_CONFIGURE_FAILURE_FLAGS   FailureFlags;
    ULONG                               ExitLatencyDelta;
    UCHAR                               ConfigurationValue;
    UCHAR                               InterfaceNumber;
    UCHAR                               AlternateSetting;
} ENDPOINTS_CONFIGURE, *PENDPOINTS_CONFIGURE;

typedef enum {
    FlagEndpointResetPreserveTransferState = 0x1
} ENDPOINT_RESET_FLAGS;

typedef struct _ENDPOINT_RESET {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
    UCXENDPOINT             Endpoint;
    ENDPOINT_RESET_FLAGS    Flags;
} ENDPOINT_RESET, *PENDPOINT_RESET;

typedef struct _USBDEVICE_UPDATE_FLAGS {
    ULONG                   UpdateDeviceDescriptor:1;
    ULONG                   UpdateBosDescriptor:1;
    ULONG                   UpdateMaxExitLatency:1;
    ULONG                   UpdateIsHub:1;
    ULONG                   UpdateAllowIoOnInvalidPipeHandles:1;
    ULONG                   Update20HardwareLpmParameters:1;
    ULONG                   UpdateRootPortResumeTime:1;
    ULONG                   Reserved:26;
} USBDEVICE_UPDATE_FLAGS;

typedef struct _USBDEVICE_UPDATE_FAILURE_FLAGS {
    ULONG                   MaxExitLatencyTooLarge:1;
    ULONG                   Reserved:31;
} USBDEVICE_UPDATE_FAILURE_FLAGS;

typedef struct _USBDEVICE_UPDATE_20_HARDWARE_LPM_PARAMETERS {
    ULONG                   HardwareLpmEnable:1;
    ULONG                   RemoteWakeEnable:1;
    ULONG                   HostInitiatedResumeDurationMode:1;
    ULONG                   BestEffortServiceLatency:4;
    ULONG                   BestEffortServiceLatencyDeep:4;
    ULONG                   L1Timeout:8;
    ULONG                   Reserved:13;
} USBDEVICE_UPDATE_20_HARDWARE_LPM_PARAMETERS;

typedef struct _USBDEVICE_UPDATE {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
    USBDEVICE_UPDATE_FLAGS                      Flags;
    PUSB_DEVICE_DESCRIPTOR                      DeviceDescriptor;
    PUSB_BOS_DESCRIPTOR                         BosDescriptor;
    ULONG                                       MaxExitLatency;
    BOOLEAN                                     IsHub;
    USBDEVICE_UPDATE_FAILURE_FLAGS              FailureFlags;
    USBDEVICE_UPDATE_20_HARDWARE_LPM_PARAMETERS Usb20HardwareLpmParameters;
    USHORT                                      RootPortResumeTime;
} USBDEVICE_UPDATE, *PUSBDEVICE_UPDATE;

typedef struct _USBDEVICE_HUB_INFO {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
    ULONG                   NumberOfPorts;
    ULONG                   NumberOfTTs;
    ULONG                   TTThinkTime;
} USBDEVICE_HUB_INFO, *PUSBDEVICE_HUB_INFO;

typedef struct _DEFAULT_ENDPOINT_UPDATE {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
    UCXENDPOINT             DefaultEndpoint;
    ULONG                   MaxPacketSize;
} DEFAULT_ENDPOINT_UPDATE, *PDEFAULT_ENDPOINT_UPDATE;

typedef struct _USBDEVICE_DISABLE {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
    UCXENDPOINT             DefaultEndpoint;
} USBDEVICE_DISABLE, *PUSBDEVICE_DISABLE;

typedef struct _ADDRESS0_OWNERSHIP_ACQUIRE {
#ifdef __cplusplus
    USBDEVICE_MGMT_HEADER            Header;
#else
    USBDEVICE_MGMT_HEADER;
#endif
} ADDRESS0_OWNERSHIP_ACQUIRE, *PADDRESS0_OWNERSHIP_ACQUIRE;

typedef enum _CONTROLLER_TYPE {
    ControllerTypeXhci,
    ControllerTypeSoftXhci,
} CONTROLLER_TYPE;

typedef union _CONTROLLER_USB_20_HARDWARE_LPM_FLAGS {
    UCHAR   AsUchar;
    struct {
        UCHAR   L1CapabilitySupported:1;
        UCHAR   BeslLpmCapabilitySupported:1;
#ifdef __cplusplus
    } Flags;
#else
    };
#endif
} CONTROLLER_USB_20_HARDWARE_LPM_FLAGS, *PCONTROLLER_USB_20_HARDWARE_LPM_FLAGS;

#define MAX_VENDOR_ID_STRING_LENGTH     5
#define MAX_DEVICE_ID_STRING_LENGTH     5
#define MAX_REVISION_ID_STRING_LENGTH   5

typedef struct _ROOTHUB_INFO {
    ULONG           Size;
    CONTROLLER_TYPE ControllerType;
    USHORT          NumberOf20Ports;
    USHORT          NumberOf30Ports;
    USHORT          MaxU1ExitLatency;
    USHORT          MaxU2ExitLatency;
} ROOTHUB_INFO, *PROOTHUB_INFO;

typedef enum TRISTATE {
    TriStateUnknown = 'u',
    TriStateFalse = 'f',
    TriStateTrue = 't'
} TRISTATE;     

typedef struct _ROOTHUB_20PORT_INFO {
    USHORT                                  PortNumber;
    UCHAR                                   MinorRevision;
    UCHAR                                   HubDepth;
    TRISTATE                                Removable;
    TRISTATE                                IntegratedHubImplemented;
    TRISTATE                                DebugCapable;
    CONTROLLER_USB_20_HARDWARE_LPM_FLAGS    ControllerUsb20HardwareLpmFlags;
} ROOTHUB_20PORT_INFO, *PROOTHUB_20PORT_INFO;

typedef struct _ROOTHUB_20PORTS_INFO {
    ULONG                   Size;
    USHORT                  NumberOfPorts;
    USHORT                  PortInfoSize;
    PROOTHUB_20PORT_INFO*   PortInfoArray;
} ROOTHUB_20PORTS_INFO, *PROOTHUB_20PORTS_INFO;

typedef struct _ROOTHUB_30PORT_INFO {
    USHORT                                       PortNumber;
    UCHAR                                        MinorRevision;
    UCHAR                                        HubDepth;
    TRISTATE                                     Removable;
    TRISTATE                                     DebugCapable;
} ROOTHUB_30PORT_INFO, *PROOTHUB_30PORT_INFO;

//
// Extended 3.0 port info additionally contains speed information.
//
typedef struct _ROOTHUB_30PORT_INFO_EX {
#ifdef __cplusplus
    ROOTHUB_30PORT_INFO                          Info;
#else
    ROOTHUB_30PORT_INFO;
#endif
    USHORT                                       MaxSpeedsCount;
    USHORT                                       SpeedsCount;
    PUSB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED  Speeds;
} ROOTHUB_30PORT_INFO_EX, *PROOTHUB_30PORT_INFO_EX;

//
// Maximum number of speeds in the table is 32; also allocate 16 IDs for default speeds.
//
#define MAX_SPEEDS_COUNT                         (32 + 16)

typedef struct _ROOTHUB_30PORTS_INFO {
    ULONG                   Size;
    USHORT                  NumberOfPorts;
    USHORT                  PortInfoSize;
    PROOTHUB_30PORT_INFO*   PortInfoArray;
} ROOTHUB_30PORTS_INFO, *PROOTHUB_30PORTS_INFO;


typedef union _PARENT_HUB_FLAGS {
    ULONG   AsUlong32;
    struct { 
        ULONG   DisableLpmForAllDownstreamDevices:1;
        ULONG   HubIsHighSpeedCapable:1;
#ifdef __cplusplus
    } Flags;
#else
    };
#endif
} PARENT_HUB_FLAGS, *PPARENT_HUB_FLAGS;

C_ASSERT(sizeof(PARENT_HUB_FLAGS) == sizeof(ULONG));

typedef struct _HUB_INFO_FROM_PARENT {
    PDEVICE_OBJECT          IoTarget;     
    USB_DEVICE_DESCRIPTOR   DeviceDescriptor;
    USHORT                  U1ExitLatency;
    USHORT                  U2ExitLatency;
    USHORT                  ExitLatencyOfSlowestLinkForU1;
    UCHAR                   DepthOfSlowestLinkForU1;
    USHORT                  ExitLatencyOfSlowestLinkForU2;
    UCHAR                   DepthOfSlowestLinkForU2;
    USHORT                  HostInitiatedU1ExitLatency;
    USHORT                  HostInitiatedU2ExitLatency;
    UCHAR                   TotalHubDepth;
    USHORT                  TotalTPPropogationDelay;
    PARENT_HUB_FLAGS        HubFlags;
    PUSB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED  SublinkSpeedAttr;
    ULONG                   SublinkSpeedAttrCount;
    //PCONNECTOR_OBJECT     ConnectorId;
    //USB30_LTM_INFO        30LtmInfo;   
} HUB_INFO_FROM_PARENT, *PHUB_INFO_FROM_PARENT;



DECLARE_HANDLE(UCXCONTROLLER);
DECLARE_HANDLE(UCXROOTHUB);
DECLARE_HANDLE(UCXSSTREAMS);

typedef struct _UCXUSBDEVICE_INIT *PUCXUSBDEVICE_INIT;
typedef struct _UCXENDPOINT_INIT *PUCXENDPOINT_INIT;
typedef struct _UCXSSTREAMS_INIT *PUCXSSTREAMS_INIT;

typedef void (*PFN_UCX_CLASS)(void);
extern PFN_UCX_CLASS UcxClassFunctions[];

typedef enum _UCX_CLASS_FUNCTIONS {
    UcxIoDeviceControlIndex = 0,
    UcxControllerCreateIndex,
    UcxControllerNeedsResetIndex,
    UcxControllerResetCompleteIndex,
    UcxControllerSetFailedIndex,
    UcxRootHubCreateIndex,
    UcxRootHubPortChangedIndex,
    UcxUsbDeviceCreateIndex,
    UcxUsbDeviceInitSetEventCallbacksIndex,
    UcxUsbDeviceRemoteWakeNotificationIndex,
    UcxEndpointCreateIndex,
    UcxEndpointGetStaticStreamsReferencedIndex,
    UcxEndpointNeedToCancelTransfersIndex,
    UcxEndpointInitSetEventCallbacksIndex,
    UcxDefaultEndpointInitSetEventCallbacksIndex,
    UcxEndpointSetWdfIoQueueIndex,
    UcxEndpointPurgeCompleteIndex,
    UcxEndpointAbortCompleteIndex,
    UcxEndpointNoPingResponseErrorIndex,
    UcxStaticStreamsSetStreamInfoIndex,
    UcxStaticStreamsCreateIndex,
    UcxInitializeDeviceInitIndex,
    UcxFunctionsMax
} UCX_CLASS_FUNCTIONS;


typedef struct _UCX_GLOBALS {

    //
    // Size in bytes of this structure
    //
    ULONG                  Size;

    //
    // Client's WdfDriverGlobals
    //
    PWDF_DRIVER_GLOBALS    WdfDriverGlobals;

} UCX_GLOBALS, *PUCX_GLOBALS;

extern PUCX_GLOBALS UcxGlobals;

//
// UcxInitializeDeviceInit
//

typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
(*PFN_UCX_INITIALIZE_DEVICE_INIT)(
    __in
        PUCX_GLOBALS        Globals,
    __inout
        PWDFDEVICE_INIT     DeviceInit
    );

__drv_requiresIRQL(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UcxInitializeDeviceInit(
    __inout
        PWDFDEVICE_INIT     DeviceInit
)
{
    return(((PFN_UCX_INITIALIZE_DEVICE_INIT)
            UcxClassFunctions[UcxInitializeDeviceInitIndex])(UcxGlobals,
                                                             DeviceInit));
}

//
// UcxIoDeviceControl
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
_Must_inspect_result_
BOOLEAN
(*PFN_UCX_IO_DEVICE_CONTROL)(
    __in 
        PUCX_GLOBALS               Globals,
    __in 
        WDFDEVICE                  Device,
    __in 
        WDFREQUEST                 Request,
    __in 
        size_t                     OutputBufferLength,
    __in  
        size_t                     InputBufferLength,
    __in
        ULONG                      IoControlCode
    );

_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
BOOLEAN
FORCEINLINE
UcxIoDeviceControl(
    __in 
        WDFDEVICE                  Device,
    __in 
        WDFREQUEST                 Request,
    __in 
        size_t                     OutputBufferLength,
    __in  
        size_t                     InputBufferLength,
    __in
        ULONG                      IoControlCode
    )
{
    return(((PFN_UCX_IO_DEVICE_CONTROL) 
            UcxClassFunctions[UcxIoDeviceControlIndex])(UcxGlobals,
                                                        Device,
                                                        Request,
                                                        OutputBufferLength,
                                                        InputBufferLength,
                                                        IoControlCode));
}

#define MAX_USB_DEVICE_DEPTH 6
typedef struct _USB_DEVICE_PORT_PATH {

    ULONG   Size;
    ULONG   PortPathDepth;
    ULONG   TTHubDepth;
    ULONG   PortPath[ MAX_USB_DEVICE_DEPTH ];

} USB_DEVICE_PORT_PATH, *PUSB_DEVICE_PORT_PATH;

typedef struct _UCXUSBDEVICE_INFO {
    ULONG                      Size;
    USB_DEVICE_SPEED           DeviceSpeed;
    UCXUSBDEVICE               TtHub;
    USB_DEVICE_PORT_PATH       PortPath;
} UCXUSBDEVICE_INFO, *PUCXUSBDEVICE_INFO;



typedef
__drv_functionClass(EVT_UCX_CONTROLLER_QUERY_USB_CAPABILITY)
_Must_inspect_result_
NTSTATUS
EVT_UCX_CONTROLLER_QUERY_USB_CAPABILITY (
    __in 
        UCXCONTROLLER      UcxController,
    __in 
        PGUID              CapabilityType,
    __in 
        ULONG              OutputBufferLength,
    __out_bcount_opt(OutputBufferLength) 
        PVOID              OutputBuffer,
    __out
        PULONG             ResultLength
    );

typedef EVT_UCX_CONTROLLER_QUERY_USB_CAPABILITY *PEVT_UCX_CONTROLLER_QUERY_USB_CAPABILITY;

typedef
__drv_functionClass(EVT_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER)
_Must_inspect_result_
NTSTATUS
EVT_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER (
    __in 
        UCXCONTROLLER   UcxController,
    __out 
        PULONG          FrameNumber
    );

typedef EVT_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER *PEVT_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER;

typedef
__drv_functionClass(EVT_UCX_CONTROLLER_USBDEVICE_ADD)
__drv_requiresIRQL(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
EVT_UCX_CONTROLLER_USBDEVICE_ADD (
    __in 
        UCXCONTROLLER      UcxController,
    __in 
        PUCXUSBDEVICE_INFO UcxUsbDeviceInfo,
    __in 
        PUCXUSBDEVICE_INIT UsbDeviceInit
    );

typedef EVT_UCX_CONTROLLER_USBDEVICE_ADD *PEVT_UCX_CONTROLLER_USBDEVICE_ADD;

typedef
__drv_functionClass(EVT_UCX_CONTROLLER_RESET)
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
EVT_UCX_CONTROLLER_RESET (
    __in 
        UCXCONTROLLER      UcxController
    );

typedef EVT_UCX_CONTROLLER_RESET *PEVT_UCX_CONTROLLER_RESET;


typedef enum {
    UcxControllerParentBusTypeCustom,
    UcxControllerParentBusTypePci,
    UcxControllerParentBusTypeAcpi
} UCX_CONTROLLER_PARENT_BUS_TYPE;

typedef struct _UCX_CONTROLLER_PCI_INFORMATION {
    ULONG   VendorId;
    ULONG   DeviceId;
    USHORT  RevisionId;
    ULONG   BusNumber;
    ULONG   DeviceNumber;
    ULONG   FunctionNumber;
} UCX_CONTROLLER_PCI_INFORMATION, *PUCX_CONTROLLER_PCI_INFORMATION;

typedef struct _UCX_CONTROLLER_ACPI_INFORMATION {
    CHAR    VendorId[MAX_VENDOR_ID_STRING_LENGTH];
    CHAR    DeviceId[MAX_DEVICE_ID_STRING_LENGTH];
    CHAR    RevisionId[MAX_REVISION_ID_STRING_LENGTH];
} UCX_CONTROLLER_ACPI_INFORMATION, *PUCX_CONTROLLER_ACPI_INFORMATION;


#define MAX_GENERIC_USB_CONTROLLER_NAME_SIZE 40
typedef struct _UCX_CONTROLLER_CONFIG {
    //
    // Size in bytes of this structure
    //
    ULONG                                           Size;
    ULONG                                           NumberOfPresentedDeviceMgmtEvtCallbacks;
    PEVT_UCX_CONTROLLER_QUERY_USB_CAPABILITY        EvtControllerQueryUsbCapability;
    HANDLE                                          Reserved1;
    PEVT_UCX_CONTROLLER_GET_CURRENT_FRAMENUMBER     EvtControllerGetCurrentFrameNumber;
    PEVT_UCX_CONTROLLER_USBDEVICE_ADD               EvtControllerUsbDeviceAdd;
    PEVT_UCX_CONTROLLER_RESET                       EvtControllerReset;
    HANDLE                                          Reserved2;
    HANDLE                                          Reserved3;
    HANDLE                                          Reserved4;

    UCX_CONTROLLER_PARENT_BUS_TYPE                  ParentBusType;
    UCX_CONTROLLER_PCI_INFORMATION                  PciDeviceInfo;
    UCX_CONTROLLER_ACPI_INFORMATION                 AcpiDeviceInfo;
    
    //
    // Due to compat with GUID_USB_WMI_NODE_INFO we cannot use WCHAR.
    //
    UCHAR                                                 DeviceDescription[MAX_GENERIC_USB_CONTROLLER_NAME_SIZE];

} UCX_CONTROLLER_CONFIG, *PUCX_CONTROLLER_CONFIG;


//
// UcxControllerCreate
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
(*PFN_UCX_CONTROLLER_CREATE)(
    __in 
        PUCX_GLOBALS               Globals,
    __in
        WDFDEVICE                  Device,
    __in 
        PUCX_CONTROLLER_CONFIG     Config,
    __in_opt 
        PWDF_OBJECT_ATTRIBUTES     Attributes,
    __out 
        UCXCONTROLLER             *Controller
    );

__drv_at(Config->Size, __drv_out (__range(!=,0)))
__drv_at(Config->EvtControllerQueryUsbCapability, __drv_out  (__null))
__drv_at(Config->EvtControllerGetCurrentFrameNumber, __drv_out  (__null))
__drv_at(Config->EvtControllerUsbDeviceAdd, __drv_out  (__null))
__drv_at(Config->EvtControllerReset, __drv_out  (__null))
__drv_at(Config->Reserved1, __drv_out  (__null))
__drv_at(Config->Reserved2, __drv_out  (__null))
__drv_at(Config->Reserved3, __drv_out  (__null))
__drv_at(Config->Reserved4, __drv_out  (__null))
VOID
FORCEINLINE
UCX_CONTROLLER_CONFIG_INIT(
    __out 
        PUCX_CONTROLLER_CONFIG Config,
    __in
        LPCSTR                 DeviceDescription
    )
{
    RtlZeroMemory(Config, sizeof(UCX_CONTROLLER_CONFIG));
    Config->Size = sizeof(UCX_CONTROLLER_CONFIG);
    Config->NumberOfPresentedDeviceMgmtEvtCallbacks = (ULONG)-1;
    Config->ParentBusType = UcxControllerParentBusTypeCustom;

    Config->AcpiDeviceInfo.VendorId[0]      = ANSI_NULL;
    Config->AcpiDeviceInfo.DeviceId[0]      = ANSI_NULL;
    Config->AcpiDeviceInfo.RevisionId[0]    = ANSI_NULL;
    Config->PciDeviceInfo.VendorId          = LONG_MAX;
    Config->PciDeviceInfo.DeviceId          = LONG_MAX;
    Config->PciDeviceInfo.RevisionId        = 0;
    Config->PciDeviceInfo.BusNumber         = 0;
    Config->PciDeviceInfo.DeviceNumber      = 0;
    Config->PciDeviceInfo.FunctionNumber    = 0;

    (VOID) RtlStringCbCopyA((LPSTR)Config->DeviceDescription,
                            sizeof(Config->DeviceDescription),
                            DeviceDescription);

    __assume(Config->EvtControllerQueryUsbCapability == NULL);
    __assume(Config->EvtControllerGetCurrentFrameNumber == NULL);
    __assume(Config->EvtControllerUsbDeviceAdd == NULL);
    __assume(Config->EvtControllerReset == NULL);
    __assume(Config->Reserved1 == NULL);
    __assume(Config->Reserved2 == NULL);
    __assume(Config->Reserved3 == NULL);
    __assume(Config->Reserved4 == NULL);
}

VOID
FORCEINLINE
UCX_CONTROLLER_CONFIG_SET_PCI_INFO(
    __in
        PUCX_CONTROLLER_CONFIG  Config,
    __in
        ULONG                   VendorId,
    __in
        ULONG                   DeviceId,
    __in
        USHORT                  RevisionId,
    __in
        ULONG                   BusNumber,
    __in
        ULONG                   DeviceNumber,
    __in
        ULONG                   FunctionNumber
    )
{
    Config->ParentBusType = UcxControllerParentBusTypePci;

    Config->PciDeviceInfo.VendorId          = VendorId;
    Config->PciDeviceInfo.DeviceId          = DeviceId;
    Config->PciDeviceInfo.RevisionId        = RevisionId;
    Config->PciDeviceInfo.BusNumber         = BusNumber;
    Config->PciDeviceInfo.DeviceNumber      = DeviceNumber;
    Config->PciDeviceInfo.FunctionNumber    = FunctionNumber;
}

VOID
FORCEINLINE
UCX_CONTROLLER_CONFIG_SET_ACPI_INFO(
    __in
        PUCX_CONTROLLER_CONFIG  Config,
    __in_ecount(MAX_VENDOR_ID_STRING_LENGTH)
        PSTR                    VendorId,
    __in_ecount(MAX_DEVICE_ID_STRING_LENGTH)
        PSTR                    DeviceId,
    __in_ecount(MAX_REVISION_ID_STRING_LENGTH)
        PSTR                    RevisionId
    )
{
    Config->ParentBusType = UcxControllerParentBusTypeAcpi;

    RtlStringCchCopyA(Config->AcpiDeviceInfo.VendorId, MAX_VENDOR_ID_STRING_LENGTH, VendorId);
    RtlStringCchCopyA(Config->AcpiDeviceInfo.DeviceId, MAX_DEVICE_ID_STRING_LENGTH, DeviceId);
    RtlStringCchCopyA(Config->AcpiDeviceInfo.RevisionId, MAX_REVISION_ID_STRING_LENGTH, RevisionId);
}

_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
__drv_at(Config->Size, __range(!=,0))
__drv_at(Config->EvtControllerUsbDeviceAdd, __notnull)
NTSTATUS
FORCEINLINE
UcxControllerCreate(
    __in 
        WDFDEVICE                  Device,
    __in 
        PUCX_CONTROLLER_CONFIG     Config,
    __in_opt 
        PWDF_OBJECT_ATTRIBUTES     Attributes,
    __out 
        UCXCONTROLLER             *Controller
    )
{
    return(((PFN_UCX_CONTROLLER_CREATE) UcxClassFunctions[UcxControllerCreateIndex])(UcxGlobals,
                                                                                     Device,
                                                                                     Config,
                                                                                     Attributes,
                                                                                     Controller));
}

//
// UcxControllerNeedsReset
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
(*PFN_UCX_CONTROLLER_NEEDS_RESET)(
    __in 
        PUCX_GLOBALS               Globals,
    __in 
        UCXCONTROLLER              Controller
    );

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxControllerNeedsReset(
    __in 
        UCXCONTROLLER              Controller
    )
{
    (((PFN_UCX_CONTROLLER_NEEDS_RESET) UcxClassFunctions[UcxControllerNeedsResetIndex])(
        UcxGlobals,
        Controller));
}

//
// UcxControllerResetComplete
//

typedef enum {
    UcxControllerStateLost,
    UcxControllerStatePreserved
} UCX_CONTROLLER_STATE;

typedef struct _UCX_CONTROLLER_RESET_COMPLETE_INFO {    
    ULONG                 Size;
    UCX_CONTROLLER_STATE  UcxControllerState;        
    BOOLEAN               UcxCoordinated;
} UCX_CONTROLLER_RESET_COMPLETE_INFO, *PUCX_CONTROLLER_RESET_COMPLETE_INFO;

FORCEINLINE
VOID
UCX_CONTROLLER_RESET_COMPLETE_INFO_INIT(
    __out
        PUCX_CONTROLLER_RESET_COMPLETE_INFO UcxControllerResetCompleteInfo,
    __in
        UCX_CONTROLLER_STATE                UcxControllerState,
    __in
        BOOLEAN                             UcxCoordinated

    )
{
    RtlZeroMemory(UcxControllerResetCompleteInfo, sizeof(UCX_CONTROLLER_RESET_COMPLETE_INFO));
    UcxControllerResetCompleteInfo->Size = sizeof(UCX_CONTROLLER_RESET_COMPLETE_INFO);
    UcxControllerResetCompleteInfo->UcxControllerState = UcxControllerState;
    UcxControllerResetCompleteInfo->UcxCoordinated = UcxCoordinated;
}

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
(*PFN_UCX_CONTROLLER_RESET_COMPLETE)(
    __in 
        PUCX_GLOBALS                        Globals,
    __in 
        UCXCONTROLLER                       Controller,
    __in
        PUCX_CONTROLLER_RESET_COMPLETE_INFO UcxControllerResetCompleteInfo
    );

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxControllerResetComplete(
    __in 
        UCXCONTROLLER                       Controller,
    __in
        PUCX_CONTROLLER_RESET_COMPLETE_INFO UcxControllerResetCompleteInfo
    )
{
    (((PFN_UCX_CONTROLLER_RESET_COMPLETE) UcxClassFunctions[UcxControllerResetCompleteIndex])(
        UcxGlobals,
        Controller,
        UcxControllerResetCompleteInfo));
}

//
// UcxControllerSetFailed
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
(*PFN_UCX_CONTROLLER_SET_FAILED)(
    __in
        PUCX_GLOBALS                        Globals,
    __in
        UCXCONTROLLER                       Controller
    );

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxControllerSetFailed(
    __in
        UCXCONTROLLER                       Controller
    )
{
    (((PFN_UCX_CONTROLLER_SET_FAILED) UcxClassFunctions[UcxControllerSetFailedIndex])(
        UcxGlobals,
        Controller));
}

/*-------------------Structures for UCXROOTHUB creation ----------------------*/

typedef
__drv_functionClass(EVT_UCX_ROOTHUB_INTERRUPT_TX)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ROOTHUB_INTERRUPT_TX (
    __in 
        UCXROOTHUB                   UcxRootHub,
    __in 
        WDFREQUEST                   Request
    );

typedef EVT_UCX_ROOTHUB_INTERRUPT_TX *PEVT_UCX_ROOTHUB_INTERRUPT_TX;

typedef
__drv_functionClass(EVT_UCX_ROOTHUB_CONTROL_URB)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ROOTHUB_CONTROL_URB (
    __in 
        UCXROOTHUB,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_ROOTHUB_CONTROL_URB *PEVT_UCX_ROOTHUB_CONTROL_URB;

typedef
__drv_functionClass(EVT_UCX_ROOTHUB_GET_INFO)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ROOTHUB_GET_INFO (
    __in 
        UCXROOTHUB,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_ROOTHUB_GET_INFO *PEVT_UCX_ROOTHUB_GET_INFO;

typedef
__drv_functionClass(EVT_UCX_ROOTHUB_GET_20PORT_INFO)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ROOTHUB_GET_20PORT_INFO (
    __in 
        UCXROOTHUB,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_ROOTHUB_GET_20PORT_INFO *PEVT_UCX_ROOTHUB_GET_20PORT_INFO;

typedef
__drv_functionClass(EVT_UCX_ROOTHUB_GET_30PORT_INFO)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ROOTHUB_GET_30PORT_INFO (
    __in 
        UCXROOTHUB,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_ROOTHUB_GET_30PORT_INFO *PEVT_UCX_ROOTHUB_GET_30PORT_INFO;

typedef struct _UCX_ROOTHUB_CONFIG {
    //
    // Size in bytes of this structure
    //
    ULONG                                       Size;
    ULONG                                       NumberOfPresentedControlUrbCallbacks;
    PEVT_UCX_ROOTHUB_CONTROL_URB                EvtRootHubClearHubFeature;
    PEVT_UCX_ROOTHUB_CONTROL_URB                EvtRootHubClearPortFeature;
    PEVT_UCX_ROOTHUB_CONTROL_URB                EvtRootHubGetHubStatus;
    PEVT_UCX_ROOTHUB_CONTROL_URB                EvtRootHubGetPortStatus;
    PEVT_UCX_ROOTHUB_CONTROL_URB                EvtRootHubSetHubFeature;
    PEVT_UCX_ROOTHUB_CONTROL_URB                EvtRootHubSetPortFeature;
    PEVT_UCX_ROOTHUB_CONTROL_URB                EvtRootHubGetPortErrorCount;
    PEVT_UCX_ROOTHUB_CONTROL_URB                EvtRootHubControlUrb;
    PEVT_UCX_ROOTHUB_INTERRUPT_TX               EvtRootHubInterruptTx;
    PEVT_UCX_ROOTHUB_GET_INFO                   EvtRootHubGetInfo;
    PEVT_UCX_ROOTHUB_GET_20PORT_INFO            EvtRootHubGet20PortInfo;
    PEVT_UCX_ROOTHUB_GET_30PORT_INFO            EvtRootHubGet30PortInfo;
    WDF_OBJECT_ATTRIBUTES                       WdfRequestAttributes;

} UCX_ROOTHUB_CONFIG, *PUCX_ROOTHUB_CONFIG;


//
// UcxRootHubCreate
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
(*PFN_UCX_ROOTHUB_CREATE)(
    __in 
        PUCX_GLOBALS,
    __in 
        UCXCONTROLLER,
    __in 
        PUCX_ROOTHUB_CONFIG,
    __in_opt 
        PWDF_OBJECT_ATTRIBUTES,
    __out 
        UCXROOTHUB*
    );

__drv_at(Config->Size, __drv_out (__range(!=,0)))
__drv_at(Config->EvtRootHubControlUrb, __drv_out  (__notnull))
__drv_at(Config->EvtRootHubClearHubFeature, __drv_out (__null))
__drv_at(Config->EvtRootHubClearPortFeature, __drv_out (__null))
__drv_at(Config->EvtRootHubGetHubStatus, __drv_out (__null))
__drv_at(Config->EvtRootHubGetPortStatus, __drv_out (__null))
__drv_at(Config->EvtRootHubSetHubFeature, __drv_out (__null))
__drv_at(Config->EvtRootHubSetPortFeature, __drv_out (__null))
__drv_at(Config->EvtRootHubGetPortErrorCount, __drv_out (__null))
__drv_at(Config->EvtRootHubInterruptTx, __drv_out (__notnull))
__drv_at(Config->EvtRootHubGetInfo, __drv_out (__notnull))
__drv_at(Config->EvtRootHubGet20PortInfo, __drv_out (__notnull))
__drv_at(Config->EvtRootHubGet30PortInfo, __drv_out (__notnull))
VOID
FORCEINLINE
UCX_ROOTHUB_CONFIG_INIT_WITH_CONTROL_URB_HANDLER(
    __out 
        PUCX_ROOTHUB_CONFIG                  Config,
    __in 
        PEVT_UCX_ROOTHUB_CONTROL_URB         EvtRootHubControlUrb,
    __in 
        PEVT_UCX_ROOTHUB_INTERRUPT_TX        EvtRootHubInterruptTx,
    __in 
        PEVT_UCX_ROOTHUB_GET_INFO            EvtRootHubGetInfo,
    __in 
        PEVT_UCX_ROOTHUB_GET_20PORT_INFO     EvtRootHubGet20PortInfo,
    __in 
        PEVT_UCX_ROOTHUB_GET_30PORT_INFO     EvtRootHubGet30PortInfo
    )
{
    RtlZeroMemory(Config, sizeof(UCX_ROOTHUB_CONFIG));
    Config->Size = sizeof(UCX_ROOTHUB_CONFIG);
    Config->NumberOfPresentedControlUrbCallbacks = 1;
    Config->EvtRootHubControlUrb = EvtRootHubControlUrb;
    Config->EvtRootHubInterruptTx = EvtRootHubInterruptTx;
    Config->EvtRootHubGetInfo = EvtRootHubGetInfo;
    Config->EvtRootHubGet20PortInfo = EvtRootHubGet20PortInfo;
    Config->EvtRootHubGet30PortInfo = EvtRootHubGet30PortInfo;

    WDF_OBJECT_ATTRIBUTES_INIT(&Config->WdfRequestAttributes);

    __assume(Config->EvtRootHubClearHubFeature == NULL);
    __assume(Config->EvtRootHubClearPortFeature == NULL);
    __assume(Config->EvtRootHubGetHubStatus == NULL);
    __assume(Config->EvtRootHubGetPortStatus == NULL);
    __assume(Config->EvtRootHubSetHubFeature == NULL);
    __assume(Config->EvtRootHubSetPortFeature == NULL);
    __assume(Config->EvtRootHubGetPortErrorCount == NULL);
}

__drv_at(Config->Size, __drv_out (__range(!=,0)))
__drv_at(Config->EvtRootHubControlUrb, __drv_out  (__null))
__drv_at(Config->EvtRootHubClearHubFeature, __drv_out (__notnull))
__drv_at(Config->EvtRootHubClearPortFeature, __drv_out (__notnull))
__drv_at(Config->EvtRootHubGetHubStatus, __drv_out (__notnull))
__drv_at(Config->EvtRootHubGetPortStatus, __drv_out (__notnull))
__drv_at(Config->EvtRootHubSetHubFeature, __drv_out (__notnull))
__drv_at(Config->EvtRootHubSetPortFeature, __drv_out (__notnull))
__drv_at(Config->EvtRootHubGetPortErrorCount, __drv_out (__notnull))
__drv_at(Config->EvtRootHubInterruptTx, __drv_out (__notnull))
__drv_at(Config->EvtRootHubGetInfo, __drv_out (__notnull))
__drv_at(Config->EvtRootHubGet20PortInfo, __drv_out (__notnull))
__drv_at(Config->EvtRootHubGet30PortInfo, __drv_out (__notnull))
VOID
FORCEINLINE
UCX_ROOTHUB_CONFIG_INIT(
    __out 
        PUCX_ROOTHUB_CONFIG              Config,
    __in 
        PEVT_UCX_ROOTHUB_CONTROL_URB     EvtRootHubClearHubFeature,
    __in 
        PEVT_UCX_ROOTHUB_CONTROL_URB     EvtRootHubClearPortFeature,
    __in 
        PEVT_UCX_ROOTHUB_CONTROL_URB     EvtRootHubGetHubStatus,
    __in 
        PEVT_UCX_ROOTHUB_CONTROL_URB     EvtRootHubGetPortStatus,
    __in 
        PEVT_UCX_ROOTHUB_CONTROL_URB     EvtRootHubSetHubFeature,
    __in 
        PEVT_UCX_ROOTHUB_CONTROL_URB     EvtRootHubSetPortFeature,
    __in 
        PEVT_UCX_ROOTHUB_CONTROL_URB     EvtRootHubGetPortErrorCount,
    __in 
        PEVT_UCX_ROOTHUB_INTERRUPT_TX    EvtRootHubInterruptTx,
    __in 
        PEVT_UCX_ROOTHUB_GET_INFO        EvtRootHubGetInfo,
    __in 
        PEVT_UCX_ROOTHUB_GET_20PORT_INFO EvtRootHubGet20PortInfo,
    __in 
        PEVT_UCX_ROOTHUB_GET_30PORT_INFO EvtRootHubGet30PortInfo
    )
{
    RtlZeroMemory(Config, sizeof(UCX_ROOTHUB_CONFIG));
    Config->Size = sizeof(UCX_ROOTHUB_CONFIG);
    Config->NumberOfPresentedControlUrbCallbacks = 1;
    Config->EvtRootHubClearHubFeature = EvtRootHubClearHubFeature;
    Config->EvtRootHubClearPortFeature = EvtRootHubClearPortFeature;
    Config->EvtRootHubGetHubStatus = EvtRootHubGetHubStatus;
    Config->EvtRootHubGetPortStatus = EvtRootHubGetPortStatus;
    Config->EvtRootHubSetHubFeature = EvtRootHubSetHubFeature;
    Config->EvtRootHubSetPortFeature = EvtRootHubSetPortFeature;
    Config->EvtRootHubGetPortErrorCount = EvtRootHubGetPortErrorCount;
    Config->EvtRootHubInterruptTx = EvtRootHubInterruptTx;
    Config->EvtRootHubGetInfo = EvtRootHubGetInfo;
    Config->EvtRootHubGet20PortInfo = EvtRootHubGet20PortInfo;
    Config->EvtRootHubGet30PortInfo = EvtRootHubGet30PortInfo;

    WDF_OBJECT_ATTRIBUTES_INIT(&Config->WdfRequestAttributes);

    __assume(Config->EvtRootHubControlUrb == NULL);
}

_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
__drv_at(Config->Size, __range(!=,0))
__drv_when(NULL == Config->EvtRootHubControlUrb,
    __drv_at(Config->EvtRootHubClearHubFeature, __notnull)
    __drv_at(Config->EvtRootHubClearPortFeature, __notnull)
    __drv_at(Config->EvtRootHubGetHubStatus, __notnull)
    __drv_at(Config->EvtRootHubGetPortStatus, __notnull)
    __drv_at(Config->EvtRootHubSetHubFeature, __notnull)
    __drv_at(Config->EvtRootHubSetPortFeature, __notnull)
    __drv_at(Config->EvtRootHubGetPortErrorCount, __notnull)
)
__drv_at(Config->EvtRootHubInterruptTx, __notnull)
__drv_at(Config->EvtRootHubGetInfo, __notnull)
__drv_at(Config->EvtRootHubGet20PortInfo, __notnull)
__drv_at(Config->EvtRootHubGet30PortInfo, __notnull)
NTSTATUS
FORCEINLINE
UcxRootHubCreate(
    __in 
        UCXCONTROLLER              Controller,
    __in 
        PUCX_ROOTHUB_CONFIG        Config,
    __in_opt 
        PWDF_OBJECT_ATTRIBUTES     Attributes,
    __out 
        UCXROOTHUB                *RootHub
    )
{
    return(((PFN_UCX_ROOTHUB_CREATE)UcxClassFunctions[UcxRootHubCreateIndex])(UcxGlobals,
                                                                              Controller,
                                                                              Config,
                                                                              Attributes,
                                                                              RootHub));
}

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
(*PFN_UCX_ROOTHUB_PORT_CHANGED)(
    __in_opt 
        PUCX_GLOBALS,
    __in 
        UCXROOTHUB
    );

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxRootHubPortChanged(
    __in 
        UCXROOTHUB                 UcxRootHub
    )
{
    (((PFN_UCX_ROOTHUB_PORT_CHANGED)UcxClassFunctions[UcxRootHubPortChangedIndex])(UcxGlobals,
                                                                                   UcxRootHub));
}

/*-------------------Structures for UCXUSBDEVICE creation---------------------*/

typedef
__drv_functionClass(EVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE (
    __in 
        UCXCONTROLLER,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE *PEVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE;

typedef
__drv_functionClass(EVT_UCX_USBDEVICE_ENABLE)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_ENABLE (
    __in 
        UCXCONTROLLER,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_USBDEVICE_ENABLE *PEVT_UCX_USBDEVICE_ENABLE;

typedef
__drv_functionClass(EVT_UCX_USBDEVICE_DISABLE)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_DISABLE (
    __in 
        UCXCONTROLLER,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_USBDEVICE_DISABLE *PEVT_UCX_USBDEVICE_DISABLE;

typedef
__drv_functionClass(EVT_UCX_USBDEVICE_RESET)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_RESET (
    __in 
        UCXCONTROLLER,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_USBDEVICE_RESET *PEVT_UCX_USBDEVICE_RESET;

typedef
__drv_functionClass(EVT_UCX_USBDEVICE_ADDRESS)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_ADDRESS (
    __in 
        UCXCONTROLLER,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_USBDEVICE_ADDRESS *PEVT_UCX_USBDEVICE_ADDRESS;

typedef
__drv_functionClass(EVT_UCX_USBDEVICE_UPDATE)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_UPDATE (
    __in 
        UCXCONTROLLER,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_USBDEVICE_UPDATE *PEVT_UCX_USBDEVICE_UPDATE;

typedef
__drv_functionClass(EVT_UCX_USBDEVICE_HUB_INFO)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_USBDEVICE_HUB_INFO (
    __in 
        UCXCONTROLLER,
    __in 
        WDFREQUEST
    );

typedef EVT_UCX_USBDEVICE_HUB_INFO *PEVT_UCX_USBDEVICE_HUB_INFO;

typedef
__drv_functionClass(EVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD)
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
EVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD (
    __in 
        UCXCONTROLLER,
    __in 
        UCXUSBDEVICE,
    __in 
        ULONG,
    __in 
        PUCXENDPOINT_INIT
    );

typedef EVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD *PEVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD;

typedef
__drv_functionClass(EVT_UCX_USBDEVICE_ENDPOINT_ADD)
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
EVT_UCX_USBDEVICE_ENDPOINT_ADD (
    __in 
        UCXCONTROLLER UcxController,
    __in 
        UCXUSBDEVICE  UcxUsbDevice,
    __in_bcount(UsbEndpointDescriptorBufferLength)
        PUSB_ENDPOINT_DESCRIPTOR UsbEndpointDescriptor,
    __in
        ULONG         UsbEndpointDescriptorBufferLength,
    __in_opt
        PUSB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR SuperSpeedEndpointCompanionDescriptor,
    __in
        PUCXENDPOINT_INIT UcxEndpointInit
    );

typedef EVT_UCX_USBDEVICE_ENDPOINT_ADD *PEVT_UCX_USBDEVICE_ENDPOINT_ADD;

typedef
__drv_functionClass(EVT_UCX_USBDEVICE_SUSPEND)
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
EVT_UCX_USBDEVICE_SUSPEND (
    __in 
        UCXCONTROLLER UcxController,
    __in 
        UCXUSBDEVICE  UcxUsbDevice
    );

typedef EVT_UCX_USBDEVICE_SUSPEND *PEVT_UCX_USBDEVICE_SUSPEND;
    
typedef
__drv_functionClass(EVT_UCX_USBDEVICE_RESUME)
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
EVT_UCX_USBDEVICE_RESUME (
    __in 
        UCXCONTROLLER UcxController,
    __in 
        UCXUSBDEVICE  UcxUsbDevice
    );

typedef EVT_UCX_USBDEVICE_RESUME *PEVT_UCX_USBDEVICE_RESUME;
    
typedef struct _UCX_USBDEVICE_EVENT_CALLBACKS {
    ULONG                                       Size;
    PEVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE      EvtUsbDeviceEndpointsConfigure;
    PEVT_UCX_USBDEVICE_ENABLE                   EvtUsbDeviceEnable;
    PEVT_UCX_USBDEVICE_DISABLE                  EvtUsbDeviceDisable;
    PEVT_UCX_USBDEVICE_RESET                    EvtUsbDeviceReset;
    PEVT_UCX_USBDEVICE_ADDRESS                  EvtUsbDeviceAddress;
    PEVT_UCX_USBDEVICE_UPDATE                   EvtUsbDeviceUpdate;
    PEVT_UCX_USBDEVICE_HUB_INFO                 EvtUsbDeviceHubInfo;
    PEVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD     EvtUsbDeviceDefaultEndpointAdd;
    PEVT_UCX_USBDEVICE_ENDPOINT_ADD             EvtUsbDeviceEndpointAdd;
} UCX_USBDEVICE_EVENT_CALLBACKS, *PUCX_USBDEVICE_EVENT_CALLBACKS;

#if _NT_TARGET_VERSION >= _NT_TARGET_VERSION_WIN10_TH2

//
// This structure is reserved.
//

typedef struct _UCX_USBDEVICE_EVENT_CALLBACKS_RESERVED {
    ULONG                                       Size;
    PEVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE      EvtUsbDeviceEndpointsConfigure;
    PEVT_UCX_USBDEVICE_ENABLE                   EvtUsbDeviceEnable;
    PEVT_UCX_USBDEVICE_DISABLE                  EvtUsbDeviceDisable;
    PEVT_UCX_USBDEVICE_RESET                    EvtUsbDeviceReset;
    PEVT_UCX_USBDEVICE_ADDRESS                  EvtUsbDeviceAddress;
    PEVT_UCX_USBDEVICE_UPDATE                   EvtUsbDeviceUpdate;
    PEVT_UCX_USBDEVICE_HUB_INFO                 EvtUsbDeviceHubInfo;
    PEVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD     EvtUsbDeviceDefaultEndpointAdd;
    PEVT_UCX_USBDEVICE_ENDPOINT_ADD             EvtUsbDeviceEndpointAdd;
    PEVT_UCX_USBDEVICE_SUSPEND                  EvtUsbDeviceSuspend;
    PEVT_UCX_USBDEVICE_RESUME                   EvtUsbDeviceResume;
} UCX_USBDEVICE_EVENT_CALLBACKS_RESERVED, *PUCX_USBDEVICE_EVENT_CALLBACKS_RESERVED;

#endif

VOID
FORCEINLINE
UCX_USBDEVICE_EVENT_CALLBACKS_INIT
(
    __out 
        PUCX_USBDEVICE_EVENT_CALLBACKS          Callbacks,
    __in 
        PEVT_UCX_USBDEVICE_ENDPOINTS_CONFIGURE  EvtUsbDeviceEndpointsConfigure,
    __in 
        PEVT_UCX_USBDEVICE_ENABLE               EvtUsbDeviceEnable,
    __in 
        PEVT_UCX_USBDEVICE_DISABLE              EvtUsbDeviceDisable,
    __in 
        PEVT_UCX_USBDEVICE_RESET                EvtUsbDeviceReset,
    __in 
        PEVT_UCX_USBDEVICE_ADDRESS              EvtUsbDeviceAddress,
    __in 
        PEVT_UCX_USBDEVICE_UPDATE               EvtUsbDeviceUpdate,
    __in 
        PEVT_UCX_USBDEVICE_HUB_INFO             EvtUsbDeviceHubInfo,
    __in 
        PEVT_UCX_USBDEVICE_DEFAULT_ENDPOINT_ADD EvtUsbDeviceDefaultEndpointAdd,
    __in 
        PEVT_UCX_USBDEVICE_ENDPOINT_ADD         EvtUsbDeviceEndpointAdd
    )
{
    RtlZeroMemory(Callbacks, sizeof(UCX_USBDEVICE_EVENT_CALLBACKS));
    Callbacks->Size = sizeof(UCX_USBDEVICE_EVENT_CALLBACKS);
    Callbacks->EvtUsbDeviceEndpointsConfigure = EvtUsbDeviceEndpointsConfigure;
    Callbacks->EvtUsbDeviceEnable = EvtUsbDeviceEnable;
    Callbacks->EvtUsbDeviceDisable = EvtUsbDeviceDisable;
    Callbacks->EvtUsbDeviceReset = EvtUsbDeviceReset;
    Callbacks->EvtUsbDeviceAddress = EvtUsbDeviceAddress;
    Callbacks->EvtUsbDeviceUpdate = EvtUsbDeviceUpdate;
    Callbacks->EvtUsbDeviceHubInfo = EvtUsbDeviceHubInfo;
    Callbacks->EvtUsbDeviceDefaultEndpointAdd = EvtUsbDeviceDefaultEndpointAdd;
    Callbacks->EvtUsbDeviceEndpointAdd = EvtUsbDeviceEndpointAdd;
}

typedef
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(*PFN_UCX_USBDEVICE_CREATE)(
    __in 
        PUCX_GLOBALS,
    __in 
        UCXCONTROLLER,
    __deref_inout 
        PUCXUSBDEVICE_INIT*,
    __in_opt 
        PWDF_OBJECT_ATTRIBUTES,
    __out 
        UCXUSBDEVICE*
    );

typedef
VOID
(*PFN_UCX_USBDEVICE_INIT_SET_EVENT_CALLBACKS)(
    __in 
        PUCX_GLOBALS,
    __in 
        PUCXUSBDEVICE_INIT,
    __in 
        PUCX_USBDEVICE_EVENT_CALLBACKS
    );

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
(*PFN_UCX_USBDEVICE_REMOTE_WAKE_NOTIFICATION)(
    __in 
        PUCX_GLOBALS,
    __in 
        UCXUSBDEVICE,
    __in 
        ULONG
    );

VOID
FORCEINLINE
UcxUsbDeviceInitSetEventCallbacks(
    __inout 
        PUCXUSBDEVICE_INIT             UsbDeviceInit,
    __in 
        PUCX_USBDEVICE_EVENT_CALLBACKS EventCallbacks
    )
{
    (((PFN_UCX_USBDEVICE_INIT_SET_EVENT_CALLBACKS)
      UcxClassFunctions[UcxUsbDeviceInitSetEventCallbacksIndex])(UcxGlobals,
                                                                 UsbDeviceInit,
                                                                 EventCallbacks));
}


_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcxUsbDeviceCreate(
    __in 
        UCXCONTROLLER              Controller,
    __deref_inout 
        PUCXUSBDEVICE_INIT        *UsbDeviceInit,
    __in_opt 
        PWDF_OBJECT_ATTRIBUTES     Attributes,
    __out 
        UCXUSBDEVICE              *UsbDevice
    )
{
    return(((PFN_UCX_USBDEVICE_CREATE)UcxClassFunctions[UcxUsbDeviceCreateIndex])(UcxGlobals,
                                                                                  Controller,
                                                                                  UsbDeviceInit,
                                                                                  Attributes,
                                                                                  UsbDevice));
}

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxUsbDeviceRemoteWakeNotification(
    __in 
        UCXUSBDEVICE               UsbDevice,
    __in
        ULONG                      Interface
    )
{
    (((PFN_UCX_USBDEVICE_REMOTE_WAKE_NOTIFICATION)
      UcxClassFunctions[UcxUsbDeviceRemoteWakeNotificationIndex])(UcxGlobals,
                                                                  UsbDevice, 
                                                                  Interface));
}

/*-------------------Structures for UCXENDPOINT creation----------------------*/

typedef
__drv_functionClass(EVT_UCX_ENDPOINT_RESET)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_RESET (
    __in 
        UCXCONTROLLER,
    __in 
        UCXENDPOINT,
    __in
        WDFREQUEST
    );

typedef EVT_UCX_ENDPOINT_RESET *PEVT_UCX_ENDPOINT_RESET;

typedef
__drv_functionClass(EVT_UCX_ENDPOINT_PURGE)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_PURGE (
    __in
        UCXCONTROLLER,
    __in
        UCXENDPOINT
    );

typedef EVT_UCX_ENDPOINT_PURGE *PEVT_UCX_ENDPOINT_PURGE;

typedef
__drv_functionClass(EVT_UCX_ENDPOINT_START)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_START (
    __in
        UCXCONTROLLER,
    __in
        UCXENDPOINT
    );

typedef EVT_UCX_ENDPOINT_START *PEVT_UCX_ENDPOINT_START;

typedef
__drv_functionClass(EVT_UCX_ENDPOINT_ABORT)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_ABORT (
    __in
        UCXCONTROLLER,
    __in
        UCXENDPOINT
    );

typedef EVT_UCX_ENDPOINT_ABORT *PEVT_UCX_ENDPOINT_ABORT;

typedef
__drv_functionClass(EVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS (
    __in
        UCXENDPOINT
    );

typedef EVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS *PEVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS;

typedef
__drv_functionClass(EVT_UCX_ENDPOINT_STATIC_STREAMS_ADD)
__drv_requiresIRQL(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
EVT_UCX_ENDPOINT_STATIC_STREAMS_ADD (
    __in
        UCXENDPOINT,
    __in
        ULONG,
    __in
        PUCXSSTREAMS_INIT
    );

typedef EVT_UCX_ENDPOINT_STATIC_STREAMS_ADD *PEVT_UCX_ENDPOINT_STATIC_STREAMS_ADD;

typedef
__drv_functionClass(EVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE (
    __in
        UCXENDPOINT,
    __in
        UCXSSTREAMS,
    __in
        WDFREQUEST
    );

typedef EVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE *PEVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE;

typedef
__drv_functionClass(EVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE (
    __in
        UCXENDPOINT,
    __in
        UCXSSTREAMS,
    __in
        WDFREQUEST
    );

typedef EVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE *PEVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE;


typedef
__drv_functionClass(EVT_UCX_DEFAULT_ENDPOINT_UPDATE)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UCX_DEFAULT_ENDPOINT_UPDATE (
    __in
        UCXCONTROLLER,
    __in
        WDFREQUEST
    );

typedef EVT_UCX_DEFAULT_ENDPOINT_UPDATE *PEVT_UCX_DEFAULT_ENDPOINT_UPDATE;


typedef struct _UCX_ENDPOINT_EVENT_CALLBACKS {
    ULONG                                       Size;
    PEVT_UCX_ENDPOINT_PURGE                     EvtEndpointPurge;
    PEVT_UCX_ENDPOINT_START                     EvtEndpointStart;
    PEVT_UCX_ENDPOINT_ABORT                     EvtEndpointAbort;
    PEVT_UCX_ENDPOINT_RESET                     EvtEndpointReset;
    PEVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS    EvtEndpointOkToCancelTransfers;
    PEVT_UCX_ENDPOINT_STATIC_STREAMS_ADD        EvtEndpointStaticStreamsAdd;
    PEVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE     EvtEndpointStaticStreamsEnable;
    PEVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE    EvtEndpointStaticStreamsDisable;
    HANDLE                                      Reserved1;
} UCX_ENDPOINT_EVENT_CALLBACKS, *PUCX_ENDPOINT_EVENT_CALLBACKS;

VOID
FORCEINLINE
UCX_ENDPOINT_EVENT_CALLBACKS_INIT
(
    __out
        PUCX_ENDPOINT_EVENT_CALLBACKS               Callbacks,
    __in
        PEVT_UCX_ENDPOINT_PURGE                     EvtEndpointPurge,
    __in
        PEVT_UCX_ENDPOINT_START                     EvtEndpointStart,
    __in
        PEVT_UCX_ENDPOINT_ABORT                     EvtEndpointAbort,
    __in
        PEVT_UCX_ENDPOINT_RESET                     EvtEndpointReset,
    __in
        PEVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS    EvtEndpointOkToCancelTransfers,
    __in
        PEVT_UCX_ENDPOINT_STATIC_STREAMS_ADD        EvtEndpointStaticStreamsAdd,
    __in
        PEVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE     EvtEndpointStaticStreamsEnable,
    __in
        PEVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE    EvtEndpointStaticStreamsDisable
)
{
    RtlZeroMemory(Callbacks, sizeof(UCX_ENDPOINT_EVENT_CALLBACKS));
    Callbacks->Size = sizeof(UCX_ENDPOINT_EVENT_CALLBACKS);
    Callbacks->EvtEndpointPurge = EvtEndpointPurge;
    Callbacks->EvtEndpointStart = EvtEndpointStart;
    Callbacks->EvtEndpointAbort = EvtEndpointAbort;
    Callbacks->EvtEndpointReset = EvtEndpointReset;
    Callbacks->EvtEndpointOkToCancelTransfers = EvtEndpointOkToCancelTransfers;
    Callbacks->EvtEndpointStaticStreamsAdd = EvtEndpointStaticStreamsAdd;
    Callbacks->EvtEndpointStaticStreamsEnable = EvtEndpointStaticStreamsEnable;
    Callbacks->EvtEndpointStaticStreamsDisable = EvtEndpointStaticStreamsDisable;
}

typedef struct _UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS {
    ULONG                                       Size;
    PEVT_UCX_ENDPOINT_PURGE                     EvtEndpointPurge;
    PEVT_UCX_ENDPOINT_START                     EvtEndpointStart;
    PEVT_UCX_ENDPOINT_ABORT                     EvtEndpointAbort;
    PEVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS    EvtEndpointOkToCancelTransfers;
    PEVT_UCX_DEFAULT_ENDPOINT_UPDATE            EvtDefaultEndpointUpdate;
    HANDLE                                      Reserved1;
} UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS, *PUCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS;


VOID
FORCEINLINE
UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS_INIT
(
    __out
        PUCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS       Callbacks,
    __in
        PEVT_UCX_ENDPOINT_PURGE                     EvtEndpointPurge,
    __in
        PEVT_UCX_ENDPOINT_START                     EvtEndpointStart,
    __in
        PEVT_UCX_ENDPOINT_ABORT                     EvtEndpointAbort,
    __in
        PEVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS    EvtEndpointOkToCancelTransfers,
    __in
        PEVT_UCX_DEFAULT_ENDPOINT_UPDATE            EvtDefaultEndpointUpdate
    )
{
    RtlZeroMemory(Callbacks, sizeof(UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS));
    Callbacks->Size = sizeof(UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS);
    Callbacks->EvtEndpointPurge = EvtEndpointPurge;
    Callbacks->EvtEndpointStart = EvtEndpointStart;
    Callbacks->EvtEndpointAbort = EvtEndpointAbort;
    Callbacks->EvtEndpointOkToCancelTransfers = EvtEndpointOkToCancelTransfers;
    Callbacks->EvtDefaultEndpointUpdate = EvtDefaultEndpointUpdate;
}

typedef
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(*PFN_UCX_ENDPOINT_CREATE)(
    __in 
        PUCX_GLOBALS,
    __in 
        UCXUSBDEVICE,
    __deref_inout_opt
        PUCXENDPOINT_INIT*,
    __in_opt
        PWDF_OBJECT_ATTRIBUTES,
    __out
        UCXENDPOINT*
    );

typedef
_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
UCXSSTREAMS
(*PFN_UCX_ENDPOINT_GET_STATIC_STREAMS_REFERENCED)(
    __in 
        PUCX_GLOBALS,
    __in 
        UCXENDPOINT,
    __in
        PVOID
    );

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
(*PFN_UCX_ENDPOINT_PURGE_COMPLETE)(
    __in
        PUCX_GLOBALS,
    __in
        UCXENDPOINT
    );

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
(*PFN_UCX_ENDPOINT_ABORT_COMPLETE)(
    __in
        PUCX_GLOBALS,
    __in
        UCXENDPOINT
    );


typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
(*PFN_UCX_ENDPOINT_NO_PING_RESPONSE_ERROR)(
    __in
        PUCX_GLOBALS,
    __in
        UCXENDPOINT
    );


typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
(*PFN_UCX_ENDPOINT_NEED_TO_CANCEL_TRANSFERS)(
    __in 
        PUCX_GLOBALS,
    __in 
        UCXENDPOINT
    );

typedef
VOID
(*PFN_UCX_ENDPOINT_INIT_SET_EVENT_CALLBACKS)(
    __in
        PUCX_GLOBALS,
    __inout
        PUCXENDPOINT_INIT,
    __in
        PUCX_ENDPOINT_EVENT_CALLBACKS
    );

typedef
VOID
(*PFN_UCX_DEFAULT_ENDPOINT_INIT_SET_EVENT_CALLBACKS)(
    __in
        PUCX_GLOBALS,
    __inout
        PUCXENDPOINT_INIT,
    __in
        PUCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS
    );

typedef
VOID
(*PFN_UCX_ENDPOINT_SET_WDFQUEUE)(
    __in
        PUCX_GLOBALS,
    __in
        UCXENDPOINT,
    __in
        WDFQUEUE
    );


VOID
FORCEINLINE
UcxEndpointInitSetEventCallbacks(
    __inout 
        PUCXENDPOINT_INIT             EndpointInit,
    __in
        PUCX_ENDPOINT_EVENT_CALLBACKS EventCallbacks
    )
{
    (((PFN_UCX_ENDPOINT_INIT_SET_EVENT_CALLBACKS)
      UcxClassFunctions[UcxEndpointInitSetEventCallbacksIndex])(UcxGlobals,
                                                                EndpointInit,
                                                                EventCallbacks));
}

VOID
FORCEINLINE
UcxDefaultEndpointInitSetEventCallbacks(
    __inout 
        PUCXENDPOINT_INIT                       EndpointInit,
    __in 
        PUCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS   EventCallbacks
    )
{
    (((PFN_UCX_DEFAULT_ENDPOINT_INIT_SET_EVENT_CALLBACKS)
      UcxClassFunctions[UcxDefaultEndpointInitSetEventCallbacksIndex])(UcxGlobals,
                                                                       EndpointInit,
                                                                       EventCallbacks));
}   

VOID
FORCEINLINE
UcxEndpointSetWdfIoQueue(
    __in 
        UCXENDPOINT             Endpoint,
    __in 
        WDFQUEUE                WdfQueue
    )
{
    (((PFN_UCX_ENDPOINT_SET_WDFQUEUE)
      UcxClassFunctions[UcxEndpointSetWdfIoQueueIndex])(UcxGlobals,
                                                        Endpoint,
                                                        WdfQueue));
}       


_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcxEndpointCreate(
    __in 
        UCXUSBDEVICE               UsbDevice,
    __deref_inout_opt 
        PUCXENDPOINT_INIT         *EndpointInit,
    __in_opt 
        PWDF_OBJECT_ATTRIBUTES     Attributes,
    __out 
        UCXENDPOINT               *Endpoint
    )
{
    return(((PFN_UCX_ENDPOINT_CREATE)UcxClassFunctions[UcxEndpointCreateIndex])(UcxGlobals,
                                                                                UsbDevice,
                                                                                EndpointInit,
                                                                                Attributes,
                                                                                Endpoint));
}

_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
UCXSSTREAMS
FORCEINLINE
UcxEndpointGetStaticStreamsReferenced(
    __in
        UCXENDPOINT                Endpoint,
    __in
        PVOID                      Tag
    )
{
    return(((PFN_UCX_ENDPOINT_GET_STATIC_STREAMS_REFERENCED)
            UcxClassFunctions[UcxEndpointGetStaticStreamsReferencedIndex])(UcxGlobals,
                                                                           Endpoint,
                                                                           Tag));
}   

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxEndpointPurgeComplete(
    __in 
        UCXENDPOINT                Endpoint
    )
{
    ((PFN_UCX_ENDPOINT_PURGE_COMPLETE)UcxClassFunctions[UcxEndpointPurgeCompleteIndex])(UcxGlobals,
                                                                                        Endpoint);
}

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxEndpointAbortComplete(
    __in 
        UCXENDPOINT                Endpoint
    )
{
    ((PFN_UCX_ENDPOINT_ABORT_COMPLETE)UcxClassFunctions[UcxEndpointAbortCompleteIndex])(UcxGlobals,
                                                                                        Endpoint);
}

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxEndpointNoPingResponseError(
    __in 
        UCXENDPOINT                Endpoint
    )
{
    ((PFN_UCX_ENDPOINT_NO_PING_RESPONSE_ERROR)
     UcxClassFunctions[UcxEndpointNoPingResponseErrorIndex])(UcxGlobals,
                                                             Endpoint);
}

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UcxEndpointNeedToCancelTransfers(
    __in 
        UCXENDPOINT                Endpoint
    )
{
    (((PFN_UCX_ENDPOINT_NEED_TO_CANCEL_TRANSFERS)
      UcxClassFunctions[UcxEndpointNeedToCancelTransfersIndex])(UcxGlobals,
                                                                Endpoint));
}

/*-------------------Structures for UCXSSTREAMS creation----------------------*/

typedef struct _STREAM_INFO {
    ULONG                   Size;
    WDFQUEUE                WdfQueue;
    ULONG                   StreamId;
} STREAM_INFO, *PSTREAM_INFO;


VOID
FORCEINLINE
STREAM_INFO_INIT(
    __out
        PSTREAM_INFO       StreamInfo,
    __in 
        WDFQUEUE           WdfQueue,
    __in 
        ULONG              StreamId
    )
{
    RtlZeroMemory(StreamInfo, sizeof(STREAM_INFO));
    StreamInfo->Size = sizeof(STREAM_INFO);
    StreamInfo->WdfQueue = WdfQueue;
    StreamInfo->StreamId = StreamId;
}

typedef
VOID
(*PFN_UCX_STATIC_STREAMS_SET_STREAM_INFO)(
    __in 
        PUCX_GLOBALS,
    __in
        UCXSSTREAMS,
    __in
        PSTREAM_INFO
    );

typedef
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(*PFN_UCX_STATIC_STREAMS_CREATE)(
    __in 
        PUCX_GLOBALS,
    __in
        UCXENDPOINT,
    __deref_inout_opt
        PUCXSSTREAMS_INIT*,
    __in_opt
        PWDF_OBJECT_ATTRIBUTES,
    __out
        UCXSSTREAMS*
    );

VOID 
FORCEINLINE
UcxStaticStreamsSetStreamInfo(
    __in
        UCXSSTREAMS                StaticStreams,
    __in
        PSTREAM_INFO               StreamInfo
    )
{
    ((PFN_UCX_STATIC_STREAMS_SET_STREAM_INFO)
     UcxClassFunctions[UcxStaticStreamsSetStreamInfoIndex])(UcxGlobals,
                                                            StaticStreams,
                                                            StreamInfo);
}   

_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UcxStaticStreamsCreate(
    __in
        UCXENDPOINT                Endpoint,
    __deref_inout_opt
        PUCXSSTREAMS_INIT         *StaticStreamsInit,
    __in_opt 
        PWDF_OBJECT_ATTRIBUTES     Attributes,
    __out 
        UCXSSTREAMS               *StaticStreams
    )
{
    return(((PFN_UCX_STATIC_STREAMS_CREATE)UcxClassFunctions[UcxStaticStreamsCreateIndex])
           (UcxGlobals,
            Endpoint,
            StaticStreamsInit,
            Attributes,
            StaticStreams));
}

#endif // if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#endif // __UCX_CLASS_H__


