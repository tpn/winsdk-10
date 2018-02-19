/*++

Copyright (c) 1997-1999  Microsoft Corporation

Module Name:

    ntagp.h

Abstract:

    This file defines the external interface for the AGP bus filter driver


Revision History:

--*/
#ifndef _NTAGP_
#define _NTAGP_

#if _MSC_VER > 1000
#pragma once
#endif

typedef struct _AGP_INFO_COMMON
{
    PCI_AGP_CAPABILITY  MasterCap;
    PCI_AGP_CAPABILITY  TargetCap;    
    USHORT              DeviceId;
    USHORT              VendorId;
    USHORT              SubVendorId;
    USHORT              SubSystemId;
    UCHAR               HwRevisionId;
    ULONG               VerifierFlags;
    BOOLEAN             GuardPageCorruption;        
}AGP_INFO_COMMON, *PAGP_INFO_COMMON;

typedef struct _AGP_INFO_DRIVER
{
    ULONG               AGPReg1;
    ULONG               AGPReg2;              
    PHYSICAL_ADDRESS    ApertureStart;
    PHYSICAL_ADDRESS    GartTranslationTable;
    ULONG               ApertureLength;
}AGP_INFO_DRIVER, *PAGP_INFO_DRIVER;

typedef struct
{    
    //
    // This is gerneic info collected by the AgpLib
    //
    AGP_INFO_COMMON CommonInfo;

    //
    // The following data is collected differently by each AGP driver
    //
    AGP_INFO_DRIVER DriverInfo;    
}AGP_INFO, *PAGP_INFO;

DEFINE_GUID(GUID_AGP_BUS_INTERFACE_STANDARD, 0x2ef74803, 0xd8d3, 0x11d1, 0x9c, 0xaa, 0x00, 0xc0, 0xf0, 0x16, 0x56, 0x36 );
//
// Define AGP Interface version
//
#define AGP_BUS_INTERFACE_V1 1
#define AGP_BUS_INTERFACE_V2 2
#define AGP_BUS_INTERFACE_V3 3
#define AGP_BUS_INTERFACE_V4 4
#define AGP_BUS_INTERFACE_V5 5

//
// Define AGP Capabilities field
//
#define AGP_CAPABILITIES_MAP_PHYSICAL       0x00000001
#define AGP_CAPABILITIES_CACHE_COHERENT     0x00000002
#define AGP_CAPABILITIES_REQUIRES_GPU_FLUSH 0x00000004

//
// Video can disable SBA and/or FW by OR'ing these into AgpSetRate's AgpRate
// parameter
//
#define AGP_SET_RATE_DISABLE_SBA 0x00010000
#define AGP_SET_RATE_DISABLE_FW  0x00020000

typedef
NTSTATUS
(*PAGP_BUS_SET_RATE)(
    IN PVOID AgpContext,
    IN ULONG AgpRate
    );

typedef
NTSTATUS
(*PAGP_BUS_RESERVE_MEMORY)(
    IN PVOID AgpContext,
    IN ULONG NumberOfPages,
    IN MEMORY_CACHING_TYPE MemoryType,
    OUT PVOID *MapHandle,
    OUT OPTIONAL PHYSICAL_ADDRESS *PhysicalAddress
    );

typedef
NTSTATUS
(*PAGP_BUS_RELEASE_MEMORY)(
    IN PVOID AgpContext,
    IN PVOID MapHandle
    );

typedef
NTSTATUS
(*PAGP_BUS_COMMIT_MEMORY)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    IN OUT PMDL Mdl OPTIONAL,
    OUT PHYSICAL_ADDRESS *MemoryBase
    );

typedef
NTSTATUS
(*PAGP_BUS_FREE_MEMORY)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages
    );

typedef
NTSTATUS
(*PAGP_GET_MAPPED_PAGES)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    OUT PMDL Mld
    );

typedef
NTSTATUS
(*PAGP_MAP_MEMORY)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    IN PMDL Mdl,
    OUT PHYSICAL_ADDRESS *MemoryBase    
    );

typedef
NTSTATUS
(*PAGP_UNMAP_MEMORY)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    IN PMDL Mdl
    );

