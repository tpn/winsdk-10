/*++ BUILD Version: 0011    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    arc.h

Abstract:

    This header file defines the ARC system firmware interface and the
    NT structures that are dependent on ARC types.

    This module may not contain any definitions that are exposed in
    public kit headers.

Author:

    David N. Cutler (davec) 18-May-1991


Revision History:

    James E. Moe (jamoe) 23-Jan-2003
        Public/Private header split

--*/

#ifndef _ARC_
#define _ARC_

#include "profiles.h"
#include <arc_x.h>

#if defined(_MSC_VER)
#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4820) /* padding added after data member */
#endif
#pragma warning(disable:4201) /* nonstandard extension used : nameless struct/union */
#pragma warning(disable:4214) /* nonstandard extension used : bit field types other then int */
#endif // defined(_MSC_VER)

//
// Define ARC_STATUS type.
//

typedef ULONG ARC_STATUS;

// begin_ntddk
//
// Define configuration routine types.
//
// Configuration information.
//
// end_ntddk

typedef enum _CONFIGURATION_CLASS {
    SystemClass,
    ProcessorClass,
    CacheClass,
    AdapterClass,
    ControllerClass,
    PeripheralClass,
    MemoryClass,
    MaximumClass
} CONFIGURATION_CLASS, *PCONFIGURATION_CLASS;

typedef struct _CONFIGURATION_COMPONENT {
    CONFIGURATION_CLASS Class;
    CONFIGURATION_TYPE Type;
    DEVICE_FLAGS Flags;
    USHORT Version;
    USHORT Revision;
    ULONG Key;
    union {
        ULONG AffinityMask;
        struct {
            USHORT Group;
            USHORT GroupIndex;
        };
    };
    ULONG ConfigurationDataLength;
    ULONG IdentifierLength;
    CHAR * FIRMWARE_PTR Identifier;
} CONFIGURATION_COMPONENT, * FIRMWARE_PTR PCONFIGURATION_COMPONENT;

//
// Define configuration data structure used in all systems.
//

typedef struct _CONFIGURATION_COMPONENT_DATA {
    struct _CONFIGURATION_COMPONENT_DATA *Parent;
    struct _CONFIGURATION_COMPONENT_DATA *Child;
    struct _CONFIGURATION_COMPONENT_DATA *Sibling;
    CONFIGURATION_COMPONENT ComponentEntry;
    PVOID ConfigurationData;
} CONFIGURATION_COMPONENT_DATA, *PCONFIGURATION_COMPONENT_DATA;


//
// Define memory allocation structures used in all systems.
//

typedef enum _TYPE_OF_MEMORY {
    LoaderExceptionBlock,                                   //  0
    LoaderSystemBlock,                                      //  1
    LoaderFree,                                             //  2
    LoaderBad,                                              //  3
    LoaderLoadedProgram,                                    //  4
    LoaderFirmwareTemporary,                                //  5
    LoaderFirmwarePermanent,                                //  6
    LoaderOsloaderHeap,                                     //  7
    LoaderOsloaderStack,                                    //  8
    LoaderSystemCode,                                       //  9
    LoaderHalCode,                                          //  a
    LoaderBootDriver,                                       //  b
    LoaderConsoleInDriver,                                  //  c
    LoaderConsoleOutDriver,                                 //  d
    LoaderStartupDpcStack,                                  //  e
    LoaderStartupKernelStack,                               //  f
    LoaderStartupPanicStack,                                // 10
    LoaderStartupPcrPage,                                   // 11
    LoaderStartupPdrPage,                                   // 12
    LoaderRegistryData,                                     // 13
    LoaderMemoryData,                                       // 14
    LoaderNlsData,                                          // 15
    LoaderSpecialMemory,                                    // 16
    LoaderBBTMemory,                                        // 17
    LoaderZero,                                             // 18
    LoaderXIPRom,                                           // 19
    LoaderHALCachedMemory,                                  // 1a
    LoaderLargePageFiller,                                  // 1b
    LoaderErrorLogMemory,                                   // 1c
    LoaderVsmMemory,                                        // 1d
    LoaderFirmwareCode,                                     // 1e
    LoaderFirmwareData,                                     // 1f
    LoaderFirmwareReserved,                                 // 20
    LoaderMaximum                                           // 21
} TYPE_OF_MEMORY;

