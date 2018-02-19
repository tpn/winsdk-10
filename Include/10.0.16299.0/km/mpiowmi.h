#ifndef _mpiowmi_h_
#define _mpiowmi_h_

// MPIO_PATH_HEALTH_CLASS - MPIO_PATH_HEALTH_CLASS
#define MPIO_PATH_HEALTH_CLASSGuid \
    { 0xea0f7134,0x269e,0x44ca, { 0xb3,0x50,0x7c,0x7e,0xbe,0xba,0x8b,0xbc } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_PATH_HEALTH_CLASS_GUID, \
            0xea0f7134,0x269e,0x44ca,0xb3,0x50,0x7c,0x7e,0xbe,0xba,0x8b,0xbc);
#endif


typedef struct _MPIO_PATH_HEALTH_CLASS
{
    // 
    ULONGLONG PathId;
    #define MPIO_PATH_HEALTH_CLASS_PathId_SIZE sizeof(ULONGLONG)
    #define MPIO_PATH_HEALTH_CLASS_PathId_ID 1

    // 
    ULONGLONG NumberReads;
    #define MPIO_PATH_HEALTH_CLASS_NumberReads_SIZE sizeof(ULONGLONG)
    #define MPIO_PATH_HEALTH_CLASS_NumberReads_ID 2

    // 
    ULONGLONG NumberWrites;
    #define MPIO_PATH_HEALTH_CLASS_NumberWrites_SIZE sizeof(ULONGLONG)
    #define MPIO_PATH_HEALTH_CLASS_NumberWrites_ID 3

    // 
    ULONGLONG NumberBytesRead;
    #define MPIO_PATH_HEALTH_CLASS_NumberBytesRead_SIZE sizeof(ULONGLONG)
    #define MPIO_PATH_HEALTH_CLASS_NumberBytesRead_ID 4

    // 
    ULONGLONG NumberBytesWritten;
    #define MPIO_PATH_HEALTH_CLASS_NumberBytesWritten_SIZE sizeof(ULONGLONG)
    #define MPIO_PATH_HEALTH_CLASS_NumberBytesWritten_ID 5

    // 
    ULONGLONG NumberRetries;
    #define MPIO_PATH_HEALTH_CLASS_NumberRetries_SIZE sizeof(ULONGLONG)
    #define MPIO_PATH_HEALTH_CLASS_NumberRetries_ID 6

    // 
    ULONGLONG NumberIoErrors;
    #define MPIO_PATH_HEALTH_CLASS_NumberIoErrors_SIZE sizeof(ULONGLONG)
    #define MPIO_PATH_HEALTH_CLASS_NumberIoErrors_ID 7

    // 
    ULONGLONG CreateTime;
    #define MPIO_PATH_HEALTH_CLASS_CreateTime_SIZE sizeof(ULONGLONG)
    #define MPIO_PATH_HEALTH_CLASS_CreateTime_ID 8

    // 
    ULONGLONG FailTime;
    #define MPIO_PATH_HEALTH_CLASS_FailTime_SIZE sizeof(ULONGLONG)
    #define MPIO_PATH_HEALTH_CLASS_FailTime_ID 9

    // 
    BOOLEAN PathOffline;
    #define MPIO_PATH_HEALTH_CLASS_PathOffline_SIZE sizeof(BOOLEAN)
    #define MPIO_PATH_HEALTH_CLASS_PathOffline_ID 10

    // 
    UCHAR NumberReadsWrap;
    #define MPIO_PATH_HEALTH_CLASS_NumberReadsWrap_SIZE sizeof(UCHAR)
    #define MPIO_PATH_HEALTH_CLASS_NumberReadsWrap_ID 11

    // 
    UCHAR NumberWritesWrap;
    #define MPIO_PATH_HEALTH_CLASS_NumberWritesWrap_SIZE sizeof(UCHAR)
    #define MPIO_PATH_HEALTH_CLASS_NumberWritesWrap_ID 12

    // 
    UCHAR NumberBytesReadWrap;
    #define MPIO_PATH_HEALTH_CLASS_NumberBytesReadWrap_SIZE sizeof(UCHAR)
    #define MPIO_PATH_HEALTH_CLASS_NumberBytesReadWrap_ID 13

    // 
    UCHAR NumberBytesWrittenWrap;
    #define MPIO_PATH_HEALTH_CLASS_NumberBytesWrittenWrap_SIZE sizeof(UCHAR)
    #define MPIO_PATH_HEALTH_CLASS_NumberBytesWrittenWrap_ID 14

    // 
    UCHAR OutstandingRequests;
    #define MPIO_PATH_HEALTH_CLASS_OutstandingRequests_SIZE sizeof(UCHAR)
    #define MPIO_PATH_HEALTH_CLASS_OutstandingRequests_ID 15

    // 
    UCHAR Pad[2];
    #define MPIO_PATH_HEALTH_CLASS_Pad_SIZE sizeof(UCHAR[2])
    #define MPIO_PATH_HEALTH_CLASS_Pad_ID 16

} MPIO_PATH_HEALTH_CLASS, *PMPIO_PATH_HEALTH_CLASS;

