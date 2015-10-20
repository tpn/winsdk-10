/*++

Copyright (c) 1990-2011  Microsoft Corporation

Module Name:

    WpSensorsClx.h

Abstract:

    Header file that defines structures, prototypes and definitions required
    by sensor class extension client drivers.

--*/

#pragma once

#include <wpSensors.h>

#ifdef __cplusplus
extern "C" {
#endif


//
// The version number for the sensor interface supported by client driver.
//

#define SENSOR_CLIENT_VERSION (0x1)

//
// IOCTL's
// Functions 1 to 199 are reserved for use by Microsoft. OEMs can use 200 and 
// greater for customization. Client only IOCTL's start at 199 and decrease
// class extension IOCTL's count up.
//
#define IOCTL_SENSOR_CLX_SET_CLIENT_HW_MODE \
    CTL_CODE(FILE_DEVICE_UNKNOWN, 199, METHOD_BUFFERED, FILE_ANY_ACCESS)

//
// Settings for communicating HW mode.
// For use with IOCTL_SENSOR_CLX_SET_CLIENT_HW_MODE
//

#define SENSOR_HW_MODE_UNKNOWN         (0x0000)
#define SENSOR_HW_MODE_STREAM          (0x0001)
#define SENSOR_HW_MODE_DEVICE_ORIENT   (0x0002)

//
// The version of the attributes information supported by the client driver.
//

#define SENSOR_DEVICE_INFORMATION_VERSION (0x1)

#define SENSOR_POOL_TAG_ACCELEROMETER         'ccAS'
#define SENSOR_POOL_TAG_AMBIENT_LIGHT         'slAS'
#define SENSOR_POOL_TAG_FUSION                'suFS'
#define SENSOR_POOL_TAG_GYRO                  'ryGS'
#define SENSOR_POOL_TAG_MAGNETOMETER          'gaMS'
#define SENSOR_POOL_TAG_PROXIMITY             'xrPS'


//
// Notification Mask
//

#define SENSOR_NOTIFICATION_THRESHOLD_MASK (SENSOR_NOTIFICATION_THRESHOLD_ABOVE | \
                                            SENSOR_NOTIFICATION_THRESHOLD_BELOW | \
                                            SENSOR_NOTIFICATION_THRESHOLD_CROSSINGS | \
                                            SENSOR_NOTIFICATION_THRESHOLD_IN | \
                                            SENSOR_NOTIFICATION_THRESHOLD_OUT | \
                                            SENSOR_NOTIFICATION_THRESHOLD_DELTA)

//
// In Polling mode the sensor is always running and therefore 
// PFN_DS_STARTREADING won't be called when the Client advertises this
// capability
//

#define SENSOR_DDSI_CAPABILITY_ALWAYS_RUNNING   (0x01)



//
// The structure to supply sensors information and attributes.
//

typedef struct _SENSOR_CLIENT_INFO
{
    USHORT Version;
    USHORT Size;

    // 
    // Type of sensor this client is controlling
    //
    SENSOR_TYPE Type;

    //
    // Max Size of the sensor data being published by this sensor
    //
    ULONG SensorDataSize;

    // 
    // Number of range/resolution combinations the sensor supports
    //
    ULONG NumberRanges;

    // 
    // Public Capabilities - exposed to users 
    //
    ULONG CapabilityFlags;

    // 
    // Private Capabilities - for CLX only
    //
    ULONG PrivCapabilityFlags;

} SENSOR_CLIENT_INFO, *PSENSOR_CLIENT_INFO;

//
// The calling convention to be used when invoking sensor client driver's callback.
//

#define SENSOR_EXPORT __stdcall



// 
// Sensor Timing
//
typedef struct _PSENSOR_TIMING
{

    //
    // Time Sensor needs when going from lowest power state to being ready to
    // start a sample. This should include settling time.
    //
    ULONG PowerOnMs;
    
    //
    // Time Sensor needs when going to lowest power state from sampling
    // or on states. This should include settling time.
    //
    ULONG PowerOffMs; 
    
    //
    // Time sensor needs to capture a sample. This should include settling time.
    //
    ULONG SampleMs;
    
}SENSOR_TIMING, *PSENSOR_TIMING;

//
// Sensor Client Notifications to sensor class extension
//

typedef enum
{
    SENSOR_NOTIFY_INIT_COMPLETE,
    SENSOR_NOTIFY_SAMPLE_READY,
    SENSOR_NOTIFY_PDD_TIMING_USED,  // Allows PDD to use part of the time report in SENSOR_TIMING
}SENSOR_NOTIFY;

//
// Define the sensor client driver callback routines.
//