typedef struct _MEMORY_ALLOCATION_DESCRIPTOR {
    LIST_ENTRY ListEntry;
    TYPE_OF_MEMORY MemoryType;
    ULONG_PTR BasePage;
    ULONG_PTR PageCount;
} MEMORY_ALLOCATION_DESCRIPTOR, *PMEMORY_ALLOCATION_DESCRIPTOR;

//
// Define loader parameter block structure.
//

typedef struct _NLS_DATA_BLOCK {
    PVOID AnsiCodePageData;
    PVOID OemCodePageData;
    PVOID UnicodeCaseTableData;
} NLS_DATA_BLOCK, *PNLS_DATA_BLOCK;

typedef struct _VHD_DISK_SIGNATURE {
    ULONG ParentPartitionNumber;
    UCHAR BootDevice[ANYSIZE_ARRAY];
} VHD_DISK_SIGNATURE, *PVHD_DISK_SIGNATURE;

typedef struct _ARC_DISK_SIGNATURE {
    LIST_ENTRY ListEntry;
    ULONG   Signature;
    PCHAR   ArcName;
    ULONG   CheckSum;
    BOOLEAN ValidPartitionTable;
    BOOLEAN xInt13;
    BOOLEAN IsGpt;
    UCHAR Reserved;
    UCHAR GptSignature[16];
    PVHD_DISK_SIGNATURE VhdSignature;
} ARC_DISK_SIGNATURE, *PARC_DISK_SIGNATURE;

typedef struct _ARC_DISK_INFORMATION {
    LIST_ENTRY DiskSignatures;
} ARC_DISK_INFORMATION, *PARC_DISK_INFORMATION;

typedef struct _I386_LOADER_BLOCK {

#if defined(_X86_) || defined(_AMD64_)

    PVOID CommonDataArea;
    ULONG MachineType;      // Temporary only
    ULONG VirtualBias;

#else

    ULONG PlaceHolder;

#endif

} I386_LOADER_BLOCK, *PI386_LOADER_BLOCK;

typedef struct _ARM_LOADER_BLOCK {

#if defined(_ARM_) || defined(_ARM64_)

    ULONG_PTR VirtualBias;
    PVOID KdCpuBuffer;

#else

    ULONG PlaceHolder;

#endif

} ARM_LOADER_BLOCK, *PARM_LOADER_BLOCK;

#define NUMBER_OF_LOADER_TR_ENTRIES 8

typedef struct _LOADER_PERFORMANCE_DATA {
    ULONGLONG StartTime;
    ULONGLONG EndTime;
} LOADER_PERFORMANCE_DATA, *PLOADER_PERFORMANCE_DATA;

#if !defined(BOOT_ENTROPY_RESULT_CODE_D)

#define BOOT_ENTROPY_RESULT_CODE_D

//
// Entropy result codes and source IDs
// for Boot entropy sources are defined both in arc.h and
// ntexapi.h. These two copies must be kept identical.
//

typedef enum _BOOT_ENTROPY_SOURCE_RESULT_CODE {
    BootEntropySourceStructureUninitialized = 0,
    BootEntropySourceDisabledByPolicy = 1,
    BootEntropySourceNotPresent = 2,
    BootEntropySourceError = 3,
    BootEntropySourceSuccess = 4,
} BOOT_ENTROPY_SOURCE_RESULT_CODE, *PBOOT_ENTROPY_SOURCE_RESULT_CODE;

typedef enum _BOOT_ENTROPY_SOURCE_ID {
    BootEntropySourceNone = 0,
    BootEntropySourceSeedfile = 1,
    BootEntropySourceExternal = 2,
    BootEntropySourceTpm = 3,
    BootEntropySourceRdrand = 4,
    BootEntropySourceTime = 5,
    BootEntropySourceAcpiOem0 = 6,
    BootEntropySourceUefi = 7,
    BootEntropySourceCng = 8,
    BootMaxEntropySources = 8,
} BOOT_ENTROPY_SOURCE_ID;

