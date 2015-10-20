/*++

Copyright (c) 1996  Microsoft Corporation

Module Name:

    hidport.h

Abstract

    Definitions that are common to all HID minidrivers.

Environment:

    Kernel mode only

--*/

#ifndef __HIDPORT_H__
#define __HIDPORT_H__

#include    <hidclass.h>

//
// HID_MINIDRIVER_REGISTRATION is a struct filled in by the HID minidriver
// and passed to HIDCLASS via HidRegisterMinidriver()
//

typedef struct _HID_MINIDRIVER_REGISTRATION {

    //
    // Revision must be set to HID_REVISION by the minidriver
    //

    ULONG           Revision;

    //
    // DriverObject is a pointer to the minidriver's DriverObject that it
    // received as a DriverEntry() parameter.
    //

    PDRIVER_OBJECT  DriverObject;

    //
    // RegistryPath is a pointer to the minidriver's RegistryPath that it
    // received as a DriverEntry() parameter.
    //

    PUNICODE_STRING RegistryPath;

    //
    // DeviceExtensionSize is the size of the minidriver's per-device
    // extension.
    //

    ULONG           DeviceExtensionSize;

    //
    // Either all or none of the devices driven by a given minidriver are polled.
    //
    BOOLEAN         DevicesArePolled;
    UCHAR           Reserved[3];

} HID_MINIDRIVER_REGISTRATION, *PHID_MINIDRIVER_REGISTRATION;

//
// HID_DEVICE_EXTENSION is the public part of the device extension of a HID
// functional device object.
//

typedef struct _HID_DEVICE_EXTENSION {

    //
    // PhysicalDeviceObject... normally IRPs are not passed to this.
    //

    PDEVICE_OBJECT  PhysicalDeviceObject;

    //
    // NextDeviceObject... IRPs are sent here by the minidriver.  Note that
    // NextDeviceObject and PhysicalDeviceObject are the same unless someone
    // has inserted a 'filter' device object, in which case they are not the
    // same.  Sending IRPs to NextDeviceObject will hit the filter device
    // objects on the way down.
    //

    PDEVICE_OBJECT  NextDeviceObject;

    //
    // MiniDeviceExtension is the per-device extension area for use by
    // the minidriver.  It's size is determined by the DeviceExtensionSize
    // parameter passed in to HidAddDevice().
    //
    // So, given a Functional Device Object, a mininidriver finds this
    // structure by:
    //
    //    HidDeviceExtension = (PHID_DEVICE_EXTENSION)(Fdo->DeviceExtension);
    //
    // And of course it's per-device extension is found by:
    //
    //    MiniDeviceExtension = HidDeviceExtension->MiniDeviceExtension;
    //

    PVOID           MiniDeviceExtension;

} HID_DEVICE_EXTENSION, *PHID_DEVICE_EXTENSION;

typedef struct _HID_DEVICE_ATTRIBUTES {

    ULONG           Size;
    //
    // sizeof (struct _HID_DEVICE_ATTRIBUTES)
    //

    //
    // Vendor ids of this hid device
    //
    USHORT          VendorID;
    USHORT          ProductID;
    USHORT          VersionNumber;
    USHORT          Reserved[11];

} HID_DEVICE_ATTRIBUTES, * PHID_DEVICE_ATTRIBUTES;


#include <pshpack1.h>
typedef struct _HID_DESCRIPTOR
{
    UCHAR   bLength;
    UCHAR   bDescriptorType;
    USHORT  bcdHID;
    UCHAR   bCountry;
    UCHAR   bNumDescriptors;

    //
    // An array of one OR MORE descriptors.
    //
    struct _HID_DESCRIPTOR_DESC_LIST {
       UCHAR   bReportType;
       USHORT  wReportLength;
    } DescriptorList [1];

} HID_DESCRIPTOR, * PHID_DESCRIPTOR;
#include <poppack.h>

//
// Function prototypes for the HID services exported by the hid class driver
// follow.
//

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
HidRegisterMinidriver(
    _In_ PHID_MINIDRIVER_REGISTRATION  MinidriverRegistration
    );
   
#if(NTDDI_VERSION>=NTDDI_WINXPSP1) // Available on XP SP1 and above
NTSTATUS
HidNotifyPresence(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN IsPresent
    );
#endif

//
// The HID idle callback struct and callback function are used in 
// conjunction with IOCTL_HID_SEND_IDLE_NOTIFICATION_REQUEST sent down 
// by HIDCLASS during runtime idling
//

typedef VOID (*HID_SEND_IDLE_CALLBACK)( _In_ PVOID Context);

typedef struct _HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO {
    HID_SEND_IDLE_CALLBACK IdleCallback;
    PVOID IdleContext;
} HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO, *PHID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO;

//
// Internal IOCTLs for the class/mini driver interface.
//

#define IOCTL_HID_GET_DEVICE_DESCRIPTOR             HID_CTL_CODE(0)
#define IOCTL_HID_GET_REPORT_DESCRIPTOR             HID_CTL_CODE(1)
#define IOCTL_HID_READ_REPORT                       HID_CTL_CODE(2)
#define IOCTL_HID_WRITE_REPORT                      HID_CTL_CODE(3)
#define IOCTL_HID_GET_STRING                        HID_CTL_CODE(4)
#define IOCTL_HID_ACTIVATE_DEVICE                   HID_CTL_CODE(7)
#define IOCTL_HID_DEACTIVATE_DEVICE                 HID_CTL_CODE(8)
#define IOCTL_HID_GET_DEVICE_ATTRIBUTES             HID_CTL_CODE(9)
#define IOCTL_HID_SEND_IDLE_NOTIFICATION_REQUEST    HID_CTL_CODE(10)

//
// Internal IOCTLs supported by UMDF HID minidriver.  
//
#define IOCTL_UMDF_HID_SET_FEATURE                   HID_CTL_CODE(20)
#define IOCTL_UMDF_HID_GET_FEATURE                   HID_CTL_CODE(21)
#define IOCTL_UMDF_HID_SET_OUTPUT_REPORT             HID_CTL_CODE(22)
#define IOCTL_UMDF_HID_GET_INPUT_REPORT              HID_CTL_CODE(23)
#define IOCTL_UMDF_GET_PHYSICAL_DESCRIPTOR           HID_CTL_CODE(24)

//
// Codes for HID-specific descriptor types, from HID USB spec.
//
#define HID_HID_DESCRIPTOR_TYPE             0x21
#define HID_REPORT_DESCRIPTOR_TYPE          0x22
#define HID_PHYSICAL_DESCRIPTOR_TYPE        0x23

//
//  These are string IDs for use with IOCTL_HID_GET_STRING
//  They match the string field offsets in Chapter 9 of the USB Spec.
//
#define HID_STRING_ID_IMANUFACTURER     14
#define HID_STRING_ID_IPRODUCT          15
#define HID_STRING_ID_ISERIALNUMBER     16

#endif  // __HIDPORT_H__
