/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    usbbusif.h

Abstract:

Environment:

    Kernel mode

Revision History:

    6-20-99 : created

--*/

#ifndef   __USBBUSIF_H__
#define   __USBBUSIF_H__

/*
  Bus interfaces are supported for Windows XP and later only
*/
#ifndef USB_BUSIFFN
#define USB_BUSIFFN __stdcall
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)

typedef PVOID PUSB_DEVICE_HANDLE;


/****************************************************************************
    Bus interface for USB FUNCTION DRIVERS 
*****************************************************************************/


/*
    The following bus interface is defined for USB function drivers
    as an alternative to linking directly with USBD.SYS

    It provides irp-less interfaces that may be called at Raised IRQL.
*/


/* 

NTSTATUS 
USBPORT_SubmitIsoOutUrb(
    IN PVOID BusContext,
    IN PURB Urb
    );

Routine Description:

    Returns STATUS_NOT_SUPPORTED.
    
Arguments:

*/

typedef _Must_inspect_result_ NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_SUBMIT_ISO_OUT_URB) (
        _In_ PVOID,
        _In_ PURB
    );


/* 
VOID
USBPORT_GetUSBDIVersion(
    IN PVOID BusContext,
    IN OUT PUSBD_VERSION_INFORMATION VersionInformation,
    IN OUT PULONG HcdCapabilities
    );

Routine Description:

    Service Returns the Highest USBDI Interface Version supported 
    by the port driver.

    Released Interface Vesrions are:

    Win98Gold,usbd              0x00000102
    Win98SE,usbd                0x00000200
    Win2K,usbd                  0x00000300
    Win98M (Millenium),usbd     0x00000400   

    Usbport                     0x00000500

    IRQL = ANY
    
Arguments:

    VersionInformation - Ptr to USBD_VERSION_INFORMATION 
    HcdCapabilities - Ptr to ULONG that will be filled in with 
                the Host controller (port) driver capability flags.
*/

/*
    Host Controller 'Port' driver capabilities flags
*/

#define USB_HCD_CAPS_SUPPORTS_RT_THREADS    0x00000001


typedef VOID
    (USB_BUSIFFN *PUSB_BUSIFFN_GETUSBDI_VERSION) (
        _In_ PVOID,
        _Out_opt_ PUSBD_VERSION_INFORMATION,
        _Out_opt_ PULONG 
    );

/* 
NTSTATUS
USBPORT_QueryBusTime(
    IN PVOID BusContext,   
    IN OUT PULONG CurrentUsbFrame
    );

Routine Description:

    Returns the current 32 bit USB frame number.  The function 
    replaces the USBD_QueryBusTime Service.

    IRQL = ANY
    
Arguments:


*/


typedef _Must_inspect_result_ NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_QUERY_BUS_TIME) (
        _In_ PVOID,
        _Out_opt_ PULONG
    );    

/* 
NTSTATUS
USBPORT_BusEnumLogEntry(
    PVOID BusContext,
    ULONG DriverTag,
    ULONG EnumTag,
    ULONG P1,
    ULONG P2
    );

Routine Description:
    
    IRQL = ANY
    
Arguments:


*/


typedef NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_ENUM_LOG_ENTRY) (
        _In_ PVOID,
        _In_ ULONG,
        _In_ ULONG,
        _In_ ULONG,
        _In_ ULONG
    );    



/* 
NTSTATUS
USBPORT_QueryBusInformation(
    IN PVOID BusContext,   
    IN ULONG Level,
    IN OUT PVOID BusInformationBuffer,
    IN OUT PULONG BusInformationBufferLength,
    OUT PULONG BusInformationActualLength
    );

Routine Description:

    IRQL = ANY
    
Arguments:


*/

typedef struct _USB_BUS_INFORMATION_LEVEL_0 {

    /* bandwidth in bits/sec */
    ULONG TotalBandwidth;
    /* mean bandwidth consumed in bits/sec */ 
    ULONG ConsumedBandwidth;  
    
} USB_BUS_INFORMATION_LEVEL_0, *PUSB_BUS_INFORMATION_LEVEL_0;


typedef struct _USB_BUS_INFORMATION_LEVEL_1 {

    /* bandwidth in bits/sec */
    ULONG TotalBandwidth;
    /* mean bandwidth consumed in bits/sec */ 
    ULONG ConsumedBandwidth;  

    /*
        controller 'unicode' symbolic name 
    */       

    ULONG ControllerNameLength;
    WCHAR ControllerNameUnicodeString[1];
    
} USB_BUS_INFORMATION_LEVEL_1, *PUSB_BUS_INFORMATION_LEVEL_1;


typedef _Must_inspect_result_ NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_QUERY_BUS_INFORMATION) (
        _In_ PVOID,
        _In_ ULONG,
        _Inout_ PVOID,
        _Out_ PULONG,
        _Out_opt_ PULONG
    );        