//
// The SORTPP tool can't handle array sizes expressed in terms of enums
// This hack can be removed when the tool is fixed
//

#define BootMaxEntropySources (8)

#define BOOT_ENTROPY_SOURCE_DATA_SIZE    (64)
#define BOOT_RNG_BYTES_FOR_NTOSKRNL      (1024)
#define BOOT_SEED_BYTES_FOR_CNG          (48)

//
// The boot environment uses the following bytes from the ntoskrnl RNG data
// region.  The kernel should consider the first
// BOOT_BL_NTOSKRNL_RNG_BYTES_USED bytes already consumed.
//

#define BOOT_BL_NTOSKRNL_RNG_BYTES_USED  (55 * sizeof(ULONG))

#endif // BOOT_ENTROPY_RESULT_CODE_D

//
// Boot entropy information
// This is the data that Boot passes to NT that contains the
// entropy & RNG information.
// These are the Boot versions of these structures.
// The name contains the string 'LDR' to distinguish it from the
// OS loader equivalents in ntexapi_h.w
//

typedef struct _BOOT_ENTROPY_SOURCE_LDR_RESULT {
    BOOT_ENTROPY_SOURCE_ID SourceId;
    ULONGLONG Policy;
    BOOT_ENTROPY_SOURCE_RESULT_CODE ResultCode;
    NTSTATUS ResultStatus;
    ULONGLONG Time; // in BlArchGetPerformanceCounter() units
    ULONG EntropyLength;
    UCHAR EntropyData[BOOT_ENTROPY_SOURCE_DATA_SIZE];
} BOOT_ENTROPY_SOURCE_LDR_RESULT, *PBOOT_ENTROPY_SOURCE_LDR_RESULT;

//
// EFI Offline crashdump configuration table definition.
//

#define OFFLINE_CRASHDUMP_VERSION_1 1
#define OFFLINE_CRASHDUMP_VERSION_2 2
#define OFFLINE_CRASHDUMP_VERSION_MAX OFFLINE_CRASHDUMP_VERSION_2

typedef struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 {
    ULONG Version;
    ULONG AbnormalResetOccurred;
    ULONG OfflineMemoryDumpCapable;

    //
    // Version_2 additional members.
    //

    PHYSICAL_ADDRESS ResetDataAddress;
    ULONG ResetDataSize;
} OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2, *POFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2;

//
// Original first version definition. Now only used in winload.efi when interfacing with firmware, and in
// sysinfo.c when interfacing with higher level sw above the kernel, to maintain backward compatibility.
//

typedef struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V1 {
    ULONG Version;
    ULONG AbnormalResetOccurred;
    ULONG OfflineMemoryDumpCapable;
} OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V1, *POFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V1;

typedef OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OFFLINE_CRASHDUMP_CONFIGURATION_TABLE;
typedef POFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 POFFLINE_CRASHDUMP_CONFIGURATION_TABLE;

//
// The constant BootMaxEntropySources is defined both in arc.w and ntexapi_h.w.
// If these ever get out of sync, different components will disagree on the value,
// and thus on the size of the array below.
// To help detect this type of bug we add a field with this constant so that the
// CHKed builds can assert on it.
//

typedef struct _BOOT_ENTROPY_LDR_RESULT {
    ULONG maxEntropySources;
    BOOT_ENTROPY_SOURCE_LDR_RESULT EntropySourceResult[BootMaxEntropySources];
    UCHAR SeedBytesForCng[BOOT_SEED_BYTES_FOR_CNG];
    UCHAR RngBytesForNtoskrnl[BOOT_RNG_BYTES_FOR_NTOSKRNL];
} BOOT_ENTROPY_LDR_RESULT, *PBOOT_ENTROPY_LDR_RESULT;

//
// Hypervisor specific loader parameters.
//