typedef
NTSTATUS
(*PAGP_FLUSH_CHIPSET_CACHES)(
    IN PVOID AgpContext
    );
    
typedef
NTSTATUS
(*PAGP_CHECK_INTEGRITY)(
    IN PVOID AgpContext
    );

typedef
NTSTATUS
(*PAGP_MAP_MEMORY_EX)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    IN PMDL Mdl,
    IN OPTIONAL MEMORY_CACHING_TYPE *CacheTypeOverride,
    OUT PHYSICAL_ADDRESS *MemoryBase    
    );

typedef
NTSTATUS
(*PAGP_UNMAP_MEMORY_EX)(
    IN PVOID AgpContext,
    IN PVOID MapHandle,
    IN ULONG NumberOfPages,
    IN ULONG OffsetInPages,
    IN PMDL Mdl
    );

typedef
NTSTATUS
(*PAGP_FLUSH_GART_TLB)(
    IN PVOID AgpContext
    );

typedef
NTSTATUS
(*PAGP_CHECK_GUARD_PAGE)(
    IN PVOID AgpContext,
    IN ULONG Flags,
    IN ULONG ULongsToCheck
    );

typedef
VOID
(*PAGP_GET_INFO)(
    IN PVOID AgpContext,
    OUT PAGP_INFO AgpInfo
    );


#define AGP_GUARD_PAGE_CHECK_FIRST_ULONG        0x00000001
#define AGP_GUARD_PAGE_CHECK_USE_SAME_OFFSET    0x00000002
#define AGP_GUARD_PAGE_CHECK_DO_NOT_BUGCHECK    0x00000004

typedef struct _AGP_BUS_INTERFACE_STANDARD {
    //
    // generic interface header
    //
    USHORT Size;
    USHORT Version;
    PVOID AgpContext;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    //
    // AGP bus interfaces (Version 1.0)
    //

    ULONG Capabilities;
    PAGP_BUS_RESERVE_MEMORY ReserveMemory;
    PAGP_BUS_RELEASE_MEMORY ReleaseMemory;
    PAGP_BUS_COMMIT_MEMORY CommitMemory;
    PAGP_BUS_FREE_MEMORY FreeMemory;
    PAGP_GET_MAPPED_PAGES GetMappedPages;
    
    //
    // New functionnality in Version 2.0 of the interface.
    //
    
    PAGP_BUS_SET_RATE SetRate;
    
    //
    // New functionnality in Version 3.0 of the interface.
    //
    
    SIZE_T AgpSize;
    PHYSICAL_ADDRESS AgpBase;
    PHYSICAL_ADDRESS MaxPhysicalAddress;
    PAGP_MAP_MEMORY MapMemory;
    PAGP_UNMAP_MEMORY UnMapMemory;
    
    //
    // New functionnality in Version 4.0 of the interface.
    //    
    
    PAGP_FLUSH_CHIPSET_CACHES FlushChipsetCaches;
    PAGP_CHECK_INTEGRITY CheckIntegrity;

    //
    // New functionnality in Version 5.0 of the interface.
    //    
    PAGP_MAP_MEMORY_EX  MapMemoryEx;
    PAGP_UNMAP_MEMORY_EX UnMapMemoryEx;
    PAGP_FLUSH_GART_TLB FlushGartTLB;   
    PAGP_CHECK_GUARD_PAGE CheckGuardPage;
    PAGP_GET_INFO GetAgpInfo;
} AGP_BUS_INTERFACE_STANDARD, *PAGP_BUS_INTERFACE_STANDARD;

//
// Support for older version of the interface.
//

#define AGP_BUS_INTERFACE_V1_SIZE \
    (FIELD_OFFSET(AGP_BUS_INTERFACE_STANDARD,SetRate))

#define AGP_BUS_INTERFACE_V2_SIZE \
    (FIELD_OFFSET(AGP_BUS_INTERFACE_STANDARD, AgpSize))
    
#define AGP_BUS_INTERFACE_V3_SIZE \
    (FIELD_OFFSET(AGP_BUS_INTERFACE_STANDARD, FlushChipsetCaches))    

#define AGP_BUS_INTERFACE_V4_SIZE \
    (FIELD_OFFSET(AGP_BUS_INTERFACE_STANDARD, MapMemoryEx))  

#endif
