/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ufs.h

Abstract:

    Universal Flash Storage (UFS) command protocol related definitions

Revision:

    May. 2017 - Align to UFS spec version 2.1

--*/

#pragma once

//
// Well Defined Lun IDs
//

#define UFS_POWER_LUN_ID                    0xD0
#define UFS_RPMB_LUN_ID                     0xC4
#define UFS_BOOT_LUN_ID                     0xB0

//
// Macros to Define MAX values for LUNs and Request Lists
//

#define UFS_MAX_TRANSFER_LIST_SIZE          0x20
#define UFS_MAX_TASK_MAN_LIST_SIZE          0x08

#define UFS_MAX_NUM_LU                      0x08

//
// Query UPIU Descriptor Identification (IDN) Values
//
    
#define UFS_DESC_DEVICE_IDN                 0x00
#define UFS_DESC_CONFIGURATION_IDN          0x01
#define UFS_DESC_UNIT_IDN                   0x02
#define UFS_DESC_INTERCONNECT_IDN           0x04
#define UFS_DESC_STRING_IDN                 0x05
#define UFS_DESC_GEOMETRY_IDN               0x07
#define UFS_DESC_POWER_IDN                  0x08
#define UFS_DESC_HEALTH_IDN                 0x09
#define UFS_DESC_MAX_IDN                    0x10

//
// The Device Descriptor
//

typedef struct {
    UCHAR bLength;                          // Offset 0x00, Value = 0x40
    UCHAR bDescriptorIDN;                   // Offset 0x01, Value = 0x00
    UCHAR bDevice;                          // Offset 0x02, Value = 0x00 (Device)
    UCHAR bDeviceClass;                     // Offset 0x03, Value = 0x00 (Mass Storage)
    UCHAR bDeviceSubClass;                  // Offset 0x04
    UCHAR bProtocol;                        // Offset 0x05
    UCHAR bNumberLU;                        // Offset 0x06
    UCHAR bNumberWLU;                       // Offset 0x07
    UCHAR bBootEnable;                      // Offset 0x08
    UCHAR bDescrAccessEn;                   // Offset 0x09
    UCHAR bInitPowerMode;                   // Offset 0x0A
    UCHAR bHighPriorityLUN;                 // Offset 0x0B
    UCHAR bSecureRemovalType;               // Offset 0x0C
    UCHAR bSecurityLU;                      // Offset 0x0D
    UCHAR bBackgroundOpsTermLat;            // Offset 0x0E
    UCHAR bInitActiveICCLevel;              // Offset 0x0F
    UCHAR wSpecVersion[2];                  // Offset 0x10
    UCHAR wManufactureDate[2];              // Offset 0x12
    UCHAR iManufacturerName;                // Offset 0x14
    UCHAR iProductName;                     // Offset 0x15
    UCHAR iSerialNumberID;                  // Offset 0x16
    UCHAR iOemID;                           // Offset 0x17
    UCHAR wManufacturerID[2];               // Offset 0x18
    UCHAR bUD0BaseOffset;                   // Offset 0x1A
    UCHAR bUDConfigPLength;                 // Offset 0x1B
    UCHAR bDeviceRTTCap;                    // Offset 0x1C
    UCHAR wPeriodicRTCUpdate[2];            // Offset 0x1D
    UCHAR bUFSFeaturesSupport;              // Offset 0x1F
    UCHAR bFFUTimeout;                      // Offset 0x20
    UCHAR bQueueDepth;                      // Offset 0x21
    UCHAR wDeviceVersion[2];                // Offset 0x22
    UCHAR bNumSecureWPArea;                 // Offset 0x24
    UCHAR dPSAMaxDataSize[4];               // Offset 0x25
    UCHAR dPSAStateTimeout;                 // Offset 0x29
    UCHAR iProductRevisionLevel;            // Offset 0x2A
    UCHAR Reserved[5];                      // Offset 0x2B
    UCHAR Reserved2[16];                    // Offset 0x30, Reserved for UME
} UFS_DEVICE_DESCRIPTOR, *PUFS_DEVICE_DESCRIPTOR;