typedef struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION {

    //
    // Hypervisor crashdump pages if present.
    //

    ULONG HypervisorCrashdumpAreaPageCount;
    ULONGLONG HypervisorCrashdumpAreaSpa;

    //
    // Hypervisor launch status.
    //

    ULONGLONG HypervisorLaunchStatus;
    ULONGLONG HypervisorLaunchStatusArg1;
    ULONGLONG HypervisorLaunchStatusArg2;
    ULONGLONG HypervisorLaunchStatusArg3;
    ULONGLONG HypervisorLaunchStatusArg4;

} LOADER_PARAMETER_HYPERVISOR_EXTENSION, *PLOADER_PARAMETER_HYPERVISOR_EXTENSION;

//
// Code Integrity specific loader paramets.
//

typedef struct _LOADER_PARAMETER_CI_EXTENSION {

    //
    // Offset and size of various serialized data.
    //

    ULONG RevocationListOffset;
    ULONG RevocationListSize;

    _Field_size_bytes_(RevocationListSize)
    UCHAR SerializedData[ANYSIZE_ARRAY];

} LOADER_PARAMETER_CI_EXTENSION, *PLOADER_PARAMETER_CI_EXTENSION;

typedef struct _HAL_EXTENSION_INSTANCE_ENTRY {

    //
    // Link into HalExtensionInstanceList in HAL_EXTENSION_MODULE_ENTRY.
    //

    LIST_ENTRY ListEntry;

    //
    // Offset from the start of the ACPI Core System Resource Table to
    // the Resource Group associate with this instance.
    //

    ULONG OffsetIntoCsrt;
} HAL_EXTENSION_INSTANCE_ENTRY, *PHAL_EXTENSION_INSTANCE_ENTRY;

typedef struct _HAL_EXTENSION_MODULE_ENTRY {

    //
    // Link into HalExtensionList in LOADER_PARAMETER_EXTENSION.
    //

    LIST_ENTRY ListEntry;

    //
    // Pointer to the associated module entry on the LoadOrderListHead list.
    // This keeps info on the module name and entry point, among other things.
    //

    PVOID HalExtensionInfo;

    //
    // List of HAL_EXTENSION_INSTANCE_ENTRY structures tracking which Resource
    // Groups this extension is installed on.
    //

    LIST_ENTRY HalExtensionInstanceList;

    //
    // Name and load status of the HAL Extension for debugging purposes.
    //

    NTSTATUS ModuleLoadStatus;
    PCHAR ModuleName;
    PCHAR ModulePath;

} HAL_EXTENSION_MODULE_ENTRY, *PHAL_EXTENSION_MODULE_ENTRY;

typedef struct _LOADER_BUGCHECK_PARAMETERS {

    //
    // Bugcheck parameters passed to the kernel.
    //

    ULONG BugcheckCode;
    ULONG_PTR BugcheckParameter1;
    ULONG_PTR BugcheckParameter2;
    ULONG_PTR BugcheckParameter3;
    ULONG_PTR BugcheckParameter4;
} LOADER_BUGCHECK_PARAMETERS, *PLOADER_BUGCHECK_PARAMETERS;

//
// Internal boot flags definitions.
//

#define INTERNAL_BOOT_FLAGS_NONE               0x00000000
#define INTERNAL_BOOT_FLAGS_UTC_BOOT_TIME      0x00000001
#define INTERNAL_BOOT_FLAGS_RTC_BOOT_TIME      0x00000002
#define INTERNAL_BOOT_FLAGS_NO_LEGACY_SERVICES 0x00000004

