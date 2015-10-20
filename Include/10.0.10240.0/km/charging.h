/*++

Copyright (C) Microsoft Corporation

Module Name:

    charging.h

Abstract:

    This file specifies the USB - CAD interface.

Environment:

    Kernel mode

--*/

#pragma once

#include <initguid.h>

// {EC0A1CC9-4294-43FB-BF37-B850CE95F337}
DEFINE_GUID(GUID_DEVINTERFACE_CHARGING_ARBITRATION, 0xec0a1cc9, 0x4294, 0x43fb, 0xbf, 0x37, 0xb8, 0x50, 0xce, 0x95, 0xf3, 0x37);

//
// Device interfaces to be created by the corresponding devices handling
// configurable chargers (eg. setting configurable properties)
//

// {7158C35C-C1BC-4D90-ACB1-8020BD0E19CA}
DEFINE_GUID(GUID_DEVINTERFACE_CONFIGURABLE_USBFN_CHARGER, 0x7158c35c, 0xc1bc, 0x4d90, 0xac, 0xb1, 0x80, 0x20, 0xbd, 0xe, 0x19, 0xca);

// {3612B1C8-3633-47D3-8AF5-00A4DFA04793}
DEFINE_GUID(GUID_DEVINTERFACE_CONFIGURABLE_WIRELESS_CHARGER, 0x3612b1c8, 0x3633, 0x47d3, 0x8a, 0xf5, 0x0, 0xa4, 0xdf, 0xa0, 0x47, 0x93);

//
// IoControl definitions
//

#define IOCTL_CAD_DISABLE_CHARGING                  CTL_CODE(FILE_DEVICE_BATTERY, 0x120, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_CAD_GET_CHARGING_STATUS_COMPLETE      CTL_CODE(FILE_DEVICE_BATTERY, 0x122, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

// 0x123 entry is reserved - do not use

#define IOCTL_INTERNAL_CAD_POWER_SOURCE_UPDATE      CTL_CODE(FILE_DEVICE_BATTERY, 0x130, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_CAD_GET_BATTERY_PROVISIONING_STATUS   CTL_CODE(FILE_DEVICE_BATTERY, 0x131, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_CAD_POWER_SOURCE_UPDATE_EX            CTL_CODE(FILE_DEVICE_BATTERY, 0x132, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//
// IoControl to be implemented by configurable chargers
// The IOCTL(s) here must be sent to the IoTarget of the devices creating the
// device interfaces above, not the CAD.
//

#define IOCTL_INTERNAL_CONFIGURE_CHARGER_PROPERTY   CTL_CODE(FILE_DEVICE_BATTERY, 0x140, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//
// Type Definitions
//

typedef enum _POWERSOURCEID {
    PowerSourceInvalid = 0x00,
    PowerSourceNone,
    PowerSourceUsbfn,
    PowerSourceWirelessCharger,
    PowerSourceKD,
    PowerSourceUsbTypeC,
    PowerSourceMax
} POWERSOURCEID, *PPOWERSOURCEID;

//
// These structures are used as an output argument to
// IOCTL_CAD_GET_CHARGING_STATUS_COMPLETE. The CAD returns the current
// charging status using this structure.
//

typedef struct _POWERSOURCESTATUS {
    //
    // Identifies power source
    //

    POWERSOURCEID PowerSourceId;

    //
    // Provides the maximum permissible current draw
    // through the power source in mA
    //

    ULONG MaxChargeCurrent;

    //
    // Power source specific information
    // USB: port type
    //

    PVOID PowerSourceInformation;

    //
    // Set to true if the power source is available (attached)
    //

    BOOLEAN PowerSourceStatus;
} POWERSOURCESTATUS, *PPOWERSOURCESTATUS;

typedef struct _CHARGINGSTATUSCOMPLETE {

    //
    // Legacy USB port status
    //

    POWERSOURCESTATUS UsbFnStatus;

    //
    // USB Type-C port status
    //

    POWERSOURCESTATUS UsbTypeCStatus;

    //
    // KD Power Source Status
    //

    POWERSOURCESTATUS KDStatus;

    //
    // Wireless Charger Power Source Status
    //

    POWERSOURCESTATUS WirelessStatus;

    //
    // Number of handles force disabling charging.
    // 0 implies that force disable is off.
    //

    ULONG ForceDisableChargingRefCount;

} CHARGINGSTATUSCOMPLETE, *PCHARGINGSTATUSCOMPLETE;

//
// The following two structs are input arguments to
// IOCTL_INTERNAL_CAD_POWER_SOURCE_UPDATE.
// The power source sends either of the structures with all the fields populated
// to inform the CAD of a change in its charging state.
//

typedef struct _POWERSOURCEUPDATE
{
    //
    // Identifies the source of the IOCTL
    //

    POWERSOURCEID PowerSourceId;

    //
    // Provides the maximum permissible current draw
    // through the power source in mA
    //

    ULONG MaxChargeCurrent;

    //
    // Set to true if the power source is available (attached)
    //

    BOOLEAN PowerSourceAvailableStatus;

    //
    // Optional power source specific information. This value is provided to
    // callers via the IOCTL_CAD_GET_CHARGING_STATUS unmodified. The CAD driver
    // itself does nothing with this parameter.
    //

    PVOID PowerSourceInformation;

} POWERSOURCEUPDATE, *PPOWERSOURCEUPDATE;

