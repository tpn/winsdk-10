/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    diskguid.h

Abstract:

    GPT disk GUIDs.

Revision History:

--*/
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


//
// GPT Partition Type GUIDs
//
// need these GUIDs outside conditional includes so that user can
//   #include <ntdddisk.h> in precompiled header
//   #include <initguid.h> in a single source file
//   #include <ntdddisk.h> in that source file a second time to instantiate the GUIDs
//

#ifdef DEFINE_GUID

//
// Make sure FAR is defined...
//
#ifndef FAR
#ifdef _WIN32
#define FAR
#else
#define FAR _far
#endif
#endif


//
// Define the GPT partition guids known by disk drivers and volume managers.
//

DEFINE_GUID(PARTITION_ENTRY_UNUSED_GUID,    0x00000000L, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);    // Entry unused
DEFINE_GUID(PARTITION_SYSTEM_GUID,          0xC12A7328L, 0xF81F, 0x11D2, 0xBA, 0x4B, 0x00, 0xA0, 0xC9, 0x3E, 0xC9, 0x3B);    // EFI system partition
DEFINE_GUID(PARTITION_MSFT_RESERVED_GUID,   0xE3C9E316L, 0x0B5C, 0x4DB8, 0x81, 0x7D, 0xF9, 0x2D, 0xF0, 0x02, 0x15, 0xAE);    // Microsoft reserved space                                        
DEFINE_GUID(PARTITION_BASIC_DATA_GUID,      0xEBD0A0A2L, 0xB9E5, 0x4433, 0x87, 0xC0, 0x68, 0xB6, 0xB7, 0x26, 0x99, 0xC7);    // Basic data partition
DEFINE_GUID(PARTITION_LDM_METADATA_GUID,    0x5808C8AAL, 0x7E8F, 0x42E0, 0x85, 0xD2, 0xE1, 0xE9, 0x04, 0x34, 0xCF, 0xB3);    // Logical Disk Manager metadata partition
DEFINE_GUID(PARTITION_LDM_DATA_GUID,        0xAF9B60A0L, 0x1431, 0x4F62, 0xBC, 0x68, 0x33, 0x11, 0x71, 0x4A, 0x69, 0xAD);    // Logical Disk Manager data partition
DEFINE_GUID(PARTITION_MSFT_RECOVERY_GUID,   0xDE94BBA4L, 0x06D1, 0x4D40, 0xA1, 0x6A, 0xBF, 0xD5, 0x01, 0x79, 0xD6, 0xAC);    // Microsoft recovery partition
DEFINE_GUID(PARTITION_CLUSTER_GUID,         0xDB97DBA9L, 0x0840, 0x4BAE, 0x97, 0xF0, 0xFF, 0xB9, 0xA3, 0x27, 0xC7, 0xE1);    // Cluster metadata partition
DEFINE_GUID(PARTITION_MSFT_SNAPSHOT_GUID,   0xCADDEBF1L, 0x4400, 0x4DE8, 0xB1, 0x03, 0x12, 0x11, 0x7D, 0xCF, 0x3C, 0xCF);    // Microsoft shadow copy partition
DEFINE_GUID(PARTITION_SPACES_GUID,          0xE75CAF8FL, 0xF680, 0x4CEE, 0xAF, 0xA3, 0xB0, 0x01, 0xE5, 0x6E, 0xFC, 0x2D);    // Storage Spaces protective partition
DEFINE_GUID(PARTITION_PATCH_GUID,           0x8967A686L, 0x96AA, 0x6AA8, 0x95, 0x89, 0xA8, 0x42, 0x56, 0x54, 0x10, 0x90);    // Patch partition
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