typedef struct _LOADER_PARAMETER_EXTENSION {
    ULONG   Size; // set to sizeof (struct _LOADER_PARAMETER_EXTENSION)
    PROFILE_PARAMETER_BLOCK Profile;

    //
    // Errata Manager inf file.
    //

    PVOID   EmInfFileImage;
    ULONG   EmInfFileSize;

    //
    // Pointer to the triage block, if present.
    //

    PVOID TriageDumpBlock;

    struct _HEADLESS_LOADER_BLOCK *HeadlessLoaderBlock;

    struct _SMBIOS3_TABLE_HEADER *SMBiosEPSHeader;

    PVOID   DrvDBImage;   // Database used to identify "broken" drivers.
    ULONG   DrvDBSize;

    // If booting from the Network (PXE) then we will
    // save the Network boot params in this loader block
    struct _NETWORK_LOADER_BLOCK *NetworkLoaderBlock;

#if defined(_X86_)

    //
    // Pointers to IRQL translation tables that reside in the HAL
    // and are exposed to the kernel for use in the "inlined IRQL"
    // build
    //

    PUCHAR HalpIRQLToTPR;
    PUCHAR HalpVectorToIRQL;

#endif

    //
    // Firmware Location
    //

    LIST_ENTRY  FirmwareDescriptorListHead;

    //
    // Pointer to the in-memory copy of override ACPI tables.  The override
    // table file is a simple binary file with one or more ACPI tables laid
    // out one after another.
    //

    PVOID   AcpiTable;

    //
    // Size of override ACPI tables in bytes.
    //

    ULONG   AcpiTableSize;

    //
    // Various informational flags passed to OS via OS Loader.
    //

    struct {

        //
        // Variables describing the success of the previous boot - whether
        // booting into the OS was successful, and whether the arc from boot to
        // runtime to shutdown was successful.  Various types of system crashes
        // will cause one or both of these to be FALSE.
        //

        ULONG LastBootSucceeded:1;
        ULONG LastBootShutdown:1;

        //
        // A flag indicating whether the platform supports access to IO ports.
        //

        ULONG IoPortAccessSupported:1;

        //
        // A flag indicating whether or not the boot debugger persisted
        // through kernel initialization.
        //

        ULONG BootDebuggerActive:1;

        //
        // A flag indicating whether the system must enforce strong code
        // guarantees.
        //

        ULONG StrongCodeGuarantees:1;

        //
        // A flag indicating whether the system must enforce hard strong code
        // guarantees.
        //

        ULONG HardStrongCodeGuarantees:1;

        //
        // A flag indicating whether SID sharing disabled.
        //

        ULONG SidSharingDisabled:1;

        //
        // A flag indicating whether TPM was intialized successfully or not
        // by the OS loader during boot.
        //

        ULONG TpmInitialized: 1;

        //
        // A flag indicating whether the VSM code page has been configured and
        // is usable.
        //

        ULONG VsmConfigured:1;

        //
        // A flag indicating whether IUM is enabled.
        //

        ULONG IumEnabled:1;

        //
        // The remainder of the bits are reserved.
        //

        ULONG Reserved:22;
    };

    //
    // Loader runtime performance data.
    //

    PLOADER_PERFORMANCE_DATA LoaderPerformanceData;

    //
    // Boot application persistent data.
    //

    LIST_ENTRY BootApplicationPersistentData;

    //
    // Windows Memory Diagnostic Test Results.
    //

    PVOID WmdTestResult;

    //
    // Boot entry identifier.
    //

    GUID BootIdentifier;

    //
    // The number of pages to reserve for the resume application to use as
    // scratch space.  This should correspond to the boot environment's memory
    // footprint.
    //

    ULONG ResumePages;

    //
    // The crash dump header, if present.
    //

    PVOID DumpHeader;

    //
    // Boot graphics context.
    //

    PVOID BgContext;

    //
    // NUMA node locality information and group assignment data.
    //

    PVOID NumaLocalityInfo;
    PVOID NumaGroupAssignment;

    //
    // List of hives attached by loader
    //

    LIST_ENTRY AttachedHives;

    //
    // Number of entries in the MemoryCachingRequirements map.
    //

    ULONG MemoryCachingRequirementsCount;

    //
    // List of MEMORY_CACHING_REQUIREMENTS for the system.
    //

    PVOID MemoryCachingRequirements;

    //
    // Result of the Boot entropy gathering.
    //

    BOOT_ENTROPY_LDR_RESULT BootEntropyResult;

    //
    // Computed ITC/TSC frequency of the BSP in hertz.
    //

    ULONGLONG ProcessorCounterFrequency;

    //
    // Hypervisor specific information.
    //

    LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;

    //
    // Hardware configuration ID used to uniquelly identify the system.
    //

    GUID HardwareConfigurationId;

    //
    // List of HAL_EXTENSION_MODULE_ENTRY structures.
    //

    LIST_ENTRY HalExtensionModuleList;

    //
    // Contains most recent time from firmware, bootstat.dat and ntos build time.
    //

    LARGE_INTEGER SystemTime;

    //
    // Contains cycle counter timestamp at the time SystemTime value was read.
    //

    ULONGLONG TimeStampAtSystemTimeRead;

    //
    // Boot Flags that are passed to the SystemBootEnvironmentInformation class.
    //

    ULONGLONG BootFlags;

    //
    // Internal only flags that are passed to the kernel.
    //

    ULONGLONG InternalBootFlags;

    //
    // Pointer to the in-memory copy of the Wfs FP data.
    //

    PVOID   WfsFPData;

    //
    // Size of Wfs FP data in bytes.
    //

    ULONG   WfsFPDataSize;

    //
    // Loader bugcheck parameters for the kernel or extensions to act upon
    //

    LOADER_BUGCHECK_PARAMETERS BugcheckParameters;

    //
    // API set schema data.
    //

    PVOID ApiSetSchema;
    ULONG ApiSetSchemaSize;
    LIST_ENTRY ApiSetSchemaExtensions;

    //
    // The system's firmware version according to ACPI's FADT,
    // SMBIOS's BIOS information table, and EFI's system table
    // respectively.
    //

    UNICODE_STRING AcpiBiosVersion;
    UNICODE_STRING SmbiosVersion;
    UNICODE_STRING EfiVersion;

    //
    // Debugger Descriptor
    //

    struct _DEBUG_DEVICE_DESCRIPTOR *KdDebugDevice;

    //
    // EFI Offline crashdump configuration table.
    //

    OFFLINE_CRASHDUMP_CONFIGURATION_TABLE OfflineCrashdumpConfigurationTable;

    //
    // Manufacturing mode profile name.
    //

    UNICODE_STRING ManufacturingProfile;

    //
    // BBT Buffer to enable precise event based sampling.
    //

    PVOID BbtBuffer;

    //
    // Registry values to be passed to the kernel for calculation of Xsave Buffer Size on Intel platforms
    //

#if defined(_X86_) || defined (_AMD64_)

    ULONG64 XsaveAllowedFeatures;
    ULONG XsaveFlags;

#endif

    //
    // Boot options used by the OS loader.
    //

    PVOID BootOptions;

    //
    // Boot sequence tracking for reliability reporting.
    //

    ULONG BootId;

    //
    // Code Integrity configuration.
    //

    PLOADER_PARAMETER_CI_EXTENSION CodeIntegrityData;
    ULONG CodeIntegrityDataSize;

} LOADER_PARAMETER_EXTENSION, *PLOADER_PARAMETER_EXTENSION;

