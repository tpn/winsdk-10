/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    USBDLIB.H

Abstract:

   Services exported by USBD.

Environment:

    Kernel & user mode

Revision History:

    06-10-96 : created

--*/

#ifndef   __USBDLIB_H__
#define   __USBDLIB_H__

#pragma warning(push)
#pragma warning(disable:4214) // nonstandard extension used : bit field types other than int

#ifdef OSR21_COMPAT
#pragma message("WARNING: OSR21_COMPAT SWITCH NOT SUPPORTED")
#endif

typedef struct _USBD_INTERFACE_LIST_ENTRY {
    PUSB_INTERFACE_DESCRIPTOR InterfaceDescriptor;
    PUSBD_INTERFACE_INFORMATION Interface;
} USBD_INTERFACE_LIST_ENTRY, *PUSBD_INTERFACE_LIST_ENTRY;

//
// Macros for building URB requests
//

#define UsbBuildInterruptOrBulkTransferRequest(urb, \
                                               length, \
                                               pipeHandle, \
                                               transferBuffer, \
                                               transferBufferMDL, \
                                               transferBufferLength, \
                                               transferFlags, \
                                               link) { \
            (urb)->UrbHeader.Function = URB_FUNCTION_BULK_OR_INTERRUPT_TRANSFER; \
            (urb)->UrbHeader.Length = (length); \
            (urb)->UrbBulkOrInterruptTransfer.PipeHandle = (pipeHandle); \
            (urb)->UrbBulkOrInterruptTransfer.TransferBufferLength = (transferBufferLength); \
            (urb)->UrbBulkOrInterruptTransfer.TransferBufferMDL = (transferBufferMDL); \
            (urb)->UrbBulkOrInterruptTransfer.TransferBuffer = (transferBuffer); \
            (urb)->UrbBulkOrInterruptTransfer.TransferFlags = (transferFlags); \
            (urb)->UrbBulkOrInterruptTransfer.UrbLink = (link); }


#define UsbBuildGetDescriptorRequest(urb, \
                                     length, \
                                     descriptorType, \
                                     descriptorIndex, \
                                     languageId, \
                                     transferBuffer, \
                                     transferBufferMDL, \
                                     transferBufferLength, \
                                     link) { \
            (urb)->UrbHeader.Function =  URB_FUNCTION_GET_DESCRIPTOR_FROM_DEVICE; \
            (urb)->UrbHeader.Length = (length); \
            (urb)->UrbControlDescriptorRequest.TransferBufferLength = (transferBufferLength); \
            (urb)->UrbControlDescriptorRequest.TransferBufferMDL = (transferBufferMDL); \
            (urb)->UrbControlDescriptorRequest.TransferBuffer = (transferBuffer); \
            (urb)->UrbControlDescriptorRequest.DescriptorType = (descriptorType); \
            (urb)->UrbControlDescriptorRequest.Index = (descriptorIndex); \
            (urb)->UrbControlDescriptorRequest.LanguageId = (languageId); \
            (urb)->UrbControlDescriptorRequest.UrbLink = (link); }

#define UsbBuildGetStatusRequest(urb, \
                                 op, \
                                 index, \
                                 transferBuffer, \
                                 transferBufferMDL, \
                                 link) { \
            (urb)->UrbHeader.Function =  (op); \
            (urb)->UrbHeader.Length = sizeof(struct _URB_CONTROL_GET_STATUS_REQUEST); \
            (urb)->UrbControlGetStatusRequest.TransferBufferLength = sizeof(USHORT); \
            (urb)->UrbControlGetStatusRequest.TransferBufferMDL = (transferBufferMDL); \
            (urb)->UrbControlGetStatusRequest.TransferBuffer = (transferBuffer); \
            (urb)->UrbControlGetStatusRequest.Index = (index); \
            (urb)->UrbControlGetStatusRequest.UrbLink = (link); }

#define UsbBuildFeatureRequest(urb, \
                               op, \
                               featureSelector, \
                               index, \
                               link) { \
            (urb)->UrbHeader.Function =  (op); \
            (urb)->UrbHeader.Length = sizeof(struct _URB_CONTROL_FEATURE_REQUEST); \
            (urb)->UrbControlFeatureRequest.FeatureSelector = (featureSelector); \
            (urb)->UrbControlFeatureRequest.Index = (index); \
            (urb)->UrbControlFeatureRequest.UrbLink = (link); }