#define UFS_FEATURE_SUPPORT_FFU               0x01
#define UFS_FEATURE_SUPPORT_PSA               0x02
#define UFS_FEATURE_SUPPORT_DEVICE_LIFE_SPAN  0x04

//
// The Configuration Descriptor
//

typedef struct {
    UCHAR bLUEnable;                        // Offset 0x00
    UCHAR bBootLunID;                       // Offset 0x01
    UCHAR bLUWriteProtect;                  // Offset 0x02
    UCHAR bMemoryType;                      // Offset 0x03
    UCHAR dNumAllocUnits[4];                // Offset 0x04
    UCHAR bDataReliability;                 // Offset 0x08
    UCHAR bLogicalBlockSize;                // Offset 0x09
    ULONG bProvisioningType;                // Offset 0x0A
    UCHAR wContextCapabilities[2];          // Offset 0x0B
    UCHAR Reserved[3];                      // Offset 0x0D
} UFS_UNIT_CONFIG_DESCRIPTOR, *PUFS_UNIT_CONFIG_DESCRIPTOR;

typedef struct {
    UCHAR bLength;                          // Offset 0x00
    UCHAR bDescriptorIDN;                   // Offset 0x01, Value = 0x01
    UCHAR Reserved1;                        // Offset 0x02
    UCHAR bBootEnable;                      // Offset 0x03
    UCHAR bDescrAccessEn;                   // Offset 0x04
    UCHAR bInitPowerMode;                   // Offset 0x05
    UCHAR bHighPriorityLUN;                 // Offset 0x06
    UCHAR bSecureRemovalType;               // Offset 0x07
    UCHAR bInitActiveICCLevel;              // Offset 0x08
    UCHAR wPeriodicRTCUpdate[2];            // Offset 0x09
    UCHAR Reserved2[5];                     // Offset 0x0B
    UFS_UNIT_CONFIG_DESCRIPTOR UnitConfig[UFS_MAX_NUM_LU];
} UFS_CONFIG_DESCRIPTOR, *PUFS_CONFIG_DESCRIPTOR;

//
// The Geometry Descriptor
//

typedef struct {
    UCHAR bLength;                          // Offset 0x00
    UCHAR bDescriptorIDN;                   // Offset 0x01, Value = 0x07
    UCHAR bMediaTechnology;                 // Offset 0x02
    UCHAR Reserved1;                        // Offset 0x03
    UCHAR qTotalRawDeviceCapacity[8];       // Offset 0x04
    UCHAR bMaxNumberLU;                     // Offset 0x0C
    UCHAR dSegmentSize[4];                  // Offset 0x0D
    UCHAR bAllocationUnitSize;              // Offset 0x11
    UCHAR bMinAddrBlockSize;                // Offset 0x12
    UCHAR bOptimalReadBlockSize;            // Offset 0x13
    UCHAR bOptimalWriteBlockSize;           // Offset 0x14
    UCHAR bMaxInBufferSize;                 // Offset 0x15
    UCHAR bMaxOutBufferSize;                // Offset 0x16
    UCHAR bRPMB_ReadWriteSize;              // Offset 0x17
    UCHAR bDynamicCapacityResourcePolicy;   // Offset 0x18
    UCHAR bDataOrdering;                    // Offset 0x19
    UCHAR bMaxContexIDNumber;               // Offset 0x1A
    UCHAR bSysDataTagUnitSize;              // Offset 0x1B
    UCHAR bSysDataTagResSize;               // Offset 0x1C
    UCHAR bSupportedSecRTypes;              // Offset 0x1D
    UCHAR wSupportedMemoryTypes[2];         // Offset 0x1E
    UCHAR dSystemCodeMaxNAllocU[4];         // Offset 0x20
    UCHAR wSystemCodeCapAdjFac[2];          // Offset 0x24
    UCHAR dNonPersistMaxNAllocU[4];         // Offset 0x26
    UCHAR wNonPersistCapAdjFac[2];          // Offset 0x2A
    UCHAR dEnhanced1MaxNAllocU[4];          // Offset 0x2C
    UCHAR wEnhanced1CapAdjFac[2];           // Offset 0x30
    UCHAR dEnhanced2MaxNAllocU[4];          // Offset 0x32
    UCHAR wEnhanced2CapAdjFac[2];           // Offset 0x36
    UCHAR dEnhanced3MaxNAllocU[4];          // Offset 0x38
    UCHAR wEnhanced3CapAdjFac[2];           // Offset 0x3C
    UCHAR dEnhanced4MaxNAllocU[4];          // Offset 0x3E
    UCHAR wEnhanced4CapAdjFac[2];           // Offset 0x42
    UCHAR dOptimalLogicalBlockSize[4];      // Offset 0x44
} UFS_GEOMETRY_DESCRIPTOR, *PUFS_GEOMETRY_DESCRIPTOR;

