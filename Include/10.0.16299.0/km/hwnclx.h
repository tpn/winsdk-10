/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    hwnclx.h

Abstract:

    Header file that defines structures and prototypes required by Hardware
    Notification client drivers.

Environment:

    Kernel mode

--*/

#ifndef __HWN_CLX_H__
#define __HWN_CLX_H__

#if (NTDDI_VERSION >= NTDDI_WIN8)

#ifdef __cplusplus
extern "C" {
#endif

//
// The version number for the Hardware Notification interface supported by
// client driver.
//

#define HWN_CLIENT_VERSION (0x1)

//
// The version of the attributes information supported by the client driver.
//

#define HWN_DEVICE_INFORMATION_VERSION (0x1)

//
// The structure used to supply information about the Hardware Notifications.
//

typedef struct _CLIENT_DEVICE_INFORMATION {
    USHORT Version;
    USHORT Size;

    //
    // The total number of Hardware Notifications.
    //

    USHORT TotalHwNs;
} CLIENT_DEVICE_INFORMATION, *PCLIENT_DEVICE_INFORMATION;

//
// The calling convention to be used when invoking Hardware Notification client
// driver's callback.
//

#define HWN_EXPORT __stdcall

/**
  Client driver callback function used to initialize the Hardware Notification as a result
  of a call to the driver's EvtDevicePrepareHardware function.

            Device                   A handle to a framework device object.

            Context                  Supplies a pointer to the Hardware Notification client
                                     driver's device extension.

            ResourcesRaw             A handle to a framework resource-list object that
                                     identifies the raw hardware resources that the Plug
                                     and Play manager has assigned to the device.

            ResourcesTranslated      A handle to a framework resource-list object that
                                     identifies the translated hardware resources that
                                     the Plug and Play manager has assigned to the device.
**/
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_INITIALIZE_DEVICE) (
    __in WDFDEVICE Device,
    __in PVOID Context,
    __in WDFCMRESLIST ResourcesRaw,
    __in WDFCMRESLIST ResourcesTranslated
);

typedef HWN_CLIENT_INITIALIZE_DEVICE *PHWN_CLIENT_INITIALIZE_DEVICE;

/**
  Client driver callback function used to uninitialize the Hardware Notification as a result
  of a call to the driver's EvtDeviceReleasehardware function.

            Device                   A handle to a framework device object.

            Context                  Supplies a pointer to the Hardware Notification client
                                     driver's device extension.
**/
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_UNINITIALIZE_DEVICE) (
    __in WDFDEVICE Device,
    __in PVOID Context
);

typedef HWN_CLIENT_UNINITIALIZE_DEVICE *PHWN_CLIENT_UNINITIALIZE_DEVICE;

/**
  Client driver callback function used to query Hardware Notification attributes.

            Context                  Supplies a pointer to the Hardware Notification client
                                     driver's device extension.

            Information              Supplies a pointer to a buffer that receives the
                                     controller's attributes.
**/
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_QUERY_DEVICE_INFORMATION) (
    __in PVOID Context,
    __out PCLIENT_DEVICE_INFORMATION Information
);

typedef HWN_CLIENT_QUERY_DEVICE_INFORMATION
    *PHWN_CLIENT_QUERY_DEVICE_INFORMATION;

/**
  Client driver callback function used to start the Hardware Notification as a result of a
  call to the driver's EvtDeviceD0Entry function.

            Context                  Supplies a pointer to the Hardware Notification client
                                     driver's device extension.
**/
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_START_DEVICE) (
    __in PVOID Context
);

typedef HWN_CLIENT_START_DEVICE *PHWN_CLIENT_START_DEVICE;

/**
  Client driver callback function used to stop the Hardware Notification as a result of a call
  to the driver's EvtDeviceD0Exit function.

            Context                  Supplies a pointer to the Hardware Notification client
                                     driver's device extension.
**/
typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_STOP_DEVICE) (
    __in PVOID Context
);

typedef HWN_CLIENT_STOP_DEVICE *PHWN_CLIENT_STOP_DEVICE;