#define UsbBuildSelectConfigurationRequest(urb, \
                                         length, \
                                         configurationDescriptor) { \
            (urb)->UrbHeader.Function =  URB_FUNCTION_SELECT_CONFIGURATION; \
            (urb)->UrbHeader.Length = (length); \
            (urb)->UrbSelectConfiguration.ConfigurationDescriptor = (configurationDescriptor);    }

#define UsbBuildSelectInterfaceRequest(urb, \
                                      length, \
                                      configurationHandle, \
                                      interfaceNumber, \
                                      alternateSetting) { \
            (urb)->UrbHeader.Function =  URB_FUNCTION_SELECT_INTERFACE; \
            (urb)->UrbHeader.Length = (length); \
            (urb)->UrbSelectInterface.Interface.AlternateSetting = (alternateSetting); \
            (urb)->UrbSelectInterface.Interface.InterfaceNumber = (interfaceNumber); \
            (urb)->UrbSelectInterface.Interface.Length = (length - sizeof(struct _URB_HEADER) - sizeof(USBD_CONFIGURATION_HANDLE)); \
            (urb)->UrbSelectInterface.ConfigurationHandle = (configurationHandle);  }

#define UsbBuildVendorRequest(urb, \
                              cmd, \
                              length, \
                              transferFlags, \
                              reservedbits, \
                              request, \
                              value, \
                              index, \
                              transferBuffer, \
                              transferBufferMDL, \
                              transferBufferLength, \
                              link) { \
            (urb)->UrbHeader.Function =  cmd; \
            (urb)->UrbHeader.Length = (length); \
            (urb)->UrbControlVendorClassRequest.TransferBufferLength = (transferBufferLength); \
            (urb)->UrbControlVendorClassRequest.TransferBufferMDL = (transferBufferMDL); \
            (urb)->UrbControlVendorClassRequest.TransferBuffer = (transferBuffer); \
            (urb)->UrbControlVendorClassRequest.RequestTypeReservedBits = (reservedbits); \
            (urb)->UrbControlVendorClassRequest.Request = (request); \
            (urb)->UrbControlVendorClassRequest.Value = (value); \
            (urb)->UrbControlVendorClassRequest.Index = (index); \
            (urb)->UrbControlVendorClassRequest.TransferFlags = (transferFlags); \
            (urb)->UrbControlVendorClassRequest.UrbLink = (link); }

#if (NTDDI_VERSION >= NTDDI_WINXP)

#define UsbBuildOsFeatureDescriptorRequest(urb, \
                              length, \
                              interface, \
                              index, \
                              transferBuffer, \
                              transferBufferMDL, \
                              transferBufferLength, \
                              link) { \
            (urb)->UrbHeader.Function = URB_FUNCTION_GET_MS_FEATURE_DESCRIPTOR; \
            (urb)->UrbHeader.Length = (length); \
            (urb)->UrbOSFeatureDescriptorRequest.TransferBufferLength = (transferBufferLength); \
            (urb)->UrbOSFeatureDescriptorRequest.TransferBufferMDL = (transferBufferMDL); \
            (urb)->UrbOSFeatureDescriptorRequest.TransferBuffer = (transferBuffer); \
            (urb)->UrbOSFeatureDescriptorRequest.InterfaceNumber = (interface); \
            (urb)->UrbOSFeatureDescriptorRequest.MS_FeatureDescriptorIndex = (index); \
            (urb)->UrbOSFeatureDescriptorRequest.UrbLink = (link); }

#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)

FORCEINLINE
VOID
UsbBuildOpenStaticStreamsRequest(
    _Out_ PURB                     Urb,
    _In_  USBD_PIPE_HANDLE         PipeHandle,
    _In_  USHORT                   NumberOfStreams,
    _In_  PUSBD_STREAM_INFORMATION StreamInfoArray
    )
{
    RtlZeroMemory(Urb, sizeof(*Urb));
    RtlZeroMemory(StreamInfoArray, sizeof(USBD_STREAM_INFORMATION) * NumberOfStreams);
    
    Urb->UrbHeader.Function = URB_FUNCTION_OPEN_STATIC_STREAMS;
    Urb->UrbHeader.Length = sizeof(struct _URB_OPEN_STATIC_STREAMS);
    Urb->UrbOpenStaticStreams.PipeHandle = PipeHandle;
    Urb->UrbOpenStaticStreams.NumberOfStreams = NumberOfStreams;
    Urb->UrbOpenStaticStreams.StreamInfoVersion = URB_OPEN_STATIC_STREAMS_VERSION_100;
    Urb->UrbOpenStaticStreams.StreamInfoSize = sizeof(USBD_STREAM_INFORMATION);
    Urb->UrbOpenStaticStreams.Streams = StreamInfoArray;
}