//
// The Unit Descriptor
//

typedef struct {
    UCHAR bLength;                          // Offset 0x00
    UCHAR bDescriptorIDN;                   // Offset 0x01, Value = 0x02
    UCHAR bUnitIndex;                       // Offset 0x02
    UCHAR bLUEnable;                        // Offset 0x03
    UCHAR bBootLunID;                       // Offset 0x04
    UCHAR bLUWriteProtect;                  // Offset 0x05
    UCHAR bLUQueueDepth;                    // Offset 0x06
    UCHAR bPSASensitive;                    // Offset 0x07
    UCHAR bMemoryType;                      // Offset 0x08
    UCHAR bDataReliability;                 // Offset 0x09
    UCHAR bLogicalBlockSize;                // Offset 0x0A
    UCHAR qLogicalBlockCount[8];            // Offset 0x0B
    UCHAR dEraseBlockSize[4];               // Offset 0x13
    UCHAR bProvisioningType;                // Offset 0x17
    UCHAR qPhyMemResourceCount[8];          // Offset 0x18
    UCHAR wContextCapabilities[2];          // Offset 0x20
    UCHAR bLargeUnitGranularity_M1;         // Offset 0x22
} UFS_UNIT_DESCRIPTOR, *PUFS_UNIT_DESCRIPTOR;

//
// The RPMB Unit Descriptor
//

typedef struct {
    UCHAR bLength;                          // Offset 0x00
    UCHAR bDescriptorIDN;                   // Offset 0x01, Value = 0x02
    UCHAR bUnitIndex;                       // Offset 0x02, Value = 0xC4
    UCHAR bLUEnable;                        // Offset 0x03
    UCHAR bBootLunID;                       // Offset 0x04
    UCHAR bLUWriteProtect;                  // Offset 0x05
    UCHAR bLUQueueDepth;                    // Offset 0x06
    UCHAR bPSASensitive;                    // Offset 0x07
    UCHAR bMemoryType;                      // Offset 0x08
    UCHAR Reserved;                         // Offset 0x09
    UCHAR bLogicalBlockSize;                // Offset 0x0A
    UCHAR qLogicalBlockCount[8];            // Offset 0x0B
    UCHAR dEraseBlockSize[4];               // Offset 0x13
    UCHAR bProvisioningType;                // Offset 0x17
    UCHAR qPhyMemResourceCount[8];          // Offset 0x18
    UCHAR Reserved2[3];                     // Offset 0x20
} UFS_RPMB_UNIT_DESCRIPTOR, *PUFS_RPMB_UNIT_DESCRIPTOR;

//
// The Power Parameters Descriptor
//

typedef struct {
    UCHAR bLength;                          // Offset 0x00
    UCHAR bDescriptorIDN;                   // Offset 0x01, Value = 0x08
    UCHAR wActiveICCLevelsVCC[32];          // Offset 0x02
    UCHAR wActiveICCLevelsVCCQ[32];         // Offset 0x22
    UCHAR wActiveICCLevelsVCCQ2[32];        // Offset 0x42
} UFS_POWER_DESCRIPTOR, *PUFS_POWER_DESCRIPTOR;

//
// The Interconnect Descriptor
//

