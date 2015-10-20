#ifndef _mpiodisk_h_
#define _mpiodisk_h_

// PDOSCSI_ADDR - PDOSCSI_ADDR
#define PDOSCSI_ADDRGuid \
    { 0xc74aece4,0x468b,0x4113, { 0xb0,0x06,0x0c,0xec,0xdc,0x96,0x8a,0xc4 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(PDOSCSI_ADDR_GUID, \
            0xc74aece4,0x468b,0x4113,0xb0,0x06,0x0c,0xec,0xdc,0x96,0x8a,0xc4);
#endif


typedef struct _PDOSCSI_ADDR
{
    // 
    UCHAR PortNumber;
    #define PDOSCSI_ADDR_PortNumber_SIZE sizeof(UCHAR)
    #define PDOSCSI_ADDR_PortNumber_ID 1

    // 
    UCHAR ScsiPathId;
    #define PDOSCSI_ADDR_ScsiPathId_SIZE sizeof(UCHAR)
    #define PDOSCSI_ADDR_ScsiPathId_ID 2

    // 
    UCHAR TargetId;
    #define PDOSCSI_ADDR_TargetId_SIZE sizeof(UCHAR)
    #define PDOSCSI_ADDR_TargetId_ID 3

    // 
    UCHAR Lun;
    #define PDOSCSI_ADDR_Lun_SIZE sizeof(UCHAR)
    #define PDOSCSI_ADDR_Lun_ID 4

} PDOSCSI_ADDR, *PPDOSCSI_ADDR;

#define PDOSCSI_ADDR_SIZE (FIELD_OFFSET(PDOSCSI_ADDR, Lun) + PDOSCSI_ADDR_Lun_SIZE)

// PDO_INFORMATION - PDO_INFORMATION
#define PDO_INFORMATIONGuid \
    { 0xe69e581d,0x6580,0x4bc2, { 0xba,0xd1,0x7e,0xee,0x85,0x98,0x90,0x86 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(PDO_INFORMATION_GUID, \
            0xe69e581d,0x6580,0x4bc2,0xba,0xd1,0x7e,0xee,0x85,0x98,0x90,0x86);
#endif


typedef struct _PDO_INFORMATION
{
    // 
    PDOSCSI_ADDR ScsiAddress;
    #define PDO_INFORMATION_ScsiAddress_SIZE sizeof(PDOSCSI_ADDR)
    #define PDO_INFORMATION_ScsiAddress_ID 1

    // 
    ULONG DeviceState;
    #define PDO_INFORMATION_DeviceState_SIZE sizeof(ULONG)
    #define PDO_INFORMATION_DeviceState_ID 2

    // 
    ULONGLONG PathIdentifier;
    #define PDO_INFORMATION_PathIdentifier_SIZE sizeof(ULONGLONG)
    #define PDO_INFORMATION_PathIdentifier_ID 3

    // 
    ULONG IdentifierType;
    #define PDO_INFORMATION_IdentifierType_SIZE sizeof(ULONG)
    #define PDO_INFORMATION_IdentifierType_ID 4

    // 
    ULONG IdentifierLength;
    #define PDO_INFORMATION_IdentifierLength_SIZE sizeof(ULONG)
    #define PDO_INFORMATION_IdentifierLength_ID 5

    // 
    UCHAR Identifier[32];
    #define PDO_INFORMATION_Identifier_SIZE sizeof(UCHAR[32])
    #define PDO_INFORMATION_Identifier_ID 6

    // 
    UCHAR Pad[4];
    #define PDO_INFORMATION_Pad_SIZE sizeof(UCHAR[4])
    #define PDO_INFORMATION_Pad_ID 7

} PDO_INFORMATION, *PPDO_INFORMATION;

#define PDO_INFORMATION_SIZE (FIELD_OFFSET(PDO_INFORMATION, Pad) + PDO_INFORMATION_Pad_SIZE)

// MPIO_GET_DESCRIPTOR - MPIO_GET_DESCRIPTOR
#define MPIO_GET_DESCRIPTORGuid \
    { 0x85134d46,0xd17c,0x4992, { 0x83,0xf9,0x07,0x0d,0xd4,0xc4,0x8e,0x0b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_GET_DESCRIPTOR_GUID, \
            0x85134d46,0xd17c,0x4992,0x83,0xf9,0x07,0x0d,0xd4,0xc4,0x8e,0x0b);
#endif


typedef struct _MPIO_GET_DESCRIPTOR
{
    // 
    ULONG NumberPdos;
    #define MPIO_GET_DESCRIPTOR_NumberPdos_SIZE sizeof(ULONG)
    #define MPIO_GET_DESCRIPTOR_NumberPdos_ID 1

    // 
    WCHAR DeviceName[63 + 1];
    #define MPIO_GET_DESCRIPTOR_DeviceName_ID 2

    // 
    PDO_INFORMATION PdoInformation[1];
    #define MPIO_GET_DESCRIPTOR_PdoInformation_ID 3

} MPIO_GET_DESCRIPTOR, *PMPIO_GET_DESCRIPTOR;

// MPIO_DEVINSTANCE_HEALTH_CLASS - MPIO_DEVINSTANCE_HEALTH_CLASS
#define MPIO_DEVINSTANCE_HEALTH_CLASSGuid \
    { 0xf5e3daf3,0x4fe2,0x4faa, { 0xb0,0x00,0x48,0x85,0x10,0xa6,0x91,0xe4 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_DEVINSTANCE_HEALTH_CLASS_GUID, \
            0xf5e3daf3,0x4fe2,0x4faa,0xb0,0x00,0x48,0x85,0x10,0xa6,0x91,0xe4);
#endif


typedef struct _MPIO_DEVINSTANCE_HEALTH_CLASS
{
    // 
    ULONGLONG PathId;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_PathId_SIZE sizeof(ULONGLONG)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_PathId_ID 1

    // 
    ULONGLONG NumberReads;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberReads_SIZE sizeof(ULONGLONG)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberReads_ID 2

    // 
    ULONGLONG NumberWrites;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberWrites_SIZE sizeof(ULONGLONG)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberWrites_ID 3

    // 
    ULONGLONG NumberBytesRead;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberBytesRead_SIZE sizeof(ULONGLONG)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberBytesRead_ID 4

    // 
    ULONGLONG NumberBytesWritten;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberBytesWritten_SIZE sizeof(ULONGLONG)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberBytesWritten_ID 5

    // 
    ULONGLONG NumberRetries;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberRetries_SIZE sizeof(ULONGLONG)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberRetries_ID 6

    // 
    ULONGLONG NumberIoErrors;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberIoErrors_SIZE sizeof(ULONGLONG)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberIoErrors_ID 7

    // 
    ULONGLONG CreateTime;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_CreateTime_SIZE sizeof(ULONGLONG)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_CreateTime_ID 8

    // 
    ULONGLONG FailTime;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_FailTime_SIZE sizeof(ULONGLONG)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_FailTime_ID 9

    // 
    BOOLEAN DeviceOffline;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_DeviceOffline_SIZE sizeof(BOOLEAN)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_DeviceOffline_ID 10

    // 
    UCHAR NumberReadsWrap;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberReadsWrap_SIZE sizeof(UCHAR)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberReadsWrap_ID 11

    // 
    UCHAR NumberWritesWrap;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberWritesWrap_SIZE sizeof(UCHAR)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberWritesWrap_ID 12

    // 
    UCHAR NumberBytesReadWrap;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberBytesReadWrap_SIZE sizeof(UCHAR)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberBytesReadWrap_ID 13

    // 
    UCHAR NumberBytesWrittenWrap;
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberBytesWrittenWrap_SIZE sizeof(UCHAR)
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_NumberBytesWrittenWrap_ID 14

    // 
    UCHAR Pad[3];
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_Pad_SIZE sizeof(UCHAR[3])
    #define MPIO_DEVINSTANCE_HEALTH_CLASS_Pad_ID 15

} MPIO_DEVINSTANCE_HEALTH_CLASS, *PMPIO_DEVINSTANCE_HEALTH_CLASS;

#define MPIO_DEVINSTANCE_HEALTH_CLASS_SIZE (FIELD_OFFSET(MPIO_DEVINSTANCE_HEALTH_CLASS, Pad) + MPIO_DEVINSTANCE_HEALTH_CLASS_Pad_SIZE)

// MPIO_DEVINSTANCE_HEALTH_INFO - MPIO_DEVINSTANCE_HEALTH_INFO
#define MPIO_DEVINSTANCE_HEALTH_INFOGuid \
    { 0x9e4f39ac,0xcbaa,0x4298, { 0xb6,0x00,0x48,0x8a,0xc5,0x65,0x2e,0xa9 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_DEVINSTANCE_HEALTH_INFO_GUID, \
            0x9e4f39ac,0xcbaa,0x4298,0xb6,0x00,0x48,0x8a,0xc5,0x65,0x2e,0xa9);
#endif


typedef struct _MPIO_DEVINSTANCE_HEALTH_INFO
{
    // 
    ULONG NumberDevInstancePackets;
    #define MPIO_DEVINSTANCE_HEALTH_INFO_NumberDevInstancePackets_SIZE sizeof(ULONG)
    #define MPIO_DEVINSTANCE_HEALTH_INFO_NumberDevInstancePackets_ID 1

    // 
    ULONG Reserved;
    #define MPIO_DEVINSTANCE_HEALTH_INFO_Reserved_SIZE sizeof(ULONG)
    #define MPIO_DEVINSTANCE_HEALTH_INFO_Reserved_ID 2

    // 
    MPIO_DEVINSTANCE_HEALTH_CLASS DevInstanceHealthPackets[1];
    #define MPIO_DEVINSTANCE_HEALTH_INFO_DevInstanceHealthPackets_ID 3

} MPIO_DEVINSTANCE_HEALTH_INFO, *PMPIO_DEVINSTANCE_HEALTH_INFO;

// MPIO_DISK_WMI_METHODS - MPIO_DISK_WMI_METHODS
#define MPIO_DISK_WMI_METHODSGuid \
    { 0xe6f52471,0xf302,0x49ce, { 0x99,0x0b,0xfa,0x7f,0xc9,0xeb,0xe6,0x66 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_DISK_WMI_METHODS_GUID, \
            0xe6f52471,0xf302,0x49ce,0x99,0x0b,0xfa,0x7f,0xc9,0xeb,0xe6,0x66);
#endif

//
// Method id definitions for MPIO_DISK_WMI_METHODS
#define ClearAllDevInstancesHealthCounters     1
#define ClearDevInstanceHealthCounters     2
typedef struct _ClearDevInstanceHealthCounters_IN
{
    // 
    ULONGLONG PathID;
    #define ClearDevInstanceHealthCounters_IN_PathID_SIZE sizeof(ULONGLONG)
    #define ClearDevInstanceHealthCounters_IN_PathID_ID 1

} ClearDevInstanceHealthCounters_IN, *PClearDevInstanceHealthCounters_IN;

#define ClearDevInstanceHealthCounters_IN_SIZE (FIELD_OFFSET(ClearDevInstanceHealthCounters_IN, PathID) + ClearDevInstanceHealthCounters_IN_PathID_SIZE)


// MPIO_DSM_Path_V2 - MPIO_DSM_Path_V2
#define MPIO_DSM_Path_V2Guid \
    { 0xac4e13b0,0x7cb6,0x4599, { 0xb3,0x97,0xfb,0x36,0xfa,0xec,0x5c,0x96 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_DSM_Path_V2_GUID, \
            0xac4e13b0,0x7cb6,0x4599,0xb3,0x97,0xfb,0x36,0xfa,0xec,0x5c,0x96);
#endif


typedef struct _MPIO_DSM_Path_V2
{
    // 
    ULONGLONG DsmPathId;
    #define MPIO_DSM_Path_V2_DsmPathId_SIZE sizeof(ULONGLONG)
    #define MPIO_DSM_Path_V2_DsmPathId_ID 1

    // 
    ULONGLONG Reserved;
    #define MPIO_DSM_Path_V2_Reserved_SIZE sizeof(ULONGLONG)
    #define MPIO_DSM_Path_V2_Reserved_ID 2

    // 
    ULONG PathWeight;
    #define MPIO_DSM_Path_V2_PathWeight_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_V2_PathWeight_ID 3

    // 
    ULONG PrimaryPath;
    #define MPIO_DSM_Path_V2_PrimaryPath_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_V2_PrimaryPath_ID 4

    // 
    ULONG OptimizedPath;
    #define MPIO_DSM_Path_V2_OptimizedPath_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_V2_OptimizedPath_ID 5

    // 
    ULONG PreferredPath;
    #define MPIO_DSM_Path_V2_PreferredPath_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_V2_PreferredPath_ID 6

    // 
    ULONG FailedPath;
    #define MPIO_DSM_Path_V2_FailedPath_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_V2_FailedPath_ID 7


#define STATE_ACTIVE_OPTIMIZED 0
#define STATE_ACTIVE_UNOPTIMIZED 1
#define STATE_STANDBY 2
#define STATE_UNAVAILABLE 3
#define STATE_NOT_USED 16

    // 
    ULONG TargetPortGroup_State;
    #define MPIO_DSM_Path_V2_TargetPortGroup_State_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_V2_TargetPortGroup_State_ID 8


#define ALUA_NOT_SUPPORTED 0
#define ALUA_IMPLICIT_ONLY 1
#define ALUA_EXPLICIT_ONLY 2
#define ALUA_IMPLICIT_AND_EXPLICIT 3

    // 
    ULONG ALUASupport;
    #define MPIO_DSM_Path_V2_ALUASupport_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_V2_ALUASupport_ID 9

    // 
    UCHAR SymmetricLUA;
    #define MPIO_DSM_Path_V2_SymmetricLUA_SIZE sizeof(UCHAR)
    #define MPIO_DSM_Path_V2_SymmetricLUA_ID 10

    // 
    UCHAR TargetPortGroup_Preferred;
    #define MPIO_DSM_Path_V2_TargetPortGroup_Preferred_SIZE sizeof(UCHAR)
    #define MPIO_DSM_Path_V2_TargetPortGroup_Preferred_ID 11

    // 
    USHORT TargetPortGroup_Identifier;
    #define MPIO_DSM_Path_V2_TargetPortGroup_Identifier_SIZE sizeof(USHORT)
    #define MPIO_DSM_Path_V2_TargetPortGroup_Identifier_ID 12

    // 
    ULONG TargetPort_Identifier;
    #define MPIO_DSM_Path_V2_TargetPort_Identifier_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_V2_TargetPort_Identifier_ID 13

    // 
    ULONG Reserved32;
    #define MPIO_DSM_Path_V2_Reserved32_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_V2_Reserved32_ID 14

    // 
    ULONGLONG Reserved64;
    #define MPIO_DSM_Path_V2_Reserved64_SIZE sizeof(ULONGLONG)
    #define MPIO_DSM_Path_V2_Reserved64_ID 15

} MPIO_DSM_Path_V2, *PMPIO_DSM_Path_V2;

#define MPIO_DSM_Path_V2_SIZE (FIELD_OFFSET(MPIO_DSM_Path_V2, Reserved64) + MPIO_DSM_Path_V2_Reserved64_SIZE)

// DSM_Load_Balance_Policy_V2 - DSM_Load_Balance_Policy_V2
#define DSM_Load_Balance_Policy_V2Guid \
    { 0x6f4474ce,0xd20e,0x426c, { 0x93,0x71,0x9b,0x87,0xc2,0xe2,0xcd,0x5a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_Load_Balance_Policy_V2_GUID, \
            0x6f4474ce,0xd20e,0x426c,0x93,0x71,0x9b,0x87,0xc2,0xe2,0xcd,0x5a);
#endif


typedef struct _DSM_Load_Balance_Policy_V2
{
    // 
    ULONG Version;
    #define DSM_Load_Balance_Policy_V2_Version_SIZE sizeof(ULONG)
    #define DSM_Load_Balance_Policy_V2_Version_ID 1


#define DSM_LB_FAILOVER 1
#define DSM_LB_ROUND_ROBIN 2
#define DSM_LB_ROUND_ROBIN_WITH_SUBSET 3
#define DSM_LB_DYN_LEAST_QUEUE_DEPTH 4
#define DSM_LB_WEIGHTED_PATHS 5
#define DSM_LB_LEAST_BLOCKS 6
#define DSM_LB_VENDOR_SPECIFIC 7

    // 
    ULONG LoadBalancePolicy;
    #define DSM_Load_Balance_Policy_V2_LoadBalancePolicy_SIZE sizeof(ULONG)
    #define DSM_Load_Balance_Policy_V2_LoadBalancePolicy_ID 2

    // 
    ULONG DSMPathCount;
    #define DSM_Load_Balance_Policy_V2_DSMPathCount_SIZE sizeof(ULONG)
    #define DSM_Load_Balance_Policy_V2_DSMPathCount_ID 3

    // 
    ULONG Reserved;
    #define DSM_Load_Balance_Policy_V2_Reserved_SIZE sizeof(ULONG)
    #define DSM_Load_Balance_Policy_V2_Reserved_ID 4

    // 
    MPIO_DSM_Path_V2 DSM_Paths[1];
    #define DSM_Load_Balance_Policy_V2_DSM_Paths_ID 5

} DSM_Load_Balance_Policy_V2, *PDSM_Load_Balance_Policy_V2;

// DSM_QueryLBPolicy_V2 - DSM_QueryLBPolicy_V2
#define DSM_QueryLBPolicy_V2Guid \
    { 0xd14fed0e,0xbdfb,0x4615, { 0x85,0x78,0x35,0x0c,0x4c,0x2b,0x06,0xd7 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_QueryLBPolicy_V2_GUID, \
            0xd14fed0e,0xbdfb,0x4615,0x85,0x78,0x35,0x0c,0x4c,0x2b,0x06,0xd7);
#endif


typedef struct _DSM_QueryLBPolicy_V2
{
    // 
    DSM_Load_Balance_Policy_V2 LoadBalancePolicy;
    #define DSM_QueryLBPolicy_V2_LoadBalancePolicy_SIZE sizeof(DSM_Load_Balance_Policy_V2)
    #define DSM_QueryLBPolicy_V2_LoadBalancePolicy_ID 1

} DSM_QueryLBPolicy_V2, *PDSM_QueryLBPolicy_V2;

#define DSM_QueryLBPolicy_V2_SIZE (FIELD_OFFSET(DSM_QueryLBPolicy_V2, LoadBalancePolicy) + DSM_QueryLBPolicy_V2_LoadBalancePolicy_SIZE)

// DSM_QuerySupportedLBPolicies_V2 - DSM_QuerySupportedLBPolicies_V2
#define DSM_QuerySupportedLBPolicies_V2Guid \
    { 0xfc777b74,0x7bcc,0x47ae, { 0xaa,0x63,0x59,0x65,0x6b,0xa5,0x93,0xfe } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_QuerySupportedLBPolicies_V2_GUID, \
            0xfc777b74,0x7bcc,0x47ae,0xaa,0x63,0x59,0x65,0x6b,0xa5,0x93,0xfe);
#endif


typedef struct _DSM_QuerySupportedLBPolicies_V2
{
    // 
    ULONG SupportedLBPoliciesCount;
    #define DSM_QuerySupportedLBPolicies_V2_SupportedLBPoliciesCount_SIZE sizeof(ULONG)
    #define DSM_QuerySupportedLBPolicies_V2_SupportedLBPoliciesCount_ID 1

    // 
    ULONG Reserved;
    #define DSM_QuerySupportedLBPolicies_V2_Reserved_SIZE sizeof(ULONG)
    #define DSM_QuerySupportedLBPolicies_V2_Reserved_ID 2

    // 
    DSM_Load_Balance_Policy_V2 Supported_LB_Policies[1];
    #define DSM_QuerySupportedLBPolicies_V2_Supported_LB_Policies_ID 3

} DSM_QuerySupportedLBPolicies_V2, *PDSM_QuerySupportedLBPolicies_V2;

// MPIO_DSM_Path - MPIO_DSM_Path
#define MPIO_DSM_PathGuid \
    { 0x80ebd5b4,0x3baf,0x41f1, { 0x9c,0x41,0xbd,0x36,0xc5,0x28,0x2b,0x67 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MPIO_DSM_Path_GUID, \
            0x80ebd5b4,0x3baf,0x41f1,0x9c,0x41,0xbd,0x36,0xc5,0x28,0x2b,0x67);
#endif


typedef struct _MPIO_DSM_Path
{
    // 
    ULONGLONG DsmPathId;
    #define MPIO_DSM_Path_DsmPathId_SIZE sizeof(ULONGLONG)
    #define MPIO_DSM_Path_DsmPathId_ID 1

    // 
    ULONGLONG Reserved;
    #define MPIO_DSM_Path_Reserved_SIZE sizeof(ULONGLONG)
    #define MPIO_DSM_Path_Reserved_ID 2

    // 
    ULONG PathWeight;
    #define MPIO_DSM_Path_PathWeight_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_PathWeight_ID 3

    // 
    ULONG PrimaryPath;
    #define MPIO_DSM_Path_PrimaryPath_SIZE sizeof(ULONG)
    #define MPIO_DSM_Path_PrimaryPath_ID 4

} MPIO_DSM_Path, *PMPIO_DSM_Path;

#define MPIO_DSM_Path_SIZE (FIELD_OFFSET(MPIO_DSM_Path, PrimaryPath) + MPIO_DSM_Path_PrimaryPath_SIZE)

// DSM_Load_Balance_Policy - DSM_Load_Balance_Policy
#define DSM_Load_Balance_PolicyGuid \
    { 0x3078b89b,0xa34f,0x4ff6, { 0x81,0x0a,0xc5,0x6a,0xd3,0xba,0x94,0x7d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_Load_Balance_Policy_GUID, \
            0x3078b89b,0xa34f,0x4ff6,0x81,0x0a,0xc5,0x6a,0xd3,0xba,0x94,0x7d);
#endif


typedef struct _DSM_Load_Balance_Policy
{
    // 
    ULONG Version;
    #define DSM_Load_Balance_Policy_Version_SIZE sizeof(ULONG)
    #define DSM_Load_Balance_Policy_Version_ID 1


#define DSM_LB_FAILOVER 1
#define DSM_LB_ROUND_ROBIN 2
#define DSM_LB_ROUND_ROBIN_WITH_SUBSET 3
#define DSM_LB_DYN_LEAST_QUEUE_DEPTH 4
#define DSM_LB_WEIGHTED_PATHS 5
#define DSM_LB_LEAST_BLOCKS 6
#define DSM_LB_VENDOR_SPECIFIC 7

    // 
    ULONG LoadBalancePolicy;
    #define DSM_Load_Balance_Policy_LoadBalancePolicy_SIZE sizeof(ULONG)
    #define DSM_Load_Balance_Policy_LoadBalancePolicy_ID 2

    // 
    ULONG DSMPathCount;
    #define DSM_Load_Balance_Policy_DSMPathCount_SIZE sizeof(ULONG)
    #define DSM_Load_Balance_Policy_DSMPathCount_ID 3

    // 
    ULONG Reserved;
    #define DSM_Load_Balance_Policy_Reserved_SIZE sizeof(ULONG)
    #define DSM_Load_Balance_Policy_Reserved_ID 4

    // 
    MPIO_DSM_Path DSM_Paths[1];
    #define DSM_Load_Balance_Policy_DSM_Paths_ID 5

} DSM_Load_Balance_Policy, *PDSM_Load_Balance_Policy;

// DSM_QueryLBPolicy - DSM_QueryLBPolicy
#define DSM_QueryLBPolicyGuid \
    { 0x20a4663b,0xbf54,0x4738, { 0xb4,0x03,0x0c,0xfc,0x71,0xec,0xfc,0x90 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_QueryLBPolicy_GUID, \
            0x20a4663b,0xbf54,0x4738,0xb4,0x03,0x0c,0xfc,0x71,0xec,0xfc,0x90);
#endif


typedef struct _DSM_QueryLBPolicy
{
    // 
    DSM_Load_Balance_Policy LoadBalancePolicy;
    #define DSM_QueryLBPolicy_LoadBalancePolicy_SIZE sizeof(DSM_Load_Balance_Policy)
    #define DSM_QueryLBPolicy_LoadBalancePolicy_ID 1

} DSM_QueryLBPolicy, *PDSM_QueryLBPolicy;

#define DSM_QueryLBPolicy_SIZE (FIELD_OFFSET(DSM_QueryLBPolicy, LoadBalancePolicy) + DSM_QueryLBPolicy_LoadBalancePolicy_SIZE)

// DSM_QuerySupportedLBPolicies - DSM_QuerySupportedLBPolicies
#define DSM_QuerySupportedLBPoliciesGuid \
    { 0xffcf3f4e,0xbab6,0x455c, { 0xba,0x99,0xd6,0x0c,0xfb,0xc5,0x88,0x7d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_QuerySupportedLBPolicies_GUID, \
            0xffcf3f4e,0xbab6,0x455c,0xba,0x99,0xd6,0x0c,0xfb,0xc5,0x88,0x7d);
#endif


typedef struct _DSM_QuerySupportedLBPolicies
{
    // 
    ULONG SupportedLBPoliciesCount;
    #define DSM_QuerySupportedLBPolicies_SupportedLBPoliciesCount_SIZE sizeof(ULONG)
    #define DSM_QuerySupportedLBPolicies_SupportedLBPoliciesCount_ID 1

    // 
    ULONG Reserved;
    #define DSM_QuerySupportedLBPolicies_Reserved_SIZE sizeof(ULONG)
    #define DSM_QuerySupportedLBPolicies_Reserved_ID 2

    // 
    DSM_Load_Balance_Policy Supported_LB_Policies[1];
    #define DSM_QuerySupportedLBPolicies_Supported_LB_Policies_ID 3

} DSM_QuerySupportedLBPolicies, *PDSM_QuerySupportedLBPolicies;

// DSM_LB_Operations - DSM_LB_Operations
#define DSM_LB_OperationsGuid \
    { 0xc944053c,0xc90f,0x4012, { 0xb7,0x75,0x1f,0x1a,0x26,0x1d,0x4b,0xe4 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_LB_Operations_GUID, \
            0xc944053c,0xc90f,0x4012,0xb7,0x75,0x1f,0x1a,0x26,0x1d,0x4b,0xe4);
#endif

//
// Method id definitions for DSM_LB_Operations
#define DsmSetLoadBalancePolicy     1
typedef struct _DsmSetLoadBalancePolicy_IN
{
    // 
    DSM_Load_Balance_Policy LoadBalancePolicy;
    #define DsmSetLoadBalancePolicy_IN_LoadBalancePolicy_SIZE sizeof(DSM_Load_Balance_Policy)
    #define DsmSetLoadBalancePolicy_IN_LoadBalancePolicy_ID 1

} DsmSetLoadBalancePolicy_IN, *PDsmSetLoadBalancePolicy_IN;

#define DsmSetLoadBalancePolicy_IN_SIZE (FIELD_OFFSET(DsmSetLoadBalancePolicy_IN, LoadBalancePolicy) + DsmSetLoadBalancePolicy_IN_LoadBalancePolicy_SIZE)

typedef struct _DsmSetLoadBalancePolicy_OUT
{
    // 
    ULONG Status;
    #define DsmSetLoadBalancePolicy_OUT_Status_SIZE sizeof(ULONG)
    #define DsmSetLoadBalancePolicy_OUT_Status_ID 2

} DsmSetLoadBalancePolicy_OUT, *PDsmSetLoadBalancePolicy_OUT;

#define DsmSetLoadBalancePolicy_OUT_SIZE (FIELD_OFFSET(DsmSetLoadBalancePolicy_OUT, Status) + DsmSetLoadBalancePolicy_OUT_Status_SIZE)

#define DsmSetLoadBalancePolicyALUA     2
typedef struct _DsmSetLoadBalancePolicyALUA_IN
{
    // 
    DSM_Load_Balance_Policy_V2 LoadBalancePolicy;
    #define DsmSetLoadBalancePolicyALUA_IN_LoadBalancePolicy_SIZE sizeof(DSM_Load_Balance_Policy_V2)
    #define DsmSetLoadBalancePolicyALUA_IN_LoadBalancePolicy_ID 1

} DsmSetLoadBalancePolicyALUA_IN, *PDsmSetLoadBalancePolicyALUA_IN;

#define DsmSetLoadBalancePolicyALUA_IN_SIZE (FIELD_OFFSET(DsmSetLoadBalancePolicyALUA_IN, LoadBalancePolicy) + DsmSetLoadBalancePolicyALUA_IN_LoadBalancePolicy_SIZE)

typedef struct _DsmSetLoadBalancePolicyALUA_OUT
{
    // 
    ULONG Status;
    #define DsmSetLoadBalancePolicyALUA_OUT_Status_SIZE sizeof(ULONG)
    #define DsmSetLoadBalancePolicyALUA_OUT_Status_ID 2

} DsmSetLoadBalancePolicyALUA_OUT, *PDsmSetLoadBalancePolicyALUA_OUT;

#define DsmSetLoadBalancePolicyALUA_OUT_SIZE (FIELD_OFFSET(DsmSetLoadBalancePolicyALUA_OUT, Status) + DsmSetLoadBalancePolicyALUA_OUT_Status_SIZE)


// DSM_QueryUniqueId - DSM_QueryUniqueId
#define DSM_QueryUniqueIdGuid \
    { 0x7b47cbe2,0x63d0,0x4e6b, { 0xb9,0x87,0x4b,0xfc,0xbd,0x6c,0x36,0x8e } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(DSM_QueryUniqueId_GUID, \
            0x7b47cbe2,0x63d0,0x4e6b,0xb9,0x87,0x4b,0xfc,0xbd,0x6c,0x36,0x8e);
#endif


typedef struct _DSM_QueryUniqueId
{
    // 
    ULONGLONG DsmUniqueId;
    #define DSM_QueryUniqueId_DsmUniqueId_SIZE sizeof(ULONGLONG)
    #define DSM_QueryUniqueId_DsmUniqueId_ID 1

} DSM_QueryUniqueId, *PDSM_QueryUniqueId;

#define DSM_QueryUniqueId_SIZE (FIELD_OFFSET(DSM_QueryUniqueId, DsmUniqueId) + DSM_QueryUniqueId_DsmUniqueId_SIZE)

#endif