#endif

//
// Get the USB status code
//

#define URB_STATUS(urb) ((urb)->UrbHeader.Status)

//
// Macros used for select interface and select configuration requests
//

#define GET_SELECT_CONFIGURATION_REQUEST_SIZE(totalInterfaces, totalPipes) \
            (sizeof(struct _URB_SELECT_CONFIGURATION) + \
                ((totalInterfaces-1) * sizeof(USBD_INTERFACE_INFORMATION)) + \
                ((totalPipes-totalInterfaces)*sizeof(USBD_PIPE_INFORMATION)))

#define GET_SELECT_INTERFACE_REQUEST_SIZE(totalPipes) \
            (sizeof(struct _URB_SELECT_INTERFACE) + \
             ((totalPipes-1)*sizeof(USBD_PIPE_INFORMATION)))

#define GET_USBD_INTERFACE_SIZE(numEndpoints) (sizeof(USBD_INTERFACE_INFORMATION) + \
                        (sizeof(USBD_PIPE_INFORMATION)*(numEndpoints)) \
                         - sizeof(USBD_PIPE_INFORMATION))

#define  GET_ISO_URB_SIZE(n) (sizeof(struct _URB_ISOCH_TRANSFER)+\
        sizeof(USBD_ISO_PACKET_DESCRIPTOR)*n)

#ifndef _USBD_

_IRQL_requires_max_(DISPATCH_LEVEL)
DECLSPEC_IMPORT
VOID
USBD_GetUSBDIVersion(
    _Out_ PUSBD_VERSION_INFORMATION VersionInformation
    );

__drv_preferredFunction("USBD_ParseConfigurationDescriptorEx", "Obsolete")
DECLSPEC_IMPORT
PUSB_INTERFACE_DESCRIPTOR
USBD_ParseConfigurationDescriptor(
    _In_ PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _In_ UCHAR InterfaceNumber,
    _In_ UCHAR AlternateSetting
    );