/**
  Client driver callback function used to get Hardware Notification state. Called by the class
  extension when user asks for the state of a driver.

            Context                  Supplies a pointer to the Hardware Notification client
                                     driver's device extension.

            OutputBuffer             Buffer of size OutputBufferLength bytes, where the
                                     Hardware Notification status is written to.

            OutputBufferLength       The size of OutputBuffer in bytes.

            InputBuffer              Buffer of size InputBufferLength bytes, where the
                                     requested Hardware Notification IDs are stored. Can be NULL.

            InputBufferLength        The size of InputBuffer in bytes.

            BytesRead                A pointer to a variable containing the number of bytes read.
**/
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_GET_STATE) (
    __in PVOID Context,
    __out_bcount(OutputBufferLength) PVOID OutputBuffer,
    __in ULONG OutputBufferLength,
    __in_bcount(InputBufferLength) PVOID InputBuffer,
    __in ULONG InputBufferLength,
    __out PULONG BytesRead
);

typedef HWN_CLIENT_GET_STATE *PHWN_CLIENT_GET_STATE;

/**
  Client driver callback function used to set Hardware Notification state. Called by the class
  extension when the user wants to change the state of a driver.

            Context                  Supplies a pointer to the Hardware Notification client
                                     driver's device extension.

            Buffer                   Buffer, the size of BufferLength bytes which shows which Hardware
                                     Notifications need to be set.

            BufferLength             The size of Buffer in bytes.

            BytesWritten             A pointer to a variable containing the number of bytes written.
**/
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLIENT_SET_STATE) (
    __in PVOID Context,
    __in_bcount(BufferLength) PVOID Buffer,
    __in ULONG BufferLength,
    __out PULONG BytesWritten
);

typedef HWN_CLIENT_SET_STATE *PHWN_CLIENT_SET_STATE;

//
// Hardware Notification client driver registration packet that is passed to the class
// extension when a client driver is registered. Contains version information and
// client driver callback functions.
//

typedef struct _HWN_CLIENT_REGISTRATION_PACKET {
    USHORT Version;
    USHORT Size;
    ULONG DeviceContextSize;
    ULONG Reserved;

    /* Client Functions */
    PHWN_CLIENT_INITIALIZE_DEVICE ClientInitializeDevice;
    PHWN_CLIENT_UNINITIALIZE_DEVICE ClientUnInitializeDevice;
    PHWN_CLIENT_QUERY_DEVICE_INFORMATION ClientQueryDeviceInformation;
    PHWN_CLIENT_START_DEVICE ClientStartDevice;
    PHWN_CLIENT_STOP_DEVICE ClientStopDevice;
    PHWN_CLIENT_SET_STATE ClientSetHwNState;
    PHWN_CLIENT_GET_STATE ClientGetHwNState;

} HWN_CLIENT_REGISTRATION_PACKET, *PHWN_CLIENT_REGISTRATION_PACKET;

/**
  This export routine is called by the Hardware Notification client driver to
  register itself with the class extension and to supply the class extension
  with all its callback functions. The client driver invokes this routine when
  it's loaded (i.e., from its driver entry).

            Driver                   A handle to the client driver's framework driver object.

            RegistrationPacket       Supplies the registration packet that contains
                                     information about the client driver and all its callbacks.

            RegistryPath             Path to the client driver's registry key.
**/
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLX_REGISTER_CLIENT) (
    __in WDFDRIVER Driver,
    __inout PHWN_CLIENT_REGISTRATION_PACKET RegistrationPacket,
    __in PUNICODE_STRING RegistryPath
);

typedef HWN_CLX_REGISTER_CLIENT *PHWN_CLX_REGISTER_CLIENT;

/**
  This export routine is called by the Hardware Notification client driver to
  unregister itself with the class extension. The client driver invokes this
  routine when the client driver unloads (i.e., from its driver unload entry
  point).

            Driver                   A handle to the client driver's framework driver object.
**/
typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLX_UNREGISTER_CLIENT) (
    __in WDFDRIVER Driver
);

typedef HWN_CLX_UNREGISTER_CLIENT *PHWN_CLX_UNREGISTER_CLIENT;

