/*++

Copyright (c) Microsoft Corporation.  All Rights Reserved.

Module Name:

    emi.h

Abstract:

    This header defines the standard IOCTL interface to an energy meter device.

--*/

#if !defined(_EMI_)
#define _EMI_

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


//
// Energy Metering Device Interface
// {45BD8344-7ED6-49cf-A440-C276C933B053}
//

DEFINE_GUID(GUID_DEVICE_ENERGY_METER, 
0x45bd8344, 0x7ed6, 0x49cf, 0xa4, 0x40, 0xc2, 0x76, 0xc9, 0x33, 0xb0, 0x53);

#define IOCTL_EMI_GET_VERSION        CTL_CODE(FILE_DEVICE_UNKNOWN, 0, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_EMI_GET_METADATA_SIZE  CTL_CODE(FILE_DEVICE_UNKNOWN, 1, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_EMI_GET_METADATA       CTL_CODE(FILE_DEVICE_UNKNOWN, 2, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_EMI_GET_MEASUREMENT    CTL_CODE(FILE_DEVICE_UNKNOWN, 3, METHOD_BUFFERED, FILE_READ_ACCESS)

//
// The maximum length for a name parameter including the null terminator.
//

#define EMI_NAME_MAX                        16

#define EMI_VERSION_V1                       1

typedef enum
{
    EmiMeasurementUnitPicowattHours
} EMI_MEASUREMENT_UNIT;

typedef struct
{
    USHORT EmiVersion;
} EMI_VERSION;

typedef struct
{
    ULONG MetadataSize;
} EMI_METADATA_SIZE;

typedef struct
{
    EMI_MEASUREMENT_UNIT MeasurementUnit; 

    WCHAR HardwareOEM[EMI_NAME_MAX];
    WCHAR HardwareModel[EMI_NAME_MAX];
    USHORT HardwareRevision;
    USHORT MeteredHardwareNameSize;
    WCHAR MeteredHardwareName[ANYSIZE_ARRAY];
} EMI_METADATA;

typedef struct
{
    ULONGLONG AbsoluteEnergy;
    ULONGLONG AbsoluteTime; // in 100ns intervals
} EMI_MEASUREMENT_DATA;


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // (NTDDI_VERSION >= NTDDI_WINBLUE) 

#endif // !defined(_EMI_)