//
// Callback to initialize the sensor.
//

typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_INITIALIZE_DEVICE) (
    __in WDFDEVICE Device,
    __in PVOID Context,
    __in WDFCMRESLIST ResourcesRaw,
    __in WDFCMRESLIST ResourcesTranslated
);

typedef SENSOR_CLIENT_INITIALIZE_DEVICE *PSENSOR_CLIENT_INITIALIZE_DEVICE;

//
// Callback to uninitialize the sensor.
//

typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_UNINITIALIZE_DEVICE) (
    __in WDFDEVICE Device,
    __in PVOID Context
);

typedef SENSOR_CLIENT_UNINITIALIZE_DEVICE *PSENSOR_CLIENT_UNINITIALIZE_DEVICE;

//
// Callback to initialize the sensor registers.
//

typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_INITIALIZE_HARDWARE) (
    __in PVOID Context
);

typedef SENSOR_CLIENT_INITIALIZE_HARDWARE *PSENSOR_CLIENT_INITIALIZE_HARDWARE;


//
// Callback to query sensor attributes.
//

typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_QUERY_DEVICE_INFORMATION) (
    __in PVOID Context,
    __out PSENSOR_CLIENT_INFO Information
);

typedef SENSOR_CLIENT_QUERY_DEVICE_INFORMATION
    *PSENSOR_CLIENT_QUERY_DEVICE_INFORMATION;


typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_GET_RANGE_RESOLUTION) (
    __in PVOID Context,
    __in ULONG Index,
    __in PVOID Min, 
    __in size_t MinSize, 
    __in PVOID Max, 
    __in size_t MaxSize,
    __in PVOID Res, 
    __in size_t ResSize
);

typedef SENSOR_CLIENT_GET_RANGE_RESOLUTION
        *PSENSOR_CLIENT_GET_RANGE_RESOLUTION;

typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_SET_RANGE_RESOLUTION) (
    __in PVOID Context,
    __in ULONG Index
    );

typedef SENSOR_CLIENT_SET_RANGE_RESOLUTION
        *PSENSOR_CLIENT_SET_RANGE_RESOLUTION;


typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_SET_INTERVAL) (
    __in PVOID Context,
    __in ULONG IntervalUs
);

typedef SENSOR_CLIENT_SET_INTERVAL *PSENSOR_CLIENT_SET_INTERVAL;


typedef
 __drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_GET_SENSOR_TIMING) (
    __in PVOID Context,
    __in PSENSOR_TIMING Timing
);

typedef SENSOR_CLIENT_GET_SENSOR_TIMING *PSENSOR_CLIENT_GET_SENSOR_TIMING;


typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_START_READING) (
    __in PVOID Context,
    __out ULONG *RetTimingUsedMs
    );

typedef SENSOR_CLIENT_START_READING *PSENSOR_CLIENT_START_READING;


typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_ABORT_READING) (
    __in PVOID Context
);

typedef SENSOR_CLIENT_ABORT_READING *PSENSOR_CLIENT_ABORT_READING;


typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_GET_DATA) (
    __in PVOID Context,
    __in PSENSOR_DATA Data,
    __in size_t DataSize
);

typedef SENSOR_CLIENT_GET_DATA *PSENSOR_CLIENT_GET_DATA;


typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_START_ACQUISITION) (
    __in PVOID Context,
    __in ULONG IntervalUs
);

typedef SENSOR_CLIENT_START_ACQUISITION *PSENSOR_CLIENT_START_ACQUISITION;


typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_STOP_ACQUISITION) (
    __in PVOID Context
);

typedef SENSOR_CLIENT_STOP_ACQUISITION *PSENSOR_CLIENT_STOP_ACQUISITION;


typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_POWER_ENABLE) (
    __in PVOID Context,
    __in BOOLEAN On,
    __out ULONG *RetTimingUsedMs
);

typedef SENSOR_CLIENT_POWER_ENABLE *PSENSOR_CLIENT_POWER_ENABLE;


typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_INTERRUPT_ENABLE) (
    __in PVOID Context,
    __in BOOLEAN InterruptOn
);

typedef SENSOR_CLIENT_INTERRUPT_ENABLE *PSENSOR_CLIENT_INTERRUPT_ENABLE;

typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLIENT_DEVICE_IO_CONTROL) (
    __in PVOID Context,
    __in WDFQUEUE Queue,
    __in WDFREQUEST Request,
    __in size_t OutSize,
    __in size_t InSize,
    __in ULONG IoControlCode,
    __out ULONG *RetBytesReadWritten
);