struct _HEADLESS_LOADER_BLOCK;
struct _SMBIOS_TABLE_HEADER;

typedef struct _NETWORK_LOADER_BLOCK {

    // Binary contents of the entire DHCP Acknowledgment
    // packet received by PXE.
    PUCHAR DHCPServerACK;
    ULONG DHCPServerACKLength;

    // Binary contents of the entire BINL Reply
    // packet received by PXE.
    PUCHAR BootServerReplyPacket;
    ULONG BootServerReplyPacketLength;

} NETWORK_LOADER_BLOCK, * PNETWORK_LOADER_BLOCK;

typedef struct _VIRTUAL_EFI_RUNTIME_SERVICES {

    //
    //  (Virtual) Entry points to each of the EFI Runtime services.
    //

    ULONG_PTR GetTime;
    ULONG_PTR SetTime;
    ULONG_PTR GetWakeupTime;
    ULONG_PTR SetWakeupTime;
    ULONG_PTR SetVirtualAddressMap;
    ULONG_PTR ConvertPointer;
    ULONG_PTR GetVariable;
    ULONG_PTR GetNextVariableName;
    ULONG_PTR SetVariable;
    ULONG_PTR GetNextHighMonotonicCount;
    ULONG_PTR ResetSystem;
    ULONG_PTR UpdateCapsule;
    ULONG_PTR QueryCapsuleCapabilities;
    ULONG_PTR QueryVariableInfo;

} VIRTUAL_EFI_RUNTIME_SERVICES, *PVIRTUAL_EFI_RUNTIME_SERVICES;

