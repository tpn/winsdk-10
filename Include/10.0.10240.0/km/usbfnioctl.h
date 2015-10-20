/*++

Copyright (C) Microsoft Corporation. All rights reserved.

Module Name:

    usbfnioctl.h

Abstract:

    This function exposes all USB Function class extension IOCTL codes as well
    as their associated structures.

Environment:

    Kernel mode

--*/

//
// Pragmas
//
#pragma once

//
// Defines
//

typedef struct _USBFN_POWER_FILTER_STATE {
    USBFN_DEVICE_STATE DeviceState;

#pragma warning(push)
#pragma warning(disable:4201) // nonstandard extension used : nameless struct/union
    union
    {
        ULONG PState;
        ULONG Reserved;
    };
#pragma warning(pop)

} USBFN_POWER_FILTER_STATE, *PUSBFN_POWER_FILTER_STATE;


//
// Device Interface Guids
//

//
// Device interface exposed by UsbFn CLX
//
// {CEC7D47F-A1E1-4607-A693-9A0061465DB7}
DEFINE_GUID(USBFN_CLX_DEVICE_INTERFACE,
0XCEC7D47F, 0XA1E1, 0X4607, 0XA6, 0X93, 0X9A, 0X0, 0X61, 0X46, 0X5D, 0XB7);

//
// Filter driver interface to reset the controller
//
// {e5680f62-3d02-4112-ade6-796371080cf7}
DEFINE_GUID(USBFN_FILTER_INTERFACE_CONTROLLER_RESET,
0xe5680f62, 0x3d02, 0x4112, 0xad, 0xe6, 0x79, 0x63, 0x71, 0x08, 0x0c, 0xf7);


//
// IOCTL codes
//

// TRANSFERS
#define IOCTL_INTERNAL_USBFN_TRANSFER_IN                   CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x03,                      \
                                                                    METHOD_IN_DIRECT,          \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_TRANSFER_IN_APPEND_ZERO_PKT   CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x04,                      \
                                                                    METHOD_IN_DIRECT,          \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_TRANSFER_OUT                  CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x05,                      \
                                                                    METHOD_OUT_DIRECT,         \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_CONTROL_STATUS_HANDSHAKE_IN   CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x06,                      \
                                                                    METHOD_BUFFERED,           \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_CONTROL_STATUS_HANDSHAKE_OUT  CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x07,                      \
                                                                    METHOD_BUFFERED,           \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)

//COMMANDS
#define IOCTL_INTERNAL_USBFN_GET_CLASS_INFO                CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x08,                      \
                                                                    METHOD_OUT_DIRECT,         \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_GET_PIPE_STATE                CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x09,                      \
                                                                    METHOD_OUT_DIRECT,         \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_SET_PIPE_STATE                CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x0A,                      \
                                                                    METHOD_IN_DIRECT,          \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)


#define IOCTL_INTERNAL_USBFN_ACTIVATE_USB_BUS              CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x0B,                      \
                                                                    METHOD_BUFFERED,           \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_DEACTIVATE_USB_BUS            CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x0C,                      \
                                                                    METHOD_BUFFERED,           \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_BUS_EVENT_NOTIFICATION        CTL_CODE(FILE_DEVICE_BUS_EXTENDER, \
                                                                    0x0D,                     \
                                                                    METHOD_OUT_DIRECT,        \
                                                                    FILE_READ_DATA |          \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_SET_POWER_FILTER_STATE        CTL_CODE(FILE_DEVICE_BUS_EXTENDER, \
                                                                    0x0E,                     \
                                                                    METHOD_OUT_DIRECT,        \
                                                                    FILE_READ_DATA |          \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_SET_POWER_FILTER_EXIT_LPM     CTL_CODE(FILE_DEVICE_BUS_EXTENDER, \
                                                                    0x0F,                     \
                                                                    METHOD_OUT_DIRECT,        \
                                                                    FILE_READ_DATA |          \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_GET_CLASS_INFO_EX             CTL_CODE(FILE_DEVICE_BUS_EXTENDER, \
                                                                    0x10,                     \
                                                                    METHOD_OUT_DIRECT,        \
                                                                    FILE_READ_DATA |          \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_GET_INTERFACE_DESCRIPTOR_SET  CTL_CODE(FILE_DEVICE_BUS_EXTENDER, \
                                                                    0x11,                     \
                                                                    METHOD_OUT_DIRECT,        \
                                                                    FILE_READ_DATA |          \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_REGISTER_USB_STRING           CTL_CODE(FILE_DEVICE_BUS_EXTENDER, \
                                                                    0x12,                     \
                                                                    METHOD_IN_DIRECT,         \
                                                                    FILE_READ_DATA |          \
                                                                    FILE_WRITE_DATA)


#define IOCTL_INTERNAL_USBFN_RESERVED                      CTL_CODE(FILE_DEVICE_BUS_EXTENDER, \
                                                                    0x42,                     \
                                                                    METHOD_BUFFERED,          \
                                                                    FILE_READ_DATA |          \
                                                                    FILE_WRITE_DATA)

#define IOCTL_INTERNAL_USBFN_SIGNAL_REMOTE_WAKEUP          CTL_CODE(FILE_DEVICE_BUS_EXTENDER, \
                                                                    0x43,                     \
                                                                    METHOD_BUFFERED,          \
                                                                    FILE_READ_DATA |          \
                                                                    FILE_WRITE_DATA)

// 0x44 entry is reserved - do not use
// 0x45 entry is reserved - do not use