typedef SENSOR_CLIENT_DEVICE_IO_CONTROL *PSENSOR_CLIENT_DEVICE_IO_CONTROL;




#pragma warning(push)
#pragma warning(disable:4214) /* nonstandard extension used: bit field types other then int */
#pragma warning(disable:4201) /* nonstandard extension used: nameless struct/union */

//
// Sensor client driver registration packet.
//

typedef struct _SENSOR_CLIENT_REGISTRATION_PACKET {
    USHORT Version;
    USHORT Size;
    ULONG DeviceContextSize;
    ULONG PoolTag;

    //
    // Client Driver interfaces: General WDF interfaces.
    //

    PSENSOR_CLIENT_INITIALIZE_DEVICE        ClientDrvInitializeDevice;
    PSENSOR_CLIENT_UNINITIALIZE_DEVICE      ClientDrvUnInitializeDevice;
    PSENSOR_CLIENT_INITIALIZE_HARDWARE      ClientDrvInitializeHardware;

    //
    // Client Driver interfaces: Device information interface.
    //

    PSENSOR_CLIENT_QUERY_DEVICE_INFORMATION ClientDrvQueryDeviceInformation;
    PSENSOR_CLIENT_GET_RANGE_RESOLUTION     ClientDrvGetRangeResolution;
    PSENSOR_CLIENT_SET_RANGE_RESOLUTION     ClientDrvSetRangeResolution;
    PSENSOR_CLIENT_SET_INTERVAL             ClientDrvSetInterval;
    PSENSOR_CLIENT_GET_SENSOR_TIMING        ClientDrvGetSensorTiming;
    PSENSOR_CLIENT_START_READING            ClientDrvStartReading;
    PSENSOR_CLIENT_ABORT_READING            ClientDrvAbortReading;
    PSENSOR_CLIENT_GET_DATA                 ClientDrvGetData;
    PSENSOR_CLIENT_START_ACQUISITION        ClientDrvStartAcquisition;
    PSENSOR_CLIENT_STOP_ACQUISITION         ClientDrvStopAcquisition;
    PSENSOR_CLIENT_POWER_ENABLE             ClientDrvPowerEnable;
    PSENSOR_CLIENT_INTERRUPT_ENABLE         ClientDrvInterruptEnable;
    PSENSOR_CLIENT_DEVICE_IO_CONTROL        ClientDrvIoControl;
} SENSOR_CLIENT_REGISTRATION_PACKET, *PSENSOR_CLIENT_REGISTRATION_PACKET;

#pragma warning(pop)

//
// Define the sensor class extension exports that the client driver can invoke.
//

//
// Sensor class extension export to register a sensor client driver.
//

typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLX_REGISTER_CLIENT) (
__in WDFDRIVER Driver,
__inout PSENSOR_CLIENT_REGISTRATION_PACKET RegistrationPacket,
__in PUNICODE_STRING RegistryPath
);

typedef SENSOR_CLX_REGISTER_CLIENT *PSENSOR_CLX_REGISTER_CLIENT;

//
// Sensor class extension export to unregister a sensor client driver.
//

typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLX_UNREGISTER_CLIENT) (
__in WDFDRIVER Driver
);

typedef SENSOR_CLX_UNREGISTER_CLIENT *PSENSOR_CLX_UNREGISTER_CLIENT;

//
// Sensor class extension export to process AddDevice prior to creating device object.
//

typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE) (
__in WDFDRIVER Driver,
__inout PWDFDEVICE_INIT DeviceInit,
__out PWDF_OBJECT_ATTRIBUTES FdoAttributes
);

typedef SENSOR_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE
    *PSENSOR_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE;

//
// Sensor class extension export to process AddDevice post device object create.
//

typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE) (
__in WDFDRIVER Driver,
__in WDFDEVICE Device, 
__in SENSOR_TYPE SensorType
);

typedef SENSOR_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE
    *PSENSOR_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE;


//
// Sensor class extension export to notify extension data is available
// (used only when client is responsible for generating data)
//

typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLX_SAMPLE_READY) (
__in WDFDEVICE Device,
__in PSENSOR_DATA Data
);

typedef SENSOR_CLX_SAMPLE_READY
    *PSENSOR_CLX_SAMPLE_READY;

//
// Sensor class extension export to query extension for context of client
// driver
//

typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
PVOID
(SENSOR_EXPORT SENSOR_CLX_GET_CLIENT_CONTEXT) (
__in WDFDEVICE Device
);

typedef SENSOR_CLX_GET_CLIENT_CONTEXT
    *PSENSOR_CLX_GET_CLIENT_CONTEXT;