typedef struct _EFI_FIRMWARE_INFORMATION {
    ULONG FirmwareVersion;
    PVIRTUAL_EFI_RUNTIME_SERVICES VirtualEfiRuntimeServices;

    //
    // The return value from SetVirtualAddressMap call.
    //

    NTSTATUS SetVirtualAddressMapStatus;

    //
    // Number of mappings missed if any due to change in firmware
    // runtime memory map (for debugging).
    //

    ULONG MissedMappingsCount;

    //
    // The firmware resource list identifies firmware components that can
    // be updated via WU.
    //

    LIST_ENTRY FirmwareResourceList;

    //
    // The EFI memory map.
    //

    PVOID EfiMemoryMap;
    ULONG EfiMemoryMapSize;
    ULONG EfiMemoryMapDescriptorSize;

} EFI_FIRMWARE_INFORMATION, *PEFI_FIRMWARE_INFORMATION;

typedef struct _PCAT_FIRMWARE_INFORMATION {
    ULONG PlaceHolder;

} PCAT_FIRMWARE_INFORMATION, *PPCAT_FIRMWARE_INFORMATION;

typedef struct _FIRMWARE_INFORMATION_LOADER_BLOCK {
    struct {

        //
        // If set to TRUE, indicates that the system is running on EFI
        // firmware.
        //

        ULONG FirmwareTypeEfi: 1;

        //
        // A flag indicating whether EFI runtime service calls must be routed
        // through IUM.
        //

        ULONG EfiRuntimeUseIum: 1;

        //
        // A flag indicating whether EFI runtime code and data pages are
        // separate and protected with RW or RX protections.
        //

        ULONG EfiRuntimePageProtectionEnabled: 1;

        //
        // A flag indicating whether the firmware supports code and data page
        // separation with restricted protections.
        //

        ULONG EfiRuntimePageProtectionSupported: 1;

#if defined (_ARM64_)

        //
        // If set to TRUE, indicates that the system EFI was started in EL2
        // and therefore has something running there (hypervisor/microvisor).
        // Also, this is where APs will start (EL2), and need to be directed
        // to EL1 properly before they can start in the HLOS.
        //

        ULONG FirmwareStartedInEL2: 1;

        ULONG Reserved: 27;

#else

        ULONG Reserved: 28;

#endif

    };

    union {
        EFI_FIRMWARE_INFORMATION EfiInformation;
        PCAT_FIRMWARE_INFORMATION PcatInformation;
    } u;

} FIRMWARE_INFORMATION_LOADER_BLOCK, *PFIRMWARE_INFORMATION_LOADER_BLOCK;

//
// Boot loader data table entry. Each of the load lists in the parameter block
// consist of boot loader data table entries.
//
// N.B. This structure requires ntldr.h to have been included.
//

#if defined(_NTSYSTEM_) || (defined(NT_INCLUDED) && !defined(_NTHAL_INCLUDED_))

#define BLDR_FLAGS_CORE_DRIVER_DEPENDENT_DLL 0x00000001
#define BLDR_FLAGS_CORE_EXTENSION_DEPENDENT_DLL 0x00000002

