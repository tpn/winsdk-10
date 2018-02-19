/*++

Copyright (c) Microsoft Corporation

Module Name:

    WpSensors.h

Abstract:

    Header file that defines structures, prototypes and definitions required
    by consumers of Windows Phone sensor services.

--*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

//-----------------------------------------------------------------------------
#define SENSOR_INVALID_INTERVAL     (0)
#define SENSOR_MAX_INTERVAL         (0xFFFFFFFF)
#define SENSOR_MAX_STRUC_SIZE       (1024) //Sanity check excessive allocation

// 
// SENSOR_CAPS_XXX: Capablity flags for sensor class extension
//

//
// The sensor CLX will manager the sensors power by turning on/off the 
// sensor when necessary, start data samples, and request data. This is the
// preferred programming model for sensors that must make up the CPU at each
// sample
//
#define SENSOR_CAPS_CLX_POLL                    0x0001

//
// The client driver is responsible for driving the sensor timing and managing
// power. Sensor CLX will start acquisition and inform client of required 
// interval rate. The client driver is then responsible for setting its 
// acquisition rate to meet the needs of upper layers and pushing samples to the 
// CLX. It is ok for the client to send up date more often, however in some
// situations CPU wakeup will be more power consuming than using the timing
// requested by sensor applications. The client driver must also handle its 
// interrupt resource is necessary
//
#define SENSOR_CAPS_CLIENT_PUSH                 0x0002



//
// SENSOR_CAPS_NOTIFICATION_XXX: Notification Capabilities:
//

//
// Notify application if reading exceeds maximum value
//
#define SENSOR_CAPS_NOTIFICATION_ABOVE         0x1000  

//
// Notify application if reading dips below minimum value
//
#define SENSOR_CAPS_NOTIFICATION_BELOW         0x2000  

//
// Notify aplication if reading falls within a given range
//
#define SENSOR_CAPS_NOTIFICATION_INRANGE       0x4000  

//
// Notify application if reading falls outside a given range
//
#define SENSOR_CAPS_NOTIFICATION_OUTOFRANGE    0x8000  

//
// Notify application every time the threshold is crossed
//
#define SENSOR_CAPS_NOTIFICATION_CROSSINGS     0x0800  

//
// Notify application if delta of the reading with the previous one is greater than a given value
//
#define SENSOR_CAPS_NOTIFICATION_DELTA         0x0400  


//
// SENSOR_NOTIFICATION_XXX flags
// See SENSOR_CAPS_NOTIFICATION_XXX
// 

#define SENSOR_NOTIFICATION_THRESHOLD_ABOVE     0x0010
#define SENSOR_NOTIFICATION_THRESHOLD_BELOW     0x0020
#define SENSOR_NOTIFICATION_THRESHOLD_CROSSINGS 0x0030
#define SENSOR_NOTIFICATION_THRESHOLD_IN        0x0040
#define SENSOR_NOTIFICATION_THRESHOLD_OUT       0x0050
#define SENSOR_NOTIFICATION_THRESHOLD_DELTA     0x0060


//
// Value for quering for active sensor range
//
#define SENSOR_RANGE_RESOLUTION_ACTIVE (ULONG) (-1)

//
// IOCTL's
// Functions 1 to 199 are reserved for use by Microsoft. OEMs can use 200 and 
// greater for customization. Client only IOCTL's start at 199 and decrease
// class extension IOCTL's count up.
//
#define IOCTL_SENSOR_CLX_CALIBRATE  \
    CTL_CODE(FILE_DEVICE_UNKNOWN, 100, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SENSOR_GET_PROPERTY  \
    CTL_CODE(FILE_DEVICE_UNKNOWN, 101, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SENSOR_SET_PROPERTY  \
    CTL_CODE(FILE_DEVICE_UNKNOWN, 102, METHOD_BUFFERED, FILE_ANY_ACCESS)


//-----------------------------------------------------------------------------
// Sensor Types (not defined in sensors.h)

// {D4B5AED3-3819-45CB-A3CC-EA862A2013D1}
DEFINE_GUID(SENSOR_TYPE_FUSION_3D, 
    0xd4b5aed3, 0x3819, 0x45cb, 0xa3, 0xcc, 0xea, 0x86, 0x2a, 0x20, 0x13, 0xd1);
    
#ifndef _SENSORS_H_

// {C2FB0F5F-E2D2-4C78-BCD0-352A9582819D}
DEFINE_GUID(SENSOR_TYPE_ACCELEROMETER_3D, 
    0XC2FB0F5F, 0XE2D2, 0X4C78, 0XBC, 0XD0, 0X35, 0X2A, 0X95, 0X82, 0X81, 0X9D);

// {55E5EFFB-15C7-40df-8698-A84B7C863C53}
DEFINE_GUID(SENSOR_TYPE_MAGNETOMETER_3D, 
    0x55e5effb, 0x15c7, 0x40df, 0x86, 0x98, 0xa8, 0x4b, 0x7c, 0x86, 0x3c, 0x53);

// {5220DAE9-3179-4430-9F90-06266D2A34DE}
DEFINE_GUID(SENSOR_TYPE_HUMAN_PROXIMITY,
    0X5220DAE9, 0X3179, 0X4430, 0X9F, 0X90, 0X06, 0X26, 0X6D, 0X2A, 0X34, 0XDE);

// {97F115C8-599A-4153-8894-D2D12899918A}
DEFINE_GUID(SENSOR_TYPE_AMBIENT_LIGHT,
    0X97F115C8, 0X599A, 0X4153, 0X88, 0X94, 0XD2, 0XD1, 0X28, 0X99, 0X91, 0X8A);

// {09485F5A-759E-42C2-BD4B-A349B75C8643}
DEFINE_GUID(SENSOR_TYPE_GYROMETER_3D,
    0X09485F5A, 0X759E, 0X42C2, 0XBD, 0X4B, 0XA3, 0X49, 0XB7, 0X5C, 0X86, 0X43);
    
#endif

//
// Data types for supported sensors.
//
typedef enum 
{
    SENSOR_DATA_ACCELEROMETER_3D,
    SENSOR_DATA_PROXIMITY,
    SENSOR_DATA_AMBIENT_LIGHT,
    SENSOR_DATA_MAGNETOMETER3D,
    SENSOR_DATA_GYRO_3D,
    SENSOR_DATA_FUSION_3D,
    SENSOR_DATA_DEVICE_ORIENTATION,
}SENSOR_DATA_TYPE;

//
// Supported Sensor types
typedef enum 
{
    SENSOR_ACCELEROMETER_3D,
    SENSOR_PROXIMITY,
    SENSOR_AMBIENT_LIGHT,
    SENSOR_MAGNETOMETER_3D,
    SENSOR_GYRO_3D,
    SENSOR_FUSION_3D,

    //
    // Number of supported sensor types
    //
    SENSOR_TYPE_COUNT,

    SENSOR_UNKNOWN = 0xFFFFFFFF
}SENSOR_TYPE;

//-----------------------------------------------------------------------------


//
// Basic information provided with every sensor reading. 
//

typedef struct _SENSOR_DATA_HEADER
{
    //
    // size of SENSOR_DATA_HEADER + the specific sensor's SENSOR_DATA
    //                                    
    ULONG         Size;

    //
    // Sample time in 100's of ns
    //
    ULONGLONG TimeStamp;
    
    SENSOR_DATA_TYPE DataType;
} SENSOR_DATA_HEADER;


typedef struct _SENSOR_DATA
{
    SENSOR_DATA_HEADER Header;

    //
    // Place holder for sensor specific data structure
    //
    BYTE        value[1];
    
} SENSOR_DATA, *PSENSOR_DATA;


typedef struct _SENSOR_DEVICE_CAPS
{
    //
    // sizeof(SENSOR_DEVICE_CAPS)
    //
    ULONG       Size;

    //
    // generic hardware feature flags
    //
    ULONG       Flags;

    //
    // type of sensor
    //
    SENSOR_TYPE Type;

    //
    // This is how fast the sensor can be read - resolution is 1us
    //
    ULONG       MinIntervalUs;

    //
    // Number of Ranges/Resolution pairs the sensor supports 
    //
    ULONG       NumberRanges;
    
} SENSOR_DEVICE_CAPS, *PSENSOR_DEVICE_CAPS;

// The following flags are required to prevent structure redefinition with SensorsStructures.h
// while avoiding any direct dependency on that header.
#ifndef _SENSORS_STRUCTURES
#define _SENSORS_STRUCTURES

typedef struct
{
    float X;
    float Y;
    float Z;
} VEC3D, *PVEC3D;

#pragma warning(push)
#pragma warning(disable:4201) // warning C4201: nonstandard extension used : nameless struct/union

typedef struct
{
    union
    {
        struct
        {
            float A11;
            float A12;
            float A13;
            float A21;
            float A22;
            float A23;
            float A31;
            float A32;
            float A33;
        };
        struct
        {
            VEC3D V1;
            VEC3D V2;
            VEC3D V3;
        };
        float M[3][3];
    };
} MATRIX3X3, *PMATRIX3X3;


#pragma warning(pop)

// Simple structure representing a 4 dimensional vector used for simple 3D rotation operation. 
// The rotation is done around the axis formed by the vector v= [X, Y, Z] and is of angle ?, and we have:
// W=cos(theta/2)
// |v|=sin(theta/2)
typedef struct
{
    float X;     // x component of rotation axis vector * sin(theta/2) also i (imaginary) coefficient
    float Y;     // y component of rotation axis vector * sin(theta/2) also j coefficient
    float Z;     // z component of rotation axis vector * sin(theta/2) also k coefficient
    float W;     // real coefficient = cos(theta/2)
} QUATERNION, *PQUATERNION;


typedef enum
{
    AXIS_X = 0,
    AXIS_Y,
    AXIS_Z,
    AXIS_MAX
} AXIS, *PAXIS;

#endif // _SENSORS_STRUCTURES

typedef struct
{
    ULONG Size;          //Size of this structure
    ULONG Delta;         //Delta threshold absolute value
} DELTA_THRESHOLD, *PDELTA_THRESHOLD;

typedef enum
{
    AXIS_POSITIVE_X,
    AXIS_NEGATIVE_X,
    AXIS_POSITIVE_Y,
    AXIS_NEGATIVE_Y,
    AXIS_POSITIVE_Z,
    AXIS_NEGATIVE_Z
} COORDINATE_AXIS, *PCOORDINATE_AXIS;


//
// Skip defining Sensor API prototypes if compiled in kernel mode. This define
// is brought in when user mode code adding <windows.h>
//
#ifdef FILE_FLAG_OVERLAPPED

typedef
VOID
(*PSENSORCALLBACK) (
    _In_opt_ PVOID Context, 
    _In_ PSENSOR_DATA Data
);

HANDLE 
SensorOpen(
    _In_ SENSOR_TYPE SensorType,
    _In_opt_ LPCTSTR SensorName
);

//
// This timeout respresents the worst case scenario that the caller will be 
// blocked in the case the sensor malfunctions. Typical timing is based on
// the speed of the sensor and the time it takes to power on sensor. For 
// more deterministic timing consider using SensorStart/SensorStop
//
#define SENSOR_DEFAULT_TIMEOUT (1000)

ULONG
SensorGetData(
    _In_ HANDLE SensorDevice, 
    _Out_writes_bytes_(DataSize) PSENSOR_DATA Data,
    _In_ size_t DataSize, 
    _In_ ULONG TimeoutMs
);

ULONG
SensorGetDataCollection(
    _In_ HANDLE SensorDevice,
    _Out_writes_bytes_(DataSize) PVOID Data,
    _In_ size_t DataSize,
    _In_ ULONG TimeoutMs
);

ULONG
SensorGetCapabilities(
    _In_ HANDLE SensorDevice, 
    _Out_writes_bytes_(CapsSize) PSENSOR_DEVICE_CAPS DeviceCaps,
    _In_ size_t CapsSize
);

ULONG 
SensorStart(
    _In_ HANDLE SensorDevice, 
    _In_ PSENSORCALLBACK Callback,
    _In_opt_ PVOID CallbackContext,
    _In_ ULONG IntervalUs,
    _In_opt_ PVOID ThresholdParams
);

#ifndef _SENSORSNATIVE_H_

ULONG 
SensorStop(
    _In_ HANDLE SensorDevice
);

BOOL 
SensorClose(
    _In_ HANDLE Sensor
);

ULONG
SensorEnableIdleOperation(
    _In_ HANDLE Sensor,
    _In_ BOOLEAN fEnable
);

_Success_(return)
BOOL
SensorDeviceIoControl(
    _In_ HANDLE SensorDevice, 
    _In_ DWORD dwIoControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned,
    _Inout_opt_ LPOVERLAPPED lpOverlapped
);

_Success_(return == ERROR_SUCCESS)
ULONG
SensorGetDeviceId(
    _In_ HANDLE Sensor,
    _Out_writes_bytes_opt_(*pSize) PWCHAR pDeviceId,
    _Inout_ size_t *pSize
    );
   
#endif // _SENSORSNATIVE_H_

#endif // FILE_FLAG_OVERLAPPED

#ifdef __cplusplus
}
#endif