/* 
BOOLEAN
USBPORT_IsDeviceHighSpeed(
    IN PVOID BusContext   
    );

Routine Description:

    Returns true if device is operating at high speed

    IRQL = ANY
    
Arguments:


*/

typedef _Must_inspect_result_ BOOLEAN
    (USB_BUSIFFN *PUSB_BUSIFFN_IS_DEVICE_HIGH_SPEED) (
        _In_opt_ PVOID
    );         

#define USB_BUSIF_USBDI_VERSION_0         0x0000
#define USB_BUSIF_USBDI_VERSION_1         0x0001
#define USB_BUSIF_USBDI_VERSION_2         0x0002
#define USB_BUSIF_USBDI_VERSION_3         0x0003

// {B1A96A13-3DE0-4574-9B01-C08FEAB318D6}
DEFINE_GUID(USB_BUS_INTERFACE_USBDI_GUID, 
0xb1a96a13, 0x3de0, 0x4574, 0x9b, 0x1, 0xc0, 0x8f, 0xea, 0xb3, 0x18, 0xd6);


/* 
   Note: that this version must remain unchanged, this is the 
   version that is supported by USBD in Win2k and WinMe
*/   
typedef struct _USB_BUS_INTERFACE_USBDI_V0 {

    USHORT Size;
    USHORT Version;
    
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
    // interface specific entries go here

    // the following functions must be callable at high IRQL,
    // (ie higher than DISPATCH_LEVEL)
    
    PUSB_BUSIFFN_GETUSBDI_VERSION GetUSBDIVersion;
    PUSB_BUSIFFN_QUERY_BUS_TIME QueryBusTime;
    PUSB_BUSIFFN_SUBMIT_ISO_OUT_URB SubmitIsoOutUrb;
    PUSB_BUSIFFN_QUERY_BUS_INFORMATION QueryBusInformation;

} USB_BUS_INTERFACE_USBDI_V0, *PUSB_BUS_INTERFACE_USBDI_V0;

/*
    New extensions for Windows XP
*/
typedef struct _USB_BUS_INTERFACE_USBDI_V1 {

    USHORT Size;
    USHORT Version;
    
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
    // interface specific entries go here

    // the following functions must be callable at high IRQL,
    // (ie higher than DISPATCH_LEVEL)
    
    PUSB_BUSIFFN_GETUSBDI_VERSION GetUSBDIVersion;
    PUSB_BUSIFFN_QUERY_BUS_TIME QueryBusTime;
    PUSB_BUSIFFN_SUBMIT_ISO_OUT_URB SubmitIsoOutUrb;
    PUSB_BUSIFFN_QUERY_BUS_INFORMATION QueryBusInformation;
    PUSB_BUSIFFN_IS_DEVICE_HIGH_SPEED IsDeviceHighSpeed;
    
} USB_BUS_INTERFACE_USBDI_V1, *PUSB_BUS_INTERFACE_USBDI_V1;


/*
    New extensions for Windows XP
*/
typedef struct _USB_BUS_INTERFACE_USBDI_V2 {

    USHORT Size;
    USHORT Version;
    
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
    // interface specific entries go here

    // the following functions must be callable at high IRQL,
    // (ie higher than DISPATCH_LEVEL)
    
    PUSB_BUSIFFN_GETUSBDI_VERSION GetUSBDIVersion;
    PUSB_BUSIFFN_QUERY_BUS_TIME QueryBusTime;
    PUSB_BUSIFFN_SUBMIT_ISO_OUT_URB SubmitIsoOutUrb;
    PUSB_BUSIFFN_QUERY_BUS_INFORMATION QueryBusInformation;
    PUSB_BUSIFFN_IS_DEVICE_HIGH_SPEED IsDeviceHighSpeed;

    PUSB_BUSIFFN_ENUM_LOG_ENTRY EnumLogEntry;
    
} USB_BUS_INTERFACE_USBDI_V2, *PUSB_BUS_INTERFACE_USBDI_V2;

#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)

/* 
NTSTATUS
USBPORT_QueryBusTimeEx(
    IN PVOID BusContext,   
    OUT PULONG HighSpeedFrameCounter
    );
*/

typedef _Must_inspect_result_ NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_QUERY_BUS_TIME_EX) (
        _In_opt_ PVOID,
        _Out_opt_ PULONG
    );     

/* 


/*
NTSTATUS
USBPORTBUSIF_UsbdQueryControllerType(
    _In_opt_ PVOID BusContext,
    _Out_opt_ PULONG HcdiOptionFlags,
    _Out_opt_ PUSHORT PciVendorId,
    _Out_opt_ PUSHORT PciDeviceId,
    _Out_opt_ PUCHAR PciClass,
    _Out_opt_ PUCHAR PciSubClass,
    _Out_opt_ PUCHAR PciRevisionId,
    _Out_opt_ PUCHAR PciProgIf
    );
*/