/*++
  This export routine is called by the Hardware Notification client driver
  when the WDF invokes the client driver's AddDevice callback. The client driver
  invokes this routine prior to creating the device object. This routine is
  responsible for supplying the device prepare/release and entry/exit
  callbacks to WDF for transitioning the device into different states.

            Driver                   A handle to the client driver's framework driver object.

            DeviceInit               A pointer to a framework-allocated WDFDEVICE_INIT structure.

            FdoAttributes            A pointer to a structure that receives the attributes to be
                                     supplied when the client driver creates it's device object.
**/
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE) (
    __in WDFDRIVER Driver,
    __inout PWDFDEVICE_INIT DeviceInit,
    __out PWDF_OBJECT_ATTRIBUTES FdoAttributes
);

typedef HWN_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE
    *PHWN_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE;

/*++
  This export routine is called by the Hardware Notification client driver
  when the driver framework invokes the client driver's AddDevice callback.
  The client driver invokes this routine after creating the device object.
  This routine is responsible for creating IO queues.

            Driver                   A handle to the client driver's framework driver object.

            Device                   A handle to the framework device object.

            DeviceGuid               A device GUID for the client driver.
**/
typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(HWN_EXPORT HWN_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE) (
    __in WDFDRIVER Driver,
    __in WDFDEVICE Device,
    __in LPGUID DeviceGuid
);

typedef HWN_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE
    *PHWN_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE;

//
// Define the position for each of the Hardware Notification exports in the
// export table.
//

typedef enum _HWN_CLX_EXPORT_INDEX {
    RegisterClientIndex = 0x0,
    UnregisterClientIndex,
    AddDevicePreDeviceCreateIndex,
    AddDevicePostDeviceCreateIndex,
    HwNExportLastExportIndex
} HWN_CLX_EXPORT_INDEX, *PHWN_CLX_EXPORT_INDEX;

//
// Define the total number of routines exported by the class extension to the
// client driver.
//

#define HWN_CLX_TOTAL_EXPORTS  (HwNExportLastExportIndex)

typedef VOID (*PHWN_CLX_EXPORTED_INTERFACES)(VOID);

//
// Declaration for the Hardware Notification class extension's export table.
//

extern PHWN_CLX_EXPORTED_INTERFACES
    HwNClxExportedInterfaces[HWN_CLX_TOTAL_EXPORTS];

NTSTATUS
FORCEINLINE
HwNRegisterClient (
    __in WDFDRIVER Driver,
    __inout PHWN_CLIENT_REGISTRATION_PACKET RegistrationPacket,
    __in PUNICODE_STRING RegistryPath
    )

{
    PHWN_CLX_REGISTER_CLIENT RegisterClient;

    RegisterClient = (PHWN_CLX_REGISTER_CLIENT)
                       HwNClxExportedInterfaces[RegisterClientIndex];

    return RegisterClient(Driver, RegistrationPacket, RegistryPath);
}

NTSTATUS
FORCEINLINE
HwNUnregisterClient (
    __in WDFDRIVER Driver
    )
{
    PHWN_CLX_UNREGISTER_CLIENT UnregisterClient;

    UnregisterClient = (PHWN_CLX_UNREGISTER_CLIENT)
                         HwNClxExportedInterfaces[UnregisterClientIndex];

    return UnregisterClient(Driver);
}

NTSTATUS
FORCEINLINE
HwNProcessAddDevicePreDeviceCreate (
    __in WDFDRIVER Driver,
    __in PWDFDEVICE_INIT DeviceInit,
    __out PWDF_OBJECT_ATTRIBUTES FdoAttributes
    )

{
    PHWN_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE PreDeviceCreate;

    PreDeviceCreate = (PHWN_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE)
                      HwNClxExportedInterfaces[AddDevicePreDeviceCreateIndex];

    return PreDeviceCreate(Driver, DeviceInit, FdoAttributes);
}

NTSTATUS
FORCEINLINE
HwNProcessAddDevicePostDeviceCreate (
    __in WDFDRIVER Driver,
    __in WDFDEVICE Device,
    __in LPGUID DeviceGuid
    )

{
    PHWN_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE PostDeviceCreate;

    PostDeviceCreate = (PHWN_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE)
                       HwNClxExportedInterfaces[AddDevicePostDeviceCreateIndex];

    return PostDeviceCreate(Driver, Device, DeviceGuid);
}

#ifdef __cplusplus
}
#endif

#endif

#endif