//
// Sensor class extension export to notify extension of timing delays
// experienced by the client
//

typedef
__checkReturn
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
(SENSOR_EXPORT SENSOR_CLX_CLIENT_TIMING_USED) (
__in WDFDRIVER Driver,
__in ULONG TimingUsed
);

typedef SENSOR_CLX_CLIENT_TIMING_USED
    *PSENSOR_CLX_CLIENT_TIMING_USED;


//
// Define the position for each of the sensor exports in the export table.
//

typedef enum _SENSOR_CLX_EXPORT_INDEX {
    RegisterClientIndex = 0x0,
    UnregisterClientIndex,
    AddDevicePreDeviceCreateIndex,
    AddDevicePostDeviceCreateIndex,
    SampleReady,
    GetClientContext,
    SensorExportLastExportIndex
} SENSOR_CLX_EXPORT_INDEX, *PSENSOR_CLX_EXPORT_INDEX;

//
// Define the total number of routines exported by the class extension to the
// client driver.
//

#define SENSOR_CLX_TOTAL_EXPORTS  (SensorExportLastExportIndex)

typedef VOID (*PSENSOR_CLX_EXPORTED_INTERFACES)(VOID);

//
// Declaration for the sensor class extension's export table.
//

extern PSENSOR_CLX_EXPORTED_INTERFACES
    SensorClxExportedInterfaces[SENSOR_CLX_TOTAL_EXPORTS];

NTSTATUS
FORCEINLINE
SENSOR_CLX_RegisterClient (
    __in WDFDRIVER Driver,
    __inout PSENSOR_CLIENT_REGISTRATION_PACKET RegistrationPacket,
    __in PUNICODE_STRING RegistryPath
    )

{

    PSENSOR_CLX_REGISTER_CLIENT RegisterClient;

    RegisterClient = (PSENSOR_CLX_REGISTER_CLIENT)
                       SensorClxExportedInterfaces[RegisterClientIndex];

    return RegisterClient(Driver, RegistrationPacket, RegistryPath);
}
#pragma deprecated(SENSOR_CLX_RegisterClient) // Please use SensorV2 Class Extensions.

NTSTATUS
FORCEINLINE
SENSOR_CLX_UnregisterClient (
    __in WDFDRIVER Driver
    )
{

    PSENSOR_CLX_UNREGISTER_CLIENT UnregisterClient;

    UnregisterClient = (PSENSOR_CLX_UNREGISTER_CLIENT)
                         SensorClxExportedInterfaces[UnregisterClientIndex];

    return UnregisterClient(Driver);
}

NTSTATUS
FORCEINLINE
SENSOR_CLX_ProcessAddDevicePreDeviceCreate (
    __in WDFDRIVER Driver,
    __in PWDFDEVICE_INIT DeviceInit,
    __out PWDF_OBJECT_ATTRIBUTES FdoAttributes
    )

{

    PSENSOR_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE PreDeviceCreate;

    PreDeviceCreate = (PSENSOR_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE)
                      SensorClxExportedInterfaces[AddDevicePreDeviceCreateIndex];

    return PreDeviceCreate(Driver, DeviceInit, FdoAttributes);
}

NTSTATUS
FORCEINLINE
SENSOR_CLX_ProcessAddDevicePostDeviceCreate (
    __in WDFDRIVER Driver,
    __in WDFDEVICE Device,
    __in SENSOR_TYPE SensorType
    )

{

    PSENSOR_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE PostDeviceCreate;

    PostDeviceCreate = (PSENSOR_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE)
                       SensorClxExportedInterfaces[AddDevicePostDeviceCreateIndex];

    return PostDeviceCreate(Driver, Device, SensorType);
}

NTSTATUS
FORCEINLINE
SENSOR_CLX_SampleReady (
    __in WDFDEVICE Device,
    __in PSENSOR_DATA Data
    )

{

    PSENSOR_CLX_SAMPLE_READY ClientSampleReady;

    ClientSampleReady = (PSENSOR_CLX_SAMPLE_READY)
                       SensorClxExportedInterfaces[SampleReady];

    return ClientSampleReady(Device, Data);
}

PVOID
FORCEINLINE
SENSOR_CLX_GetClientContext (
    __in WDFDEVICE Device
    )

{

    PSENSOR_CLX_GET_CLIENT_CONTEXT QueryClientContext;

    QueryClientContext = (PSENSOR_CLX_GET_CLIENT_CONTEXT)
                       SensorClxExportedInterfaces[GetClientContext];

    return QueryClientContext(Device);
}

#ifdef __cplusplus
}
#endif