typedef _Must_inspect_result_ NTSTATUS
    (USB_BUSIFFN *PUSB_BUSIFFN_QUERY_CONTROLLER_TYPE) (
        _In_opt_ PVOID,
        _Out_opt_ PULONG,
        _Out_opt_ PUSHORT,
        _Out_opt_ PUSHORT,
        _Out_opt_ PUCHAR,
        _Out_opt_ PUCHAR,
        _Out_opt_ PUCHAR,
        _Out_opt_ PUCHAR
    ); 


// version 3 Vista and later

typedef struct _USB_BUS_INTERFACE_USBDI_V3 {

    USHORT Size;
    USHORT Version;
    
    PVOID BusContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
    // interface specific entries go here

    // the following functions must be callable at high IRQL,
    // (ie higher than DISPATCH_LEVEL)
    
    PUSB_BUSIFFN_GETUSBDI_VERSION GetUSBDIVersion;
    PUSB_BUSIFFN_QUERY_BUS_TIME QueryBusTime;
    PUSB_BUSIFFN_SUBMIT_ISO_OUT_URB SubmitIsoOutUrb;
    PUSB_BUSIFFN_QUERY_BUS_INFORMATION QueryBusInformation;
    PUSB_BUSIFFN_IS_DEVICE_HIGH_SPEED IsDeviceHighSpeed;
    PUSB_BUSIFFN_ENUM_LOG_ENTRY EnumLogEntry;

    PUSB_BUSIFFN_QUERY_BUS_TIME_EX QueryBusTimeEx;
    PUSB_BUSIFFN_QUERY_CONTROLLER_TYPE QueryControllerType;
           
} USB_BUS_INTERFACE_USBDI_V3, *PUSB_BUS_INTERFACE_USBDI_V3;


//
// USBCCGP.SYS filter driver bus interfaces supported for Windows Longhorn and later.
// These are callback functions that the usbccgp.sys driver will invoke to allow
// a filter driver to customize the device.  The filter driver must export the interface.
//

// {893B6A96-0B7F-4d4d-BDB4-BBD4CEEBB31C}
DEFINE_GUID(USB_BUS_INTERFACE_USBC_CONFIGURATION_GUID, 
0x893b6a96, 0xb7f, 0x4d4d, 0xbd, 0xb4, 0xbb, 0xd4, 0xce, 0xeb, 0xb3, 0x1c);

#define USBC_FUNCTION_FLAG_APPEND_ID 0x1

typedef struct _USBC_FUNCTION_DESCRIPTOR{
    // The 0-based index of the function described
    UCHAR FunctionNumber;
    
    // The number of interfaces contained in this function
    UCHAR NumberOfInterfaces;
    
    // A callee allocated array of pointers into the config desc buffer passed as an input
    PUSB_INTERFACE_DESCRIPTOR *InterfaceDescriptorList;
    
    // Callee allocated PNP IDs for this PDO
    UNICODE_STRING HardwareId;
    UNICODE_STRING CompatibleId;
    UNICODE_STRING FunctionDescription;
    
    // Custom Flags
    ULONG FunctionFlags;
    PVOID Reserved;
} USBC_FUNCTION_DESCRIPTOR, *PUSBC_FUNCTION_DESCRIPTOR;

//
// Callback invoked during START to customize PDO interface groupings and PNP ids.
//

typedef _Must_inspect_result_
NTSTATUS
(USB_BUSIFFN *USBC_START_DEVICE_CALLBACK)(
    _In_ PUSB_DEVICE_DESCRIPTOR DeviceDescriptor,
    _In_ PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _Outptr_result_bytebuffer_maybenull_(*FunctionDescriptorBufferLength) PUSBC_FUNCTION_DESCRIPTOR *FunctionDescriptorBuffer,
    _Out_ PULONG FunctionDescriptorBufferLength,
    _In_ PDEVICE_OBJECT FdoDeviceObject,
    _In_ PDEVICE_OBJECT PdoDeviceObject
    );
    
typedef _Must_inspect_result_
BOOLEAN
(USB_BUSIFFN *USBC_PDO_ENABLE_CALLBACK)(
   _In_ PVOID  Context,
   _In_ USHORT FirstInterfaceNumber,
   _In_ USHORT NumberOfInterfaces,
   _In_ UCHAR  FunctionClass,
   _In_ UCHAR  FunctionSubClass,
   _In_ UCHAR  FunctionProtocol
   );
   

#define USBC_DEVICE_CONFIGURATION_INTERFACE_VERSION_1         0x0001

typedef struct _USBC_DEVICE_CONFIGURATION_INTERFACE_V1 {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
    USBC_START_DEVICE_CALLBACK StartDeviceCallback;
    USBC_PDO_ENABLE_CALLBACK   PdoEnableCallback;
    
    PVOID Reserved[7];
} USBC_DEVICE_CONFIGURATION_INTERFACE_V1, *PUSBC_DEVICE_CONFIGURATION_INTERFACE_V1;

#endif

#endif  /* __USBBUSIF_H */