typedef struct _BLDR_DATA_TABLE_ENTRY {
    KLDR_DATA_TABLE_ENTRY KldrEntry;
    UNICODE_STRING CertificatePublisher;
    UNICODE_STRING CertificateIssuer;
    PVOID ImageHash;
    PVOID CertificateThumbprint;
    ULONG ImageHashAlgorithm;
    ULONG ThumbprintHashAlgorithm;
    ULONG ImageHashLength;
    ULONG CertificateThumbprintLength;
    ULONG LoadInformation;
    ULONG Flags;
} BLDR_DATA_TABLE_ENTRY, *PBLDR_DATA_TABLE_ENTRY;

#endif

typedef struct _LOADER_PARAMETER_BLOCK {
    ULONG OsMajorVersion;
    ULONG OsMinorVersion;
    ULONG Size;
    ULONG Reserved;
    LIST_ENTRY LoadOrderListHead;
    LIST_ENTRY MemoryDescriptorListHead;

    //
    // Define the Core, TPM Core and Core Extensions driver lists. The
    // lists are organized as follows:
    //
    //  1. Core Drivers: This list consists of drivers that ELAM drivers and
    //         3rd party Core Extensions depend upon (e.g. WDF, CNG.sys). All
    //         drivers in this group should be MS-supplied and thus MS-signed.
    //
    //  2. ELAM drivers. This list consists of 3rd party ELAM drivers. These
    //         drivers need to be signed with ELAM certificate.
    //
    //  3. Core Extensions: This list consists of 3rd party drivers (viz.
    //         Platform Extensions and Tree drivers) that TPM Core drivers
    //         depend upon. These drivers need to be signed with Core Extension
    //         certificate.
    //
    //  4. TPM Core: This list consists of TPM driver and bus drivers (e.g.
    //         ACPI, PCI) that are necessary to enumerate TPM. All drivers in
    //         this group should be MS-supplied and thus MS-signed.
    //
    //  5. Boot Driver: This list contains the rest of the boot drivers.
    //

    LIST_ENTRY BootDriverListHead;
    LIST_ENTRY EarlyLaunchListHead;
    LIST_ENTRY CoreDriverListHead;
    LIST_ENTRY CoreExtensionsDriverListHead;
    LIST_ENTRY TpmCoreDriverListHead;
    ULONG_PTR KernelStack;
    ULONG_PTR Prcb;
    ULONG_PTR Process;
    ULONG_PTR Thread;
    ULONG KernelStackSize;
    ULONG RegistryLength;
    PVOID RegistryBase;
    PCONFIGURATION_COMPONENT_DATA ConfigurationRoot;
    PCHAR ArcBootDeviceName;
    PCHAR ArcHalDeviceName;
    PCHAR NtBootPathName;
    PCHAR NtHalPathName;
    PCHAR LoadOptions;
    PNLS_DATA_BLOCK NlsData;
    PARC_DISK_INFORMATION ArcDiskInformation;
    PLOADER_PARAMETER_EXTENSION Extension;
    union {
        I386_LOADER_BLOCK I386;
        ARM_LOADER_BLOCK Arm;
    } u;

    FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;
} LOADER_PARAMETER_BLOCK, *PLOADER_PARAMETER_BLOCK;


#define LHB_SYSTEM_HIVE      0x01
#define LHB_BOOT_PARTITION   0x02
#define LHB_SYSTEM_PARTITION 0x04
#define LHB_ELAM_HIVE        0x08
#define LHB_MOUNT_VOLATILE   0x10

#define LHB_VALID_FLAGS     (LHB_SYSTEM_HIVE | LHB_BOOT_PARTITION | LHB_SYSTEM_PARTITION | LHB_ELAM_HIVE | LHB_MOUNT_VOLATILE)

typedef struct _LOADER_HIVE_BLOCK {
    LIST_ENTRY Entry;
    PWCHAR FilePath;
    ULONG Flags;
    PVOID RegistryBase;
    ULONG RegistryLength;
    PWCHAR RegistryName;
    PWCHAR RegistryParent;

} LOADER_HIVE_BLOCK, *PLOADER_HIVE_BLOCK;

#if defined (_MSC_VER)
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4201) /* nonstandard extension used : nameless struct/union */
#pragma warning(default:4214) /* nonstandard extension used : bit field types other then int */
#endif
#endif

#endif // _ARC_