#define MPIO_PATH_HEALTH_CLASS_SIZE (FIELD_OFFSET(MPIO_PATH_HEALTH_CLASS, Pad) + MPIO_PATH_HEALTH_CLASS_Pad_SIZE)

// MPIO_PATH_HEALTH_INFO - MPIO_PATH_HEALTH_INFO
#define MPIO_PATH_HEALTH_INFOGuid \
    { 0x01ea1dfb,0x668b,0x48bc, { 0xa8,0x6e,0xa8,0xb4,0xca,0xbf,0xce,0x33 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_PATH_HEALTH_INFO_GUID, \
            0x01ea1dfb,0x668b,0x48bc,0xa8,0x6e,0xa8,0xb4,0xca,0xbf,0xce,0x33);
#endif


typedef struct _MPIO_PATH_HEALTH_INFO
{
    // 
    ULONG NumberPathPackets;
    #define MPIO_PATH_HEALTH_INFO_NumberPathPackets_SIZE sizeof(ULONG)
    #define MPIO_PATH_HEALTH_INFO_NumberPathPackets_ID 1

    // 
    ULONG Reserved;
    #define MPIO_PATH_HEALTH_INFO_Reserved_SIZE sizeof(ULONG)
    #define MPIO_PATH_HEALTH_INFO_Reserved_ID 2

    // 
    MPIO_PATH_HEALTH_CLASS PathHealthPackets[1];
    #define MPIO_PATH_HEALTH_INFO_PathHealthPackets_ID 3

} MPIO_PATH_HEALTH_INFO, *PMPIO_PATH_HEALTH_INFO;

// MPIO_DISK_HEALTH_CLASS - MPIO_DISK_HEALTH_CLASS
#define MPIO_DISK_HEALTH_CLASSGuid \
    { 0x6453c476,0x0499,0x42ab, { 0x98,0x25,0x51,0x33,0x28,0x2b,0x0b,0x56 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_DISK_HEALTH_CLASS_GUID, \
            0x6453c476,0x0499,0x42ab,0x98,0x25,0x51,0x33,0x28,0x2b,0x0b,0x56);
#endif


typedef struct _MPIO_DISK_HEALTH_CLASS
{
    // 
    WCHAR Name[63 + 1];
    #define MPIO_DISK_HEALTH_CLASS_Name_ID 1

    // 
    ULONGLONG NumberReads;
    #define MPIO_DISK_HEALTH_CLASS_NumberReads_SIZE sizeof(ULONGLONG)
    #define MPIO_DISK_HEALTH_CLASS_NumberReads_ID 2

    // 
    ULONGLONG NumberWrites;
    #define MPIO_DISK_HEALTH_CLASS_NumberWrites_SIZE sizeof(ULONGLONG)
    #define MPIO_DISK_HEALTH_CLASS_NumberWrites_ID 3

    // 
    ULONGLONG NumberBytesRead;
    #define MPIO_DISK_HEALTH_CLASS_NumberBytesRead_SIZE sizeof(ULONGLONG)
    #define MPIO_DISK_HEALTH_CLASS_NumberBytesRead_ID 4

    // 
    ULONGLONG NumberBytesWritten;
    #define MPIO_DISK_HEALTH_CLASS_NumberBytesWritten_SIZE sizeof(ULONGLONG)
    #define MPIO_DISK_HEALTH_CLASS_NumberBytesWritten_ID 5

    // 
    ULONGLONG NumberRetries;
    #define MPIO_DISK_HEALTH_CLASS_NumberRetries_SIZE sizeof(ULONGLONG)
    #define MPIO_DISK_HEALTH_CLASS_NumberRetries_ID 6

    // 
    ULONGLONG NumberIoErrors;
    #define MPIO_DISK_HEALTH_CLASS_NumberIoErrors_SIZE sizeof(ULONGLONG)
    #define MPIO_DISK_HEALTH_CLASS_NumberIoErrors_ID 7

    // 
    ULONGLONG CreateTime;
    #define MPIO_DISK_HEALTH_CLASS_CreateTime_SIZE sizeof(ULONGLONG)
    #define MPIO_DISK_HEALTH_CLASS_CreateTime_ID 8

    // 
    ULONGLONG PathFailures;
    #define MPIO_DISK_HEALTH_CLASS_PathFailures_SIZE sizeof(ULONGLONG)
    #define MPIO_DISK_HEALTH_CLASS_PathFailures_ID 9

    // 
    ULONGLONG FailTime;
    #define MPIO_DISK_HEALTH_CLASS_FailTime_SIZE sizeof(ULONGLONG)
    #define MPIO_DISK_HEALTH_CLASS_FailTime_ID 10

    // 
    BOOLEAN DeviceOffline;
    #define MPIO_DISK_HEALTH_CLASS_DeviceOffline_SIZE sizeof(BOOLEAN)
    #define MPIO_DISK_HEALTH_CLASS_DeviceOffline_ID 11

    // 
    UCHAR NumberReadsWrap;
    #define MPIO_DISK_HEALTH_CLASS_NumberReadsWrap_SIZE sizeof(UCHAR)
    #define MPIO_DISK_HEALTH_CLASS_NumberReadsWrap_ID 12

    // 
    UCHAR NumberWritesWrap;
    #define MPIO_DISK_HEALTH_CLASS_NumberWritesWrap_SIZE sizeof(UCHAR)
    #define MPIO_DISK_HEALTH_CLASS_NumberWritesWrap_ID 13

    // 
    UCHAR NumberBytesReadWrap;
    #define MPIO_DISK_HEALTH_CLASS_NumberBytesReadWrap_SIZE sizeof(UCHAR)
    #define MPIO_DISK_HEALTH_CLASS_NumberBytesReadWrap_ID 14

    // 
    UCHAR NumberBytesWrittenWrap;
    #define MPIO_DISK_HEALTH_CLASS_NumberBytesWrittenWrap_SIZE sizeof(UCHAR)
    #define MPIO_DISK_HEALTH_CLASS_NumberBytesWrittenWrap_ID 15

    // 
    UCHAR Pad[3];
    #define MPIO_DISK_HEALTH_CLASS_Pad_SIZE sizeof(UCHAR[3])
    #define MPIO_DISK_HEALTH_CLASS_Pad_ID 16

} MPIO_DISK_HEALTH_CLASS, *PMPIO_DISK_HEALTH_CLASS;

#define MPIO_DISK_HEALTH_CLASS_SIZE (FIELD_OFFSET(MPIO_DISK_HEALTH_CLASS, Pad) + MPIO_DISK_HEALTH_CLASS_Pad_SIZE)

// MPIO_DISK_HEALTH_INFO - MPIO_DISK_HEALTH_INFO
#define MPIO_DISK_HEALTH_INFOGuid \
    { 0xef04568a,0x782b,0x443c, { 0xa3,0xdb,0x96,0x6a,0xb4,0x37,0x75,0xf9 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_DISK_HEALTH_INFO_GUID, \
            0xef04568a,0x782b,0x443c,0xa3,0xdb,0x96,0x6a,0xb4,0x37,0x75,0xf9);
#endif


typedef struct _MPIO_DISK_HEALTH_INFO
{
    // 
    ULONG NumberDiskPackets;
    #define MPIO_DISK_HEALTH_INFO_NumberDiskPackets_SIZE sizeof(ULONG)
    #define MPIO_DISK_HEALTH_INFO_NumberDiskPackets_ID 1

    // 
    ULONG Reserved;
    #define MPIO_DISK_HEALTH_INFO_Reserved_SIZE sizeof(ULONG)
    #define MPIO_DISK_HEALTH_INFO_Reserved_ID 2

    // 
    MPIO_DISK_HEALTH_CLASS DiskHealthPackets[1];
    #define MPIO_DISK_HEALTH_INFO_DiskHealthPackets_ID 3

} MPIO_DISK_HEALTH_INFO, *PMPIO_DISK_HEALTH_INFO;

// SCSI_ADDR - SCSI_ADDR
#define SCSI_ADDRGuid \
    { 0xc74aece4,0x468b,0x4113, { 0xb0,0x06,0x0c,0xec,0xdc,0x96,0x8a,0xc4 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(SCSI_ADDR_GUID, \
            0xc74aece4,0x468b,0x4113,0xb0,0x06,0x0c,0xec,0xdc,0x96,0x8a,0xc4);
#endif


typedef struct _SCSI_ADDR
{
    // 
    UCHAR PortNumber;
    #define SCSI_ADDR_PortNumber_SIZE sizeof(UCHAR)
    #define SCSI_ADDR_PortNumber_ID 1

    // 
    UCHAR ScsiPathId;
    #define SCSI_ADDR_ScsiPathId_SIZE sizeof(UCHAR)
    #define SCSI_ADDR_ScsiPathId_ID 2

    // 
    UCHAR TargetId;
    #define SCSI_ADDR_TargetId_SIZE sizeof(UCHAR)
    #define SCSI_ADDR_TargetId_ID 3

    // 
    UCHAR Lun;
    #define SCSI_ADDR_Lun_SIZE sizeof(UCHAR)
    #define SCSI_ADDR_Lun_ID 4

} SCSI_ADDR, *PSCSI_ADDR;

#define SCSI_ADDR_SIZE (FIELD_OFFSET(SCSI_ADDR, Lun) + SCSI_ADDR_Lun_SIZE)

// MPIO_DRIVE_INFO - MPIO_DRIVE_INFO
#define MPIO_DRIVE_INFOGuid \
    { 0xcb9d55b2,0xd833,0x4a4c, { 0x8c,0xaa,0x4a,0xee,0x3f,0x24,0x0e,0x9a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_DRIVE_INFO_GUID, \
            0xcb9d55b2,0xd833,0x4a4c,0x8c,0xaa,0x4a,0xee,0x3f,0x24,0x0e,0x9a);
#endif


typedef struct _MPIO_DRIVE_INFO
{
    // 
    ULONG NumberPaths;
    #define MPIO_DRIVE_INFO_NumberPaths_SIZE sizeof(ULONG)
    #define MPIO_DRIVE_INFO_NumberPaths_ID 1

    // 
    WCHAR Name[63 + 1];
    #define MPIO_DRIVE_INFO_Name_ID 2

    // 
    WCHAR SerialNumber[63 + 1];
    #define MPIO_DRIVE_INFO_SerialNumber_ID 3

    // 
    WCHAR DsmName[63 + 1];
    #define MPIO_DRIVE_INFO_DsmName_ID 4

} MPIO_DRIVE_INFO, *PMPIO_DRIVE_INFO;

// MPIO_DISK_INFO - MPIO_DISK_INFO
#define MPIO_DISK_INFOGuid \
    { 0x9f9765ed,0xc3a0,0x451f, { 0x86,0xc1,0x47,0x0a,0x1d,0xdd,0x32,0x17 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_DISK_INFO_GUID, \
            0x9f9765ed,0xc3a0,0x451f,0x86,0xc1,0x47,0x0a,0x1d,0xdd,0x32,0x17);
#endif


typedef struct _MPIO_DISK_INFO
{
    // 
    ULONG NumberDrives;
    #define MPIO_DISK_INFO_NumberDrives_SIZE sizeof(ULONG)
    #define MPIO_DISK_INFO_NumberDrives_ID 1

    // 
    MPIO_DRIVE_INFO DriveInfo[1];
    #define MPIO_DISK_INFO_DriveInfo_ID 2

} MPIO_DISK_INFO, *PMPIO_DISK_INFO;

// DSM_VERSION - DSM_VERSION
#define DSM_VERSIONGuid \
    { 0x7cc0ae8e,0xf30d,0x4ecd, { 0xa3,0xc6,0x5b,0xee,0x8d,0xe6,0x1d,0x48 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_VERSION_GUID, \
            0x7cc0ae8e,0xf30d,0x4ecd,0xa3,0xc6,0x5b,0xee,0x8d,0xe6,0x1d,0x48);
#endif


typedef struct _DSM_VERSION
{
    // 
    ULONG MajorVersion;
    #define DSM_VERSION_MajorVersion_SIZE sizeof(ULONG)
    #define DSM_VERSION_MajorVersion_ID 1

    // 
    ULONG MinorVersion;
    #define DSM_VERSION_MinorVersion_SIZE sizeof(ULONG)
    #define DSM_VERSION_MinorVersion_ID 2

    // 
    ULONG ProductBuild;
    #define DSM_VERSION_ProductBuild_SIZE sizeof(ULONG)
    #define DSM_VERSION_ProductBuild_ID 3

    // 
    ULONG QfeNumber;
    #define DSM_VERSION_QfeNumber_SIZE sizeof(ULONG)
    #define DSM_VERSION_QfeNumber_ID 4

} DSM_VERSION, *PDSM_VERSION;

#define DSM_VERSION_SIZE (FIELD_OFFSET(DSM_VERSION, QfeNumber) + DSM_VERSION_QfeNumber_SIZE)

// DSM_COUNTERS - DSM_COUNTERS
#define DSM_COUNTERSGuid \
    { 0x39026ae4,0x9e81,0x468b, { 0x81,0x9c,0x25,0x34,0x48,0x12,0x7f,0xd5 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_COUNTERS_GUID, \
            0x39026ae4,0x9e81,0x468b,0x81,0x9c,0x25,0x34,0x48,0x12,0x7f,0xd5);
#endif


typedef struct _DSM_COUNTERS
{
    // 
    ULONG PathVerifyEnabled;
    #define DSM_COUNTERS_PathVerifyEnabled_SIZE sizeof(ULONG)
    #define DSM_COUNTERS_PathVerifyEnabled_ID 1

    // 
    ULONG PathVerificationPeriod;
    #define DSM_COUNTERS_PathVerificationPeriod_SIZE sizeof(ULONG)
    #define DSM_COUNTERS_PathVerificationPeriod_ID 2

    // 
    ULONG PDORemovePeriod;
    #define DSM_COUNTERS_PDORemovePeriod_SIZE sizeof(ULONG)
    #define DSM_COUNTERS_PDORemovePeriod_ID 3

    // 
    ULONG RetryCount;
    #define DSM_COUNTERS_RetryCount_SIZE sizeof(ULONG)
    #define DSM_COUNTERS_RetryCount_ID 4

    // 
    ULONG RetryInterval;
    #define DSM_COUNTERS_RetryInterval_SIZE sizeof(ULONG)
    #define DSM_COUNTERS_RetryInterval_ID 5

    // 
    ULONG Reserved32;
    #define DSM_COUNTERS_Reserved32_SIZE sizeof(ULONG)
    #define DSM_COUNTERS_Reserved32_ID 6

    // 
    ULONGLONG Reserved64;
    #define DSM_COUNTERS_Reserved64_SIZE sizeof(ULONGLONG)
    #define DSM_COUNTERS_Reserved64_ID 7

} DSM_COUNTERS, *PDSM_COUNTERS;

#define DSM_COUNTERS_SIZE (FIELD_OFFSET(DSM_COUNTERS, Reserved64) + DSM_COUNTERS_Reserved64_SIZE)

// DSM_PARAMETERS - DSM_PARAMETERS
#define DSM_PARAMETERSGuid \
    { 0x695df15f,0x9bd1,0x49f7, { 0xbe,0xbb,0x16,0xde,0xbd,0x15,0x11,0xcb } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_PARAMETERS_GUID, \
            0x695df15f,0x9bd1,0x49f7,0xbe,0xbb,0x16,0xde,0xbd,0x15,0x11,0xcb);
#endif


typedef struct _DSM_PARAMETERS
{
    // 
    WCHAR DsmName[63 + 1];
    #define DSM_PARAMETERS_DsmName_ID 1

    // 
    ULONGLONG DsmContext;
    #define DSM_PARAMETERS_DsmContext_SIZE sizeof(ULONGLONG)
    #define DSM_PARAMETERS_DsmContext_ID 2

    // 
    DSM_VERSION DsmVersion;
    #define DSM_PARAMETERS_DsmVersion_SIZE sizeof(DSM_VERSION)
    #define DSM_PARAMETERS_DsmVersion_ID 3

    // 
    DSM_COUNTERS DsmCounters;
    #define DSM_PARAMETERS_DsmCounters_SIZE sizeof(DSM_COUNTERS)
    #define DSM_PARAMETERS_DsmCounters_ID 4

} DSM_PARAMETERS, *PDSM_PARAMETERS;

#define DSM_PARAMETERS_SIZE (FIELD_OFFSET(DSM_PARAMETERS, DsmCounters) + DSM_PARAMETERS_DsmCounters_SIZE)

// MPIO_REGISTERED_DSM - MPIO_REGISTERED_DSM
#define MPIO_REGISTERED_DSMGuid \
    { 0x0c2c484b,0x030b,0x4540, { 0x88,0x90,0xbb,0x66,0x81,0x94,0x1c,0xe3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_REGISTERED_DSM_GUID, \
            0x0c2c484b,0x030b,0x4540,0x88,0x90,0xbb,0x66,0x81,0x94,0x1c,0xe3);
#endif


typedef struct _MPIO_REGISTERED_DSM
{
    // 
    ULONG NumberDSMs;
    #define MPIO_REGISTERED_DSM_NumberDSMs_SIZE sizeof(ULONG)
    #define MPIO_REGISTERED_DSM_NumberDSMs_ID 1

    // 
    DSM_PARAMETERS DsmParameters[1];
    #define MPIO_REGISTERED_DSM_DsmParameters_ID 2

} MPIO_REGISTERED_DSM, *PMPIO_REGISTERED_DSM;

// MPIO_ADAPTER_INFORMATION - MPIO_ADAPTER_INFORMATION
#define MPIO_ADAPTER_INFORMATIONGuid \
    { 0xb87c0fec,0x88b7,0x451d, { 0xa3,0x78,0x38,0x7b,0xa6,0x1a,0xeb,0x89 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_ADAPTER_INFORMATION_GUID, \
            0xb87c0fec,0x88b7,0x451d,0xa3,0x78,0x38,0x7b,0xa6,0x1a,0xeb,0x89);
#endif


typedef struct _MPIO_ADAPTER_INFORMATION
{
    // 
    ULONGLONG PathId;
    #define MPIO_ADAPTER_INFORMATION_PathId_SIZE sizeof(ULONGLONG)
    #define MPIO_ADAPTER_INFORMATION_PathId_ID 1

    // 
    UCHAR BusNumber;
    #define MPIO_ADAPTER_INFORMATION_BusNumber_SIZE sizeof(UCHAR)
    #define MPIO_ADAPTER_INFORMATION_BusNumber_ID 2

    // 
    UCHAR DeviceNumber;
    #define MPIO_ADAPTER_INFORMATION_DeviceNumber_SIZE sizeof(UCHAR)
    #define MPIO_ADAPTER_INFORMATION_DeviceNumber_ID 3

    // 
    UCHAR FunctionNumber;
    #define MPIO_ADAPTER_INFORMATION_FunctionNumber_SIZE sizeof(UCHAR)
    #define MPIO_ADAPTER_INFORMATION_FunctionNumber_ID 4

    // 
    UCHAR Pad;
    #define MPIO_ADAPTER_INFORMATION_Pad_SIZE sizeof(UCHAR)
    #define MPIO_ADAPTER_INFORMATION_Pad_ID 5

    // 
    WCHAR AdapterName[63 + 1];
    #define MPIO_ADAPTER_INFORMATION_AdapterName_ID 6

} MPIO_ADAPTER_INFORMATION, *PMPIO_ADAPTER_INFORMATION;

// MPIO_PATH_INFORMATION - MPIO_PATH_INFORMATION
#define MPIO_PATH_INFORMATIONGuid \
    { 0xb3a05997,0x2077,0x40a3, { 0xbf,0x36,0xeb,0xd9,0x1f,0xf8,0xb2,0x54 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_PATH_INFORMATION_GUID, \
            0xb3a05997,0x2077,0x40a3,0xbf,0x36,0xeb,0xd9,0x1f,0xf8,0xb2,0x54);
#endif


typedef struct _MPIO_PATH_INFORMATION
{
    // 
    ULONG NumberPaths;
    #define MPIO_PATH_INFORMATION_NumberPaths_SIZE sizeof(ULONG)
    #define MPIO_PATH_INFORMATION_NumberPaths_ID 1

    // 
    ULONG Pad;
    #define MPIO_PATH_INFORMATION_Pad_SIZE sizeof(ULONG)
    #define MPIO_PATH_INFORMATION_Pad_ID 2

    // 
    MPIO_ADAPTER_INFORMATION PathList[1];
    #define MPIO_PATH_INFORMATION_PathList_ID 3

} MPIO_PATH_INFORMATION, *PMPIO_PATH_INFORMATION;

// MPIO_CONTROLLER_INFO - MPIO_CONTROLLER_INFO
#define MPIO_CONTROLLER_INFOGuid \
    { 0xe732405b,0xb15e,0x4872, { 0xaf,0xd0,0x0d,0xf6,0x9d,0xc1,0xbb,0x01 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_CONTROLLER_INFO_GUID, \
            0xe732405b,0xb15e,0x4872,0xaf,0xd0,0x0d,0xf6,0x9d,0xc1,0xbb,0x01);
#endif


typedef struct _MPIO_CONTROLLER_INFO
{
    // 
    ULONG IdentifierType;
    #define MPIO_CONTROLLER_INFO_IdentifierType_SIZE sizeof(ULONG)
    #define MPIO_CONTROLLER_INFO_IdentifierType_ID 1

    // 
    ULONG IdentifierLength;
    #define MPIO_CONTROLLER_INFO_IdentifierLength_SIZE sizeof(ULONG)
    #define MPIO_CONTROLLER_INFO_IdentifierLength_ID 2

    // 
    UCHAR Identifier[32];
    #define MPIO_CONTROLLER_INFO_Identifier_SIZE sizeof(UCHAR[32])
    #define MPIO_CONTROLLER_INFO_Identifier_ID 3

    // 
    ULONG ControllerState;
    #define MPIO_CONTROLLER_INFO_ControllerState_SIZE sizeof(ULONG)
    #define MPIO_CONTROLLER_INFO_ControllerState_ID 4

    // 
    ULONG Pad;
    #define MPIO_CONTROLLER_INFO_Pad_SIZE sizeof(ULONG)
    #define MPIO_CONTROLLER_INFO_Pad_ID 5

    // 
    WCHAR AssociatedDsm[63 + 1];
    #define MPIO_CONTROLLER_INFO_AssociatedDsm_ID 6

} MPIO_CONTROLLER_INFO, *PMPIO_CONTROLLER_INFO;

// MPIO_CONTROLLER_CONFIGURATION - MPIO_CONTROLLER_CONFIGURATION
#define MPIO_CONTROLLER_CONFIGURATIONGuid \
    { 0xcf07da2c,0xe598,0x45d2, { 0x9d,0x78,0x75,0xc3,0x8b,0x81,0x64,0xe8 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_CONTROLLER_CONFIGURATION_GUID, \
            0xcf07da2c,0xe598,0x45d2,0x9d,0x78,0x75,0xc3,0x8b,0x81,0x64,0xe8);
#endif


typedef struct _MPIO_CONTROLLER_CONFIGURATION
{
    // 
    ULONG NumberControllers;
    #define MPIO_CONTROLLER_CONFIGURATION_NumberControllers_SIZE sizeof(ULONG)
    #define MPIO_CONTROLLER_CONFIGURATION_NumberControllers_ID 1

    // 
    MPIO_CONTROLLER_INFO ControllerInfo[1];
    #define MPIO_CONTROLLER_CONFIGURATION_ControllerInfo_ID 2

} MPIO_CONTROLLER_CONFIGURATION, *PMPIO_CONTROLLER_CONFIGURATION;

// MPIO_TIMERS_COUNTERS - MPIO_TIMERS_COUNTERS
#define MPIO_TIMERS_COUNTERSGuid \
    { 0xce49b95b,0x690f,0x4cd0, { 0x8a,0x95,0xec,0xe3,0xfa,0xd8,0xef,0xc2 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_TIMERS_COUNTERS_GUID, \
            0xce49b95b,0x690f,0x4cd0,0x8a,0x95,0xec,0xe3,0xfa,0xd8,0xef,0xc2);
#endif


typedef struct _MPIO_TIMERS_COUNTERS
{
    // 
    ULONG PathVerifyEnabled;
    #define MPIO_TIMERS_COUNTERS_PathVerifyEnabled_SIZE sizeof(ULONG)
    #define MPIO_TIMERS_COUNTERS_PathVerifyEnabled_ID 1

    // 
    ULONG PathVerificationPeriod;
    #define MPIO_TIMERS_COUNTERS_PathVerificationPeriod_SIZE sizeof(ULONG)
    #define MPIO_TIMERS_COUNTERS_PathVerificationPeriod_ID 2

    // 
    ULONG PDORemovePeriod;
    #define MPIO_TIMERS_COUNTERS_PDORemovePeriod_SIZE sizeof(ULONG)
    #define MPIO_TIMERS_COUNTERS_PDORemovePeriod_ID 3

    // 
    ULONG RetryCount;
    #define MPIO_TIMERS_COUNTERS_RetryCount_SIZE sizeof(ULONG)
    #define MPIO_TIMERS_COUNTERS_RetryCount_ID 4

    // 
    ULONG RetryInterval;
    #define MPIO_TIMERS_COUNTERS_RetryInterval_SIZE sizeof(ULONG)
    #define MPIO_TIMERS_COUNTERS_RetryInterval_ID 5

} MPIO_TIMERS_COUNTERS, *PMPIO_TIMERS_COUNTERS;

#define MPIO_TIMERS_COUNTERS_SIZE (FIELD_OFFSET(MPIO_TIMERS_COUNTERS, RetryInterval) + MPIO_TIMERS_COUNTERS_RetryInterval_SIZE)

// MPIO_WMI_METHODS - MPIO_WMI_METHODS
#define MPIO_WMI_METHODSGuid \
    { 0xe37bc327,0xf7b1,0x4675, { 0x80,0x18,0x85,0x27,0x32,0xe2,0xed,0xe1 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_WMI_METHODS_GUID, \
            0xe37bc327,0xf7b1,0x4675,0x80,0x18,0x85,0x27,0x32,0xe2,0xed,0xe1);
#endif

//
// Method id definitions for MPIO_WMI_METHODS
#define MPIOMoveDevice     1
typedef struct _MPIOMoveDevice_IN
{
    // 
    ULONG DiskOrdinal;
    #define MPIOMoveDevice_IN_DiskOrdinal_SIZE sizeof(ULONG)
    #define MPIOMoveDevice_IN_DiskOrdinal_ID 1

    // 
    ULONG Flags;
    #define MPIOMoveDevice_IN_Flags_SIZE sizeof(ULONG)
    #define MPIOMoveDevice_IN_Flags_ID 2

    // 
    ULONGLONG PathID;
    #define MPIOMoveDevice_IN_PathID_SIZE sizeof(ULONGLONG)
    #define MPIOMoveDevice_IN_PathID_ID 3

} MPIOMoveDevice_IN, *PMPIOMoveDevice_IN;

#define MPIOMoveDevice_IN_SIZE (FIELD_OFFSET(MPIOMoveDevice_IN, PathID) + MPIOMoveDevice_IN_PathID_SIZE)

#define GetPathConfiguration     2
typedef struct _GetPathConfiguration_IN
{
    // 
    ULONGLONG PathID;
    #define GetPathConfiguration_IN_PathID_SIZE sizeof(ULONGLONG)
    #define GetPathConfiguration_IN_PathID_ID 1

} GetPathConfiguration_IN, *PGetPathConfiguration_IN;

#define GetPathConfiguration_IN_SIZE (FIELD_OFFSET(GetPathConfiguration_IN, PathID) + GetPathConfiguration_IN_PathID_SIZE)

typedef struct _GetPathConfiguration_OUT
{
    // 
    ULONG EntryCount;
    #define GetPathConfiguration_OUT_EntryCount_SIZE sizeof(ULONG)
    #define GetPathConfiguration_OUT_EntryCount_ID 2

    // 
    SCSI_ADDR Address[1];
    #define GetPathConfiguration_OUT_Address_ID 3

} GetPathConfiguration_OUT, *PGetPathConfiguration_OUT;

#define SetDSMCounters     3
typedef struct _SetDSMCounters_IN
{
    // 
    ULONGLONG DsmContext;
    #define SetDSMCounters_IN_DsmContext_SIZE sizeof(ULONGLONG)
    #define SetDSMCounters_IN_DsmContext_ID 1

    // 
    DSM_COUNTERS DsmCounters;
    #define SetDSMCounters_IN_DsmCounters_SIZE sizeof(DSM_COUNTERS)
    #define SetDSMCounters_IN_DsmCounters_ID 2

} SetDSMCounters_IN, *PSetDSMCounters_IN;

#define SetDSMCounters_IN_SIZE (FIELD_OFFSET(SetDSMCounters_IN, DsmCounters) + SetDSMCounters_IN_DsmCounters_SIZE)

#define ClearAllHealthCounters     4
#define ClearPathHealthCounters     5
typedef struct _ClearPathHealthCounters_IN
{
    // 
    ULONGLONG PathID;
    #define ClearPathHealthCounters_IN_PathID_SIZE sizeof(ULONGLONG)
    #define ClearPathHealthCounters_IN_PathID_ID 1

} ClearPathHealthCounters_IN, *PClearPathHealthCounters_IN;

#define ClearPathHealthCounters_IN_SIZE (FIELD_OFFSET(ClearPathHealthCounters_IN, PathID) + ClearPathHealthCounters_IN_PathID_SIZE)

#define ClearAllPathsHealthCounters     6
#define ClearMpioDiskHealthCounters     7
typedef struct _ClearMpioDiskHealthCounters_IN
{
    // 
    ULONG DiskOrdinal;
    #define ClearMpioDiskHealthCounters_IN_DiskOrdinal_SIZE sizeof(ULONG)
    #define ClearMpioDiskHealthCounters_IN_DiskOrdinal_ID 1

} ClearMpioDiskHealthCounters_IN, *PClearMpioDiskHealthCounters_IN;

#define ClearMpioDiskHealthCounters_IN_SIZE (FIELD_OFFSET(ClearMpioDiskHealthCounters_IN, DiskOrdinal) + ClearMpioDiskHealthCounters_IN_DiskOrdinal_SIZE)

#define ClearAllMpioDisksHealthCounters     8

// MPIO_EventEntry - MPIO_EventEntry
#define MPIO_EventEntryGuid \
    { 0x2abb031a,0x71aa,0x46d4, { 0xa5,0x3f,0xea,0xe3,0x40,0x51,0xe3,0x57 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_EventEntry_GUID, \
            0x2abb031a,0x71aa,0x46d4,0xa5,0x3f,0xea,0xe3,0x40,0x51,0xe3,0x57);
#endif


typedef struct _MPIO_EventEntry
{
    // 
    ULONGLONG TimeStamp;
    #define MPIO_EventEntry_TimeStamp_SIZE sizeof(ULONGLONG)
    #define MPIO_EventEntry_TimeStamp_ID 1


#define MPIO_FATAL_ERROR 1
#define MPIO_ERROR 2
#define MPIO_WARNING 3
#define MPIO_INFORMATION 4

    // 
    ULONG Severity;
    #define MPIO_EventEntry_Severity_SIZE sizeof(ULONG)
    #define MPIO_EventEntry_Severity_ID 2

    // 
    WCHAR Component[63 + 1];
    #define MPIO_EventEntry_Component_ID 3

    // 
    WCHAR EventDescription[63 + 1];
    #define MPIO_EventEntry_EventDescription_ID 4

} MPIO_EventEntry, *PMPIO_EventEntry;

#endif
