/*++

Copyright (c) 2009  Microsoft Corporation

Module Name:

    ntdddump.h

Abstract:

    Definitions required for filter drivers on the dump path.

Environment:

    Kernel mode

Revision History:


--*/

#include <ntddk.h>

#ifndef __NTDDDUMP_H__
#define __NTDDDUMP_H__

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define DUMP_FILTER_MAJOR_VERSION_1 1
#define DUMP_FILTER_MAJOR_VERSION   2
#else
#define DUMP_FILTER_MAJOR_VERSION   1
#endif

#define DUMP_FILTER_MINOR_VERSION   0

#define DUMP_FILTER_CRITICAL 0x00000001

typedef enum _FILTER_DUMP_TYPE {
    DumpTypeUndefined,
    DumpTypeCrashdump,
    DumpTypeHibernation
} FILTER_DUMP_TYPE, *PFILTER_DUMP_TYPE;

typedef enum _FILTER_CALLBACK {
    CallbackDumpInit,
    CallbackDumpStart,
    CallbackDumpWrite,
    CallbackDumpFinish,
#if (NTDDI_VERSION >= NTDDI_WIN8)
    CallbackDumpRead,
#endif
    CallbackMaxCallback
} FILTER_CALLBACK, *PFILTER_CALLBACK;

//
// Define the filter driver extension structure
//

typedef struct _FILTER_EXTENSION {

    //
    // Dump type
    //
    FILTER_DUMP_TYPE DumpType;

    //
    // Pointer to dump volume object
    //
    PDEVICE_OBJECT DeviceObject;

    //
    // Dump device geometry
    //
    DISK_GEOMETRY Geometry;

    //
    // Dump disk size
    //
    LARGE_INTEGER DiskSize;

    //
    // Dump partition Information
    // Contains dump partition offset
    //
    DISK_PARTITION_INFO PartitionInfo;

    //
    // Filter driver specific data
    //
    PVOID DumpData;

#if (NTDDI_VERSION >= NTDDI_WIN8)

    //
    // Add ability to extend this structure in a compatiblity-friendly
    // way by adding a size field that allows dump filters to determine
    // if a field can be accessed or not by comparing size of structure
    // in bytes with the field offset.
    //
    ULONG Size;

    //
    // Flags fields
    //
    ULONG Flags;
#endif

} FILTER_EXTENSION, *PFILTER_EXTENSION;

#define DUMP_FILTER_EXT_FLAG_DUMP_DEVICE_POWER_OFF    0x1

//
// Size of FILTER_EXTENSION structure
//
#define DUMP_FILTER_EXTENSION_SIZE_V1    (FIELD_OFFSET(FILTER_EXTENSION, Size))
#define DUMP_FILTER_EXTENSION_SIZE_V2    (sizeof(FILTER_EXTENSION))

typedef
NTSTATUS
DUMP_START (
    _In_ PFILTER_EXTENSION FilterExtension
    );
typedef DUMP_START *PDUMP_START;

typedef
NTSTATUS
DUMP_WRITE (
    _In_ PFILTER_EXTENSION FilterExtension,
    _Inout_ PLARGE_INTEGER DiskByteOffset,
    _Inout_ PMDL Mdl
    );
typedef DUMP_WRITE *PDUMP_WRITE;

typedef
NTSTATUS
DUMP_FINISH (
    _In_ PFILTER_EXTENSION FilterExtension
    );
typedef DUMP_FINISH *PDUMP_FINISH;

typedef
NTSTATUS
DUMP_UNLOAD (
    _In_ PFILTER_EXTENSION FilterExtension
    );
typedef DUMP_UNLOAD *PDUMP_UNLOAD;

#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef
NTSTATUS
DUMP_READ (
    _In_ PFILTER_EXTENSION FilterExtension,
    _In_ PLARGE_INTEGER DiskByteOffset,
    _In_ PMDL Mdl
    );
typedef DUMP_READ *PDUMP_READ;
#endif 

//
// Define the filter driver call table structure
//

typedef struct _FILTER_INITIALIZATION_DATA {

    //
    // Major version of the structure
    // Set to DUMP_FILTER_MAJOR_VERSION
    //
    ULONG MajorVersion;

    //
    // Major version of the structure
    // Set to DUMP_FILTER_MINOR_VERSION
    //
    ULONG MinorVersion;

    //
    // Pointer to the dump init routine
    // This will be called when the dump starts
    //
    PDUMP_START DumpStart;

    //
    // Pointer to the write routine
    // This will be called before every write
    //
    PDUMP_WRITE DumpWrite;

    //
    // Pointer to the dump finish routine
    // This will be called when the dump completes
    //
    PDUMP_FINISH DumpFinish;

    //
    // Pointer to the dump unload routine
    // This will be called before unloading the driver
    //
    PDUMP_UNLOAD DumpUnload;

    //
    // Filter driver specific data
    //
    PVOID DumpData;

    //
    // Maximum number of pages per dump write.
    //
    ULONG MaxPagesPerWrite;

    //
    // Flags.
    //
    ULONG Flags;

#if (NTDDI_VERSION >= NTDDI_WIN8)

    //
    // Pointer to the dump read routine
    // This will be called after each read from the device
    //
    PDUMP_READ  DumpRead;
#endif

} FILTER_INITIALIZATION_DATA, *PFILTER_INITIALIZATION_DATA;

//
// FILTER_INITIALIZATION_DATA flags
//
#define DUMP_FILTER_FLAG_SYSTEM_SUPPORT_READ	             0x1
#define DUMP_FILTER_FLAG_SYSTEM_SUPPORT_FILTER_EXTENSION_EX  0x2


#endif // __NTDDDUMP_H__