__drv_preferredFunction("USBD_CreateConfigurationRequestEx", "Obsolete")
DECLSPEC_IMPORT
PURB
USBD_CreateConfigurationRequest(
    _In_  PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _Out_ PUSHORT Siz
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
DECLSPEC_IMPORT
PUSB_COMMON_DESCRIPTOR
USBD_ParseDescriptors(
    _In_ PVOID DescriptorBuffer,
    _In_ ULONG TotalLength,
    _In_ PVOID StartPosition,
    _In_ LONG DescriptorType
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
DECLSPEC_IMPORT
PUSB_INTERFACE_DESCRIPTOR
USBD_ParseConfigurationDescriptorEx(
    _In_ PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _In_ PVOID StartPosition,
    _In_ LONG InterfaceNumber,
    _In_ LONG AlternateSetting,
    _In_ LONG InterfaceClass,
    _In_ LONG InterfaceSubClass,
    _In_ LONG InterfaceProtocol
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
DECLSPEC_IMPORT
PURB
USBD_CreateConfigurationRequestEx(
    _In_ PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _In_ PUSBD_INTERFACE_LIST_ENTRY InterfaceList
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
__declspec(dllexport)
ULONG
USBD_GetInterfaceLength(
    _In_ PUSB_INTERFACE_DESCRIPTOR InterfaceDescriptor,
    _In_ PUCHAR BufferEnd
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
__declspec(dllexport)
VOID
USBD_RegisterHcFilter(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PDEVICE_OBJECT FilterDeviceObject
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("(see documentation)", "Obsolete")
__declspec(dllexport)
NTSTATUS
USBD_GetPdoRegistryParameter(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _Inout_updates_bytes_(ParameterLength) PVOID Parameter,
    _In_ ULONG ParameterLength,
    _In_reads_bytes_(KeyNameLength) PWSTR KeyName,
    _In_ ULONG KeyNameLength
    );

__drv_preferredFunction("(see documentation)", "Obsolete")
__declspec(dllexport)
NTSTATUS
USBD_QueryBusTime(
    _In_  PDEVICE_OBJECT RootHubPdo,
    _Out_ PULONG CurrentFrame
    );

#if (NTDDI_VERSION >= NTDDI_WINXP)

_IRQL_requires_max_(DISPATCH_LEVEL)
__drv_preferredFunction("(see documentation)", "Obsolete")
DECLSPEC_IMPORT
ULONG
USBD_CalculateUsbBandwidth(
    _In_ ULONG MaxPacketSize,
    _In_ UCHAR EndpointType,
    _In_ BOOLEAN LowSpeed
    );

#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)

_IRQL_requires_max_(DISPATCH_LEVEL)
DECLSPEC_IMPORT
USBD_STATUS
USBD_ValidateConfigurationDescriptor(
    _In_reads_bytes_(BufferLength) PUSB_CONFIGURATION_DESCRIPTOR ConfigDesc,
    _In_ ULONG BufferLength,
    _In_ USHORT Level,
    _Out_ PUCHAR *Offset,
    _In_opt_ ULONG Tag);

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#endif /* _USBD_ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

#define USBD_CLIENT_CONTRACT_VERSION_INVALID 0xFFFFFFFF
#define USBD_CLIENT_CONTRACT_VERSION_602 0x602
#define USBD_INTERFACE_VERSION_600 0x600
#define USBD_INTERFACE_VERSION_602 0x602

DECLARE_HANDLE(USBD_HANDLE);

_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
USBD_CreateHandle(
    _In_      PDEVICE_OBJECT DeviceObject,
    _In_      PDEVICE_OBJECT TargetDeviceObject,
    _In_      ULONG          USBDClientContractVersion,
    _In_      ULONG          PoolTag,
    _Out_     USBD_HANDLE   *USBDHandle
);

VOID
USBD_CloseHandle(
    _In_      USBD_HANDLE USBDHandle
);

BOOLEAN
USBD_IsInterfaceVersionSupported(
    _In_      USBD_HANDLE USBDHandle,
    _In_      ULONG       USBDInterfaceVersion
);

_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
USBD_UrbAllocate(
    _In_                            USBD_HANDLE  USBDHandle,
    _Outptr_result_bytebuffer_(sizeof(URB)) PURB        *Urb
);

_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
USBD_IsochUrbAllocate(
    _In_      USBD_HANDLE  USBDHandle,
    _In_      ULONG        NumberOfIsochPacket,
    _Outptr_result_bytebuffer_(sizeof(struct _URB_ISOCH_TRANSFER) 
                               + (NumberOfIsochPackets * sizeof(USBD_ISO_PACKET_DESCRIPTOR))
                               - sizeof(USBD_ISO_PACKET_DESCRIPTOR)) 
              PURB        *Urb
);

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
USBD_UrbFree(
    _In_ USBD_HANDLE USBDHandle,
    _In_ PURB        Urb
);

_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
USBD_SelectConfigUrbAllocateAndBuild(
    _In_  USBD_HANDLE                   USBDHandle,
    _In_  PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _In_  PUSBD_INTERFACE_LIST_ENTRY    InterfaceList,
    _Out_ PURB                         *Urb
);

_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
USBD_SelectInterfaceUrbAllocateAndBuild(
    _In_  USBD_HANDLE                USBDHandle,
    _In_  USBD_CONFIGURATION_HANDLE  ConfigurationHandle,
    _In_  PUSBD_INTERFACE_LIST_ENTRY InterfaceListEntry,
    _Out_ PURB                      *Urb
);

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
USBD_AssignUrbToIoStackLocation(
    _In_ USBD_HANDLE        USBDHandle,
    _In_ PIO_STACK_LOCATION IoStackLocation,
    _In_ PURB               Urb
);

_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
USBD_QueryUsbCapability(
    _In_ USBD_HANDLE USBDHandle,
    _In_ const GUID* CapabilityType,
    _In_ ULONG       OutputBufferLength,
    _When_(OutputBufferLength == 0, _Pre_null_)
    _When_(OutputBufferLength != 0 && ResultLength == NULL, _Out_writes_bytes_(OutputBufferLength))
    _When_(OutputBufferLength != 0 && ResultLength != NULL, _Out_writes_bytes_to_opt_(OutputBufferLength, *ResultLength))
        PUCHAR                        OutputBuffer,
    _Out_opt_ 
    _When_(ResultLength != NULL, _Deref_out_range_(<=,OutputBufferLength))
        PULONG                        ResultLength
);

DECLARE_HANDLE(USBDI_HANDLE);

typedef struct _COMPOSITE_DEVICE_CAPABILITIES{
    ULONG                 CapabilityFunctionSuspend : 1;
    ULONG                 Reserved:31;
} COMPOSITE_DEVICE_CAPABILITIES, *PCOMPOSITE_DEVICE_CAPABILITIES;

FORCEINLINE
VOID
COMPOSITE_DEVICE_CAPABILITIES_INIT(
    PCOMPOSITE_DEVICE_CAPABILITIES CapabilityFlags
    )
{
    RtlZeroMemory(CapabilityFlags, sizeof(*CapabilityFlags));
}

typedef struct _REGISTER_COMPOSITE_DEVICE {
    USHORT                                Version;
    USHORT                                Size;
    USBDI_HANDLE                          Reserved;
    COMPOSITE_DEVICE_CAPABILITIES         CapabilityFlags;
    ULONG                                 FunctionCount;
} REGISTER_COMPOSITE_DEVICE, *PREGISTER_COMPOSITE_DEVICE;

VOID
USBD_BuildRegisterCompositeDevice(
    _In_
        USBD_HANDLE                   USBDHandle,  
    _In_ 
        COMPOSITE_DEVICE_CAPABILITIES CapabilityFlags,
    _In_        
        ULONG                         FunctionCount,
    _Out_
        PREGISTER_COMPOSITE_DEVICE    RegisterCompositeDevice
);

DECLARE_HANDLE(USBD_FUNCTION_HANDLE);
typedef USBD_FUNCTION_HANDLE *PUSBD_FUNCTION_HANDLE;

typedef struct _REQUEST_REMOTE_WAKE_NOTIFICATION {
    USHORT                  Version;
    USHORT                  Size;
    USBD_FUNCTION_HANDLE    UsbdFunctionHandle;
    ULONG                   Interface;
} REQUEST_REMOTE_WAKE_NOTIFICATION, *PREQUEST_REMOTE_WAKE_NOTIFICATION;


DEFINE_GUID(GUID_USB_CAPABILITY_CHAINED_MDLS,
    0xf5ceeb23, 0xad90, 0x458c, 0x97, 0x9a, 0xd5, 0x9b, 0x3a, 0xd6, 0x88, 0x4f);

DEFINE_GUID(GUID_USB_CAPABILITY_STATIC_STREAMS,
    0x09051e1f, 0x0dc9, 0x4e6b, 0x8b, 0x12, 0x96, 0x0c, 0xbd, 0x81, 0xaa, 0x8f);

DEFINE_GUID(GUID_USB_CAPABILITY_SELECTIVE_SUSPEND,
    0x755c630d, 0xc8a0, 0x4765, 0x94, 0x6f, 0x90, 0xcc, 0x70, 0x38, 0x56, 0xa4);

DEFINE_GUID(GUID_USB_CAPABILITY_FUNCTION_SUSPEND,
    0xf4563183, 0xd66e, 0x42bd, 0xbd, 0x53, 0x1a, 0xc7, 0xb0, 0x4c, 0xd5, 0x9d);

DEFINE_GUID(GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 
    0x9c8a8a27, 0x15f9, 0x42e3, 0xa3, 0x56, 0xcd, 0xa6, 0xae, 0x97, 0xa8, 0xc8);

DEFINE_GUID(GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE,
    0x81a885a6, 0xf239, 0x42a2, 0x83, 0x97, 0xa5, 0xd9, 0x5b, 0xea, 0x69, 0x53);

DEFINE_GUID(GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE,
    0x8a2f776c, 0x9bd0, 0x4f29, 0x97, 0x71, 0xc7, 0xa3, 0x88, 0x46, 0xd4, 0xc7);


#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#pragma warning(pop) // un-sets any local warning changes

#endif /* __USBDLIB_H__ */