typedef struct _POWERSOURCEUPDATEEX {
    //
    // Identifies the power source
    //

    POWERSOURCEUPDATE Source;

    //
    // Charger ID
    // If a non-zero ChargerId is provided, and the battery driver supports the
    // BatteryChargerId information level, the MaxChargeCurrent variable in the
    // Source struct above will not be used.
    // The MaxChargeCurrent will be used as a fallback if BatteryChargerId is not
    // supported.
    //

    GUID ChargerId;

} POWERSOURCEUPDATEEX, *PPOWERSOURCEUPDATEEX;

//
// This type describes dynamic properties of a power source, this is a new and
// improved variant of POWERSOURCEUPDATE and POWERSOURCEUPDATEEX.
//
// IOCTL_CAD_POWER_SOURCE_UPDATE_EX payload.
//

typedef struct _CAD_POWER_SOURCE_INFO {

    //
    // Identifies the power source.
    //

    POWERSOURCEID SourceId;

    //
    // Identifies revision number of the data contained in VaData.
    //

    USHORT Version;

    //
    // Start of variable data area. Data contained here will be specific to
    // charging source type identified by SourceId.
    //

    ULONG VaData[1];

} CAD_POWER_SOURCE_INFO, *PCAD_POWER_SOURCE_INFO;

//
// Specializes CAD_POWER_SOURCE_INFO for USB.
//
// IOCTL_CAD_POWER_SOURCE_UPDATE_EX payload when:
//  - SourceId is set to PowerSourceUsbfn (for Legacy USB) or
//      PowerSourceUsbTypeC (for USB Type-C).
//  - Version is set to zero.
//
// N.B. next revision of this type should be named CAD_POWER_SOURCE_INFO_USB_V1
// and Version should hold value 1.
//

typedef struct _CAD_POWER_SOURCE_INFO_USB {

    //
    // Identifies the power source.
    //

    POWERSOURCEID SourceId;

    //
    // Identifies revision number of the data contained in this structure.
    //

    USHORT Version;

    //
    // Flags.
    //

    ULONG Flags;

    //
    // Indicates maximum current that can be drawn from this charging port in
    // mA.
    // This value may be zero when OemCharger value is not GUID_EMPTY, in such
    // case zero will be interpreted as unknown value.
    //

    ULONG MaxCurrent;

    //
    // Indicates constant voltage available on the charger terminal in mV.
    // This value may be zero when OemCharger value is not GUID_EMPTY, in such
    // case zero will be interpreted as unknown value.
    //

    ULONG Voltage;

    //
    // USB Port Type.
    // Actual underlying type is USB_CHARGER_PORT.
    //

    LONG PortType;

    //
    // Identifies a particular USB port on the system.
    // When set to 0 indicates that port information is unavailable.
    //

    ULONGLONG PortId;

    //
    // Opaque data passed to CAD by USB Fn stack, this normally contains USB
    // port type information that CAD does not attempt to interpret.
    //

    PVOID PowerSourceInformation;

    //
    // Represents OEM proprietary charger type when not GUID_EMPTY, this value
    // is not interpreted by CAD.
    //

    GUID OemCharger;

} CAD_POWER_SOURCE_INFO_USB, *PCAD_POWER_SOURCE_INFO_USB;

//
// This is the output argument to IOCTL_CAD_GET_BATTERY_PROVISIONING_STATUS
//

typedef struct _BATTERYPROVISIONINGSTATUS
{
    //
    // is device provisioned for battery blank?
    //

    BOOLEAN IsDeviceProvisionedForBatteryBlank;

} BATTERYPROVISIONINGSTATUS, *PBATTERYPROVISIONINGSTATUS;

//
// This is the input argument to IOCTL_INTERNAL_CONFIGURE_CHARGER_PROPERTY
//

typedef struct _CONFIGURABLE_CHARGER_PROPERTY_HEADER {
    //
    // Size of the struct
    //

    ULONG Size;

    //
    // Charger Id
    //

    GUID ChargerId;

    //
    // Id of the property to be configured
    //

    ULONG PropertyId;

    //
    // Extend this struct to add your own values, by creating a new struct with
    // CONFIGURABLE_CHARGER_PROPERTY_HEADER as the first field, and one or more
    // values after, corresponding to your PropertyId.
    //
    // eg.
    //
    // struct SET_MY_CHARGER_VOLTAGE {
    //     CONFIGURABLE_CHARGER_PROPERTY_HEADER Header;
    //     ULONG Voltage;
    // };
    //
    // or
    //
    // struct SET_MY_CHARGER_CURRENT_AND_VOLTAGE {
    //     CONFIGURABLE_CHARGER_PROPERTY_HEADER Header;
    //     ULONG Current;
    //     ULONG Voltage;
    // };
    //
    // Make sure you set Header.Size to the appropriate size of your new struct,
    // eg.
    //
    // Header.Size = sizeof(SET_MY_CHARGER_VOLTAGE);
    //

} CONFIGURABLE_CHARGER_PROPERTY_HEADER, *PCONFIGURABLE_CHARGER_PROPERTY_HEADER;