typedef struct {
    UCHAR bLength;                          // Offset 0x00
    UCHAR bDescriptorIDN;                   // Offset 0x01, Value = 0x04
    UCHAR bcdUniproVersion[2];              // Offset 0x02
    UCHAR bcdMphyVersion[2];                // Offset 0x04
} UFS_INTERCONNECT_DESCRIPTOR, *PUFS_INTERCONNECT_DESCRIPTOR;

//
// The String Descriptor
//
// This includes the Manufacturer Name, Product Name, OEM ID, and Serial Number
//

#define UFS_MAX_UNICODE_STRING_LEN          127

typedef struct _UFS_STRING_DESCRIPTOR {
    UCHAR bLength;                            // Offset 0x00
    UCHAR bDescriptorIDN;                     // Offset 0x01, Value = 0x05
    WCHAR String[UFS_MAX_UNICODE_STRING_LEN]; // Offset 0x02
} UFS_STRING_DESCRIPTOR, *PUFS_STRING_DESCRIPTOR;

//
// The Device Health Descriptor
//

typedef struct {
    UCHAR bLength;                          // Offset 0x00
    UCHAR bDescriptorIDN;                   // Offset 0x01, Value = 0x09
    UCHAR bPreEOLInfo;                      // Offset 0x02
    UCHAR bDeviceLifeTimeEstA;              // Offset 0x03
    UCHAR bDeviceLifeTimeEstB;              // Offset 0x04
    UCHAR VendorPropInfo[32];               // Offset 0x05
} UFS_DEVICE_HEALTH_DESCRIPTOR, *PUFS_DEVICE_HEALTH_DESCRIPTOR;

#define UFS_MAX_DESCRIPTOR_SIZE             sizeof(UFS_STRING_DESCRIPTOR)

//
// The Flags Descriptor
//

typedef enum {
    UFS_Reserved1 = 0,
    UFS_fDeviceInit,
    UFS_fPermanentWPEn,
    UFS_fPowerOnWPEn,
    UFS_fBackgroundOpsEn,
    UFS_fDeviceLifeSpanModeEn,
    UFS_fPurgeEnable,
    UFS_Reserved2,
    UFS_fPhyResourceRemoval,
    UFS_fBusyRTC,
    UFS_Reserved3,
    UFS_fPermanentlyDisableFwUpdate,
    UFS_Reserved4,                          // Reserved for UME
    UFS_Reserved5                           // Reserved for UME
} UFS_FLAGS_DESCRIPTOR;

//
// The Attributes Descriptor (comments indicate returned value type)
//

typedef enum {
    UFS_bBootLunEn = 0,
    UFS_Reserved01,
    UFS_bCurrentPowerMode,
    UFS_bActiveICCLevel,
    UFS_bOutOfOrderDataEn,
    UFS_bBackgroundOpStatus,
    UFS_bPurgeStatus,
    UFS_bMaxDataInSize,
    UFS_bMaxDataOutSize,
    UFS_dDynCapNeeded,                      // ULONG
    UFS_bRefClkFreq,
    UFS_bConfigDescrLock,
    UFS_bMaxNumOfRTT,
    UFS_wExceptionEventControl,             // USHORT
    UFS_wExceptionEventStatus,              // USHORT
    UFS_dSecondsPassed,                     // ULONG
    UFS_wContextConf,                       // USHORT
    UFS_Obsolete, 
    UFS_Reserved02,                         // Reserved for UME
    UFS_Reserved03,                         // Reserved for UME
    UFS_bDeviceFFUStatus,
    UFS_bPSAState,
    UFS_dPSADataSize                        // ULONGLONG
} UFS_ATTRIBUTES_DESCRIPTOR;

//
// Values when Querying bPurgeStatus in the Attributes Descriptor
//

typedef enum {
    UFS_PurgeStatusIdle          = 0,
    UFS_PurgeStatusInProgress    = 1,
    UFS_PurgeStatusInterrupted   = 2,
    UFS_PurgeStatusSuccess       = 3,
    UFS_PurgeStatusQueueNotEmpty = 4,
    UFS_PurgeStatusFailure       = 5
} UFS_PURGE_STATUS;
