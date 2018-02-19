#ifndef _wmidata_h_
#define _wmidata_h_

// MSWmi_MofData - MSWmi_MofData
#define MSWmi_MofDataGuid \
    { 0x05901221,0xd566,0x11d1, { 0xb2,0xf0,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSWmi_MofData_GUID, \
            0x05901221,0xd566,0x11d1,0xb2,0xf0,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSWmi_MofData
{
    // 
    ULONG Unused1;
    #define MSWmi_MofData_Unused1_SIZE sizeof(ULONG)
    #define MSWmi_MofData_Unused1_ID 1

    // 
    ULONG Unused2;
    #define MSWmi_MofData_Unused2_SIZE sizeof(ULONG)
    #define MSWmi_MofData_Unused2_ID 2

    // 
    ULONG Size;
    #define MSWmi_MofData_Size_SIZE sizeof(ULONG)
    #define MSWmi_MofData_Size_ID 3

    // 
    ULONG Unused4;
    #define MSWmi_MofData_Unused4_SIZE sizeof(ULONG)
    #define MSWmi_MofData_Unused4_ID 4

    // 
    UCHAR BinaryMofData[1];
    #define MSWmi_MofData_BinaryMofData_ID 5

} MSWmi_MofData, *PMSWmi_MofData;

// MSWmi_ProviderInfo - MSWmi_ProviderInfo
#define MSWmi_ProviderInfoGuid \
    { 0xc7bf35d0,0xaadb,0x11d1, { 0xbf,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSWmi_ProviderInfo_GUID, \
            0xc7bf35d0,0xaadb,0x11d1,0xbf,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


// Warning: Header for class MSWmi_ProviderInfo cannot be created
typedef struct _MSWmi_ProviderInfo
{
    char VariableData[1];

} MSWmi_ProviderInfo, *PMSWmi_ProviderInfo;

// MSWmi_PnPDeviceId - MSWmi_PnPDeviceId
#define DATA_PROVIDER_PNPID_GUID \
    { 0xc7bf35d2,0xaadb,0x11d1, { 0xbf,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSWmi_PnPDeviceId_GUID, \
            0xc7bf35d2,0xaadb,0x11d1,0xbf,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSWmi_PnPDeviceId
{
    // 
    CHAR VariableData[1];
    #define MSWmi_PnPDeviceId_PnPDeviceId_ID 1

} MSWmi_PnPDeviceId, *PMSWmi_PnPDeviceId;

// MSWmi_PnPInstanceNames - MSWmi_PnPInstanceNames
#define DATA_PROVIDER_PNPID_INSTANCE_NAMES_GUID \
    { 0xc7bf35d3,0xaadb,0x11d1, { 0xbf,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSWmi_PnPInstanceNames_GUID, \
            0xc7bf35d3,0xaadb,0x11d1,0xbf,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSWmi_PnPInstanceNames
{
    // 
    ULONG Count;
    #define MSWmi_PnPInstanceNames_Count_SIZE sizeof(ULONG)
    #define MSWmi_PnPInstanceNames_Count_ID 1

    // 
    WCHAR InstanceNameList[1];
    #define MSWmi_PnPInstanceNames_InstanceNameList_ID 2

} MSWmi_PnPInstanceNames, *PMSWmi_PnPInstanceNames;

// MSWmi_Guid - MSWmi_Guid
#define MSWmi_GuidGuid \
    { 0xf8c60aed,0xef8d,0x4f95, { 0x9e,0xa8,0xf0,0x43,0x18,0xa0,0x0f,0x30 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSWmi_Guid_GUID, \
            0xf8c60aed,0xef8d,0x4f95,0x9e,0xa8,0xf0,0x43,0x18,0xa0,0x0f,0x30);
#endif


typedef struct _MSWmi_Guid
{
    // 
    UCHAR Guid[16];
    #define MSWmi_Guid_Guid_SIZE sizeof(UCHAR[16])
    #define MSWmi_Guid_Guid_ID 1

} MSWmi_Guid, *PMSWmi_Guid;

#define MSWmi_Guid_SIZE (FIELD_OFFSET(MSWmi_Guid, Guid) + MSWmi_Guid_Guid_SIZE)

// MSWmi_GuidRegistrationInfo - MSWmi_GuidRegistrationInfo
#define MSWmi_GuidRegistrationInfoGuid \
    { 0xb48d49a1,0xe777,0x11d0, { 0xa5,0x0c,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSWmi_GuidRegistrationInfo_GUID, \
            0xb48d49a1,0xe777,0x11d0,0xa5,0x0c,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSWmi_GuidRegistrationInfo
{
    // 
    ULONG Operation;
    #define MSWmi_GuidRegistrationInfo_Operation_SIZE sizeof(ULONG)
    #define MSWmi_GuidRegistrationInfo_Operation_ID 1

    // 
    ULONG GuidCount;
    #define MSWmi_GuidRegistrationInfo_GuidCount_SIZE sizeof(ULONG)
    #define MSWmi_GuidRegistrationInfo_GuidCount_ID 2

    // 
    MSWmi_Guid GuidList[1];
    #define MSWmi_GuidRegistrationInfo_GuidList_ID 3

} MSWmi_GuidRegistrationInfo, *PMSWmi_GuidRegistrationInfo;

// MSAcpiInfo - MSAcpiInfo
#define MSAcpiInfoGuid \
    { 0x5daf38ae,0xf6f8,0x4d90, { 0x81,0x99,0xeb,0xde,0x68,0x00,0xec,0x3b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSAcpiInfo_GUID, \
            0x5daf38ae,0xf6f8,0x4d90,0x81,0x99,0xeb,0xde,0x68,0x00,0xec,0x3b);
#endif


typedef struct _MSAcpiInfo
{
    // 
    ULONG BootArchitecture;
    #define MSAcpiInfo_BootArchitecture_SIZE sizeof(ULONG)
    #define MSAcpiInfo_BootArchitecture_ID 1

    // 
    ULONG PreferredProfile;
    #define MSAcpiInfo_PreferredProfile_SIZE sizeof(ULONG)
    #define MSAcpiInfo_PreferredProfile_ID 2

    // 
    ULONG Capabilities;
    #define MSAcpiInfo_Capabilities_SIZE sizeof(ULONG)
    #define MSAcpiInfo_Capabilities_ID 3

} MSAcpiInfo, *PMSAcpiInfo;

#define MSAcpiInfo_SIZE (FIELD_OFFSET(MSAcpiInfo, Capabilities) + MSAcpiInfo_Capabilities_SIZE)

// WHEAErrorInjectionMethods - WHEAErrorInjectionMethods
#define WHEAErrorInjectionMethodsGuid \
    { 0xe808ff73,0x2093,0x472a, { 0xa5,0xcc,0xdf,0x24,0xf0,0x31,0xb0,0x35 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WHEAErrorInjectionMethods_GUID, \
            0xe808ff73,0x2093,0x472a,0xa5,0xcc,0xdf,0x24,0xf0,0x31,0xb0,0x35);
#endif

//
// Method id definitions for WHEAErrorInjectionMethods
#define GetErrorInjectionCapabilitiesRtn     1
typedef struct _GET_INJECTION_CAPABILITIES_OUT
{
    // 
    ULONG Status;
    #define GET_INJECTION_CAPABILITIES_OUT_Status_SIZE sizeof(ULONG)
    #define GET_INJECTION_CAPABILITIES_OUT_Status_ID 1

    // 
    ULONG Capabilities;
    #define GET_INJECTION_CAPABILITIES_OUT_Capabilities_SIZE sizeof(ULONG)
    #define GET_INJECTION_CAPABILITIES_OUT_Capabilities_ID 2

} GET_INJECTION_CAPABILITIES_OUT, *PGET_INJECTION_CAPABILITIES_OUT;

#define GET_INJECTION_CAPABILITIES_OUT_SIZE (FIELD_OFFSET(GET_INJECTION_CAPABILITIES_OUT, Capabilities) + GET_INJECTION_CAPABILITIES_OUT_Capabilities_SIZE)

#define InjectErrorRtn     2
typedef struct _INJECT_HARDWARE_ERROR_IN
{
    // 
    ULONG ErrorType;
    #define INJECT_HARDWARE_ERROR_IN_ErrorType_SIZE sizeof(ULONG)
    #define INJECT_HARDWARE_ERROR_IN_ErrorType_ID 1

    // 
    ULONGLONG Parameter1;
    #define INJECT_HARDWARE_ERROR_IN_Parameter1_SIZE sizeof(ULONGLONG)
    #define INJECT_HARDWARE_ERROR_IN_Parameter1_ID 2

    // 
    ULONGLONG Parameter2;
    #define INJECT_HARDWARE_ERROR_IN_Parameter2_SIZE sizeof(ULONGLONG)
    #define INJECT_HARDWARE_ERROR_IN_Parameter2_ID 3

    // 
    ULONGLONG Parameter3;
    #define INJECT_HARDWARE_ERROR_IN_Parameter3_SIZE sizeof(ULONGLONG)
    #define INJECT_HARDWARE_ERROR_IN_Parameter3_ID 4

    // 
    ULONGLONG Parameter4;
    #define INJECT_HARDWARE_ERROR_IN_Parameter4_SIZE sizeof(ULONGLONG)
    #define INJECT_HARDWARE_ERROR_IN_Parameter4_ID 5

} INJECT_HARDWARE_ERROR_IN, *PINJECT_HARDWARE_ERROR_IN;

#define INJECT_HARDWARE_ERROR_IN_SIZE (FIELD_OFFSET(INJECT_HARDWARE_ERROR_IN, Parameter4) + INJECT_HARDWARE_ERROR_IN_Parameter4_SIZE)

typedef struct _INJECT_HARDWARE_ERROR_OUT
{
    // 
    ULONG Status;
    #define INJECT_HARDWARE_ERROR_OUT_Status_SIZE sizeof(ULONG)
    #define INJECT_HARDWARE_ERROR_OUT_Status_ID 6

} INJECT_HARDWARE_ERROR_OUT, *PINJECT_HARDWARE_ERROR_OUT;

#define INJECT_HARDWARE_ERROR_OUT_SIZE (FIELD_OFFSET(INJECT_HARDWARE_ERROR_OUT, Status) + INJECT_HARDWARE_ERROR_OUT_Status_SIZE)


// WHEAErrorSourceMethods - WHEAErrorSourceMethods
#define WHEAErrorSourceMethodsGuid \
    { 0x91c3c007,0x185d,0x4d78, { 0xa7,0x51,0xbf,0xcb,0x31,0xc2,0xc6,0x4d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WHEAErrorSourceMethods_GUID, \
            0x91c3c007,0x185d,0x4d78,0xa7,0x51,0xbf,0xcb,0x31,0xc2,0xc6,0x4d);
#endif

//
// Method id definitions for WHEAErrorSourceMethods
#define GetAllErrorSourcesRtn     1
typedef struct _GET_ALL_ERROR_SOURCES_OUT
{
    // 
    ULONG Status;
    #define GET_ALL_ERROR_SOURCES_OUT_Status_SIZE sizeof(ULONG)
    #define GET_ALL_ERROR_SOURCES_OUT_Status_ID 1

    // 
    ULONG Count;
    #define GET_ALL_ERROR_SOURCES_OUT_Count_SIZE sizeof(ULONG)
    #define GET_ALL_ERROR_SOURCES_OUT_Count_ID 2

    // 
    ULONG Length;
    #define GET_ALL_ERROR_SOURCES_OUT_Length_SIZE sizeof(ULONG)
    #define GET_ALL_ERROR_SOURCES_OUT_Length_ID 3

    // 
    UCHAR ErrorSourceArray[1];
    #define GET_ALL_ERROR_SOURCES_OUT_ErrorSourceArray_ID 4

} GET_ALL_ERROR_SOURCES_OUT, *PGET_ALL_ERROR_SOURCES_OUT;

#define GetErrorSourceInfoRtn     2
typedef struct _GET_ERROR_SOURCE_INFO_IN
{
    // 
    ULONG ErrorSourceId;
    #define GET_ERROR_SOURCE_INFO_IN_ErrorSourceId_SIZE sizeof(ULONG)
    #define GET_ERROR_SOURCE_INFO_IN_ErrorSourceId_ID 2

} GET_ERROR_SOURCE_INFO_IN, *PGET_ERROR_SOURCE_INFO_IN;

#define GET_ERROR_SOURCE_INFO_IN_SIZE (FIELD_OFFSET(GET_ERROR_SOURCE_INFO_IN, ErrorSourceId) + GET_ERROR_SOURCE_INFO_IN_ErrorSourceId_SIZE)

typedef struct _GET_ERROR_SOURCE_INFO_OUT
{
    // 
    ULONG Status;
    #define GET_ERROR_SOURCE_INFO_OUT_Status_SIZE sizeof(ULONG)
    #define GET_ERROR_SOURCE_INFO_OUT_Status_ID 1

    // 
    ULONG Length;
    #define GET_ERROR_SOURCE_INFO_OUT_Length_SIZE sizeof(ULONG)
    #define GET_ERROR_SOURCE_INFO_OUT_Length_ID 3

    // 
    UCHAR ErrorSourceInfo[1];
    #define GET_ERROR_SOURCE_INFO_OUT_ErrorSourceInfo_ID 4

} GET_ERROR_SOURCE_INFO_OUT, *PGET_ERROR_SOURCE_INFO_OUT;

#define SetErrorSourceInfoRtn     3
typedef struct _SET_ERROR_SOURCE_INFO_IN
{
    // 
    ULONG Length;
    #define SET_ERROR_SOURCE_INFO_IN_Length_SIZE sizeof(ULONG)
    #define SET_ERROR_SOURCE_INFO_IN_Length_ID 2

    // 
    UCHAR ErrorSourceInfo[1];
    #define SET_ERROR_SOURCE_INFO_IN_ErrorSourceInfo_ID 3

} SET_ERROR_SOURCE_INFO_IN, *PSET_ERROR_SOURCE_INFO_IN;

typedef struct _SET_ERROR_SOURCE_INFO_OUT
{
    // 
    ULONG Status;
    #define SET_ERROR_SOURCE_INFO_OUT_Status_SIZE sizeof(ULONG)
    #define SET_ERROR_SOURCE_INFO_OUT_Status_ID 1

} SET_ERROR_SOURCE_INFO_OUT, *PSET_ERROR_SOURCE_INFO_OUT;

#define SET_ERROR_SOURCE_INFO_OUT_SIZE (FIELD_OFFSET(SET_ERROR_SOURCE_INFO_OUT, Status) + SET_ERROR_SOURCE_INFO_OUT_Status_SIZE)

#define EnableErrorSourceRtn     4
typedef struct _ENABLE_ERROR_SOURCE_IN
{
    // 
    ULONG ErrorSourceId;
    #define ENABLE_ERROR_SOURCE_IN_ErrorSourceId_SIZE sizeof(ULONG)
    #define ENABLE_ERROR_SOURCE_IN_ErrorSourceId_ID 2

} ENABLE_ERROR_SOURCE_IN, *PENABLE_ERROR_SOURCE_IN;

#define ENABLE_ERROR_SOURCE_IN_SIZE (FIELD_OFFSET(ENABLE_ERROR_SOURCE_IN, ErrorSourceId) + ENABLE_ERROR_SOURCE_IN_ErrorSourceId_SIZE)

typedef struct _ENABLE_ERROR_SOURCE_OUT
{
    // 
    ULONG Status;
    #define ENABLE_ERROR_SOURCE_OUT_Status_SIZE sizeof(ULONG)
    #define ENABLE_ERROR_SOURCE_OUT_Status_ID 1

} ENABLE_ERROR_SOURCE_OUT, *PENABLE_ERROR_SOURCE_OUT;

#define ENABLE_ERROR_SOURCE_OUT_SIZE (FIELD_OFFSET(ENABLE_ERROR_SOURCE_OUT, Status) + ENABLE_ERROR_SOURCE_OUT_Status_SIZE)

#define DisableErrorSourceRtn     5
typedef struct _DISABLE_ERROR_SOURCE_IN
{
    // 
    ULONG ErrorSourceId;
    #define DISABLE_ERROR_SOURCE_IN_ErrorSourceId_SIZE sizeof(ULONG)
    #define DISABLE_ERROR_SOURCE_IN_ErrorSourceId_ID 2

} DISABLE_ERROR_SOURCE_IN, *PDISABLE_ERROR_SOURCE_IN;

#define DISABLE_ERROR_SOURCE_IN_SIZE (FIELD_OFFSET(DISABLE_ERROR_SOURCE_IN, ErrorSourceId) + DISABLE_ERROR_SOURCE_IN_ErrorSourceId_SIZE)

typedef struct _DISABLE_ERROR_SOURCE_OUT
{
    // 
    ULONG Status;
    #define DISABLE_ERROR_SOURCE_OUT_Status_SIZE sizeof(ULONG)
    #define DISABLE_ERROR_SOURCE_OUT_Status_ID 1

} DISABLE_ERROR_SOURCE_OUT, *PDISABLE_ERROR_SOURCE_OUT;

#define DISABLE_ERROR_SOURCE_OUT_SIZE (FIELD_OFFSET(DISABLE_ERROR_SOURCE_OUT, Status) + DISABLE_ERROR_SOURCE_OUT_Status_SIZE)


// WHEAPolicyManagementMethods - WHEAPolicyManagementMethods
#define WHEAPolicyManagementMethodsGuid \
    { 0x794569ee,0x137c,0x4a06, { 0x8a,0xdd,0xd2,0x25,0xb5,0x3d,0xfc,0x4b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WHEAPolicyManagementMethods_GUID, \
            0x794569ee,0x137c,0x4a06,0x8a,0xdd,0xd2,0x25,0xb5,0x3d,0xfc,0x4b);
#endif

//
// Method id definitions for WHEAPolicyManagementMethods
#define WheaGetAllPolicyRtn     1
typedef struct _GET_ALL_POLICY_OUT
{
    // 
    ULONG Status;
    #define GET_ALL_POLICY_OUT_Status_SIZE sizeof(ULONG)
    #define GET_ALL_POLICY_OUT_Status_ID 1

    // 
    ULONG Count;
    #define GET_ALL_POLICY_OUT_Count_SIZE sizeof(ULONG)
    #define GET_ALL_POLICY_OUT_Count_ID 2

    // 
    ULONG Length;
    #define GET_ALL_POLICY_OUT_Length_SIZE sizeof(ULONG)
    #define GET_ALL_POLICY_OUT_Length_ID 3

    // 
    UCHAR Values[1];
    #define GET_ALL_POLICY_OUT_Values_ID 4

} GET_ALL_POLICY_OUT, *PGET_ALL_POLICY_OUT;

#define WheaGetPolicyRtn     2
typedef struct _GET_SINGLE_POLICY_IN
{
    // 
    ULONG Type;
    #define GET_SINGLE_POLICY_IN_Type_SIZE sizeof(ULONG)
    #define GET_SINGLE_POLICY_IN_Type_ID 2

} GET_SINGLE_POLICY_IN, *PGET_SINGLE_POLICY_IN;

#define GET_SINGLE_POLICY_IN_SIZE (FIELD_OFFSET(GET_SINGLE_POLICY_IN, Type) + GET_SINGLE_POLICY_IN_Type_SIZE)

typedef struct _GET_SINGLE_POLICY_OUT
{
    // 
    ULONG Status;
    #define GET_SINGLE_POLICY_OUT_Status_SIZE sizeof(ULONG)
    #define GET_SINGLE_POLICY_OUT_Status_ID 1

    // 
    ULONG Value;
    #define GET_SINGLE_POLICY_OUT_Value_SIZE sizeof(ULONG)
    #define GET_SINGLE_POLICY_OUT_Value_ID 3

} GET_SINGLE_POLICY_OUT, *PGET_SINGLE_POLICY_OUT;

#define GET_SINGLE_POLICY_OUT_SIZE (FIELD_OFFSET(GET_SINGLE_POLICY_OUT, Value) + GET_SINGLE_POLICY_OUT_Value_SIZE)

#define WheaSetPolicyRtn     3
typedef struct _SET_SINGLE_POLICY_IN
{
    // 
    ULONG Type;
    #define SET_SINGLE_POLICY_IN_Type_SIZE sizeof(ULONG)
    #define SET_SINGLE_POLICY_IN_Type_ID 2

    // 
    ULONG Value;
    #define SET_SINGLE_POLICY_IN_Value_SIZE sizeof(ULONG)
    #define SET_SINGLE_POLICY_IN_Value_ID 3

} SET_SINGLE_POLICY_IN, *PSET_SINGLE_POLICY_IN;

#define SET_SINGLE_POLICY_IN_SIZE (FIELD_OFFSET(SET_SINGLE_POLICY_IN, Value) + SET_SINGLE_POLICY_IN_Value_SIZE)

typedef struct _SET_SINGLE_POLICY_OUT
{
    // 
    ULONG Status;
    #define SET_SINGLE_POLICY_OUT_Status_SIZE sizeof(ULONG)
    #define SET_SINGLE_POLICY_OUT_Status_ID 1

} SET_SINGLE_POLICY_OUT, *PSET_SINGLE_POLICY_OUT;

#define SET_SINGLE_POLICY_OUT_SIZE (FIELD_OFFSET(SET_SINGLE_POLICY_OUT, Status) + SET_SINGLE_POLICY_OUT_Status_SIZE)

#define WheaCommitPolicyRtn     4
typedef struct _COMMIT_POLICY_OUT
{
    // 
    ULONG Status;
    #define COMMIT_POLICY_OUT_Status_SIZE sizeof(ULONG)
    #define COMMIT_POLICY_OUT_Status_ID 1

} COMMIT_POLICY_OUT, *PCOMMIT_POLICY_OUT;

#define COMMIT_POLICY_OUT_SIZE (FIELD_OFFSET(COMMIT_POLICY_OUT, Status) + COMMIT_POLICY_OUT_Status_SIZE)


// MSSmBios_RawSMBiosTables - MSSmBios_RawSMBiosTables
#define MSSmBios_RawSMBiosTablesGuid \
    { 0x8f680850,0xa584,0x11d1, { 0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSmBios_RawSMBiosTables_GUID, \
            0x8f680850,0xa584,0x11d1,0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSSmBios_RawSMBiosTables
{
    // 
    BOOLEAN Used20CallingMethod;
    #define MSSmBios_RawSMBiosTables_Used20CallingMethod_SIZE sizeof(BOOLEAN)
    #define MSSmBios_RawSMBiosTables_Used20CallingMethod_ID 1

    // 
    UCHAR SmbiosMajorVersion;
    #define MSSmBios_RawSMBiosTables_SmbiosMajorVersion_SIZE sizeof(UCHAR)
    #define MSSmBios_RawSMBiosTables_SmbiosMajorVersion_ID 2

    // 
    UCHAR SmbiosMinorVersion;
    #define MSSmBios_RawSMBiosTables_SmbiosMinorVersion_SIZE sizeof(UCHAR)
    #define MSSmBios_RawSMBiosTables_SmbiosMinorVersion_ID 3

    // 
    UCHAR DmiRevision;
    #define MSSmBios_RawSMBiosTables_DmiRevision_SIZE sizeof(UCHAR)
    #define MSSmBios_RawSMBiosTables_DmiRevision_ID 4

    // 
    ULONG Size;
    #define MSSmBios_RawSMBiosTables_Size_SIZE sizeof(ULONG)
    #define MSSmBios_RawSMBiosTables_Size_ID 5

    // 
    UCHAR SMBiosData[1];
    #define MSSmBios_RawSMBiosTables_SMBiosData_ID 6

} MSSmBios_RawSMBiosTables, *PMSSmBios_RawSMBiosTables;

// MSSmBios_SMBiosEventlog - MSSmBios_SMBiosEventlog
#define MSSmBios_SMBiosEventlogGuid \
    { 0x8f680851,0xa584,0x11d1, { 0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSmBios_SMBiosEventlog_GUID, \
            0x8f680851,0xa584,0x11d1,0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


// Warning: Header for class MSSmBios_SMBiosEventlog cannot be created
typedef struct _MSSmBios_SMBiosEventlog
{
    char VariableData[1];

} MSSmBios_SMBiosEventlog, *PMSSmBios_SMBiosEventlog;

// MSSmBios_SysidUUID - SYSID_UUID
#define MSSmBios_SysidUUIDGuid \
    { 0x8f680852,0xa584,0x11d1, { 0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSmBios_SysidUUID_GUID, \
            0x8f680852,0xa584,0x11d1,0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _SYSID_UUID
{
    // 
    UCHAR Uuid[16];
    #define SYSID_UUID_Uuid_SIZE sizeof(UCHAR[16])
    #define SYSID_UUID_Uuid_ID 1

} SYSID_UUID, *PSYSID_UUID;

#define SYSID_UUID_SIZE (FIELD_OFFSET(SYSID_UUID, Uuid) + SYSID_UUID_Uuid_SIZE)

// MSSmBios_SysidUUIDList - MSSmBios_SysidUUIDList
#define SYSID_UUID_DATA_GUID \
    { 0x8f680853,0xa584,0x11d1, { 0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSmBios_SysidUUIDList_GUID, \
            0x8f680853,0xa584,0x11d1,0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSSmBios_SysidUUIDList
{
    // 
    ULONG Count;
    #define MSSmBios_SysidUUIDList_Count_SIZE sizeof(ULONG)
    #define MSSmBios_SysidUUIDList_Count_ID 1

    // 
    SYSID_UUID List[1];
    #define MSSmBios_SysidUUIDList_List_ID 2

} MSSmBios_SysidUUIDList, *PMSSmBios_SysidUUIDList;

// MSSmBios_Sysid1394 - SYSID_1394
#define MSSmBios_Sysid1394Guid \
    { 0x8f680854,0xa584,0x11d1, { 0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSmBios_Sysid1394_GUID, \
            0x8f680854,0xa584,0x11d1,0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _SYSID_1394
{
    // 
    UCHAR x1394[8];
    #define SYSID_1394_x1394_SIZE sizeof(UCHAR[8])
    #define SYSID_1394_x1394_ID 1

} SYSID_1394, *PSYSID_1394;

#define SYSID_1394_SIZE (FIELD_OFFSET(SYSID_1394, x1394) + SYSID_1394_x1394_SIZE)

// MSSmBios_Sysid1394List - MSSmBios_Sysid1394List
#define SYSID_1394_DATA_GUID \
    { 0x8f680855,0xa584,0x11d1, { 0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSmBios_Sysid1394List_GUID, \
            0x8f680855,0xa584,0x11d1,0xbf,0x38,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSSmBios_Sysid1394List
{
    // 
    ULONG Count;
    #define MSSmBios_Sysid1394List_Count_SIZE sizeof(ULONG)
    #define MSSmBios_Sysid1394List_Count_ID 1

    // 
    SYSID_1394 List[1];
    #define MSSmBios_Sysid1394List_List_ID 2

} MSSmBios_Sysid1394List, *PMSSmBios_Sysid1394List;

// MSMCAEvent_SwitchToCMCPolling - MSMCAEvent_SwitchToCMCPolling
#define MSMCAEvent_SwitchToCMCPollingGuid \
    { 0x39c14290,0xf036,0x4999, { 0xb8,0xa1,0xb6,0xf8,0x71,0xfb,0x32,0x9e } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_SwitchToCMCPolling_GUID, \
            0x39c14290,0xf036,0x4999,0xb8,0xa1,0xb6,0xf8,0x71,0xfb,0x32,0x9e);
#endif


// MSMCAEvent_SwitchToCPEPolling - MSMCAEvent_SwitchToCPEPolling
#define MSMCAEvent_SwitchToCPEPollingGuid \
    { 0xd5c870ce,0x4ed0,0x4fdc, { 0xbb,0x54,0x8b,0x45,0x2c,0x18,0x79,0x7e } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_SwitchToCPEPolling_GUID, \
            0xd5c870ce,0x4ed0,0x4fdc,0xbb,0x54,0x8b,0x45,0x2c,0x18,0x79,0x7e);
#endif


// MSMCAEvent_Header - MSMCAEvent_Header
#define MSMCAEvent_HeaderGuid \
    { 0x6381c27f,0xc8fa,0x4da7, { 0x89,0x53,0xb8,0x68,0x33,0x73,0x6e,0x15 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_Header_GUID, \
            0x6381c27f,0xc8fa,0x4da7,0x89,0x53,0xb8,0x68,0x33,0x73,0x6e,0x15);
#endif


typedef struct _MSMCAEvent_Header
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_Header_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_Header_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_Header_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_Header_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_Header_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_Header_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_Header_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_Header_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_Header_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_Header_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_Header_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_Header_LogToEventlog_ID 6

} MSMCAEvent_Header, *PMSMCAEvent_Header;

#define MSMCAEvent_Header_SIZE (FIELD_OFFSET(MSMCAEvent_Header, LogToEventlog) + MSMCAEvent_Header_LogToEventlog_SIZE)

// MSMCAEvent_BusError - MSMCAEvent_BusError
#define MSMCAEvent_BusErrorGuid \
    { 0x1ee17050,0x0039,0x40f7, { 0x9e,0xad,0x14,0xad,0x51,0x61,0x2c,0xb2 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_BusError_GUID, \
            0x1ee17050,0x0039,0x40f7,0x9e,0xad,0x14,0xad,0x51,0x61,0x2c,0xb2);
#endif


typedef struct _MSMCAEvent_BusError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_BusError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_BusError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_BusError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_BusError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_BusError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_BusError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_BusError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_BusError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_BusError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_BusError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_BusError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_BusError_LogToEventlog_ID 6

    // 
    ULONG Participation;
    #define MSMCAEvent_BusError_Participation_SIZE sizeof(ULONG)
    #define MSMCAEvent_BusError_Participation_ID 7

    // 
    ULONG MemoryHierarchyLevel;
    #define MSMCAEvent_BusError_MemoryHierarchyLevel_SIZE sizeof(ULONG)
    #define MSMCAEvent_BusError_MemoryHierarchyLevel_ID 8

    // 
    ULONG RequestType;
    #define MSMCAEvent_BusError_RequestType_SIZE sizeof(ULONG)
    #define MSMCAEvent_BusError_RequestType_ID 9

    // 
    ULONG MemOrIo;
    #define MSMCAEvent_BusError_MemOrIo_SIZE sizeof(ULONG)
    #define MSMCAEvent_BusError_MemOrIo_ID 10

    // The address at which the error occurred.
    ULONGLONG Address;
    #define MSMCAEvent_BusError_Address_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_BusError_Address_ID 11

    // 
    ULONG Size;
    #define MSMCAEvent_BusError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_BusError_Size_ID 12

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_BusError_RawRecord_ID 13

} MSMCAEvent_BusError, *PMSMCAEvent_BusError;

// MSMCAEvent_TLBError - MSMCAEvent_TLBError
#define MSMCAEvent_TLBErrorGuid \
    { 0xb161eeab,0xac03,0x4c2b, { 0xae,0x7a,0x5a,0x37,0x68,0xf7,0x0e,0x85 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_TLBError_GUID, \
            0xb161eeab,0xac03,0x4c2b,0xae,0x7a,0x5a,0x37,0x68,0xf7,0x0e,0x85);
#endif


typedef struct _MSMCAEvent_TLBError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_TLBError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_TLBError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_TLBError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_TLBError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_TLBError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_TLBError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_TLBError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_TLBError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_TLBError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_TLBError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_TLBError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_TLBError_LogToEventlog_ID 6

    // 
    ULONG TransactionType;
    #define MSMCAEvent_TLBError_TransactionType_SIZE sizeof(ULONG)
    #define MSMCAEvent_TLBError_TransactionType_ID 7

    // 
    ULONG MemoryHierarchyLevel;
    #define MSMCAEvent_TLBError_MemoryHierarchyLevel_SIZE sizeof(ULONG)
    #define MSMCAEvent_TLBError_MemoryHierarchyLevel_ID 8

    // The address at which the error occurred.
    ULONGLONG Address;
    #define MSMCAEvent_TLBError_Address_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_TLBError_Address_ID 9

    // 
    ULONG Size;
    #define MSMCAEvent_TLBError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_TLBError_Size_ID 10

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_TLBError_RawRecord_ID 11

} MSMCAEvent_TLBError, *PMSMCAEvent_TLBError;

// MSMCAEvent_MemoryHierarchyError - MSMCAEvent_MemoryHierarchyError
#define MSMCAEvent_MemoryHierarchyErrorGuid \
    { 0xcede75a0,0xa77f,0x452b, { 0x8f,0x2f,0x54,0x1f,0x92,0x6d,0xb0,0xf9 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_MemoryHierarchyError_GUID, \
            0xcede75a0,0xa77f,0x452b,0x8f,0x2f,0x54,0x1f,0x92,0x6d,0xb0,0xf9);
#endif


typedef struct _MSMCAEvent_MemoryHierarchyError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_MemoryHierarchyError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryHierarchyError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_MemoryHierarchyError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_MemoryHierarchyError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_MemoryHierarchyError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryHierarchyError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_MemoryHierarchyError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryHierarchyError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_MemoryHierarchyError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryHierarchyError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_MemoryHierarchyError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryHierarchyError_LogToEventlog_ID 6

    // 
    ULONG TransactionType;
    #define MSMCAEvent_MemoryHierarchyError_TransactionType_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryHierarchyError_TransactionType_ID 7

    // 
    ULONG MemoryHierarchyLevel;
    #define MSMCAEvent_MemoryHierarchyError_MemoryHierarchyLevel_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryHierarchyError_MemoryHierarchyLevel_ID 8

    // 
    ULONG RequestType;
    #define MSMCAEvent_MemoryHierarchyError_RequestType_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryHierarchyError_RequestType_ID 9

    // The address at which the error occurred.
    ULONGLONG Address;
    #define MSMCAEvent_MemoryHierarchyError_Address_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryHierarchyError_Address_ID 10

    // 
    ULONG Size;
    #define MSMCAEvent_MemoryHierarchyError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryHierarchyError_Size_ID 11

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_MemoryHierarchyError_RawRecord_ID 12

} MSMCAEvent_MemoryHierarchyError, *PMSMCAEvent_MemoryHierarchyError;

// MSMCAEvent_CPUError - MSMCAEvent_CPUError
#define MSMCAEvent_CPUErrorGuid \
    { 0x5ce27cde,0xd179,0x4c68, { 0x93,0x7f,0xa0,0x7b,0x8c,0xc2,0xea,0x39 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_CPUError_GUID, \
            0x5ce27cde,0xd179,0x4c68,0x93,0x7f,0xa0,0x7b,0x8c,0xc2,0xea,0x39);
#endif


typedef struct _MSMCAEvent_CPUError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_CPUError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_CPUError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_CPUError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_CPUError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_CPUError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_CPUError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_CPUError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_CPUError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_LogToEventlog_ID 6


// Cache
#define MCACpuCacheError 0
// TLB
#define MCACpuTlbError 1
// Bus
#define MCACpuBusError 2
// Register File
#define MCACpuRegFileError 3
// Microarchitecture
#define MCACpuMSError 4

    // 
    ULONG MajorErrorType;
    #define MSMCAEvent_CPUError_MajorErrorType_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_MajorErrorType_ID 7

    // 
    ULONG Level;
    #define MSMCAEvent_CPUError_Level_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_Level_ID 8

    // 
    ULONG CacheOp;
    #define MSMCAEvent_CPUError_CacheOp_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_CacheOp_ID 9

    // 
    ULONG CacheMesi;
    #define MSMCAEvent_CPUError_CacheMesi_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_CacheMesi_ID 10

    // 
    ULONG TLBOp;
    #define MSMCAEvent_CPUError_TLBOp_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_TLBOp_ID 11

    // 
    ULONG BusType;
    #define MSMCAEvent_CPUError_BusType_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_BusType_ID 12

    // 
    ULONG BusSev;
    #define MSMCAEvent_CPUError_BusSev_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_BusSev_ID 13

    // 
    ULONG RegFileId;
    #define MSMCAEvent_CPUError_RegFileId_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_RegFileId_ID 14

    // 
    ULONG RegFileOp;
    #define MSMCAEvent_CPUError_RegFileOp_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_RegFileOp_ID 15

    // 
    ULONG MSSid;
    #define MSMCAEvent_CPUError_MSSid_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_MSSid_ID 16

    // 
    ULONG MSOp;
    #define MSMCAEvent_CPUError_MSOp_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_MSOp_ID 17

    // 
    ULONG MSArrayId;
    #define MSMCAEvent_CPUError_MSArrayId_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_MSArrayId_ID 18

    // 
    ULONG MSIndex;
    #define MSMCAEvent_CPUError_MSIndex_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_MSIndex_ID 19

    // 
    ULONG Size;
    #define MSMCAEvent_CPUError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_CPUError_Size_ID 20

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_CPUError_RawRecord_ID 21

} MSMCAEvent_CPUError, *PMSMCAEvent_CPUError;

// MSMCAEvent_MemoryError - MSMCAEvent_MemoryError
#define MSMCAEvent_MemoryErrorGuid \
    { 0x433eea38,0xc1a7,0x48f1, { 0x88,0x4f,0xb6,0x87,0x5f,0x17,0x6c,0xc7 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_MemoryError_GUID, \
            0x433eea38,0xc1a7,0x48f1,0x88,0x4f,0xb6,0x87,0x5f,0x17,0x6c,0xc7);
#endif


typedef struct _MSMCAEvent_MemoryError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_MemoryError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_MemoryError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_MemoryError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_MemoryError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_MemoryError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_MemoryError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_MemoryError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryError_LogToEventlog_ID 6

    // 
    ULONGLONG VALIDATION_BITS;
    #define MSMCAEvent_MemoryError_VALIDATION_BITS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryError_VALIDATION_BITS_ID 7

    // 
    ULONGLONG MEM_ERROR_STATUS;
    #define MSMCAEvent_MemoryError_MEM_ERROR_STATUS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryError_MEM_ERROR_STATUS_ID 8

    // 
    ULONGLONG MEM_PHYSICAL_ADDR;
    #define MSMCAEvent_MemoryError_MEM_PHYSICAL_ADDR_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryError_MEM_PHYSICAL_ADDR_ID 9

    // 
    ULONGLONG MEM_PHYSICAL_MASK;
    #define MSMCAEvent_MemoryError_MEM_PHYSICAL_MASK_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryError_MEM_PHYSICAL_MASK_ID 10

    // 
    ULONGLONG RESPONDER_ID;
    #define MSMCAEvent_MemoryError_RESPONDER_ID_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryError_RESPONDER_ID_ID 11

    // 
    ULONGLONG TARGET_ID;
    #define MSMCAEvent_MemoryError_TARGET_ID_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryError_TARGET_ID_ID 12

    // 
    ULONGLONG REQUESTOR_ID;
    #define MSMCAEvent_MemoryError_REQUESTOR_ID_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryError_REQUESTOR_ID_ID 13

    // 
    ULONGLONG BUS_SPECIFIC_DATA;
    #define MSMCAEvent_MemoryError_BUS_SPECIFIC_DATA_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryError_BUS_SPECIFIC_DATA_ID 14

    // 
    USHORT MEM_NODE;
    #define MSMCAEvent_MemoryError_MEM_NODE_SIZE sizeof(USHORT)
    #define MSMCAEvent_MemoryError_MEM_NODE_ID 15

    // 
    USHORT MEM_CARD;
    #define MSMCAEvent_MemoryError_MEM_CARD_SIZE sizeof(USHORT)
    #define MSMCAEvent_MemoryError_MEM_CARD_ID 16

    // 
    USHORT MEM_BANK;
    #define MSMCAEvent_MemoryError_MEM_BANK_SIZE sizeof(USHORT)
    #define MSMCAEvent_MemoryError_MEM_BANK_ID 17

    // 
    USHORT xMEM_DEVICE;
    #define MSMCAEvent_MemoryError_xMEM_DEVICE_SIZE sizeof(USHORT)
    #define MSMCAEvent_MemoryError_xMEM_DEVICE_ID 18

    // 
    USHORT MEM_MODULE;
    #define MSMCAEvent_MemoryError_MEM_MODULE_SIZE sizeof(USHORT)
    #define MSMCAEvent_MemoryError_MEM_MODULE_ID 19

    // 
    USHORT MEM_ROW;
    #define MSMCAEvent_MemoryError_MEM_ROW_SIZE sizeof(USHORT)
    #define MSMCAEvent_MemoryError_MEM_ROW_ID 20

    // 
    USHORT MEM_COLUMN;
    #define MSMCAEvent_MemoryError_MEM_COLUMN_SIZE sizeof(USHORT)
    #define MSMCAEvent_MemoryError_MEM_COLUMN_ID 21

    // 
    USHORT MEM_BIT_POSITION;
    #define MSMCAEvent_MemoryError_MEM_BIT_POSITION_SIZE sizeof(USHORT)
    #define MSMCAEvent_MemoryError_MEM_BIT_POSITION_ID 22

    // 
    ULONG Size;
    #define MSMCAEvent_MemoryError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_MemoryError_Size_ID 23

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_MemoryError_RawRecord_ID 24

} MSMCAEvent_MemoryError, *PMSMCAEvent_MemoryError;

// MSMCAEvent_PCIBusError - MSMCAEvent_PCIBusError
#define MSMCAEvent_PCIBusErrorGuid \
    { 0xa14a5594,0x25de,0x410e, { 0x9b,0x92,0x80,0xf0,0x80,0x1a,0xec,0x07 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_PCIBusError_GUID, \
            0xa14a5594,0x25de,0x410e,0x9b,0x92,0x80,0xf0,0x80,0x1a,0xec,0x07);
#endif


typedef struct _MSMCAEvent_PCIBusError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_PCIBusError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIBusError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_PCIBusError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIBusError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_PCIBusError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_PCIBusError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_PCIBusError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_PCIBusError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_PCIBusError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_PCIBusError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_PCIBusError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_PCIBusError_LogToEventlog_ID 6

    // 
    ULONGLONG VALIDATION_BITS;
    #define MSMCAEvent_PCIBusError_VALIDATION_BITS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIBusError_VALIDATION_BITS_ID 7

    // 
    ULONGLONG PCI_BUS_ERROR_STATUS;
    #define MSMCAEvent_PCIBusError_PCI_BUS_ERROR_STATUS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIBusError_PCI_BUS_ERROR_STATUS_ID 8

    // 
    ULONGLONG PCI_BUS_ADDRESS;
    #define MSMCAEvent_PCIBusError_PCI_BUS_ADDRESS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIBusError_PCI_BUS_ADDRESS_ID 9

    // 
    ULONGLONG PCI_BUS_DATA;
    #define MSMCAEvent_PCIBusError_PCI_BUS_DATA_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIBusError_PCI_BUS_DATA_ID 10

    // 
    ULONGLONG PCI_BUS_CMD;
    #define MSMCAEvent_PCIBusError_PCI_BUS_CMD_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIBusError_PCI_BUS_CMD_ID 11

    // 
    ULONGLONG PCI_BUS_REQUESTOR_ID;
    #define MSMCAEvent_PCIBusError_PCI_BUS_REQUESTOR_ID_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIBusError_PCI_BUS_REQUESTOR_ID_ID 12

    // 
    ULONGLONG PCI_BUS_RESPONDER_ID;
    #define MSMCAEvent_PCIBusError_PCI_BUS_RESPONDER_ID_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIBusError_PCI_BUS_RESPONDER_ID_ID 13

    // 
    ULONGLONG PCI_BUS_TARGET_ID;
    #define MSMCAEvent_PCIBusError_PCI_BUS_TARGET_ID_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIBusError_PCI_BUS_TARGET_ID_ID 14

    // 
    USHORT PCI_BUS_ERROR_TYPE;
    #define MSMCAEvent_PCIBusError_PCI_BUS_ERROR_TYPE_SIZE sizeof(USHORT)
    #define MSMCAEvent_PCIBusError_PCI_BUS_ERROR_TYPE_ID 15

    // 
    UCHAR PCI_BUS_ID_BusNumber;
    #define MSMCAEvent_PCIBusError_PCI_BUS_ID_BusNumber_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIBusError_PCI_BUS_ID_BusNumber_ID 16

    // 
    UCHAR PCI_BUS_ID_SegmentNumber;
    #define MSMCAEvent_PCIBusError_PCI_BUS_ID_SegmentNumber_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIBusError_PCI_BUS_ID_SegmentNumber_ID 17

    // 
    ULONG Size;
    #define MSMCAEvent_PCIBusError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_PCIBusError_Size_ID 18

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_PCIBusError_RawRecord_ID 19

} MSMCAEvent_PCIBusError, *PMSMCAEvent_PCIBusError;

// MSMCAEvent_PCIComponentError - MSMCAEvent_PCIComponentError
#define MSMCAEvent_PCIComponentErrorGuid \
    { 0x805caf4e,0x336c,0x4eb2, { 0x8c,0x0c,0x02,0xf3,0x51,0xcb,0xf1,0x3c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_PCIComponentError_GUID, \
            0x805caf4e,0x336c,0x4eb2,0x8c,0x0c,0x02,0xf3,0x51,0xcb,0xf1,0x3c);
#endif


typedef struct _MSMCAEvent_PCIComponentError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_PCIComponentError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIComponentError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_PCIComponentError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIComponentError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_PCIComponentError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_PCIComponentError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_PCIComponentError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_PCIComponentError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_PCIComponentError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_PCIComponentError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_PCIComponentError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_PCIComponentError_LogToEventlog_ID 6

    // 
    ULONGLONG VALIDATION_BITS;
    #define MSMCAEvent_PCIComponentError_VALIDATION_BITS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIComponentError_VALIDATION_BITS_ID 7

    // 
    ULONGLONG PCI_COMP_ERROR_STATUS;
    #define MSMCAEvent_PCIComponentError_PCI_COMP_ERROR_STATUS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PCIComponentError_PCI_COMP_ERROR_STATUS_ID 8

    // 
    USHORT PCI_COMP_INFO_VendorId;
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_VendorId_SIZE sizeof(USHORT)
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_VendorId_ID 9

    // 
    USHORT PCI_COMP_INFO_DeviceId;
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_DeviceId_SIZE sizeof(USHORT)
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_DeviceId_ID 10

    // 
    UCHAR PCI_COMP_INFO_ClassCodeInterface;
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_ClassCodeInterface_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_ClassCodeInterface_ID 11

    // 
    UCHAR PCI_COMP_INFO_ClassCodeSubClass;
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_ClassCodeSubClass_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_ClassCodeSubClass_ID 12

    // 
    UCHAR PCI_COMP_INFO_ClassCodeBaseClass;
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_ClassCodeBaseClass_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_ClassCodeBaseClass_ID 13

    // 
    UCHAR PCI_COMP_INFO_FunctionNumber;
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_FunctionNumber_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_FunctionNumber_ID 14

    // 
    UCHAR PCI_COMP_INFO_DeviceNumber;
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_DeviceNumber_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_DeviceNumber_ID 15

    // 
    UCHAR PCI_COMP_INFO_BusNumber;
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_BusNumber_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_BusNumber_ID 16

    // 
    UCHAR PCI_COMP_INFO_SegmentNumber;
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_SegmentNumber_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PCIComponentError_PCI_COMP_INFO_SegmentNumber_ID 17

    // 
    ULONG Size;
    #define MSMCAEvent_PCIComponentError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_PCIComponentError_Size_ID 18

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_PCIComponentError_RawRecord_ID 19

} MSMCAEvent_PCIComponentError, *PMSMCAEvent_PCIComponentError;

// MSMCAEvent_SystemEventError - MSMCAEvent_SystemEventError
#define MSMCAEvent_SystemEventErrorGuid \
    { 0xbdba4b12,0x8d00,0x4570, { 0xb9,0xb2,0x3f,0xde,0xcf,0x1d,0x56,0x61 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_SystemEventError_GUID, \
            0xbdba4b12,0x8d00,0x4570,0xb9,0xb2,0x3f,0xde,0xcf,0x1d,0x56,0x61);
#endif


typedef struct _MSMCAEvent_SystemEventError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_SystemEventError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_SystemEventError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_SystemEventError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SystemEventError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_SystemEventError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_SystemEventError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_SystemEventError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_SystemEventError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_SystemEventError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_SystemEventError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_SystemEventError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_SystemEventError_LogToEventlog_ID 6

    // 
    ULONGLONG VALIDATION_BITS;
    #define MSMCAEvent_SystemEventError_VALIDATION_BITS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_SystemEventError_VALIDATION_BITS_ID 7

    // 
    ULONGLONG SEL_TIME_STAMP;
    #define MSMCAEvent_SystemEventError_SEL_TIME_STAMP_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_SystemEventError_SEL_TIME_STAMP_ID 8

    // 
    USHORT SEL_RECORD_ID;
    #define MSMCAEvent_SystemEventError_SEL_RECORD_ID_SIZE sizeof(USHORT)
    #define MSMCAEvent_SystemEventError_SEL_RECORD_ID_ID 9

    // 
    USHORT SEL_GENERATOR_ID;
    #define MSMCAEvent_SystemEventError_SEL_GENERATOR_ID_SIZE sizeof(USHORT)
    #define MSMCAEvent_SystemEventError_SEL_GENERATOR_ID_ID 10

    // 
    UCHAR SEL_RECORD_TYPE;
    #define MSMCAEvent_SystemEventError_SEL_RECORD_TYPE_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SystemEventError_SEL_RECORD_TYPE_ID 11

    // 
    UCHAR SEL_EVM_REV;
    #define MSMCAEvent_SystemEventError_SEL_EVM_REV_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SystemEventError_SEL_EVM_REV_ID 12

    // 
    UCHAR SEL_SENSOR_TYPE;
    #define MSMCAEvent_SystemEventError_SEL_SENSOR_TYPE_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SystemEventError_SEL_SENSOR_TYPE_ID 13

    // 
    UCHAR SEL_SENSOR_NUM;
    #define MSMCAEvent_SystemEventError_SEL_SENSOR_NUM_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SystemEventError_SEL_SENSOR_NUM_ID 14

    // 
    UCHAR SEL_EVENT_DIR_TYPE;
    #define MSMCAEvent_SystemEventError_SEL_EVENT_DIR_TYPE_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SystemEventError_SEL_EVENT_DIR_TYPE_ID 15

    // 
    UCHAR SEL_DATA1;
    #define MSMCAEvent_SystemEventError_SEL_DATA1_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SystemEventError_SEL_DATA1_ID 16

    // 
    UCHAR SEL_DATA2;
    #define MSMCAEvent_SystemEventError_SEL_DATA2_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SystemEventError_SEL_DATA2_ID 17

    // 
    UCHAR SEL_DATA3;
    #define MSMCAEvent_SystemEventError_SEL_DATA3_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SystemEventError_SEL_DATA3_ID 18

    // 
    ULONG Size;
    #define MSMCAEvent_SystemEventError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_SystemEventError_Size_ID 19

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_SystemEventError_RawRecord_ID 20

} MSMCAEvent_SystemEventError, *PMSMCAEvent_SystemEventError;

// MSMCAEvent_SMBIOSError - MSMCAEvent_SMBIOSError
#define MSMCAEvent_SMBIOSErrorGuid \
    { 0x4184df1b,0xedfe,0x406b, { 0xb1,0x72,0x54,0xc9,0x1f,0xbd,0x9b,0xaf } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_SMBIOSError_GUID, \
            0x4184df1b,0xedfe,0x406b,0xb1,0x72,0x54,0xc9,0x1f,0xbd,0x9b,0xaf);
#endif


typedef struct _MSMCAEvent_SMBIOSError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_SMBIOSError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_SMBIOSError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_SMBIOSError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SMBIOSError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_SMBIOSError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_SMBIOSError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_SMBIOSError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_SMBIOSError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_SMBIOSError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_SMBIOSError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_SMBIOSError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_SMBIOSError_LogToEventlog_ID 6

    // 
    ULONGLONG VALIDATION_BITS;
    #define MSMCAEvent_SMBIOSError_VALIDATION_BITS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_SMBIOSError_VALIDATION_BITS_ID 7

    // 
    UCHAR SMBIOS_EVENT_TYPE;
    #define MSMCAEvent_SMBIOSError_SMBIOS_EVENT_TYPE_SIZE sizeof(UCHAR)
    #define MSMCAEvent_SMBIOSError_SMBIOS_EVENT_TYPE_ID 8

    // 
    ULONG Size;
    #define MSMCAEvent_SMBIOSError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_SMBIOSError_Size_ID 9

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_SMBIOSError_RawRecord_ID 10

} MSMCAEvent_SMBIOSError, *PMSMCAEvent_SMBIOSError;

// MSMCAEvent_PlatformSpecificError - MSMCAEvent_PlatformSpecificError
#define MSMCAEvent_PlatformSpecificErrorGuid \
    { 0x2d2434aa,0xef83,0x4200, { 0xba,0x24,0xde,0x36,0x6c,0x41,0x5f,0x7b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_PlatformSpecificError_GUID, \
            0x2d2434aa,0xef83,0x4200,0xba,0x24,0xde,0x36,0x6c,0x41,0x5f,0x7b);
#endif


typedef struct _MSMCAEvent_PlatformSpecificError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_PlatformSpecificError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PlatformSpecificError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_PlatformSpecificError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_PlatformSpecificError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_PlatformSpecificError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_PlatformSpecificError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_PlatformSpecificError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_PlatformSpecificError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_PlatformSpecificError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_PlatformSpecificError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_PlatformSpecificError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_PlatformSpecificError_LogToEventlog_ID 6

    // 
    ULONGLONG VALIDATION_BITS;
    #define MSMCAEvent_PlatformSpecificError_VALIDATION_BITS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PlatformSpecificError_VALIDATION_BITS_ID 7

    // 
    ULONGLONG PLATFORM_ERROR_STATUS;
    #define MSMCAEvent_PlatformSpecificError_PLATFORM_ERROR_STATUS_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PlatformSpecificError_PLATFORM_ERROR_STATUS_ID 8

    // 
    ULONGLONG PLATFORM_REQUESTOR_ID;
    #define MSMCAEvent_PlatformSpecificError_PLATFORM_REQUESTOR_ID_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PlatformSpecificError_PLATFORM_REQUESTOR_ID_ID 9

    // 
    ULONGLONG PLATFORM_RESPONDER_ID;
    #define MSMCAEvent_PlatformSpecificError_PLATFORM_RESPONDER_ID_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PlatformSpecificError_PLATFORM_RESPONDER_ID_ID 10

    // 
    ULONGLONG PLATFORM_TARGET_ID;
    #define MSMCAEvent_PlatformSpecificError_PLATFORM_TARGET_ID_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PlatformSpecificError_PLATFORM_TARGET_ID_ID 11

    // 
    ULONGLONG PLATFORM_BUS_SPECIFIC_DATA;
    #define MSMCAEvent_PlatformSpecificError_PLATFORM_BUS_SPECIFIC_DATA_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_PlatformSpecificError_PLATFORM_BUS_SPECIFIC_DATA_ID 12

    // 
    UCHAR OEM_COMPONENT_ID[16];
    #define MSMCAEvent_PlatformSpecificError_OEM_COMPONENT_ID_SIZE sizeof(UCHAR[16])
    #define MSMCAEvent_PlatformSpecificError_OEM_COMPONENT_ID_ID 13

    // 
    ULONG Size;
    #define MSMCAEvent_PlatformSpecificError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_PlatformSpecificError_Size_ID 14

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_PlatformSpecificError_RawRecord_ID 15

} MSMCAEvent_PlatformSpecificError, *PMSMCAEvent_PlatformSpecificError;

// MSMCAEvent_InvalidError - MSMCAEvent_InvalidError
#define MSMCAEvent_InvalidErrorGuid \
    { 0x477b769b,0x785c,0x48dd, { 0xa0,0x2e,0x57,0xe0,0x51,0xbe,0x7b,0x85 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_InvalidError_GUID, \
            0x477b769b,0x785c,0x48dd,0xa0,0x2e,0x57,0xe0,0x51,0xbe,0x7b,0x85);
#endif


typedef struct _MSMCAEvent_InvalidError
{
    // 
    ULONGLONG RecordId;
    #define MSMCAEvent_InvalidError_RecordId_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_InvalidError_RecordId_ID 1

    // 
    UCHAR ErrorSeverity;
    #define MSMCAEvent_InvalidError_ErrorSeverity_SIZE sizeof(UCHAR)
    #define MSMCAEvent_InvalidError_ErrorSeverity_ID 2

    // 
    ULONG Type;
    #define MSMCAEvent_InvalidError_Type_SIZE sizeof(ULONG)
    #define MSMCAEvent_InvalidError_Type_ID 3

    // 
    ULONG Cpu;
    #define MSMCAEvent_InvalidError_Cpu_SIZE sizeof(ULONG)
    #define MSMCAEvent_InvalidError_Cpu_ID 4

    // 
    ULONG AdditionalErrors;
    #define MSMCAEvent_InvalidError_AdditionalErrors_SIZE sizeof(ULONG)
    #define MSMCAEvent_InvalidError_AdditionalErrors_ID 5

    // 
    ULONG LogToEventlog;
    #define MSMCAEvent_InvalidError_LogToEventlog_SIZE sizeof(ULONG)
    #define MSMCAEvent_InvalidError_LogToEventlog_ID 6

    // 
    ULONG Size;
    #define MSMCAEvent_InvalidError_Size_SIZE sizeof(ULONG)
    #define MSMCAEvent_InvalidError_Size_ID 7

    // 
    UCHAR RawRecord[1];
    #define MSMCAEvent_InvalidError_RawRecord_ID 8

} MSMCAEvent_InvalidError, *PMSMCAEvent_InvalidError;

// MSMCAEvent_MemoryPageRemoved - MSMCAEvent_MemoryPageRemoved
#define MSMCAEvent_MemoryPageRemovedGuid \
    { 0x84e9ddb6,0xe233,0x4dfc, { 0x98,0x8c,0x74,0x12,0xc8,0x75,0x4f,0xec } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAEvent_MemoryPageRemoved_GUID, \
            0x84e9ddb6,0xe233,0x4dfc,0x98,0x8c,0x74,0x12,0xc8,0x75,0x4f,0xec);
#endif


typedef struct _MSMCAEvent_MemoryPageRemoved
{
    // 
    ULONGLONG PhysicalAddress;
    #define MSMCAEvent_MemoryPageRemoved_PhysicalAddress_SIZE sizeof(ULONGLONG)
    #define MSMCAEvent_MemoryPageRemoved_PhysicalAddress_ID 1

} MSMCAEvent_MemoryPageRemoved, *PMSMCAEvent_MemoryPageRemoved;

#define MSMCAEvent_MemoryPageRemoved_SIZE (FIELD_OFFSET(MSMCAEvent_MemoryPageRemoved, PhysicalAddress) + MSMCAEvent_MemoryPageRemoved_PhysicalAddress_SIZE)

// MSMCAInfo_Entry - MSMCAInfo_Entry
#define MSMCAInfo_EntryGuid \
    { 0x9e77a308,0x6b82,0x4fc1, { 0xab,0x41,0x0a,0x55,0x86,0x7c,0x35,0xc2 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAInfo_Entry_GUID, \
            0x9e77a308,0x6b82,0x4fc1,0xab,0x41,0x0a,0x55,0x86,0x7c,0x35,0xc2);
#endif


typedef struct _MSMCAInfo_Entry
{
    // 
    ULONG Length;
    #define MSMCAInfo_Entry_Length_SIZE sizeof(ULONG)
    #define MSMCAInfo_Entry_Length_ID 1

    // 
    UCHAR Data[1];
    #define MSMCAInfo_Entry_Data_ID 2

} MSMCAInfo_Entry, *PMSMCAInfo_Entry;

// MSMCAInfo_RawMCAData - MSMCAInfo_RawMCAData
#define MSMCAInfo_RawMCADataGuid \
    { 0x23602a8a,0xdadd,0x462f, { 0x9a,0xe5,0x30,0xfa,0x2c,0x37,0xdd,0x5b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAInfo_RawMCAData_GUID, \
            0x23602a8a,0xdadd,0x462f,0x9a,0xe5,0x30,0xfa,0x2c,0x37,0xdd,0x5b);
#endif


typedef struct _MSMCAInfo_RawMCAData
{
    // 
    ULONG Count;
    #define MSMCAInfo_RawMCAData_Count_SIZE sizeof(ULONG)
    #define MSMCAInfo_RawMCAData_Count_ID 1

    // 
    MSMCAInfo_Entry Records[1];
    #define MSMCAInfo_RawMCAData_Records_ID 2

} MSMCAInfo_RawMCAData, *PMSMCAInfo_RawMCAData;

// MSMCAInfo_RawCMCEvent - MSMCAInfo_RawCMCEvent
#define MSMCAInfo_RawCMCEventGuid \
    { 0x2f1a8a9d,0x7988,0x457f, { 0xa1,0x7a,0x89,0x79,0xe8,0x20,0x43,0xc5 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAInfo_RawCMCEvent_GUID, \
            0x2f1a8a9d,0x7988,0x457f,0xa1,0x7a,0x89,0x79,0xe8,0x20,0x43,0xc5);
#endif


typedef struct _MSMCAInfo_RawCMCEvent
{
    // 
    ULONG Count;
    #define MSMCAInfo_RawCMCEvent_Count_SIZE sizeof(ULONG)
    #define MSMCAInfo_RawCMCEvent_Count_ID 1

    // 
    MSMCAInfo_Entry Records[1];
    #define MSMCAInfo_RawCMCEvent_Records_ID 2

} MSMCAInfo_RawCMCEvent, *PMSMCAInfo_RawCMCEvent;

// MSMCAInfo_RawMCAEvent - MSMCAInfo_RawMCAEvent
#define MSMCAInfo_RawMCAEventGuid \
    { 0x2f1a8a9f,0x7988,0x457f, { 0xa1,0x7a,0x89,0x79,0xe8,0x20,0x43,0xc5 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAInfo_RawMCAEvent_GUID, \
            0x2f1a8a9f,0x7988,0x457f,0xa1,0x7a,0x89,0x79,0xe8,0x20,0x43,0xc5);
#endif


typedef struct _MSMCAInfo_RawMCAEvent
{
    // 
    ULONG Count;
    #define MSMCAInfo_RawMCAEvent_Count_SIZE sizeof(ULONG)
    #define MSMCAInfo_RawMCAEvent_Count_ID 1

    // 
    MSMCAInfo_Entry Records[1];
    #define MSMCAInfo_RawMCAEvent_Records_ID 2

} MSMCAInfo_RawMCAEvent, *PMSMCAInfo_RawMCAEvent;

// MSMCAInfo_RawCorrectedPlatformEvent - MSMCAInfo_RawCorrectedPlatformEvent
#define MSMCAInfo_RawCorrectedPlatformEventGuid \
    { 0x6b629d5e,0xe63c,0x48a3, { 0x9e,0xbb,0x97,0x42,0x27,0x07,0x52,0x65 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMCAInfo_RawCorrectedPlatformEvent_GUID, \
            0x6b629d5e,0xe63c,0x48a3,0x9e,0xbb,0x97,0x42,0x27,0x07,0x52,0x65);
#endif


typedef struct _MSMCAInfo_RawCorrectedPlatformEvent
{
    // 
    ULONG Count;
    #define MSMCAInfo_RawCorrectedPlatformEvent_Count_SIZE sizeof(ULONG)
    #define MSMCAInfo_RawCorrectedPlatformEvent_Count_ID 1

    // 
    MSMCAInfo_Entry Records[1];
    #define MSMCAInfo_RawCorrectedPlatformEvent_Records_ID 2

} MSMCAInfo_RawCorrectedPlatformEvent, *PMSMCAInfo_RawCorrectedPlatformEvent;

// MSPower_DeviceEnable - MSPower_DeviceEnable
#define MSPower_DeviceEnableGuid \
    { 0x827c0a6f,0xfeb0,0x11d0, { 0xbd,0x26,0x00,0xaa,0x00,0xb7,0xb3,0x2a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSPower_DeviceEnable_GUID, \
            0x827c0a6f,0xfeb0,0x11d0,0xbd,0x26,0x00,0xaa,0x00,0xb7,0xb3,0x2a);
#endif


typedef struct _MSPower_DeviceEnable
{
    // 
    BOOLEAN Enable;
    #define MSPower_DeviceEnable_Enable_SIZE sizeof(BOOLEAN)
    #define MSPower_DeviceEnable_Enable_ID 1

} MSPower_DeviceEnable, *PMSPower_DeviceEnable;

#define MSPower_DeviceEnable_SIZE (FIELD_OFFSET(MSPower_DeviceEnable, Enable) + MSPower_DeviceEnable_Enable_SIZE)

// MSPower_DeviceWakeEnable - MSPower_DeviceWakeEnable
#define MSPower_DeviceWakeEnableGuid \
    { 0xa9546a82,0xfeb0,0x11d0, { 0xbd,0x26,0x00,0xaa,0x00,0xb7,0xb3,0x2a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSPower_DeviceWakeEnable_GUID, \
            0xa9546a82,0xfeb0,0x11d0,0xbd,0x26,0x00,0xaa,0x00,0xb7,0xb3,0x2a);
#endif


typedef struct _MSPower_DeviceWakeEnable
{
    // 
    BOOLEAN Enable;
    #define MSPower_DeviceWakeEnable_Enable_SIZE sizeof(BOOLEAN)
    #define MSPower_DeviceWakeEnable_Enable_ID 1

} MSPower_DeviceWakeEnable, *PMSPower_DeviceWakeEnable;

#define MSPower_DeviceWakeEnable_SIZE (FIELD_OFFSET(MSPower_DeviceWakeEnable, Enable) + MSPower_DeviceWakeEnable_Enable_SIZE)

// MSNdis_NetworkAddress - MSNdis_NetworkAddress
#define MSNdis_NetworkAddressGuid \
    { 0xb5bd98b7,0x0201,0x11d1, { 0xa5,0x0e,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NetworkAddress_GUID, \
            0xb5bd98b7,0x0201,0x11d1,0xa5,0x0e,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSNdis_NetworkAddress
{
    // 
    UCHAR Address[6];
    #define MSNdis_NetworkAddress_Address_SIZE sizeof(UCHAR[6])
    #define MSNdis_NetworkAddress_Address_ID 1

} MSNdis_NetworkAddress, *PMSNdis_NetworkAddress;

#define MSNdis_NetworkAddress_SIZE (FIELD_OFFSET(MSNdis_NetworkAddress, Address) + MSNdis_NetworkAddress_Address_SIZE)

// MSNdis_NetworkShortAddress - MSNdis_NetworkShortAddress
#define MSNdis_NetworkShortAddressGuid \
    { 0xb5bd98b8,0x0201,0x11d1, { 0xa5,0x0e,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NetworkShortAddress_GUID, \
            0xb5bd98b8,0x0201,0x11d1,0xa5,0x0e,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSNdis_NetworkShortAddress
{
    // 
    UCHAR Address[2];
    #define MSNdis_NetworkShortAddress_Address_SIZE sizeof(UCHAR[2])
    #define MSNdis_NetworkShortAddress_Address_ID 1

} MSNdis_NetworkShortAddress, *PMSNdis_NetworkShortAddress;

#define MSNdis_NetworkShortAddress_SIZE (FIELD_OFFSET(MSNdis_NetworkShortAddress, Address) + MSNdis_NetworkShortAddress_Address_SIZE)

// MSNdis_NetworkLinkSpeed - MSNdis_NetworkLinkSpeed
#define MSNdis_NetworkLinkSpeedGuid \
    { 0x60fc6b57,0x0f66,0x11d1, { 0x96,0xa7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NetworkLinkSpeed_GUID, \
            0x60fc6b57,0x0f66,0x11d1,0x96,0xa7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_NetworkLinkSpeed
{
    // 
    ULONG Outbound;
    #define MSNdis_NetworkLinkSpeed_Outbound_SIZE sizeof(ULONG)
    #define MSNdis_NetworkLinkSpeed_Outbound_ID 1

    // 
    ULONG Inbound;
    #define MSNdis_NetworkLinkSpeed_Inbound_SIZE sizeof(ULONG)
    #define MSNdis_NetworkLinkSpeed_Inbound_ID 2

} MSNdis_NetworkLinkSpeed, *PMSNdis_NetworkLinkSpeed;

#define MSNdis_NetworkLinkSpeed_SIZE (FIELD_OFFSET(MSNdis_NetworkLinkSpeed, Inbound) + MSNdis_NetworkLinkSpeed_Inbound_SIZE)

// MSNdis_EnumerateAdapter - MSNdis_EnumerateAdapter
#define MSNdis_EnumerateAdapterGuid \
    { 0x981f2d7f,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EnumerateAdapter_GUID, \
            0x981f2d7f,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_EnumerateAdapter
{
    // 
    CHAR VariableData[1];
    #define MSNdis_EnumerateAdapter_DeviceName_ID 1

} MSNdis_EnumerateAdapter, *PMSNdis_EnumerateAdapter;

// MSNdis_NotifyAdapterRemoval - MSNdis_NotifyAdapterRemoval
#define MSNdis_NotifyAdapterRemovalGuid \
    { 0x981f2d80,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NotifyAdapterRemoval_GUID, \
            0x981f2d80,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_NotifyAdapterRemoval
{
    // 
    CHAR VariableData[1];
    #define MSNdis_NotifyAdapterRemoval_DeviceName_ID 1

} MSNdis_NotifyAdapterRemoval, *PMSNdis_NotifyAdapterRemoval;

// MSNdis_NotifyAdapterArrival - MSNdis_NotifyAdapterArrival
#define MSNdis_NotifyAdapterArrivalGuid \
    { 0x981f2d81,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NotifyAdapterArrival_GUID, \
            0x981f2d81,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_NotifyAdapterArrival
{
    // 
    CHAR VariableData[1];
    #define MSNdis_NotifyAdapterArrival_DeviceName_ID 1

} MSNdis_NotifyAdapterArrival, *PMSNdis_NotifyAdapterArrival;

// MSNdis_NdisEnumerateVc - MSNdis_NdisEnumerateVc
#define MSNdis_NdisEnumerateVcGuid \
    { 0x981f2d82,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NdisEnumerateVc_GUID, \
            0x981f2d82,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


// MSNdis_NotifyVcRemoval - MSNdis_NotifyVcRemoval
#define MSNdis_NotifyVcRemovalGuid \
    { 0x981f2d79,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NotifyVcRemoval_GUID, \
            0x981f2d79,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


// MSNdis_NotifyVcArrival - MSNdis_NotifyVcArrival
#define MSNdis_NotifyVcArrivalGuid \
    { 0x182f9e0c,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NotifyVcArrival_GUID, \
            0x182f9e0c,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


// MSNdis_NotifyFilterRemoval - MSNdis_NotifyFilterRemoval
#define MSNdis_NotifyFilterRemovalGuid \
    { 0x1f177cd9,0x5955,0x4721, { 0x9f,0x6a,0x78,0xeb,0xdf,0xae,0xf8,0x89 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NotifyFilterRemoval_GUID, \
            0x1f177cd9,0x5955,0x4721,0x9f,0x6a,0x78,0xeb,0xdf,0xae,0xf8,0x89);
#endif


// MSNdis_NotifyFilterArrival - MSNdis_NotifyFilterArrival
#define MSNdis_NotifyFilterArrivalGuid \
    { 0x0b6d3c89,0x5917,0x43ca, { 0xb5,0x78,0xd0,0x1a,0x79,0x67,0xc4,0x1c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NotifyFilterArrival_GUID, \
            0x0b6d3c89,0x5917,0x43ca,0xb5,0x78,0xd0,0x1a,0x79,0x67,0xc4,0x1c);
#endif


// MSNdis_DeviceWakeOnMagicPacketOnly - MSNdis_DeviceWakeOnMagicPacketOnly
#define MSNdis_DeviceWakeOnMagicPacketOnlyGuid \
    { 0xa14f1c97,0x8839,0x4f8a, { 0x99,0x96,0xa2,0x89,0x96,0xeb,0xbf,0x1d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_DeviceWakeOnMagicPacketOnly_GUID, \
            0xa14f1c97,0x8839,0x4f8a,0x99,0x96,0xa2,0x89,0x96,0xeb,0xbf,0x1d);
#endif


typedef struct _MSNdis_DeviceWakeOnMagicPacketOnly
{
    // 
    BOOLEAN EnableWakeOnMagicPacketOnly;
    #define MSNdis_DeviceWakeOnMagicPacketOnly_EnableWakeOnMagicPacketOnly_SIZE sizeof(BOOLEAN)
    #define MSNdis_DeviceWakeOnMagicPacketOnly_EnableWakeOnMagicPacketOnly_ID 1

} MSNdis_DeviceWakeOnMagicPacketOnly, *PMSNdis_DeviceWakeOnMagicPacketOnly;

#define MSNdis_DeviceWakeOnMagicPacketOnly_SIZE (FIELD_OFFSET(MSNdis_DeviceWakeOnMagicPacketOnly, EnableWakeOnMagicPacketOnly) + MSNdis_DeviceWakeOnMagicPacketOnly_EnableWakeOnMagicPacketOnly_SIZE)

// MSNdis_RSSEnabled - MSNdis_RSSEnabled
#define MSNdis_RSSEnabledGuid \
    { 0x9565cd55,0x3402,0x4e32, { 0xa5,0xb6,0x2f,0x14,0x3f,0x2f,0x2c,0x30 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_RSSEnabled_GUID, \
            0x9565cd55,0x3402,0x4e32,0xa5,0xb6,0x2f,0x14,0x3f,0x2f,0x2c,0x30);
#endif


typedef struct _MSNdis_RSSEnabled
{
    // 
    BOOLEAN RSSEnabled;
    #define MSNdis_RSSEnabled_RSSEnabled_SIZE sizeof(BOOLEAN)
    #define MSNdis_RSSEnabled_RSSEnabled_ID 1

} MSNdis_RSSEnabled, *PMSNdis_RSSEnabled;

#define MSNdis_RSSEnabled_SIZE (FIELD_OFFSET(MSNdis_RSSEnabled, RSSEnabled) + MSNdis_RSSEnabled_RSSEnabled_SIZE)

// MSNdis_NetworkDirectState - MSNdis_NetworkDirectState
#define MSNdis_NetworkDirectStateGuid \
    { 0x530c69c9,0x2f51,0x49de, { 0xa1,0xaf,0x08,0x8d,0x54,0xff,0xa4,0x74 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NetworkDirectState_GUID, \
            0x530c69c9,0x2f51,0x49de,0xa1,0xaf,0x08,0x8d,0x54,0xff,0xa4,0x74);
#endif


typedef struct _MSNdis_NetworkDirectState
{
    // 
    BOOLEAN Enabled;
    #define MSNdis_NetworkDirectState_Enabled_SIZE sizeof(BOOLEAN)
    #define MSNdis_NetworkDirectState_Enabled_ID 1

} MSNdis_NetworkDirectState, *PMSNdis_NetworkDirectState;

#define MSNdis_NetworkDirectState_SIZE (FIELD_OFFSET(MSNdis_NetworkDirectState, Enabled) + MSNdis_NetworkDirectState_Enabled_SIZE)

// MSNdis_NetworkDirectVersion - MSNdis_NetworkDirectVersion
#define MSNdis_NetworkDirectVersionGuid \
    { 0xc89b8490,0x350a,0x4a34, { 0x90,0xb6,0x98,0xb3,0x7f,0x4e,0xd5,0xb2 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NetworkDirectVersion_GUID, \
            0xc89b8490,0x350a,0x4a34,0x90,0xb6,0x98,0xb3,0x7f,0x4e,0xd5,0xb2);
#endif


typedef struct _MSNdis_NetworkDirectVersion
{
    // 
    USHORT MajorVersionNumber;
    #define MSNdis_NetworkDirectVersion_MajorVersionNumber_SIZE sizeof(USHORT)
    #define MSNdis_NetworkDirectVersion_MajorVersionNumber_ID 1

    // 
    USHORT MinorVersionNumber;
    #define MSNdis_NetworkDirectVersion_MinorVersionNumber_SIZE sizeof(USHORT)
    #define MSNdis_NetworkDirectVersion_MinorVersionNumber_ID 2

} MSNdis_NetworkDirectVersion, *PMSNdis_NetworkDirectVersion;

#define MSNdis_NetworkDirectVersion_SIZE (FIELD_OFFSET(MSNdis_NetworkDirectVersion, MinorVersionNumber) + MSNdis_NetworkDirectVersion_MinorVersionNumber_SIZE)

// MSNdis_NetworkDirectAdapterInfo - MSNdis_NetworkDirectAdapterInfo
#define MSNdis_NetworkDirectAdapterInfoGuid \
    { 0x691a00ec,0x4e8e,0x4993, { 0x87,0x9e,0x96,0x00,0x11,0xa4,0x6c,0xef } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NetworkDirectAdapterInfo_GUID, \
            0x691a00ec,0x4e8e,0x4993,0x87,0x9e,0x96,0x00,0x11,0xa4,0x6c,0xef);
#endif


typedef struct _MSNdis_NetworkDirectAdapterInfo
{
    // 
    MSNdis_NetworkDirectVersion Version;
    #define MSNdis_NetworkDirectAdapterInfo_Version_SIZE sizeof(MSNdis_NetworkDirectVersion)
    #define MSNdis_NetworkDirectAdapterInfo_Version_ID 1

    // 
    ULONG VendorId;
    #define MSNdis_NetworkDirectAdapterInfo_VendorId_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_VendorId_ID 2

    // 
    ULONG DeviceId;
    #define MSNdis_NetworkDirectAdapterInfo_DeviceId_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_DeviceId_ID 3

    // 
    ULONGLONG MaxRegistrationSize;
    #define MSNdis_NetworkDirectAdapterInfo_MaxRegistrationSize_SIZE sizeof(ULONGLONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxRegistrationSize_ID 4

    // 
    ULONGLONG MaxWindowSize;
    #define MSNdis_NetworkDirectAdapterInfo_MaxWindowSize_SIZE sizeof(ULONGLONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxWindowSize_ID 5

    // 
    ULONG FRMRPageCount;
    #define MSNdis_NetworkDirectAdapterInfo_FRMRPageCount_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_FRMRPageCount_ID 6

    // 
    ULONG MaxInitiatorRequestSge;
    #define MSNdis_NetworkDirectAdapterInfo_MaxInitiatorRequestSge_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxInitiatorRequestSge_ID 7

    // 
    ULONG MaxReceiveRequestSge;
    #define MSNdis_NetworkDirectAdapterInfo_MaxReceiveRequestSge_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxReceiveRequestSge_ID 8

    // 
    ULONG MaxReadRequestSge;
    #define MSNdis_NetworkDirectAdapterInfo_MaxReadRequestSge_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxReadRequestSge_ID 9

    // 
    ULONG MaxTransferLength;
    #define MSNdis_NetworkDirectAdapterInfo_MaxTransferLength_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxTransferLength_ID 10

    // 
    ULONG MaxInlineDataSize;
    #define MSNdis_NetworkDirectAdapterInfo_MaxInlineDataSize_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxInlineDataSize_ID 11

    // 
    ULONG MaxInboundReadLimit;
    #define MSNdis_NetworkDirectAdapterInfo_MaxInboundReadLimit_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxInboundReadLimit_ID 12

    // 
    ULONG MaxOutboundReadLimit;
    #define MSNdis_NetworkDirectAdapterInfo_MaxOutboundReadLimit_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxOutboundReadLimit_ID 13

    // 
    ULONG MaxReceiveQueueDepth;
    #define MSNdis_NetworkDirectAdapterInfo_MaxReceiveQueueDepth_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxReceiveQueueDepth_ID 14

    // 
    ULONG MaxInitiatorQueueDepth;
    #define MSNdis_NetworkDirectAdapterInfo_MaxInitiatorQueueDepth_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxInitiatorQueueDepth_ID 15

    // 
    ULONG MaxSrqDepth;
    #define MSNdis_NetworkDirectAdapterInfo_MaxSrqDepth_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxSrqDepth_ID 16

    // 
    ULONG MaxCqDepth;
    #define MSNdis_NetworkDirectAdapterInfo_MaxCqDepth_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxCqDepth_ID 17

    // 
    ULONG LargeRequestThreshold;
    #define MSNdis_NetworkDirectAdapterInfo_LargeRequestThreshold_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_LargeRequestThreshold_ID 18

    // 
    ULONG MaxCallerData;
    #define MSNdis_NetworkDirectAdapterInfo_MaxCallerData_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxCallerData_ID 19

    // 
    ULONG MaxCalleeData;
    #define MSNdis_NetworkDirectAdapterInfo_MaxCalleeData_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterInfo_MaxCalleeData_ID 20

    // 
    BOOLEAN InOrderDMA;
    #define MSNdis_NetworkDirectAdapterInfo_InOrderDMA_SIZE sizeof(BOOLEAN)
    #define MSNdis_NetworkDirectAdapterInfo_InOrderDMA_ID 21

    // 
    BOOLEAN SupportsCQResize;
    #define MSNdis_NetworkDirectAdapterInfo_SupportsCQResize_SIZE sizeof(BOOLEAN)
    #define MSNdis_NetworkDirectAdapterInfo_SupportsCQResize_ID 22

    // 
    BOOLEAN SupportsLoopbackConnections;
    #define MSNdis_NetworkDirectAdapterInfo_SupportsLoopbackConnections_SIZE sizeof(BOOLEAN)
    #define MSNdis_NetworkDirectAdapterInfo_SupportsLoopbackConnections_ID 23

} MSNdis_NetworkDirectAdapterInfo, *PMSNdis_NetworkDirectAdapterInfo;

#define MSNdis_NetworkDirectAdapterInfo_SIZE (FIELD_OFFSET(MSNdis_NetworkDirectAdapterInfo, SupportsLoopbackConnections) + MSNdis_NetworkDirectAdapterInfo_SupportsLoopbackConnections_SIZE)

// MSNdis_NetworkDirectAdapterCapabilities - MSNdis_NetworkDirectAdapterCapabilities
#define MSNdis_NetworkDirectAdapterCapabilitiesGuid \
    { 0x64c71824,0x1bb8,0x47d2, { 0xb3,0x47,0xa8,0xfb,0xd9,0x5b,0x9c,0x07 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NetworkDirectAdapterCapabilities_GUID, \
            0x64c71824,0x1bb8,0x47d2,0xb3,0x47,0xa8,0xfb,0xd9,0x5b,0x9c,0x07);
#endif


typedef struct _MSNdis_NetworkDirectAdapterCapabilities
{
    // 
    ULONG MaxQpCount;
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxQpCount_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxQpCount_ID 1

    // 
    ULONG MaxCqCount;
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxCqCount_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxCqCount_ID 2

    // 
    ULONG MaxMrCount;
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxMrCount_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxMrCount_ID 3

    // 
    ULONG MaxPdCount;
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxPdCount_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxPdCount_ID 4

    // 
    ULONG MaxInboundReadLimit;
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxInboundReadLimit_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxInboundReadLimit_ID 5

    // 
    ULONG MaxOutboundReadLimit;
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxOutboundReadLimit_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxOutboundReadLimit_ID 6

    // 
    ULONG MaxMwCount;
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxMwCount_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxMwCount_ID 7

    // 
    ULONG MaxSrqCount;
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxSrqCount_SIZE sizeof(ULONG)
    #define MSNdis_NetworkDirectAdapterCapabilities_MaxSrqCount_ID 8

    // 
    ULONGLONG MissingCounterMask;
    #define MSNdis_NetworkDirectAdapterCapabilities_MissingCounterMask_SIZE sizeof(ULONGLONG)
    #define MSNdis_NetworkDirectAdapterCapabilities_MissingCounterMask_ID 9

    // 
    MSNdis_NetworkDirectAdapterInfo NdAdapterInfo;
    #define MSNdis_NetworkDirectAdapterCapabilities_NdAdapterInfo_SIZE sizeof(MSNdis_NetworkDirectAdapterInfo)
    #define MSNdis_NetworkDirectAdapterCapabilities_NdAdapterInfo_ID 10

} MSNdis_NetworkDirectAdapterCapabilities, *PMSNdis_NetworkDirectAdapterCapabilities;

#define MSNdis_NetworkDirectAdapterCapabilities_SIZE (FIELD_OFFSET(MSNdis_NetworkDirectAdapterCapabilities, NdAdapterInfo) + MSNdis_NetworkDirectAdapterCapabilities_NdAdapterInfo_SIZE)

// MSNdis_NetworkDirectCapabilities - MSNdis_NetworkDirectCapabilities
#define MSNdis_NetworkDirectCapabilitiesGuid \
    { 0x7969ba4d,0xdd80,0x4bc7, { 0xb3,0xe6,0x68,0x04,0x39,0x97,0xe5,0x19 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NetworkDirectCapabilities_GUID, \
            0x7969ba4d,0xdd80,0x4bc7,0xb3,0xe6,0x68,0x04,0x39,0x97,0xe5,0x19);
#endif


typedef struct _MSNdis_NetworkDirectCapabilities
{
    // 
    MSNdis_NetworkDirectAdapterCapabilities NdCapabilities;
    #define MSNdis_NetworkDirectCapabilities_NdCapabilities_SIZE sizeof(MSNdis_NetworkDirectAdapterCapabilities)
    #define MSNdis_NetworkDirectCapabilities_NdCapabilities_ID 1

} MSNdis_NetworkDirectCapabilities, *PMSNdis_NetworkDirectCapabilities;

#define MSNdis_NetworkDirectCapabilities_SIZE (FIELD_OFFSET(MSNdis_NetworkDirectCapabilities, NdCapabilities) + MSNdis_NetworkDirectCapabilities_NdCapabilities_SIZE)

// MSNdis_HardwareStatus - MSNdis_HardwareStatus
#define MSNdis_HardwareStatusGuid \
    { 0x5ec10354,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_HardwareStatus_GUID, \
            0x5ec10354,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_HardwareStatus
{
    // 
    ULONG NdisHardwareStatus;
    #define MSNdis_HardwareStatus_NdisHardwareStatus_SIZE sizeof(ULONG)
    #define MSNdis_HardwareStatus_NdisHardwareStatus_ID 1

} MSNdis_HardwareStatus, *PMSNdis_HardwareStatus;

#define MSNdis_HardwareStatus_SIZE (FIELD_OFFSET(MSNdis_HardwareStatus, NdisHardwareStatus) + MSNdis_HardwareStatus_NdisHardwareStatus_SIZE)

// MSNdis_MediaSupported - MSNdis_MediaSupported
#define MSNdis_MediaSupportedGuid \
    { 0x5ec10355,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_MediaSupported_GUID, \
            0x5ec10355,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_MediaSupported
{
    // 
    ULONG NumberElements;
    #define MSNdis_MediaSupported_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_MediaSupported_NumberElements_ID 1

    // 
    ULONG NdisMediaSupported[1];
    #define MSNdis_MediaSupported_NdisMediaSupported_ID 2

} MSNdis_MediaSupported, *PMSNdis_MediaSupported;

// MSNdis_MediaInUse - MSNdis_MediaInUse
#define MSNdis_MediaInUseGuid \
    { 0x5ec10356,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_MediaInUse_GUID, \
            0x5ec10356,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_MediaInUse
{
    // 
    ULONG NumberElements;
    #define MSNdis_MediaInUse_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_MediaInUse_NumberElements_ID 1

    // 
    ULONG NdisMediaInUse[1];
    #define MSNdis_MediaInUse_NdisMediaInUse_ID 2

} MSNdis_MediaInUse, *PMSNdis_MediaInUse;

// MSNdis_MaximumLookahead - MSNdis_MaximumLookahead
#define MSNdis_MaximumLookaheadGuid \
    { 0x5ec10357,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_MaximumLookahead_GUID, \
            0x5ec10357,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_MaximumLookahead
{
    // 
    ULONG NdisMaximumLookahead;
    #define MSNdis_MaximumLookahead_NdisMaximumLookahead_SIZE sizeof(ULONG)
    #define MSNdis_MaximumLookahead_NdisMaximumLookahead_ID 1

} MSNdis_MaximumLookahead, *PMSNdis_MaximumLookahead;

#define MSNdis_MaximumLookahead_SIZE (FIELD_OFFSET(MSNdis_MaximumLookahead, NdisMaximumLookahead) + MSNdis_MaximumLookahead_NdisMaximumLookahead_SIZE)

// MSNdis_MaximumFrameSize - MSNdis_MaximumFrameSize
#define MSNdis_MaximumFrameSizeGuid \
    { 0x5ec10358,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_MaximumFrameSize_GUID, \
            0x5ec10358,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_MaximumFrameSize
{
    // 
    ULONG NdisMaximumFrameSize;
    #define MSNdis_MaximumFrameSize_NdisMaximumFrameSize_SIZE sizeof(ULONG)
    #define MSNdis_MaximumFrameSize_NdisMaximumFrameSize_ID 1

} MSNdis_MaximumFrameSize, *PMSNdis_MaximumFrameSize;

#define MSNdis_MaximumFrameSize_SIZE (FIELD_OFFSET(MSNdis_MaximumFrameSize, NdisMaximumFrameSize) + MSNdis_MaximumFrameSize_NdisMaximumFrameSize_SIZE)

// MSNdis_LinkSpeed - MSNdis_LinkSpeed
#define MSNdis_LinkSpeedGuid \
    { 0x5ec10359,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_LinkSpeed_GUID, \
            0x5ec10359,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_LinkSpeed
{
    // 
    ULONG NdisLinkSpeed;
    #define MSNdis_LinkSpeed_NdisLinkSpeed_SIZE sizeof(ULONG)
    #define MSNdis_LinkSpeed_NdisLinkSpeed_ID 1

} MSNdis_LinkSpeed, *PMSNdis_LinkSpeed;

#define MSNdis_LinkSpeed_SIZE (FIELD_OFFSET(MSNdis_LinkSpeed, NdisLinkSpeed) + MSNdis_LinkSpeed_NdisLinkSpeed_SIZE)

// MSNdis_TransmitBufferSpace - MSNdis_TransmitBufferSpace
#define MSNdis_TransmitBufferSpaceGuid \
    { 0x5ec1035a,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TransmitBufferSpace_GUID, \
            0x5ec1035a,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TransmitBufferSpace
{
    // 
    ULONG NdisTransmitBufferSpace;
    #define MSNdis_TransmitBufferSpace_NdisTransmitBufferSpace_SIZE sizeof(ULONG)
    #define MSNdis_TransmitBufferSpace_NdisTransmitBufferSpace_ID 1

} MSNdis_TransmitBufferSpace, *PMSNdis_TransmitBufferSpace;

#define MSNdis_TransmitBufferSpace_SIZE (FIELD_OFFSET(MSNdis_TransmitBufferSpace, NdisTransmitBufferSpace) + MSNdis_TransmitBufferSpace_NdisTransmitBufferSpace_SIZE)

// MSNdis_ReceiveBufferSpace - MSNdis_ReceiveBufferSpace
#define MSNdis_ReceiveBufferSpaceGuid \
    { 0x5ec1035b,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveBufferSpace_GUID, \
            0x5ec1035b,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_ReceiveBufferSpace
{
    // 
    ULONG NdisReceiveBufferSpace;
    #define MSNdis_ReceiveBufferSpace_NdisReceiveBufferSpace_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveBufferSpace_NdisReceiveBufferSpace_ID 1

} MSNdis_ReceiveBufferSpace, *PMSNdis_ReceiveBufferSpace;

#define MSNdis_ReceiveBufferSpace_SIZE (FIELD_OFFSET(MSNdis_ReceiveBufferSpace, NdisReceiveBufferSpace) + MSNdis_ReceiveBufferSpace_NdisReceiveBufferSpace_SIZE)

// MSNdis_TransmitBlockSize - MSNdis_TransmitBlockSize
#define MSNdis_TransmitBlockSizeGuid \
    { 0x5ec1035c,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TransmitBlockSize_GUID, \
            0x5ec1035c,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TransmitBlockSize
{
    // 
    ULONG NdisTransmitBlockSize;
    #define MSNdis_TransmitBlockSize_NdisTransmitBlockSize_SIZE sizeof(ULONG)
    #define MSNdis_TransmitBlockSize_NdisTransmitBlockSize_ID 1

} MSNdis_TransmitBlockSize, *PMSNdis_TransmitBlockSize;

#define MSNdis_TransmitBlockSize_SIZE (FIELD_OFFSET(MSNdis_TransmitBlockSize, NdisTransmitBlockSize) + MSNdis_TransmitBlockSize_NdisTransmitBlockSize_SIZE)

// MSNdis_ReceiveBlockSize - MSNdis_ReceiveBlockSize
#define MSNdis_ReceiveBlockSizeGuid \
    { 0x5ec1035d,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveBlockSize_GUID, \
            0x5ec1035d,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_ReceiveBlockSize
{
    // 
    ULONG NdisReceiveBlockSize;
    #define MSNdis_ReceiveBlockSize_NdisReceiveBlockSize_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveBlockSize_NdisReceiveBlockSize_ID 1

} MSNdis_ReceiveBlockSize, *PMSNdis_ReceiveBlockSize;

#define MSNdis_ReceiveBlockSize_SIZE (FIELD_OFFSET(MSNdis_ReceiveBlockSize, NdisReceiveBlockSize) + MSNdis_ReceiveBlockSize_NdisReceiveBlockSize_SIZE)

// MSNdis_VendorID - MSNdis_VendorID
#define MSNdis_VendorIDGuid \
    { 0x5ec1035e,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_VendorID_GUID, \
            0x5ec1035e,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_VendorID
{
    // 
    ULONG NdisVendorID;
    #define MSNdis_VendorID_NdisVendorID_SIZE sizeof(ULONG)
    #define MSNdis_VendorID_NdisVendorID_ID 1

} MSNdis_VendorID, *PMSNdis_VendorID;

#define MSNdis_VendorID_SIZE (FIELD_OFFSET(MSNdis_VendorID, NdisVendorID) + MSNdis_VendorID_NdisVendorID_SIZE)

// MSNdis_VendorDescription - MSNdis_VendorDescription
#define MSNdis_VendorDescriptionGuid \
    { 0x5ec1035f,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_VendorDescription_GUID, \
            0x5ec1035f,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_VendorDescription
{
    // 
    CHAR VariableData[1];
    #define MSNdis_VendorDescription_NdisVendorDescription_ID 1

} MSNdis_VendorDescription, *PMSNdis_VendorDescription;

// MSNdis_CurrentPacketFilter - MSNdis_CurrentPacketFilter
#define MSNdis_CurrentPacketFilterGuid \
    { 0x5ec10360,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CurrentPacketFilter_GUID, \
            0x5ec10360,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CurrentPacketFilter
{
    // 
    ULONG NdisCurrentPacketFilter;
    #define MSNdis_CurrentPacketFilter_NdisCurrentPacketFilter_SIZE sizeof(ULONG)
    #define MSNdis_CurrentPacketFilter_NdisCurrentPacketFilter_ID 1

} MSNdis_CurrentPacketFilter, *PMSNdis_CurrentPacketFilter;

#define MSNdis_CurrentPacketFilter_SIZE (FIELD_OFFSET(MSNdis_CurrentPacketFilter, NdisCurrentPacketFilter) + MSNdis_CurrentPacketFilter_NdisCurrentPacketFilter_SIZE)

// MSNdis_CurrentLookahead - MSNdis_CurrentLookahead
#define MSNdis_CurrentLookaheadGuid \
    { 0x5ec10361,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CurrentLookahead_GUID, \
            0x5ec10361,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CurrentLookahead
{
    // 
    ULONG NdisCurrentLookahead;
    #define MSNdis_CurrentLookahead_NdisCurrentLookahead_SIZE sizeof(ULONG)
    #define MSNdis_CurrentLookahead_NdisCurrentLookahead_ID 1

} MSNdis_CurrentLookahead, *PMSNdis_CurrentLookahead;

#define MSNdis_CurrentLookahead_SIZE (FIELD_OFFSET(MSNdis_CurrentLookahead, NdisCurrentLookahead) + MSNdis_CurrentLookahead_NdisCurrentLookahead_SIZE)

// MSNdis_DriverVersion - MSNdis_DriverVersion
#define MSNdis_DriverVersionGuid \
    { 0x5ec10362,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_DriverVersion_GUID, \
            0x5ec10362,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_DriverVersion
{
    // 
    USHORT NdisDriverVersion;
    #define MSNdis_DriverVersion_NdisDriverVersion_SIZE sizeof(USHORT)
    #define MSNdis_DriverVersion_NdisDriverVersion_ID 1

} MSNdis_DriverVersion, *PMSNdis_DriverVersion;

#define MSNdis_DriverVersion_SIZE (FIELD_OFFSET(MSNdis_DriverVersion, NdisDriverVersion) + MSNdis_DriverVersion_NdisDriverVersion_SIZE)

// MSNdis_MaximumTotalSize - MSNdis_MaximumTotalSize
#define MSNdis_MaximumTotalSizeGuid \
    { 0x5ec10363,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_MaximumTotalSize_GUID, \
            0x5ec10363,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_MaximumTotalSize
{
    // 
    ULONG NdisMaximumTotalSize;
    #define MSNdis_MaximumTotalSize_NdisMaximumTotalSize_SIZE sizeof(ULONG)
    #define MSNdis_MaximumTotalSize_NdisMaximumTotalSize_ID 1

} MSNdis_MaximumTotalSize, *PMSNdis_MaximumTotalSize;

#define MSNdis_MaximumTotalSize_SIZE (FIELD_OFFSET(MSNdis_MaximumTotalSize, NdisMaximumTotalSize) + MSNdis_MaximumTotalSize_NdisMaximumTotalSize_SIZE)

// MSNdis_MacOptions - MSNdis_MacOptions
#define MSNdis_MacOptionsGuid \
    { 0x5ec10365,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_MacOptions_GUID, \
            0x5ec10365,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_MacOptions
{
    // 
    ULONG NdisMacOptions;
    #define MSNdis_MacOptions_NdisMacOptions_SIZE sizeof(ULONG)
    #define MSNdis_MacOptions_NdisMacOptions_ID 1

} MSNdis_MacOptions, *PMSNdis_MacOptions;

#define MSNdis_MacOptions_SIZE (FIELD_OFFSET(MSNdis_MacOptions, NdisMacOptions) + MSNdis_MacOptions_NdisMacOptions_SIZE)

// MSNdis_MediaConnectStatus - MSNdis_MediaConnectStatus
#define MSNdis_MediaConnectStatusGuid \
    { 0x5ec10366,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_MediaConnectStatus_GUID, \
            0x5ec10366,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_MediaConnectStatus
{
    // 
    ULONG NdisMediaConnectStatus;
    #define MSNdis_MediaConnectStatus_NdisMediaConnectStatus_SIZE sizeof(ULONG)
    #define MSNdis_MediaConnectStatus_NdisMediaConnectStatus_ID 1

} MSNdis_MediaConnectStatus, *PMSNdis_MediaConnectStatus;

#define MSNdis_MediaConnectStatus_SIZE (FIELD_OFFSET(MSNdis_MediaConnectStatus, NdisMediaConnectStatus) + MSNdis_MediaConnectStatus_NdisMediaConnectStatus_SIZE)

// MSNdis_MaximumSendPackets - MSNdis_MaximumSendPackets
#define MSNdis_MaximumSendPacketsGuid \
    { 0x5ec10367,0xa61a,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_MaximumSendPackets_GUID, \
            0x5ec10367,0xa61a,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_MaximumSendPackets
{
    // 
    ULONG NdisMaximumSendPackets;
    #define MSNdis_MaximumSendPackets_NdisMaximumSendPackets_SIZE sizeof(ULONG)
    #define MSNdis_MaximumSendPackets_NdisMaximumSendPackets_ID 1

} MSNdis_MaximumSendPackets, *PMSNdis_MaximumSendPackets;

#define MSNdis_MaximumSendPackets_SIZE (FIELD_OFFSET(MSNdis_MaximumSendPackets, NdisMaximumSendPackets) + MSNdis_MaximumSendPackets_NdisMaximumSendPackets_SIZE)

// MSNdis_VendorDriverVersion - MSNdis_VendorDriverVersion
#define MSNdis_VendorDriverVersionGuid \
    { 0x447956f9,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_VendorDriverVersion_GUID, \
            0x447956f9,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_VendorDriverVersion
{
    // 
    ULONG NdisVendorDriverVersion;
    #define MSNdis_VendorDriverVersion_NdisVendorDriverVersion_SIZE sizeof(ULONG)
    #define MSNdis_VendorDriverVersion_NdisVendorDriverVersion_ID 1

} MSNdis_VendorDriverVersion, *PMSNdis_VendorDriverVersion;

#define MSNdis_VendorDriverVersion_SIZE (FIELD_OFFSET(MSNdis_VendorDriverVersion, NdisVendorDriverVersion) + MSNdis_VendorDriverVersion_NdisVendorDriverVersion_SIZE)

// MSNdis_VlanIdentifier - MSNdis_VlanIdentifier
#define MSNdis_VlanIdentifierGuid \
    { 0x765dc702,0xc5e8,0x4b67, { 0x84,0x3b,0x3f,0x5a,0x4f,0xf2,0x64,0x8b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_VlanIdentifier_GUID, \
            0x765dc702,0xc5e8,0x4b67,0x84,0x3b,0x3f,0x5a,0x4f,0xf2,0x64,0x8b);
#endif


typedef struct _MSNdis_VlanIdentifier
{
    // 
    ULONG NdisVlanId;
    #define MSNdis_VlanIdentifier_NdisVlanId_SIZE sizeof(ULONG)
    #define MSNdis_VlanIdentifier_NdisVlanId_ID 1

} MSNdis_VlanIdentifier, *PMSNdis_VlanIdentifier;

#define MSNdis_VlanIdentifier_SIZE (FIELD_OFFSET(MSNdis_VlanIdentifier, NdisVlanId) + MSNdis_VlanIdentifier_NdisVlanId_SIZE)

// MSNdis_PhysicalMediumType - MSNdis_PhysicalMediumType
#define MSNdis_PhysicalMediumTypeGuid \
    { 0x418ca16d,0x3937,0x4208, { 0x94,0x0a,0xec,0x61,0x96,0x27,0x80,0x85 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PhysicalMediumType_GUID, \
            0x418ca16d,0x3937,0x4208,0x94,0x0a,0xec,0x61,0x96,0x27,0x80,0x85);
#endif


typedef struct _MSNdis_PhysicalMediumType
{
    // 
    ULONG NdisPhysicalMediumType;
    #define MSNdis_PhysicalMediumType_NdisPhysicalMediumType_SIZE sizeof(ULONG)
    #define MSNdis_PhysicalMediumType_NdisPhysicalMediumType_ID 1

} MSNdis_PhysicalMediumType, *PMSNdis_PhysicalMediumType;

#define MSNdis_PhysicalMediumType_SIZE (FIELD_OFFSET(MSNdis_PhysicalMediumType, NdisPhysicalMediumType) + MSNdis_PhysicalMediumType_NdisPhysicalMediumType_SIZE)

// MSNdis_TransmitsOk - MSNdis_TransmitsOk
#define MSNdis_TransmitsOkGuid \
    { 0x447956fa,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TransmitsOk_GUID, \
            0x447956fa,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TransmitsOk
{
    // 
    ULONGLONG NdisTransmitsOk;
    #define MSNdis_TransmitsOk_NdisTransmitsOk_SIZE sizeof(ULONGLONG)
    #define MSNdis_TransmitsOk_NdisTransmitsOk_ID 1

} MSNdis_TransmitsOk, *PMSNdis_TransmitsOk;

#define MSNdis_TransmitsOk_SIZE (FIELD_OFFSET(MSNdis_TransmitsOk, NdisTransmitsOk) + MSNdis_TransmitsOk_NdisTransmitsOk_SIZE)

// MSNdis_ReceivesOk - MSNdis_ReceivesOk
#define MSNdis_ReceivesOkGuid \
    { 0x447956fb,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceivesOk_GUID, \
            0x447956fb,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_ReceivesOk
{
    // 
    ULONGLONG NdisReceivesOk;
    #define MSNdis_ReceivesOk_NdisReceivesOk_SIZE sizeof(ULONGLONG)
    #define MSNdis_ReceivesOk_NdisReceivesOk_ID 1

} MSNdis_ReceivesOk, *PMSNdis_ReceivesOk;

#define MSNdis_ReceivesOk_SIZE (FIELD_OFFSET(MSNdis_ReceivesOk, NdisReceivesOk) + MSNdis_ReceivesOk_NdisReceivesOk_SIZE)

// MSNdis_TransmitsError - MSNdis_TransmitsError
#define MSNdis_TransmitsErrorGuid \
    { 0x447956fc,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TransmitsError_GUID, \
            0x447956fc,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TransmitsError
{
    // 
    ULONG NdisTransmitsError;
    #define MSNdis_TransmitsError_NdisTransmitsError_SIZE sizeof(ULONG)
    #define MSNdis_TransmitsError_NdisTransmitsError_ID 1

} MSNdis_TransmitsError, *PMSNdis_TransmitsError;

#define MSNdis_TransmitsError_SIZE (FIELD_OFFSET(MSNdis_TransmitsError, NdisTransmitsError) + MSNdis_TransmitsError_NdisTransmitsError_SIZE)

// MSNdis_ReceiveError - MSNdis_ReceiveError
#define MSNdis_ReceiveErrorGuid \
    { 0x447956fd,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveError_GUID, \
            0x447956fd,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_ReceiveError
{
    // 
    ULONG NdisReceiveError;
    #define MSNdis_ReceiveError_NdisReceiveError_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveError_NdisReceiveError_ID 1

} MSNdis_ReceiveError, *PMSNdis_ReceiveError;

#define MSNdis_ReceiveError_SIZE (FIELD_OFFSET(MSNdis_ReceiveError, NdisReceiveError) + MSNdis_ReceiveError_NdisReceiveError_SIZE)

// MSNdis_ReceiveNoBuffer - MSNdis_ReceiveNoBuffer
#define MSNdis_ReceiveNoBufferGuid \
    { 0x447956fe,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveNoBuffer_GUID, \
            0x447956fe,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_ReceiveNoBuffer
{
    // 
    ULONG NdisReceiveNoBuffer;
    #define MSNdis_ReceiveNoBuffer_NdisReceiveNoBuffer_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveNoBuffer_NdisReceiveNoBuffer_ID 1

} MSNdis_ReceiveNoBuffer, *PMSNdis_ReceiveNoBuffer;

#define MSNdis_ReceiveNoBuffer_SIZE (FIELD_OFFSET(MSNdis_ReceiveNoBuffer, NdisReceiveNoBuffer) + MSNdis_ReceiveNoBuffer_NdisReceiveNoBuffer_SIZE)

// MSNdis_CoHardwareStatus - MSNdis_CoHardwareStatus
#define MSNdis_CoHardwareStatusGuid \
    { 0x791ad192,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoHardwareStatus_GUID, \
            0x791ad192,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoHardwareStatus
{
    // 
    ULONG NdisCoHardwareStatus;
    #define MSNdis_CoHardwareStatus_NdisCoHardwareStatus_SIZE sizeof(ULONG)
    #define MSNdis_CoHardwareStatus_NdisCoHardwareStatus_ID 1

} MSNdis_CoHardwareStatus, *PMSNdis_CoHardwareStatus;

#define MSNdis_CoHardwareStatus_SIZE (FIELD_OFFSET(MSNdis_CoHardwareStatus, NdisCoHardwareStatus) + MSNdis_CoHardwareStatus_NdisCoHardwareStatus_SIZE)

// MSNdis_CoMediaSupported - MSNdis_CoMediaSupported
#define MSNdis_CoMediaSupportedGuid \
    { 0x791ad193,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoMediaSupported_GUID, \
            0x791ad193,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoMediaSupported
{
    // 
    ULONG NumberElements;
    #define MSNdis_CoMediaSupported_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_CoMediaSupported_NumberElements_ID 1

    // 
    ULONG NdisCoMediaSupported[1];
    #define MSNdis_CoMediaSupported_NdisCoMediaSupported_ID 2

} MSNdis_CoMediaSupported, *PMSNdis_CoMediaSupported;

// MSNdis_CoMediaInUse - MSNdis_CoMediaInUse
#define MSNdis_CoMediaInUseGuid \
    { 0x791ad194,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoMediaInUse_GUID, \
            0x791ad194,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoMediaInUse
{
    // 
    ULONG NumberElements;
    #define MSNdis_CoMediaInUse_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_CoMediaInUse_NumberElements_ID 1

    // 
    ULONG NdisCoMediaInUse[1];
    #define MSNdis_CoMediaInUse_NdisCoMediaInUse_ID 2

} MSNdis_CoMediaInUse, *PMSNdis_CoMediaInUse;

// MSNdis_CoLinkSpeed - MSNdis_CoLinkSpeed
#define MSNdis_CoLinkSpeedGuid \
    { 0x791ad195,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoLinkSpeed_GUID, \
            0x791ad195,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoLinkSpeed
{
    // 
    MSNdis_NetworkLinkSpeed NdisCoLinkSpeed;
    #define MSNdis_CoLinkSpeed_NdisCoLinkSpeed_SIZE sizeof(MSNdis_NetworkLinkSpeed)
    #define MSNdis_CoLinkSpeed_NdisCoLinkSpeed_ID 1

} MSNdis_CoLinkSpeed, *PMSNdis_CoLinkSpeed;

#define MSNdis_CoLinkSpeed_SIZE (FIELD_OFFSET(MSNdis_CoLinkSpeed, NdisCoLinkSpeed) + MSNdis_CoLinkSpeed_NdisCoLinkSpeed_SIZE)

// MSNdis_CoVendorId - MSNdis_CoVendorId
#define MSNdis_CoVendorIdGuid \
    { 0x791ad196,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoVendorId_GUID, \
            0x791ad196,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoVendorId
{
    // 
    ULONG NdisCoVendorID;
    #define MSNdis_CoVendorId_NdisCoVendorID_SIZE sizeof(ULONG)
    #define MSNdis_CoVendorId_NdisCoVendorID_ID 1

} MSNdis_CoVendorId, *PMSNdis_CoVendorId;

#define MSNdis_CoVendorId_SIZE (FIELD_OFFSET(MSNdis_CoVendorId, NdisCoVendorID) + MSNdis_CoVendorId_NdisCoVendorID_SIZE)

// MSNdis_CoVendorDescription - MSNdis_CoVendorDescription
#define MSNdis_CoVendorDescriptionGuid \
    { 0x791ad197,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoVendorDescription_GUID, \
            0x791ad197,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoVendorDescription
{
    // 
    CHAR VariableData[1];
    #define MSNdis_CoVendorDescription_NdisCoVendorDescription_ID 1

} MSNdis_CoVendorDescription, *PMSNdis_CoVendorDescription;

// MSNdis_CoDriverVersion - MSNdis_CoDriverVersion
#define MSNdis_CoDriverVersionGuid \
    { 0x791ad198,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoDriverVersion_GUID, \
            0x791ad198,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoDriverVersion
{
    // 
    USHORT NdisCoDriverVersion;
    #define MSNdis_CoDriverVersion_NdisCoDriverVersion_SIZE sizeof(USHORT)
    #define MSNdis_CoDriverVersion_NdisCoDriverVersion_ID 1

} MSNdis_CoDriverVersion, *PMSNdis_CoDriverVersion;

#define MSNdis_CoDriverVersion_SIZE (FIELD_OFFSET(MSNdis_CoDriverVersion, NdisCoDriverVersion) + MSNdis_CoDriverVersion_NdisCoDriverVersion_SIZE)

// MSNdis_CoMacOptions - MSNdis_CoMacOptions
#define MSNdis_CoMacOptionsGuid \
    { 0x791ad19a,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoMacOptions_GUID, \
            0x791ad19a,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoMacOptions
{
    // 
    ULONG NdisCoMacOptions;
    #define MSNdis_CoMacOptions_NdisCoMacOptions_SIZE sizeof(ULONG)
    #define MSNdis_CoMacOptions_NdisCoMacOptions_ID 1

} MSNdis_CoMacOptions, *PMSNdis_CoMacOptions;

#define MSNdis_CoMacOptions_SIZE (FIELD_OFFSET(MSNdis_CoMacOptions, NdisCoMacOptions) + MSNdis_CoMacOptions_NdisCoMacOptions_SIZE)

// MSNdis_CoMediaConnectStatus - MSNdis_CoMediaConnectStatus
#define MSNdis_CoMediaConnectStatusGuid \
    { 0x791ad19b,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoMediaConnectStatus_GUID, \
            0x791ad19b,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoMediaConnectStatus
{
    // 
    ULONG NdisCoMediaConnectStatus;
    #define MSNdis_CoMediaConnectStatus_NdisCoMediaConnectStatus_SIZE sizeof(ULONG)
    #define MSNdis_CoMediaConnectStatus_NdisCoMediaConnectStatus_ID 1

} MSNdis_CoMediaConnectStatus, *PMSNdis_CoMediaConnectStatus;

#define MSNdis_CoMediaConnectStatus_SIZE (FIELD_OFFSET(MSNdis_CoMediaConnectStatus, NdisCoMediaConnectStatus) + MSNdis_CoMediaConnectStatus_NdisCoMediaConnectStatus_SIZE)

// MSNdis_CoVendorDriverVersion - MSNdis_CoVendorDriverVersion
#define MSNdis_CoVendorDriverVersionGuid \
    { 0x791ad19c,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoVendorDriverVersion_GUID, \
            0x791ad19c,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoVendorDriverVersion
{
    // 
    ULONG NdisCoVendorDriverVersion;
    #define MSNdis_CoVendorDriverVersion_NdisCoVendorDriverVersion_SIZE sizeof(ULONG)
    #define MSNdis_CoVendorDriverVersion_NdisCoVendorDriverVersion_ID 1

} MSNdis_CoVendorDriverVersion, *PMSNdis_CoVendorDriverVersion;

#define MSNdis_CoVendorDriverVersion_SIZE (FIELD_OFFSET(MSNdis_CoVendorDriverVersion, NdisCoVendorDriverVersion) + MSNdis_CoVendorDriverVersion_NdisCoVendorDriverVersion_SIZE)

// MSNdis_CoMinimumLinkSpeed - MSNdis_CoMinimumLinkSpeed
#define MSNdis_CoMinimumLinkSpeedGuid \
    { 0x791ad19d,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoMinimumLinkSpeed_GUID, \
            0x791ad19d,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoMinimumLinkSpeed
{
    // 
    MSNdis_NetworkLinkSpeed NdisCoMinimumLinkSpeed;
    #define MSNdis_CoMinimumLinkSpeed_NdisCoMinimumLinkSpeed_SIZE sizeof(MSNdis_NetworkLinkSpeed)
    #define MSNdis_CoMinimumLinkSpeed_NdisCoMinimumLinkSpeed_ID 1

} MSNdis_CoMinimumLinkSpeed, *PMSNdis_CoMinimumLinkSpeed;

#define MSNdis_CoMinimumLinkSpeed_SIZE (FIELD_OFFSET(MSNdis_CoMinimumLinkSpeed, NdisCoMinimumLinkSpeed) + MSNdis_CoMinimumLinkSpeed_NdisCoMinimumLinkSpeed_SIZE)

// MSNdis_CoTransmitPdusOk - MSNdis_CoTransmitPdusOk
#define MSNdis_CoTransmitPdusOkGuid \
    { 0x0a214805,0xe35f,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoTransmitPdusOk_GUID, \
            0x0a214805,0xe35f,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoTransmitPdusOk
{
    // 
    ULONGLONG NdisCoTransmitPdusOk;
    #define MSNdis_CoTransmitPdusOk_NdisCoTransmitPdusOk_SIZE sizeof(ULONGLONG)
    #define MSNdis_CoTransmitPdusOk_NdisCoTransmitPdusOk_ID 1

} MSNdis_CoTransmitPdusOk, *PMSNdis_CoTransmitPdusOk;

#define MSNdis_CoTransmitPdusOk_SIZE (FIELD_OFFSET(MSNdis_CoTransmitPdusOk, NdisCoTransmitPdusOk) + MSNdis_CoTransmitPdusOk_NdisCoTransmitPdusOk_SIZE)

// MSNdis_CoReceivePdusOk - MSNdis_CoReceivePdusOk
#define MSNdis_CoReceivePdusOkGuid \
    { 0x0a214806,0xe35f,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoReceivePdusOk_GUID, \
            0x0a214806,0xe35f,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoReceivePdusOk
{
    // 
    ULONGLONG NdisCoReceivePdusOk;
    #define MSNdis_CoReceivePdusOk_NdisCoReceivePdusOk_SIZE sizeof(ULONGLONG)
    #define MSNdis_CoReceivePdusOk_NdisCoReceivePdusOk_ID 1

} MSNdis_CoReceivePdusOk, *PMSNdis_CoReceivePdusOk;

#define MSNdis_CoReceivePdusOk_SIZE (FIELD_OFFSET(MSNdis_CoReceivePdusOk, NdisCoReceivePdusOk) + MSNdis_CoReceivePdusOk_NdisCoReceivePdusOk_SIZE)

// MSNdis_CoTransmitPduErrors - MSNdis_CoTransmitPduErrors
#define MSNdis_CoTransmitPduErrorsGuid \
    { 0x0a214807,0xe35f,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoTransmitPduErrors_GUID, \
            0x0a214807,0xe35f,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoTransmitPduErrors
{
    // 
    ULONG NdisCoTransmitPduErrors;
    #define MSNdis_CoTransmitPduErrors_NdisCoTransmitPduErrors_SIZE sizeof(ULONG)
    #define MSNdis_CoTransmitPduErrors_NdisCoTransmitPduErrors_ID 1

} MSNdis_CoTransmitPduErrors, *PMSNdis_CoTransmitPduErrors;

#define MSNdis_CoTransmitPduErrors_SIZE (FIELD_OFFSET(MSNdis_CoTransmitPduErrors, NdisCoTransmitPduErrors) + MSNdis_CoTransmitPduErrors_NdisCoTransmitPduErrors_SIZE)

// MSNdis_CoReceivePduErrors - MSNdis_CoReceivePduErrors
#define MSNdis_CoReceivePduErrorsGuid \
    { 0x0a214808,0xe35f,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoReceivePduErrors_GUID, \
            0x0a214808,0xe35f,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoReceivePduErrors
{
    // 
    ULONG NdisCoReceivePduErrors;
    #define MSNdis_CoReceivePduErrors_NdisCoReceivePduErrors_SIZE sizeof(ULONG)
    #define MSNdis_CoReceivePduErrors_NdisCoReceivePduErrors_ID 1

} MSNdis_CoReceivePduErrors, *PMSNdis_CoReceivePduErrors;

#define MSNdis_CoReceivePduErrors_SIZE (FIELD_OFFSET(MSNdis_CoReceivePduErrors, NdisCoReceivePduErrors) + MSNdis_CoReceivePduErrors_NdisCoReceivePduErrors_SIZE)

// MSNdis_CoReceivePdusNoBuffer - MSNdis_CoReceivePdusNoBuffer
#define MSNdis_CoReceivePdusNoBufferGuid \
    { 0x0a214809,0xe35f,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CoReceivePdusNoBuffer_GUID, \
            0x0a214809,0xe35f,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_CoReceivePdusNoBuffer
{
    // 
    ULONG NdisCoReceivePdusNoBuffer;
    #define MSNdis_CoReceivePdusNoBuffer_NdisCoReceivePdusNoBuffer_SIZE sizeof(ULONG)
    #define MSNdis_CoReceivePdusNoBuffer_NdisCoReceivePdusNoBuffer_ID 1

} MSNdis_CoReceivePdusNoBuffer, *PMSNdis_CoReceivePdusNoBuffer;

#define MSNdis_CoReceivePdusNoBuffer_SIZE (FIELD_OFFSET(MSNdis_CoReceivePdusNoBuffer, NdisCoReceivePdusNoBuffer) + MSNdis_CoReceivePdusNoBuffer_NdisCoReceivePdusNoBuffer_SIZE)

// MSNdis_AtmSupportedVcRates - MSNdis_AtmSupportedVcRates
#define MSNdis_AtmSupportedVcRatesGuid \
    { 0x791ad19e,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmSupportedVcRates_GUID, \
            0x791ad19e,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmSupportedVcRates
{
    // 
    ULONG MinCellRate;
    #define MSNdis_AtmSupportedVcRates_MinCellRate_SIZE sizeof(ULONG)
    #define MSNdis_AtmSupportedVcRates_MinCellRate_ID 1

    // 
    ULONG MaxCellRate;
    #define MSNdis_AtmSupportedVcRates_MaxCellRate_SIZE sizeof(ULONG)
    #define MSNdis_AtmSupportedVcRates_MaxCellRate_ID 2

} MSNdis_AtmSupportedVcRates, *PMSNdis_AtmSupportedVcRates;

#define MSNdis_AtmSupportedVcRates_SIZE (FIELD_OFFSET(MSNdis_AtmSupportedVcRates, MaxCellRate) + MSNdis_AtmSupportedVcRates_MaxCellRate_SIZE)

// MSNdis_AtmSupportedServiceCategory - MSNdis_AtmSupportedServiceCategory
#define MSNdis_AtmSupportedServiceCategoryGuid \
    { 0x791ad19f,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmSupportedServiceCategory_GUID, \
            0x791ad19f,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmSupportedServiceCategory
{
    // 
    ULONG NdisAtmSupportedServiceCategory;
    #define MSNdis_AtmSupportedServiceCategory_NdisAtmSupportedServiceCategory_SIZE sizeof(ULONG)
    #define MSNdis_AtmSupportedServiceCategory_NdisAtmSupportedServiceCategory_ID 1

} MSNdis_AtmSupportedServiceCategory, *PMSNdis_AtmSupportedServiceCategory;

#define MSNdis_AtmSupportedServiceCategory_SIZE (FIELD_OFFSET(MSNdis_AtmSupportedServiceCategory, NdisAtmSupportedServiceCategory) + MSNdis_AtmSupportedServiceCategory_NdisAtmSupportedServiceCategory_SIZE)

// MSNdis_AtmSupportedAalTypes - MSNdis_AtmSupportedAalTypes
#define MSNdis_AtmSupportedAalTypesGuid \
    { 0x791ad1a0,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmSupportedAalTypes_GUID, \
            0x791ad1a0,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmSupportedAalTypes
{
    // 
    ULONG NdisAtmSupportedAalTypes;
    #define MSNdis_AtmSupportedAalTypes_NdisAtmSupportedAalTypes_SIZE sizeof(ULONG)
    #define MSNdis_AtmSupportedAalTypes_NdisAtmSupportedAalTypes_ID 1

} MSNdis_AtmSupportedAalTypes, *PMSNdis_AtmSupportedAalTypes;

#define MSNdis_AtmSupportedAalTypes_SIZE (FIELD_OFFSET(MSNdis_AtmSupportedAalTypes, NdisAtmSupportedAalTypes) + MSNdis_AtmSupportedAalTypes_NdisAtmSupportedAalTypes_SIZE)

// MSNdis_AtmHardwareCurrentAddress - MSNdis_AtmHardwareCurrentAddress
#define MSNdis_AtmHardwareCurrentAddressGuid \
    { 0x791ad1a1,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmHardwareCurrentAddress_GUID, \
            0x791ad1a1,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmHardwareCurrentAddress
{
    // 
    MSNdis_NetworkAddress NdisAtmHardwareCurrentAddress;
    #define MSNdis_AtmHardwareCurrentAddress_NdisAtmHardwareCurrentAddress_SIZE sizeof(MSNdis_NetworkAddress)
    #define MSNdis_AtmHardwareCurrentAddress_NdisAtmHardwareCurrentAddress_ID 1

} MSNdis_AtmHardwareCurrentAddress, *PMSNdis_AtmHardwareCurrentAddress;

#define MSNdis_AtmHardwareCurrentAddress_SIZE (FIELD_OFFSET(MSNdis_AtmHardwareCurrentAddress, NdisAtmHardwareCurrentAddress) + MSNdis_AtmHardwareCurrentAddress_NdisAtmHardwareCurrentAddress_SIZE)

// MSNdis_AtmMaxActiveVcs - MSNdis_AtmMaxActiveVcs
#define MSNdis_AtmMaxActiveVcsGuid \
    { 0x791ad1a2,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmMaxActiveVcs_GUID, \
            0x791ad1a2,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmMaxActiveVcs
{
    // 
    ULONG NdisAtmMaxActiveVcs;
    #define MSNdis_AtmMaxActiveVcs_NdisAtmMaxActiveVcs_SIZE sizeof(ULONG)
    #define MSNdis_AtmMaxActiveVcs_NdisAtmMaxActiveVcs_ID 1

} MSNdis_AtmMaxActiveVcs, *PMSNdis_AtmMaxActiveVcs;

#define MSNdis_AtmMaxActiveVcs_SIZE (FIELD_OFFSET(MSNdis_AtmMaxActiveVcs, NdisAtmMaxActiveVcs) + MSNdis_AtmMaxActiveVcs_NdisAtmMaxActiveVcs_SIZE)

// MSNdis_AtmMaxActiveVciBits - MSNdis_AtmMaxActiveVciBits
#define MSNdis_AtmMaxActiveVciBitsGuid \
    { 0x791ad1a3,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmMaxActiveVciBits_GUID, \
            0x791ad1a3,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmMaxActiveVciBits
{
    // 
    ULONG NdisAtmMaxActiveVciBits;
    #define MSNdis_AtmMaxActiveVciBits_NdisAtmMaxActiveVciBits_SIZE sizeof(ULONG)
    #define MSNdis_AtmMaxActiveVciBits_NdisAtmMaxActiveVciBits_ID 1

} MSNdis_AtmMaxActiveVciBits, *PMSNdis_AtmMaxActiveVciBits;

#define MSNdis_AtmMaxActiveVciBits_SIZE (FIELD_OFFSET(MSNdis_AtmMaxActiveVciBits, NdisAtmMaxActiveVciBits) + MSNdis_AtmMaxActiveVciBits_NdisAtmMaxActiveVciBits_SIZE)

// MSNdis_AtmMaxActiveVpiBits - MSNdis_AtmMaxActiveVpiBits
#define MSNdis_AtmMaxActiveVpiBitsGuid \
    { 0x791ad1a4,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmMaxActiveVpiBits_GUID, \
            0x791ad1a4,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmMaxActiveVpiBits
{
    // 
    ULONG NdisAtmMaxActiveVpiBits;
    #define MSNdis_AtmMaxActiveVpiBits_NdisAtmMaxActiveVpiBits_SIZE sizeof(ULONG)
    #define MSNdis_AtmMaxActiveVpiBits_NdisAtmMaxActiveVpiBits_ID 1

} MSNdis_AtmMaxActiveVpiBits, *PMSNdis_AtmMaxActiveVpiBits;

#define MSNdis_AtmMaxActiveVpiBits_SIZE (FIELD_OFFSET(MSNdis_AtmMaxActiveVpiBits, NdisAtmMaxActiveVpiBits) + MSNdis_AtmMaxActiveVpiBits_NdisAtmMaxActiveVpiBits_SIZE)

// MSNdis_AtmMaxAal0PacketSize - MSNdis_AtmMaxAal0PacketSize
#define MSNdis_AtmMaxAal0PacketSizeGuid \
    { 0x791ad1a5,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmMaxAal0PacketSize_GUID, \
            0x791ad1a5,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmMaxAal0PacketSize
{
    // 
    ULONG NdisAtmMaxAal0PacketSize;
    #define MSNdis_AtmMaxAal0PacketSize_NdisAtmMaxAal0PacketSize_SIZE sizeof(ULONG)
    #define MSNdis_AtmMaxAal0PacketSize_NdisAtmMaxAal0PacketSize_ID 1

} MSNdis_AtmMaxAal0PacketSize, *PMSNdis_AtmMaxAal0PacketSize;

#define MSNdis_AtmMaxAal0PacketSize_SIZE (FIELD_OFFSET(MSNdis_AtmMaxAal0PacketSize, NdisAtmMaxAal0PacketSize) + MSNdis_AtmMaxAal0PacketSize_NdisAtmMaxAal0PacketSize_SIZE)

// MSNdis_AtmMaxAal1PacketSize - MSNdis_AtmMaxAal1PacketSize
#define MSNdis_AtmMaxAal1PacketSizeGuid \
    { 0x791ad1a6,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmMaxAal1PacketSize_GUID, \
            0x791ad1a6,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmMaxAal1PacketSize
{
    // 
    ULONG NdisAtmMaxAal1PacketSize;
    #define MSNdis_AtmMaxAal1PacketSize_NdisAtmMaxAal1PacketSize_SIZE sizeof(ULONG)
    #define MSNdis_AtmMaxAal1PacketSize_NdisAtmMaxAal1PacketSize_ID 1

} MSNdis_AtmMaxAal1PacketSize, *PMSNdis_AtmMaxAal1PacketSize;

#define MSNdis_AtmMaxAal1PacketSize_SIZE (FIELD_OFFSET(MSNdis_AtmMaxAal1PacketSize, NdisAtmMaxAal1PacketSize) + MSNdis_AtmMaxAal1PacketSize_NdisAtmMaxAal1PacketSize_SIZE)

// MSNdis_AtmMaxAal34PacketSize - MSNdis_AtmMaxAal34PacketSize
#define MSNdis_AtmMaxAal34PacketSizeGuid \
    { 0x791ad1a7,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmMaxAal34PacketSize_GUID, \
            0x791ad1a7,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmMaxAal34PacketSize
{
    // 
    ULONG NdisAtmMaxAal34PacketSize;
    #define MSNdis_AtmMaxAal34PacketSize_NdisAtmMaxAal34PacketSize_SIZE sizeof(ULONG)
    #define MSNdis_AtmMaxAal34PacketSize_NdisAtmMaxAal34PacketSize_ID 1

} MSNdis_AtmMaxAal34PacketSize, *PMSNdis_AtmMaxAal34PacketSize;

#define MSNdis_AtmMaxAal34PacketSize_SIZE (FIELD_OFFSET(MSNdis_AtmMaxAal34PacketSize, NdisAtmMaxAal34PacketSize) + MSNdis_AtmMaxAal34PacketSize_NdisAtmMaxAal34PacketSize_SIZE)

// MSNdis_AtmMaxAal5PacketSize - MSNdis_AtmMaxAal5PacketSize
#define MSNdis_AtmMaxAal5PacketSizeGuid \
    { 0x791ad191,0xe35c,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmMaxAal5PacketSize_GUID, \
            0x791ad191,0xe35c,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmMaxAal5PacketSize
{
    // 
    ULONG NdisAtmMaxAal5PacketSize;
    #define MSNdis_AtmMaxAal5PacketSize_NdisAtmMaxAal5PacketSize_SIZE sizeof(ULONG)
    #define MSNdis_AtmMaxAal5PacketSize_NdisAtmMaxAal5PacketSize_ID 1

} MSNdis_AtmMaxAal5PacketSize, *PMSNdis_AtmMaxAal5PacketSize;

#define MSNdis_AtmMaxAal5PacketSize_SIZE (FIELD_OFFSET(MSNdis_AtmMaxAal5PacketSize, NdisAtmMaxAal5PacketSize) + MSNdis_AtmMaxAal5PacketSize_NdisAtmMaxAal5PacketSize_SIZE)

// MSNdis_AtmReceiveCellsOk - MSNdis_AtmReceiveCellsOk
#define MSNdis_AtmReceiveCellsOkGuid \
    { 0x0a21480a,0xe35f,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmReceiveCellsOk_GUID, \
            0x0a21480a,0xe35f,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmReceiveCellsOk
{
    // 
    ULONGLONG NdisAtmReceiveCellsOk;
    #define MSNdis_AtmReceiveCellsOk_NdisAtmReceiveCellsOk_SIZE sizeof(ULONGLONG)
    #define MSNdis_AtmReceiveCellsOk_NdisAtmReceiveCellsOk_ID 1

} MSNdis_AtmReceiveCellsOk, *PMSNdis_AtmReceiveCellsOk;

#define MSNdis_AtmReceiveCellsOk_SIZE (FIELD_OFFSET(MSNdis_AtmReceiveCellsOk, NdisAtmReceiveCellsOk) + MSNdis_AtmReceiveCellsOk_NdisAtmReceiveCellsOk_SIZE)

// MSNdis_AtmTransmitCellsOk - MSNdis_AtmTransmitCellsOk
#define MSNdis_AtmTransmitCellsOkGuid \
    { 0x0a21480b,0xe35f,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmTransmitCellsOk_GUID, \
            0x0a21480b,0xe35f,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmTransmitCellsOk
{
    // 
    ULONGLONG NdisAtmTransmitCellsOk;
    #define MSNdis_AtmTransmitCellsOk_NdisAtmTransmitCellsOk_SIZE sizeof(ULONGLONG)
    #define MSNdis_AtmTransmitCellsOk_NdisAtmTransmitCellsOk_ID 1

} MSNdis_AtmTransmitCellsOk, *PMSNdis_AtmTransmitCellsOk;

#define MSNdis_AtmTransmitCellsOk_SIZE (FIELD_OFFSET(MSNdis_AtmTransmitCellsOk, NdisAtmTransmitCellsOk) + MSNdis_AtmTransmitCellsOk_NdisAtmTransmitCellsOk_SIZE)

// MSNdis_AtmReceiveCellsDropped - MSNdis_AtmReceiveCellsDropped
#define MSNdis_AtmReceiveCellsDroppedGuid \
    { 0x0a21480c,0xe35f,0x11d0, { 0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_AtmReceiveCellsDropped_GUID, \
            0x0a21480c,0xe35f,0x11d0,0x96,0x92,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_AtmReceiveCellsDropped
{
    // 
    ULONGLONG NdisAtmReceiveCellsDropped;
    #define MSNdis_AtmReceiveCellsDropped_NdisAtmReceiveCellsDropped_SIZE sizeof(ULONGLONG)
    #define MSNdis_AtmReceiveCellsDropped_NdisAtmReceiveCellsDropped_ID 1

} MSNdis_AtmReceiveCellsDropped, *PMSNdis_AtmReceiveCellsDropped;

#define MSNdis_AtmReceiveCellsDropped_SIZE (FIELD_OFFSET(MSNdis_AtmReceiveCellsDropped, NdisAtmReceiveCellsDropped) + MSNdis_AtmReceiveCellsDropped_NdisAtmReceiveCellsDropped_SIZE)

// MSNdis_EthernetPermanentAddress - MSNdis_EthernetPermanentAddress
#define MSNdis_EthernetPermanentAddressGuid \
    { 0x447956ff,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EthernetPermanentAddress_GUID, \
            0x447956ff,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_EthernetPermanentAddress
{
    // 
    MSNdis_NetworkAddress NdisPermanentAddress;
    #define MSNdis_EthernetPermanentAddress_NdisPermanentAddress_SIZE sizeof(MSNdis_NetworkAddress)
    #define MSNdis_EthernetPermanentAddress_NdisPermanentAddress_ID 1

} MSNdis_EthernetPermanentAddress, *PMSNdis_EthernetPermanentAddress;

#define MSNdis_EthernetPermanentAddress_SIZE (FIELD_OFFSET(MSNdis_EthernetPermanentAddress, NdisPermanentAddress) + MSNdis_EthernetPermanentAddress_NdisPermanentAddress_SIZE)

// MSNdis_EthernetCurrentAddress - MSNdis_EthernetCurrentAddress
#define MSNdis_EthernetCurrentAddressGuid \
    { 0x44795700,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EthernetCurrentAddress_GUID, \
            0x44795700,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_EthernetCurrentAddress
{
    // 
    MSNdis_NetworkAddress NdisCurrentAddress;
    #define MSNdis_EthernetCurrentAddress_NdisCurrentAddress_SIZE sizeof(MSNdis_NetworkAddress)
    #define MSNdis_EthernetCurrentAddress_NdisCurrentAddress_ID 1

} MSNdis_EthernetCurrentAddress, *PMSNdis_EthernetCurrentAddress;

#define MSNdis_EthernetCurrentAddress_SIZE (FIELD_OFFSET(MSNdis_EthernetCurrentAddress, NdisCurrentAddress) + MSNdis_EthernetCurrentAddress_NdisCurrentAddress_SIZE)

// MSNdis_EthernetMulticastList - MSNdis_EthernetMulticastList
#define MSNdis_EthernetMulticastListGuid \
    { 0x44795701,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EthernetMulticastList_GUID, \
            0x44795701,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_EthernetMulticastList
{
    // 
    ULONG NumberElements;
    #define MSNdis_EthernetMulticastList_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_EthernetMulticastList_NumberElements_ID 1

    // 
    MSNdis_NetworkAddress NdisMulticastList[1];
    #define MSNdis_EthernetMulticastList_NdisMulticastList_ID 2

} MSNdis_EthernetMulticastList, *PMSNdis_EthernetMulticastList;

// MSNdis_EthernetMaximumMulticastListSize - MSNdis_EthernetMaximumMulticastListSize
#define MSNdis_EthernetMaximumMulticastListSizeGuid \
    { 0x44795702,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EthernetMaximumMulticastListSize_GUID, \
            0x44795702,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_EthernetMaximumMulticastListSize
{
    // 
    ULONG NdisEthernetMaximumMulticastListSize;
    #define MSNdis_EthernetMaximumMulticastListSize_NdisEthernetMaximumMulticastListSize_SIZE sizeof(ULONG)
    #define MSNdis_EthernetMaximumMulticastListSize_NdisEthernetMaximumMulticastListSize_ID 1

} MSNdis_EthernetMaximumMulticastListSize, *PMSNdis_EthernetMaximumMulticastListSize;

#define MSNdis_EthernetMaximumMulticastListSize_SIZE (FIELD_OFFSET(MSNdis_EthernetMaximumMulticastListSize, NdisEthernetMaximumMulticastListSize) + MSNdis_EthernetMaximumMulticastListSize_NdisEthernetMaximumMulticastListSize_SIZE)

// MSNdis_EthernetMacOptions - MSNdis_EthernetMacOptions
#define MSNdis_EthernetMacOptionsGuid \
    { 0x44795703,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EthernetMacOptions_GUID, \
            0x44795703,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_EthernetMacOptions
{
    // 
    ULONG NdisEthernetMacOptions;
    #define MSNdis_EthernetMacOptions_NdisEthernetMacOptions_SIZE sizeof(ULONG)
    #define MSNdis_EthernetMacOptions_NdisEthernetMacOptions_ID 1

} MSNdis_EthernetMacOptions, *PMSNdis_EthernetMacOptions;

#define MSNdis_EthernetMacOptions_SIZE (FIELD_OFFSET(MSNdis_EthernetMacOptions, NdisEthernetMacOptions) + MSNdis_EthernetMacOptions_NdisEthernetMacOptions_SIZE)

// MSNdis_EthernetReceiveErrorAlignment - MSNdis_EthernetReceiveErrorAlignment
#define MSNdis_EthernetReceiveErrorAlignmentGuid \
    { 0x44795704,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EthernetReceiveErrorAlignment_GUID, \
            0x44795704,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_EthernetReceiveErrorAlignment
{
    // 
    ULONG NdisEthernetReceiveErrorAlignment;
    #define MSNdis_EthernetReceiveErrorAlignment_NdisEthernetReceiveErrorAlignment_SIZE sizeof(ULONG)
    #define MSNdis_EthernetReceiveErrorAlignment_NdisEthernetReceiveErrorAlignment_ID 1

} MSNdis_EthernetReceiveErrorAlignment, *PMSNdis_EthernetReceiveErrorAlignment;

#define MSNdis_EthernetReceiveErrorAlignment_SIZE (FIELD_OFFSET(MSNdis_EthernetReceiveErrorAlignment, NdisEthernetReceiveErrorAlignment) + MSNdis_EthernetReceiveErrorAlignment_NdisEthernetReceiveErrorAlignment_SIZE)

// MSNdis_EthernetOneTransmitCollision - MSNdis_EthernetOneTransmitCollision
#define MSNdis_EthernetOneTransmitCollisionGuid \
    { 0x44795705,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EthernetOneTransmitCollision_GUID, \
            0x44795705,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_EthernetOneTransmitCollision
{
    // 
    ULONG NdisEthernetOneTransmitCollision;
    #define MSNdis_EthernetOneTransmitCollision_NdisEthernetOneTransmitCollision_SIZE sizeof(ULONG)
    #define MSNdis_EthernetOneTransmitCollision_NdisEthernetOneTransmitCollision_ID 1

} MSNdis_EthernetOneTransmitCollision, *PMSNdis_EthernetOneTransmitCollision;

#define MSNdis_EthernetOneTransmitCollision_SIZE (FIELD_OFFSET(MSNdis_EthernetOneTransmitCollision, NdisEthernetOneTransmitCollision) + MSNdis_EthernetOneTransmitCollision_NdisEthernetOneTransmitCollision_SIZE)

// MSNdis_EthernetMoreTransmitCollisions - MSNdis_EthernetMoreTransmitCollisions
#define MSNdis_EthernetMoreTransmitCollisionsGuid \
    { 0x44795706,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EthernetMoreTransmitCollisions_GUID, \
            0x44795706,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_EthernetMoreTransmitCollisions
{
    // 
    ULONG NdisEthernetMoreTransmitCollisions;
    #define MSNdis_EthernetMoreTransmitCollisions_NdisEthernetMoreTransmitCollisions_SIZE sizeof(ULONG)
    #define MSNdis_EthernetMoreTransmitCollisions_NdisEthernetMoreTransmitCollisions_ID 1

} MSNdis_EthernetMoreTransmitCollisions, *PMSNdis_EthernetMoreTransmitCollisions;

#define MSNdis_EthernetMoreTransmitCollisions_SIZE (FIELD_OFFSET(MSNdis_EthernetMoreTransmitCollisions, NdisEthernetMoreTransmitCollisions) + MSNdis_EthernetMoreTransmitCollisions_NdisEthernetMoreTransmitCollisions_SIZE)

// MSNdis_TokenRingPermanentAddress - MSNdis_TokenRingPermanentAddress
#define MSNdis_TokenRingPermanentAddressGuid \
    { 0x44795707,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TokenRingPermanentAddress_GUID, \
            0x44795707,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TokenRingPermanentAddress
{
    // 
    MSNdis_NetworkAddress NdisPermanentAddress;
    #define MSNdis_TokenRingPermanentAddress_NdisPermanentAddress_SIZE sizeof(MSNdis_NetworkAddress)
    #define MSNdis_TokenRingPermanentAddress_NdisPermanentAddress_ID 1

} MSNdis_TokenRingPermanentAddress, *PMSNdis_TokenRingPermanentAddress;

#define MSNdis_TokenRingPermanentAddress_SIZE (FIELD_OFFSET(MSNdis_TokenRingPermanentAddress, NdisPermanentAddress) + MSNdis_TokenRingPermanentAddress_NdisPermanentAddress_SIZE)

// MSNdis_TokenRingCurrentAddress - MSNdis_TokenRingCurrentAddress
#define MSNdis_TokenRingCurrentAddressGuid \
    { 0x44795708,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TokenRingCurrentAddress_GUID, \
            0x44795708,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TokenRingCurrentAddress
{
    // 
    MSNdis_NetworkAddress NdisCurrentAddress;
    #define MSNdis_TokenRingCurrentAddress_NdisCurrentAddress_SIZE sizeof(MSNdis_NetworkAddress)
    #define MSNdis_TokenRingCurrentAddress_NdisCurrentAddress_ID 1

} MSNdis_TokenRingCurrentAddress, *PMSNdis_TokenRingCurrentAddress;

#define MSNdis_TokenRingCurrentAddress_SIZE (FIELD_OFFSET(MSNdis_TokenRingCurrentAddress, NdisCurrentAddress) + MSNdis_TokenRingCurrentAddress_NdisCurrentAddress_SIZE)

// MSNdis_TokenRingCurrentFunctional - MSNdis_TokenRingCurrentFunctional
#define MSNdis_TokenRingCurrentFunctionalGuid \
    { 0x44795709,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TokenRingCurrentFunctional_GUID, \
            0x44795709,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TokenRingCurrentFunctional
{
    // 
    ULONG NdisTokenRingCurrentFunctional;
    #define MSNdis_TokenRingCurrentFunctional_NdisTokenRingCurrentFunctional_SIZE sizeof(ULONG)
    #define MSNdis_TokenRingCurrentFunctional_NdisTokenRingCurrentFunctional_ID 1

} MSNdis_TokenRingCurrentFunctional, *PMSNdis_TokenRingCurrentFunctional;

#define MSNdis_TokenRingCurrentFunctional_SIZE (FIELD_OFFSET(MSNdis_TokenRingCurrentFunctional, NdisTokenRingCurrentFunctional) + MSNdis_TokenRingCurrentFunctional_NdisTokenRingCurrentFunctional_SIZE)

// MSNdis_TokenRingCurrentGroup - MSNdis_TokenRingCurrentGroup
#define MSNdis_TokenRingCurrentGroupGuid \
    { 0x4479570a,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TokenRingCurrentGroup_GUID, \
            0x4479570a,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TokenRingCurrentGroup
{
    // 
    ULONG NdisTokenRingCurrentGroup;
    #define MSNdis_TokenRingCurrentGroup_NdisTokenRingCurrentGroup_SIZE sizeof(ULONG)
    #define MSNdis_TokenRingCurrentGroup_NdisTokenRingCurrentGroup_ID 1

} MSNdis_TokenRingCurrentGroup, *PMSNdis_TokenRingCurrentGroup;

#define MSNdis_TokenRingCurrentGroup_SIZE (FIELD_OFFSET(MSNdis_TokenRingCurrentGroup, NdisTokenRingCurrentGroup) + MSNdis_TokenRingCurrentGroup_NdisTokenRingCurrentGroup_SIZE)

// MSNdis_TokenRingLastOpenStatus - MSNdis_TokenRingLastOpenStatus
#define MSNdis_TokenRingLastOpenStatusGuid \
    { 0x4479570b,0xa61b,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TokenRingLastOpenStatus_GUID, \
            0x4479570b,0xa61b,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TokenRingLastOpenStatus
{
    // 
    ULONG NdisTokenRingLastOpenStatus;
    #define MSNdis_TokenRingLastOpenStatus_NdisTokenRingLastOpenStatus_SIZE sizeof(ULONG)
    #define MSNdis_TokenRingLastOpenStatus_NdisTokenRingLastOpenStatus_ID 1

} MSNdis_TokenRingLastOpenStatus, *PMSNdis_TokenRingLastOpenStatus;

#define MSNdis_TokenRingLastOpenStatus_SIZE (FIELD_OFFSET(MSNdis_TokenRingLastOpenStatus, NdisTokenRingLastOpenStatus) + MSNdis_TokenRingLastOpenStatus_NdisTokenRingLastOpenStatus_SIZE)

// MSNdis_TokenRingCurrentRingStatus - MSNdis_TokenRingCurrentRingStatus
#define MSNdis_TokenRingCurrentRingStatusGuid \
    { 0x890a36ec,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TokenRingCurrentRingStatus_GUID, \
            0x890a36ec,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TokenRingCurrentRingStatus
{
    // 
    ULONG NdisTokenRingCurrentRingStatus;
    #define MSNdis_TokenRingCurrentRingStatus_NdisTokenRingCurrentRingStatus_SIZE sizeof(ULONG)
    #define MSNdis_TokenRingCurrentRingStatus_NdisTokenRingCurrentRingStatus_ID 1

} MSNdis_TokenRingCurrentRingStatus, *PMSNdis_TokenRingCurrentRingStatus;

#define MSNdis_TokenRingCurrentRingStatus_SIZE (FIELD_OFFSET(MSNdis_TokenRingCurrentRingStatus, NdisTokenRingCurrentRingStatus) + MSNdis_TokenRingCurrentRingStatus_NdisTokenRingCurrentRingStatus_SIZE)

// MSNdis_TokenRingCurrentRingState - MSNdis_TokenRingCurrentRingState
#define MSNdis_TokenRingCurrentRingStateGuid \
    { 0xacf14032,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TokenRingCurrentRingState_GUID, \
            0xacf14032,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TokenRingCurrentRingState
{
    // 
    ULONG NdisTokenRingCurrentRingState;
    #define MSNdis_TokenRingCurrentRingState_NdisTokenRingCurrentRingState_SIZE sizeof(ULONG)
    #define MSNdis_TokenRingCurrentRingState_NdisTokenRingCurrentRingState_ID 1

} MSNdis_TokenRingCurrentRingState, *PMSNdis_TokenRingCurrentRingState;

#define MSNdis_TokenRingCurrentRingState_SIZE (FIELD_OFFSET(MSNdis_TokenRingCurrentRingState, NdisTokenRingCurrentRingState) + MSNdis_TokenRingCurrentRingState_NdisTokenRingCurrentRingState_SIZE)

// MSNdis_TokenRingLineErrors - MSNdis_TokenRingLineErrors
#define MSNdis_TokenRingLineErrorsGuid \
    { 0xacf14033,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TokenRingLineErrors_GUID, \
            0xacf14033,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TokenRingLineErrors
{
    // 
    ULONG NdisTokenRingLineErrors;
    #define MSNdis_TokenRingLineErrors_NdisTokenRingLineErrors_SIZE sizeof(ULONG)
    #define MSNdis_TokenRingLineErrors_NdisTokenRingLineErrors_ID 1

} MSNdis_TokenRingLineErrors, *PMSNdis_TokenRingLineErrors;

#define MSNdis_TokenRingLineErrors_SIZE (FIELD_OFFSET(MSNdis_TokenRingLineErrors, NdisTokenRingLineErrors) + MSNdis_TokenRingLineErrors_NdisTokenRingLineErrors_SIZE)

// MSNdis_TokenRingLostFrames - MSNdis_TokenRingLostFrames
#define MSNdis_TokenRingLostFramesGuid \
    { 0xacf14034,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TokenRingLostFrames_GUID, \
            0xacf14034,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_TokenRingLostFrames
{
    // 
    ULONG NdisTokenRingLostFrames;
    #define MSNdis_TokenRingLostFrames_NdisTokenRingLostFrames_SIZE sizeof(ULONG)
    #define MSNdis_TokenRingLostFrames_NdisTokenRingLostFrames_ID 1

} MSNdis_TokenRingLostFrames, *PMSNdis_TokenRingLostFrames;

#define MSNdis_TokenRingLostFrames_SIZE (FIELD_OFFSET(MSNdis_TokenRingLostFrames, NdisTokenRingLostFrames) + MSNdis_TokenRingLostFrames_NdisTokenRingLostFrames_SIZE)

// MSNdis_FddiLongPermanentAddress - MSNdis_FddiLongPermanentAddress
#define MSNdis_FddiLongPermanentAddressGuid \
    { 0xacf14035,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiLongPermanentAddress_GUID, \
            0xacf14035,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiLongPermanentAddress
{
    // 
    MSNdis_NetworkAddress NdisPermanentAddress;
    #define MSNdis_FddiLongPermanentAddress_NdisPermanentAddress_SIZE sizeof(MSNdis_NetworkAddress)
    #define MSNdis_FddiLongPermanentAddress_NdisPermanentAddress_ID 1

} MSNdis_FddiLongPermanentAddress, *PMSNdis_FddiLongPermanentAddress;

#define MSNdis_FddiLongPermanentAddress_SIZE (FIELD_OFFSET(MSNdis_FddiLongPermanentAddress, NdisPermanentAddress) + MSNdis_FddiLongPermanentAddress_NdisPermanentAddress_SIZE)

// MSNdis_FddiLongCurrentAddress - MSNdis_FddiLongCurrentAddress
#define MSNdis_FddiLongCurrentAddressGuid \
    { 0xacf14036,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiLongCurrentAddress_GUID, \
            0xacf14036,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiLongCurrentAddress
{
    // 
    MSNdis_NetworkAddress NdisCurrentAddress;
    #define MSNdis_FddiLongCurrentAddress_NdisCurrentAddress_SIZE sizeof(MSNdis_NetworkAddress)
    #define MSNdis_FddiLongCurrentAddress_NdisCurrentAddress_ID 1

} MSNdis_FddiLongCurrentAddress, *PMSNdis_FddiLongCurrentAddress;

#define MSNdis_FddiLongCurrentAddress_SIZE (FIELD_OFFSET(MSNdis_FddiLongCurrentAddress, NdisCurrentAddress) + MSNdis_FddiLongCurrentAddress_NdisCurrentAddress_SIZE)

// MSNdis_FddiLongMulticastList - MSNdis_FddiLongMulticastList
#define MSNdis_FddiLongMulticastListGuid \
    { 0xacf14037,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiLongMulticastList_GUID, \
            0xacf14037,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiLongMulticastList
{
    // 
    ULONG NumberElements;
    #define MSNdis_FddiLongMulticastList_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_FddiLongMulticastList_NumberElements_ID 1

    // 
    MSNdis_NetworkAddress NdisMulticastList[1];
    #define MSNdis_FddiLongMulticastList_NdisMulticastList_ID 2

} MSNdis_FddiLongMulticastList, *PMSNdis_FddiLongMulticastList;

// MSNdis_FddiLongMaximumListSize - MSNdis_FddiLongMaximumListSize
#define MSNdis_FddiLongMaximumListSizeGuid \
    { 0xacf14038,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiLongMaximumListSize_GUID, \
            0xacf14038,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiLongMaximumListSize
{
    // 
    ULONG NdisFddiLongMaximumListSize;
    #define MSNdis_FddiLongMaximumListSize_NdisFddiLongMaximumListSize_SIZE sizeof(ULONG)
    #define MSNdis_FddiLongMaximumListSize_NdisFddiLongMaximumListSize_ID 1

} MSNdis_FddiLongMaximumListSize, *PMSNdis_FddiLongMaximumListSize;

#define MSNdis_FddiLongMaximumListSize_SIZE (FIELD_OFFSET(MSNdis_FddiLongMaximumListSize, NdisFddiLongMaximumListSize) + MSNdis_FddiLongMaximumListSize_NdisFddiLongMaximumListSize_SIZE)

// MSNdis_FddiShortPermanentAddress - MSNdis_FddiShortPermanentAddress
#define MSNdis_FddiShortPermanentAddressGuid \
    { 0xacf14039,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiShortPermanentAddress_GUID, \
            0xacf14039,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiShortPermanentAddress
{
    // 
    MSNdis_NetworkShortAddress NdisPermanentAddress;
    #define MSNdis_FddiShortPermanentAddress_NdisPermanentAddress_SIZE sizeof(MSNdis_NetworkShortAddress)
    #define MSNdis_FddiShortPermanentAddress_NdisPermanentAddress_ID 1

} MSNdis_FddiShortPermanentAddress, *PMSNdis_FddiShortPermanentAddress;

#define MSNdis_FddiShortPermanentAddress_SIZE (FIELD_OFFSET(MSNdis_FddiShortPermanentAddress, NdisPermanentAddress) + MSNdis_FddiShortPermanentAddress_NdisPermanentAddress_SIZE)

// MSNdis_FddiShortCurrentAddress - MSNdis_FddiShortCurrentAddress
#define MSNdis_FddiShortCurrentAddressGuid \
    { 0xacf1403a,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiShortCurrentAddress_GUID, \
            0xacf1403a,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiShortCurrentAddress
{
    // 
    MSNdis_NetworkShortAddress NdisCurrentAddress;
    #define MSNdis_FddiShortCurrentAddress_NdisCurrentAddress_SIZE sizeof(MSNdis_NetworkShortAddress)
    #define MSNdis_FddiShortCurrentAddress_NdisCurrentAddress_ID 1

} MSNdis_FddiShortCurrentAddress, *PMSNdis_FddiShortCurrentAddress;

#define MSNdis_FddiShortCurrentAddress_SIZE (FIELD_OFFSET(MSNdis_FddiShortCurrentAddress, NdisCurrentAddress) + MSNdis_FddiShortCurrentAddress_NdisCurrentAddress_SIZE)

// MSNdis_FddiShortMulticastList - MSNdis_FddiShortMulticastList
#define MSNdis_FddiShortMulticastListGuid \
    { 0xacf1403b,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiShortMulticastList_GUID, \
            0xacf1403b,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiShortMulticastList
{
    // 
    ULONG NumberElements;
    #define MSNdis_FddiShortMulticastList_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_FddiShortMulticastList_NumberElements_ID 1

    // 
    MSNdis_NetworkShortAddress NdisMulticastList[1];
    #define MSNdis_FddiShortMulticastList_NdisMulticastList_ID 2

} MSNdis_FddiShortMulticastList, *PMSNdis_FddiShortMulticastList;

// MSNdis_FddiShortMaximumListSize - MSNdis_FddiShortMaximumListSize
#define MSNdis_FddiShortMaximumListSizeGuid \
    { 0xacf1403c,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiShortMaximumListSize_GUID, \
            0xacf1403c,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiShortMaximumListSize
{
    // 
    ULONG NdisFddiShortMaximumListSize;
    #define MSNdis_FddiShortMaximumListSize_NdisFddiShortMaximumListSize_SIZE sizeof(ULONG)
    #define MSNdis_FddiShortMaximumListSize_NdisFddiShortMaximumListSize_ID 1

} MSNdis_FddiShortMaximumListSize, *PMSNdis_FddiShortMaximumListSize;

#define MSNdis_FddiShortMaximumListSize_SIZE (FIELD_OFFSET(MSNdis_FddiShortMaximumListSize, NdisFddiShortMaximumListSize) + MSNdis_FddiShortMaximumListSize_NdisFddiShortMaximumListSize_SIZE)

// MSNdis_FddiAttachmentType - MSNdis_FddiAttachmentType
#define MSNdis_FddiAttachmentTypeGuid \
    { 0xacf1403d,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiAttachmentType_GUID, \
            0xacf1403d,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiAttachmentType
{
    // 
    ULONG NdisFddiAttachmentType;
    #define MSNdis_FddiAttachmentType_NdisFddiAttachmentType_SIZE sizeof(ULONG)
    #define MSNdis_FddiAttachmentType_NdisFddiAttachmentType_ID 1

} MSNdis_FddiAttachmentType, *PMSNdis_FddiAttachmentType;

#define MSNdis_FddiAttachmentType_SIZE (FIELD_OFFSET(MSNdis_FddiAttachmentType, NdisFddiAttachmentType) + MSNdis_FddiAttachmentType_NdisFddiAttachmentType_SIZE)

// MSNdis_FddiUpstreamNodeLong - MSNdis_FddiUpstreamNodeLong
#define MSNdis_FddiUpstreamNodeLongGuid \
    { 0xacf1403e,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiUpstreamNodeLong_GUID, \
            0xacf1403e,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiUpstreamNodeLong
{
    // 
    MSNdis_NetworkAddress NdisFddiUpstreamNodeLong;
    #define MSNdis_FddiUpstreamNodeLong_NdisFddiUpstreamNodeLong_SIZE sizeof(MSNdis_NetworkAddress)
    #define MSNdis_FddiUpstreamNodeLong_NdisFddiUpstreamNodeLong_ID 1

} MSNdis_FddiUpstreamNodeLong, *PMSNdis_FddiUpstreamNodeLong;

#define MSNdis_FddiUpstreamNodeLong_SIZE (FIELD_OFFSET(MSNdis_FddiUpstreamNodeLong, NdisFddiUpstreamNodeLong) + MSNdis_FddiUpstreamNodeLong_NdisFddiUpstreamNodeLong_SIZE)

// MSNdis_FddiDownstreamNodeLong - MSNdis_FddiDownstreamNodeLong
#define MSNdis_FddiDownstreamNodeLongGuid \
    { 0xacf1403f,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiDownstreamNodeLong_GUID, \
            0xacf1403f,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiDownstreamNodeLong
{
    // 
    MSNdis_NetworkAddress NdisFddiDownstreamNodeLong;
    #define MSNdis_FddiDownstreamNodeLong_NdisFddiDownstreamNodeLong_SIZE sizeof(MSNdis_NetworkAddress)
    #define MSNdis_FddiDownstreamNodeLong_NdisFddiDownstreamNodeLong_ID 1

} MSNdis_FddiDownstreamNodeLong, *PMSNdis_FddiDownstreamNodeLong;

#define MSNdis_FddiDownstreamNodeLong_SIZE (FIELD_OFFSET(MSNdis_FddiDownstreamNodeLong, NdisFddiDownstreamNodeLong) + MSNdis_FddiDownstreamNodeLong_NdisFddiDownstreamNodeLong_SIZE)

// MSNdis_FddiFrameErrors - MSNdis_FddiFrameErrors
#define MSNdis_FddiFrameErrorsGuid \
    { 0xacf14040,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiFrameErrors_GUID, \
            0xacf14040,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiFrameErrors
{
    // 
    ULONG NdisFddiFrameErrors;
    #define MSNdis_FddiFrameErrors_NdisFddiFrameErrors_SIZE sizeof(ULONG)
    #define MSNdis_FddiFrameErrors_NdisFddiFrameErrors_ID 1

} MSNdis_FddiFrameErrors, *PMSNdis_FddiFrameErrors;

#define MSNdis_FddiFrameErrors_SIZE (FIELD_OFFSET(MSNdis_FddiFrameErrors, NdisFddiFrameErrors) + MSNdis_FddiFrameErrors_NdisFddiFrameErrors_SIZE)

// MSNdis_FddiFramesLost - MSNdis_FddiFramesLost
#define MSNdis_FddiFramesLostGuid \
    { 0xacf14041,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiFramesLost_GUID, \
            0xacf14041,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiFramesLost
{
    // 
    ULONG NdisFddiFramesLost;
    #define MSNdis_FddiFramesLost_NdisFddiFramesLost_SIZE sizeof(ULONG)
    #define MSNdis_FddiFramesLost_NdisFddiFramesLost_ID 1

} MSNdis_FddiFramesLost, *PMSNdis_FddiFramesLost;

#define MSNdis_FddiFramesLost_SIZE (FIELD_OFFSET(MSNdis_FddiFramesLost, NdisFddiFramesLost) + MSNdis_FddiFramesLost_NdisFddiFramesLost_SIZE)

// MSNdis_FddiRingManagmentState - MSNdis_FddiRingManagmentState
#define MSNdis_FddiRingManagmentStateGuid \
    { 0xacf14042,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiRingManagmentState_GUID, \
            0xacf14042,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiRingManagmentState
{
    // 
    ULONG NdisFddiRingManagmentState;
    #define MSNdis_FddiRingManagmentState_NdisFddiRingManagmentState_SIZE sizeof(ULONG)
    #define MSNdis_FddiRingManagmentState_NdisFddiRingManagmentState_ID 1

} MSNdis_FddiRingManagmentState, *PMSNdis_FddiRingManagmentState;

#define MSNdis_FddiRingManagmentState_SIZE (FIELD_OFFSET(MSNdis_FddiRingManagmentState, NdisFddiRingManagmentState) + MSNdis_FddiRingManagmentState_NdisFddiRingManagmentState_SIZE)

// MSNdis_FddiLctFailures - MSNdis_FddiLctFailures
#define MSNdis_FddiLctFailuresGuid \
    { 0xacf14043,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiLctFailures_GUID, \
            0xacf14043,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiLctFailures
{
    // 
    ULONG NdisFddiLctFailures;
    #define MSNdis_FddiLctFailures_NdisFddiLctFailures_SIZE sizeof(ULONG)
    #define MSNdis_FddiLctFailures_NdisFddiLctFailures_ID 1

} MSNdis_FddiLctFailures, *PMSNdis_FddiLctFailures;

#define MSNdis_FddiLctFailures_SIZE (FIELD_OFFSET(MSNdis_FddiLctFailures, NdisFddiLctFailures) + MSNdis_FddiLctFailures_NdisFddiLctFailures_SIZE)

// MSNdis_FddiLemRejects - MSNdis_FddiLemRejects
#define MSNdis_FddiLemRejectsGuid \
    { 0xacf14044,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiLemRejects_GUID, \
            0xacf14044,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiLemRejects
{
    // 
    ULONG NdisFddiLemRejects;
    #define MSNdis_FddiLemRejects_NdisFddiLemRejects_SIZE sizeof(ULONG)
    #define MSNdis_FddiLemRejects_NdisFddiLemRejects_ID 1

} MSNdis_FddiLemRejects, *PMSNdis_FddiLemRejects;

#define MSNdis_FddiLemRejects_SIZE (FIELD_OFFSET(MSNdis_FddiLemRejects, NdisFddiLemRejects) + MSNdis_FddiLemRejects_NdisFddiLemRejects_SIZE)

// MSNdis_FddiLConnectionState - MSNdis_FddiLConnectionState
#define MSNdis_FddiLConnectionStateGuid \
    { 0xacf14045,0xa61c,0x11d0, { 0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_FddiLConnectionState_GUID, \
            0xacf14045,0xa61c,0x11d0,0x8d,0xd4,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_FddiLConnectionState
{
    // 
    ULONG NdisFddiLConnectionState;
    #define MSNdis_FddiLConnectionState_NdisFddiLConnectionState_SIZE sizeof(ULONG)
    #define MSNdis_FddiLConnectionState_NdisFddiLConnectionState_ID 1

} MSNdis_FddiLConnectionState, *PMSNdis_FddiLConnectionState;

#define MSNdis_FddiLConnectionState_SIZE (FIELD_OFFSET(MSNdis_FddiLConnectionState, NdisFddiLConnectionState) + MSNdis_FddiLConnectionState_NdisFddiLConnectionState_SIZE)

// MSNdis_ObjectHeader - MSNdis_ObjectHeader
#define MSNdis_ObjectHeaderGuid \
    { 0x2b1831b2,0x2216,0x4ede, { 0xa4,0x69,0x9f,0xe3,0xdd,0x6d,0x5a,0x7e } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ObjectHeader_GUID, \
            0x2b1831b2,0x2216,0x4ede,0xa4,0x69,0x9f,0xe3,0xdd,0x6d,0x5a,0x7e);
#endif


typedef struct _MSNdis_ObjectHeader
{
    // 
    UCHAR Type;
    #define MSNdis_ObjectHeader_Type_SIZE sizeof(UCHAR)
    #define MSNdis_ObjectHeader_Type_ID 1

    // 
    UCHAR Revision;
    #define MSNdis_ObjectHeader_Revision_SIZE sizeof(UCHAR)
    #define MSNdis_ObjectHeader_Revision_ID 2

    // 
    USHORT Size;
    #define MSNdis_ObjectHeader_Size_SIZE sizeof(USHORT)
    #define MSNdis_ObjectHeader_Size_ID 3

} MSNdis_ObjectHeader, *PMSNdis_ObjectHeader;

#define MSNdis_ObjectHeader_SIZE (FIELD_OFFSET(MSNdis_ObjectHeader, Size) + MSNdis_ObjectHeader_Size_SIZE)

// MSNdis_WmiMethodHeader - MSNdis_WmiMethodHeader
#define MSNdis_WmiMethodHeaderGuid \
    { 0xe3eac9dd,0x2fd3,0x4963, { 0xbf,0xfd,0xb4,0x69,0x28,0x88,0xc0,0xd4 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiMethodHeader_GUID, \
            0xe3eac9dd,0x2fd3,0x4963,0xbf,0xfd,0xb4,0x69,0x28,0x88,0xc0,0xd4);
#endif


typedef struct _MSNdis_WmiMethodHeader
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_WmiMethodHeader_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_WmiMethodHeader_Header_ID 1

    // 
    ULONG PortNumber;
    #define MSNdis_WmiMethodHeader_PortNumber_SIZE sizeof(ULONG)
    #define MSNdis_WmiMethodHeader_PortNumber_ID 2

    // 
    ULONGLONG NetLuid;
    #define MSNdis_WmiMethodHeader_NetLuid_SIZE sizeof(ULONGLONG)
    #define MSNdis_WmiMethodHeader_NetLuid_ID 3

    // 
    ULONGLONG RequestId;
    #define MSNdis_WmiMethodHeader_RequestId_SIZE sizeof(ULONGLONG)
    #define MSNdis_WmiMethodHeader_RequestId_ID 4

    // 
    ULONG Timeout;
    #define MSNdis_WmiMethodHeader_Timeout_SIZE sizeof(ULONG)
    #define MSNdis_WmiMethodHeader_Timeout_ID 5

    // 
    ULONG Padding;
    #define MSNdis_WmiMethodHeader_Padding_SIZE sizeof(ULONG)
    #define MSNdis_WmiMethodHeader_Padding_ID 6

} MSNdis_WmiMethodHeader, *PMSNdis_WmiMethodHeader;

#define MSNdis_WmiMethodHeader_SIZE (FIELD_OFFSET(MSNdis_WmiMethodHeader, Padding) + MSNdis_WmiMethodHeader_Padding_SIZE)

// MSNdis_WmiSetHeader - MSNdis_WmiSetHeader
#define MSNdis_WmiSetHeaderGuid \
    { 0x3b5605d8,0x1aaf,0x4ff6, { 0x85,0xb9,0xbc,0x5f,0xb9,0x73,0xdc,0x54 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiSetHeader_GUID, \
            0x3b5605d8,0x1aaf,0x4ff6,0x85,0xb9,0xbc,0x5f,0xb9,0x73,0xdc,0x54);
#endif


typedef struct _MSNdis_WmiSetHeader
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_WmiSetHeader_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_WmiSetHeader_Header_ID 1

    // 
    ULONG PortNumber;
    #define MSNdis_WmiSetHeader_PortNumber_SIZE sizeof(ULONG)
    #define MSNdis_WmiSetHeader_PortNumber_ID 2

    // 
    ULONGLONG NetLuid;
    #define MSNdis_WmiSetHeader_NetLuid_SIZE sizeof(ULONGLONG)
    #define MSNdis_WmiSetHeader_NetLuid_ID 3

    // 
    ULONGLONG RequestId;
    #define MSNdis_WmiSetHeader_RequestId_SIZE sizeof(ULONGLONG)
    #define MSNdis_WmiSetHeader_RequestId_ID 4

    // 
    ULONG Timeout;
    #define MSNdis_WmiSetHeader_Timeout_SIZE sizeof(ULONG)
    #define MSNdis_WmiSetHeader_Timeout_ID 5

    // 
    ULONG Padding;
    #define MSNdis_WmiSetHeader_Padding_SIZE sizeof(ULONG)
    #define MSNdis_WmiSetHeader_Padding_ID 6

} MSNdis_WmiSetHeader, *PMSNdis_WmiSetHeader;

#define MSNdis_WmiSetHeader_SIZE (FIELD_OFFSET(MSNdis_WmiSetHeader, Padding) + MSNdis_WmiSetHeader_Padding_SIZE)

// MSNdis_WmiOutputInfo - MSNdis_WmiOutputInfo
#define MSNdis_WmiOutputInfoGuid \
    { 0x7510bb9d,0xdf70,0x4f7e, { 0xba,0x07,0xe2,0x9d,0x33,0x0b,0x3c,0xc5 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiOutputInfo_GUID, \
            0x7510bb9d,0xdf70,0x4f7e,0xba,0x07,0xe2,0x9d,0x33,0x0b,0x3c,0xc5);
#endif


typedef struct _MSNdis_WmiOutputInfo
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_WmiOutputInfo_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_WmiOutputInfo_Header_ID 1

    // 
    ULONG Flags;
    #define MSNdis_WmiOutputInfo_Flags_SIZE sizeof(ULONG)
    #define MSNdis_WmiOutputInfo_Flags_ID 2

    // 
    UCHAR SupportedRevision;
    #define MSNdis_WmiOutputInfo_SupportedRevision_SIZE sizeof(UCHAR)
    #define MSNdis_WmiOutputInfo_SupportedRevision_ID 3

    // 
    UCHAR Padding1;
    #define MSNdis_WmiOutputInfo_Padding1_SIZE sizeof(UCHAR)
    #define MSNdis_WmiOutputInfo_Padding1_ID 4

    // 
    USHORT Padding2;
    #define MSNdis_WmiOutputInfo_Padding2_SIZE sizeof(USHORT)
    #define MSNdis_WmiOutputInfo_Padding2_ID 5

    // 
    ULONG DataOffset;
    #define MSNdis_WmiOutputInfo_DataOffset_SIZE sizeof(ULONG)
    #define MSNdis_WmiOutputInfo_DataOffset_ID 6

} MSNdis_WmiOutputInfo, *PMSNdis_WmiOutputInfo;

#define MSNdis_WmiOutputInfo_SIZE (FIELD_OFFSET(MSNdis_WmiOutputInfo, DataOffset) + MSNdis_WmiOutputInfo_DataOffset_SIZE)

// MSNdis_WmiEnumAdapter - MSNdis_WmiEnumAdapter
#define MSNdis_WmiEnumAdapterGuid \
    { 0xe7001b59,0xc3d6,0x4537, { 0xb4,0x0e,0xa1,0x63,0xd5,0x16,0xe4,0xa3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiEnumAdapter_GUID, \
            0xe7001b59,0xc3d6,0x4537,0xb4,0x0e,0xa1,0x63,0xd5,0x16,0xe4,0xa3);
#endif


typedef struct _MSNdis_WmiEnumAdapter
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_WmiEnumAdapter_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_WmiEnumAdapter_Header_ID 1

    // 
    ULONG IfIndex;
    #define MSNdis_WmiEnumAdapter_IfIndex_SIZE sizeof(ULONG)
    #define MSNdis_WmiEnumAdapter_IfIndex_ID 2

    // 
    ULONGLONG NetLuid;
    #define MSNdis_WmiEnumAdapter_NetLuid_SIZE sizeof(ULONGLONG)
    #define MSNdis_WmiEnumAdapter_NetLuid_ID 3

    // 
    CHAR VariableData[1];
    #define MSNdis_WmiEnumAdapter_DeviceName_ID 4

} MSNdis_WmiEnumAdapter, *PMSNdis_WmiEnumAdapter;

// MSNdis_LinkStateData - MSNdis_LinkStateData
#define MSNdis_LinkStateDataGuid \
    { 0x5b26b94f,0x0272,0x4d4c, { 0x87,0x44,0xbd,0x84,0xbe,0x42,0x1f,0x3b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_LinkStateData_GUID, \
            0x5b26b94f,0x0272,0x4d4c,0x87,0x44,0xbd,0x84,0xbe,0x42,0x1f,0x3b);
#endif


typedef struct _MSNdis_LinkStateData
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_LinkStateData_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_LinkStateData_Header_ID 1

    // 
    ULONG MediaConnectState;
    #define MSNdis_LinkStateData_MediaConnectState_SIZE sizeof(ULONG)
    #define MSNdis_LinkStateData_MediaConnectState_ID 2

    // 
    ULONG MediaDuplexState;
    #define MSNdis_LinkStateData_MediaDuplexState_SIZE sizeof(ULONG)
    #define MSNdis_LinkStateData_MediaDuplexState_ID 3

    // 
    ULONGLONG XmitLinkSpeed;
    #define MSNdis_LinkStateData_XmitLinkSpeed_SIZE sizeof(ULONGLONG)
    #define MSNdis_LinkStateData_XmitLinkSpeed_ID 4

    // 
    ULONGLONG RcvLinkSpeed;
    #define MSNdis_LinkStateData_RcvLinkSpeed_SIZE sizeof(ULONGLONG)
    #define MSNdis_LinkStateData_RcvLinkSpeed_ID 5

    // 
    ULONG PauseFunctions;
    #define MSNdis_LinkStateData_PauseFunctions_SIZE sizeof(ULONG)
    #define MSNdis_LinkStateData_PauseFunctions_ID 6

    // 
    ULONG AutoNegotiationFlags;
    #define MSNdis_LinkStateData_AutoNegotiationFlags_SIZE sizeof(ULONG)
    #define MSNdis_LinkStateData_AutoNegotiationFlags_ID 7

} MSNdis_LinkStateData, *PMSNdis_LinkStateData;

#define MSNdis_LinkStateData_SIZE (FIELD_OFFSET(MSNdis_LinkStateData, AutoNegotiationFlags) + MSNdis_LinkStateData_AutoNegotiationFlags_SIZE)

// MSNdis_LinkParameters - MSNdis_LinkParameters
#define MSNdis_LinkParametersGuid \
    { 0x29380131,0xa312,0x4400, { 0xbe,0x0c,0x53,0x87,0x7a,0x41,0xc4,0x65 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_LinkParameters_GUID, \
            0x29380131,0xa312,0x4400,0xbe,0x0c,0x53,0x87,0x7a,0x41,0xc4,0x65);
#endif


typedef struct _MSNdis_LinkParameters
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_LinkParameters_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_LinkParameters_Header_ID 1

    // 
    ULONG MediaDuplexState;
    #define MSNdis_LinkParameters_MediaDuplexState_SIZE sizeof(ULONG)
    #define MSNdis_LinkParameters_MediaDuplexState_ID 2

    // 
    ULONGLONG XmitLinkSpeed;
    #define MSNdis_LinkParameters_XmitLinkSpeed_SIZE sizeof(ULONGLONG)
    #define MSNdis_LinkParameters_XmitLinkSpeed_ID 3

    // 
    ULONGLONG RcvLinkSpeed;
    #define MSNdis_LinkParameters_RcvLinkSpeed_SIZE sizeof(ULONGLONG)
    #define MSNdis_LinkParameters_RcvLinkSpeed_ID 4

    // 
    ULONG PauseFunctions;
    #define MSNdis_LinkParameters_PauseFunctions_SIZE sizeof(ULONG)
    #define MSNdis_LinkParameters_PauseFunctions_ID 5

    // 
    ULONG AutoNegotiationFlags;
    #define MSNdis_LinkParameters_AutoNegotiationFlags_SIZE sizeof(ULONG)
    #define MSNdis_LinkParameters_AutoNegotiationFlags_ID 6

} MSNdis_LinkParameters, *PMSNdis_LinkParameters;

#define MSNdis_LinkParameters_SIZE (FIELD_OFFSET(MSNdis_LinkParameters, AutoNegotiationFlags) + MSNdis_LinkParameters_AutoNegotiationFlags_SIZE)

// MSNdis_InterruptModerationParameters - MSNdis_InterruptModerationParameters
#define MSNdis_InterruptModerationParametersGuid \
    { 0x09f58643,0x31fb,0x45b5, { 0x85,0x2b,0x09,0xb4,0xd3,0xff,0x37,0x65 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_InterruptModerationParameters_GUID, \
            0x09f58643,0x31fb,0x45b5,0x85,0x2b,0x09,0xb4,0xd3,0xff,0x37,0x65);
#endif


typedef struct _MSNdis_InterruptModerationParameters
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_InterruptModerationParameters_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_InterruptModerationParameters_Header_ID 1

    // 
    ULONG Flags;
    #define MSNdis_InterruptModerationParameters_Flags_SIZE sizeof(ULONG)
    #define MSNdis_InterruptModerationParameters_Flags_ID 2

    // 
    ULONG InterruptModeration;
    #define MSNdis_InterruptModerationParameters_InterruptModeration_SIZE sizeof(ULONG)
    #define MSNdis_InterruptModerationParameters_InterruptModeration_ID 3

} MSNdis_InterruptModerationParameters, *PMSNdis_InterruptModerationParameters;

#define MSNdis_InterruptModerationParameters_SIZE (FIELD_OFFSET(MSNdis_InterruptModerationParameters, InterruptModeration) + MSNdis_InterruptModerationParameters_InterruptModeration_SIZE)

// MSNdis_StatisticsInfo - MSNdis_StatisticsInfo
#define MSNdis_StatisticsInfoGuid \
    { 0x8ecc74e1,0xba85,0x482e, { 0xaf,0xaf,0xb4,0xf8,0xb0,0x87,0xc0,0x6b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatisticsInfo_GUID, \
            0x8ecc74e1,0xba85,0x482e,0xaf,0xaf,0xb4,0xf8,0xb0,0x87,0xc0,0x6b);
#endif


typedef struct _MSNdis_StatisticsInfo
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_StatisticsInfo_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_StatisticsInfo_Header_ID 1

    // 
    ULONG SupportedStatistics;
    #define MSNdis_StatisticsInfo_SupportedStatistics_SIZE sizeof(ULONG)
    #define MSNdis_StatisticsInfo_SupportedStatistics_ID 2

    // 
    ULONGLONG ifInDiscards;
    #define MSNdis_StatisticsInfo_ifInDiscards_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifInDiscards_ID 3

    // 
    ULONGLONG ifInErrors;
    #define MSNdis_StatisticsInfo_ifInErrors_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifInErrors_ID 4

    // 
    ULONGLONG ifHCInOctets;
    #define MSNdis_StatisticsInfo_ifHCInOctets_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCInOctets_ID 5

    // 
    ULONGLONG ifHCInUcastPkts;
    #define MSNdis_StatisticsInfo_ifHCInUcastPkts_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCInUcastPkts_ID 6

    // 
    ULONGLONG ifHCInMulticastPkts;
    #define MSNdis_StatisticsInfo_ifHCInMulticastPkts_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCInMulticastPkts_ID 7

    // 
    ULONGLONG ifHCInBroadcastPkts;
    #define MSNdis_StatisticsInfo_ifHCInBroadcastPkts_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCInBroadcastPkts_ID 8

    // 
    ULONGLONG ifHCOutOctets;
    #define MSNdis_StatisticsInfo_ifHCOutOctets_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCOutOctets_ID 9

    // 
    ULONGLONG ifHCOutUcastPkts;
    #define MSNdis_StatisticsInfo_ifHCOutUcastPkts_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCOutUcastPkts_ID 10

    // 
    ULONGLONG ifHCOutMulticastPkts;
    #define MSNdis_StatisticsInfo_ifHCOutMulticastPkts_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCOutMulticastPkts_ID 11

    // 
    ULONGLONG ifHCOutBroadcastPkts;
    #define MSNdis_StatisticsInfo_ifHCOutBroadcastPkts_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCOutBroadcastPkts_ID 12

    // 
    ULONGLONG ifOutErrors;
    #define MSNdis_StatisticsInfo_ifOutErrors_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifOutErrors_ID 13

    // 
    ULONGLONG ifOutDiscards;
    #define MSNdis_StatisticsInfo_ifOutDiscards_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifOutDiscards_ID 14

    // 
    ULONGLONG ifHCInUcastOctets;
    #define MSNdis_StatisticsInfo_ifHCInUcastOctets_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCInUcastOctets_ID 15

    // 
    ULONGLONG ifHCInMulticastOctets;
    #define MSNdis_StatisticsInfo_ifHCInMulticastOctets_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCInMulticastOctets_ID 16

    // 
    ULONGLONG ifHCInBroadcastOctets;
    #define MSNdis_StatisticsInfo_ifHCInBroadcastOctets_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCInBroadcastOctets_ID 17

    // 
    ULONGLONG ifHCOutUcastOctets;
    #define MSNdis_StatisticsInfo_ifHCOutUcastOctets_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCOutUcastOctets_ID 18

    // 
    ULONGLONG ifHCOutMulticastOctets;
    #define MSNdis_StatisticsInfo_ifHCOutMulticastOctets_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCOutMulticastOctets_ID 19

    // 
    ULONGLONG ifHCOutBroadcastOctets;
    #define MSNdis_StatisticsInfo_ifHCOutBroadcastOctets_SIZE sizeof(ULONGLONG)
    #define MSNdis_StatisticsInfo_ifHCOutBroadcastOctets_ID 20

} MSNdis_StatisticsInfo, *PMSNdis_StatisticsInfo;

#define MSNdis_StatisticsInfo_SIZE (FIELD_OFFSET(MSNdis_StatisticsInfo, ifHCOutBroadcastOctets) + MSNdis_StatisticsInfo_ifHCOutBroadcastOctets_SIZE)

// MSNdis_PortStateData - MSNdis_PortStateData
#define MSNdis_PortStateDataGuid \
    { 0x8feae2c6,0xee28,0x469f, { 0x8b,0x5d,0x9f,0x74,0x3b,0xab,0x21,0xaa } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PortStateData_GUID, \
            0x8feae2c6,0xee28,0x469f,0x8b,0x5d,0x9f,0x74,0x3b,0xab,0x21,0xaa);
#endif


typedef struct _MSNdis_PortStateData
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_PortStateData_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_PortStateData_Header_ID 1

    // 
    ULONG MediaConnectState;
    #define MSNdis_PortStateData_MediaConnectState_SIZE sizeof(ULONG)
    #define MSNdis_PortStateData_MediaConnectState_ID 2

    // 
    ULONGLONG XmitLinkSpeed;
    #define MSNdis_PortStateData_XmitLinkSpeed_SIZE sizeof(ULONGLONG)
    #define MSNdis_PortStateData_XmitLinkSpeed_ID 3

    // 
    ULONGLONG RcvLinkSpeed;
    #define MSNdis_PortStateData_RcvLinkSpeed_SIZE sizeof(ULONGLONG)
    #define MSNdis_PortStateData_RcvLinkSpeed_ID 4

    // 
    ULONG Direction;
    #define MSNdis_PortStateData_Direction_SIZE sizeof(ULONG)
    #define MSNdis_PortStateData_Direction_ID 5

    // 
    ULONG SendControlState;
    #define MSNdis_PortStateData_SendControlState_SIZE sizeof(ULONG)
    #define MSNdis_PortStateData_SendControlState_ID 6

    // 
    ULONG RcvControlState;
    #define MSNdis_PortStateData_RcvControlState_SIZE sizeof(ULONG)
    #define MSNdis_PortStateData_RcvControlState_ID 7

    // 
    ULONG SendAuthorizationState;
    #define MSNdis_PortStateData_SendAuthorizationState_SIZE sizeof(ULONG)
    #define MSNdis_PortStateData_SendAuthorizationState_ID 8

    // 
    ULONG RcvAuthorizationState;
    #define MSNdis_PortStateData_RcvAuthorizationState_SIZE sizeof(ULONG)
    #define MSNdis_PortStateData_RcvAuthorizationState_ID 9

    // 
    ULONG Flags;
    #define MSNdis_PortStateData_Flags_SIZE sizeof(ULONG)
    #define MSNdis_PortStateData_Flags_ID 10

} MSNdis_PortStateData, *PMSNdis_PortStateData;

#define MSNdis_PortStateData_SIZE (FIELD_OFFSET(MSNdis_PortStateData, Flags) + MSNdis_PortStateData_Flags_SIZE)

// MSNdis_PortAuthParameters - MSNdis_PortAuthParameters
#define MSNdis_PortAuthParametersGuid \
    { 0x5c3bda24,0x8b64,0x4829, { 0xa5,0x87,0x8c,0xe7,0x19,0x15,0x2f,0xe2 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PortAuthParameters_GUID, \
            0x5c3bda24,0x8b64,0x4829,0xa5,0x87,0x8c,0xe7,0x19,0x15,0x2f,0xe2);
#endif


typedef struct _MSNdis_PortAuthParameters
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_PortAuthParameters_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_PortAuthParameters_Header_ID 1

    // 
    ULONG SendControlState;
    #define MSNdis_PortAuthParameters_SendControlState_SIZE sizeof(ULONG)
    #define MSNdis_PortAuthParameters_SendControlState_ID 2

    // 
    ULONG RcvControlState;
    #define MSNdis_PortAuthParameters_RcvControlState_SIZE sizeof(ULONG)
    #define MSNdis_PortAuthParameters_RcvControlState_ID 3

    // 
    ULONG SendAuthorizationState;
    #define MSNdis_PortAuthParameters_SendAuthorizationState_SIZE sizeof(ULONG)
    #define MSNdis_PortAuthParameters_SendAuthorizationState_ID 4

    // 
    ULONG RcvAuthorizationState;
    #define MSNdis_PortAuthParameters_RcvAuthorizationState_SIZE sizeof(ULONG)
    #define MSNdis_PortAuthParameters_RcvAuthorizationState_ID 5

} MSNdis_PortAuthParameters, *PMSNdis_PortAuthParameters;

#define MSNdis_PortAuthParameters_SIZE (FIELD_OFFSET(MSNdis_PortAuthParameters, RcvAuthorizationState) + MSNdis_PortAuthParameters_RcvAuthorizationState_SIZE)

// MSNdis_PortChar - MSNdis_PortChar
#define MSNdis_PortCharGuid \
    { 0xf5b7d202,0xe594,0x4aa3, { 0xbe,0x43,0x49,0x76,0x83,0x3c,0x78,0x40 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PortChar_GUID, \
            0xf5b7d202,0xe594,0x4aa3,0xbe,0x43,0x49,0x76,0x83,0x3c,0x78,0x40);
#endif


typedef struct _MSNdis_PortChar
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_PortChar_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_PortChar_Header_ID 1

    // 
    ULONG PortNumber;
    #define MSNdis_PortChar_PortNumber_SIZE sizeof(ULONG)
    #define MSNdis_PortChar_PortNumber_ID 2

    // 
    ULONG Flags;
    #define MSNdis_PortChar_Flags_SIZE sizeof(ULONG)
    #define MSNdis_PortChar_Flags_ID 3

    // 
    ULONG Type;
    #define MSNdis_PortChar_Type_SIZE sizeof(ULONG)
    #define MSNdis_PortChar_Type_ID 4

    // 
    ULONG MediaConnectState;
    #define MSNdis_PortChar_MediaConnectState_SIZE sizeof(ULONG)
    #define MSNdis_PortChar_MediaConnectState_ID 5

    // 
    ULONGLONG XmitLinkSpeed;
    #define MSNdis_PortChar_XmitLinkSpeed_SIZE sizeof(ULONGLONG)
    #define MSNdis_PortChar_XmitLinkSpeed_ID 6

    // 
    ULONGLONG RcvLinkSpeed;
    #define MSNdis_PortChar_RcvLinkSpeed_SIZE sizeof(ULONGLONG)
    #define MSNdis_PortChar_RcvLinkSpeed_ID 7

    // 
    ULONG Direction;
    #define MSNdis_PortChar_Direction_SIZE sizeof(ULONG)
    #define MSNdis_PortChar_Direction_ID 8

    // 
    ULONG SendControlState;
    #define MSNdis_PortChar_SendControlState_SIZE sizeof(ULONG)
    #define MSNdis_PortChar_SendControlState_ID 9

    // 
    ULONG RcvControlState;
    #define MSNdis_PortChar_RcvControlState_SIZE sizeof(ULONG)
    #define MSNdis_PortChar_RcvControlState_ID 10

    // 
    ULONG SendAuthorizationState;
    #define MSNdis_PortChar_SendAuthorizationState_SIZE sizeof(ULONG)
    #define MSNdis_PortChar_SendAuthorizationState_ID 11

    // 
    ULONG RcvAuthorizationState;
    #define MSNdis_PortChar_RcvAuthorizationState_SIZE sizeof(ULONG)
    #define MSNdis_PortChar_RcvAuthorizationState_ID 12

} MSNdis_PortChar, *PMSNdis_PortChar;

#define MSNdis_PortChar_SIZE (FIELD_OFFSET(MSNdis_PortChar, RcvAuthorizationState) + MSNdis_PortChar_RcvAuthorizationState_SIZE)

// MSNdis_PortArray - MSNdis_PortArray
#define MSNdis_PortArrayGuid \
    { 0x0fee8708,0xdf65,0x456e, { 0xb4,0xca,0xfa,0x62,0x32,0x66,0xa1,0x2a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PortArray_GUID, \
            0x0fee8708,0xdf65,0x456e,0xb4,0xca,0xfa,0x62,0x32,0x66,0xa1,0x2a);
#endif


typedef struct _MSNdis_PortArray
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_PortArray_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_PortArray_Header_ID 1

    // 
    ULONG NumberOfPorts;
    #define MSNdis_PortArray_NumberOfPorts_SIZE sizeof(ULONG)
    #define MSNdis_PortArray_NumberOfPorts_ID 2

    // 
    ULONG OffsetFirstPort;
    #define MSNdis_PortArray_OffsetFirstPort_SIZE sizeof(ULONG)
    #define MSNdis_PortArray_OffsetFirstPort_ID 3

    // 
    ULONG ElementSize;
    #define MSNdis_PortArray_ElementSize_SIZE sizeof(ULONG)
    #define MSNdis_PortArray_ElementSize_ID 4

    // 
    MSNdis_PortChar Port[1];
    #define MSNdis_PortArray_Port_ID 5

} MSNdis_PortArray, *PMSNdis_PortArray;

// MSNdis_PciDeviceProperty - MSNdis_PciDeviceProperty
#define MSNdis_PciDevicePropertyGuid \
    { 0x0573f70f,0xded8,0x401c, { 0x8b,0x56,0xa6,0x2b,0xb5,0x28,0xc0,0xe2 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PciDeviceProperty_GUID, \
            0x0573f70f,0xded8,0x401c,0x8b,0x56,0xa6,0x2b,0xb5,0x28,0xc0,0xe2);
#endif


typedef struct _MSNdis_PciDeviceProperty
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_PciDeviceProperty_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_PciDeviceProperty_Header_ID 1

    // 
    ULONG DeviceType;
    #define MSNdis_PciDeviceProperty_DeviceType_SIZE sizeof(ULONG)
    #define MSNdis_PciDeviceProperty_DeviceType_ID 2

    // 
    ULONG CurrentSpeedAndMode;
    #define MSNdis_PciDeviceProperty_CurrentSpeedAndMode_SIZE sizeof(ULONG)
    #define MSNdis_PciDeviceProperty_CurrentSpeedAndMode_ID 3

    // 
    ULONG CurrentPayloadSize;
    #define MSNdis_PciDeviceProperty_CurrentPayloadSize_SIZE sizeof(ULONG)
    #define MSNdis_PciDeviceProperty_CurrentPayloadSize_ID 4

    // 
    ULONG MaxPayloadSize;
    #define MSNdis_PciDeviceProperty_MaxPayloadSize_SIZE sizeof(ULONG)
    #define MSNdis_PciDeviceProperty_MaxPayloadSize_ID 5

    // 
    ULONG MaxReadRequestSize;
    #define MSNdis_PciDeviceProperty_MaxReadRequestSize_SIZE sizeof(ULONG)
    #define MSNdis_PciDeviceProperty_MaxReadRequestSize_ID 6

    // 
    ULONG CurrentLinkSpeed;
    #define MSNdis_PciDeviceProperty_CurrentLinkSpeed_SIZE sizeof(ULONG)
    #define MSNdis_PciDeviceProperty_CurrentLinkSpeed_ID 7

    // 
    ULONG CurrentLinkWidth;
    #define MSNdis_PciDeviceProperty_CurrentLinkWidth_SIZE sizeof(ULONG)
    #define MSNdis_PciDeviceProperty_CurrentLinkWidth_ID 8

    // 
    ULONG MaxLinkSpeed;
    #define MSNdis_PciDeviceProperty_MaxLinkSpeed_SIZE sizeof(ULONG)
    #define MSNdis_PciDeviceProperty_MaxLinkSpeed_ID 9

    // 
    ULONG MaxLinkWidth;
    #define MSNdis_PciDeviceProperty_MaxLinkWidth_SIZE sizeof(ULONG)
    #define MSNdis_PciDeviceProperty_MaxLinkWidth_ID 10

} MSNdis_PciDeviceProperty, *PMSNdis_PciDeviceProperty;

#define MSNdis_PciDeviceProperty_SIZE (FIELD_OFFSET(MSNdis_PciDeviceProperty, MaxLinkWidth) + MSNdis_PciDeviceProperty_MaxLinkWidth_SIZE)

// MSNdis_WmiTcpLargeSendOffloadV1_IPv4 - MSNdis_WmiTcpLargeSendOffloadV1_IPv4
#define MSNdis_WmiTcpLargeSendOffloadV1_IPv4Guid \
    { 0xd7673b11,0xe892,0x4a9d, { 0x8b,0xd8,0x76,0x1f,0xf2,0x56,0xed,0xd9 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiTcpLargeSendOffloadV1_IPv4_GUID, \
            0xd7673b11,0xe892,0x4a9d,0x8b,0xd8,0x76,0x1f,0xf2,0x56,0xed,0xd9);
#endif


typedef struct _MSNdis_WmiTcpLargeSendOffloadV1_IPv4
{
    // 
    ULONG Encapsulation;
    #define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_Encapsulation_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_Encapsulation_ID 1

    // 
    ULONG MaxOffLoadSize;
    #define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_MaxOffLoadSize_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_MaxOffLoadSize_ID 2

    // 
    ULONG MinSegmentCount;
    #define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_MinSegmentCount_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_MinSegmentCount_ID 3

    // 
    ULONG TcpOptions;
    #define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_TcpOptions_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_TcpOptions_ID 4

    // 
    ULONG IpOptions;
    #define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_IpOptions_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_IpOptions_ID 5

} MSNdis_WmiTcpLargeSendOffloadV1_IPv4, *PMSNdis_WmiTcpLargeSendOffloadV1_IPv4;

#define MSNdis_WmiTcpLargeSendOffloadV1_IPv4_SIZE (FIELD_OFFSET(MSNdis_WmiTcpLargeSendOffloadV1_IPv4, IpOptions) + MSNdis_WmiTcpLargeSendOffloadV1_IPv4_IpOptions_SIZE)

// MSNdis_WmiTcpLargeSendOffloadV1 - MSNdis_WmiTcpLargeSendOffloadV1
#define MSNdis_WmiTcpLargeSendOffloadV1Guid \
    { 0xb9e4e2f9,0xee89,0x4756, { 0xb0,0x57,0x38,0xf9,0xd9,0xb5,0x9a,0x92 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiTcpLargeSendOffloadV1_GUID, \
            0xb9e4e2f9,0xee89,0x4756,0xb0,0x57,0x38,0xf9,0xd9,0xb5,0x9a,0x92);
#endif


typedef struct _MSNdis_WmiTcpLargeSendOffloadV1
{
    // 
    MSNdis_WmiTcpLargeSendOffloadV1_IPv4 WmiIPv4;
    #define MSNdis_WmiTcpLargeSendOffloadV1_WmiIPv4_SIZE sizeof(MSNdis_WmiTcpLargeSendOffloadV1_IPv4)
    #define MSNdis_WmiTcpLargeSendOffloadV1_WmiIPv4_ID 1

} MSNdis_WmiTcpLargeSendOffloadV1, *PMSNdis_WmiTcpLargeSendOffloadV1;

#define MSNdis_WmiTcpLargeSendOffloadV1_SIZE (FIELD_OFFSET(MSNdis_WmiTcpLargeSendOffloadV1, WmiIPv4) + MSNdis_WmiTcpLargeSendOffloadV1_WmiIPv4_SIZE)

// MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive - MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive
#define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceiveGuid \
    { 0xd63d537a,0x59c1,0x4fae, { 0x8f,0x9b,0xcd,0x9f,0xbb,0xec,0xb8,0x5a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_GUID, \
            0xd63d537a,0x59c1,0x4fae,0x8f,0x9b,0xcd,0x9f,0xbb,0xec,0xb8,0x5a);
#endif


typedef struct _MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive
{
    // 
    ULONG Encapsulation;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_Encapsulation_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_Encapsulation_ID 1

    // 
    ULONG IpOptionsSupported;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_IpOptionsSupported_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_IpOptionsSupported_ID 2

    // 
    ULONG TcpOptionsSupported;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_TcpOptionsSupported_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_TcpOptionsSupported_ID 3

    // 
    ULONG TcpChecksum;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_TcpChecksum_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_TcpChecksum_ID 4

    // 
    ULONG UdpChecksum;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_UdpChecksum_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_UdpChecksum_ID 5

    // 
    ULONG IpChecksum;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_IpChecksum_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_IpChecksum_ID 6

} MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive, *PMSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive;

#define MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_SIZE (FIELD_OFFSET(MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive, IpChecksum) + MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive_IpChecksum_SIZE)

// MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive - MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive
#define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceiveGuid \
    { 0xb9760e75,0x6662,0x49e4, { 0xaa,0x6c,0xf0,0x28,0xbe,0xfe,0xc8,0xee } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_GUID, \
            0xb9760e75,0x6662,0x49e4,0xaa,0x6c,0xf0,0x28,0xbe,0xfe,0xc8,0xee);
#endif


typedef struct _MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive
{
    // 
    ULONG Encapsulation;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_Encapsulation_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_Encapsulation_ID 1

    // 
    ULONG IpExtensionHeadersSupported;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_IpExtensionHeadersSupported_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_IpExtensionHeadersSupported_ID 2

    // 
    ULONG TcpOptionsSupported;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_TcpOptionsSupported_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_TcpOptionsSupported_ID 3

    // 
    ULONG TcpChecksum;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_TcpChecksum_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_TcpChecksum_ID 4

    // 
    ULONG UdpChecksum;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_UdpChecksum_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_UdpChecksum_ID 5

} MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive, *PMSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive;

#define MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_SIZE (FIELD_OFFSET(MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive, UdpChecksum) + MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive_UdpChecksum_SIZE)

// MSNdis_WmiTcpIpChecksumOffload - MSNdis_WmiTcpIpChecksumOffload
#define MSNdis_WmiTcpIpChecksumOffloadGuid \
    { 0x189d4015,0x1b25,0x4d8e, { 0xa4,0xa9,0xf9,0xeb,0xa8,0x21,0x97,0xc7 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiTcpIpChecksumOffload_GUID, \
            0x189d4015,0x1b25,0x4d8e,0xa4,0xa9,0xf9,0xeb,0xa8,0x21,0x97,0xc7);
#endif


typedef struct _MSNdis_WmiTcpIpChecksumOffload
{
    // 
    MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive IPv4Transmit;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4Transmit_SIZE sizeof(MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4Transmit_ID 1

    // 
    MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive IPv4Receive;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4Receive_SIZE sizeof(MSNdis_WmiTcpIpChecksumOffload_IPv4TransmitReceive)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv4Receive_ID 2

    // 
    MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive IPv6Transmit;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6Transmit_SIZE sizeof(MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6Transmit_ID 3

    // 
    MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive IPv6Receive;
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6Receive_SIZE sizeof(MSNdis_WmiTcpIpChecksumOffload_IPv6TransmitReceive)
    #define MSNdis_WmiTcpIpChecksumOffload_IPv6Receive_ID 4

} MSNdis_WmiTcpIpChecksumOffload, *PMSNdis_WmiTcpIpChecksumOffload;

#define MSNdis_WmiTcpIpChecksumOffload_SIZE (FIELD_OFFSET(MSNdis_WmiTcpIpChecksumOffload, IPv6Receive) + MSNdis_WmiTcpIpChecksumOffload_IPv6Receive_SIZE)

// MSNdis_WmiIPSecOffloadV1_Supported - MSNdis_WmiIPSecOffloadV1_Supported
#define MSNdis_WmiIPSecOffloadV1_SupportedGuid \
    { 0xf86676b9,0xd9fa,0x4d26, { 0x95,0xce,0xbf,0xbc,0x77,0xd8,0x05,0x96 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiIPSecOffloadV1_Supported_GUID, \
            0xf86676b9,0xd9fa,0x4d26,0x95,0xce,0xbf,0xbc,0x77,0xd8,0x05,0x96);
#endif


typedef struct _MSNdis_WmiIPSecOffloadV1_Supported
{
    // 
    ULONG Encapsulation;
    #define MSNdis_WmiIPSecOffloadV1_Supported_Encapsulation_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_Supported_Encapsulation_ID 1

    // 
    ULONG AhEspCombined;
    #define MSNdis_WmiIPSecOffloadV1_Supported_AhEspCombined_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_Supported_AhEspCombined_ID 2

    // 
    ULONG TransportTunnelCombined;
    #define MSNdis_WmiIPSecOffloadV1_Supported_TransportTunnelCombined_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_Supported_TransportTunnelCombined_ID 3

    // 
    ULONG IPv4Options;
    #define MSNdis_WmiIPSecOffloadV1_Supported_IPv4Options_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_Supported_IPv4Options_ID 4

    // 
    ULONG Flags;
    #define MSNdis_WmiIPSecOffloadV1_Supported_Flags_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_Supported_Flags_ID 5

} MSNdis_WmiIPSecOffloadV1_Supported, *PMSNdis_WmiIPSecOffloadV1_Supported;

#define MSNdis_WmiIPSecOffloadV1_Supported_SIZE (FIELD_OFFSET(MSNdis_WmiIPSecOffloadV1_Supported, Flags) + MSNdis_WmiIPSecOffloadV1_Supported_Flags_SIZE)

// MSNdis_WmiIPSecOffloadV1_IPv4AH - MSNdis_WmiIPSecOffloadV1_IPv4AH
#define MSNdis_WmiIPSecOffloadV1_IPv4AHGuid \
    { 0x29bacfdd,0xf063,0x48d8, { 0x95,0x2c,0xd3,0xdc,0x93,0x30,0x0f,0x15 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiIPSecOffloadV1_IPv4AH_GUID, \
            0x29bacfdd,0xf063,0x48d8,0x95,0x2c,0xd3,0xdc,0x93,0x30,0x0f,0x15);
#endif


typedef struct _MSNdis_WmiIPSecOffloadV1_IPv4AH
{
    // 
    ULONG Md5;
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Md5_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Md5_ID 1

    // 
    ULONG Sha_1;
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Sha_1_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Sha_1_ID 2

    // 
    ULONG Transport;
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Transport_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Transport_ID 3

    // 
    ULONG Tunnel;
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Tunnel_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Tunnel_ID 4

    // 
    ULONG Send;
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Send_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Send_ID 5

    // 
    ULONG Receive;
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Receive_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4AH_Receive_ID 6

} MSNdis_WmiIPSecOffloadV1_IPv4AH, *PMSNdis_WmiIPSecOffloadV1_IPv4AH;

#define MSNdis_WmiIPSecOffloadV1_IPv4AH_SIZE (FIELD_OFFSET(MSNdis_WmiIPSecOffloadV1_IPv4AH, Receive) + MSNdis_WmiIPSecOffloadV1_IPv4AH_Receive_SIZE)

// MSNdis_WmiIPSecOffloadV1_IPv4ESP - MSNdis_WmiIPSecOffloadV1_IPv4ESP
#define MSNdis_WmiIPSecOffloadV1_IPv4ESPGuid \
    { 0x86522023,0x4536,0x4b58, { 0xa1,0xf4,0x25,0x38,0x94,0x1a,0xce,0x43 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiIPSecOffloadV1_IPv4ESP_GUID, \
            0x86522023,0x4536,0x4b58,0xa1,0xf4,0x25,0x38,0x94,0x1a,0xce,0x43);
#endif


typedef struct _MSNdis_WmiIPSecOffloadV1_IPv4ESP
{
    // 
    ULONG Des;
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Des_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Des_ID 1

    // 
    ULONG Reserved;
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Reserved_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Reserved_ID 2

    // 
    ULONG TripleDes;
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_TripleDes_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_TripleDes_ID 3

    // 
    ULONG NullEsp;
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_NullEsp_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_NullEsp_ID 4

    // 
    ULONG Transport;
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Transport_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Transport_ID 5

    // 
    ULONG Tunnel;
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Tunnel_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Tunnel_ID 6

    // 
    ULONG Send;
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Send_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Send_ID 7

    // 
    ULONG Receive;
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Receive_SIZE sizeof(ULONG)
    #define MSNdis_WmiIPSecOffloadV1_IPv4ESP_Receive_ID 8

} MSNdis_WmiIPSecOffloadV1_IPv4ESP, *PMSNdis_WmiIPSecOffloadV1_IPv4ESP;

#define MSNdis_WmiIPSecOffloadV1_IPv4ESP_SIZE (FIELD_OFFSET(MSNdis_WmiIPSecOffloadV1_IPv4ESP, Receive) + MSNdis_WmiIPSecOffloadV1_IPv4ESP_Receive_SIZE)

// MSNdis_WmiIPSecOffloadV1 - MSNdis_WmiIPSecOffloadV1
#define MSNdis_WmiIPSecOffloadV1Guid \
    { 0x4ec63447,0x2238,0x43a7, { 0xac,0x33,0x11,0xc7,0xcc,0x7d,0x86,0x65 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiIPSecOffloadV1_GUID, \
            0x4ec63447,0x2238,0x43a7,0xac,0x33,0x11,0xc7,0xcc,0x7d,0x86,0x65);
#endif


typedef struct _MSNdis_WmiIPSecOffloadV1
{
    // 
    MSNdis_WmiIPSecOffloadV1_Supported WmiSupported;
    #define MSNdis_WmiIPSecOffloadV1_WmiSupported_SIZE sizeof(MSNdis_WmiIPSecOffloadV1_Supported)
    #define MSNdis_WmiIPSecOffloadV1_WmiSupported_ID 1

    // 
    MSNdis_WmiIPSecOffloadV1_IPv4AH WmiIPv4AH;
    #define MSNdis_WmiIPSecOffloadV1_WmiIPv4AH_SIZE sizeof(MSNdis_WmiIPSecOffloadV1_IPv4AH)
    #define MSNdis_WmiIPSecOffloadV1_WmiIPv4AH_ID 2

    // 
    MSNdis_WmiIPSecOffloadV1_IPv4ESP WmiIPv4ESP;
    #define MSNdis_WmiIPSecOffloadV1_WmiIPv4ESP_SIZE sizeof(MSNdis_WmiIPSecOffloadV1_IPv4ESP)
    #define MSNdis_WmiIPSecOffloadV1_WmiIPv4ESP_ID 3

} MSNdis_WmiIPSecOffloadV1, *PMSNdis_WmiIPSecOffloadV1;

#define MSNdis_WmiIPSecOffloadV1_SIZE (FIELD_OFFSET(MSNdis_WmiIPSecOffloadV1, WmiIPv4ESP) + MSNdis_WmiIPSecOffloadV1_WmiIPv4ESP_SIZE)

// MSNdis_WmiTcpLargeSendOffloadV2_IPv4 - MSNdis_WmiTcpLargeSendOffloadV2_IPv4
#define MSNdis_WmiTcpLargeSendOffloadV2_IPv4Guid \
    { 0x8823d030,0xfa30,0x4b73, { 0xb3,0x39,0xdb,0x19,0x20,0x7f,0x0d,0x81 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiTcpLargeSendOffloadV2_IPv4_GUID, \
            0x8823d030,0xfa30,0x4b73,0xb3,0x39,0xdb,0x19,0x20,0x7f,0x0d,0x81);
#endif


typedef struct _MSNdis_WmiTcpLargeSendOffloadV2_IPv4
{
    // 
    ULONG Encapsulation;
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv4_Encapsulation_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv4_Encapsulation_ID 1

    // 
    ULONG MaxOffLoadSize;
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv4_MaxOffLoadSize_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv4_MaxOffLoadSize_ID 2

    // 
    ULONG MinSegmentCount;
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv4_MinSegmentCount_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv4_MinSegmentCount_ID 3

} MSNdis_WmiTcpLargeSendOffloadV2_IPv4, *PMSNdis_WmiTcpLargeSendOffloadV2_IPv4;

#define MSNdis_WmiTcpLargeSendOffloadV2_IPv4_SIZE (FIELD_OFFSET(MSNdis_WmiTcpLargeSendOffloadV2_IPv4, MinSegmentCount) + MSNdis_WmiTcpLargeSendOffloadV2_IPv4_MinSegmentCount_SIZE)

// MSNdis_WmiTcpLargeSendOffloadV2_IPv6 - MSNdis_WmiTcpLargeSendOffloadV2_IPv6
#define MSNdis_WmiTcpLargeSendOffloadV2_IPv6Guid \
    { 0xa7a9597c,0x2f8e,0x410b, { 0x9b,0xb3,0x5c,0x3a,0x50,0x79,0x2b,0xfc } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiTcpLargeSendOffloadV2_IPv6_GUID, \
            0xa7a9597c,0x2f8e,0x410b,0x9b,0xb3,0x5c,0x3a,0x50,0x79,0x2b,0xfc);
#endif


typedef struct _MSNdis_WmiTcpLargeSendOffloadV2_IPv6
{
    // 
    ULONG Encapsulation;
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_Encapsulation_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_Encapsulation_ID 1

    // 
    ULONG MaxOffLoadSize;
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_MaxOffLoadSize_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_MaxOffLoadSize_ID 2

    // 
    ULONG MinSegmentCount;
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_MinSegmentCount_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_MinSegmentCount_ID 3

    // 
    ULONG IpExtensionHeadersSupported;
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_IpExtensionHeadersSupported_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_IpExtensionHeadersSupported_ID 4

    // 
    ULONG TcpOptionsSupported;
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_TcpOptionsSupported_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_TcpOptionsSupported_ID 5

} MSNdis_WmiTcpLargeSendOffloadV2_IPv6, *PMSNdis_WmiTcpLargeSendOffloadV2_IPv6;

#define MSNdis_WmiTcpLargeSendOffloadV2_IPv6_SIZE (FIELD_OFFSET(MSNdis_WmiTcpLargeSendOffloadV2_IPv6, TcpOptionsSupported) + MSNdis_WmiTcpLargeSendOffloadV2_IPv6_TcpOptionsSupported_SIZE)

// MSNdis_WmiTcpLargeSendOffloadV2 - MSNdis_WmiTcpLargeSendOffloadV2
#define MSNdis_WmiTcpLargeSendOffloadV2Guid \
    { 0x592977c2,0xcfbe,0x462c, { 0xb5,0xcf,0x1a,0x76,0x79,0xfe,0x1c,0xba } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiTcpLargeSendOffloadV2_GUID, \
            0x592977c2,0xcfbe,0x462c,0xb5,0xcf,0x1a,0x76,0x79,0xfe,0x1c,0xba);
#endif


typedef struct _MSNdis_WmiTcpLargeSendOffloadV2
{
    // 
    MSNdis_WmiTcpLargeSendOffloadV2_IPv4 WmiIPv4;
    #define MSNdis_WmiTcpLargeSendOffloadV2_WmiIPv4_SIZE sizeof(MSNdis_WmiTcpLargeSendOffloadV2_IPv4)
    #define MSNdis_WmiTcpLargeSendOffloadV2_WmiIPv4_ID 1

    // 
    MSNdis_WmiTcpLargeSendOffloadV2_IPv6 WmiIPv6;
    #define MSNdis_WmiTcpLargeSendOffloadV2_WmiIPv6_SIZE sizeof(MSNdis_WmiTcpLargeSendOffloadV2_IPv6)
    #define MSNdis_WmiTcpLargeSendOffloadV2_WmiIPv6_ID 2

} MSNdis_WmiTcpLargeSendOffloadV2, *PMSNdis_WmiTcpLargeSendOffloadV2;

#define MSNdis_WmiTcpLargeSendOffloadV2_SIZE (FIELD_OFFSET(MSNdis_WmiTcpLargeSendOffloadV2, WmiIPv6) + MSNdis_WmiTcpLargeSendOffloadV2_WmiIPv6_SIZE)

// MSNdis_WmiOffload - MSNdis_WmiOffload
#define MSNdis_WmiOffloadGuid \
    { 0x7a877086,0x2204,0x4a8a, { 0x92,0xa4,0xe3,0xe8,0xab,0x62,0x66,0x29 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiOffload_GUID, \
            0x7a877086,0x2204,0x4a8a,0x92,0xa4,0xe3,0xe8,0xab,0x62,0x66,0x29);
#endif


typedef struct _MSNdis_WmiOffload
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_WmiOffload_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_WmiOffload_Header_ID 1

    // 
    MSNdis_WmiTcpIpChecksumOffload Checksum;
    #define MSNdis_WmiOffload_Checksum_SIZE sizeof(MSNdis_WmiTcpIpChecksumOffload)
    #define MSNdis_WmiOffload_Checksum_ID 2

    // 
    MSNdis_WmiTcpLargeSendOffloadV1 LsoV1;
    #define MSNdis_WmiOffload_LsoV1_SIZE sizeof(MSNdis_WmiTcpLargeSendOffloadV1)
    #define MSNdis_WmiOffload_LsoV1_ID 3

    // 
    MSNdis_WmiIPSecOffloadV1 IPsecV1;
    #define MSNdis_WmiOffload_IPsecV1_SIZE sizeof(MSNdis_WmiIPSecOffloadV1)
    #define MSNdis_WmiOffload_IPsecV1_ID 4

    // 
    MSNdis_WmiTcpLargeSendOffloadV2 LsoV2;
    #define MSNdis_WmiOffload_LsoV2_SIZE sizeof(MSNdis_WmiTcpLargeSendOffloadV2)
    #define MSNdis_WmiOffload_LsoV2_ID 5

    // 
    ULONG Flags;
    #define MSNdis_WmiOffload_Flags_SIZE sizeof(ULONG)
    #define MSNdis_WmiOffload_Flags_ID 6

} MSNdis_WmiOffload, *PMSNdis_WmiOffload;

#define MSNdis_WmiOffload_SIZE (FIELD_OFFSET(MSNdis_WmiOffload, Flags) + MSNdis_WmiOffload_Flags_SIZE)

// MSNdis_TcpOffloadParameters - MSNdis_TcpOffloadParameters
#define MSNdis_TcpOffloadParametersGuid \
    { 0x43fe82d8,0x3468,0x497e, { 0x9d,0xcf,0xf8,0xff,0xc0,0x13,0x37,0x44 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TcpOffloadParameters_GUID, \
            0x43fe82d8,0x3468,0x497e,0x9d,0xcf,0xf8,0xff,0xc0,0x13,0x37,0x44);
#endif


typedef struct _MSNdis_TcpOffloadParameters
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_TcpOffloadParameters_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_TcpOffloadParameters_Header_ID 1

    // 
    UCHAR IPv4Checksum;
    #define MSNdis_TcpOffloadParameters_IPv4Checksum_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_IPv4Checksum_ID 2

    // 
    UCHAR TCPIPv4Checksum;
    #define MSNdis_TcpOffloadParameters_TCPIPv4Checksum_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_TCPIPv4Checksum_ID 3

    // 
    UCHAR UDPIPv4Checksum;
    #define MSNdis_TcpOffloadParameters_UDPIPv4Checksum_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_UDPIPv4Checksum_ID 4

    // 
    UCHAR TCPIPv6Checksum;
    #define MSNdis_TcpOffloadParameters_TCPIPv6Checksum_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_TCPIPv6Checksum_ID 5

    // 
    UCHAR UDPIPv6Checksum;
    #define MSNdis_TcpOffloadParameters_UDPIPv6Checksum_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_UDPIPv6Checksum_ID 6

    // 
    UCHAR LsoV1;
    #define MSNdis_TcpOffloadParameters_LsoV1_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_LsoV1_ID 7

    // 
    UCHAR IPsec;
    #define MSNdis_TcpOffloadParameters_IPsec_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_IPsec_ID 8

    // 
    UCHAR LsoV2IPv4;
    #define MSNdis_TcpOffloadParameters_LsoV2IPv4_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_LsoV2IPv4_ID 9

    // 
    UCHAR LsoV2IPv6;
    #define MSNdis_TcpOffloadParameters_LsoV2IPv6_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_LsoV2IPv6_ID 10

    // 
    UCHAR TcpConnectionIPv4;
    #define MSNdis_TcpOffloadParameters_TcpConnectionIPv4_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_TcpConnectionIPv4_ID 11

    // 
    UCHAR TcpConnectionIPv6;
    #define MSNdis_TcpOffloadParameters_TcpConnectionIPv6_SIZE sizeof(UCHAR)
    #define MSNdis_TcpOffloadParameters_TcpConnectionIPv6_ID 12

    // 
    ULONG Flags;
    #define MSNdis_TcpOffloadParameters_Flags_SIZE sizeof(ULONG)
    #define MSNdis_TcpOffloadParameters_Flags_ID 13

} MSNdis_TcpOffloadParameters, *PMSNdis_TcpOffloadParameters;

#define MSNdis_TcpOffloadParameters_SIZE (FIELD_OFFSET(MSNdis_TcpOffloadParameters, Flags) + MSNdis_TcpOffloadParameters_Flags_SIZE)

// MSNdis_WmiTcpConnectionOffload - MSNdis_WmiTcpConnectionOffload
#define MSNdis_WmiTcpConnectionOffloadGuid \
    { 0x93cfcd3f,0x6228,0x455c, { 0x90,0x5e,0x3a,0xb8,0x0a,0x2f,0xf0,0x90 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiTcpConnectionOffload_GUID, \
            0x93cfcd3f,0x6228,0x455c,0x90,0x5e,0x3a,0xb8,0x0a,0x2f,0xf0,0x90);
#endif


typedef struct _MSNdis_WmiTcpConnectionOffload
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_WmiTcpConnectionOffload_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_WmiTcpConnectionOffload_Header_ID 1

    // 
    ULONG Encapsulation;
    #define MSNdis_WmiTcpConnectionOffload_Encapsulation_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpConnectionOffload_Encapsulation_ID 2

    // 
    ULONG SupportIp4;
    #define MSNdis_WmiTcpConnectionOffload_SupportIp4_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpConnectionOffload_SupportIp4_ID 3

    // 
    ULONG SupportIp6;
    #define MSNdis_WmiTcpConnectionOffload_SupportIp6_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpConnectionOffload_SupportIp6_ID 4

    // 
    ULONG SupportIp6ExtensionHeaders;
    #define MSNdis_WmiTcpConnectionOffload_SupportIp6ExtensionHeaders_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpConnectionOffload_SupportIp6ExtensionHeaders_ID 5

    // 
    ULONG SupportSack;
    #define MSNdis_WmiTcpConnectionOffload_SupportSack_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpConnectionOffload_SupportSack_ID 6

    // 
    ULONG TcpConnectionOffloadCapacity;
    #define MSNdis_WmiTcpConnectionOffload_TcpConnectionOffloadCapacity_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpConnectionOffload_TcpConnectionOffloadCapacity_ID 7

    // 
    ULONG Flags;
    #define MSNdis_WmiTcpConnectionOffload_Flags_SIZE sizeof(ULONG)
    #define MSNdis_WmiTcpConnectionOffload_Flags_ID 8

} MSNdis_WmiTcpConnectionOffload, *PMSNdis_WmiTcpConnectionOffload;

#define MSNdis_WmiTcpConnectionOffload_SIZE (FIELD_OFFSET(MSNdis_WmiTcpConnectionOffload, Flags) + MSNdis_WmiTcpConnectionOffload_Flags_SIZE)

// MSNdis_WmiHDSplitCurrentConfig - MSNdis_WmiHDSplitCurrentConfig
#define MSNdis_WmiHDSplitCurrentConfigGuid \
    { 0x34ff16bf,0x30ca,0x4a2a, { 0xa4,0x6d,0xc7,0xee,0x74,0xbc,0x35,0x82 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiHDSplitCurrentConfig_GUID, \
            0x34ff16bf,0x30ca,0x4a2a,0xa4,0x6d,0xc7,0xee,0x74,0xbc,0x35,0x82);
#endif


typedef struct _MSNdis_WmiHDSplitCurrentConfig
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_WmiHDSplitCurrentConfig_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_WmiHDSplitCurrentConfig_Header_ID 1

    // 
    ULONG HardwareCapabilities;
    #define MSNdis_WmiHDSplitCurrentConfig_HardwareCapabilities_SIZE sizeof(ULONG)
    #define MSNdis_WmiHDSplitCurrentConfig_HardwareCapabilities_ID 2

    // 
    ULONG CurrentCapabilities;
    #define MSNdis_WmiHDSplitCurrentConfig_CurrentCapabilities_SIZE sizeof(ULONG)
    #define MSNdis_WmiHDSplitCurrentConfig_CurrentCapabilities_ID 3

    // 
    ULONG HDSplitFlags;
    #define MSNdis_WmiHDSplitCurrentConfig_HDSplitFlags_SIZE sizeof(ULONG)
    #define MSNdis_WmiHDSplitCurrentConfig_HDSplitFlags_ID 4

    // 
    ULONG HDSplitCombineFlags;
    #define MSNdis_WmiHDSplitCurrentConfig_HDSplitCombineFlags_SIZE sizeof(ULONG)
    #define MSNdis_WmiHDSplitCurrentConfig_HDSplitCombineFlags_ID 5

    // 
    ULONG BackfillSize;
    #define MSNdis_WmiHDSplitCurrentConfig_BackfillSize_SIZE sizeof(ULONG)
    #define MSNdis_WmiHDSplitCurrentConfig_BackfillSize_ID 6

    // 
    ULONG MaxHeaderSize;
    #define MSNdis_WmiHDSplitCurrentConfig_MaxHeaderSize_SIZE sizeof(ULONG)
    #define MSNdis_WmiHDSplitCurrentConfig_MaxHeaderSize_ID 7

} MSNdis_WmiHDSplitCurrentConfig, *PMSNdis_WmiHDSplitCurrentConfig;

#define MSNdis_WmiHDSplitCurrentConfig_SIZE (FIELD_OFFSET(MSNdis_WmiHDSplitCurrentConfig, MaxHeaderSize) + MSNdis_WmiHDSplitCurrentConfig_MaxHeaderSize_SIZE)

// MSNdis_HDSplitParameters - MSNdis_HDSplitParameters
#define MSNdis_HDSplitParametersGuid \
    { 0x1131c56a,0x0a5a,0x4d79, { 0x8d,0xde,0x1e,0x6f,0x17,0x80,0x05,0xee } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_HDSplitParameters_GUID, \
            0x1131c56a,0x0a5a,0x4d79,0x8d,0xde,0x1e,0x6f,0x17,0x80,0x05,0xee);
#endif


typedef struct _MSNdis_HDSplitParameters
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_HDSplitParameters_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_HDSplitParameters_Header_ID 1

    // 
    ULONG HDSplitCombineFlags;
    #define MSNdis_HDSplitParameters_HDSplitCombineFlags_SIZE sizeof(ULONG)
    #define MSNdis_HDSplitParameters_HDSplitCombineFlags_ID 2

} MSNdis_HDSplitParameters, *PMSNdis_HDSplitParameters;

#define MSNdis_HDSplitParameters_SIZE (FIELD_OFFSET(MSNdis_HDSplitParameters, HDSplitCombineFlags) + MSNdis_HDSplitParameters_HDSplitCombineFlags_SIZE)

// MSNdis_WmiReceiveScaleCapabilities - MSNdis_WmiReceiveScaleCapabilities
#define MSNdis_WmiReceiveScaleCapabilitiesGuid \
    { 0xf7a4960a,0xace3,0x44dc, { 0xb5,0x1e,0x72,0xe0,0x5c,0x5e,0xaf,0xa8 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_WmiReceiveScaleCapabilities_GUID, \
            0xf7a4960a,0xace3,0x44dc,0xb5,0x1e,0x72,0xe0,0x5c,0x5e,0xaf,0xa8);
#endif


typedef struct _MSNdis_WmiReceiveScaleCapabilities
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_WmiReceiveScaleCapabilities_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_WmiReceiveScaleCapabilities_Header_ID 1

    // 
    ULONG CapabilitiesFlags;
    #define MSNdis_WmiReceiveScaleCapabilities_CapabilitiesFlags_SIZE sizeof(ULONG)
    #define MSNdis_WmiReceiveScaleCapabilities_CapabilitiesFlags_ID 2

    // 
    ULONG NumberOfInterruptMessages;
    #define MSNdis_WmiReceiveScaleCapabilities_NumberOfInterruptMessages_SIZE sizeof(ULONG)
    #define MSNdis_WmiReceiveScaleCapabilities_NumberOfInterruptMessages_ID 3

    // 
    ULONG NumberOfReceiveQueues;
    #define MSNdis_WmiReceiveScaleCapabilities_NumberOfReceiveQueues_SIZE sizeof(ULONG)
    #define MSNdis_WmiReceiveScaleCapabilities_NumberOfReceiveQueues_ID 4

} MSNdis_WmiReceiveScaleCapabilities, *PMSNdis_WmiReceiveScaleCapabilities;

#define MSNdis_WmiReceiveScaleCapabilities_SIZE (FIELD_OFFSET(MSNdis_WmiReceiveScaleCapabilities, NumberOfReceiveQueues) + MSNdis_WmiReceiveScaleCapabilities_NumberOfReceiveQueues_SIZE)

// MSNdis_ReceiveFilterCapabilities - MSNdis_ReceiveFilterCapabilities
#define MSNdis_ReceiveFilterCapabilitiesGuid \
    { 0x146360a3,0x88dd,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveFilterCapabilities_GUID, \
            0x146360a3,0x88dd,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_ReceiveFilterCapabilities
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_ReceiveFilterCapabilities_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_ReceiveFilterCapabilities_Header_ID 1

    // 
    ULONG Flags;
    #define MSNdis_ReceiveFilterCapabilities_Flags_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_Flags_ID 2

    // 
    ULONG EnabledFilterTypes;
    #define MSNdis_ReceiveFilterCapabilities_EnabledFilterTypes_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_EnabledFilterTypes_ID 3

    // 
    ULONG EnabledQueueTypes;
    #define MSNdis_ReceiveFilterCapabilities_EnabledQueueTypes_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_EnabledQueueTypes_ID 4

    // 
    ULONG NumQueues;
    #define MSNdis_ReceiveFilterCapabilities_NumQueues_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_NumQueues_ID 5

    // 
    ULONG SupportedQueueProperties;
    #define MSNdis_ReceiveFilterCapabilities_SupportedQueueProperties_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_SupportedQueueProperties_ID 6

    // 
    ULONG SupportedFilterTests;
    #define MSNdis_ReceiveFilterCapabilities_SupportedFilterTests_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_SupportedFilterTests_ID 7

    // 
    ULONG SupportedHeaders;
    #define MSNdis_ReceiveFilterCapabilities_SupportedHeaders_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_SupportedHeaders_ID 8

    // 
    ULONG SupportedMacHeaderFields;
    #define MSNdis_ReceiveFilterCapabilities_SupportedMacHeaderFields_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_SupportedMacHeaderFields_ID 9

    // 
    ULONG MaxMacHeaderFilters;
    #define MSNdis_ReceiveFilterCapabilities_MaxMacHeaderFilters_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_MaxMacHeaderFilters_ID 10

    // 
    ULONG MaxQueueGroups;
    #define MSNdis_ReceiveFilterCapabilities_MaxQueueGroups_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_MaxQueueGroups_ID 11

    // 
    ULONG MaxQueuesPerQueueGroup;
    #define MSNdis_ReceiveFilterCapabilities_MaxQueuesPerQueueGroup_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_MaxQueuesPerQueueGroup_ID 12

    // 
    ULONG MinLookaheadSplitSize;
    #define MSNdis_ReceiveFilterCapabilities_MinLookaheadSplitSize_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_MinLookaheadSplitSize_ID 13

    // 
    ULONG MaxLookaheadSplitSize;
    #define MSNdis_ReceiveFilterCapabilities_MaxLookaheadSplitSize_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterCapabilities_MaxLookaheadSplitSize_ID 14

} MSNdis_ReceiveFilterCapabilities, *PMSNdis_ReceiveFilterCapabilities;

#define MSNdis_ReceiveFilterCapabilities_SIZE (FIELD_OFFSET(MSNdis_ReceiveFilterCapabilities, MaxLookaheadSplitSize) + MSNdis_ReceiveFilterCapabilities_MaxLookaheadSplitSize_SIZE)

// MSNdis_ReceiveFilterGlobalParameters - MSNdis_ReceiveFilterGlobalParameters
#define MSNdis_ReceiveFilterGlobalParametersGuid \
    { 0x146360a4,0x88dd,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveFilterGlobalParameters_GUID, \
            0x146360a4,0x88dd,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_ReceiveFilterGlobalParameters
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_ReceiveFilterGlobalParameters_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_ReceiveFilterGlobalParameters_Header_ID 1

    // 
    ULONG Flags;
    #define MSNdis_ReceiveFilterGlobalParameters_Flags_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterGlobalParameters_Flags_ID 2

    // 
    ULONG EnabledFilterTypes;
    #define MSNdis_ReceiveFilterGlobalParameters_EnabledFilterTypes_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterGlobalParameters_EnabledFilterTypes_ID 3

    // 
    ULONG EnabledQueueTypes;
    #define MSNdis_ReceiveFilterGlobalParameters_EnabledQueueTypes_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterGlobalParameters_EnabledQueueTypes_ID 4

} MSNdis_ReceiveFilterGlobalParameters, *PMSNdis_ReceiveFilterGlobalParameters;

#define MSNdis_ReceiveFilterGlobalParameters_SIZE (FIELD_OFFSET(MSNdis_ReceiveFilterGlobalParameters, EnabledQueueTypes) + MSNdis_ReceiveFilterGlobalParameters_EnabledQueueTypes_SIZE)

// MSNdis_CountedString - MSNdis_CountedString
#define MSNdis_CountedStringGuid \
    { 0x146360a5,0x88dd,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_CountedString_GUID, \
            0x146360a5,0x88dd,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_CountedString
{
    // 
    USHORT Length;
    #define MSNdis_CountedString_Length_SIZE sizeof(USHORT)
    #define MSNdis_CountedString_Length_ID 1

    // 
    SHORT String[257];
    #define MSNdis_CountedString_String_SIZE sizeof(SHORT[257])
    #define MSNdis_CountedString_String_ID 2

} MSNdis_CountedString, *PMSNdis_CountedString;

#define MSNdis_CountedString_SIZE (FIELD_OFFSET(MSNdis_CountedString, String) + MSNdis_CountedString_String_SIZE)

// MSNdis_ReceiveFilterInfo - MSNdis_ReceiveFilterInfo
#define MSNdis_ReceiveFilterInfoGuid \
    { 0x146360a9,0x88dd,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveFilterInfo_GUID, \
            0x146360a9,0x88dd,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_ReceiveFilterInfo
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_ReceiveFilterInfo_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_ReceiveFilterInfo_Header_ID 1

    // 
    ULONG Flags;
    #define MSNdis_ReceiveFilterInfo_Flags_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterInfo_Flags_ID 2

    // 
    ULONG FilterType;
    #define MSNdis_ReceiveFilterInfo_FilterType_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterInfo_FilterType_ID 3

    // 
    ULONG FilterId;
    #define MSNdis_ReceiveFilterInfo_FilterId_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterInfo_FilterId_ID 4

} MSNdis_ReceiveFilterInfo, *PMSNdis_ReceiveFilterInfo;

#define MSNdis_ReceiveFilterInfo_SIZE (FIELD_OFFSET(MSNdis_ReceiveFilterInfo, FilterId) + MSNdis_ReceiveFilterInfo_FilterId_SIZE)

// MSNdis_ReceiveFilterInfoArray - MSNdis_ReceiveFilterInfoArray
#define MSNdis_ReceiveFilterInfoArrayGuid \
    { 0x146360aa,0x88dd,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveFilterInfoArray_GUID, \
            0x146360aa,0x88dd,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_ReceiveFilterInfoArray
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_ReceiveFilterInfoArray_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_ReceiveFilterInfoArray_Header_ID 1

    // 
    ULONG QueueId;
    #define MSNdis_ReceiveFilterInfoArray_QueueId_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterInfoArray_QueueId_ID 2

    // 
    ULONG FirstElementOffset;
    #define MSNdis_ReceiveFilterInfoArray_FirstElementOffset_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterInfoArray_FirstElementOffset_ID 3

    // 
    ULONG NumElements;
    #define MSNdis_ReceiveFilterInfoArray_NumElements_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterInfoArray_NumElements_ID 4

    // 
    ULONG ElementSize;
    #define MSNdis_ReceiveFilterInfoArray_ElementSize_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterInfoArray_ElementSize_ID 5

    // 
    MSNdis_ReceiveFilterInfo Filter[1];
    #define MSNdis_ReceiveFilterInfoArray_Filter_ID 6

} MSNdis_ReceiveFilterInfoArray, *PMSNdis_ReceiveFilterInfoArray;

// MSNdis_ReceiveFilterFieldParameters - MSNdis_ReceiveFilterFieldParameters
#define MSNdis_ReceiveFilterFieldParametersGuid \
    { 0x146360ab,0x88dd,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveFilterFieldParameters_GUID, \
            0x146360ab,0x88dd,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_ReceiveFilterFieldParameters
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_ReceiveFilterFieldParameters_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_ReceiveFilterFieldParameters_Header_ID 1

    // 
    ULONG Flags;
    #define MSNdis_ReceiveFilterFieldParameters_Flags_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterFieldParameters_Flags_ID 2

    // 
    ULONG FrameHeader;
    #define MSNdis_ReceiveFilterFieldParameters_FrameHeader_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterFieldParameters_FrameHeader_ID 3

    // 
    ULONG ReceiveFilterTest;
    #define MSNdis_ReceiveFilterFieldParameters_ReceiveFilterTest_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterFieldParameters_ReceiveFilterTest_ID 4

    // 
    ULONG MacHeaderField;
    #define MSNdis_ReceiveFilterFieldParameters_MacHeaderField_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterFieldParameters_MacHeaderField_ID 5

    // 
    UCHAR FieldByteArrayValue[16];
    #define MSNdis_ReceiveFilterFieldParameters_FieldByteArrayValue_SIZE sizeof(UCHAR[16])
    #define MSNdis_ReceiveFilterFieldParameters_FieldByteArrayValue_ID 6

    // 
    UCHAR ResultByteArrayValue[16];
    #define MSNdis_ReceiveFilterFieldParameters_ResultByteArrayValue_SIZE sizeof(UCHAR[16])
    #define MSNdis_ReceiveFilterFieldParameters_ResultByteArrayValue_ID 7

} MSNdis_ReceiveFilterFieldParameters, *PMSNdis_ReceiveFilterFieldParameters;

#define MSNdis_ReceiveFilterFieldParameters_SIZE (FIELD_OFFSET(MSNdis_ReceiveFilterFieldParameters, ResultByteArrayValue) + MSNdis_ReceiveFilterFieldParameters_ResultByteArrayValue_SIZE)

// MSNdis_ReceiveFilterParameters - MSNdis_ReceiveFilterParameters
#define MSNdis_ReceiveFilterParametersGuid \
    { 0x146360ac,0x88dd,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveFilterParameters_GUID, \
            0x146360ac,0x88dd,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_ReceiveFilterParameters
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_ReceiveFilterParameters_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_ReceiveFilterParameters_Header_ID 1

    // 
    ULONG Flags;
    #define MSNdis_ReceiveFilterParameters_Flags_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterParameters_Flags_ID 2

    // 
    ULONG FilterType;
    #define MSNdis_ReceiveFilterParameters_FilterType_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterParameters_FilterType_ID 3

    // 
    ULONG QueueId;
    #define MSNdis_ReceiveFilterParameters_QueueId_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterParameters_QueueId_ID 4

    // 
    ULONG FilterId;
    #define MSNdis_ReceiveFilterParameters_FilterId_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterParameters_FilterId_ID 5

    // 
    ULONG FieldParametersArrayOffset;
    #define MSNdis_ReceiveFilterParameters_FieldParametersArrayOffset_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterParameters_FieldParametersArrayOffset_ID 6

    // 
    ULONG FieldParametersArrayNumElements;
    #define MSNdis_ReceiveFilterParameters_FieldParametersArrayNumElements_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterParameters_FieldParametersArrayNumElements_ID 7

    // 
    ULONG FieldParametersArrayElementSize;
    #define MSNdis_ReceiveFilterParameters_FieldParametersArrayElementSize_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterParameters_FieldParametersArrayElementSize_ID 8

    // 
    ULONG RequestedFilterIdBitCount;
    #define MSNdis_ReceiveFilterParameters_RequestedFilterIdBitCount_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveFilterParameters_RequestedFilterIdBitCount_ID 9

    // 
    MSNdis_ReceiveFilterFieldParameters FieldParameters[1];
    #define MSNdis_ReceiveFilterParameters_FieldParameters_ID 10

} MSNdis_ReceiveFilterParameters, *PMSNdis_ReceiveFilterParameters;

// MSNdis_NicSwitchCapabilities - MSNdis_NicSwitchCapabilities
#define MSNdis_NicSwitchCapabilitiesGuid \
    { 0xdb80dd1c,0x59ae,0x48e7, { 0xb7,0xec,0xf9,0xbe,0x2c,0x4b,0x8c,0xb0 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_NicSwitchCapabilities_GUID, \
            0xdb80dd1c,0x59ae,0x48e7,0xb7,0xec,0xf9,0xbe,0x2c,0x4b,0x8c,0xb0);
#endif


typedef struct _MSNdis_NicSwitchCapabilities
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_NicSwitchCapabilities_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_NicSwitchCapabilities_Header_ID 1

    // 
    ULONG Flags;
    #define MSNdis_NicSwitchCapabilities_Flags_SIZE sizeof(ULONG)
    #define MSNdis_NicSwitchCapabilities_Flags_ID 2

    // 
    ULONG NdisReserved1;
    #define MSNdis_NicSwitchCapabilities_NdisReserved1_SIZE sizeof(ULONG)
    #define MSNdis_NicSwitchCapabilities_NdisReserved1_ID 3

    // 
    ULONG NumTotalMacAddresses;
    #define MSNdis_NicSwitchCapabilities_NumTotalMacAddresses_SIZE sizeof(ULONG)
    #define MSNdis_NicSwitchCapabilities_NumTotalMacAddresses_ID 4

    // 
    ULONG NumMacAddressesPerPort;
    #define MSNdis_NicSwitchCapabilities_NumMacAddressesPerPort_SIZE sizeof(ULONG)
    #define MSNdis_NicSwitchCapabilities_NumMacAddressesPerPort_ID 5

    // 
    ULONG NumVlansPerPort;
    #define MSNdis_NicSwitchCapabilities_NumVlansPerPort_SIZE sizeof(ULONG)
    #define MSNdis_NicSwitchCapabilities_NumVlansPerPort_ID 6

    // 
    ULONG NdisReserved2;
    #define MSNdis_NicSwitchCapabilities_NdisReserved2_SIZE sizeof(ULONG)
    #define MSNdis_NicSwitchCapabilities_NdisReserved2_ID 7

    // 
    ULONG NdisReserved3;
    #define MSNdis_NicSwitchCapabilities_NdisReserved3_SIZE sizeof(ULONG)
    #define MSNdis_NicSwitchCapabilities_NdisReserved3_ID 8

} MSNdis_NicSwitchCapabilities, *PMSNdis_NicSwitchCapabilities;

#define MSNdis_NicSwitchCapabilities_SIZE (FIELD_OFFSET(MSNdis_NicSwitchCapabilities, NdisReserved3) + MSNdis_NicSwitchCapabilities_NdisReserved3_SIZE)

// MSNdis_GroupAffinity - MSNdis_GroupAffinity
#define MSNdis_GroupAffinityGuid \
    { 0xf786fbd5,0xc049,0x11dd, { 0xb8,0x85,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_GroupAffinity_GUID, \
            0xf786fbd5,0xc049,0x11dd,0xb8,0x85,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_GroupAffinity
{
    // 
    ULONGLONG Mask;
    #define MSNdis_GroupAffinity_Mask_SIZE sizeof(ULONGLONG)
    #define MSNdis_GroupAffinity_Mask_ID 1

    // 
    USHORT Group;
    #define MSNdis_GroupAffinity_Group_SIZE sizeof(USHORT)
    #define MSNdis_GroupAffinity_Group_ID 2

    // 
    USHORT Reserved[3];
    #define MSNdis_GroupAffinity_Reserved_SIZE sizeof(USHORT[3])
    #define MSNdis_GroupAffinity_Reserved_ID 3

} MSNdis_GroupAffinity, *PMSNdis_GroupAffinity;

#define MSNdis_GroupAffinity_SIZE (FIELD_OFFSET(MSNdis_GroupAffinity, Reserved) + MSNdis_GroupAffinity_Reserved_SIZE)

// MSNdis_ReceiveQueueParameters - MSNdis_ReceiveQueueParameters
#define MSNdis_ReceiveQueueParametersGuid \
    { 0xf786fbd6,0xc049,0x11dd, { 0xb8,0x85,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveQueueParameters_GUID, \
            0xf786fbd6,0xc049,0x11dd,0xb8,0x85,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_ReceiveQueueParameters
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_ReceiveQueueParameters_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_ReceiveQueueParameters_Header_ID 1

    // 
    ULONG Flags;
    #define MSNdis_ReceiveQueueParameters_Flags_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueParameters_Flags_ID 2

    // 
    ULONG QueueType;
    #define MSNdis_ReceiveQueueParameters_QueueType_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueParameters_QueueType_ID 3

    // 
    ULONG QueueId;
    #define MSNdis_ReceiveQueueParameters_QueueId_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueParameters_QueueId_ID 4

    // 
    ULONG QueueGroupId;
    #define MSNdis_ReceiveQueueParameters_QueueGroupId_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueParameters_QueueGroupId_ID 5

    // 
    MSNdis_GroupAffinity ProcessorAffinity;
    #define MSNdis_ReceiveQueueParameters_ProcessorAffinity_SIZE sizeof(MSNdis_GroupAffinity)
    #define MSNdis_ReceiveQueueParameters_ProcessorAffinity_ID 6

    // 
    ULONG NumSuggestedReceiveBuffers;
    #define MSNdis_ReceiveQueueParameters_NumSuggestedReceiveBuffers_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueParameters_NumSuggestedReceiveBuffers_ID 7

    // 
    ULONG MSIXTableEntry;
    #define MSNdis_ReceiveQueueParameters_MSIXTableEntry_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueParameters_MSIXTableEntry_ID 8

    // 
    ULONG LookaheadSize;
    #define MSNdis_ReceiveQueueParameters_LookaheadSize_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueParameters_LookaheadSize_ID 9

    // 
    MSNdis_CountedString VmName;
    #define MSNdis_ReceiveQueueParameters_VmName_SIZE sizeof(MSNdis_CountedString)
    #define MSNdis_ReceiveQueueParameters_VmName_ID 10

    // 
    MSNdis_CountedString QueueName;
    #define MSNdis_ReceiveQueueParameters_QueueName_SIZE sizeof(MSNdis_CountedString)
    #define MSNdis_ReceiveQueueParameters_QueueName_ID 11

} MSNdis_ReceiveQueueParameters, *PMSNdis_ReceiveQueueParameters;

#define MSNdis_ReceiveQueueParameters_SIZE (FIELD_OFFSET(MSNdis_ReceiveQueueParameters, QueueName) + MSNdis_ReceiveQueueParameters_QueueName_SIZE)

// MSNdis_ReceiveQueueInfo - MSNdis_ReceiveQueueInfo
#define MSNdis_ReceiveQueueInfoGuid \
    { 0xf786fbd7,0xc049,0x11dd, { 0xb8,0x85,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveQueueInfo_GUID, \
            0xf786fbd7,0xc049,0x11dd,0xb8,0x85,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_ReceiveQueueInfo
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_ReceiveQueueInfo_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_ReceiveQueueInfo_Header_ID 1

    // 
    ULONG Flags;
    #define MSNdis_ReceiveQueueInfo_Flags_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfo_Flags_ID 2

    // 
    ULONG QueueType;
    #define MSNdis_ReceiveQueueInfo_QueueType_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfo_QueueType_ID 3

    // 
    ULONG QueueId;
    #define MSNdis_ReceiveQueueInfo_QueueId_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfo_QueueId_ID 4

    // 
    ULONG QueueGroupId;
    #define MSNdis_ReceiveQueueInfo_QueueGroupId_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfo_QueueGroupId_ID 5

    // 
    ULONG QueueState;
    #define MSNdis_ReceiveQueueInfo_QueueState_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfo_QueueState_ID 6

    // 
    MSNdis_GroupAffinity ProcessorAffinity;
    #define MSNdis_ReceiveQueueInfo_ProcessorAffinity_SIZE sizeof(MSNdis_GroupAffinity)
    #define MSNdis_ReceiveQueueInfo_ProcessorAffinity_ID 7

    // 
    ULONG NumSuggestedReceiveBuffers;
    #define MSNdis_ReceiveQueueInfo_NumSuggestedReceiveBuffers_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfo_NumSuggestedReceiveBuffers_ID 8

    // 
    ULONG MSIXTableEntry;
    #define MSNdis_ReceiveQueueInfo_MSIXTableEntry_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfo_MSIXTableEntry_ID 9

    // 
    ULONG LookaheadSize;
    #define MSNdis_ReceiveQueueInfo_LookaheadSize_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfo_LookaheadSize_ID 10

    // 
    MSNdis_CountedString VmName;
    #define MSNdis_ReceiveQueueInfo_VmName_SIZE sizeof(MSNdis_CountedString)
    #define MSNdis_ReceiveQueueInfo_VmName_ID 11

    // 
    MSNdis_CountedString QueueName;
    #define MSNdis_ReceiveQueueInfo_QueueName_SIZE sizeof(MSNdis_CountedString)
    #define MSNdis_ReceiveQueueInfo_QueueName_ID 12

} MSNdis_ReceiveQueueInfo, *PMSNdis_ReceiveQueueInfo;

#define MSNdis_ReceiveQueueInfo_SIZE (FIELD_OFFSET(MSNdis_ReceiveQueueInfo, QueueName) + MSNdis_ReceiveQueueInfo_QueueName_SIZE)

// MSNdis_ReceiveQueueInfoArray - MSNdis_ReceiveQueueInfoArray
#define MSNdis_ReceiveQueueInfoArrayGuid \
    { 0xf786fbd8,0xc049,0x11dd, { 0xb8,0x85,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveQueueInfoArray_GUID, \
            0xf786fbd8,0xc049,0x11dd,0xb8,0x85,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif


typedef struct _MSNdis_ReceiveQueueInfoArray
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_ReceiveQueueInfoArray_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_ReceiveQueueInfoArray_Header_ID 1

    // 
    ULONG FirstElementOffset;
    #define MSNdis_ReceiveQueueInfoArray_FirstElementOffset_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfoArray_FirstElementOffset_ID 2

    // 
    ULONG NumElements;
    #define MSNdis_ReceiveQueueInfoArray_NumElements_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfoArray_NumElements_ID 3

    // 
    ULONG ElementSize;
    #define MSNdis_ReceiveQueueInfoArray_ElementSize_SIZE sizeof(ULONG)
    #define MSNdis_ReceiveQueueInfoArray_ElementSize_ID 4

    // 
    MSNdis_ReceiveQueueInfo Queue[1];
    #define MSNdis_ReceiveQueueInfoArray_Queue_ID 5

} MSNdis_ReceiveQueueInfoArray, *PMSNdis_ReceiveQueueInfoArray;

// MSNdis_LinkState - MSNdis_LinkState
#define MSNdis_LinkStateGuid \
    { 0xba1f4c14,0xa945,0x4762, { 0xb9,0x16,0x0b,0x55,0x15,0xb6,0xf4,0x3a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_LinkState_GUID, \
            0xba1f4c14,0xa945,0x4762,0xb9,0x16,0x0b,0x55,0x15,0xb6,0xf4,0x3a);
#endif

//
// Method id definitions for MSNdis_LinkState
#define WmiQueryLinkState     1
typedef struct _WmiQueryLinkState_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryLinkState_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryLinkState_IN_Header_ID 1

} WmiQueryLinkState_IN, *PWmiQueryLinkState_IN;

#define WmiQueryLinkState_IN_SIZE (FIELD_OFFSET(WmiQueryLinkState_IN, Header) + WmiQueryLinkState_IN_Header_SIZE)

typedef struct _WmiQueryLinkState_OUT
{
    // 
    MSNdis_LinkStateData LinkState;
    #define WmiQueryLinkState_OUT_LinkState_SIZE sizeof(MSNdis_LinkStateData)
    #define WmiQueryLinkState_OUT_LinkState_ID 2

} WmiQueryLinkState_OUT, *PWmiQueryLinkState_OUT;

#define WmiQueryLinkState_OUT_SIZE (FIELD_OFFSET(WmiQueryLinkState_OUT, LinkState) + WmiQueryLinkState_OUT_LinkState_SIZE)


// MSNdis_QueryInterruptModeration - MSNdis_QueryInterruptModeration
#define MSNdis_QueryInterruptModerationGuid \
    { 0xd9c8eea5,0xf16e,0x467c, { 0x84,0xd5,0x63,0x45,0xa2,0x2c,0xe2,0x13 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryInterruptModeration_GUID, \
            0xd9c8eea5,0xf16e,0x467c,0x84,0xd5,0x63,0x45,0xa2,0x2c,0xe2,0x13);
#endif

//
// Method id definitions for MSNdis_QueryInterruptModeration
#define WmiQueryInterruptModeration     1
typedef struct _WmiQueryInterruptModeration_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryInterruptModeration_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryInterruptModeration_IN_Header_ID 1

} WmiQueryInterruptModeration_IN, *PWmiQueryInterruptModeration_IN;

#define WmiQueryInterruptModeration_IN_SIZE (FIELD_OFFSET(WmiQueryInterruptModeration_IN, Header) + WmiQueryInterruptModeration_IN_Header_SIZE)

typedef struct _WmiQueryInterruptModeration_OUT
{
    // 
    MSNdis_InterruptModerationParameters InterruptModeration;
    #define WmiQueryInterruptModeration_OUT_InterruptModeration_SIZE sizeof(MSNdis_InterruptModerationParameters)
    #define WmiQueryInterruptModeration_OUT_InterruptModeration_ID 2

} WmiQueryInterruptModeration_OUT, *PWmiQueryInterruptModeration_OUT;

#define WmiQueryInterruptModeration_OUT_SIZE (FIELD_OFFSET(WmiQueryInterruptModeration_OUT, InterruptModeration) + WmiQueryInterruptModeration_OUT_InterruptModeration_SIZE)


// MSNdis_SetInterruptModeration - MSNdis_SetInterruptModeration
#define MSNdis_SetInterruptModerationGuid \
    { 0xd789adfa,0x9c56,0x433b, { 0xad,0x01,0x75,0x74,0xf3,0xce,0xdb,0xe9 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_SetInterruptModeration_GUID, \
            0xd789adfa,0x9c56,0x433b,0xad,0x01,0x75,0x74,0xf3,0xce,0xdb,0xe9);
#endif

//
// Method id definitions for MSNdis_SetInterruptModeration
#define WmiSetInterruptModeration     1
typedef struct _WmiSetInterruptModeration_IN
{
    // 
    MSNdis_WmiMethodHeader MethodHeader;
    #define WmiSetInterruptModeration_IN_MethodHeader_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiSetInterruptModeration_IN_MethodHeader_ID 1

    // 
    MSNdis_InterruptModerationParameters InterruptModeration;
    #define WmiSetInterruptModeration_IN_InterruptModeration_SIZE sizeof(MSNdis_InterruptModerationParameters)
    #define WmiSetInterruptModeration_IN_InterruptModeration_ID 2

} WmiSetInterruptModeration_IN, *PWmiSetInterruptModeration_IN;

#define WmiSetInterruptModeration_IN_SIZE (FIELD_OFFSET(WmiSetInterruptModeration_IN, InterruptModeration) + WmiSetInterruptModeration_IN_InterruptModeration_SIZE)

typedef struct _WmiSetInterruptModeration_OUT
{
    // 
    MSNdis_WmiOutputInfo OutputInfo;
    #define WmiSetInterruptModeration_OUT_OutputInfo_SIZE sizeof(MSNdis_WmiOutputInfo)
    #define WmiSetInterruptModeration_OUT_OutputInfo_ID 3

} WmiSetInterruptModeration_OUT, *PWmiSetInterruptModeration_OUT;

#define WmiSetInterruptModeration_OUT_SIZE (FIELD_OFFSET(WmiSetInterruptModeration_OUT, OutputInfo) + WmiSetInterruptModeration_OUT_OutputInfo_SIZE)


// MSNdis_SetLinkParameters - MSNdis_SetLinkParameters
#define MSNdis_SetLinkParametersGuid \
    { 0x8c7d3579,0x252b,0x4614, { 0x82,0xc5,0xa6,0x50,0xda,0xa1,0x50,0x49 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_SetLinkParameters_GUID, \
            0x8c7d3579,0x252b,0x4614,0x82,0xc5,0xa6,0x50,0xda,0xa1,0x50,0x49);
#endif

//
// Method id definitions for MSNdis_SetLinkParameters
#define WmiSetLinkParameters     1
typedef struct _WmiSetLinkParameters_IN
{
    // 
    MSNdis_WmiMethodHeader MethodHeader;
    #define WmiSetLinkParameters_IN_MethodHeader_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiSetLinkParameters_IN_MethodHeader_ID 1

    // 
    MSNdis_LinkParameters LinkParameters;
    #define WmiSetLinkParameters_IN_LinkParameters_SIZE sizeof(MSNdis_LinkParameters)
    #define WmiSetLinkParameters_IN_LinkParameters_ID 2

} WmiSetLinkParameters_IN, *PWmiSetLinkParameters_IN;

#define WmiSetLinkParameters_IN_SIZE (FIELD_OFFSET(WmiSetLinkParameters_IN, LinkParameters) + WmiSetLinkParameters_IN_LinkParameters_SIZE)

typedef struct _WmiSetLinkParameters_OUT
{
    // 
    MSNdis_WmiOutputInfo OutputInfo;
    #define WmiSetLinkParameters_OUT_OutputInfo_SIZE sizeof(MSNdis_WmiOutputInfo)
    #define WmiSetLinkParameters_OUT_OutputInfo_ID 3

} WmiSetLinkParameters_OUT, *PWmiSetLinkParameters_OUT;

#define WmiSetLinkParameters_OUT_SIZE (FIELD_OFFSET(WmiSetLinkParameters_OUT, OutputInfo) + WmiSetLinkParameters_OUT_OutputInfo_SIZE)


// MSNdis_QueryStatisticsInfo - MSNdis_QueryStatisticsInfo
#define MSNdis_QueryStatisticsInfoGuid \
    { 0x368c45b5,0xc129,0x43c1, { 0x93,0x9e,0x7e,0xdc,0x2d,0x7f,0xe6,0x21 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryStatisticsInfo_GUID, \
            0x368c45b5,0xc129,0x43c1,0x93,0x9e,0x7e,0xdc,0x2d,0x7f,0xe6,0x21);
#endif

//
// Method id definitions for MSNdis_QueryStatisticsInfo
#define WmiQueryStatisticsInfo     1
typedef struct _WmiQueryStatisticsInfo_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryStatisticsInfo_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryStatisticsInfo_IN_Header_ID 1

} WmiQueryStatisticsInfo_IN, *PWmiQueryStatisticsInfo_IN;

#define WmiQueryStatisticsInfo_IN_SIZE (FIELD_OFFSET(WmiQueryStatisticsInfo_IN, Header) + WmiQueryStatisticsInfo_IN_Header_SIZE)

typedef struct _WmiQueryStatisticsInfo_OUT
{
    // 
    MSNdis_StatisticsInfo StatisticsInfo;
    #define WmiQueryStatisticsInfo_OUT_StatisticsInfo_SIZE sizeof(MSNdis_StatisticsInfo)
    #define WmiQueryStatisticsInfo_OUT_StatisticsInfo_ID 2

} WmiQueryStatisticsInfo_OUT, *PWmiQueryStatisticsInfo_OUT;

#define WmiQueryStatisticsInfo_OUT_SIZE (FIELD_OFFSET(WmiQueryStatisticsInfo_OUT, StatisticsInfo) + WmiQueryStatisticsInfo_OUT_StatisticsInfo_SIZE)


// MSNdis_QueryPortState - MSNdis_QueryPortState
#define MSNdis_QueryPortStateGuid \
    { 0x6fbf2a5f,0x8b8f,0x4920, { 0x81,0x43,0xe6,0xc4,0x60,0xf5,0x25,0x24 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryPortState_GUID, \
            0x6fbf2a5f,0x8b8f,0x4920,0x81,0x43,0xe6,0xc4,0x60,0xf5,0x25,0x24);
#endif

//
// Method id definitions for MSNdis_QueryPortState
#define WmiQueryPortState     1
typedef struct _WmiQueryPortState_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryPortState_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryPortState_IN_Header_ID 1

} WmiQueryPortState_IN, *PWmiQueryPortState_IN;

#define WmiQueryPortState_IN_SIZE (FIELD_OFFSET(WmiQueryPortState_IN, Header) + WmiQueryPortState_IN_Header_SIZE)

typedef struct _WmiQueryPortState_OUT
{
    // 
    MSNdis_PortStateData PortState;
    #define WmiQueryPortState_OUT_PortState_SIZE sizeof(MSNdis_PortStateData)
    #define WmiQueryPortState_OUT_PortState_ID 2

} WmiQueryPortState_OUT, *PWmiQueryPortState_OUT;

#define WmiQueryPortState_OUT_SIZE (FIELD_OFFSET(WmiQueryPortState_OUT, PortState) + WmiQueryPortState_OUT_PortState_SIZE)


// MSNdis_EnumeratePorts - MSNdis_EnumeratePorts
#define MSNdis_EnumeratePortsGuid \
    { 0xf1d6abe8,0x15e4,0x4407, { 0x81,0xb7,0x6b,0x83,0x0c,0x77,0x7c,0xd9 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EnumeratePorts_GUID, \
            0xf1d6abe8,0x15e4,0x4407,0x81,0xb7,0x6b,0x83,0x0c,0x77,0x7c,0xd9);
#endif

//
// Method id definitions for MSNdis_EnumeratePorts
#define WmiEnumeratePorts     1
typedef struct _WmiEnumeratePorts_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiEnumeratePorts_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiEnumeratePorts_IN_Header_ID 1

} WmiEnumeratePorts_IN, *PWmiEnumeratePorts_IN;

#define WmiEnumeratePorts_IN_SIZE (FIELD_OFFSET(WmiEnumeratePorts_IN, Header) + WmiEnumeratePorts_IN_Header_SIZE)

typedef struct _WmiEnumeratePorts_OUT
{
    // 
    MSNdis_PortArray Ports;
    #define WmiEnumeratePorts_OUT_Ports_SIZE sizeof(MSNdis_PortArray)
    #define WmiEnumeratePorts_OUT_Ports_ID 2

} WmiEnumeratePorts_OUT, *PWmiEnumeratePorts_OUT;

#define WmiEnumeratePorts_OUT_SIZE (FIELD_OFFSET(WmiEnumeratePorts_OUT, Ports) + WmiEnumeratePorts_OUT_Ports_SIZE)


// MSNdis_SetPortParameters - MSNdis_SetPortParameters
#define MSNdis_SetPortParametersGuid \
    { 0xaab6ac31,0x86fb,0x48fb, { 0x8b,0x48,0x63,0xdb,0x23,0x5a,0xce,0x16 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_SetPortParameters_GUID, \
            0xaab6ac31,0x86fb,0x48fb,0x8b,0x48,0x63,0xdb,0x23,0x5a,0xce,0x16);
#endif

//
// Method id definitions for MSNdis_SetPortParameters
#define WmiSetPortParameters     1
typedef struct _WmiSetPortParameters_IN
{
    // 
    MSNdis_WmiMethodHeader MethodHeader;
    #define WmiSetPortParameters_IN_MethodHeader_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiSetPortParameters_IN_MethodHeader_ID 1

    // 
    MSNdis_PortAuthParameters PortParameters;
    #define WmiSetPortParameters_IN_PortParameters_SIZE sizeof(MSNdis_PortAuthParameters)
    #define WmiSetPortParameters_IN_PortParameters_ID 2

} WmiSetPortParameters_IN, *PWmiSetPortParameters_IN;

#define WmiSetPortParameters_IN_SIZE (FIELD_OFFSET(WmiSetPortParameters_IN, PortParameters) + WmiSetPortParameters_IN_PortParameters_SIZE)

typedef struct _WmiSetPortParameters_OUT
{
    // 
    MSNdis_WmiOutputInfo OutputInfo;
    #define WmiSetPortParameters_OUT_OutputInfo_SIZE sizeof(MSNdis_WmiOutputInfo)
    #define WmiSetPortParameters_OUT_OutputInfo_ID 3

} WmiSetPortParameters_OUT, *PWmiSetPortParameters_OUT;

#define WmiSetPortParameters_OUT_SIZE (FIELD_OFFSET(WmiSetPortParameters_OUT, OutputInfo) + WmiSetPortParameters_OUT_OutputInfo_SIZE)


// MSNdis_QueryPciDeviceCustomProperty - MSNdis_QueryPciDeviceCustomProperty
#define MSNdis_QueryPciDeviceCustomPropertyGuid \
    { 0xaa39f5ab,0xe260,0x4d01, { 0x82,0xb0,0xb7,0x37,0xc8,0x80,0xea,0x05 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryPciDeviceCustomProperty_GUID, \
            0xaa39f5ab,0xe260,0x4d01,0x82,0xb0,0xb7,0x37,0xc8,0x80,0xea,0x05);
#endif

//
// Method id definitions for MSNdis_QueryPciDeviceCustomProperty
#define WmiQueryPciDeviceCustomProperty     1
typedef struct _WmiQueryPciDeviceCustomProperty_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryPciDeviceCustomProperty_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryPciDeviceCustomProperty_IN_Header_ID 1

} WmiQueryPciDeviceCustomProperty_IN, *PWmiQueryPciDeviceCustomProperty_IN;

#define WmiQueryPciDeviceCustomProperty_IN_SIZE (FIELD_OFFSET(WmiQueryPciDeviceCustomProperty_IN, Header) + WmiQueryPciDeviceCustomProperty_IN_Header_SIZE)

typedef struct _WmiQueryPciDeviceCustomProperty_OUT
{
    // 
    MSNdis_PciDeviceProperty PciDeviceProperty;
    #define WmiQueryPciDeviceCustomProperty_OUT_PciDeviceProperty_SIZE sizeof(MSNdis_PciDeviceProperty)
    #define WmiQueryPciDeviceCustomProperty_OUT_PciDeviceProperty_ID 2

} WmiQueryPciDeviceCustomProperty_OUT, *PWmiQueryPciDeviceCustomProperty_OUT;

#define WmiQueryPciDeviceCustomProperty_OUT_SIZE (FIELD_OFFSET(WmiQueryPciDeviceCustomProperty_OUT, PciDeviceProperty) + WmiQueryPciDeviceCustomProperty_OUT_PciDeviceProperty_SIZE)


// MSNdis_EnumerateAdapterEx - MSNdis_EnumerateAdapterEx
#define MSNdis_EnumerateAdapterExGuid \
    { 0x16716917,0x4306,0x4be4, { 0x9b,0x5a,0x38,0x09,0xae,0x44,0xb1,0x25 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EnumerateAdapterEx_GUID, \
            0x16716917,0x4306,0x4be4,0x9b,0x5a,0x38,0x09,0xae,0x44,0xb1,0x25);
#endif


typedef struct _MSNdis_EnumerateAdapterEx
{
    // 
    MSNdis_WmiEnumAdapter EnumerateAdapter;
    #define MSNdis_EnumerateAdapterEx_EnumerateAdapter_SIZE sizeof(MSNdis_WmiEnumAdapter)
    #define MSNdis_EnumerateAdapterEx_EnumerateAdapter_ID 1

} MSNdis_EnumerateAdapterEx, *PMSNdis_EnumerateAdapterEx;

#define MSNdis_EnumerateAdapterEx_SIZE (FIELD_OFFSET(MSNdis_EnumerateAdapterEx, EnumerateAdapter) + MSNdis_EnumerateAdapterEx_EnumerateAdapter_SIZE)

// MSNdis_TcpOffloadCurrentConfig - MSNdis_TcpOffloadCurrentConfig
#define MSNdis_TcpOffloadCurrentConfigGuid \
    { 0x68542fed,0x5c74,0x461e, { 0x89,0x34,0x91,0xc6,0xf9,0xc6,0x09,0x60 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TcpOffloadCurrentConfig_GUID, \
            0x68542fed,0x5c74,0x461e,0x89,0x34,0x91,0xc6,0xf9,0xc6,0x09,0x60);
#endif

//
// Method id definitions for MSNdis_TcpOffloadCurrentConfig
#define WmiQueryCurrentOffloadConfig     1
typedef struct _WmiQueryCurrentOffloadConfig_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryCurrentOffloadConfig_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryCurrentOffloadConfig_IN_Header_ID 1

} WmiQueryCurrentOffloadConfig_IN, *PWmiQueryCurrentOffloadConfig_IN;

#define WmiQueryCurrentOffloadConfig_IN_SIZE (FIELD_OFFSET(WmiQueryCurrentOffloadConfig_IN, Header) + WmiQueryCurrentOffloadConfig_IN_Header_SIZE)

typedef struct _WmiQueryCurrentOffloadConfig_OUT
{
    // 
    MSNdis_WmiOffload Offload;
    #define WmiQueryCurrentOffloadConfig_OUT_Offload_SIZE sizeof(MSNdis_WmiOffload)
    #define WmiQueryCurrentOffloadConfig_OUT_Offload_ID 2

} WmiQueryCurrentOffloadConfig_OUT, *PWmiQueryCurrentOffloadConfig_OUT;

#define WmiQueryCurrentOffloadConfig_OUT_SIZE (FIELD_OFFSET(WmiQueryCurrentOffloadConfig_OUT, Offload) + WmiQueryCurrentOffloadConfig_OUT_Offload_SIZE)


// MSNdis_TcpOffloadHardwareConfig - MSNdis_TcpOffloadHardwareConfig
#define MSNdis_TcpOffloadHardwareConfigGuid \
    { 0xcd5f1102,0x590f,0x4ada, { 0xab,0x65,0x5b,0x31,0xb1,0xdc,0x01,0x72 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TcpOffloadHardwareConfig_GUID, \
            0xcd5f1102,0x590f,0x4ada,0xab,0x65,0x5b,0x31,0xb1,0xdc,0x01,0x72);
#endif

//
// Method id definitions for MSNdis_TcpOffloadHardwareConfig
#define WmiQueryHardwareOffloadConfig     1
typedef struct _WmiQueryHardwareOffloadConfig_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryHardwareOffloadConfig_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryHardwareOffloadConfig_IN_Header_ID 1

} WmiQueryHardwareOffloadConfig_IN, *PWmiQueryHardwareOffloadConfig_IN;

#define WmiQueryHardwareOffloadConfig_IN_SIZE (FIELD_OFFSET(WmiQueryHardwareOffloadConfig_IN, Header) + WmiQueryHardwareOffloadConfig_IN_Header_SIZE)

typedef struct _WmiQueryHardwareOffloadConfig_OUT
{
    // 
    MSNdis_WmiOffload Offload;
    #define WmiQueryHardwareOffloadConfig_OUT_Offload_SIZE sizeof(MSNdis_WmiOffload)
    #define WmiQueryHardwareOffloadConfig_OUT_Offload_ID 2

} WmiQueryHardwareOffloadConfig_OUT, *PWmiQueryHardwareOffloadConfig_OUT;

#define WmiQueryHardwareOffloadConfig_OUT_SIZE (FIELD_OFFSET(WmiQueryHardwareOffloadConfig_OUT, Offload) + WmiQueryHardwareOffloadConfig_OUT_Offload_SIZE)


// MSNdis_SetTcpOffloadParameters - MSNdis_SetTcpOffloadParameters
#define MSNdis_SetTcpOffloadParametersGuid \
    { 0x8ead9a22,0x7f69,0x4bc6, { 0x94,0x9a,0xc8,0x18,0x7b,0x07,0x4e,0x61 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_SetTcpOffloadParameters_GUID, \
            0x8ead9a22,0x7f69,0x4bc6,0x94,0x9a,0xc8,0x18,0x7b,0x07,0x4e,0x61);
#endif

//
// Method id definitions for MSNdis_SetTcpOffloadParameters
#define WmiSetTcpOffloadParameters     1
typedef struct _WmiSetTcpOffloadParameters_IN
{
    // 
    MSNdis_WmiMethodHeader MethodHeader;
    #define WmiSetTcpOffloadParameters_IN_MethodHeader_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiSetTcpOffloadParameters_IN_MethodHeader_ID 1

    // 
    MSNdis_TcpOffloadParameters TcpOffloadParameters;
    #define WmiSetTcpOffloadParameters_IN_TcpOffloadParameters_SIZE sizeof(MSNdis_TcpOffloadParameters)
    #define WmiSetTcpOffloadParameters_IN_TcpOffloadParameters_ID 2

} WmiSetTcpOffloadParameters_IN, *PWmiSetTcpOffloadParameters_IN;

#define WmiSetTcpOffloadParameters_IN_SIZE (FIELD_OFFSET(WmiSetTcpOffloadParameters_IN, TcpOffloadParameters) + WmiSetTcpOffloadParameters_IN_TcpOffloadParameters_SIZE)

typedef struct _WmiSetTcpOffloadParameters_OUT
{
    // 
    MSNdis_WmiOutputInfo OutputInfo;
    #define WmiSetTcpOffloadParameters_OUT_OutputInfo_SIZE sizeof(MSNdis_WmiOutputInfo)
    #define WmiSetTcpOffloadParameters_OUT_OutputInfo_ID 3

} WmiSetTcpOffloadParameters_OUT, *PWmiSetTcpOffloadParameters_OUT;

#define WmiSetTcpOffloadParameters_OUT_SIZE (FIELD_OFFSET(WmiSetTcpOffloadParameters_OUT, OutputInfo) + WmiSetTcpOffloadParameters_OUT_OutputInfo_SIZE)


// MSNdis_TcpConnectionOffloadCurrentConfig - MSNdis_TcpConnectionOffloadCurrentConfig
#define MSNdis_TcpConnectionOffloadCurrentConfigGuid \
    { 0x2ee6aef1,0x0851,0x458b, { 0xbf,0x0d,0x79,0x23,0x43,0xd1,0xcd,0xe1 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TcpConnectionOffloadCurrentConfig_GUID, \
            0x2ee6aef1,0x0851,0x458b,0xbf,0x0d,0x79,0x23,0x43,0xd1,0xcd,0xe1);
#endif

//
// Method id definitions for MSNdis_TcpConnectionOffloadCurrentConfig
#define WmiQueryTcpConnectionOffloadCurrentConfig     1
typedef struct _WmiQueryTcpConnectionOffloadCurrentConfig_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryTcpConnectionOffloadCurrentConfig_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryTcpConnectionOffloadCurrentConfig_IN_Header_ID 1

} WmiQueryTcpConnectionOffloadCurrentConfig_IN, *PWmiQueryTcpConnectionOffloadCurrentConfig_IN;

#define WmiQueryTcpConnectionOffloadCurrentConfig_IN_SIZE (FIELD_OFFSET(WmiQueryTcpConnectionOffloadCurrentConfig_IN, Header) + WmiQueryTcpConnectionOffloadCurrentConfig_IN_Header_SIZE)

typedef struct _WmiQueryTcpConnectionOffloadCurrentConfig_OUT
{
    // 
    MSNdis_WmiTcpConnectionOffload Offload;
    #define WmiQueryTcpConnectionOffloadCurrentConfig_OUT_Offload_SIZE sizeof(MSNdis_WmiTcpConnectionOffload)
    #define WmiQueryTcpConnectionOffloadCurrentConfig_OUT_Offload_ID 2

} WmiQueryTcpConnectionOffloadCurrentConfig_OUT, *PWmiQueryTcpConnectionOffloadCurrentConfig_OUT;

#define WmiQueryTcpConnectionOffloadCurrentConfig_OUT_SIZE (FIELD_OFFSET(WmiQueryTcpConnectionOffloadCurrentConfig_OUT, Offload) + WmiQueryTcpConnectionOffloadCurrentConfig_OUT_Offload_SIZE)


// MSNdis_TcpConnectionOffloadHardwareConfig - MSNdis_TcpConnectionOffloadHardwareConfig
#define MSNdis_TcpConnectionOffloadHardwareConfigGuid \
    { 0x8ce71f2c,0xd63a,0x4390, { 0xa4,0x87,0x18,0xfa,0x47,0x26,0x2c,0xeb } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_TcpConnectionOffloadHardwareConfig_GUID, \
            0x8ce71f2c,0xd63a,0x4390,0xa4,0x87,0x18,0xfa,0x47,0x26,0x2c,0xeb);
#endif

//
// Method id definitions for MSNdis_TcpConnectionOffloadHardwareConfig
#define WmiQueryTcpConnectionOffloadHardwareConfig     1
typedef struct _WmiQueryTcpConnectionOffloadHardwareConfig_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryTcpConnectionOffloadHardwareConfig_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryTcpConnectionOffloadHardwareConfig_IN_Header_ID 1

} WmiQueryTcpConnectionOffloadHardwareConfig_IN, *PWmiQueryTcpConnectionOffloadHardwareConfig_IN;

#define WmiQueryTcpConnectionOffloadHardwareConfig_IN_SIZE (FIELD_OFFSET(WmiQueryTcpConnectionOffloadHardwareConfig_IN, Header) + WmiQueryTcpConnectionOffloadHardwareConfig_IN_Header_SIZE)

typedef struct _WmiQueryTcpConnectionOffloadHardwareConfig_OUT
{
    // 
    MSNdis_WmiTcpConnectionOffload Offload;
    #define WmiQueryTcpConnectionOffloadHardwareConfig_OUT_Offload_SIZE sizeof(MSNdis_WmiTcpConnectionOffload)
    #define WmiQueryTcpConnectionOffloadHardwareConfig_OUT_Offload_ID 2

} WmiQueryTcpConnectionOffloadHardwareConfig_OUT, *PWmiQueryTcpConnectionOffloadHardwareConfig_OUT;

#define WmiQueryTcpConnectionOffloadHardwareConfig_OUT_SIZE (FIELD_OFFSET(WmiQueryTcpConnectionOffloadHardwareConfig_OUT, Offload) + WmiQueryTcpConnectionOffloadHardwareConfig_OUT_Offload_SIZE)


// MSNdis_ReceiveScaleCapabilities - MSNdis_ReceiveScaleCapabilities
#define MSNdis_ReceiveScaleCapabilitiesGuid \
    { 0x26c28774,0x4252,0x48fe, { 0xa6,0x10,0xa5,0x8a,0x39,0x8c,0x0e,0xb1 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_ReceiveScaleCapabilities_GUID, \
            0x26c28774,0x4252,0x48fe,0xa6,0x10,0xa5,0x8a,0x39,0x8c,0x0e,0xb1);
#endif

//
// Method id definitions for MSNdis_ReceiveScaleCapabilities
#define WmiQueryReceiveScaleCapabilities     1
typedef struct _WmiQueryReceiveScaleCapabilities_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryReceiveScaleCapabilities_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryReceiveScaleCapabilities_IN_Header_ID 1

} WmiQueryReceiveScaleCapabilities_IN, *PWmiQueryReceiveScaleCapabilities_IN;

#define WmiQueryReceiveScaleCapabilities_IN_SIZE (FIELD_OFFSET(WmiQueryReceiveScaleCapabilities_IN, Header) + WmiQueryReceiveScaleCapabilities_IN_Header_SIZE)

typedef struct _WmiQueryReceiveScaleCapabilities_OUT
{
    // 
    MSNdis_WmiReceiveScaleCapabilities RssCaps;
    #define WmiQueryReceiveScaleCapabilities_OUT_RssCaps_SIZE sizeof(MSNdis_WmiReceiveScaleCapabilities)
    #define WmiQueryReceiveScaleCapabilities_OUT_RssCaps_ID 2

} WmiQueryReceiveScaleCapabilities_OUT, *PWmiQueryReceiveScaleCapabilities_OUT;

#define WmiQueryReceiveScaleCapabilities_OUT_SIZE (FIELD_OFFSET(WmiQueryReceiveScaleCapabilities_OUT, RssCaps) + WmiQueryReceiveScaleCapabilities_OUT_RssCaps_SIZE)


// MSNdis_HDSplitCurrentConfig - MSNdis_HDSplitCurrentConfig
#define MSNdis_HDSplitCurrentConfigGuid \
    { 0x81d1303c,0xab00,0x4e49, { 0x80,0xb1,0x5e,0x6e,0x0b,0xf9,0xbe,0x53 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_HDSplitCurrentConfig_GUID, \
            0x81d1303c,0xab00,0x4e49,0x80,0xb1,0x5e,0x6e,0x0b,0xf9,0xbe,0x53);
#endif

//
// Method id definitions for MSNdis_HDSplitCurrentConfig
#define WmiQueryHDSplitCurrentConfig     1
typedef struct _WmiQueryHDSplitCurrentConfig_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryHDSplitCurrentConfig_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryHDSplitCurrentConfig_IN_Header_ID 1

} WmiQueryHDSplitCurrentConfig_IN, *PWmiQueryHDSplitCurrentConfig_IN;

#define WmiQueryHDSplitCurrentConfig_IN_SIZE (FIELD_OFFSET(WmiQueryHDSplitCurrentConfig_IN, Header) + WmiQueryHDSplitCurrentConfig_IN_Header_SIZE)

typedef struct _WmiQueryHDSplitCurrentConfig_OUT
{
    // 
    MSNdis_WmiHDSplitCurrentConfig HdSplitCurrentConfig;
    #define WmiQueryHDSplitCurrentConfig_OUT_HdSplitCurrentConfig_SIZE sizeof(MSNdis_WmiHDSplitCurrentConfig)
    #define WmiQueryHDSplitCurrentConfig_OUT_HdSplitCurrentConfig_ID 2

} WmiQueryHDSplitCurrentConfig_OUT, *PWmiQueryHDSplitCurrentConfig_OUT;

#define WmiQueryHDSplitCurrentConfig_OUT_SIZE (FIELD_OFFSET(WmiQueryHDSplitCurrentConfig_OUT, HdSplitCurrentConfig) + WmiQueryHDSplitCurrentConfig_OUT_HdSplitCurrentConfig_SIZE)


// MSNdis_SetHDSplitParameters - MSNdis_SetHDSplitParameters
#define MSNdis_SetHDSplitParametersGuid \
    { 0x8c048bea,0x2913,0x4458, { 0xb6,0x8e,0x17,0xf6,0xc1,0xe5,0xc6,0x0e } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_SetHDSplitParameters_GUID, \
            0x8c048bea,0x2913,0x4458,0xb6,0x8e,0x17,0xf6,0xc1,0xe5,0xc6,0x0e);
#endif

//
// Method id definitions for MSNdis_SetHDSplitParameters
#define WmiSetHDSplitParameters     1
typedef struct _WmiSetHDSplitParameters_IN
{
    // 
    MSNdis_WmiMethodHeader MethodHeader;
    #define WmiSetHDSplitParameters_IN_MethodHeader_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiSetHDSplitParameters_IN_MethodHeader_ID 1

    // 
    MSNdis_HDSplitParameters HDSplitParameters;
    #define WmiSetHDSplitParameters_IN_HDSplitParameters_SIZE sizeof(MSNdis_HDSplitParameters)
    #define WmiSetHDSplitParameters_IN_HDSplitParameters_ID 2

} WmiSetHDSplitParameters_IN, *PWmiSetHDSplitParameters_IN;

#define WmiSetHDSplitParameters_IN_SIZE (FIELD_OFFSET(WmiSetHDSplitParameters_IN, HDSplitParameters) + WmiSetHDSplitParameters_IN_HDSplitParameters_SIZE)

typedef struct _WmiSetHDSplitParameters_OUT
{
    // 
    MSNdis_WmiOutputInfo OutputInfo;
    #define WmiSetHDSplitParameters_OUT_OutputInfo_SIZE sizeof(MSNdis_WmiOutputInfo)
    #define WmiSetHDSplitParameters_OUT_OutputInfo_ID 3

} WmiSetHDSplitParameters_OUT, *PWmiSetHDSplitParameters_OUT;

#define WmiSetHDSplitParameters_OUT_SIZE (FIELD_OFFSET(WmiSetHDSplitParameters_OUT, OutputInfo) + WmiSetHDSplitParameters_OUT_OutputInfo_SIZE)


// MSNdis_QueryPhysicalMediumTypeEx - MSNdis_QueryPhysicalMediumTypeEx
#define MSNdis_QueryPhysicalMediumTypeExGuid \
    { 0x899e7782,0x035b,0x43f9, { 0x8b,0xb6,0x2b,0x58,0x97,0x16,0x12,0xe5 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryPhysicalMediumTypeEx_GUID, \
            0x899e7782,0x035b,0x43f9,0x8b,0xb6,0x2b,0x58,0x97,0x16,0x12,0xe5);
#endif

//
// Method id definitions for MSNdis_QueryPhysicalMediumTypeEx
#define WmiQueryPhysicalMediumTypeEx     1
typedef struct _WmiQueryPhysicalMediumTypeEx_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryPhysicalMediumTypeEx_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryPhysicalMediumTypeEx_IN_Header_ID 1

} WmiQueryPhysicalMediumTypeEx_IN, *PWmiQueryPhysicalMediumTypeEx_IN;

#define WmiQueryPhysicalMediumTypeEx_IN_SIZE (FIELD_OFFSET(WmiQueryPhysicalMediumTypeEx_IN, Header) + WmiQueryPhysicalMediumTypeEx_IN_Header_SIZE)

typedef struct _WmiQueryPhysicalMediumTypeEx_OUT
{
    // 
    ULONG NdisPhysicalMediumTypeEx;
    #define WmiQueryPhysicalMediumTypeEx_OUT_NdisPhysicalMediumTypeEx_SIZE sizeof(ULONG)
    #define WmiQueryPhysicalMediumTypeEx_OUT_NdisPhysicalMediumTypeEx_ID 2

} WmiQueryPhysicalMediumTypeEx_OUT, *PWmiQueryPhysicalMediumTypeEx_OUT;

#define WmiQueryPhysicalMediumTypeEx_OUT_SIZE (FIELD_OFFSET(WmiQueryPhysicalMediumTypeEx_OUT, NdisPhysicalMediumTypeEx) + WmiQueryPhysicalMediumTypeEx_OUT_NdisPhysicalMediumTypeEx_SIZE)


// MSNdis_QueryReceiveFilterHardwareCapabilities - MSNdis_QueryReceiveFilterHardwareCapabilities
#define MSNdis_QueryReceiveFilterHardwareCapabilitiesGuid \
    { 0x3f2c1419,0x83bc,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryReceiveFilterHardwareCapabilities_GUID, \
            0x3f2c1419,0x83bc,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif

//
// Method id definitions for MSNdis_QueryReceiveFilterHardwareCapabilities
#define WmiQueryReceiveFilterHardwareCapabilities     1
typedef struct _WmiQueryReceiveFilterHardwareCapabilities_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryReceiveFilterHardwareCapabilities_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryReceiveFilterHardwareCapabilities_IN_Header_ID 1

} WmiQueryReceiveFilterHardwareCapabilities_IN, *PWmiQueryReceiveFilterHardwareCapabilities_IN;

#define WmiQueryReceiveFilterHardwareCapabilities_IN_SIZE (FIELD_OFFSET(WmiQueryReceiveFilterHardwareCapabilities_IN, Header) + WmiQueryReceiveFilterHardwareCapabilities_IN_Header_SIZE)

typedef struct _WmiQueryReceiveFilterHardwareCapabilities_OUT
{
    // 
    MSNdis_ReceiveFilterCapabilities ReceiveFilterHardwareCapabilities;
    #define WmiQueryReceiveFilterHardwareCapabilities_OUT_ReceiveFilterHardwareCapabilities_SIZE sizeof(MSNdis_ReceiveFilterCapabilities)
    #define WmiQueryReceiveFilterHardwareCapabilities_OUT_ReceiveFilterHardwareCapabilities_ID 2

} WmiQueryReceiveFilterHardwareCapabilities_OUT, *PWmiQueryReceiveFilterHardwareCapabilities_OUT;

#define WmiQueryReceiveFilterHardwareCapabilities_OUT_SIZE (FIELD_OFFSET(WmiQueryReceiveFilterHardwareCapabilities_OUT, ReceiveFilterHardwareCapabilities) + WmiQueryReceiveFilterHardwareCapabilities_OUT_ReceiveFilterHardwareCapabilities_SIZE)


// MSNdis_QueryReceiveFilterGlobalParameters - MSNdis_QueryReceiveFilterGlobalParameters
#define MSNdis_QueryReceiveFilterGlobalParametersGuid \
    { 0x3f2c141a,0x83bc,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryReceiveFilterGlobalParameters_GUID, \
            0x3f2c141a,0x83bc,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif

//
// Method id definitions for MSNdis_QueryReceiveFilterGlobalParameters
#define WmiQueryReceiveFilterGlobalParameters     1
typedef struct _WmiQueryReceiveFilterGlobalParameters_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryReceiveFilterGlobalParameters_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryReceiveFilterGlobalParameters_IN_Header_ID 1

} WmiQueryReceiveFilterGlobalParameters_IN, *PWmiQueryReceiveFilterGlobalParameters_IN;

#define WmiQueryReceiveFilterGlobalParameters_IN_SIZE (FIELD_OFFSET(WmiQueryReceiveFilterGlobalParameters_IN, Header) + WmiQueryReceiveFilterGlobalParameters_IN_Header_SIZE)

typedef struct _WmiQueryReceiveFilterGlobalParameters_OUT
{
    // 
    MSNdis_ReceiveFilterGlobalParameters ReceiveFilterGlobalParameters;
    #define WmiQueryReceiveFilterGlobalParameters_OUT_ReceiveFilterGlobalParameters_SIZE sizeof(MSNdis_ReceiveFilterGlobalParameters)
    #define WmiQueryReceiveFilterGlobalParameters_OUT_ReceiveFilterGlobalParameters_ID 2

} WmiQueryReceiveFilterGlobalParameters_OUT, *PWmiQueryReceiveFilterGlobalParameters_OUT;

#define WmiQueryReceiveFilterGlobalParameters_OUT_SIZE (FIELD_OFFSET(WmiQueryReceiveFilterGlobalParameters_OUT, ReceiveFilterGlobalParameters) + WmiQueryReceiveFilterGlobalParameters_OUT_ReceiveFilterGlobalParameters_SIZE)


// MSNdis_EnumerateReceiveFilters - MSNdis_EnumerateReceiveFilters
#define MSNdis_EnumerateReceiveFiltersGuid \
    { 0x3f2c141d,0x83bc,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EnumerateReceiveFilters_GUID, \
            0x3f2c141d,0x83bc,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif

//
// Method id definitions for MSNdis_EnumerateReceiveFilters
#define WmiEnumReceiveFilters     1
typedef struct _WmiEnumReceiveFilters_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiEnumReceiveFilters_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiEnumReceiveFilters_IN_Header_ID 1

    // 
    MSNdis_ReceiveFilterInfoArray ReceiveFilterInfoArray;
    #define WmiEnumReceiveFilters_IN_ReceiveFilterInfoArray_SIZE sizeof(MSNdis_ReceiveFilterInfoArray)
    #define WmiEnumReceiveFilters_IN_ReceiveFilterInfoArray_ID 2

} WmiEnumReceiveFilters_IN, *PWmiEnumReceiveFilters_IN;

#define WmiEnumReceiveFilters_IN_SIZE (FIELD_OFFSET(WmiEnumReceiveFilters_IN, ReceiveFilterInfoArray) + WmiEnumReceiveFilters_IN_ReceiveFilterInfoArray_SIZE)

typedef struct _WmiEnumReceiveFilters_OUT
{
    // 
    MSNdis_ReceiveFilterInfoArray ReceiveFilterInfoArray;
    #define WmiEnumReceiveFilters_OUT_ReceiveFilterInfoArray_SIZE sizeof(MSNdis_ReceiveFilterInfoArray)
    #define WmiEnumReceiveFilters_OUT_ReceiveFilterInfoArray_ID 2

} WmiEnumReceiveFilters_OUT, *PWmiEnumReceiveFilters_OUT;

#define WmiEnumReceiveFilters_OUT_SIZE (FIELD_OFFSET(WmiEnumReceiveFilters_OUT, ReceiveFilterInfoArray) + WmiEnumReceiveFilters_OUT_ReceiveFilterInfoArray_SIZE)


// MSNdis_QueryReceiveFilterParameters - MSNdis_QueryReceiveFilterParameters
#define MSNdis_QueryReceiveFilterParametersGuid \
    { 0x3f2c141e,0x83bc,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryReceiveFilterParameters_GUID, \
            0x3f2c141e,0x83bc,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif

//
// Method id definitions for MSNdis_QueryReceiveFilterParameters
#define WmiQueryReceiveFilterParameters     1
typedef struct _WmiQueryReceiveFilterParameters_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryReceiveFilterParameters_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryReceiveFilterParameters_IN_Header_ID 1

    // 
    MSNdis_ReceiveFilterParameters ReceiveFilterParameters;
    #define WmiQueryReceiveFilterParameters_IN_ReceiveFilterParameters_SIZE sizeof(MSNdis_ReceiveFilterParameters)
    #define WmiQueryReceiveFilterParameters_IN_ReceiveFilterParameters_ID 2

} WmiQueryReceiveFilterParameters_IN, *PWmiQueryReceiveFilterParameters_IN;

#define WmiQueryReceiveFilterParameters_IN_SIZE (FIELD_OFFSET(WmiQueryReceiveFilterParameters_IN, ReceiveFilterParameters) + WmiQueryReceiveFilterParameters_IN_ReceiveFilterParameters_SIZE)

typedef struct _WmiQueryReceiveFilterParameters_OUT
{
    // 
    MSNdis_ReceiveFilterParameters ReceiveFilterParameters;
    #define WmiQueryReceiveFilterParameters_OUT_ReceiveFilterParameters_SIZE sizeof(MSNdis_ReceiveFilterParameters)
    #define WmiQueryReceiveFilterParameters_OUT_ReceiveFilterParameters_ID 2

} WmiQueryReceiveFilterParameters_OUT, *PWmiQueryReceiveFilterParameters_OUT;

#define WmiQueryReceiveFilterParameters_OUT_SIZE (FIELD_OFFSET(WmiQueryReceiveFilterParameters_OUT, ReceiveFilterParameters) + WmiQueryReceiveFilterParameters_OUT_ReceiveFilterParameters_SIZE)


// MSNdis_QueryReceiveFilterCurrentCapabilities - MSNdis_QueryReceiveFilterCurrentCapabilities
#define MSNdis_QueryReceiveFilterCurrentCapabilitiesGuid \
    { 0x4054e80f,0x2bc1,0x4ccc, { 0xb0,0x33,0x4a,0xbc,0x0c,0x4a,0x1e,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryReceiveFilterCurrentCapabilities_GUID, \
            0x4054e80f,0x2bc1,0x4ccc,0xb0,0x33,0x4a,0xbc,0x0c,0x4a,0x1e,0x8c);
#endif

//
// Method id definitions for MSNdis_QueryReceiveFilterCurrentCapabilities
#define WmiQueryReceiveFilterCurrentCapabilities     1
typedef struct _WmiQueryReceiveFilterCurrentCapabilities_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryReceiveFilterCurrentCapabilities_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryReceiveFilterCurrentCapabilities_IN_Header_ID 1

} WmiQueryReceiveFilterCurrentCapabilities_IN, *PWmiQueryReceiveFilterCurrentCapabilities_IN;

#define WmiQueryReceiveFilterCurrentCapabilities_IN_SIZE (FIELD_OFFSET(WmiQueryReceiveFilterCurrentCapabilities_IN, Header) + WmiQueryReceiveFilterCurrentCapabilities_IN_Header_SIZE)

typedef struct _WmiQueryReceiveFilterCurrentCapabilities_OUT
{
    // 
    MSNdis_ReceiveFilterCapabilities ReceiveFilterCurrentCapabilities;
    #define WmiQueryReceiveFilterCurrentCapabilities_OUT_ReceiveFilterCurrentCapabilities_SIZE sizeof(MSNdis_ReceiveFilterCapabilities)
    #define WmiQueryReceiveFilterCurrentCapabilities_OUT_ReceiveFilterCurrentCapabilities_ID 2

} WmiQueryReceiveFilterCurrentCapabilities_OUT, *PWmiQueryReceiveFilterCurrentCapabilities_OUT;

#define WmiQueryReceiveFilterCurrentCapabilities_OUT_SIZE (FIELD_OFFSET(WmiQueryReceiveFilterCurrentCapabilities_OUT, ReceiveFilterCurrentCapabilities) + WmiQueryReceiveFilterCurrentCapabilities_OUT_ReceiveFilterCurrentCapabilities_SIZE)


// MSNdis_QueryNicSwitchHardwareCapabilities - MSNdis_QueryNicSwitchHardwareCapabilities
#define MSNdis_QueryNicSwitchHardwareCapabilitiesGuid \
    { 0x37cab40c,0xd1e8,0x4301, { 0x8c,0x1d,0x58,0x46,0x5e,0x0c,0x4c,0x0f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryNicSwitchHardwareCapabilities_GUID, \
            0x37cab40c,0xd1e8,0x4301,0x8c,0x1d,0x58,0x46,0x5e,0x0c,0x4c,0x0f);
#endif

//
// Method id definitions for MSNdis_QueryNicSwitchHardwareCapabilities
#define WmiQueryNICSwitchHardwareCapabilities     1
typedef struct _WmiQueryNICSwitchHardwareCapabilities_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryNICSwitchHardwareCapabilities_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryNICSwitchHardwareCapabilities_IN_Header_ID 1

} WmiQueryNICSwitchHardwareCapabilities_IN, *PWmiQueryNICSwitchHardwareCapabilities_IN;

#define WmiQueryNICSwitchHardwareCapabilities_IN_SIZE (FIELD_OFFSET(WmiQueryNICSwitchHardwareCapabilities_IN, Header) + WmiQueryNICSwitchHardwareCapabilities_IN_Header_SIZE)

typedef struct _WmiQueryNICSwitchHardwareCapabilities_OUT
{
    // 
    MSNdis_NicSwitchCapabilities NicSwitchHardwareCapabilities;
    #define WmiQueryNICSwitchHardwareCapabilities_OUT_NicSwitchHardwareCapabilities_SIZE sizeof(MSNdis_NicSwitchCapabilities)
    #define WmiQueryNICSwitchHardwareCapabilities_OUT_NicSwitchHardwareCapabilities_ID 2

} WmiQueryNICSwitchHardwareCapabilities_OUT, *PWmiQueryNICSwitchHardwareCapabilities_OUT;

#define WmiQueryNICSwitchHardwareCapabilities_OUT_SIZE (FIELD_OFFSET(WmiQueryNICSwitchHardwareCapabilities_OUT, NicSwitchHardwareCapabilities) + WmiQueryNICSwitchHardwareCapabilities_OUT_NicSwitchHardwareCapabilities_SIZE)


// MSNdis_QueryNicSwitchCurrentCapabilities - MSNdis_QueryNicSwitchCurrentCapabilities
#define MSNdis_QueryNicSwitchCurrentCapabilitiesGuid \
    { 0xe76fdaf3,0x0be7,0x4d95, { 0x87,0xe9,0x5a,0xea,0xd4,0xb5,0x90,0xe9 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryNicSwitchCurrentCapabilities_GUID, \
            0xe76fdaf3,0x0be7,0x4d95,0x87,0xe9,0x5a,0xea,0xd4,0xb5,0x90,0xe9);
#endif

//
// Method id definitions for MSNdis_QueryNicSwitchCurrentCapabilities
#define WmiQueryNICSwitchCurrentCapabilities     1
typedef struct _WmiQueryNICSwitchCurrentCapabilities_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryNICSwitchCurrentCapabilities_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryNICSwitchCurrentCapabilities_IN_Header_ID 1

} WmiQueryNICSwitchCurrentCapabilities_IN, *PWmiQueryNICSwitchCurrentCapabilities_IN;

#define WmiQueryNICSwitchCurrentCapabilities_IN_SIZE (FIELD_OFFSET(WmiQueryNICSwitchCurrentCapabilities_IN, Header) + WmiQueryNICSwitchCurrentCapabilities_IN_Header_SIZE)

typedef struct _WmiQueryNICSwitchCurrentCapabilities_OUT
{
    // 
    MSNdis_NicSwitchCapabilities NicSwitchCurrentCapabilities;
    #define WmiQueryNICSwitchCurrentCapabilities_OUT_NicSwitchCurrentCapabilities_SIZE sizeof(MSNdis_NicSwitchCapabilities)
    #define WmiQueryNICSwitchCurrentCapabilities_OUT_NicSwitchCurrentCapabilities_ID 2

} WmiQueryNICSwitchCurrentCapabilities_OUT, *PWmiQueryNICSwitchCurrentCapabilities_OUT;

#define WmiQueryNICSwitchCurrentCapabilities_OUT_SIZE (FIELD_OFFSET(WmiQueryNICSwitchCurrentCapabilities_OUT, NicSwitchCurrentCapabilities) + WmiQueryNICSwitchCurrentCapabilities_OUT_NicSwitchCurrentCapabilities_SIZE)


// MSNdis_QueryReceiveQueueParameters - MSNdis_QueryReceiveQueueParameters
#define MSNdis_QueryReceiveQueueParametersGuid \
    { 0x3f2c141c,0x83bc,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_QueryReceiveQueueParameters_GUID, \
            0x3f2c141c,0x83bc,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif

//
// Method id definitions for MSNdis_QueryReceiveQueueParameters
#define WmiQueryReceiveQueueParameters     1
typedef struct _WmiQueryReceiveQueueParameters_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiQueryReceiveQueueParameters_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiQueryReceiveQueueParameters_IN_Header_ID 1

    // 
    MSNdis_ReceiveQueueParameters ReceiveQueueParameters;
    #define WmiQueryReceiveQueueParameters_IN_ReceiveQueueParameters_SIZE sizeof(MSNdis_ReceiveQueueParameters)
    #define WmiQueryReceiveQueueParameters_IN_ReceiveQueueParameters_ID 2

} WmiQueryReceiveQueueParameters_IN, *PWmiQueryReceiveQueueParameters_IN;

#define WmiQueryReceiveQueueParameters_IN_SIZE (FIELD_OFFSET(WmiQueryReceiveQueueParameters_IN, ReceiveQueueParameters) + WmiQueryReceiveQueueParameters_IN_ReceiveQueueParameters_SIZE)

typedef struct _WmiQueryReceiveQueueParameters_OUT
{
    // 
    MSNdis_ReceiveQueueParameters ReceiveQueueParameters;
    #define WmiQueryReceiveQueueParameters_OUT_ReceiveQueueParameters_SIZE sizeof(MSNdis_ReceiveQueueParameters)
    #define WmiQueryReceiveQueueParameters_OUT_ReceiveQueueParameters_ID 2

} WmiQueryReceiveQueueParameters_OUT, *PWmiQueryReceiveQueueParameters_OUT;

#define WmiQueryReceiveQueueParameters_OUT_SIZE (FIELD_OFFSET(WmiQueryReceiveQueueParameters_OUT, ReceiveQueueParameters) + WmiQueryReceiveQueueParameters_OUT_ReceiveQueueParameters_SIZE)


// MSNdis_EnumerateReceiveQueues - MSNdis_EnumerateReceiveQueues
#define MSNdis_EnumerateReceiveQueuesGuid \
    { 0x3f2c141b,0x83bc,0x11dd, { 0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_EnumerateReceiveQueues_GUID, \
            0x3f2c141b,0x83bc,0x11dd,0x94,0xb8,0x00,0x1d,0x09,0x16,0x2b,0xc3);
#endif

//
// Method id definitions for MSNdis_EnumerateReceiveQueues
#define WmiEnumReceiveQueues     1
typedef struct _WmiEnumReceiveQueues_IN
{
    // 
    MSNdis_WmiMethodHeader Header;
    #define WmiEnumReceiveQueues_IN_Header_SIZE sizeof(MSNdis_WmiMethodHeader)
    #define WmiEnumReceiveQueues_IN_Header_ID 1

    // 
    MSNdis_ReceiveQueueInfoArray ReceiveQueueInfoArray;
    #define WmiEnumReceiveQueues_IN_ReceiveQueueInfoArray_SIZE sizeof(MSNdis_ReceiveQueueInfoArray)
    #define WmiEnumReceiveQueues_IN_ReceiveQueueInfoArray_ID 2

} WmiEnumReceiveQueues_IN, *PWmiEnumReceiveQueues_IN;

#define WmiEnumReceiveQueues_IN_SIZE (FIELD_OFFSET(WmiEnumReceiveQueues_IN, ReceiveQueueInfoArray) + WmiEnumReceiveQueues_IN_ReceiveQueueInfoArray_SIZE)

typedef struct _WmiEnumReceiveQueues_OUT
{
    // 
    MSNdis_ReceiveQueueInfoArray ReceiveQueueInfoArray;
    #define WmiEnumReceiveQueues_OUT_ReceiveQueueInfoArray_SIZE sizeof(MSNdis_ReceiveQueueInfoArray)
    #define WmiEnumReceiveQueues_OUT_ReceiveQueueInfoArray_ID 2

} WmiEnumReceiveQueues_OUT, *PWmiEnumReceiveQueues_OUT;

#define WmiEnumReceiveQueues_OUT_SIZE (FIELD_OFFSET(WmiEnumReceiveQueues_OUT, ReceiveQueueInfoArray) + WmiEnumReceiveQueues_OUT_ReceiveQueueInfoArray_SIZE)


// MSNdis_80211_BaseServiceSetIdentifier - MSNdis_80211_BaseServiceSetIdentifier
#define MSNdis_80211_BaseServiceSetIdentifierGuid \
    { 0x2504b6c2,0x1fa5,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_BaseServiceSetIdentifier_GUID, \
            0x2504b6c2,0x1fa5,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_BaseServiceSetIdentifier
{
    // 
    UCHAR Ndis80211MacAddress[6];
    #define MSNdis_80211_BaseServiceSetIdentifier_Ndis80211MacAddress_SIZE sizeof(UCHAR[6])
    #define MSNdis_80211_BaseServiceSetIdentifier_Ndis80211MacAddress_ID 1

} MSNdis_80211_BaseServiceSetIdentifier, *PMSNdis_80211_BaseServiceSetIdentifier;

#define MSNdis_80211_BaseServiceSetIdentifier_SIZE (FIELD_OFFSET(MSNdis_80211_BaseServiceSetIdentifier, Ndis80211MacAddress) + MSNdis_80211_BaseServiceSetIdentifier_Ndis80211MacAddress_SIZE)

// MSNdis_80211_ServiceSetIdentifier - MSNdis_80211_ServiceSetIdentifier
#define MSNdis_80211_ServiceSetIdentifierGuid \
    { 0x7d2a90ea,0x2041,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_ServiceSetIdentifier_GUID, \
            0x7d2a90ea,0x2041,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_ServiceSetIdentifier
{
    // 
    UCHAR Ndis80211SsId[33];
    #define MSNdis_80211_ServiceSetIdentifier_Ndis80211SsId_SIZE sizeof(UCHAR[33])
    #define MSNdis_80211_ServiceSetIdentifier_Ndis80211SsId_ID 1

} MSNdis_80211_ServiceSetIdentifier, *PMSNdis_80211_ServiceSetIdentifier;

#define MSNdis_80211_ServiceSetIdentifier_SIZE (FIELD_OFFSET(MSNdis_80211_ServiceSetIdentifier, Ndis80211SsId) + MSNdis_80211_ServiceSetIdentifier_Ndis80211SsId_SIZE)

// MSNdis_80211_NetworkType - MSNdis_80211_NetworkType
#define MSNdis_80211_NetworkTypeGuid \
    { 0xe779ab61,0xb9ab,0x11d4, { 0xb6,0x75,0x00,0x20,0x48,0x57,0x03,0x37 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_NetworkType_GUID, \
            0xe779ab61,0xb9ab,0x11d4,0xb6,0x75,0x00,0x20,0x48,0x57,0x03,0x37);
#endif


typedef struct _MSNdis_80211_NetworkType
{
    // 
    ULONG Ndis80211NetworkType;
    #define MSNdis_80211_NetworkType_Ndis80211NetworkType_SIZE sizeof(ULONG)
    #define MSNdis_80211_NetworkType_Ndis80211NetworkType_ID 1

} MSNdis_80211_NetworkType, *PMSNdis_80211_NetworkType;

#define MSNdis_80211_NetworkType_SIZE (FIELD_OFFSET(MSNdis_80211_NetworkType, Ndis80211NetworkType) + MSNdis_80211_NetworkType_Ndis80211NetworkType_SIZE)

// MSNdis_80211_NetworkTypesSupported - MSNdis_80211_NetworkTypesSupported
#define MSNdis_80211_NetworkTypesSupportedGuid \
    { 0x8531d6e6,0x2041,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_NetworkTypesSupported_GUID, \
            0x8531d6e6,0x2041,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_NetworkTypesSupported
{
    // 
    ULONG NumberOfItems;
    #define MSNdis_80211_NetworkTypesSupported_NumberOfItems_SIZE sizeof(ULONG)
    #define MSNdis_80211_NetworkTypesSupported_NumberOfItems_ID 1

    // 
    MSNdis_80211_NetworkType Ndis80211NetworkTypes[1];
    #define MSNdis_80211_NetworkTypesSupported_Ndis80211NetworkTypes_ID 2

} MSNdis_80211_NetworkTypesSupported, *PMSNdis_80211_NetworkTypesSupported;

// MSNdis_80211_NetworkTypeInUse - MSNdis_80211_NetworkTypeInUse
#define MSNdis_80211_NetworkTypeInUseGuid \
    { 0x857e2326,0x2041,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_NetworkTypeInUse_GUID, \
            0x857e2326,0x2041,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_NetworkTypeInUse
{
    // 
    MSNdis_80211_NetworkType Ndis80211NetworkTypeInUse;
    #define MSNdis_80211_NetworkTypeInUse_Ndis80211NetworkTypeInUse_SIZE sizeof(MSNdis_80211_NetworkType)
    #define MSNdis_80211_NetworkTypeInUse_Ndis80211NetworkTypeInUse_ID 1

} MSNdis_80211_NetworkTypeInUse, *PMSNdis_80211_NetworkTypeInUse;

#define MSNdis_80211_NetworkTypeInUse_SIZE (FIELD_OFFSET(MSNdis_80211_NetworkTypeInUse, Ndis80211NetworkTypeInUse) + MSNdis_80211_NetworkTypeInUse_Ndis80211NetworkTypeInUse_SIZE)

// MSNdis_80211_PowerMode - MSNdis_80211_PowerMode
#define MSNdis_80211_PowerModeGuid \
    { 0x85be837c,0x2041,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_PowerMode_GUID, \
            0x85be837c,0x2041,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_PowerMode
{
    // 
    ULONG Ndis80211PowerMode;
    #define MSNdis_80211_PowerMode_Ndis80211PowerMode_SIZE sizeof(ULONG)
    #define MSNdis_80211_PowerMode_Ndis80211PowerMode_ID 1

} MSNdis_80211_PowerMode, *PMSNdis_80211_PowerMode;

#define MSNdis_80211_PowerMode_SIZE (FIELD_OFFSET(MSNdis_80211_PowerMode, Ndis80211PowerMode) + MSNdis_80211_PowerMode_Ndis80211PowerMode_SIZE)

// MSNdis_80211_TransmitPowerLevel - MSNdis_80211_TransmitPowerLevel
#define MSNdis_80211_TransmitPowerLevelGuid \
    { 0x11e6ba76,0x2053,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_TransmitPowerLevel_GUID, \
            0x11e6ba76,0x2053,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_TransmitPowerLevel
{
    // 
    ULONG Ndis80211TransmitPowerLevel;
    #define MSNdis_80211_TransmitPowerLevel_Ndis80211TransmitPowerLevel_SIZE sizeof(ULONG)
    #define MSNdis_80211_TransmitPowerLevel_Ndis80211TransmitPowerLevel_ID 1

} MSNdis_80211_TransmitPowerLevel, *PMSNdis_80211_TransmitPowerLevel;

#define MSNdis_80211_TransmitPowerLevel_SIZE (FIELD_OFFSET(MSNdis_80211_TransmitPowerLevel, Ndis80211TransmitPowerLevel) + MSNdis_80211_TransmitPowerLevel_Ndis80211TransmitPowerLevel_SIZE)

// MSNdis_80211_ReceivedSignalStrength - MSNdis_80211_ReceivedSignalStrength
#define MSNdis_80211_ReceivedSignalStrengthGuid \
    { 0x1507db16,0x2053,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_ReceivedSignalStrength_GUID, \
            0x1507db16,0x2053,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_ReceivedSignalStrength
{
    // 
    LONG Ndis80211ReceivedSignalStrength;
    #define MSNdis_80211_ReceivedSignalStrength_Ndis80211ReceivedSignalStrength_SIZE sizeof(LONG)
    #define MSNdis_80211_ReceivedSignalStrength_Ndis80211ReceivedSignalStrength_ID 1

} MSNdis_80211_ReceivedSignalStrength, *PMSNdis_80211_ReceivedSignalStrength;

#define MSNdis_80211_ReceivedSignalStrength_SIZE (FIELD_OFFSET(MSNdis_80211_ReceivedSignalStrength, Ndis80211ReceivedSignalStrength) + MSNdis_80211_ReceivedSignalStrength_Ndis80211ReceivedSignalStrength_SIZE)

// MSNdis_80211_ReceivedSignalStrengthEventTrigger - MSNdis_80211_ReceivedSignalStrengthEventTrigger
#define MSNdis_80211_ReceivedSignalStrengthEventTriggerGuid \
    { 0x155689b8,0x2053,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_ReceivedSignalStrengthEventTrigger_GUID, \
            0x155689b8,0x2053,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_ReceivedSignalStrengthEventTrigger
{
    // 
    LONG Ndis80211ReceivedSignalStrengthTrigger;
    #define MSNdis_80211_ReceivedSignalStrengthEventTrigger_Ndis80211ReceivedSignalStrengthTrigger_SIZE sizeof(LONG)
    #define MSNdis_80211_ReceivedSignalStrengthEventTrigger_Ndis80211ReceivedSignalStrengthTrigger_ID 1

} MSNdis_80211_ReceivedSignalStrengthEventTrigger, *PMSNdis_80211_ReceivedSignalStrengthEventTrigger;

#define MSNdis_80211_ReceivedSignalStrengthEventTrigger_SIZE (FIELD_OFFSET(MSNdis_80211_ReceivedSignalStrengthEventTrigger, Ndis80211ReceivedSignalStrengthTrigger) + MSNdis_80211_ReceivedSignalStrengthEventTrigger_Ndis80211ReceivedSignalStrengthTrigger_SIZE)

// MSNdis_80211_NetworkInfrastructure - MSNdis_80211_NetworkInfrastructure
#define MSNdis_80211_NetworkInfrastructureGuid \
    { 0x34e1fa48,0xb9b6,0x11d4, { 0xb6,0x75,0x00,0x20,0x48,0x57,0x03,0x37 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_NetworkInfrastructure_GUID, \
            0x34e1fa48,0xb9b6,0x11d4,0xb6,0x75,0x00,0x20,0x48,0x57,0x03,0x37);
#endif


typedef struct _MSNdis_80211_NetworkInfrastructure
{
    // 
    ULONG Ndis80211NetworkInfrastructure;
    #define MSNdis_80211_NetworkInfrastructure_Ndis80211NetworkInfrastructure_SIZE sizeof(ULONG)
    #define MSNdis_80211_NetworkInfrastructure_Ndis80211NetworkInfrastructure_ID 1

} MSNdis_80211_NetworkInfrastructure, *PMSNdis_80211_NetworkInfrastructure;

#define MSNdis_80211_NetworkInfrastructure_SIZE (FIELD_OFFSET(MSNdis_80211_NetworkInfrastructure, Ndis80211NetworkInfrastructure) + MSNdis_80211_NetworkInfrastructure_Ndis80211NetworkInfrastructure_SIZE)

// MSNdis_80211_ConfigurationFH - MSNdis_80211_ConfigurationFH
#define MSNdis_80211_ConfigurationFHGuid \
    { 0x4a800b8c,0x2068,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_ConfigurationFH_GUID, \
            0x4a800b8c,0x2068,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_ConfigurationFH
{
    // 
    ULONG FHLength;
    #define MSNdis_80211_ConfigurationFH_FHLength_SIZE sizeof(ULONG)
    #define MSNdis_80211_ConfigurationFH_FHLength_ID 1

    // 
    ULONG HopPattern;
    #define MSNdis_80211_ConfigurationFH_HopPattern_SIZE sizeof(ULONG)
    #define MSNdis_80211_ConfigurationFH_HopPattern_ID 2

    // 
    ULONG HopSet;
    #define MSNdis_80211_ConfigurationFH_HopSet_SIZE sizeof(ULONG)
    #define MSNdis_80211_ConfigurationFH_HopSet_ID 3

    // 
    ULONG DwellTime;
    #define MSNdis_80211_ConfigurationFH_DwellTime_SIZE sizeof(ULONG)
    #define MSNdis_80211_ConfigurationFH_DwellTime_ID 4

} MSNdis_80211_ConfigurationFH, *PMSNdis_80211_ConfigurationFH;

#define MSNdis_80211_ConfigurationFH_SIZE (FIELD_OFFSET(MSNdis_80211_ConfigurationFH, DwellTime) + MSNdis_80211_ConfigurationFH_DwellTime_SIZE)

// MSNdis_80211_ConfigurationInfo - MSNdis_80211_ConfigurationInfo
#define MSNdis_80211_ConfigurationInfoGuid \
    { 0x220c16fc,0xb9a8,0x11d4, { 0xb6,0x75,0x00,0x20,0x48,0x57,0x03,0x37 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_ConfigurationInfo_GUID, \
            0x220c16fc,0xb9a8,0x11d4,0xb6,0x75,0x00,0x20,0x48,0x57,0x03,0x37);
#endif


typedef struct _MSNdis_80211_ConfigurationInfo
{
    // 
    ULONG ConfigLength;
    #define MSNdis_80211_ConfigurationInfo_ConfigLength_SIZE sizeof(ULONG)
    #define MSNdis_80211_ConfigurationInfo_ConfigLength_ID 1

    // 
    ULONG BeaconPeriod;
    #define MSNdis_80211_ConfigurationInfo_BeaconPeriod_SIZE sizeof(ULONG)
    #define MSNdis_80211_ConfigurationInfo_BeaconPeriod_ID 2

    // 
    ULONG ATIMWindow;
    #define MSNdis_80211_ConfigurationInfo_ATIMWindow_SIZE sizeof(ULONG)
    #define MSNdis_80211_ConfigurationInfo_ATIMWindow_ID 3

    // 
    ULONG DSConfig;
    #define MSNdis_80211_ConfigurationInfo_DSConfig_SIZE sizeof(ULONG)
    #define MSNdis_80211_ConfigurationInfo_DSConfig_ID 4

    // 
    MSNdis_80211_ConfigurationFH FHConfig;
    #define MSNdis_80211_ConfigurationInfo_FHConfig_SIZE sizeof(MSNdis_80211_ConfigurationFH)
    #define MSNdis_80211_ConfigurationInfo_FHConfig_ID 5

} MSNdis_80211_ConfigurationInfo, *PMSNdis_80211_ConfigurationInfo;

#define MSNdis_80211_ConfigurationInfo_SIZE (FIELD_OFFSET(MSNdis_80211_ConfigurationInfo, FHConfig) + MSNdis_80211_ConfigurationInfo_FHConfig_SIZE)

// MSNdis_80211_WLanBssId - MSNdis_80211_WLanBssId
#define MSNdis_80211_WLanBssIdGuid \
    { 0x6929e718,0x2062,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_WLanBssId_GUID, \
            0x6929e718,0x2062,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_WLanBssId
{
    // 
    ULONG Ndis80211WLanBssIdLength;
    #define MSNdis_80211_WLanBssId_Ndis80211WLanBssIdLength_SIZE sizeof(ULONG)
    #define MSNdis_80211_WLanBssId_Ndis80211WLanBssIdLength_ID 1

    // 
    UCHAR Ndis80211MacAddress[6];
    #define MSNdis_80211_WLanBssId_Ndis80211MacAddress_SIZE sizeof(UCHAR[6])
    #define MSNdis_80211_WLanBssId_Ndis80211MacAddress_ID 2

    // 
    USHORT Reserved;
    #define MSNdis_80211_WLanBssId_Reserved_SIZE sizeof(USHORT)
    #define MSNdis_80211_WLanBssId_Reserved_ID 3

    // 
    ULONG Ndis80211SsIdLength;
    #define MSNdis_80211_WLanBssId_Ndis80211SsIdLength_SIZE sizeof(ULONG)
    #define MSNdis_80211_WLanBssId_Ndis80211SsIdLength_ID 4

    // 
    UCHAR Ndis80211SsId[32];
    #define MSNdis_80211_WLanBssId_Ndis80211SsId_SIZE sizeof(UCHAR[32])
    #define MSNdis_80211_WLanBssId_Ndis80211SsId_ID 5

    // 
    ULONG Ndis80211Privacy;
    #define MSNdis_80211_WLanBssId_Ndis80211Privacy_SIZE sizeof(ULONG)
    #define MSNdis_80211_WLanBssId_Ndis80211Privacy_ID 6

    // 
    ULONG Ndis80211Rssi;
    #define MSNdis_80211_WLanBssId_Ndis80211Rssi_SIZE sizeof(ULONG)
    #define MSNdis_80211_WLanBssId_Ndis80211Rssi_ID 7

    // 
    MSNdis_80211_NetworkType Ndis80211NetworkTypeInUse;
    #define MSNdis_80211_WLanBssId_Ndis80211NetworkTypeInUse_SIZE sizeof(MSNdis_80211_NetworkType)
    #define MSNdis_80211_WLanBssId_Ndis80211NetworkTypeInUse_ID 8

    // 
    MSNdis_80211_ConfigurationInfo Ndis80211Configuration;
    #define MSNdis_80211_WLanBssId_Ndis80211Configuration_SIZE sizeof(MSNdis_80211_ConfigurationInfo)
    #define MSNdis_80211_WLanBssId_Ndis80211Configuration_ID 9

    // 
    MSNdis_80211_NetworkInfrastructure Ndis80211InfrastructureMode;
    #define MSNdis_80211_WLanBssId_Ndis80211InfrastructureMode_SIZE sizeof(MSNdis_80211_NetworkInfrastructure)
    #define MSNdis_80211_WLanBssId_Ndis80211InfrastructureMode_ID 10

    // 
    UCHAR Ndis80211SupportedRate[8];
    #define MSNdis_80211_WLanBssId_Ndis80211SupportedRate_SIZE sizeof(UCHAR[8])
    #define MSNdis_80211_WLanBssId_Ndis80211SupportedRate_ID 11

} MSNdis_80211_WLanBssId, *PMSNdis_80211_WLanBssId;

#define MSNdis_80211_WLanBssId_SIZE (FIELD_OFFSET(MSNdis_80211_WLanBssId, Ndis80211SupportedRate) + MSNdis_80211_WLanBssId_Ndis80211SupportedRate_SIZE)

// MSNdis_80211_BSSIList - MSNdis_80211_BSSIList
#define MSNdis_80211_BSSIListGuid \
    { 0x69526f9a,0x2062,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_BSSIList_GUID, \
            0x69526f9a,0x2062,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_BSSIList
{
    // 
    ULONG NumberOfItems;
    #define MSNdis_80211_BSSIList_NumberOfItems_SIZE sizeof(ULONG)
    #define MSNdis_80211_BSSIList_NumberOfItems_ID 1

    // 
    MSNdis_80211_WLanBssId Ndis80211BSSIList[1];
    #define MSNdis_80211_BSSIList_Ndis80211BSSIList_ID 2

} MSNdis_80211_BSSIList, *PMSNdis_80211_BSSIList;

// MSNdis_80211_InfrastructureMode - MSNdis_80211_InfrastructureMode
#define MSNdis_80211_InfrastructureModeGuid \
    { 0x697d5a7e,0x2062,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_InfrastructureMode_GUID, \
            0x697d5a7e,0x2062,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_InfrastructureMode
{
    // 
    MSNdis_80211_NetworkInfrastructure Ndis80211InfrastructureMode;
    #define MSNdis_80211_InfrastructureMode_Ndis80211InfrastructureMode_SIZE sizeof(MSNdis_80211_NetworkInfrastructure)
    #define MSNdis_80211_InfrastructureMode_Ndis80211InfrastructureMode_ID 1

} MSNdis_80211_InfrastructureMode, *PMSNdis_80211_InfrastructureMode;

#define MSNdis_80211_InfrastructureMode_SIZE (FIELD_OFFSET(MSNdis_80211_InfrastructureMode, Ndis80211InfrastructureMode) + MSNdis_80211_InfrastructureMode_Ndis80211InfrastructureMode_SIZE)

// MSNdis_80211_FragmentationThreshold - MSNdis_80211_FragmentationThreshold
#define MSNdis_80211_FragmentationThresholdGuid \
    { 0x69aaa7c4,0x2062,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_FragmentationThreshold_GUID, \
            0x69aaa7c4,0x2062,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_FragmentationThreshold
{
    // 
    ULONG Ndis80211FragmentationThreshold;
    #define MSNdis_80211_FragmentationThreshold_Ndis80211FragmentationThreshold_SIZE sizeof(ULONG)
    #define MSNdis_80211_FragmentationThreshold_Ndis80211FragmentationThreshold_ID 1

} MSNdis_80211_FragmentationThreshold, *PMSNdis_80211_FragmentationThreshold;

#define MSNdis_80211_FragmentationThreshold_SIZE (FIELD_OFFSET(MSNdis_80211_FragmentationThreshold, Ndis80211FragmentationThreshold) + MSNdis_80211_FragmentationThreshold_Ndis80211FragmentationThreshold_SIZE)

// MSNdis_80211_RTSThreshold - MSNdis_80211_RTSThreshold
#define MSNdis_80211_RTSThresholdGuid \
    { 0x0134d07e,0x2064,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_RTSThreshold_GUID, \
            0x0134d07e,0x2064,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_RTSThreshold
{
    // 
    ULONG Ndis80211RTSThreshold;
    #define MSNdis_80211_RTSThreshold_Ndis80211RTSThreshold_SIZE sizeof(ULONG)
    #define MSNdis_80211_RTSThreshold_Ndis80211RTSThreshold_ID 1

} MSNdis_80211_RTSThreshold, *PMSNdis_80211_RTSThreshold;

#define MSNdis_80211_RTSThreshold_SIZE (FIELD_OFFSET(MSNdis_80211_RTSThreshold, Ndis80211RTSThreshold) + MSNdis_80211_RTSThreshold_Ndis80211RTSThreshold_SIZE)

// MSNdis_80211_NumberOfAntennas - MSNdis_80211_NumberOfAntennas
#define MSNdis_80211_NumberOfAntennasGuid \
    { 0x01779336,0x2064,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_NumberOfAntennas_GUID, \
            0x01779336,0x2064,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_NumberOfAntennas
{
    // 
    ULONG Ndis80211NumberOfAntennas;
    #define MSNdis_80211_NumberOfAntennas_Ndis80211NumberOfAntennas_SIZE sizeof(ULONG)
    #define MSNdis_80211_NumberOfAntennas_Ndis80211NumberOfAntennas_ID 1

} MSNdis_80211_NumberOfAntennas, *PMSNdis_80211_NumberOfAntennas;

#define MSNdis_80211_NumberOfAntennas_SIZE (FIELD_OFFSET(MSNdis_80211_NumberOfAntennas, Ndis80211NumberOfAntennas) + MSNdis_80211_NumberOfAntennas_Ndis80211NumberOfAntennas_SIZE)

// MSNdis_80211_ReceiveAntennaSelected - MSNdis_80211_ReceiveAntennaSelected
#define MSNdis_80211_ReceiveAntennaSelectedGuid \
    { 0x01ac07a2,0x2064,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_ReceiveAntennaSelected_GUID, \
            0x01ac07a2,0x2064,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_ReceiveAntennaSelected
{
    // 
    ULONG Ndis80211ReceiveAntennaSelected;
    #define MSNdis_80211_ReceiveAntennaSelected_Ndis80211ReceiveAntennaSelected_SIZE sizeof(ULONG)
    #define MSNdis_80211_ReceiveAntennaSelected_Ndis80211ReceiveAntennaSelected_ID 1

} MSNdis_80211_ReceiveAntennaSelected, *PMSNdis_80211_ReceiveAntennaSelected;

#define MSNdis_80211_ReceiveAntennaSelected_SIZE (FIELD_OFFSET(MSNdis_80211_ReceiveAntennaSelected, Ndis80211ReceiveAntennaSelected) + MSNdis_80211_ReceiveAntennaSelected_Ndis80211ReceiveAntennaSelected_SIZE)

// MSNdis_80211_TransmitAntennaSelected - MSNdis_80211_TransmitAntennaSelected
#define MSNdis_80211_TransmitAntennaSelectedGuid \
    { 0x01dbb74a,0x2064,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_TransmitAntennaSelected_GUID, \
            0x01dbb74a,0x2064,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_TransmitAntennaSelected
{
    // 
    ULONG Ndis80211TransmitAntennaSelected;
    #define MSNdis_80211_TransmitAntennaSelected_Ndis80211TransmitAntennaSelected_SIZE sizeof(ULONG)
    #define MSNdis_80211_TransmitAntennaSelected_Ndis80211TransmitAntennaSelected_ID 1

} MSNdis_80211_TransmitAntennaSelected, *PMSNdis_80211_TransmitAntennaSelected;

#define MSNdis_80211_TransmitAntennaSelected_SIZE (FIELD_OFFSET(MSNdis_80211_TransmitAntennaSelected, Ndis80211TransmitAntennaSelected) + MSNdis_80211_TransmitAntennaSelected_Ndis80211TransmitAntennaSelected_SIZE)

// MSNdis_80211_DataRates - MSNdis_80211_DataRates
#define MSNdis_80211_DataRatesGuid \
    { 0x49db8722,0x2068,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_DataRates_GUID, \
            0x49db8722,0x2068,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_DataRates
{
    // 
    UCHAR Ndis80211DataRate[8];
    #define MSNdis_80211_DataRates_Ndis80211DataRate_SIZE sizeof(UCHAR[8])
    #define MSNdis_80211_DataRates_Ndis80211DataRate_ID 1

} MSNdis_80211_DataRates, *PMSNdis_80211_DataRates;

#define MSNdis_80211_DataRates_SIZE (FIELD_OFFSET(MSNdis_80211_DataRates, Ndis80211DataRate) + MSNdis_80211_DataRates_Ndis80211DataRate_SIZE)

// MSNdis_80211_DesiredDataRates - MSNdis_80211_DesiredDataRates
#define MSNdis_80211_DesiredDataRatesGuid \
    { 0x452ee08e,0x2536,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_DesiredDataRates_GUID, \
            0x452ee08e,0x2536,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_DesiredDataRates
{
    // 
    UCHAR Ndis80211DesiredRate[8];
    #define MSNdis_80211_DesiredDataRates_Ndis80211DesiredRate_SIZE sizeof(UCHAR[8])
    #define MSNdis_80211_DesiredDataRates_Ndis80211DesiredRate_ID 1

} MSNdis_80211_DesiredDataRates, *PMSNdis_80211_DesiredDataRates;

#define MSNdis_80211_DesiredDataRates_SIZE (FIELD_OFFSET(MSNdis_80211_DesiredDataRates, Ndis80211DesiredRate) + MSNdis_80211_DesiredDataRates_Ndis80211DesiredRate_SIZE)

// MSNdis_80211_Configuration - MSNdis_80211_Configuration
#define MSNdis_80211_ConfigurationGuid \
    { 0x4a4df982,0x2068,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_Configuration_GUID, \
            0x4a4df982,0x2068,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_Configuration
{
    // 
    MSNdis_80211_ConfigurationInfo Ndis80211Config;
    #define MSNdis_80211_Configuration_Ndis80211Config_SIZE sizeof(MSNdis_80211_ConfigurationInfo)
    #define MSNdis_80211_Configuration_Ndis80211Config_ID 1

} MSNdis_80211_Configuration, *PMSNdis_80211_Configuration;

#define MSNdis_80211_Configuration_SIZE (FIELD_OFFSET(MSNdis_80211_Configuration, Ndis80211Config) + MSNdis_80211_Configuration_Ndis80211Config_SIZE)

// MSNdis_80211_Statistics - MSNdis_80211_Statistics
#define MSNdis_80211_StatisticsGuid \
    { 0x42bb73b0,0x2129,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_Statistics_GUID, \
            0x42bb73b0,0x2129,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_Statistics
{
    // 
    ULONG StatisticsLength;
    #define MSNdis_80211_Statistics_StatisticsLength_SIZE sizeof(ULONG)
    #define MSNdis_80211_Statistics_StatisticsLength_ID 1

    // 
    ULONGLONG TransmittedFragmentCount;
    #define MSNdis_80211_Statistics_TransmittedFragmentCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_TransmittedFragmentCount_ID 2

    // 
    ULONGLONG MulticastTransmittedFrameCount;
    #define MSNdis_80211_Statistics_MulticastTransmittedFrameCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_MulticastTransmittedFrameCount_ID 3

    // 
    ULONGLONG FailedCount;
    #define MSNdis_80211_Statistics_FailedCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_FailedCount_ID 4

    // 
    ULONGLONG RetryCount;
    #define MSNdis_80211_Statistics_RetryCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_RetryCount_ID 5

    // 
    ULONGLONG MultipleRetryCount;
    #define MSNdis_80211_Statistics_MultipleRetryCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_MultipleRetryCount_ID 6

    // 
    ULONGLONG RTSSuccessCount;
    #define MSNdis_80211_Statistics_RTSSuccessCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_RTSSuccessCount_ID 7

    // 
    ULONGLONG RTSFailureCount;
    #define MSNdis_80211_Statistics_RTSFailureCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_RTSFailureCount_ID 8

    // 
    ULONGLONG ACKFailureCount;
    #define MSNdis_80211_Statistics_ACKFailureCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_ACKFailureCount_ID 9

    // 
    ULONGLONG FrameDuplicateCount;
    #define MSNdis_80211_Statistics_FrameDuplicateCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_FrameDuplicateCount_ID 10

    // 
    ULONGLONG ReceivedFragmentCount;
    #define MSNdis_80211_Statistics_ReceivedFragmentCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_ReceivedFragmentCount_ID 11

    // 
    ULONGLONG MulticastReceivedFrameCount;
    #define MSNdis_80211_Statistics_MulticastReceivedFrameCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_MulticastReceivedFrameCount_ID 12

    // 
    ULONGLONG FCSErrorCount;
    #define MSNdis_80211_Statistics_FCSErrorCount_SIZE sizeof(ULONGLONG)
    #define MSNdis_80211_Statistics_FCSErrorCount_ID 13

} MSNdis_80211_Statistics, *PMSNdis_80211_Statistics;

#define MSNdis_80211_Statistics_SIZE (FIELD_OFFSET(MSNdis_80211_Statistics, FCSErrorCount) + MSNdis_80211_Statistics_FCSErrorCount_SIZE)

// MSNdis_80211_AddWEP - MSNdis_80211_AddWEP
#define MSNdis_80211_AddWEPGuid \
    { 0x4307bff0,0x2129,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_AddWEP_GUID, \
            0x4307bff0,0x2129,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_AddWEP
{
    // 
    ULONG Length;
    #define MSNdis_80211_AddWEP_Length_SIZE sizeof(ULONG)
    #define MSNdis_80211_AddWEP_Length_ID 1

    // 
    ULONG KeyIndex;
    #define MSNdis_80211_AddWEP_KeyIndex_SIZE sizeof(ULONG)
    #define MSNdis_80211_AddWEP_KeyIndex_ID 2

    // 
    ULONG KeyLength;
    #define MSNdis_80211_AddWEP_KeyLength_SIZE sizeof(ULONG)
    #define MSNdis_80211_AddWEP_KeyLength_ID 3

    // 
    UCHAR KeyMaterial[1];
    #define MSNdis_80211_AddWEP_KeyMaterial_ID 4

} MSNdis_80211_AddWEP, *PMSNdis_80211_AddWEP;

// MSNdis_80211_RemoveWEP - MSNdis_80211_RemoveWEP
#define MSNdis_80211_RemoveWEPGuid \
    { 0x433c345c,0x2129,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_RemoveWEP_GUID, \
            0x433c345c,0x2129,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_RemoveWEP
{
    // 
    ULONG Ndis80211KeyIndex;
    #define MSNdis_80211_RemoveWEP_Ndis80211KeyIndex_SIZE sizeof(ULONG)
    #define MSNdis_80211_RemoveWEP_Ndis80211KeyIndex_ID 1

} MSNdis_80211_RemoveWEP, *PMSNdis_80211_RemoveWEP;

#define MSNdis_80211_RemoveWEP_SIZE (FIELD_OFFSET(MSNdis_80211_RemoveWEP, Ndis80211KeyIndex) + MSNdis_80211_RemoveWEP_Ndis80211KeyIndex_SIZE)

// MSNdis_80211_Disassociate - MSNdis_80211_Disassociate
#define MSNdis_80211_DisassociateGuid \
    { 0x43671f40,0x2129,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_Disassociate_GUID, \
            0x43671f40,0x2129,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_Disassociate
{
    // 
    ULONG UnusedParameter;
    #define MSNdis_80211_Disassociate_UnusedParameter_SIZE sizeof(ULONG)
    #define MSNdis_80211_Disassociate_UnusedParameter_ID 1

} MSNdis_80211_Disassociate, *PMSNdis_80211_Disassociate;

#define MSNdis_80211_Disassociate_SIZE (FIELD_OFFSET(MSNdis_80211_Disassociate, UnusedParameter) + MSNdis_80211_Disassociate_UnusedParameter_SIZE)

// MSNdis_80211_BssIdListScan - MSNdis_80211_BssIdListScan
#define MSNdis_80211_BssIdListScanGuid \
    { 0x0d9e01e1,0xba70,0x11d4, { 0xb6,0x75,0x00,0x20,0x48,0x57,0x03,0x37 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_BssIdListScan_GUID, \
            0x0d9e01e1,0xba70,0x11d4,0xb6,0x75,0x00,0x20,0x48,0x57,0x03,0x37);
#endif


typedef struct _MSNdis_80211_BssIdListScan
{
    // 
    ULONG UnusedParameter;
    #define MSNdis_80211_BssIdListScan_UnusedParameter_SIZE sizeof(ULONG)
    #define MSNdis_80211_BssIdListScan_UnusedParameter_ID 1

} MSNdis_80211_BssIdListScan, *PMSNdis_80211_BssIdListScan;

#define MSNdis_80211_BssIdListScan_SIZE (FIELD_OFFSET(MSNdis_80211_BssIdListScan, UnusedParameter) + MSNdis_80211_BssIdListScan_UnusedParameter_SIZE)

// MSNdis_80211_AuthenticationMode - MSNdis_80211_AuthenticationMode
#define MSNdis_80211_AuthenticationModeGuid \
    { 0x43920a24,0x2129,0x11d4, { 0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_AuthenticationMode_GUID, \
            0x43920a24,0x2129,0x11d4,0x97,0xeb,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_AuthenticationMode
{
    // 
    ULONG Ndis80211AuthenticationMode;
    #define MSNdis_80211_AuthenticationMode_Ndis80211AuthenticationMode_SIZE sizeof(ULONG)
    #define MSNdis_80211_AuthenticationMode_Ndis80211AuthenticationMode_ID 1

} MSNdis_80211_AuthenticationMode, *PMSNdis_80211_AuthenticationMode;

#define MSNdis_80211_AuthenticationMode_SIZE (FIELD_OFFSET(MSNdis_80211_AuthenticationMode, Ndis80211AuthenticationMode) + MSNdis_80211_AuthenticationMode_Ndis80211AuthenticationMode_SIZE)

// MSNdis_80211_PrivacyFilter - MSNdis_80211_PrivacyFilter
#define MSNdis_80211_PrivacyFilterGuid \
    { 0x6733c4e9,0x4792,0x11d4, { 0x97,0xf1,0x00,0xc0,0x4f,0x79,0xc4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_PrivacyFilter_GUID, \
            0x6733c4e9,0x4792,0x11d4,0x97,0xf1,0x00,0xc0,0x4f,0x79,0xc4,0x03);
#endif


typedef struct _MSNdis_80211_PrivacyFilter
{
    // 
    ULONG Ndis80211PrivacyFilter;
    #define MSNdis_80211_PrivacyFilter_Ndis80211PrivacyFilter_SIZE sizeof(ULONG)
    #define MSNdis_80211_PrivacyFilter_Ndis80211PrivacyFilter_ID 1

} MSNdis_80211_PrivacyFilter, *PMSNdis_80211_PrivacyFilter;

#define MSNdis_80211_PrivacyFilter_SIZE (FIELD_OFFSET(MSNdis_80211_PrivacyFilter, Ndis80211PrivacyFilter) + MSNdis_80211_PrivacyFilter_Ndis80211PrivacyFilter_SIZE)

// MSNdis_80211_WEPStatus - MSNdis_80211_WEPStatus
#define MSNdis_80211_WEPStatusGuid \
    { 0xb027a21f,0x3cfa,0x4125, { 0x80,0x0b,0x3f,0x7a,0x18,0xfd,0xdc,0xdc } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_WEPStatus_GUID, \
            0xb027a21f,0x3cfa,0x4125,0x80,0x0b,0x3f,0x7a,0x18,0xfd,0xdc,0xdc);
#endif


typedef struct _MSNdis_80211_WEPStatus
{
    // 
    ULONG Ndis80211WEPStatus;
    #define MSNdis_80211_WEPStatus_Ndis80211WEPStatus_SIZE sizeof(ULONG)
    #define MSNdis_80211_WEPStatus_Ndis80211WEPStatus_ID 1

} MSNdis_80211_WEPStatus, *PMSNdis_80211_WEPStatus;

#define MSNdis_80211_WEPStatus_SIZE (FIELD_OFFSET(MSNdis_80211_WEPStatus, Ndis80211WEPStatus) + MSNdis_80211_WEPStatus_Ndis80211WEPStatus_SIZE)

// MSNdis_80211_ReloadDefaults - MSNdis_80211_ReloadDefaults
#define MSNdis_80211_ReloadDefaultsGuid \
    { 0x748b14e8,0x32ee,0x4425, { 0xb9,0x1b,0xc9,0x84,0x8c,0x58,0xb5,0x5a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_80211_ReloadDefaults_GUID, \
            0x748b14e8,0x32ee,0x4425,0xb9,0x1b,0xc9,0x84,0x8c,0x58,0xb5,0x5a);
#endif


typedef struct _MSNdis_80211_ReloadDefaults
{
    // 
    ULONG Ndis80211ReloadDefaults;
    #define MSNdis_80211_ReloadDefaults_Ndis80211ReloadDefaults_SIZE sizeof(ULONG)
    #define MSNdis_80211_ReloadDefaults_Ndis80211ReloadDefaults_ID 1

} MSNdis_80211_ReloadDefaults, *PMSNdis_80211_ReloadDefaults;

#define MSNdis_80211_ReloadDefaults_SIZE (FIELD_OFFSET(MSNdis_80211_ReloadDefaults, Ndis80211ReloadDefaults) + MSNdis_80211_ReloadDefaults_Ndis80211ReloadDefaults_SIZE)

// MSNdis_PMAdminConfigState - MSNdis_PMAdminConfigState
#define MSNdis_PMAdminConfigStateGuid \
    { 0x0cffd0fc,0x8333,0x4000, { 0x9a,0x3b,0x20,0x07,0x35,0xd6,0x98,0xf9 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PMAdminConfigState_GUID, \
            0x0cffd0fc,0x8333,0x4000,0x9a,0x3b,0x20,0x07,0x35,0xd6,0x98,0xf9);
#endif


typedef struct _MSNdis_PMAdminConfigState
{
    // 
    ULONG NdisPMAdminConfigState;
    #define MSNdis_PMAdminConfigState_NdisPMAdminConfigState_SIZE sizeof(ULONG)
    #define MSNdis_PMAdminConfigState_NdisPMAdminConfigState_ID 1

} MSNdis_PMAdminConfigState, *PMSNdis_PMAdminConfigState;

#define MSNdis_PMAdminConfigState_SIZE (FIELD_OFFSET(MSNdis_PMAdminConfigState, NdisPMAdminConfigState) + MSNdis_PMAdminConfigState_NdisPMAdminConfigState_SIZE)

// MSNdis_PMAdminConfigParam - MSNdis_PMAdminConfigParam
#define MSNdis_PMAdminConfigParamGuid \
    { 0x492dc449,0x13d9,0x4bd6, { 0x89,0xd4,0x96,0xe3,0x53,0x4e,0x6a,0x05 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PMAdminConfigParam_GUID, \
            0x492dc449,0x13d9,0x4bd6,0x89,0xd4,0x96,0xe3,0x53,0x4e,0x6a,0x05);
#endif


typedef struct _MSNdis_PMAdminConfigParam
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_PMAdminConfigParam_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_PMAdminConfigParam_Header_ID 1

    // 
    MSNdis_PMAdminConfigState WakeOnPattern;
    #define MSNdis_PMAdminConfigParam_WakeOnPattern_SIZE sizeof(MSNdis_PMAdminConfigState)
    #define MSNdis_PMAdminConfigParam_WakeOnPattern_ID 2

    // 
    MSNdis_PMAdminConfigState WakeOnMagicPacket;
    #define MSNdis_PMAdminConfigParam_WakeOnMagicPacket_SIZE sizeof(MSNdis_PMAdminConfigState)
    #define MSNdis_PMAdminConfigParam_WakeOnMagicPacket_ID 3

    // 
    MSNdis_PMAdminConfigState DeviceSleepOnDisconnect;
    #define MSNdis_PMAdminConfigParam_DeviceSleepOnDisconnect_SIZE sizeof(MSNdis_PMAdminConfigState)
    #define MSNdis_PMAdminConfigParam_DeviceSleepOnDisconnect_ID 4

    // 
    MSNdis_PMAdminConfigState PMARPOffload;
    #define MSNdis_PMAdminConfigParam_PMARPOffload_SIZE sizeof(MSNdis_PMAdminConfigState)
    #define MSNdis_PMAdminConfigParam_PMARPOffload_ID 5

    // 
    MSNdis_PMAdminConfigState PMNDOffload;
    #define MSNdis_PMAdminConfigParam_PMNDOffload_SIZE sizeof(MSNdis_PMAdminConfigState)
    #define MSNdis_PMAdminConfigParam_PMNDOffload_ID 6

    // 
    MSNdis_PMAdminConfigState PMWiFiRekeyOffload;
    #define MSNdis_PMAdminConfigParam_PMWiFiRekeyOffload_SIZE sizeof(MSNdis_PMAdminConfigState)
    #define MSNdis_PMAdminConfigParam_PMWiFiRekeyOffload_ID 7

} MSNdis_PMAdminConfigParam, *PMSNdis_PMAdminConfigParam;

#define MSNdis_PMAdminConfigParam_SIZE (FIELD_OFFSET(MSNdis_PMAdminConfigParam, PMWiFiRekeyOffload) + MSNdis_PMAdminConfigParam_PMWiFiRekeyOffload_SIZE)

// MSNdis_PMAdminConfig - MSNdis_PMAdminConfig
// Control power management related standardized keywords
#define MSNdis_PMAdminConfigGuid \
    { 0x1528d111,0x708a,0x4ca4, { 0x92,0x15,0xc0,0x57,0x71,0x16,0x1c,0xda } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PMAdminConfig_GUID, \
            0x1528d111,0x708a,0x4ca4,0x92,0x15,0xc0,0x57,0x71,0x16,0x1c,0xda);
#endif


typedef struct _MSNdis_PMAdminConfig
{
    // 
    MSNdis_PMAdminConfigParam PMAdminConfigParam;
    #define MSNdis_PMAdminConfig_PMAdminConfigParam_SIZE sizeof(MSNdis_PMAdminConfigParam)
    #define MSNdis_PMAdminConfig_PMAdminConfigParam_ID 1

} MSNdis_PMAdminConfig, *PMSNdis_PMAdminConfig;

#define MSNdis_PMAdminConfig_SIZE (FIELD_OFFSET(MSNdis_PMAdminConfig, PMAdminConfigParam) + MSNdis_PMAdminConfig_PMAdminConfigParam_SIZE)

// MSNdis_PMCapabilityState - MSNdis_PMCapabilityState
#define MSNdis_PMCapabilityStateGuid \
    { 0xc1cc6857,0x1a26,0x4f6d, { 0xab,0x98,0x29,0x1f,0x0c,0x3b,0xbd,0x4c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PMCapabilityState_GUID, \
            0xc1cc6857,0x1a26,0x4f6d,0xab,0x98,0x29,0x1f,0x0c,0x3b,0xbd,0x4c);
#endif


typedef struct _MSNdis_PMCapabilityState
{
    // 
    ULONG NdisPMCapabilityState;
    #define MSNdis_PMCapabilityState_NdisPMCapabilityState_SIZE sizeof(ULONG)
    #define MSNdis_PMCapabilityState_NdisPMCapabilityState_ID 1

} MSNdis_PMCapabilityState, *PMSNdis_PMCapabilityState;

#define MSNdis_PMCapabilityState_SIZE (FIELD_OFFSET(MSNdis_PMCapabilityState, NdisPMCapabilityState) + MSNdis_PMCapabilityState_NdisPMCapabilityState_SIZE)

// MSNdis_PMCapabilitiesParam - MSNdis_PMCapabilitiesParam
#define MSNdis_PMCapabilitiesParamGuid \
    { 0xcccb122d,0xd5c4,0x4ee1, { 0x80,0x01,0xb8,0xad,0x6d,0x3c,0xe8,0x76 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PMCapabilitiesParam_GUID, \
            0xcccb122d,0xd5c4,0x4ee1,0x80,0x01,0xb8,0xad,0x6d,0x3c,0xe8,0x76);
#endif


typedef struct _MSNdis_PMCapabilitiesParam
{
    // 
    MSNdis_ObjectHeader Header;
    #define MSNdis_PMCapabilitiesParam_Header_SIZE sizeof(MSNdis_ObjectHeader)
    #define MSNdis_PMCapabilitiesParam_Header_ID 1

    // 
    MSNdis_PMCapabilityState WakeOnPattern;
    #define MSNdis_PMCapabilitiesParam_WakeOnPattern_SIZE sizeof(MSNdis_PMCapabilityState)
    #define MSNdis_PMCapabilitiesParam_WakeOnPattern_ID 2

    // 
    MSNdis_PMCapabilityState WakeOnMagicPacket;
    #define MSNdis_PMCapabilitiesParam_WakeOnMagicPacket_SIZE sizeof(MSNdis_PMCapabilityState)
    #define MSNdis_PMCapabilitiesParam_WakeOnMagicPacket_ID 3

    // 
    MSNdis_PMCapabilityState DeviceSleepOnDisconnect;
    #define MSNdis_PMCapabilitiesParam_DeviceSleepOnDisconnect_SIZE sizeof(MSNdis_PMCapabilityState)
    #define MSNdis_PMCapabilitiesParam_DeviceSleepOnDisconnect_ID 4

    // 
    MSNdis_PMCapabilityState PMARPOffload;
    #define MSNdis_PMCapabilitiesParam_PMARPOffload_SIZE sizeof(MSNdis_PMCapabilityState)
    #define MSNdis_PMCapabilitiesParam_PMARPOffload_ID 5

    // 
    MSNdis_PMCapabilityState PMNDOffload;
    #define MSNdis_PMCapabilitiesParam_PMNDOffload_SIZE sizeof(MSNdis_PMCapabilityState)
    #define MSNdis_PMCapabilitiesParam_PMNDOffload_ID 6

    // 
    MSNdis_PMCapabilityState PMWiFiRekeyOffload;
    #define MSNdis_PMCapabilitiesParam_PMWiFiRekeyOffload_SIZE sizeof(MSNdis_PMCapabilityState)
    #define MSNdis_PMCapabilitiesParam_PMWiFiRekeyOffload_ID 7

} MSNdis_PMCapabilitiesParam, *PMSNdis_PMCapabilitiesParam;

#define MSNdis_PMCapabilitiesParam_SIZE (FIELD_OFFSET(MSNdis_PMCapabilitiesParam, PMWiFiRekeyOffload) + MSNdis_PMCapabilitiesParam_PMWiFiRekeyOffload_SIZE)

// MSNdis_PMCapabilities - MSNdis_PMCapabilities
// Query power management active capabilities
#define MSNdis_PMCapabilitiesGuid \
    { 0xb2cf76e3,0xb3ae,0x4394, { 0xa0,0x1f,0x33,0x8c,0x98,0x70,0xe9,0x39 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_PMCapabilities_GUID, \
            0xb2cf76e3,0xb3ae,0x4394,0xa0,0x1f,0x33,0x8c,0x98,0x70,0xe9,0x39);
#endif


typedef struct _MSNdis_PMCapabilities
{
    // 
    MSNdis_PMCapabilitiesParam PMCapabilitiesParam;
    #define MSNdis_PMCapabilities_PMCapabilitiesParam_SIZE sizeof(MSNdis_PMCapabilitiesParam)
    #define MSNdis_PMCapabilities_PMCapabilitiesParam_ID 1

} MSNdis_PMCapabilities, *PMSNdis_PMCapabilities;

#define MSNdis_PMCapabilities_SIZE (FIELD_OFFSET(MSNdis_PMCapabilities, PMCapabilitiesParam) + MSNdis_PMCapabilities_PMCapabilitiesParam_SIZE)

// MSNdis_StatusResetStart - MSNdis_StatusResetStart
#define MSNdis_StatusResetStartGuid \
    { 0x981f2d76,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusResetStart_GUID, \
            0x981f2d76,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


// MSNdis_StatusResetEnd - MSNdis_StatusResetEnd
#define MSNdis_StatusResetEndGuid \
    { 0x981f2d77,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusResetEnd_GUID, \
            0x981f2d77,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


// MSNdis_StatusMediaConnect - MSNdis_StatusMediaConnect
#define MSNdis_StatusMediaConnectGuid \
    { 0x981f2d7d,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusMediaConnect_GUID, \
            0x981f2d7d,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


// MSNdis_StatusMediaDisconnect - MSNdis_StatusMediaDisconnect
#define MSNdis_StatusMediaDisconnectGuid \
    { 0x981f2d7e,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusMediaDisconnect_GUID, \
            0x981f2d7e,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


// MSNdis_StatusMediaSpecificIndication - MSNdis_StatusMediaSpecificIndication
#define MSNdis_StatusMediaSpecificIndicationGuid \
    { 0x981f2d84,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusMediaSpecificIndication_GUID, \
            0x981f2d84,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_StatusMediaSpecificIndication
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusMediaSpecificIndication_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusMediaSpecificIndication_NumberElements_ID 1

    // 
    UCHAR NdisStatusMediaSpecificIndication[1];
    #define MSNdis_StatusMediaSpecificIndication_NdisStatusMediaSpecificIndication_ID 2

} MSNdis_StatusMediaSpecificIndication, *PMSNdis_StatusMediaSpecificIndication;

// MSNdis_StatusLinkSpeedChange - MSNdis_StatusLinkSpeedChange
#define MSNdis_StatusLinkSpeedChangeGuid \
    { 0x981f2d85,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusLinkSpeedChange_GUID, \
            0x981f2d85,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_StatusLinkSpeedChange
{
    // 
    MSNdis_NetworkLinkSpeed NdisStatusLinkSpeedChange;
    #define MSNdis_StatusLinkSpeedChange_NdisStatusLinkSpeedChange_SIZE sizeof(MSNdis_NetworkLinkSpeed)
    #define MSNdis_StatusLinkSpeedChange_NdisStatusLinkSpeedChange_ID 1

} MSNdis_StatusLinkSpeedChange, *PMSNdis_StatusLinkSpeedChange;

#define MSNdis_StatusLinkSpeedChange_SIZE (FIELD_OFFSET(MSNdis_StatusLinkSpeedChange, NdisStatusLinkSpeedChange) + MSNdis_StatusLinkSpeedChange_NdisStatusLinkSpeedChange_SIZE)

// MSNdis_StatusProtocolBind - MSNdis_StatusProtocolBind
#define MSNdis_StatusProtocolBindGuid \
    { 0x5413531c,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusProtocolBind_GUID, \
            0x5413531c,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_StatusProtocolBind
{
    // 
    CHAR VariableData[1];
    #define MSNdis_StatusProtocolBind_Transport_ID 1

} MSNdis_StatusProtocolBind, *PMSNdis_StatusProtocolBind;

// MSNdis_StatusProtocolUnbind - MSNdis_StatusProtocolUnbind
#define MSNdis_StatusProtocolUnbindGuid \
    { 0x6e3ce1ec,0xb1f3,0x11d0, { 0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusProtocolUnbind_GUID, \
            0x6e3ce1ec,0xb1f3,0x11d0,0x8d,0xd7,0x00,0xc0,0x4f,0xc3,0x35,0x8c);
#endif


typedef struct _MSNdis_StatusProtocolUnbind
{
    // 
    CHAR VariableData[1];
    #define MSNdis_StatusProtocolUnbind_Transport_ID 1

} MSNdis_StatusProtocolUnbind, *PMSNdis_StatusProtocolUnbind;

// MSNdis_StatusDevicePowerOn - MSNdis_StatusDevicePowerOn
#define MSNdis_StatusDevicePowerOnGuid \
    { 0x5f81cfd0,0xf046,0x4342, { 0x61,0xaf,0x89,0x5a,0xce,0xda,0xef,0xd9 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDevicePowerOn_GUID, \
            0x5f81cfd0,0xf046,0x4342,0x61,0xaf,0x89,0x5a,0xce,0xda,0xef,0xd9);
#endif


typedef struct _MSNdis_StatusDevicePowerOn
{
    // 
    CHAR VariableData[1];
    #define MSNdis_StatusDevicePowerOn_Device_ID 1

} MSNdis_StatusDevicePowerOn, *PMSNdis_StatusDevicePowerOn;

// MSNdis_StatusDevicePowerOff - MSNdis_StatusDevicePowerOff
#define MSNdis_StatusDevicePowerOffGuid \
    { 0x81bc8189,0xb026,0x46ab, { 0x64,0xb9,0xf1,0x82,0xe3,0x42,0x93,0x4e } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDevicePowerOff_GUID, \
            0x81bc8189,0xb026,0x46ab,0x64,0xb9,0xf1,0x82,0xe3,0x42,0x93,0x4e);
#endif


typedef struct _MSNdis_StatusDevicePowerOff
{
    // 
    CHAR VariableData[1];
    #define MSNdis_StatusDevicePowerOff_Device_ID 1

} MSNdis_StatusDevicePowerOff, *PMSNdis_StatusDevicePowerOff;

// MSNdis_StatusDevicePowerOnEx - MSNdis_StatusDevicePowerOnEx
#define MSNdis_StatusDevicePowerOnExGuid \
    { 0x2b440188,0x92ac,0x4f60, { 0x9b,0x2d,0x20,0xa3,0x0c,0xbb,0x6b,0xbe } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDevicePowerOnEx_GUID, \
            0x2b440188,0x92ac,0x4f60,0x9b,0x2d,0x20,0xa3,0x0c,0xbb,0x6b,0xbe);
#endif


typedef struct _MSNdis_StatusDevicePowerOnEx
{
    // 
    CHAR VariableData[1];
    #define MSNdis_StatusDevicePowerOnEx_Device_ID 1

} MSNdis_StatusDevicePowerOnEx, *PMSNdis_StatusDevicePowerOnEx;

// MSNdis_StatusDevicePowerOffEx - MSNdis_StatusDevicePowerOffEx
#define MSNdis_StatusDevicePowerOffExGuid \
    { 0x4159353c,0x5cd7,0x42ce, { 0x8f,0xe4,0xa4,0x5a,0x23,0x80,0xcc,0x4f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDevicePowerOffEx_GUID, \
            0x4159353c,0x5cd7,0x42ce,0x8f,0xe4,0xa4,0x5a,0x23,0x80,0xcc,0x4f);
#endif


typedef struct _MSNdis_StatusDevicePowerOffEx
{
    // 
    CHAR VariableData[1];
    #define MSNdis_StatusDevicePowerOffEx_Device_ID 1

} MSNdis_StatusDevicePowerOffEx, *PMSNdis_StatusDevicePowerOffEx;

// MSNdis_StatusTaskOffloadChange - MSNdis_StatusTaskOffloadChange
#define MSNdis_StatusTaskOffloadChangeGuid \
    { 0x45049fc6,0x54d8,0x40c8, { 0x9c,0x3d,0xb0,0x11,0xc4,0xe7,0x15,0xbc } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusTaskOffloadChange_GUID, \
            0x45049fc6,0x54d8,0x40c8,0x9c,0x3d,0xb0,0x11,0xc4,0xe7,0x15,0xbc);
#endif


typedef struct _MSNdis_StatusTaskOffloadChange
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusTaskOffloadChange_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusTaskOffloadChange_NumberElements_ID 1

    // 
    UCHAR TaskOffloadCapabilities[1];
    #define MSNdis_StatusTaskOffloadChange_TaskOffloadCapabilities_ID 2

} MSNdis_StatusTaskOffloadChange, *PMSNdis_StatusTaskOffloadChange;

// MSNdis_StatusPacketFilterChange - MSNdis_StatusPacketFilterChange
#define MSNdis_StatusPacketFilterChangeGuid \
    { 0xd47c5407,0x2e75,0x46dd, { 0x81,0x46,0x1d,0x7e,0xd2,0xd6,0xab,0x1d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusPacketFilterChange_GUID, \
            0xd47c5407,0x2e75,0x46dd,0x81,0x46,0x1d,0x7e,0xd2,0xd6,0xab,0x1d);
#endif


typedef struct _MSNdis_StatusPacketFilterChange
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusPacketFilterChange_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusPacketFilterChange_NumberElements_ID 1

    // 
    UCHAR NdisPacketFilterStatusIndication[1];
    #define MSNdis_StatusPacketFilterChange_NdisPacketFilterStatusIndication_ID 2

} MSNdis_StatusPacketFilterChange, *PMSNdis_StatusPacketFilterChange;

// MSNdis_StatusNetworkChange - MSNdis_StatusNetworkChange
#define MSNdis_StatusNetworkChangeGuid \
    { 0xca8a56f9,0xce81,0x40e6, { 0xa7,0x0f,0xa0,0x67,0xa4,0x76,0xe9,0xe9 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusNetworkChange_GUID, \
            0xca8a56f9,0xce81,0x40e6,0xa7,0x0f,0xa0,0x67,0xa4,0x76,0xe9,0xe9);
#endif


typedef struct _MSNdis_StatusNetworkChange
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusNetworkChange_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusNetworkChange_NumberElements_ID 1

    // 
    UCHAR NdisNetworkChangeStatusIndication[1];
    #define MSNdis_StatusNetworkChange_NdisNetworkChangeStatusIndication_ID 2

} MSNdis_StatusNetworkChange, *PMSNdis_StatusNetworkChange;

// MSNdis_StatusOperationalStatus - MSNdis_StatusOperationalStatus
#define MSNdis_StatusOperationalStatusGuid \
    { 0xf917b663,0x845e,0x4d3d, { 0xb6,0xd4,0x15,0xeb,0x27,0xaf,0x81,0xc5 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusOperationalStatus_GUID, \
            0xf917b663,0x845e,0x4d3d,0xb6,0xd4,0x15,0xeb,0x27,0xaf,0x81,0xc5);
#endif


typedef struct _MSNdis_StatusOperationalStatus
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusOperationalStatus_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusOperationalStatus_NumberElements_ID 1

    // 
    UCHAR NdisOperationalStatusStatusIndication[1];
    #define MSNdis_StatusOperationalStatus_NdisOperationalStatusStatusIndication_ID 2

} MSNdis_StatusOperationalStatus, *PMSNdis_StatusOperationalStatus;

// MSNdis_StatusLinkState - MSNdis_StatusLinkState
#define MSNdis_StatusLinkStateGuid \
    { 0x64c6f797,0x878c,0x4311, { 0x92,0x46,0x65,0xdb,0xa8,0x9c,0x3a,0x61 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusLinkState_GUID, \
            0x64c6f797,0x878c,0x4311,0x92,0x46,0x65,0xdb,0xa8,0x9c,0x3a,0x61);
#endif


typedef struct _MSNdis_StatusLinkState
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusLinkState_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusLinkState_NumberElements_ID 1

    // 
    UCHAR NdisLinkStateStatusIndication[1];
    #define MSNdis_StatusLinkState_NdisLinkStateStatusIndication_ID 2

} MSNdis_StatusLinkState, *PMSNdis_StatusLinkState;

// MSNdis_StatusPortState - MSNdis_StatusPortState
#define MSNdis_StatusPortStateGuid \
    { 0x1dac0dfe,0x43e5,0x44b7, { 0xb7,0x59,0x7b,0xf4,0x6d,0xe3,0x2e,0x81 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusPortState_GUID, \
            0x1dac0dfe,0x43e5,0x44b7,0xb7,0x59,0x7b,0xf4,0x6d,0xe3,0x2e,0x81);
#endif


typedef struct _MSNdis_StatusPortState
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusPortState_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusPortState_NumberElements_ID 1

    // 
    UCHAR NdisPortStateStatusIndication[1];
    #define MSNdis_StatusPortState_NdisPortStateStatusIndication_ID 2

} MSNdis_StatusPortState, *PMSNdis_StatusPortState;

// MSNdis_StatusExternalConnectivityChange - MSNdis_StatusExternalConnectivityChange
#define MSNdis_StatusExternalConnectivityChangeGuid \
    { 0xfd306974,0xc420,0x4433, { 0xb0,0xfe,0x4c,0xf6,0xa6,0x13,0xf5,0x9f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusExternalConnectivityChange_GUID, \
            0xfd306974,0xc420,0x4433,0xb0,0xfe,0x4c,0xf6,0xa6,0x13,0xf5,0x9f);
#endif


typedef struct _MSNdis_StatusExternalConnectivityChange
{
    // 
    ULONG NdisMediaConnectStatus;
    #define MSNdis_StatusExternalConnectivityChange_NdisMediaConnectStatus_SIZE sizeof(ULONG)
    #define MSNdis_StatusExternalConnectivityChange_NdisMediaConnectStatus_ID 1

} MSNdis_StatusExternalConnectivityChange, *PMSNdis_StatusExternalConnectivityChange;

#define MSNdis_StatusExternalConnectivityChange_SIZE (FIELD_OFFSET(MSNdis_StatusExternalConnectivityChange, NdisMediaConnectStatus) + MSNdis_StatusExternalConnectivityChange_NdisMediaConnectStatus_SIZE)

// MSNdis_StatusMediaSpecificIndicationEx - MSNdis_StatusMediaSpecificIndicationEx
#define MSNdis_StatusMediaSpecificIndicationExGuid \
    { 0xaaacfca7,0x954a,0x4632, { 0xa1,0x6e,0xa8,0xa6,0x37,0x93,0xa9,0xe5 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusMediaSpecificIndicationEx_GUID, \
            0xaaacfca7,0x954a,0x4632,0xa1,0x6e,0xa8,0xa6,0x37,0x93,0xa9,0xe5);
#endif


typedef struct _MSNdis_StatusMediaSpecificIndicationEx
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusMediaSpecificIndicationEx_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusMediaSpecificIndicationEx_NumberElements_ID 1

    // 
    UCHAR NdisStatusMediaSpecificIndication[1];
    #define MSNdis_StatusMediaSpecificIndicationEx_NdisStatusMediaSpecificIndication_ID 2

} MSNdis_StatusMediaSpecificIndicationEx, *PMSNdis_StatusMediaSpecificIndicationEx;

// MSNdis_StatusHDSplitCurrentConfig - MSNdis_StatusHDSplitCurrentConfig
#define MSNdis_StatusHDSplitCurrentConfigGuid \
    { 0x6c744b0e,0xee9c,0x4205, { 0x90,0xa2,0x01,0x5f,0x6d,0x65,0xf4,0x03 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusHDSplitCurrentConfig_GUID, \
            0x6c744b0e,0xee9c,0x4205,0x90,0xa2,0x01,0x5f,0x6d,0x65,0xf4,0x03);
#endif


typedef struct _MSNdis_StatusHDSplitCurrentConfig
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusHDSplitCurrentConfig_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusHDSplitCurrentConfig_NumberElements_ID 1

    // 
    UCHAR HDSplitCurrentConfig[1];
    #define MSNdis_StatusHDSplitCurrentConfig_HDSplitCurrentConfig_ID 2

} MSNdis_StatusHDSplitCurrentConfig, *PMSNdis_StatusHDSplitCurrentConfig;

// MSNdis_StatusDot11ScanConfirm - MSNdis_StatusDot11ScanConfirm
#define MSNdis_StatusDot11ScanConfirmGuid \
    { 0x8500591e,0xa0c7,0x4efb, { 0x93,0x42,0xb6,0x74,0xb0,0x02,0xcb,0xe6 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11ScanConfirm_GUID, \
            0x8500591e,0xa0c7,0x4efb,0x93,0x42,0xb6,0x74,0xb0,0x02,0xcb,0xe6);
#endif


typedef struct _MSNdis_StatusDot11ScanConfirm
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11ScanConfirm_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11ScanConfirm_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11ScanConfirmIndication[1];
    #define MSNdis_StatusDot11ScanConfirm_NdisStatusDot11ScanConfirmIndication_ID 2

} MSNdis_StatusDot11ScanConfirm, *PMSNdis_StatusDot11ScanConfirm;

// MSNdis_StatusDot11MPDUMaxLengthChange - MSNdis_StatusDot11MPDUMaxLengthChange
#define MSNdis_StatusDot11MPDUMaxLengthChangeGuid \
    { 0x1d6560ec,0x8e48,0x4a3e, { 0x9f,0xd5,0xa0,0x1b,0x69,0x8d,0xb6,0xc5 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11MPDUMaxLengthChange_GUID, \
            0x1d6560ec,0x8e48,0x4a3e,0x9f,0xd5,0xa0,0x1b,0x69,0x8d,0xb6,0xc5);
#endif


typedef struct _MSNdis_StatusDot11MPDUMaxLengthChange
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11MPDUMaxLengthChange_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11MPDUMaxLengthChange_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11MPDUMaxLengthChangeIndication[1];
    #define MSNdis_StatusDot11MPDUMaxLengthChange_NdisStatusDot11MPDUMaxLengthChangeIndication_ID 2

} MSNdis_StatusDot11MPDUMaxLengthChange, *PMSNdis_StatusDot11MPDUMaxLengthChange;

// MSNdis_StatusDot11AssociationStart - MSNdis_StatusDot11AssociationStart
#define MSNdis_StatusDot11AssociationStartGuid \
    { 0x3927843b,0x6980,0x4b48, { 0xb1,0x5b,0x4d,0xe5,0x09,0x77,0xac,0x40 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11AssociationStart_GUID, \
            0x3927843b,0x6980,0x4b48,0xb1,0x5b,0x4d,0xe5,0x09,0x77,0xac,0x40);
#endif


typedef struct _MSNdis_StatusDot11AssociationStart
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11AssociationStart_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11AssociationStart_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11AssociationStartIndication[1];
    #define MSNdis_StatusDot11AssociationStart_NdisStatusDot11AssociationStartIndication_ID 2

} MSNdis_StatusDot11AssociationStart, *PMSNdis_StatusDot11AssociationStart;

// MSNdis_StatusDot11AssociationCompletion - MSNdis_StatusDot11AssociationCompletion
#define MSNdis_StatusDot11AssociationCompletionGuid \
    { 0x458bbea7,0x45a4,0x4ae2, { 0xb1,0x76,0xe5,0x1f,0x96,0xfc,0x05,0x68 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11AssociationCompletion_GUID, \
            0x458bbea7,0x45a4,0x4ae2,0xb1,0x76,0xe5,0x1f,0x96,0xfc,0x05,0x68);
#endif


typedef struct _MSNdis_StatusDot11AssociationCompletion
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11AssociationCompletion_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11AssociationCompletion_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11AssociationCompletionIndication[1];
    #define MSNdis_StatusDot11AssociationCompletion_NdisStatusDot11AssociationCompletionIndication_ID 2

} MSNdis_StatusDot11AssociationCompletion, *PMSNdis_StatusDot11AssociationCompletion;

// MSNdis_StatusDot11ConnectionStart - MSNdis_StatusDot11ConnectionStart
#define MSNdis_StatusDot11ConnectionStartGuid \
    { 0x7b74299d,0x998f,0x4454, { 0xad,0x08,0xc5,0xaf,0x28,0x57,0x6d,0x1b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11ConnectionStart_GUID, \
            0x7b74299d,0x998f,0x4454,0xad,0x08,0xc5,0xaf,0x28,0x57,0x6d,0x1b);
#endif


typedef struct _MSNdis_StatusDot11ConnectionStart
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11ConnectionStart_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11ConnectionStart_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11ConnectionStartIndication[1];
    #define MSNdis_StatusDot11ConnectionStart_NdisStatusDot11ConnectionStartIndication_ID 2

} MSNdis_StatusDot11ConnectionStart, *PMSNdis_StatusDot11ConnectionStart;

// MSNdis_StatusDot11ConnectionCompletion - MSNdis_StatusDot11ConnectionCompletion
#define MSNdis_StatusDot11ConnectionCompletionGuid \
    { 0x96efd9c9,0x7f1b,0x4a89, { 0xbc,0x04,0x3e,0x9e,0x27,0x17,0x65,0xf1 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11ConnectionCompletion_GUID, \
            0x96efd9c9,0x7f1b,0x4a89,0xbc,0x04,0x3e,0x9e,0x27,0x17,0x65,0xf1);
#endif


typedef struct _MSNdis_StatusDot11ConnectionCompletion
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11ConnectionCompletion_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11ConnectionCompletion_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11ConnectionCompletionIndication[1];
    #define MSNdis_StatusDot11ConnectionCompletion_NdisStatusDot11ConnectionCompletionIndication_ID 2

} MSNdis_StatusDot11ConnectionCompletion, *PMSNdis_StatusDot11ConnectionCompletion;

// MSNdis_StatusDot11RoamingStart - MSNdis_StatusDot11RoamingStart
#define MSNdis_StatusDot11RoamingStartGuid \
    { 0xb2412d0d,0x26c8,0x4f4e, { 0x93,0xdf,0xf7,0xb7,0x05,0xa0,0xb4,0x33 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11RoamingStart_GUID, \
            0xb2412d0d,0x26c8,0x4f4e,0x93,0xdf,0xf7,0xb7,0x05,0xa0,0xb4,0x33);
#endif


typedef struct _MSNdis_StatusDot11RoamingStart
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11RoamingStart_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11RoamingStart_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11RoamingStartIndication[1];
    #define MSNdis_StatusDot11RoamingStart_NdisStatusDot11RoamingStartIndication_ID 2

} MSNdis_StatusDot11RoamingStart, *PMSNdis_StatusDot11RoamingStart;

// MSNdis_StatusDot11RoamingCompletion - MSNdis_StatusDot11RoamingCompletion
#define MSNdis_StatusDot11RoamingCompletionGuid \
    { 0xdd9d47d1,0x282b,0x41e4, { 0xb9,0x24,0x66,0x36,0x88,0x17,0xfc,0xd3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11RoamingCompletion_GUID, \
            0xdd9d47d1,0x282b,0x41e4,0xb9,0x24,0x66,0x36,0x88,0x17,0xfc,0xd3);
#endif


typedef struct _MSNdis_StatusDot11RoamingCompletion
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11RoamingCompletion_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11RoamingCompletion_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11RoamingCompletionIndication[1];
    #define MSNdis_StatusDot11RoamingCompletion_NdisStatusDot11RoamingCompletionIndication_ID 2

} MSNdis_StatusDot11RoamingCompletion, *PMSNdis_StatusDot11RoamingCompletion;

// MSNdis_StatusDot11Disassociation - MSNdis_StatusDot11Disassociation
#define MSNdis_StatusDot11DisassociationGuid \
    { 0x3fbeb6fc,0x0fe2,0x43fd, { 0xb2,0xad,0xbd,0x99,0xb5,0xf9,0x3e,0x13 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11Disassociation_GUID, \
            0x3fbeb6fc,0x0fe2,0x43fd,0xb2,0xad,0xbd,0x99,0xb5,0xf9,0x3e,0x13);
#endif


typedef struct _MSNdis_StatusDot11Disassociation
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11Disassociation_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11Disassociation_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11DisassociationIndication[1];
    #define MSNdis_StatusDot11Disassociation_NdisStatusDot11DisassociationIndication_ID 2

} MSNdis_StatusDot11Disassociation, *PMSNdis_StatusDot11Disassociation;

// MSNdis_StatusDot11TkipmicFailure - MSNdis_StatusDot11TkipmicFailure
#define MSNdis_StatusDot11TkipmicFailureGuid \
    { 0x442c2ae4,0x9bc5,0x4b90, { 0xa8,0x89,0x45,0x5e,0xf2,0x20,0xf4,0xee } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11TkipmicFailure_GUID, \
            0x442c2ae4,0x9bc5,0x4b90,0xa8,0x89,0x45,0x5e,0xf2,0x20,0xf4,0xee);
#endif


typedef struct _MSNdis_StatusDot11TkipmicFailure
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11TkipmicFailure_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11TkipmicFailure_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11TkipmicFailureIndication[1];
    #define MSNdis_StatusDot11TkipmicFailure_NdisStatusDot11TkipmicFailureIndication_ID 2

} MSNdis_StatusDot11TkipmicFailure, *PMSNdis_StatusDot11TkipmicFailure;

// MSNdis_StatusDot11PmkidCandidateList - MSNdis_StatusDot11PmkidCandidateList
#define MSNdis_StatusDot11PmkidCandidateListGuid \
    { 0x26d8b8f6,0xdb82,0x49eb, { 0x8b,0xf3,0x4c,0x13,0x0e,0xf0,0x69,0x50 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11PmkidCandidateList_GUID, \
            0x26d8b8f6,0xdb82,0x49eb,0x8b,0xf3,0x4c,0x13,0x0e,0xf0,0x69,0x50);
#endif


typedef struct _MSNdis_StatusDot11PmkidCandidateList
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11PmkidCandidateList_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11PmkidCandidateList_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11PmkidCandidateListIndication[1];
    #define MSNdis_StatusDot11PmkidCandidateList_NdisStatusDot11PmkidCandidateListIndication_ID 2

} MSNdis_StatusDot11PmkidCandidateList, *PMSNdis_StatusDot11PmkidCandidateList;

// MSNdis_StatusDot11PhyStateChange - MSNdis_StatusDot11PhyStateChange
#define MSNdis_StatusDot11PhyStateChangeGuid \
    { 0xdeb45316,0x71b5,0x4736, { 0xbd,0xef,0x0a,0x9e,0x9f,0x4e,0x62,0xdc } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11PhyStateChange_GUID, \
            0xdeb45316,0x71b5,0x4736,0xbd,0xef,0x0a,0x9e,0x9f,0x4e,0x62,0xdc);
#endif


typedef struct _MSNdis_StatusDot11PhyStateChange
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11PhyStateChange_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11PhyStateChange_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11PhyStateChangeIndication[1];
    #define MSNdis_StatusDot11PhyStateChange_NdisStatusDot11PhyStateChangeIndication_ID 2

} MSNdis_StatusDot11PhyStateChange, *PMSNdis_StatusDot11PhyStateChange;

// MSNdis_StatusDot11LinkQuality - MSNdis_StatusDot11LinkQuality
#define MSNdis_StatusDot11LinkQualityGuid \
    { 0xa3285184,0xea99,0x48ed, { 0x82,0x5e,0xa4,0x26,0xb1,0x1c,0x27,0x54 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSNdis_StatusDot11LinkQuality_GUID, \
            0xa3285184,0xea99,0x48ed,0x82,0x5e,0xa4,0x26,0xb1,0x1c,0x27,0x54);
#endif


typedef struct _MSNdis_StatusDot11LinkQuality
{
    // 
    ULONG NumberElements;
    #define MSNdis_StatusDot11LinkQuality_NumberElements_SIZE sizeof(ULONG)
    #define MSNdis_StatusDot11LinkQuality_NumberElements_ID 1

    // 
    UCHAR NdisStatusDot11LinkQualityIndication[1];
    #define MSNdis_StatusDot11LinkQuality_NdisStatusDot11LinkQualityIndication_ID 2

} MSNdis_StatusDot11LinkQuality, *PMSNdis_StatusDot11LinkQuality;

// MSKeyboard_PortInformation - KEYBOARD_PORT_WMI_STD_DATA
#define KEYBOARD_PORT_WMI_STD_DATA_GUID \
    { 0x4731f89a,0x71cb,0x11d1, { 0xa5,0x2c,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSKeyboard_PortInformation_GUID, \
            0x4731f89a,0x71cb,0x11d1,0xa5,0x2c,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _KEYBOARD_PORT_WMI_STD_DATA
{

#define KEYBOARD_PORT_WMI_STD_I8042 0
#define KEYBOARD_PORT_WMI_STD_SERIAL 1
#define KEYBOARD_PORT_WMI_STD_USB 2

    // 
    ULONG ConnectorType;
    #define KEYBOARD_PORT_WMI_STD_DATA_ConnectorType_SIZE sizeof(ULONG)
    #define KEYBOARD_PORT_WMI_STD_DATA_ConnectorType_ID 1

    // 
    ULONG DataQueueSize;
    #define KEYBOARD_PORT_WMI_STD_DATA_DataQueueSize_SIZE sizeof(ULONG)
    #define KEYBOARD_PORT_WMI_STD_DATA_DataQueueSize_ID 2

    // 
    ULONG ErrorCount;
    #define KEYBOARD_PORT_WMI_STD_DATA_ErrorCount_SIZE sizeof(ULONG)
    #define KEYBOARD_PORT_WMI_STD_DATA_ErrorCount_ID 3

    // 
    ULONG FunctionKeys;
    #define KEYBOARD_PORT_WMI_STD_DATA_FunctionKeys_SIZE sizeof(ULONG)
    #define KEYBOARD_PORT_WMI_STD_DATA_FunctionKeys_ID 4

    // 
    ULONG Indicators;
    #define KEYBOARD_PORT_WMI_STD_DATA_Indicators_SIZE sizeof(ULONG)
    #define KEYBOARD_PORT_WMI_STD_DATA_Indicators_ID 5

} KEYBOARD_PORT_WMI_STD_DATA, *PKEYBOARD_PORT_WMI_STD_DATA;

#define KEYBOARD_PORT_WMI_STD_DATA_SIZE (FIELD_OFFSET(KEYBOARD_PORT_WMI_STD_DATA, Indicators) + KEYBOARD_PORT_WMI_STD_DATA_Indicators_SIZE)

// MSKeyboard_ExtendedID - KEYBOARD_ID_EX
#define KEYBOARD_PORT_WMI_EXTENDED_ID \
    { 0x6ac4e23d,0xa950,0x4518, { 0x8b,0x2b,0xaa,0x4d,0xcd,0x5f,0xe1,0x4a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSKeyboard_ExtendedID_GUID, \
            0x6ac4e23d,0xa950,0x4518,0x8b,0x2b,0xaa,0x4d,0xcd,0x5f,0xe1,0x4a);
#endif


typedef struct _KEYBOARD_ID_EX
{
    // 
    ULONG Type;
    #define KEYBOARD_ID_EX_Type_SIZE sizeof(ULONG)
    #define KEYBOARD_ID_EX_Type_ID 1

    // 
    ULONG Subtype;
    #define KEYBOARD_ID_EX_Subtype_SIZE sizeof(ULONG)
    #define KEYBOARD_ID_EX_Subtype_ID 2

} KEYBOARD_ID_EX, *PKEYBOARD_ID_EX;

#define KEYBOARD_ID_EX_SIZE (FIELD_OFFSET(KEYBOARD_ID_EX, Subtype) + KEYBOARD_ID_EX_Subtype_SIZE)

// MSMouse_PortInformation - POINTER_PORT_WMI_STD_DATA
#define POINTER_PORT_WMI_STD_DATA_GUID \
    { 0x4731f89c,0x71cb,0x11d1, { 0xa5,0x2c,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMouse_PortInformation_GUID, \
            0x4731f89c,0x71cb,0x11d1,0xa5,0x2c,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _POINTER_PORT_WMI_STD_DATA
{

#define POINTER_PORT_WMI_STD_I8042 0
#define POINTER_PORT_WMI_STD_SERIAL 1
#define POINTER_PORT_WMI_STD_USB 2

    // 
    ULONG ConnectorType;
    #define POINTER_PORT_WMI_STD_DATA_ConnectorType_SIZE sizeof(ULONG)
    #define POINTER_PORT_WMI_STD_DATA_ConnectorType_ID 1

    // 
    ULONG DataQueueSize;
    #define POINTER_PORT_WMI_STD_DATA_DataQueueSize_SIZE sizeof(ULONG)
    #define POINTER_PORT_WMI_STD_DATA_DataQueueSize_ID 2

    // 
    ULONG ErrorCount;
    #define POINTER_PORT_WMI_STD_DATA_ErrorCount_SIZE sizeof(ULONG)
    #define POINTER_PORT_WMI_STD_DATA_ErrorCount_ID 3

    // 
    ULONG Buttons;
    #define POINTER_PORT_WMI_STD_DATA_Buttons_SIZE sizeof(ULONG)
    #define POINTER_PORT_WMI_STD_DATA_Buttons_ID 4


#define POINTER_PORT_WMI_STD_MOUSE 0
#define POINTER_PORT_WMI_STD_POINTER 1
#define POINTER_PORT_WMI_ABSOLUTE_POINTER 2
#define POINTER_PORT_WMI_TABLET 3
#define POINTER_PORT_WMI_TOUCH_SCRENE 4
#define POINTER_PORT_WMI_PEN 5
#define POINTER_PORT_WMI_TRACK_BALL 6
#define POINTER_PORT_WMI_OTHER 256

    // 
    ULONG HardwareType;
    #define POINTER_PORT_WMI_STD_DATA_HardwareType_SIZE sizeof(ULONG)
    #define POINTER_PORT_WMI_STD_DATA_HardwareType_ID 5

} POINTER_PORT_WMI_STD_DATA, *PPOINTER_PORT_WMI_STD_DATA;

#define POINTER_PORT_WMI_STD_DATA_SIZE (FIELD_OFFSET(POINTER_PORT_WMI_STD_DATA, HardwareType) + POINTER_PORT_WMI_STD_DATA_HardwareType_SIZE)

// MSMouse_ClassInformation - MSMouse_ClassInformation
#define MSMouse_ClassInformationGuid \
    { 0x4731f89b,0x71cb,0x11d1, { 0xa5,0x2c,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSMouse_ClassInformation_GUID, \
            0x4731f89b,0x71cb,0x11d1,0xa5,0x2c,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSMouse_ClassInformation
{
    // 
    ULONGLONG DeviceId;
    #define MSMouse_ClassInformation_DeviceId_SIZE sizeof(ULONGLONG)
    #define MSMouse_ClassInformation_DeviceId_ID 1

} MSMouse_ClassInformation, *PMSMouse_ClassInformation;

#define MSMouse_ClassInformation_SIZE (FIELD_OFFSET(MSMouse_ClassInformation, DeviceId) + MSMouse_ClassInformation_DeviceId_SIZE)

// MSKeyboard_ClassInformation - MSKeyboard_ClassInformation
#define MSKeyboard_ClassInformationGuid \
    { 0x4731f899,0x71cb,0x11d1, { 0xa5,0x2c,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSKeyboard_ClassInformation_GUID, \
            0x4731f899,0x71cb,0x11d1,0xa5,0x2c,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSKeyboard_ClassInformation
{
    // 
    ULONGLONG DeviceId;
    #define MSKeyboard_ClassInformation_DeviceId_SIZE sizeof(ULONGLONG)
    #define MSKeyboard_ClassInformation_DeviceId_ID 1

} MSKeyboard_ClassInformation, *PMSKeyboard_ClassInformation;

#define MSKeyboard_ClassInformation_SIZE (FIELD_OFFSET(MSKeyboard_ClassInformation, DeviceId) + MSKeyboard_ClassInformation_DeviceId_SIZE)

// MSAgp_Information - AGP_STD_DATA
#define AGP_WMI_STD_DATA_GUID \
    { 0x8c27fbed,0x1c7b,0x47e4, { 0xa6,0x49,0x0e,0x38,0x9d,0x3a,0xda,0x4f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSAgp_Information_GUID, \
            0x8c27fbed,0x1c7b,0x47e4,0xa6,0x49,0x0e,0x38,0x9d,0x3a,0xda,0x4f);
#endif


typedef struct _AGP_STD_DATA
{
    // 
    ULONGLONG ApertureBase;
    #define AGP_STD_DATA_ApertureBase_SIZE sizeof(ULONGLONG)
    #define AGP_STD_DATA_ApertureBase_ID 1

    // 
    ULONG ApertureLength;
    #define AGP_STD_DATA_ApertureLength_SIZE sizeof(ULONG)
    #define AGP_STD_DATA_ApertureLength_ID 2

    // 
    ULONG AgpStatus;
    #define AGP_STD_DATA_AgpStatus_SIZE sizeof(ULONG)
    #define AGP_STD_DATA_AgpStatus_ID 3

    // 
    ULONG AgpCommand;
    #define AGP_STD_DATA_AgpCommand_SIZE sizeof(ULONG)
    #define AGP_STD_DATA_AgpCommand_ID 4

} AGP_STD_DATA, *PAGP_STD_DATA;

#define AGP_STD_DATA_SIZE (FIELD_OFFSET(AGP_STD_DATA, AgpCommand) + AGP_STD_DATA_AgpCommand_SIZE)

// MSAcpi_ThermalZoneTemperature - MSAcpi_ThermalZoneTemperature
#define MSAcpi_ThermalZoneTemperatureGuid \
    { 0xa1bc18c0,0xa7c8,0x11d1, { 0xbf,0x3c,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSAcpi_ThermalZoneTemperature_GUID, \
            0xa1bc18c0,0xa7c8,0x11d1,0xbf,0x3c,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSAcpi_ThermalZoneTemperature
{
    // 
    ULONG ThermalStamp;
    #define MSAcpi_ThermalZoneTemperature_ThermalStamp_SIZE sizeof(ULONG)
    #define MSAcpi_ThermalZoneTemperature_ThermalStamp_ID 1

    // 
    ULONG ThermalConstant1;
    #define MSAcpi_ThermalZoneTemperature_ThermalConstant1_SIZE sizeof(ULONG)
    #define MSAcpi_ThermalZoneTemperature_ThermalConstant1_ID 2

    // 
    ULONG ThermalConstant2;
    #define MSAcpi_ThermalZoneTemperature_ThermalConstant2_SIZE sizeof(ULONG)
    #define MSAcpi_ThermalZoneTemperature_ThermalConstant2_ID 3

    // 
    ULONG Reserved;
    #define MSAcpi_ThermalZoneTemperature_Reserved_SIZE sizeof(ULONG)
    #define MSAcpi_ThermalZoneTemperature_Reserved_ID 4

    // 
    ULONG SamplingPeriod;
    #define MSAcpi_ThermalZoneTemperature_SamplingPeriod_SIZE sizeof(ULONG)
    #define MSAcpi_ThermalZoneTemperature_SamplingPeriod_ID 5

    // 
    ULONG CurrentTemperature;
    #define MSAcpi_ThermalZoneTemperature_CurrentTemperature_SIZE sizeof(ULONG)
    #define MSAcpi_ThermalZoneTemperature_CurrentTemperature_ID 6

    // 
    ULONG PassiveTripPoint;
    #define MSAcpi_ThermalZoneTemperature_PassiveTripPoint_SIZE sizeof(ULONG)
    #define MSAcpi_ThermalZoneTemperature_PassiveTripPoint_ID 7

    // 
    ULONG CriticalTripPoint;
    #define MSAcpi_ThermalZoneTemperature_CriticalTripPoint_SIZE sizeof(ULONG)
    #define MSAcpi_ThermalZoneTemperature_CriticalTripPoint_ID 8

    // 
    ULONG ActiveTripPointCount;
    #define MSAcpi_ThermalZoneTemperature_ActiveTripPointCount_SIZE sizeof(ULONG)
    #define MSAcpi_ThermalZoneTemperature_ActiveTripPointCount_ID 9

    // 
    ULONG ActiveTripPoint[10];
    #define MSAcpi_ThermalZoneTemperature_ActiveTripPoint_SIZE sizeof(ULONG[10])
    #define MSAcpi_ThermalZoneTemperature_ActiveTripPoint_ID 10

} MSAcpi_ThermalZoneTemperature, *PMSAcpi_ThermalZoneTemperature;

#define MSAcpi_ThermalZoneTemperature_SIZE (FIELD_OFFSET(MSAcpi_ThermalZoneTemperature, ActiveTripPoint) + MSAcpi_ThermalZoneTemperature_ActiveTripPoint_SIZE)

// MSDiskDriver_Geometry - WMI_DISK_GEOMETRY
#define MSDiskDriver_GeometryGuid \
    { 0x25007f51,0x57c2,0x11d1, { 0xa5,0x28,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSDiskDriver_Geometry_GUID, \
            0x25007f51,0x57c2,0x11d1,0xa5,0x28,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _WMI_DISK_GEOMETRY
{
    // 
    LONGLONG Cylinders;
    #define WMI_DISK_GEOMETRY_Cylinders_SIZE sizeof(LONGLONG)
    #define WMI_DISK_GEOMETRY_Cylinders_ID 1

    // 
    ULONG MediaType;
    #define WMI_DISK_GEOMETRY_MediaType_SIZE sizeof(ULONG)
    #define WMI_DISK_GEOMETRY_MediaType_ID 2

    // 
    ULONG TracksPerCylinder;
    #define WMI_DISK_GEOMETRY_TracksPerCylinder_SIZE sizeof(ULONG)
    #define WMI_DISK_GEOMETRY_TracksPerCylinder_ID 3

    // 
    ULONG SectorsPerTrack;
    #define WMI_DISK_GEOMETRY_SectorsPerTrack_SIZE sizeof(ULONG)
    #define WMI_DISK_GEOMETRY_SectorsPerTrack_ID 4

    // 
    ULONG BytesPerSector;
    #define WMI_DISK_GEOMETRY_BytesPerSector_SIZE sizeof(ULONG)
    #define WMI_DISK_GEOMETRY_BytesPerSector_ID 5

} WMI_DISK_GEOMETRY, *PWMI_DISK_GEOMETRY;

#define WMI_DISK_GEOMETRY_SIZE (FIELD_OFFSET(WMI_DISK_GEOMETRY, BytesPerSector) + WMI_DISK_GEOMETRY_BytesPerSector_SIZE)

// MSDiskDriver_PerformanceData - WMI_DISK_PERFORMANCE
#define MSDiskDriver_PerformanceDataGuid \
    { 0xbdd865d2,0xd7c1,0x11d0, { 0xa5,0x01,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSDiskDriver_PerformanceData_GUID, \
            0xbdd865d2,0xd7c1,0x11d0,0xa5,0x01,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _WMI_DISK_PERFORMANCE
{
    // 
    LONGLONG BytesRead;
    #define WMI_DISK_PERFORMANCE_BytesRead_SIZE sizeof(LONGLONG)
    #define WMI_DISK_PERFORMANCE_BytesRead_ID 1

    // 
    LONGLONG BytesWritten;
    #define WMI_DISK_PERFORMANCE_BytesWritten_SIZE sizeof(LONGLONG)
    #define WMI_DISK_PERFORMANCE_BytesWritten_ID 2

    // 
    LONGLONG ReadTime;
    #define WMI_DISK_PERFORMANCE_ReadTime_SIZE sizeof(LONGLONG)
    #define WMI_DISK_PERFORMANCE_ReadTime_ID 3

    // 
    LONGLONG WriteTime;
    #define WMI_DISK_PERFORMANCE_WriteTime_SIZE sizeof(LONGLONG)
    #define WMI_DISK_PERFORMANCE_WriteTime_ID 4

    // 
    LONGLONG IdleTime;
    #define WMI_DISK_PERFORMANCE_IdleTime_SIZE sizeof(LONGLONG)
    #define WMI_DISK_PERFORMANCE_IdleTime_ID 5

    // 
    ULONG ReadCount;
    #define WMI_DISK_PERFORMANCE_ReadCount_SIZE sizeof(ULONG)
    #define WMI_DISK_PERFORMANCE_ReadCount_ID 6

    // 
    ULONG WriteCount;
    #define WMI_DISK_PERFORMANCE_WriteCount_SIZE sizeof(ULONG)
    #define WMI_DISK_PERFORMANCE_WriteCount_ID 7

    // 
    ULONG QueueDepth;
    #define WMI_DISK_PERFORMANCE_QueueDepth_SIZE sizeof(ULONG)
    #define WMI_DISK_PERFORMANCE_QueueDepth_ID 8

    // 
    ULONG SplitCount;
    #define WMI_DISK_PERFORMANCE_SplitCount_SIZE sizeof(ULONG)
    #define WMI_DISK_PERFORMANCE_SplitCount_ID 9

    // 
    LONGLONG QueryTime;
    #define WMI_DISK_PERFORMANCE_QueryTime_SIZE sizeof(LONGLONG)
    #define WMI_DISK_PERFORMANCE_QueryTime_ID 10

    // 
    ULONG StorageDeviceNumber;
    #define WMI_DISK_PERFORMANCE_StorageDeviceNumber_SIZE sizeof(ULONG)
    #define WMI_DISK_PERFORMANCE_StorageDeviceNumber_ID 11

    // 
    USHORT StorageManagerName[8];
    #define WMI_DISK_PERFORMANCE_StorageManagerName_SIZE sizeof(USHORT[8])
    #define WMI_DISK_PERFORMANCE_StorageManagerName_ID 12

} WMI_DISK_PERFORMANCE, *PWMI_DISK_PERFORMANCE;

#define WMI_DISK_PERFORMANCE_SIZE (FIELD_OFFSET(WMI_DISK_PERFORMANCE, StorageManagerName) + WMI_DISK_PERFORMANCE_StorageManagerName_SIZE)

// MSDiskDriver_Performance - MSDiskDriver_Performance
#define MSDiskDriver_PerformanceGuid \
    { 0xbdd865d1,0xd7c1,0x11d0, { 0xa5,0x01,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSDiskDriver_Performance_GUID, \
            0xbdd865d1,0xd7c1,0x11d0,0xa5,0x01,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _MSDiskDriver_Performance
{
    // 
    WMI_DISK_PERFORMANCE PerfData;
    #define MSDiskDriver_Performance_PerfData_SIZE sizeof(WMI_DISK_PERFORMANCE)
    #define MSDiskDriver_Performance_PerfData_ID 1

    // 
    CHAR VariableData[1];
    #define MSDiskDriver_Performance_DeviceName_ID 2

} MSDiskDriver_Performance, *PMSDiskDriver_Performance;

// MSStorageDriver_FailurePredictStatus - STORAGE_FAILURE_PREDICT_STATUS
#define WMI_STORAGE_FAILURE_PREDICT_STATUS_GUID \
    { 0x78ebc102,0x4cf9,0x11d2, { 0xba,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSStorageDriver_FailurePredictStatus_GUID, \
            0x78ebc102,0x4cf9,0x11d2,0xba,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _STORAGE_FAILURE_PREDICT_STATUS
{
    // 
    ULONG Reason;
    #define STORAGE_FAILURE_PREDICT_STATUS_Reason_SIZE sizeof(ULONG)
    #define STORAGE_FAILURE_PREDICT_STATUS_Reason_ID 1

    // 
    BOOLEAN PredictFailure;
    #define STORAGE_FAILURE_PREDICT_STATUS_PredictFailure_SIZE sizeof(BOOLEAN)
    #define STORAGE_FAILURE_PREDICT_STATUS_PredictFailure_ID 2

} STORAGE_FAILURE_PREDICT_STATUS, *PSTORAGE_FAILURE_PREDICT_STATUS;

#define STORAGE_FAILURE_PREDICT_STATUS_SIZE (FIELD_OFFSET(STORAGE_FAILURE_PREDICT_STATUS, PredictFailure) + STORAGE_FAILURE_PREDICT_STATUS_PredictFailure_SIZE)

// MSStorageDriver_FailurePredictData - STORAGE_FAILURE_PREDICT_DATA
#define WMI_STORAGE_FAILURE_PREDICT_DATA_GUID \
    { 0x78ebc103,0x4cf9,0x11d2, { 0xba,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSStorageDriver_FailurePredictData_GUID, \
            0x78ebc103,0x4cf9,0x11d2,0xba,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _STORAGE_FAILURE_PREDICT_DATA
{
    // 
    ULONG Length;
    #define STORAGE_FAILURE_PREDICT_DATA_Length_SIZE sizeof(ULONG)
    #define STORAGE_FAILURE_PREDICT_DATA_Length_ID 1

    // 
    UCHAR VendorSpecific[512];
    #define STORAGE_FAILURE_PREDICT_DATA_VendorSpecific_SIZE sizeof(UCHAR[512])
    #define STORAGE_FAILURE_PREDICT_DATA_VendorSpecific_ID 2

} STORAGE_FAILURE_PREDICT_DATA, *PSTORAGE_FAILURE_PREDICT_DATA;

#define STORAGE_FAILURE_PREDICT_DATA_SIZE (FIELD_OFFSET(STORAGE_FAILURE_PREDICT_DATA, VendorSpecific) + STORAGE_FAILURE_PREDICT_DATA_VendorSpecific_SIZE)

// MSStorageDriver_ATAPISmartData - ATAPI_FAILURE_PREDICT_DATA
#define WMI_ATAPI_FAILURE_PREDICT_DATA_GUID \
    { 0x78ebc103,0x4cf9,0x11d2, { 0xba,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSStorageDriver_ATAPISmartData_GUID, \
            0x78ebc103,0x4cf9,0x11d2,0xba,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _ATAPI_FAILURE_PREDICT_DATA
{
    // 
    ULONG Length;
    #define ATAPI_FAILURE_PREDICT_DATA_Length_SIZE sizeof(ULONG)
    #define ATAPI_FAILURE_PREDICT_DATA_Length_ID 1

    // 
    UCHAR VendorSpecific[362];
    #define ATAPI_FAILURE_PREDICT_DATA_VendorSpecific_SIZE sizeof(UCHAR[362])
    #define ATAPI_FAILURE_PREDICT_DATA_VendorSpecific_ID 2

    // 
    UCHAR OfflineCollectionStatus;
    #define ATAPI_FAILURE_PREDICT_DATA_OfflineCollectionStatus_SIZE sizeof(UCHAR)
    #define ATAPI_FAILURE_PREDICT_DATA_OfflineCollectionStatus_ID 3

    // 
    UCHAR SelfTestStatus;
    #define ATAPI_FAILURE_PREDICT_DATA_SelfTestStatus_SIZE sizeof(UCHAR)
    #define ATAPI_FAILURE_PREDICT_DATA_SelfTestStatus_ID 4

    // 
    USHORT TotalTime;
    #define ATAPI_FAILURE_PREDICT_DATA_TotalTime_SIZE sizeof(USHORT)
    #define ATAPI_FAILURE_PREDICT_DATA_TotalTime_ID 5

    // 
    UCHAR VendorSpecific2;
    #define ATAPI_FAILURE_PREDICT_DATA_VendorSpecific2_SIZE sizeof(UCHAR)
    #define ATAPI_FAILURE_PREDICT_DATA_VendorSpecific2_ID 6

    // 
    UCHAR OfflineCollectCapability;
    #define ATAPI_FAILURE_PREDICT_DATA_OfflineCollectCapability_SIZE sizeof(UCHAR)
    #define ATAPI_FAILURE_PREDICT_DATA_OfflineCollectCapability_ID 7

    // 
    USHORT SmartCapability;
    #define ATAPI_FAILURE_PREDICT_DATA_SmartCapability_SIZE sizeof(USHORT)
    #define ATAPI_FAILURE_PREDICT_DATA_SmartCapability_ID 8

    // 
    UCHAR ErrorLogCapability;
    #define ATAPI_FAILURE_PREDICT_DATA_ErrorLogCapability_SIZE sizeof(UCHAR)
    #define ATAPI_FAILURE_PREDICT_DATA_ErrorLogCapability_ID 9

    // 
    UCHAR VendorSpecific3;
    #define ATAPI_FAILURE_PREDICT_DATA_VendorSpecific3_SIZE sizeof(UCHAR)
    #define ATAPI_FAILURE_PREDICT_DATA_VendorSpecific3_ID 10

    // 
    UCHAR ShortPollTimeInMinutes;
    #define ATAPI_FAILURE_PREDICT_DATA_ShortPollTimeInMinutes_SIZE sizeof(UCHAR)
    #define ATAPI_FAILURE_PREDICT_DATA_ShortPollTimeInMinutes_ID 11

    // 
    UCHAR ExtendedPollTimeInMinutes;
    #define ATAPI_FAILURE_PREDICT_DATA_ExtendedPollTimeInMinutes_SIZE sizeof(UCHAR)
    #define ATAPI_FAILURE_PREDICT_DATA_ExtendedPollTimeInMinutes_ID 12

    // Reserved
    UCHAR Reserved[12];
    #define ATAPI_FAILURE_PREDICT_DATA_Reserved_SIZE sizeof(UCHAR[12])
    #define ATAPI_FAILURE_PREDICT_DATA_Reserved_ID 13

    // 
    UCHAR VendorSpecific4[125];
    #define ATAPI_FAILURE_PREDICT_DATA_VendorSpecific4_SIZE sizeof(UCHAR[125])
    #define ATAPI_FAILURE_PREDICT_DATA_VendorSpecific4_ID 14

    // 
    UCHAR Checksum;
    #define ATAPI_FAILURE_PREDICT_DATA_Checksum_SIZE sizeof(UCHAR)
    #define ATAPI_FAILURE_PREDICT_DATA_Checksum_ID 15

} ATAPI_FAILURE_PREDICT_DATA, *PATAPI_FAILURE_PREDICT_DATA;

#define ATAPI_FAILURE_PREDICT_DATA_SIZE (FIELD_OFFSET(ATAPI_FAILURE_PREDICT_DATA, Checksum) + ATAPI_FAILURE_PREDICT_DATA_Checksum_SIZE)

// MSStorageDriver_FailurePredictThresholds - STORAGE_FAILURE_PREDICT_THRESHOLDS
#define WMI_STORAGE_FAILURE_PREDICT_THRESHOLDS_GUID \
    { 0xdae10783,0xcc31,0x4d2a, { 0x8a,0x0f,0x86,0x1c,0x04,0x07,0x7a,0x95 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSStorageDriver_FailurePredictThresholds_GUID, \
            0xdae10783,0xcc31,0x4d2a,0x8a,0x0f,0x86,0x1c,0x04,0x07,0x7a,0x95);
#endif


typedef struct _STORAGE_FAILURE_PREDICT_THRESHOLDS
{
    // 
    UCHAR VendorSpecific[512];
    #define STORAGE_FAILURE_PREDICT_THRESHOLDS_VendorSpecific_SIZE sizeof(UCHAR[512])
    #define STORAGE_FAILURE_PREDICT_THRESHOLDS_VendorSpecific_ID 1

} STORAGE_FAILURE_PREDICT_THRESHOLDS, *PSTORAGE_FAILURE_PREDICT_THRESHOLDS;

#define STORAGE_FAILURE_PREDICT_THRESHOLDS_SIZE (FIELD_OFFSET(STORAGE_FAILURE_PREDICT_THRESHOLDS, VendorSpecific) + STORAGE_FAILURE_PREDICT_THRESHOLDS_VendorSpecific_SIZE)

// MSStorageDriver_FailurePredictEvent - STORAGE_FAILURE_PREDICT_EVENT
#define WMI_STORAGE_PREDICT_FAILURE_EVENT_GUID \
    { 0x78ebc104,0x4cf9,0x11d2, { 0xba,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSStorageDriver_FailurePredictEvent_GUID, \
            0x78ebc104,0x4cf9,0x11d2,0xba,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _STORAGE_FAILURE_PREDICT_EVENT
{
    // 
    ULONG Length;
    #define STORAGE_FAILURE_PREDICT_EVENT_Length_SIZE sizeof(ULONG)
    #define STORAGE_FAILURE_PREDICT_EVENT_Length_ID 1

    // 
    UCHAR VendorSpecific[1];
    #define STORAGE_FAILURE_PREDICT_EVENT_VendorSpecific_ID 2

} STORAGE_FAILURE_PREDICT_EVENT, *PSTORAGE_FAILURE_PREDICT_EVENT;

// MSStorageDriver_FailurePredictFunction - STORAGE_FAILURE_PREDICT_FUNCTION
#define WMI_STORAGE_FAILURE_PREDICT_FUNCTION_GUID \
    { 0x78ebc105,0x4cf9,0x11d2, { 0xba,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSStorageDriver_FailurePredictFunction_GUID, \
            0x78ebc105,0x4cf9,0x11d2,0xba,0x4a,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif

//
// Method id definitions for MSStorageDriver_FailurePredictFunction
#define AllowPerformanceHit     1
typedef struct _ALLOW_PERFORMANCE_HIT_IN
{
    // 
    BOOLEAN Allow;
    #define ALLOW_PERFORMANCE_HIT_IN_Allow_SIZE sizeof(BOOLEAN)
    #define ALLOW_PERFORMANCE_HIT_IN_Allow_ID 1

} ALLOW_PERFORMANCE_HIT_IN, *PALLOW_PERFORMANCE_HIT_IN;

#define ALLOW_PERFORMANCE_HIT_IN_SIZE (FIELD_OFFSET(ALLOW_PERFORMANCE_HIT_IN, Allow) + ALLOW_PERFORMANCE_HIT_IN_Allow_SIZE)

#define EnableDisableHardwareFailurePrediction     2
typedef struct _ENABLE_DISABLE_FP_IN
{
    // 
    BOOLEAN Enable;
    #define ENABLE_DISABLE_FP_IN_Enable_SIZE sizeof(BOOLEAN)
    #define ENABLE_DISABLE_FP_IN_Enable_ID 1

} ENABLE_DISABLE_FP_IN, *PENABLE_DISABLE_FP_IN;

#define ENABLE_DISABLE_FP_IN_SIZE (FIELD_OFFSET(ENABLE_DISABLE_FP_IN, Enable) + ENABLE_DISABLE_FP_IN_Enable_SIZE)

#define EnableDisableFailurePredictionPolling     3
typedef struct _ENABLE_DISABLE_FP_POLLING_IN
{
    // 
    ULONG Period;
    #define ENABLE_DISABLE_FP_POLLING_IN_Period_SIZE sizeof(ULONG)
    #define ENABLE_DISABLE_FP_POLLING_IN_Period_ID 1

    // 
    BOOLEAN Enable;
    #define ENABLE_DISABLE_FP_POLLING_IN_Enable_SIZE sizeof(BOOLEAN)
    #define ENABLE_DISABLE_FP_POLLING_IN_Enable_ID 2

} ENABLE_DISABLE_FP_POLLING_IN, *PENABLE_DISABLE_FP_POLLING_IN;

#define ENABLE_DISABLE_FP_POLLING_IN_SIZE (FIELD_OFFSET(ENABLE_DISABLE_FP_POLLING_IN, Enable) + ENABLE_DISABLE_FP_POLLING_IN_Enable_SIZE)

#define GetFailurePredictionCapability     4
typedef struct _GET_FP_CAPABILITY_OUT
{
    // 
    ULONG Capability;
    #define GET_FP_CAPABILITY_OUT_Capability_SIZE sizeof(ULONG)
    #define GET_FP_CAPABILITY_OUT_Capability_ID 1

} GET_FP_CAPABILITY_OUT, *PGET_FP_CAPABILITY_OUT;

#define GET_FP_CAPABILITY_OUT_SIZE (FIELD_OFFSET(GET_FP_CAPABILITY_OUT, Capability) + GET_FP_CAPABILITY_OUT_Capability_SIZE)

#define EnableOfflineDiags     5
typedef struct _ENABLE_OFFLINE_DIAGS_OUT
{
    // 
    BOOLEAN Success;
    #define ENABLE_OFFLINE_DIAGS_OUT_Success_SIZE sizeof(BOOLEAN)
    #define ENABLE_OFFLINE_DIAGS_OUT_Success_ID 1

} ENABLE_OFFLINE_DIAGS_OUT, *PENABLE_OFFLINE_DIAGS_OUT;

#define ENABLE_OFFLINE_DIAGS_OUT_SIZE (FIELD_OFFSET(ENABLE_OFFLINE_DIAGS_OUT, Success) + ENABLE_OFFLINE_DIAGS_OUT_Success_SIZE)

#define ReadLogSectors     6
typedef struct _READ_LOG_SECTORS_IN
{
    // 
    UCHAR LogAddress;
    #define READ_LOG_SECTORS_IN_LogAddress_SIZE sizeof(UCHAR)
    #define READ_LOG_SECTORS_IN_LogAddress_ID 1

    // 
    UCHAR SectorCount;
    #define READ_LOG_SECTORS_IN_SectorCount_SIZE sizeof(UCHAR)
    #define READ_LOG_SECTORS_IN_SectorCount_ID 2

} READ_LOG_SECTORS_IN, *PREAD_LOG_SECTORS_IN;

#define READ_LOG_SECTORS_IN_SIZE (FIELD_OFFSET(READ_LOG_SECTORS_IN, SectorCount) + READ_LOG_SECTORS_IN_SectorCount_SIZE)

typedef struct _READ_LOG_SECTORS_OUT
{
    // 
    ULONG Length;
    #define READ_LOG_SECTORS_OUT_Length_SIZE sizeof(ULONG)
    #define READ_LOG_SECTORS_OUT_Length_ID 3

    // 
    UCHAR LogSectors[1];
    #define READ_LOG_SECTORS_OUT_LogSectors_ID 4

} READ_LOG_SECTORS_OUT, *PREAD_LOG_SECTORS_OUT;

#define WriteLogSectors     7
typedef struct _WRITE_LOG_SECTORS_IN
{
    // 
    UCHAR LogAddress;
    #define WRITE_LOG_SECTORS_IN_LogAddress_SIZE sizeof(UCHAR)
    #define WRITE_LOG_SECTORS_IN_LogAddress_ID 1

    // 
    UCHAR SectorCount;
    #define WRITE_LOG_SECTORS_IN_SectorCount_SIZE sizeof(UCHAR)
    #define WRITE_LOG_SECTORS_IN_SectorCount_ID 2

    // 
    ULONG Length;
    #define WRITE_LOG_SECTORS_IN_Length_SIZE sizeof(ULONG)
    #define WRITE_LOG_SECTORS_IN_Length_ID 3

    // 
    UCHAR LogSectors[1];
    #define WRITE_LOG_SECTORS_IN_LogSectors_ID 4

} WRITE_LOG_SECTORS_IN, *PWRITE_LOG_SECTORS_IN;

typedef struct _WRITE_LOG_SECTORS_OUT
{
    // 
    BOOLEAN Success;
    #define WRITE_LOG_SECTORS_OUT_Success_SIZE sizeof(BOOLEAN)
    #define WRITE_LOG_SECTORS_OUT_Success_ID 5

} WRITE_LOG_SECTORS_OUT, *PWRITE_LOG_SECTORS_OUT;

#define WRITE_LOG_SECTORS_OUT_SIZE (FIELD_OFFSET(WRITE_LOG_SECTORS_OUT, Success) + WRITE_LOG_SECTORS_OUT_Success_SIZE)

#define ExecuteSelfTest     8
typedef struct _EXECUTE_SELF_TEST_IN
{
    // 
    UCHAR Subcommand;
    #define EXECUTE_SELF_TEST_IN_Subcommand_SIZE sizeof(UCHAR)
    #define EXECUTE_SELF_TEST_IN_Subcommand_ID 1

} EXECUTE_SELF_TEST_IN, *PEXECUTE_SELF_TEST_IN;

#define EXECUTE_SELF_TEST_IN_SIZE (FIELD_OFFSET(EXECUTE_SELF_TEST_IN, Subcommand) + EXECUTE_SELF_TEST_IN_Subcommand_SIZE)

typedef struct _EXECUTE_SELF_TEST_OUT
{
    // 
    ULONG ReturnCode;
    #define EXECUTE_SELF_TEST_OUT_ReturnCode_SIZE sizeof(ULONG)
    #define EXECUTE_SELF_TEST_OUT_ReturnCode_ID 2

} EXECUTE_SELF_TEST_OUT, *PEXECUTE_SELF_TEST_OUT;

#define EXECUTE_SELF_TEST_OUT_SIZE (FIELD_OFFSET(EXECUTE_SELF_TEST_OUT, ReturnCode) + EXECUTE_SELF_TEST_OUT_ReturnCode_SIZE)


// MSStorageDriver_ScsiInfoExceptions - STORAGE_SCSI_INFO_EXCEPTIONS
#define WMI_STORAGE_SCSI_INFO_EXCEPTIONS_GUID \
    { 0x1101d829,0x167b,0x4ebf, { 0xac,0xae,0x28,0xca,0xb7,0xc3,0x48,0x02 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSStorageDriver_ScsiInfoExceptions_GUID, \
            0x1101d829,0x167b,0x4ebf,0xac,0xae,0x28,0xca,0xb7,0xc3,0x48,0x02);
#endif


typedef struct _STORAGE_SCSI_INFO_EXCEPTIONS
{
    // 
    BOOLEAN PageSavable;
    #define STORAGE_SCSI_INFO_EXCEPTIONS_PageSavable_SIZE sizeof(BOOLEAN)
    #define STORAGE_SCSI_INFO_EXCEPTIONS_PageSavable_ID 1

    // 
    UCHAR Flags;
    #define STORAGE_SCSI_INFO_EXCEPTIONS_Flags_SIZE sizeof(UCHAR)
    #define STORAGE_SCSI_INFO_EXCEPTIONS_Flags_ID 2

    // 
    UCHAR MRIE;
    #define STORAGE_SCSI_INFO_EXCEPTIONS_MRIE_SIZE sizeof(UCHAR)
    #define STORAGE_SCSI_INFO_EXCEPTIONS_MRIE_ID 3

    // 
    UCHAR Padding;
    #define STORAGE_SCSI_INFO_EXCEPTIONS_Padding_SIZE sizeof(UCHAR)
    #define STORAGE_SCSI_INFO_EXCEPTIONS_Padding_ID 4

    // 
    ULONG IntervalTimer;
    #define STORAGE_SCSI_INFO_EXCEPTIONS_IntervalTimer_SIZE sizeof(ULONG)
    #define STORAGE_SCSI_INFO_EXCEPTIONS_IntervalTimer_ID 5

    // 
    ULONG ReportCount;
    #define STORAGE_SCSI_INFO_EXCEPTIONS_ReportCount_SIZE sizeof(ULONG)
    #define STORAGE_SCSI_INFO_EXCEPTIONS_ReportCount_ID 6

} STORAGE_SCSI_INFO_EXCEPTIONS, *PSTORAGE_SCSI_INFO_EXCEPTIONS;

#define STORAGE_SCSI_INFO_EXCEPTIONS_SIZE (FIELD_OFFSET(STORAGE_SCSI_INFO_EXCEPTIONS, ReportCount) + STORAGE_SCSI_INFO_EXCEPTIONS_ReportCount_SIZE)

// MSIde_PortDeviceInfo - MSIde_PortDeviceInfo
#define MSIde_PortDeviceInfoGuid \
    { 0x53f5630f,0xb6bf,0x11d0, { 0x94,0xf2,0x00,0xa0,0xc9,0x1e,0xfb,0x8b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSIde_PortDeviceInfo_GUID, \
            0x53f5630f,0xb6bf,0x11d0,0x94,0xf2,0x00,0xa0,0xc9,0x1e,0xfb,0x8b);
#endif


typedef struct _MSIde_PortDeviceInfo
{
    // 
    UCHAR Bus;
    #define MSIde_PortDeviceInfo_Bus_SIZE sizeof(UCHAR)
    #define MSIde_PortDeviceInfo_Bus_ID 1

    // 
    UCHAR Target;
    #define MSIde_PortDeviceInfo_Target_SIZE sizeof(UCHAR)
    #define MSIde_PortDeviceInfo_Target_ID 2

    // 
    UCHAR Lun;
    #define MSIde_PortDeviceInfo_Lun_SIZE sizeof(UCHAR)
    #define MSIde_PortDeviceInfo_Lun_ID 3

} MSIde_PortDeviceInfo, *PMSIde_PortDeviceInfo;

#define MSIde_PortDeviceInfo_SIZE (FIELD_OFFSET(MSIde_PortDeviceInfo, Lun) + MSIde_PortDeviceInfo_Lun_SIZE)

// MSSerial_PortName - MSSerial_PortName
#define SERIAL_PORT_WMI_NAME_GUID \
    { 0xa0ec11a8,0xb16c,0x11d1, { 0xbd,0x98,0x00,0xa0,0xc9,0x06,0xbe,0x2d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSerial_PortName_GUID, \
            0xa0ec11a8,0xb16c,0x11d1,0xbd,0x98,0x00,0xa0,0xc9,0x06,0xbe,0x2d);
#endif


typedef struct _MSSerial_PortName
{
    // 
    CHAR VariableData[1];
    #define MSSerial_PortName_PortName_ID 1

} MSSerial_PortName, *PMSSerial_PortName;

// MSSerial_CommInfo - SERIAL_WMI_COMM_DATA
#define SERIAL_PORT_WMI_COMM_GUID \
    { 0xedb16a62,0xb16c,0x11d1, { 0xbd,0x98,0x00,0xa0,0xc9,0x06,0xbe,0x2d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSerial_CommInfo_GUID, \
            0xedb16a62,0xb16c,0x11d1,0xbd,0x98,0x00,0xa0,0xc9,0x06,0xbe,0x2d);
#endif


typedef struct _SERIAL_WMI_COMM_DATA
{
    // 
    ULONG BaudRate;
    #define SERIAL_WMI_COMM_DATA_BaudRate_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_BaudRate_ID 1

    // 
    ULONG BitsPerByte;
    #define SERIAL_WMI_COMM_DATA_BitsPerByte_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_BitsPerByte_ID 2


#define SERIAL_WMI_PARITY_NONE 0
#define SERIAL_WMI_PARITY_ODD 1
#define SERIAL_WMI_PARITY_EVEN 2
#define SERIAL_WMI_PARITY_SPACE 3
#define SERIAL_WMI_PARITY_MARK 4

    // 
    ULONG Parity;
    #define SERIAL_WMI_COMM_DATA_Parity_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_Parity_ID 3

    // 
    BOOLEAN ParityCheckEnable;
    #define SERIAL_WMI_COMM_DATA_ParityCheckEnable_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_ParityCheckEnable_ID 4


#define SERIAL_WMI_STOP_1 0
#define SERIAL_WMI_STOP_1_5 1
#define SERIAL_WMI_STOP_2 2

    // 
    ULONG StopBits;
    #define SERIAL_WMI_COMM_DATA_StopBits_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_StopBits_ID 5

    // 
    ULONG XoffCharacter;
    #define SERIAL_WMI_COMM_DATA_XoffCharacter_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_XoffCharacter_ID 6

    // 
    ULONG XoffXmitThreshold;
    #define SERIAL_WMI_COMM_DATA_XoffXmitThreshold_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_XoffXmitThreshold_ID 7

    // 
    ULONG XonCharacter;
    #define SERIAL_WMI_COMM_DATA_XonCharacter_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_XonCharacter_ID 8

    // 
    ULONG XonXmitThreshold;
    #define SERIAL_WMI_COMM_DATA_XonXmitThreshold_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_XonXmitThreshold_ID 9

    // 
    ULONG MaximumBaudRate;
    #define SERIAL_WMI_COMM_DATA_MaximumBaudRate_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_MaximumBaudRate_ID 10

    // 
    ULONG MaximumOutputBufferSize;
    #define SERIAL_WMI_COMM_DATA_MaximumOutputBufferSize_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_MaximumOutputBufferSize_ID 11

    // 
    ULONG MaximumInputBufferSize;
    #define SERIAL_WMI_COMM_DATA_MaximumInputBufferSize_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMM_DATA_MaximumInputBufferSize_ID 12

    // 
    BOOLEAN Support16BitMode;
    #define SERIAL_WMI_COMM_DATA_Support16BitMode_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_Support16BitMode_ID 13

    // 
    BOOLEAN SupportDTRDSR;
    #define SERIAL_WMI_COMM_DATA_SupportDTRDSR_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SupportDTRDSR_ID 14

    // 
    BOOLEAN SupportIntervalTimeouts;
    #define SERIAL_WMI_COMM_DATA_SupportIntervalTimeouts_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SupportIntervalTimeouts_ID 15

    // 
    BOOLEAN SupportParityCheck;
    #define SERIAL_WMI_COMM_DATA_SupportParityCheck_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SupportParityCheck_ID 16

    // 
    BOOLEAN SupportRTSCTS;
    #define SERIAL_WMI_COMM_DATA_SupportRTSCTS_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SupportRTSCTS_ID 17

    // 
    BOOLEAN SupportXonXoff;
    #define SERIAL_WMI_COMM_DATA_SupportXonXoff_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SupportXonXoff_ID 18

    // 
    BOOLEAN SettableBaudRate;
    #define SERIAL_WMI_COMM_DATA_SettableBaudRate_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SettableBaudRate_ID 19

    // 
    BOOLEAN SettableDataBits;
    #define SERIAL_WMI_COMM_DATA_SettableDataBits_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SettableDataBits_ID 20

    // 
    BOOLEAN SettableFlowControl;
    #define SERIAL_WMI_COMM_DATA_SettableFlowControl_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SettableFlowControl_ID 21

    // 
    BOOLEAN SettableParity;
    #define SERIAL_WMI_COMM_DATA_SettableParity_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SettableParity_ID 22

    // 
    BOOLEAN SettableParityCheck;
    #define SERIAL_WMI_COMM_DATA_SettableParityCheck_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SettableParityCheck_ID 23

    // 
    BOOLEAN SettableStopBits;
    #define SERIAL_WMI_COMM_DATA_SettableStopBits_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_SettableStopBits_ID 24

    // 
    BOOLEAN IsBusy;
    #define SERIAL_WMI_COMM_DATA_IsBusy_SIZE sizeof(BOOLEAN)
    #define SERIAL_WMI_COMM_DATA_IsBusy_ID 25

} SERIAL_WMI_COMM_DATA, *PSERIAL_WMI_COMM_DATA;

#define SERIAL_WMI_COMM_DATA_SIZE (FIELD_OFFSET(SERIAL_WMI_COMM_DATA, IsBusy) + SERIAL_WMI_COMM_DATA_IsBusy_SIZE)

// MSSerial_HardwareConfiguration - SERIAL_WMI_HW_DATA
#define SERIAL_PORT_WMI_HW_GUID \
    { 0x270b9b86,0xb16d,0x11d1, { 0xbd,0x98,0x00,0xa0,0xc9,0x06,0xbe,0x2d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSerial_HardwareConfiguration_GUID, \
            0x270b9b86,0xb16d,0x11d1,0xbd,0x98,0x00,0xa0,0xc9,0x06,0xbe,0x2d);
#endif


typedef struct _SERIAL_WMI_HW_DATA
{
    // 
    ULONG IrqNumber;
    #define SERIAL_WMI_HW_DATA_IrqNumber_SIZE sizeof(ULONG)
    #define SERIAL_WMI_HW_DATA_IrqNumber_ID 1

    // 
    ULONG IrqVector;
    #define SERIAL_WMI_HW_DATA_IrqVector_SIZE sizeof(ULONG)
    #define SERIAL_WMI_HW_DATA_IrqVector_ID 2

    // 
    ULONG IrqLevel;
    #define SERIAL_WMI_HW_DATA_IrqLevel_SIZE sizeof(ULONG)
    #define SERIAL_WMI_HW_DATA_IrqLevel_ID 3

    // 
    ULONGLONG IrqAffinityMask;
    #define SERIAL_WMI_HW_DATA_IrqAffinityMask_SIZE sizeof(ULONGLONG)
    #define SERIAL_WMI_HW_DATA_IrqAffinityMask_ID 4


#define SERIAL_WMI_INTTYPE_LATCHED 0
#define SERIAL_WMI_INTTYPE_LEVEL 1

    // 
    ULONG InterruptType;
    #define SERIAL_WMI_HW_DATA_InterruptType_SIZE sizeof(ULONG)
    #define SERIAL_WMI_HW_DATA_InterruptType_ID 5

    // 
    ULONGLONG BaseIOAddress;
    #define SERIAL_WMI_HW_DATA_BaseIOAddress_SIZE sizeof(ULONGLONG)
    #define SERIAL_WMI_HW_DATA_BaseIOAddress_ID 6

} SERIAL_WMI_HW_DATA, *PSERIAL_WMI_HW_DATA;

#define SERIAL_WMI_HW_DATA_SIZE (FIELD_OFFSET(SERIAL_WMI_HW_DATA, BaseIOAddress) + SERIAL_WMI_HW_DATA_BaseIOAddress_SIZE)

// MSSerial_PerformanceInformation - SERIAL_WMI_PERF_DATA
#define SERIAL_PORT_WMI_PERF_GUID \
    { 0x56415acc,0xb16d,0x11d1, { 0xbd,0x98,0x00,0xa0,0xc9,0x06,0xbe,0x2d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSerial_PerformanceInformation_GUID, \
            0x56415acc,0xb16d,0x11d1,0xbd,0x98,0x00,0xa0,0xc9,0x06,0xbe,0x2d);
#endif


typedef struct _SERIAL_WMI_PERF_DATA
{
    // 
    ULONG ReceivedCount;
    #define SERIAL_WMI_PERF_DATA_ReceivedCount_SIZE sizeof(ULONG)
    #define SERIAL_WMI_PERF_DATA_ReceivedCount_ID 1

    // 
    ULONG TransmittedCount;
    #define SERIAL_WMI_PERF_DATA_TransmittedCount_SIZE sizeof(ULONG)
    #define SERIAL_WMI_PERF_DATA_TransmittedCount_ID 2

    // 
    ULONG FrameErrorCount;
    #define SERIAL_WMI_PERF_DATA_FrameErrorCount_SIZE sizeof(ULONG)
    #define SERIAL_WMI_PERF_DATA_FrameErrorCount_ID 3

    // 
    ULONG SerialOverrunErrorCount;
    #define SERIAL_WMI_PERF_DATA_SerialOverrunErrorCount_SIZE sizeof(ULONG)
    #define SERIAL_WMI_PERF_DATA_SerialOverrunErrorCount_ID 4

    // 
    ULONG BufferOverrunErrorCount;
    #define SERIAL_WMI_PERF_DATA_BufferOverrunErrorCount_SIZE sizeof(ULONG)
    #define SERIAL_WMI_PERF_DATA_BufferOverrunErrorCount_ID 5

    // 
    ULONG ParityErrorCount;
    #define SERIAL_WMI_PERF_DATA_ParityErrorCount_SIZE sizeof(ULONG)
    #define SERIAL_WMI_PERF_DATA_ParityErrorCount_ID 6

} SERIAL_WMI_PERF_DATA, *PSERIAL_WMI_PERF_DATA;

#define SERIAL_WMI_PERF_DATA_SIZE (FIELD_OFFSET(SERIAL_WMI_PERF_DATA, ParityErrorCount) + SERIAL_WMI_PERF_DATA_ParityErrorCount_SIZE)

// MSSerial_CommProperties - SERIAL_WMI_COMMPROP
#define SERIAL_PORT_WMI_PROPERTIES_GUID \
    { 0x8209ec2a,0x2d6b,0x11d2, { 0xba,0x49,0x00,0xa0,0xc9,0x06,0x29,0x10 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSSerial_CommProperties_GUID, \
            0x8209ec2a,0x2d6b,0x11d2,0xba,0x49,0x00,0xa0,0xc9,0x06,0x29,0x10);
#endif


typedef struct _SERIAL_WMI_COMMPROP
{
    // 
    USHORT wPacketLength;
    #define SERIAL_WMI_COMMPROP_wPacketLength_SIZE sizeof(USHORT)
    #define SERIAL_WMI_COMMPROP_wPacketLength_ID 1

    // 
    USHORT wPacketVersion;
    #define SERIAL_WMI_COMMPROP_wPacketVersion_SIZE sizeof(USHORT)
    #define SERIAL_WMI_COMMPROP_wPacketVersion_ID 2

    // 
    ULONG dwServiceMask;
    #define SERIAL_WMI_COMMPROP_dwServiceMask_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwServiceMask_ID 3

    // 
    ULONG dwReserved1;
    #define SERIAL_WMI_COMMPROP_dwReserved1_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwReserved1_ID 4

    // 
    ULONG dwMaxTxQueue;
    #define SERIAL_WMI_COMMPROP_dwMaxTxQueue_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwMaxTxQueue_ID 5

    // 
    ULONG dwMaxRxQueue;
    #define SERIAL_WMI_COMMPROP_dwMaxRxQueue_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwMaxRxQueue_ID 6

    // 
    ULONG dwMaxBaud;
    #define SERIAL_WMI_COMMPROP_dwMaxBaud_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwMaxBaud_ID 7

    // 
    ULONG dwProvSubType;
    #define SERIAL_WMI_COMMPROP_dwProvSubType_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwProvSubType_ID 8

    // 
    ULONG dwProvCapabilities;
    #define SERIAL_WMI_COMMPROP_dwProvCapabilities_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwProvCapabilities_ID 9

    // 
    ULONG dwSettableParams;
    #define SERIAL_WMI_COMMPROP_dwSettableParams_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwSettableParams_ID 10

    // 
    ULONG dwSettableBaud;
    #define SERIAL_WMI_COMMPROP_dwSettableBaud_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwSettableBaud_ID 11

    // 
    USHORT wSettableData;
    #define SERIAL_WMI_COMMPROP_wSettableData_SIZE sizeof(USHORT)
    #define SERIAL_WMI_COMMPROP_wSettableData_ID 12

    // 
    USHORT wSettableStopParity;
    #define SERIAL_WMI_COMMPROP_wSettableStopParity_SIZE sizeof(USHORT)
    #define SERIAL_WMI_COMMPROP_wSettableStopParity_ID 13

    // 
    ULONG dwCurrentTxQueue;
    #define SERIAL_WMI_COMMPROP_dwCurrentTxQueue_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwCurrentTxQueue_ID 14

    // 
    ULONG dwCurrentRxQueue;
    #define SERIAL_WMI_COMMPROP_dwCurrentRxQueue_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwCurrentRxQueue_ID 15

    // 
    ULONG dwProvSpec1;
    #define SERIAL_WMI_COMMPROP_dwProvSpec1_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwProvSpec1_ID 16

    // 
    ULONG dwProvSpec2;
    #define SERIAL_WMI_COMMPROP_dwProvSpec2_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwProvSpec2_ID 17

    // 
    ULONG dwProvCharSize;
    #define SERIAL_WMI_COMMPROP_dwProvCharSize_SIZE sizeof(ULONG)
    #define SERIAL_WMI_COMMPROP_dwProvCharSize_ID 18

    // 
    UCHAR wcProvChar[1];
    #define SERIAL_WMI_COMMPROP_wcProvChar_ID 19

} SERIAL_WMI_COMMPROP, *PSERIAL_WMI_COMMPROP;

// MSParallel_AllocFreeCounts - PARPORT_WMI_ALLOC_FREE_COUNTS
#define PARPORT_WMI_ALLOCATE_FREE_COUNTS_GUID \
    { 0x4bbb69ea,0x6853,0x11d2, { 0x8e,0xce,0x00,0xc0,0x4f,0x8e,0xf4,0x81 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSParallel_AllocFreeCounts_GUID, \
            0x4bbb69ea,0x6853,0x11d2,0x8e,0xce,0x00,0xc0,0x4f,0x8e,0xf4,0x81);
#endif


typedef struct _PARPORT_WMI_ALLOC_FREE_COUNTS
{
    // 
    ULONG PortAllocates;
    #define PARPORT_WMI_ALLOC_FREE_COUNTS_PortAllocates_SIZE sizeof(ULONG)
    #define PARPORT_WMI_ALLOC_FREE_COUNTS_PortAllocates_ID 1

    // 
    ULONG PortFrees;
    #define PARPORT_WMI_ALLOC_FREE_COUNTS_PortFrees_SIZE sizeof(ULONG)
    #define PARPORT_WMI_ALLOC_FREE_COUNTS_PortFrees_ID 2

} PARPORT_WMI_ALLOC_FREE_COUNTS, *PPARPORT_WMI_ALLOC_FREE_COUNTS;

#define PARPORT_WMI_ALLOC_FREE_COUNTS_SIZE (FIELD_OFFSET(PARPORT_WMI_ALLOC_FREE_COUNTS, PortFrees) + PARPORT_WMI_ALLOC_FREE_COUNTS_PortFrees_SIZE)

// MSParallel_DeviceBytesTransferred - PARALLEL_WMI_LOG_INFO
#define PARALLEL_WMI_BYTES_TRANSFERRED_GUID \
    { 0x89fef2d6,0x654b,0x11d2, { 0x9e,0x15,0x00,0xc0,0x4f,0x8e,0xf4,0x81 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSParallel_DeviceBytesTransferred_GUID, \
            0x89fef2d6,0x654b,0x11d2,0x9e,0x15,0x00,0xc0,0x4f,0x8e,0xf4,0x81);
#endif


typedef struct _PARALLEL_WMI_LOG_INFO
{
    // 
    ULONG Flags1;
    #define PARALLEL_WMI_LOG_INFO_Flags1_SIZE sizeof(ULONG)
    #define PARALLEL_WMI_LOG_INFO_Flags1_ID 1

    // 
    ULONG Flags2;
    #define PARALLEL_WMI_LOG_INFO_Flags2_SIZE sizeof(ULONG)
    #define PARALLEL_WMI_LOG_INFO_Flags2_ID 2

    // 
    ULONG spare[2];
    #define PARALLEL_WMI_LOG_INFO_spare_SIZE sizeof(ULONG[2])
    #define PARALLEL_WMI_LOG_INFO_spare_ID 3

    // 
    LONGLONG SppWriteCount;
    #define PARALLEL_WMI_LOG_INFO_SppWriteCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_SppWriteCount_ID 4

    // 
    LONGLONG NibbleReadCount;
    #define PARALLEL_WMI_LOG_INFO_NibbleReadCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_NibbleReadCount_ID 5

    // 
    LONGLONG BoundedEcpWriteCount;
    #define PARALLEL_WMI_LOG_INFO_BoundedEcpWriteCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_BoundedEcpWriteCount_ID 6

    // 
    LONGLONG BoundedEcpReadCount;
    #define PARALLEL_WMI_LOG_INFO_BoundedEcpReadCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_BoundedEcpReadCount_ID 7

    // 
    LONGLONG HwEcpWriteCount;
    #define PARALLEL_WMI_LOG_INFO_HwEcpWriteCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_HwEcpWriteCount_ID 8

    // 
    LONGLONG HwEcpReadCount;
    #define PARALLEL_WMI_LOG_INFO_HwEcpReadCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_HwEcpReadCount_ID 9

    // 
    LONGLONG SwEcpWriteCount;
    #define PARALLEL_WMI_LOG_INFO_SwEcpWriteCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_SwEcpWriteCount_ID 10

    // 
    LONGLONG SwEcpReadCount;
    #define PARALLEL_WMI_LOG_INFO_SwEcpReadCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_SwEcpReadCount_ID 11

    // 
    LONGLONG HwEppWriteCount;
    #define PARALLEL_WMI_LOG_INFO_HwEppWriteCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_HwEppWriteCount_ID 12

    // 
    LONGLONG HwEppReadCount;
    #define PARALLEL_WMI_LOG_INFO_HwEppReadCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_HwEppReadCount_ID 13

    // 
    LONGLONG SwEppWriteCount;
    #define PARALLEL_WMI_LOG_INFO_SwEppWriteCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_SwEppWriteCount_ID 14

    // 
    LONGLONG SwEppReadCount;
    #define PARALLEL_WMI_LOG_INFO_SwEppReadCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_SwEppReadCount_ID 15

    // 
    LONGLONG ByteReadCount;
    #define PARALLEL_WMI_LOG_INFO_ByteReadCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_ByteReadCount_ID 16

    // 
    LONGLONG ChannelNibbleReadCount;
    #define PARALLEL_WMI_LOG_INFO_ChannelNibbleReadCount_SIZE sizeof(LONGLONG)
    #define PARALLEL_WMI_LOG_INFO_ChannelNibbleReadCount_ID 17

} PARALLEL_WMI_LOG_INFO, *PPARALLEL_WMI_LOG_INFO;

#define PARALLEL_WMI_LOG_INFO_SIZE (FIELD_OFFSET(PARALLEL_WMI_LOG_INFO, ChannelNibbleReadCount) + PARALLEL_WMI_LOG_INFO_ChannelNibbleReadCount_SIZE)

// MSRedbook_DriverInformation - REDBOOK_WMI_STD_DATA
#define GUID_REDBOOK_WMI_STD_DATA \
    { 0xb90550e7,0xae0a,0x11d1, { 0xa5,0x71,0x00,0xc0,0x4f,0xa3,0x47,0x30 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSRedbook_DriverInformationGuid, \
            0xb90550e7,0xae0a,0x11d1,0xa5,0x71,0x00,0xc0,0x4f,0xa3,0x47,0x30);
#endif


typedef struct _REDBOOK_WMI_STD_DATA
{
    // 
    ULONG NumberOfBuffers;
    #define REDBOOK_WMI_NUMBER_OF_BUFFERS_SIZE sizeof(ULONG)
    #define REDBOOK_WMI_NUMBER_OF_BUFFERS_ID 1

    // 
    ULONG SectorsPerRead;
    #define REDBOOK_WMI_SECTORS_PER_READ_SIZE sizeof(ULONG)
    #define REDBOOK_WMI_SECTORS_PER_READ_ID 2

    // 
    ULONG SectorsPerReadMask;
    #define REDBOOK_WMI_SECTORS_PER_READ_MASK_SIZE sizeof(ULONG)
    #define REDBOOK_WMI_SECTORS_PER_READ_MASK_ID 3

    // 
    ULONG MaximumSectorsPerRead;
    #define REDBOOK_WMI_MAX_SECTORS_PER_READ_SIZE sizeof(ULONG)
    #define REDBOOK_WMI_MAX_SECTORS_PER_READ_ID 4

    // 
    BOOLEAN PlayEnabled;
    #define REDBOOK_WMI_PLAY_ENABLED_SIZE sizeof(BOOLEAN)
    #define REDBOOK_WMI_PLAY_ENABLED_ID 5

    // 
    BOOLEAN CDDASupported;
    #define REDBOOK_WMI_CDDA_SUPPORTED_SIZE sizeof(BOOLEAN)
    #define REDBOOK_WMI_CDDA_SUPPORTED_ID 6

    // 
    BOOLEAN CDDAAccurate;
    #define REDBOOK_WMI_CDDA_ACCURATE_SIZE sizeof(BOOLEAN)
    #define REDBOOK_WMI_CDDA_ACCURATE_ID 7

    // 
    BOOLEAN Reserved1;
    #define REDBOOK_WMI_STD_DATA_Reserved1_SIZE sizeof(BOOLEAN)
    #define REDBOOK_WMI_STD_DATA_Reserved1_ID 8

} REDBOOK_WMI_STD_DATA, *PREDBOOK_WMI_STD_DATA;

#define REDBOOK_WMI_STD_DATA_SIZE (FIELD_OFFSET(REDBOOK_WMI_STD_DATA, Reserved1) + REDBOOK_WMI_STD_DATA_Reserved1_SIZE)

// MSRedbook_Performance - REDBOOK_WMI_PERF_DATA
#define GUID_REDBOOK_WMI_PERF_DATA \
    { 0xb90550e8,0xae0a,0x11d1, { 0xa5,0x71,0x00,0xc0,0x4f,0xa3,0x47,0x30 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSRedbook_PerformanceGuid, \
            0xb90550e8,0xae0a,0x11d1,0xa5,0x71,0x00,0xc0,0x4f,0xa3,0x47,0x30);
#endif


typedef struct _REDBOOK_WMI_PERF_DATA
{
    // 
    LONGLONG TimeReadDelay;
    #define REDBOOK_WMI_PERF_TIME_READING_DELAY_SIZE sizeof(LONGLONG)
    #define REDBOOK_WMI_PERF_TIME_READING_DELAY_ID 1

    // 
    LONGLONG TimeReading;
    #define REDBOOK_WMI_PERF_TIME_READING_SIZE sizeof(LONGLONG)
    #define REDBOOK_WMI_PERF_TIME_READING_ID 2

    // 
    LONGLONG TimeStreamDelay;
    #define REDBOOK_WMI_PERF_TIME_STREAMING_DELAY_SIZE sizeof(LONGLONG)
    #define REDBOOK_WMI_PERF_TIME_STREAMING_DELAY_ID 3

    // 
    LONGLONG TimeStreaming;
    #define REDBOOK_WMI_PERF_TIME_STREAMING_SIZE sizeof(LONGLONG)
    #define REDBOOK_WMI_PERF_TIME_STREAMING_ID 4

    // 
    LONGLONG DataProcessed;
    #define REDBOOK_WMI_PERF_DATA_PROCESSED_SIZE sizeof(LONGLONG)
    #define REDBOOK_WMI_PERF_DATA_PROCESSED_ID 5

    // 
    ULONG StreamPausedCount;
    #define REDBOOK_WMI_PERF_STREAM_PAUSED_COUNT_SIZE sizeof(ULONG)
    #define REDBOOK_WMI_PERF_STREAM_PAUSED_COUNT_ID 6

} REDBOOK_WMI_PERF_DATA, *PREDBOOK_WMI_PERF_DATA;

#define REDBOOK_WMI_PERF_DATA_SIZE (FIELD_OFFSET(REDBOOK_WMI_PERF_DATA, StreamPausedCount) + REDBOOK_WMI_PERF_DATA_StreamPausedCount_SIZE)

// RegisteredGuids - RegisteredGuids
#define RegisteredGuidsGuid \
    { 0xe3dff7bd,0x3915,0x11d2, { 0x91,0x03,0x00,0xc0,0x4f,0xb9,0x98,0xa2 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(RegisteredGuids_GUID, \
            0xe3dff7bd,0x3915,0x11d2,0x91,0x03,0x00,0xc0,0x4f,0xb9,0x98,0xa2);
#endif


typedef struct _RegisteredGuids
{
    // 
    ULONG GuidType;
    #define RegisteredGuids_GuidType_SIZE sizeof(ULONG)
    #define RegisteredGuids_GuidType_ID 1

    // 
    ULONG LoggerId;
    #define RegisteredGuids_LoggerId_SIZE sizeof(ULONG)
    #define RegisteredGuids_LoggerId_ID 2

    // 
    ULONG EnableLevel;
    #define RegisteredGuids_EnableLevel_SIZE sizeof(ULONG)
    #define RegisteredGuids_EnableLevel_ID 3

    // 
    ULONG EnableFlags;
    #define RegisteredGuids_EnableFlags_SIZE sizeof(ULONG)
    #define RegisteredGuids_EnableFlags_ID 4

    // 
    BOOLEAN IsEnabled;
    #define RegisteredGuids_IsEnabled_SIZE sizeof(BOOLEAN)
    #define RegisteredGuids_IsEnabled_ID 5

} RegisteredGuids, *PRegisteredGuids;

#define RegisteredGuids_SIZE (FIELD_OFFSET(RegisteredGuids, IsEnabled) + RegisteredGuids_IsEnabled_SIZE)

// MSTapeDriveParam - WMI_TAPE_DRIVE_PARAMETERS
#define WMI_TAPE_DRIVE_PARAMETERS_GUID \
    { 0xb9a8cfd5,0x8d72,0x47a4, { 0xac,0x0e,0x28,0x4a,0x32,0x00,0xf4,0xfb } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSTapeDriveParam_GUID, \
            0xb9a8cfd5,0x8d72,0x47a4,0xac,0x0e,0x28,0x4a,0x32,0x00,0xf4,0xfb);
#endif


typedef struct _WMI_TAPE_DRIVE_PARAMETERS
{
    // 
    ULONG MaximumBlockSize;
    #define WMI_TAPE_DRIVE_PARAMETERS_MaximumBlockSize_SIZE sizeof(ULONG)
    #define WMI_TAPE_DRIVE_PARAMETERS_MaximumBlockSize_ID 1

    // 
    ULONG MinimumBlockSize;
    #define WMI_TAPE_DRIVE_PARAMETERS_MinimumBlockSize_SIZE sizeof(ULONG)
    #define WMI_TAPE_DRIVE_PARAMETERS_MinimumBlockSize_ID 2

    // 
    ULONG DefaultBlockSize;
    #define WMI_TAPE_DRIVE_PARAMETERS_DefaultBlockSize_SIZE sizeof(ULONG)
    #define WMI_TAPE_DRIVE_PARAMETERS_DefaultBlockSize_ID 3

    // 
    ULONG MaximumPartitionCount;
    #define WMI_TAPE_DRIVE_PARAMETERS_MaximumPartitionCount_SIZE sizeof(ULONG)
    #define WMI_TAPE_DRIVE_PARAMETERS_MaximumPartitionCount_ID 4

    // 
    BOOLEAN CompressionCapable;
    #define WMI_TAPE_DRIVE_PARAMETERS_CompressionCapable_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_DRIVE_PARAMETERS_CompressionCapable_ID 5

    // 
    BOOLEAN CompressionEnabled;
    #define WMI_TAPE_DRIVE_PARAMETERS_CompressionEnabled_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_DRIVE_PARAMETERS_CompressionEnabled_ID 6

    // 
    BOOLEAN ReportSetmarks;
    #define WMI_TAPE_DRIVE_PARAMETERS_ReportSetmarks_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_DRIVE_PARAMETERS_ReportSetmarks_ID 7

    // 
    BOOLEAN HardwareErrorCorrection;
    #define WMI_TAPE_DRIVE_PARAMETERS_HardwareErrorCorrection_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_DRIVE_PARAMETERS_HardwareErrorCorrection_ID 8

} WMI_TAPE_DRIVE_PARAMETERS, *PWMI_TAPE_DRIVE_PARAMETERS;

#define WMI_TAPE_DRIVE_PARAMETERS_SIZE (FIELD_OFFSET(WMI_TAPE_DRIVE_PARAMETERS, HardwareErrorCorrection) + WMI_TAPE_DRIVE_PARAMETERS_HardwareErrorCorrection_SIZE)

// MSTapeMediaCapacity - WMI_TAPE_MEDIA_PARAMETERS
#define WMI_TAPE_MEDIA_PARAMETERS_GUID \
    { 0x8c2147a4,0xff29,0x4336, { 0xb8,0xa4,0x22,0x7b,0x54,0xcc,0x09,0x66 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSTapeMediaCapacity_GUID, \
            0x8c2147a4,0xff29,0x4336,0xb8,0xa4,0x22,0x7b,0x54,0xcc,0x09,0x66);
#endif


typedef struct _WMI_TAPE_MEDIA_PARAMETERS
{
    // 
    ULONGLONG MaximumCapacity;
    #define WMI_TAPE_MEDIA_PARAMETERS_MaximumCapacity_SIZE sizeof(ULONGLONG)
    #define WMI_TAPE_MEDIA_PARAMETERS_MaximumCapacity_ID 1

    // 
    ULONGLONG AvailableCapacity;
    #define WMI_TAPE_MEDIA_PARAMETERS_AvailableCapacity_SIZE sizeof(ULONGLONG)
    #define WMI_TAPE_MEDIA_PARAMETERS_AvailableCapacity_ID 2

    // 
    ULONG BlockSize;
    #define WMI_TAPE_MEDIA_PARAMETERS_BlockSize_SIZE sizeof(ULONG)
    #define WMI_TAPE_MEDIA_PARAMETERS_BlockSize_ID 3

    // 
    ULONG PartitionCount;
    #define WMI_TAPE_MEDIA_PARAMETERS_PartitionCount_SIZE sizeof(ULONG)
    #define WMI_TAPE_MEDIA_PARAMETERS_PartitionCount_ID 4

    // 
    BOOLEAN MediaWriteProtected;
    #define WMI_TAPE_MEDIA_PARAMETERS_MediaWriteProtected_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_MEDIA_PARAMETERS_MediaWriteProtected_ID 5

} WMI_TAPE_MEDIA_PARAMETERS, *PWMI_TAPE_MEDIA_PARAMETERS;

#define WMI_TAPE_MEDIA_PARAMETERS_SIZE (FIELD_OFFSET(WMI_TAPE_MEDIA_PARAMETERS, MediaWriteProtected) + WMI_TAPE_MEDIA_PARAMETERS_MediaWriteProtected_SIZE)

// MSTapeSymbolicName - WMI_TAPE_SYMBOLIC_NAME
#define WMI_TAPE_SYMBOLIC_NAME_GUID \
    { 0x3fb828f7,0xf119,0x4066, { 0xb1,0xe6,0xdb,0x40,0x7c,0xe9,0xde,0x91 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSTapeSymbolicName_GUID, \
            0x3fb828f7,0xf119,0x4066,0xb1,0xe6,0xdb,0x40,0x7c,0xe9,0xde,0x91);
#endif


typedef struct _WMI_TAPE_SYMBOLIC_NAME
{
    // 
    CHAR VariableData[1];
    #define WMI_TAPE_SYMBOLIC_NAME_TapeSymbolicName_ID 1

} WMI_TAPE_SYMBOLIC_NAME, *PWMI_TAPE_SYMBOLIC_NAME;

// MSTapeDriveProblemEvent - WMI_TAPE_PROBLEM_WARNING
#define WMI_TAPE_PROBLEM_WARNING_GUID \
    { 0xbc4dd36c,0xfa66,0x4080, { 0x87,0xa0,0x0c,0x59,0x22,0xeb,0x78,0x87 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSTapeDriveProblemEvent_GUID, \
            0xbc4dd36c,0xfa66,0x4080,0x87,0xa0,0x0c,0x59,0x22,0xeb,0x78,0x87);
#endif


typedef struct _WMI_TAPE_PROBLEM_WARNING
{
    // 
    ULONG DriveProblemType;
    #define WMI_TAPE_PROBLEM_WARNING_DriveProblemType_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_WARNING_DriveProblemType_ID 1

    // 
    UCHAR TapeData[512];
    #define WMI_TAPE_PROBLEM_WARNING_TapeData_SIZE sizeof(UCHAR[512])
    #define WMI_TAPE_PROBLEM_WARNING_TapeData_ID 2

} WMI_TAPE_PROBLEM_WARNING, *PWMI_TAPE_PROBLEM_WARNING;

#define WMI_TAPE_PROBLEM_WARNING_SIZE (FIELD_OFFSET(WMI_TAPE_PROBLEM_WARNING, TapeData) + WMI_TAPE_PROBLEM_WARNING_TapeData_SIZE)

// MSTapeProblemIoError - WMI_TAPE_PROBLEM_IO_ERROR
#define WMI_TAPE_PROBLEM_IO_ERROR_GUID \
    { 0x58fd29f9,0xb516,0x40fd, { 0x87,0x1a,0x7e,0xe7,0x6d,0x5b,0xb5,0x3e } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSTapeProblemIoError_GUID, \
            0x58fd29f9,0xb516,0x40fd,0x87,0x1a,0x7e,0xe7,0x6d,0x5b,0xb5,0x3e);
#endif


typedef struct _WMI_TAPE_PROBLEM_IO_ERROR
{
    // 
    ULONG ReadCorrectedWithoutDelay;
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadCorrectedWithoutDelay_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadCorrectedWithoutDelay_ID 1

    // 
    ULONG ReadCorrectedWithDelay;
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadCorrectedWithDelay_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadCorrectedWithDelay_ID 2

    // 
    ULONG ReadTotalErrors;
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadTotalErrors_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadTotalErrors_ID 3

    // 
    ULONG ReadTotalCorrectedErrors;
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadTotalCorrectedErrors_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadTotalCorrectedErrors_ID 4

    // 
    ULONG ReadTotalUncorrectedErrors;
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadTotalUncorrectedErrors_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadTotalUncorrectedErrors_ID 5

    // 
    ULONG ReadCorrectionAlgorithmProcessed;
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadCorrectionAlgorithmProcessed_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_ReadCorrectionAlgorithmProcessed_ID 6

    // 
    ULONG WriteCorrectedWithoutDelay;
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteCorrectedWithoutDelay_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteCorrectedWithoutDelay_ID 7

    // 
    ULONG WriteCorrectedWithDelay;
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteCorrectedWithDelay_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteCorrectedWithDelay_ID 8

    // 
    ULONG WriteTotalErrors;
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteTotalErrors_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteTotalErrors_ID 9

    // 
    ULONG WriteTotalCorrectedErrors;
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteTotalCorrectedErrors_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteTotalCorrectedErrors_ID 10

    // 
    ULONG WriteTotalUncorrectedErrors;
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteTotalUncorrectedErrors_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteTotalUncorrectedErrors_ID 11

    // 
    ULONG WriteCorrectionAlgorithmProcessed;
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteCorrectionAlgorithmProcessed_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_WriteCorrectionAlgorithmProcessed_ID 12

    // 
    ULONG NonMediumErrors;
    #define WMI_TAPE_PROBLEM_IO_ERROR_NonMediumErrors_SIZE sizeof(ULONG)
    #define WMI_TAPE_PROBLEM_IO_ERROR_NonMediumErrors_ID 13

} WMI_TAPE_PROBLEM_IO_ERROR, *PWMI_TAPE_PROBLEM_IO_ERROR;

#define WMI_TAPE_PROBLEM_IO_ERROR_SIZE (FIELD_OFFSET(WMI_TAPE_PROBLEM_IO_ERROR, NonMediumErrors) + WMI_TAPE_PROBLEM_IO_ERROR_NonMediumErrors_SIZE)

// MSTapeProblemDeviceError - WMI_TAPE_PROBLEM_DEVICE_ERROR
#define WMI_TAPE_PROBLEM_DEVICE_ERROR_GUID \
    { 0x43ec6b13,0x10bb,0x4bf6, { 0xb7,0x16,0x1c,0x1e,0x2f,0x10,0xbb,0x5f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSTapeProblemDeviceError_GUID, \
            0x43ec6b13,0x10bb,0x4bf6,0xb7,0x16,0x1c,0x1e,0x2f,0x10,0xbb,0x5f);
#endif


typedef struct _WMI_TAPE_PROBLEM_DEVICE_ERROR
{
    // 
    BOOLEAN ReadWarning;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_ReadWarning_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_ReadWarning_ID 1

    // 
    BOOLEAN WriteWarning;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_WriteWarning_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_WriteWarning_ID 2

    // 
    BOOLEAN HardError;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_HardError_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_HardError_ID 3

    // 
    BOOLEAN ReadFailure;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_ReadFailure_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_ReadFailure_ID 4

    // 
    BOOLEAN WriteFailure;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_WriteFailure_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_WriteFailure_ID 5

    // 
    BOOLEAN UnsupportedFormat;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_UnsupportedFormat_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_UnsupportedFormat_ID 6

    // 
    BOOLEAN TapeSnapped;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_TapeSnapped_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_TapeSnapped_ID 7

    // 
    BOOLEAN DriveRequiresCleaning;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_DriveRequiresCleaning_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_DriveRequiresCleaning_ID 8

    // 
    BOOLEAN TimetoCleanDrive;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_TimetoCleanDrive_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_TimetoCleanDrive_ID 9

    // 
    BOOLEAN DriveHardwareError;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_DriveHardwareError_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_DriveHardwareError_ID 10

    // 
    BOOLEAN ScsiInterfaceError;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_ScsiInterfaceError_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_ScsiInterfaceError_ID 11

    // 
    BOOLEAN MediaLife;
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_MediaLife_SIZE sizeof(BOOLEAN)
    #define WMI_TAPE_PROBLEM_DEVICE_ERROR_MediaLife_ID 12

} WMI_TAPE_PROBLEM_DEVICE_ERROR, *PWMI_TAPE_PROBLEM_DEVICE_ERROR;

#define WMI_TAPE_PROBLEM_DEVICE_ERROR_SIZE (FIELD_OFFSET(WMI_TAPE_PROBLEM_DEVICE_ERROR, MediaLife) + WMI_TAPE_PROBLEM_DEVICE_ERROR_MediaLife_SIZE)

// MSChangerParameters - WMI_CHANGER_PARAMETERS
#define WMI_CHANGER_PARAMETERS_GUID \
    { 0x24eb52ac,0x7c77,0x438b, { 0xab,0x61,0xd0,0x24,0xda,0xb0,0xc0,0x3a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSChangerParameters_GUID, \
            0x24eb52ac,0x7c77,0x438b,0xab,0x61,0xd0,0x24,0xda,0xb0,0xc0,0x3a);
#endif


typedef struct _WMI_CHANGER_PARAMETERS
{
    // 
    ULONG NumberOfSlots;
    #define WMI_CHANGER_PARAMETERS_NumberOfSlots_SIZE sizeof(ULONG)
    #define WMI_CHANGER_PARAMETERS_NumberOfSlots_ID 1

    // 
    ULONG NumberOfDrives;
    #define WMI_CHANGER_PARAMETERS_NumberOfDrives_SIZE sizeof(ULONG)
    #define WMI_CHANGER_PARAMETERS_NumberOfDrives_ID 2

    // 
    ULONG NumberOfIEPorts;
    #define WMI_CHANGER_PARAMETERS_NumberOfIEPorts_SIZE sizeof(ULONG)
    #define WMI_CHANGER_PARAMETERS_NumberOfIEPorts_ID 3

    // 
    ULONG NumberOfTransports;
    #define WMI_CHANGER_PARAMETERS_NumberOfTransports_SIZE sizeof(ULONG)
    #define WMI_CHANGER_PARAMETERS_NumberOfTransports_ID 4

    // 
    ULONG NumberOfDoors;
    #define WMI_CHANGER_PARAMETERS_NumberOfDoors_SIZE sizeof(ULONG)
    #define WMI_CHANGER_PARAMETERS_NumberOfDoors_ID 5

    // 
    ULONG NumberOfCleanerSlots;
    #define WMI_CHANGER_PARAMETERS_NumberOfCleanerSlots_SIZE sizeof(ULONG)
    #define WMI_CHANGER_PARAMETERS_NumberOfCleanerSlots_ID 6

    // 
    ULONG MagazineSize;
    #define WMI_CHANGER_PARAMETERS_MagazineSize_SIZE sizeof(ULONG)
    #define WMI_CHANGER_PARAMETERS_MagazineSize_ID 7

} WMI_CHANGER_PARAMETERS, *PWMI_CHANGER_PARAMETERS;

#define WMI_CHANGER_PARAMETERS_SIZE (FIELD_OFFSET(WMI_CHANGER_PARAMETERS, MagazineSize) + WMI_CHANGER_PARAMETERS_MagazineSize_SIZE)

// MSChangerProblemEvent - WMI_CHANGER_PROBLEM_WARNING
#define WMI_CHANGER_PROBLEM_WARNING_GUID \
    { 0x45db06a5,0x20d5,0x4de3, { 0xa3,0x6c,0x3a,0xb9,0x74,0x60,0x0a,0x4c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSChangerProblemEvent_GUID, \
            0x45db06a5,0x20d5,0x4de3,0xa3,0x6c,0x3a,0xb9,0x74,0x60,0x0a,0x4c);
#endif


typedef struct _WMI_CHANGER_PROBLEM_WARNING
{
    // 
    ULONG ChangerProblemType;
    #define WMI_CHANGER_PROBLEM_WARNING_ChangerProblemType_SIZE sizeof(ULONG)
    #define WMI_CHANGER_PROBLEM_WARNING_ChangerProblemType_ID 1

    // 
    UCHAR ChangerData[512];
    #define WMI_CHANGER_PROBLEM_WARNING_ChangerData_SIZE sizeof(UCHAR[512])
    #define WMI_CHANGER_PROBLEM_WARNING_ChangerData_ID 2

} WMI_CHANGER_PROBLEM_WARNING, *PWMI_CHANGER_PROBLEM_WARNING;

#define WMI_CHANGER_PROBLEM_WARNING_SIZE (FIELD_OFFSET(WMI_CHANGER_PROBLEM_WARNING, ChangerData) + WMI_CHANGER_PROBLEM_WARNING_ChangerData_SIZE)

// MSChangerProblemDeviceError - WMI_CHANGER_PROBLEM_DEVICE_ERROR
#define WMI_CHANGER_PROBLEM_DEVICE_ERROR_GUID \
    { 0x56b396a8,0x0b95,0x42fe, { 0xbb,0xce,0xd3,0x6f,0xda,0x90,0x4f,0x8e } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSChangerProblemDeviceError_GUID, \
            0x56b396a8,0x0b95,0x42fe,0xbb,0xce,0xd3,0x6f,0xda,0x90,0x4f,0x8e);
#endif


typedef struct _WMI_CHANGER_PROBLEM_DEVICE_ERROR
{
    // 
    ULONG ChangerProblemType;
    #define WMI_CHANGER_PROBLEM_DEVICE_ERROR_ChangerProblemType_SIZE sizeof(ULONG)
    #define WMI_CHANGER_PROBLEM_DEVICE_ERROR_ChangerProblemType_ID 1

} WMI_CHANGER_PROBLEM_DEVICE_ERROR, *PWMI_CHANGER_PROBLEM_DEVICE_ERROR;

#define WMI_CHANGER_PROBLEM_DEVICE_ERROR_SIZE (FIELD_OFFSET(WMI_CHANGER_PROBLEM_DEVICE_ERROR, ChangerProblemType) + WMI_CHANGER_PROBLEM_DEVICE_ERROR_ChangerProblemType_SIZE)

// MSDeviceUI_FirmwareRevision - DEVICE_UI_FIRMWARE_REVISION
#define DEVICE_UI_FIRMWARE_REVISION_GUID \
    { 0x4504b1d4,0xc5ee,0x4df6, { 0x95,0x1f,0x16,0x18,0x0e,0x3d,0xd8,0x15 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSDeviceUI_FirmwareRevision_GUID, \
            0x4504b1d4,0xc5ee,0x4df6,0x95,0x1f,0x16,0x18,0x0e,0x3d,0xd8,0x15);
#endif


typedef struct _DEVICE_UI_FIRMWARE_REVISION
{
    // 
    CHAR VariableData[1];
    #define DEVICE_UI_FIRMWARE_REVISION_FirmwareRevision_ID 1

} DEVICE_UI_FIRMWARE_REVISION, *PDEVICE_UI_FIRMWARE_REVISION;

// MSVerifierIrpLogEntry - MSVerifierIrpLogEntry
#define MSVerifierIrpLogEntryGuid \
    { 0x45068237,0x595d,0x4c7d, { 0xbd,0x80,0xf8,0x4a,0xdc,0x02,0x57,0xf8 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSVerifierIrpLogEntry_GUID, \
            0x45068237,0x595d,0x4c7d,0xbd,0x80,0xf8,0x4a,0xdc,0x02,0x57,0xf8);
#endif


typedef struct _MSVerifierIrpLogEntry
{
    // Count
    ULONG Count;
    #define MSVerifierIrpLogEntry_Count_SIZE sizeof(ULONG)
    #define MSVerifierIrpLogEntry_Count_ID 1

    // Major Function
    UCHAR Major;
    #define MSVerifierIrpLogEntry_Major_SIZE sizeof(UCHAR)
    #define MSVerifierIrpLogEntry_Major_ID 2

    // Minor Function
    UCHAR Minor;
    #define MSVerifierIrpLogEntry_Minor_SIZE sizeof(UCHAR)
    #define MSVerifierIrpLogEntry_Minor_ID 3

    // Flags
    UCHAR Flags;
    #define MSVerifierIrpLogEntry_Flags_SIZE sizeof(UCHAR)
    #define MSVerifierIrpLogEntry_Flags_ID 4

    // Control
    UCHAR Control;
    #define MSVerifierIrpLogEntry_Control_SIZE sizeof(UCHAR)
    #define MSVerifierIrpLogEntry_Control_ID 5

    // Arg1
    ULONGLONG Arg1;
    #define MSVerifierIrpLogEntry_Arg1_SIZE sizeof(ULONGLONG)
    #define MSVerifierIrpLogEntry_Arg1_ID 6

    // Arg2
    ULONGLONG Arg2;
    #define MSVerifierIrpLogEntry_Arg2_SIZE sizeof(ULONGLONG)
    #define MSVerifierIrpLogEntry_Arg2_ID 7

    // Arg3
    ULONGLONG Arg3;
    #define MSVerifierIrpLogEntry_Arg3_SIZE sizeof(ULONGLONG)
    #define MSVerifierIrpLogEntry_Arg3_ID 8

    // Arg4
    ULONGLONG Arg4;
    #define MSVerifierIrpLogEntry_Arg4_SIZE sizeof(ULONGLONG)
    #define MSVerifierIrpLogEntry_Arg4_ID 9

} MSVerifierIrpLogEntry, *PMSVerifierIrpLogEntry;

#define MSVerifierIrpLogEntry_SIZE (FIELD_OFFSET(MSVerifierIrpLogEntry, Arg4) + MSVerifierIrpLogEntry_Arg4_SIZE)

// MSVerifierIrpLogInformation - MSVerifierIrpLogInformation
// Verifier kernel information
#define MSVerifierIrpLogInformationGuid \
    { 0x1e2c2980,0xf7db,0x46aa, { 0x82,0x0e,0x87,0x34,0xfc,0xc2,0x1f,0x4c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSVerifierIrpLogInformation_GUID, \
            0x1e2c2980,0xf7db,0x46aa,0x82,0x0e,0x87,0x34,0xfc,0xc2,0x1f,0x4c);
#endif


typedef struct _MSVerifierIrpLogInformation
{
    // DeviceType
    ULONG DeviceType;
    #define MSVerifierIrpLogInformation_DeviceType_SIZE sizeof(ULONG)
    #define MSVerifierIrpLogInformation_DeviceType_ID 1

    // 
    ULONG EntryCount;
    #define MSVerifierIrpLogInformation_EntryCount_SIZE sizeof(ULONG)
    #define MSVerifierIrpLogInformation_EntryCount_ID 2

    // 
    MSVerifierIrpLogEntry Entries[1];
    #define MSVerifierIrpLogInformation_Entries_ID 3

} MSVerifierIrpLogInformation, *PMSVerifierIrpLogInformation;

// WmiMonitorBrightness - WmiMonitorBrightness
#define WmiMonitorBrightnessGuid \
    { 0xd43412ac,0x67f9,0x4fbb, { 0xa0,0x81,0x17,0x52,0xa2,0xc3,0x3e,0x84 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorBrightness_GUID, \
            0xd43412ac,0x67f9,0x4fbb,0xa0,0x81,0x17,0x52,0xa2,0xc3,0x3e,0x84);
#endif


typedef struct _WmiMonitorBrightness
{
    // 
    UCHAR CurrentBrightness;
    #define WmiMonitorBrightness_CurrentBrightness_SIZE sizeof(UCHAR)
    #define WmiMonitorBrightness_CurrentBrightness_ID 1

    // 
    ULONG Levels;
    #define WmiMonitorBrightness_Levels_SIZE sizeof(ULONG)
    #define WmiMonitorBrightness_Levels_ID 2

    // 
    UCHAR Level[1];
    #define WmiMonitorBrightness_Level_ID 3

} WmiMonitorBrightness, *PWmiMonitorBrightness;

// WmiMonitorBrightnessMethods - WmiMonitorBrightnessMethods
#define WmiMonitorBrightnessMethodsGuid \
    { 0x479b20b4,0x5559,0x46fe, { 0xbe,0x97,0x7d,0x22,0x21,0x54,0x42,0x1f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorBrightnessMethods_GUID, \
            0x479b20b4,0x5559,0x46fe,0xbe,0x97,0x7d,0x22,0x21,0x54,0x42,0x1f);
#endif

//
// Method id definitions for WmiMonitorBrightnessMethods
#define WmiSetBrightness     1
typedef struct _WmiSetBrightness_IN
{
    // 
    ULONG Timeout;
    #define WmiSetBrightness_IN_Timeout_SIZE sizeof(ULONG)
    #define WmiSetBrightness_IN_Timeout_ID 1

    // 
    UCHAR Brightness;
    #define WmiSetBrightness_IN_Brightness_SIZE sizeof(UCHAR)
    #define WmiSetBrightness_IN_Brightness_ID 2

} WmiSetBrightness_IN, *PWmiSetBrightness_IN;

#define WmiSetBrightness_IN_SIZE (FIELD_OFFSET(WmiSetBrightness_IN, Brightness) + WmiSetBrightness_IN_Brightness_SIZE)

#define WmiRevertToPolicyBrightness     2
#define WmiSetALSBrightnessState     3
typedef struct _WmiSetALSBrightnessState_IN
{
    // 
    BOOLEAN State;
    #define WmiSetALSBrightnessState_IN_State_SIZE sizeof(BOOLEAN)
    #define WmiSetALSBrightnessState_IN_State_ID 1

} WmiSetALSBrightnessState_IN, *PWmiSetALSBrightnessState_IN;

#define WmiSetALSBrightnessState_IN_SIZE (FIELD_OFFSET(WmiSetALSBrightnessState_IN, State) + WmiSetALSBrightnessState_IN_State_SIZE)

#define WmiSetALSBrightness     4
typedef struct _WmiSetALSBrightness_IN
{
    // 
    UCHAR Brightness;
    #define WmiSetALSBrightness_IN_Brightness_SIZE sizeof(UCHAR)
    #define WmiSetALSBrightness_IN_Brightness_ID 1

} WmiSetALSBrightness_IN, *PWmiSetALSBrightness_IN;

#define WmiSetALSBrightness_IN_SIZE (FIELD_OFFSET(WmiSetALSBrightness_IN, Brightness) + WmiSetALSBrightness_IN_Brightness_SIZE)


// WmiMonitorBrightnessEvent - WmiMonitorBrightnessEvent
// Monitor brightness change event
#define WmiMonitorBrightnessEventGuid \
    { 0x123c80d2,0x937f,0x4cfe, { 0x80,0xf4,0xc4,0x0d,0x59,0x6e,0x48,0xb7 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorBrightnessEvent_GUID, \
            0x123c80d2,0x937f,0x4cfe,0x80,0xf4,0xc4,0x0d,0x59,0x6e,0x48,0xb7);
#endif


typedef struct _WmiMonitorBrightnessEvent
{
    // 
    UCHAR Brightness;
    #define WmiMonitorBrightnessEvent_Brightness_SIZE sizeof(UCHAR)
    #define WmiMonitorBrightnessEvent_Brightness_ID 1

} WmiMonitorBrightnessEvent, *PWmiMonitorBrightnessEvent;

#define WmiMonitorBrightnessEvent_SIZE (FIELD_OFFSET(WmiMonitorBrightnessEvent, Brightness) + WmiMonitorBrightnessEvent_Brightness_SIZE)

// WmiMonitorRawEEdidV1Block - WmiMonitorRawEEdidV1Block
#define WmiMonitorRawEEdidV1BlockGuid \
    { 0xfaee1471,0x5149,0x4a68, { 0xac,0x2c,0xbf,0x96,0xec,0x09,0xf0,0x04 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorRawEEdidV1Block_GUID, \
            0xfaee1471,0x5149,0x4a68,0xac,0x2c,0xbf,0x96,0xec,0x09,0xf0,0x04);
#endif


typedef struct _WmiMonitorRawEEdidV1Block
{
    // 
    UCHAR Id;
    #define WmiMonitorRawEEdidV1Block_Id_SIZE sizeof(UCHAR)
    #define WmiMonitorRawEEdidV1Block_Id_ID 1

    // 
    UCHAR Type;
    #define WmiMonitorRawEEdidV1Block_Type_SIZE sizeof(UCHAR)
    #define WmiMonitorRawEEdidV1Block_Type_ID 2

    // 
    UCHAR Content[128];
    #define WmiMonitorRawEEdidV1Block_Content_SIZE sizeof(UCHAR[128])
    #define WmiMonitorRawEEdidV1Block_Content_ID 3

} WmiMonitorRawEEdidV1Block, *PWmiMonitorRawEEdidV1Block;

#define WmiMonitorRawEEdidV1Block_SIZE (FIELD_OFFSET(WmiMonitorRawEEdidV1Block, Content) + WmiMonitorRawEEdidV1Block_Content_SIZE)

// WmiMonitorDescriptorMethods - WmiMonitorDescriptorMethods
#define WmiMonitorDescriptorMethodsGuid \
    { 0x5341576e,0x75c4,0x4aeb, { 0xa8,0x2b,0x87,0x3c,0xd3,0xc6,0xb3,0x84 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorDescriptorMethods_GUID, \
            0x5341576e,0x75c4,0x4aeb,0xa8,0x2b,0x87,0x3c,0xd3,0xc6,0xb3,0x84);
#endif

//
// Method id definitions for WmiMonitorDescriptorMethods
#define WmiGetMonitorRawEEdidV1Block     1
typedef struct _WmiGetMonitorRawEEdidV1Block_IN
{
    // 
    UCHAR BlockId;
    #define WmiGetMonitorRawEEdidV1Block_IN_BlockId_SIZE sizeof(UCHAR)
    #define WmiGetMonitorRawEEdidV1Block_IN_BlockId_ID 1

} WmiGetMonitorRawEEdidV1Block_IN, *PWmiGetMonitorRawEEdidV1Block_IN;

#define WmiGetMonitorRawEEdidV1Block_IN_SIZE (FIELD_OFFSET(WmiGetMonitorRawEEdidV1Block_IN, BlockId) + WmiGetMonitorRawEEdidV1Block_IN_BlockId_SIZE)

typedef struct _WmiGetMonitorRawEEdidV1Block_OUT
{
    // 
    UCHAR BlockType;
    #define WmiGetMonitorRawEEdidV1Block_OUT_BlockType_SIZE sizeof(UCHAR)
    #define WmiGetMonitorRawEEdidV1Block_OUT_BlockType_ID 2

    // 
    UCHAR BlockContent[128];
    #define WmiGetMonitorRawEEdidV1Block_OUT_BlockContent_SIZE sizeof(UCHAR[128])
    #define WmiGetMonitorRawEEdidV1Block_OUT_BlockContent_ID 3

} WmiGetMonitorRawEEdidV1Block_OUT, *PWmiGetMonitorRawEEdidV1Block_OUT;

#define WmiGetMonitorRawEEdidV1Block_OUT_SIZE (FIELD_OFFSET(WmiGetMonitorRawEEdidV1Block_OUT, BlockContent) + WmiGetMonitorRawEEdidV1Block_OUT_BlockContent_SIZE)


// WmiMonitorID - WmiMonitorID
#define WmiMonitorIDGuid \
    { 0x671a8285,0x4edb,0x4cae, { 0x99,0xfe,0x69,0xa1,0x5c,0x48,0xc0,0xbc } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorID_GUID, \
            0x671a8285,0x4edb,0x4cae,0x99,0xfe,0x69,0xa1,0x5c,0x48,0xc0,0xbc);
#endif


typedef struct _WmiMonitorID
{
    // 
    USHORT ProductCodeID[16];
    #define WmiMonitorID_ProductCodeID_SIZE sizeof(USHORT[16])
    #define WmiMonitorID_ProductCodeID_ID 1

    // 
    USHORT SerialNumberID[16];
    #define WmiMonitorID_SerialNumberID_SIZE sizeof(USHORT[16])
    #define WmiMonitorID_SerialNumberID_ID 2

    // 
    USHORT ManufacturerName[16];
    #define WmiMonitorID_ManufacturerName_SIZE sizeof(USHORT[16])
    #define WmiMonitorID_ManufacturerName_ID 3

    // 
    UCHAR WeekOfManufacture;
    #define WmiMonitorID_WeekOfManufacture_SIZE sizeof(UCHAR)
    #define WmiMonitorID_WeekOfManufacture_ID 4

    // 
    USHORT YearOfManufacture;
    #define WmiMonitorID_YearOfManufacture_SIZE sizeof(USHORT)
    #define WmiMonitorID_YearOfManufacture_ID 5

    // 
    USHORT UserFriendlyNameLength;
    #define WmiMonitorID_UserFriendlyNameLength_SIZE sizeof(USHORT)
    #define WmiMonitorID_UserFriendlyNameLength_ID 6

    // 
    USHORT UserFriendlyName[1];
    #define WmiMonitorID_UserFriendlyName_ID 7

} WmiMonitorID, *PWmiMonitorID;

// WmiMonitorSupportedDisplayFeatures - WmiMonitorSupportedDisplayFeatures
#define WmiMonitorSupportedDisplayFeaturesGuid \
    { 0x9fa9c28b,0x5e5c,0x4035, { 0xa5,0xf8,0x67,0xd4,0x55,0x4f,0x8d,0x04 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorSupportedDisplayFeatures_GUID, \
            0x9fa9c28b,0x5e5c,0x4035,0xa5,0xf8,0x67,0xd4,0x55,0x4f,0x8d,0x04);
#endif


typedef struct _WmiMonitorSupportedDisplayFeatures
{
    // 
    BOOLEAN StandbySupported;
    #define WmiMonitorSupportedDisplayFeatures_StandbySupported_SIZE sizeof(BOOLEAN)
    #define WmiMonitorSupportedDisplayFeatures_StandbySupported_ID 1

    // 
    BOOLEAN SuspendSupported;
    #define WmiMonitorSupportedDisplayFeatures_SuspendSupported_SIZE sizeof(BOOLEAN)
    #define WmiMonitorSupportedDisplayFeatures_SuspendSupported_ID 2

    // 
    BOOLEAN ActiveOffSupported;
    #define WmiMonitorSupportedDisplayFeatures_ActiveOffSupported_SIZE sizeof(BOOLEAN)
    #define WmiMonitorSupportedDisplayFeatures_ActiveOffSupported_ID 3

    // 
    UCHAR DisplayType;
    #define WmiMonitorSupportedDisplayFeatures_DisplayType_SIZE sizeof(UCHAR)
    #define WmiMonitorSupportedDisplayFeatures_DisplayType_ID 4

    // 
    BOOLEAN sRGBSupported;
    #define WmiMonitorSupportedDisplayFeatures_sRGBSupported_SIZE sizeof(BOOLEAN)
    #define WmiMonitorSupportedDisplayFeatures_sRGBSupported_ID 5

    // 
    BOOLEAN HasPreferredTimingMode;
    #define WmiMonitorSupportedDisplayFeatures_HasPreferredTimingMode_SIZE sizeof(BOOLEAN)
    #define WmiMonitorSupportedDisplayFeatures_HasPreferredTimingMode_ID 6

    // 
    BOOLEAN GTFSupported;
    #define WmiMonitorSupportedDisplayFeatures_GTFSupported_SIZE sizeof(BOOLEAN)
    #define WmiMonitorSupportedDisplayFeatures_GTFSupported_ID 7

} WmiMonitorSupportedDisplayFeatures, *PWmiMonitorSupportedDisplayFeatures;

#define WmiMonitorSupportedDisplayFeatures_SIZE (FIELD_OFFSET(WmiMonitorSupportedDisplayFeatures, GTFSupported) + WmiMonitorSupportedDisplayFeatures_GTFSupported_SIZE)

// WmiMonitorBasicDisplayParams - WmiMonitorBasicDisplayParams
#define WmiMonitorBasicDisplayParamsGuid \
    { 0x9831b7e6,0x09ac,0x491f, { 0x8d,0x07,0x3c,0x3d,0x64,0x9d,0x82,0x40 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorBasicDisplayParams_GUID, \
            0x9831b7e6,0x09ac,0x491f,0x8d,0x07,0x3c,0x3d,0x64,0x9d,0x82,0x40);
#endif


typedef struct _WmiMonitorBasicDisplayParams
{
    // 
    UCHAR VideoInputType;
    #define WmiMonitorBasicDisplayParams_VideoInputType_SIZE sizeof(UCHAR)
    #define WmiMonitorBasicDisplayParams_VideoInputType_ID 1

    // 
    UCHAR MaxHorizontalImageSize;
    #define WmiMonitorBasicDisplayParams_MaxHorizontalImageSize_SIZE sizeof(UCHAR)
    #define WmiMonitorBasicDisplayParams_MaxHorizontalImageSize_ID 2

    // 
    UCHAR MaxVerticalImageSize;
    #define WmiMonitorBasicDisplayParams_MaxVerticalImageSize_SIZE sizeof(UCHAR)
    #define WmiMonitorBasicDisplayParams_MaxVerticalImageSize_ID 3

    // 
    UCHAR DisplayTransferCharacteristic;
    #define WmiMonitorBasicDisplayParams_DisplayTransferCharacteristic_SIZE sizeof(UCHAR)
    #define WmiMonitorBasicDisplayParams_DisplayTransferCharacteristic_ID 4

    // 
    WmiMonitorSupportedDisplayFeatures SupportedDisplayFeatures;
    #define WmiMonitorBasicDisplayParams_SupportedDisplayFeatures_SIZE sizeof(WmiMonitorSupportedDisplayFeatures)
    #define WmiMonitorBasicDisplayParams_SupportedDisplayFeatures_ID 5

} WmiMonitorBasicDisplayParams, *PWmiMonitorBasicDisplayParams;

#define WmiMonitorBasicDisplayParams_SIZE (FIELD_OFFSET(WmiMonitorBasicDisplayParams, SupportedDisplayFeatures) + WmiMonitorBasicDisplayParams_SupportedDisplayFeatures_SIZE)

// WmiMonitorConnectionParams - WmiMonitorConnectionParams
#define WmiMonitorConnectionParamsGuid \
    { 0x2e2d2463,0xb537,0x4da7, { 0x8e,0xee,0x51,0x30,0x6f,0x1f,0x48,0x2f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorConnectionParams_GUID, \
            0x2e2d2463,0xb537,0x4da7,0x8e,0xee,0x51,0x30,0x6f,0x1f,0x48,0x2f);
#endif


typedef struct _WmiMonitorConnectionParams
{
    // 
    ULONG VideoOutputTechnology;
    #define WmiMonitorConnectionParams_VideoOutputTechnology_SIZE sizeof(ULONG)
    #define WmiMonitorConnectionParams_VideoOutputTechnology_ID 1

} WmiMonitorConnectionParams, *PWmiMonitorConnectionParams;

#define WmiMonitorConnectionParams_SIZE (FIELD_OFFSET(WmiMonitorConnectionParams, VideoOutputTechnology) + WmiMonitorConnectionParams_VideoOutputTechnology_SIZE)

// WmiMonitorAnalogVideoInputParams - WmiMonitorAnalogVideoInputParams
#define WmiMonitorAnalogVideoInputParamsGuid \
    { 0xa56dbcf9,0xc4f0,0x44a8, { 0x9c,0x1b,0xbb,0x3b,0x3f,0x77,0x4b,0x4d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorAnalogVideoInputParams_GUID, \
            0xa56dbcf9,0xc4f0,0x44a8,0x9c,0x1b,0xbb,0x3b,0x3f,0x77,0x4b,0x4d);
#endif


typedef struct _WmiMonitorAnalogVideoInputParams
{
    // 
    UCHAR SignalLevelStandard;
    #define WmiMonitorAnalogVideoInputParams_SignalLevelStandard_SIZE sizeof(UCHAR)
    #define WmiMonitorAnalogVideoInputParams_SignalLevelStandard_ID 1

    // 
    UCHAR SetupExpected;
    #define WmiMonitorAnalogVideoInputParams_SetupExpected_SIZE sizeof(UCHAR)
    #define WmiMonitorAnalogVideoInputParams_SetupExpected_ID 2

    // 
    UCHAR SeparateSyncsSupported;
    #define WmiMonitorAnalogVideoInputParams_SeparateSyncsSupported_SIZE sizeof(UCHAR)
    #define WmiMonitorAnalogVideoInputParams_SeparateSyncsSupported_ID 3

    // 
    UCHAR CompositeSyncSupported;
    #define WmiMonitorAnalogVideoInputParams_CompositeSyncSupported_SIZE sizeof(UCHAR)
    #define WmiMonitorAnalogVideoInputParams_CompositeSyncSupported_ID 4

    // 
    UCHAR SyncOnGreenVideoSupported;
    #define WmiMonitorAnalogVideoInputParams_SyncOnGreenVideoSupported_SIZE sizeof(UCHAR)
    #define WmiMonitorAnalogVideoInputParams_SyncOnGreenVideoSupported_ID 5

    // 
    UCHAR SerrationOfVsyncRequired;
    #define WmiMonitorAnalogVideoInputParams_SerrationOfVsyncRequired_SIZE sizeof(UCHAR)
    #define WmiMonitorAnalogVideoInputParams_SerrationOfVsyncRequired_ID 6

} WmiMonitorAnalogVideoInputParams, *PWmiMonitorAnalogVideoInputParams;

#define WmiMonitorAnalogVideoInputParams_SIZE (FIELD_OFFSET(WmiMonitorAnalogVideoInputParams, SerrationOfVsyncRequired) + WmiMonitorAnalogVideoInputParams_SerrationOfVsyncRequired_SIZE)

// WmiMonitorDigitalVideoInputParams - WmiMonitorDigitalVideoInputParams
#define WmiMonitorDigitalVideoInputParamsGuid \
    { 0x51565945,0x498a,0x4a77, { 0xac,0xc6,0x15,0x1b,0xec,0xc8,0x05,0xca } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorDigitalVideoInputParams_GUID, \
            0x51565945,0x498a,0x4a77,0xac,0xc6,0x15,0x1b,0xec,0xc8,0x05,0xca);
#endif


typedef struct _WmiMonitorDigitalVideoInputParams
{
    // 
    BOOLEAN IsDFP1xCompatible;
    #define WmiMonitorDigitalVideoInputParams_IsDFP1xCompatible_SIZE sizeof(BOOLEAN)
    #define WmiMonitorDigitalVideoInputParams_IsDFP1xCompatible_ID 1

} WmiMonitorDigitalVideoInputParams, *PWmiMonitorDigitalVideoInputParams;

#define WmiMonitorDigitalVideoInputParams_SIZE (FIELD_OFFSET(WmiMonitorDigitalVideoInputParams, IsDFP1xCompatible) + WmiMonitorDigitalVideoInputParams_IsDFP1xCompatible_SIZE)

// WmiMonitorColorXYZinCIE - WmiMonitorColorXYZinCIE
#define WmiMonitorColorXYZinCIEGuid \
    { 0x01faf041,0x842c,0x4230, { 0xa3,0x1e,0x13,0x35,0x42,0x8c,0xd8,0xf0 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorColorXYZinCIE_GUID, \
            0x01faf041,0x842c,0x4230,0xa3,0x1e,0x13,0x35,0x42,0x8c,0xd8,0xf0);
#endif


typedef struct _WmiMonitorColorXYZinCIE
{
    // 
    USHORT X;
    #define WmiMonitorColorXYZinCIE_X_SIZE sizeof(USHORT)
    #define WmiMonitorColorXYZinCIE_X_ID 1

    // 
    USHORT Y;
    #define WmiMonitorColorXYZinCIE_Y_SIZE sizeof(USHORT)
    #define WmiMonitorColorXYZinCIE_Y_ID 2

} WmiMonitorColorXYZinCIE, *PWmiMonitorColorXYZinCIE;

#define WmiMonitorColorXYZinCIE_SIZE (FIELD_OFFSET(WmiMonitorColorXYZinCIE, Y) + WmiMonitorColorXYZinCIE_Y_SIZE)

// WmiMonitorColorCharacteristics - WmiMonitorColorCharacteristics
#define WmiMonitorColorCharacteristicsGuid \
    { 0xea324793,0x51bb,0x486a, { 0xaa,0x9d,0x0f,0x55,0x52,0x35,0x34,0x13 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorColorCharacteristics_GUID, \
            0xea324793,0x51bb,0x486a,0xaa,0x9d,0x0f,0x55,0x52,0x35,0x34,0x13);
#endif


typedef struct _WmiMonitorColorCharacteristics
{
    // 
    WmiMonitorColorXYZinCIE Red;
    #define WmiMonitorColorCharacteristics_Red_SIZE sizeof(WmiMonitorColorXYZinCIE)
    #define WmiMonitorColorCharacteristics_Red_ID 1

    // 
    WmiMonitorColorXYZinCIE Blue;
    #define WmiMonitorColorCharacteristics_Blue_SIZE sizeof(WmiMonitorColorXYZinCIE)
    #define WmiMonitorColorCharacteristics_Blue_ID 2

    // 
    WmiMonitorColorXYZinCIE Green;
    #define WmiMonitorColorCharacteristics_Green_SIZE sizeof(WmiMonitorColorXYZinCIE)
    #define WmiMonitorColorCharacteristics_Green_ID 3

    // 
    WmiMonitorColorXYZinCIE DefaultWhite;
    #define WmiMonitorColorCharacteristics_DefaultWhite_SIZE sizeof(WmiMonitorColorXYZinCIE)
    #define WmiMonitorColorCharacteristics_DefaultWhite_ID 4

} WmiMonitorColorCharacteristics, *PWmiMonitorColorCharacteristics;

#define WmiMonitorColorCharacteristics_SIZE (FIELD_OFFSET(WmiMonitorColorCharacteristics, DefaultWhite) + WmiMonitorColorCharacteristics_DefaultWhite_SIZE)

// VideoModeDescriptor - VideoModeDescriptor
#define VideoModeDescriptorGuid \
    { 0x4a97ed30,0xbfaa,0x491a, { 0x9d,0xfd,0xb4,0x3a,0xde,0xdb,0xf8,0xe3 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(VideoModeDescriptor_GUID, \
            0x4a97ed30,0xbfaa,0x491a,0x9d,0xfd,0xb4,0x3a,0xde,0xdb,0xf8,0xe3);
#endif


typedef struct _VideoModeDescriptor
{
    // 
    ULONG PixelClockRate;
    #define VideoModeDescriptor_PixelClockRate_SIZE sizeof(ULONG)
    #define VideoModeDescriptor_PixelClockRate_ID 1

    // 
    ULONG VerticalRefreshRateNumerator;
    #define VideoModeDescriptor_VerticalRefreshRateNumerator_SIZE sizeof(ULONG)
    #define VideoModeDescriptor_VerticalRefreshRateNumerator_ID 2

    // 
    ULONG VerticalRefreshRateDenominator;
    #define VideoModeDescriptor_VerticalRefreshRateDenominator_SIZE sizeof(ULONG)
    #define VideoModeDescriptor_VerticalRefreshRateDenominator_ID 3

    // 
    ULONG HorizontalRefreshRateNumerator;
    #define VideoModeDescriptor_HorizontalRefreshRateNumerator_SIZE sizeof(ULONG)
    #define VideoModeDescriptor_HorizontalRefreshRateNumerator_ID 4

    // 
    ULONG HorizontalRefreshRateDenominator;
    #define VideoModeDescriptor_HorizontalRefreshRateDenominator_SIZE sizeof(ULONG)
    #define VideoModeDescriptor_HorizontalRefreshRateDenominator_ID 5

    // 
    USHORT HorizontalActivePixels;
    #define VideoModeDescriptor_HorizontalActivePixels_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_HorizontalActivePixels_ID 6

    // 
    USHORT VerticalActivePixels;
    #define VideoModeDescriptor_VerticalActivePixels_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_VerticalActivePixels_ID 7

    // 
    USHORT HorizontalBlankingPixels;
    #define VideoModeDescriptor_HorizontalBlankingPixels_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_HorizontalBlankingPixels_ID 8

    // 
    USHORT VerticalBlankingPixels;
    #define VideoModeDescriptor_VerticalBlankingPixels_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_VerticalBlankingPixels_ID 9

    // 
    USHORT HorizontalSyncOffset;
    #define VideoModeDescriptor_HorizontalSyncOffset_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_HorizontalSyncOffset_ID 10

    // 
    USHORT VerticalSyncOffset;
    #define VideoModeDescriptor_VerticalSyncOffset_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_VerticalSyncOffset_ID 11

    // 
    USHORT HorizontalSyncPulseWidth;
    #define VideoModeDescriptor_HorizontalSyncPulseWidth_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_HorizontalSyncPulseWidth_ID 12

    // 
    USHORT VerticalSyncPulseWidth;
    #define VideoModeDescriptor_VerticalSyncPulseWidth_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_VerticalSyncPulseWidth_ID 13

    // 
    USHORT HorizontalImageSize;
    #define VideoModeDescriptor_HorizontalImageSize_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_HorizontalImageSize_ID 14

    // 
    USHORT VerticalImageSize;
    #define VideoModeDescriptor_VerticalImageSize_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_VerticalImageSize_ID 15

    // 
    USHORT HorizontalBorder;
    #define VideoModeDescriptor_HorizontalBorder_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_HorizontalBorder_ID 16

    // 
    USHORT VerticalBorder;
    #define VideoModeDescriptor_VerticalBorder_SIZE sizeof(USHORT)
    #define VideoModeDescriptor_VerticalBorder_ID 17

    // 
    BOOLEAN IsInterlaced;
    #define VideoModeDescriptor_IsInterlaced_SIZE sizeof(BOOLEAN)
    #define VideoModeDescriptor_IsInterlaced_ID 18

    // 
    UCHAR StereoModeType;
    #define VideoModeDescriptor_StereoModeType_SIZE sizeof(UCHAR)
    #define VideoModeDescriptor_StereoModeType_ID 19

    // 
    UCHAR SyncSignalType;
    #define VideoModeDescriptor_SyncSignalType_SIZE sizeof(UCHAR)
    #define VideoModeDescriptor_SyncSignalType_ID 20

    // 
    UCHAR IsSerrationRequired;
    #define VideoModeDescriptor_IsSerrationRequired_SIZE sizeof(UCHAR)
    #define VideoModeDescriptor_IsSerrationRequired_ID 21

    // 
    UCHAR IsSyncOnRGB;
    #define VideoModeDescriptor_IsSyncOnRGB_SIZE sizeof(UCHAR)
    #define VideoModeDescriptor_IsSyncOnRGB_ID 22

    // 
    UCHAR CompositePolarityType;
    #define VideoModeDescriptor_CompositePolarityType_SIZE sizeof(UCHAR)
    #define VideoModeDescriptor_CompositePolarityType_ID 23

    // 
    UCHAR VerticalPolarityType;
    #define VideoModeDescriptor_VerticalPolarityType_SIZE sizeof(UCHAR)
    #define VideoModeDescriptor_VerticalPolarityType_ID 24

    // 
    UCHAR HorizontalPolarityType;
    #define VideoModeDescriptor_HorizontalPolarityType_SIZE sizeof(UCHAR)
    #define VideoModeDescriptor_HorizontalPolarityType_ID 25

    // 
    UCHAR VideoStandardType;
    #define VideoModeDescriptor_VideoStandardType_SIZE sizeof(UCHAR)
    #define VideoModeDescriptor_VideoStandardType_ID 26

    // 
    UCHAR Origin;
    #define VideoModeDescriptor_Origin_SIZE sizeof(UCHAR)
    #define VideoModeDescriptor_Origin_ID 27

    // 
    UCHAR TimingType;
    #define VideoModeDescriptor_TimingType_SIZE sizeof(UCHAR)
    #define VideoModeDescriptor_TimingType_ID 28

} VideoModeDescriptor, *PVideoModeDescriptor;

#define VideoModeDescriptor_SIZE (FIELD_OFFSET(VideoModeDescriptor, TimingType) + VideoModeDescriptor_TimingType_SIZE)

// WmiMonitorListedSupportedSourceModes - WmiMonitorListedSupportedSourceModes
#define WmiMonitorListedSupportedSourceModesGuid \
    { 0x6dc76655,0x063c,0x4524, { 0xa8,0x62,0xb8,0x41,0x0c,0x26,0x28,0x1b } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorListedSupportedSourceModes_GUID, \
            0x6dc76655,0x063c,0x4524,0xa8,0x62,0xb8,0x41,0x0c,0x26,0x28,0x1b);
#endif


typedef struct _WmiMonitorListedSupportedSourceModes
{
    // 
    USHORT NumOfMonitorSourceModes;
    #define WmiMonitorListedSupportedSourceModes_NumOfMonitorSourceModes_SIZE sizeof(USHORT)
    #define WmiMonitorListedSupportedSourceModes_NumOfMonitorSourceModes_ID 1

    // 
    USHORT PreferredMonitorSourceModeIndex;
    #define WmiMonitorListedSupportedSourceModes_PreferredMonitorSourceModeIndex_SIZE sizeof(USHORT)
    #define WmiMonitorListedSupportedSourceModes_PreferredMonitorSourceModeIndex_ID 2

    // 
    VideoModeDescriptor MonitorSourceModes[1];
    #define WmiMonitorListedSupportedSourceModes_MonitorSourceModes_ID 3

} WmiMonitorListedSupportedSourceModes, *PWmiMonitorListedSupportedSourceModes;

// FrequencyRangeDescriptor - FrequencyRangeDescriptor
#define FrequencyRangeDescriptorGuid \
    { 0xf4546078,0xf3b2,0x417e, { 0x94,0xcd,0x47,0xea,0x30,0x6c,0x57,0x51 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(FrequencyRangeDescriptor_GUID, \
            0xf4546078,0xf3b2,0x417e,0x94,0xcd,0x47,0xea,0x30,0x6c,0x57,0x51);
#endif


typedef struct _FrequencyRangeDescriptor
{
    // 
    UCHAR Origin;
    #define FrequencyRangeDescriptor_Origin_SIZE sizeof(UCHAR)
    #define FrequencyRangeDescriptor_Origin_ID 1

    // 
    ULONG MinVSyncNumerator;
    #define FrequencyRangeDescriptor_MinVSyncNumerator_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_MinVSyncNumerator_ID 2

    // 
    ULONG MinVSyncDenominator;
    #define FrequencyRangeDescriptor_MinVSyncDenominator_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_MinVSyncDenominator_ID 3

    // 
    ULONG MaxVSyncNumerator;
    #define FrequencyRangeDescriptor_MaxVSyncNumerator_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_MaxVSyncNumerator_ID 4

    // 
    ULONG MaxVSyncDenominator;
    #define FrequencyRangeDescriptor_MaxVSyncDenominator_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_MaxVSyncDenominator_ID 5

    // 
    ULONG MinHSyncNumerator;
    #define FrequencyRangeDescriptor_MinHSyncNumerator_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_MinHSyncNumerator_ID 6

    // 
    ULONG MinHSyncDenominator;
    #define FrequencyRangeDescriptor_MinHSyncDenominator_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_MinHSyncDenominator_ID 7

    // 
    ULONG MaxHSyncNumerator;
    #define FrequencyRangeDescriptor_MaxHSyncNumerator_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_MaxHSyncNumerator_ID 8

    // 
    ULONG MaxHSyncDenominator;
    #define FrequencyRangeDescriptor_MaxHSyncDenominator_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_MaxHSyncDenominator_ID 9

    // 
    ULONG ConstraintType;
    #define FrequencyRangeDescriptor_ConstraintType_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_ConstraintType_ID 10

    // 
    ULONG ActiveWidth;
    #define FrequencyRangeDescriptor_ActiveWidth_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_ActiveWidth_ID 11

    // 
    ULONG ActiveHeight;
    #define FrequencyRangeDescriptor_ActiveHeight_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_ActiveHeight_ID 12

    // 
    ULONG MaxPixelRate;
    #define FrequencyRangeDescriptor_MaxPixelRate_SIZE sizeof(ULONG)
    #define FrequencyRangeDescriptor_MaxPixelRate_ID 13

} FrequencyRangeDescriptor, *PFrequencyRangeDescriptor;

#define FrequencyRangeDescriptor_SIZE (FIELD_OFFSET(FrequencyRangeDescriptor, MaxPixelRate) + FrequencyRangeDescriptor_MaxPixelRate_SIZE)

// WmiMonitorListedFrequencyRanges - WmiMonitorListedFrequencyRanges
#define WmiMonitorListedFrequencyRangesGuid \
    { 0xe86e9525,0x65b6,0x4b85, { 0x95,0xc5,0x00,0xbe,0xac,0xc9,0x75,0xed } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(WmiMonitorListedFrequencyRanges_GUID, \
            0xe86e9525,0x65b6,0x4b85,0x95,0xc5,0x00,0xbe,0xac,0xc9,0x75,0xed);
#endif


typedef struct _WmiMonitorListedFrequencyRanges
{
    // 
    USHORT NumOfMonitorFreqRanges;
    #define WmiMonitorListedFrequencyRanges_NumOfMonitorFreqRanges_SIZE sizeof(USHORT)
    #define WmiMonitorListedFrequencyRanges_NumOfMonitorFreqRanges_ID 1

    // 
    FrequencyRangeDescriptor MonitorFreqRanges[1];
    #define WmiMonitorListedFrequencyRanges_MonitorFreqRanges_ID 2

} WmiMonitorListedFrequencyRanges, *PWmiMonitorListedFrequencyRanges;

// KernelPerfState - KernelPerfState
#define KernelPerfStateGuid \
    { 0x8c7980e1,0xf62b,0x419e, { 0xaa,0x82,0x27,0x6c,0x8d,0x06,0x4a,0x1f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(KernelPerfState_GUID, \
            0x8c7980e1,0xf62b,0x419e,0xaa,0x82,0x27,0x6c,0x8d,0x06,0x4a,0x1f);
#endif


typedef struct _KernelPerfState
{
    // 
    ULONG Frequency;
    #define KernelPerfState_Frequency_SIZE sizeof(ULONG)
    #define KernelPerfState_Frequency_ID 1

    // 
    ULONG Power;
    #define KernelPerfState_Power_SIZE sizeof(ULONG)
    #define KernelPerfState_Power_ID 2

    // 
    UCHAR PercentFrequency;
    #define KernelPerfState_PercentFrequency_SIZE sizeof(UCHAR)
    #define KernelPerfState_PercentFrequency_ID 3

    // 
    UCHAR IncreaseLevel;
    #define KernelPerfState_IncreaseLevel_SIZE sizeof(UCHAR)
    #define KernelPerfState_IncreaseLevel_ID 4

    // 
    UCHAR DecreaseLevel;
    #define KernelPerfState_DecreaseLevel_SIZE sizeof(UCHAR)
    #define KernelPerfState_DecreaseLevel_ID 5

    // 
    UCHAR Type;
    #define KernelPerfState_Type_SIZE sizeof(UCHAR)
    #define KernelPerfState_Type_ID 6

    // 
    ULONG IncreaseTime;
    #define KernelPerfState_IncreaseTime_SIZE sizeof(ULONG)
    #define KernelPerfState_IncreaseTime_ID 7

    // 
    ULONG DecreaseTime;
    #define KernelPerfState_DecreaseTime_SIZE sizeof(ULONG)
    #define KernelPerfState_DecreaseTime_ID 8

    // 
    ULONGLONG Control;
    #define KernelPerfState_Control_SIZE sizeof(ULONGLONG)
    #define KernelPerfState_Control_ID 9

    // 
    ULONGLONG Status;
    #define KernelPerfState_Status_SIZE sizeof(ULONGLONG)
    #define KernelPerfState_Status_ID 10

    // 
    ULONG HitCount;
    #define KernelPerfState_HitCount_SIZE sizeof(ULONG)
    #define KernelPerfState_HitCount_ID 11

    // 
    ULONG Reserved1;
    #define KernelPerfState_Reserved1_SIZE sizeof(ULONG)
    #define KernelPerfState_Reserved1_ID 12

    // 
    ULONGLONG Reserved2;
    #define KernelPerfState_Reserved2_SIZE sizeof(ULONGLONG)
    #define KernelPerfState_Reserved2_ID 13

    // 
    ULONGLONG Reserved3;
    #define KernelPerfState_Reserved3_SIZE sizeof(ULONGLONG)
    #define KernelPerfState_Reserved3_ID 14

} KernelPerfState, *PKernelPerfState;

#define KernelPerfState_SIZE (FIELD_OFFSET(KernelPerfState, Reserved3) + KernelPerfState_Reserved3_SIZE)

// KernelPerfStates - KernelPerfStates
#define KernelPerfStatesGuid \
    { 0x5708cc20,0x7d40,0x4bf4, { 0xb4,0xaa,0x2b,0x01,0x33,0x8d,0x01,0x26 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(KernelPerfStates_GUID, \
            0x5708cc20,0x7d40,0x4bf4,0xb4,0xaa,0x2b,0x01,0x33,0x8d,0x01,0x26);
#endif


typedef struct _KernelPerfStates
{
    // 
    ULONG Count;
    #define KernelPerfStates_Count_SIZE sizeof(ULONG)
    #define KernelPerfStates_Count_ID 1

    // 
    ULONG MaxFrequency;
    #define KernelPerfStates_MaxFrequency_SIZE sizeof(ULONG)
    #define KernelPerfStates_MaxFrequency_ID 2

    // 
    ULONG CurrentState;
    #define KernelPerfStates_CurrentState_SIZE sizeof(ULONG)
    #define KernelPerfStates_CurrentState_ID 3

    // 
    ULONG MaxPerfState;
    #define KernelPerfStates_MaxPerfState_SIZE sizeof(ULONG)
    #define KernelPerfStates_MaxPerfState_ID 4

    // 
    ULONG MinPerfState;
    #define KernelPerfStates_MinPerfState_SIZE sizeof(ULONG)
    #define KernelPerfStates_MinPerfState_ID 5

    // 
    ULONG LowestPerfState;
    #define KernelPerfStates_LowestPerfState_SIZE sizeof(ULONG)
    #define KernelPerfStates_LowestPerfState_ID 6

    // 
    ULONG ThermalConstraint;
    #define KernelPerfStates_ThermalConstraint_SIZE sizeof(ULONG)
    #define KernelPerfStates_ThermalConstraint_ID 7

    // 
    UCHAR BusyAdjThreshold;
    #define KernelPerfStates_BusyAdjThreshold_SIZE sizeof(UCHAR)
    #define KernelPerfStates_BusyAdjThreshold_ID 8

    // 
    UCHAR PolicyType;
    #define KernelPerfStates_PolicyType_SIZE sizeof(UCHAR)
    #define KernelPerfStates_PolicyType_ID 9

    // 
    UCHAR Type;
    #define KernelPerfStates_Type_SIZE sizeof(UCHAR)
    #define KernelPerfStates_Type_ID 10

    // 
    UCHAR Reserved;
    #define KernelPerfStates_Reserved_SIZE sizeof(UCHAR)
    #define KernelPerfStates_Reserved_ID 11

    // 
    ULONG TimerInterval;
    #define KernelPerfStates_TimerInterval_SIZE sizeof(ULONG)
    #define KernelPerfStates_TimerInterval_ID 12

    // 
    ULONGLONG TargetProcessors;
    #define KernelPerfStates_TargetProcessors_SIZE sizeof(ULONGLONG)
    #define KernelPerfStates_TargetProcessors_ID 13

    // 
    ULONG PStateHandler;
    #define KernelPerfStates_PStateHandler_SIZE sizeof(ULONG)
    #define KernelPerfStates_PStateHandler_ID 14

    // 
    ULONG PStateContext;
    #define KernelPerfStates_PStateContext_SIZE sizeof(ULONG)
    #define KernelPerfStates_PStateContext_ID 15

    // 
    ULONG TStateHandler;
    #define KernelPerfStates_TStateHandler_SIZE sizeof(ULONG)
    #define KernelPerfStates_TStateHandler_ID 16

    // 
    ULONG TStateContext;
    #define KernelPerfStates_TStateContext_SIZE sizeof(ULONG)
    #define KernelPerfStates_TStateContext_ID 17

    // 
    ULONG FeedbackHandler;
    #define KernelPerfStates_FeedbackHandler_SIZE sizeof(ULONG)
    #define KernelPerfStates_FeedbackHandler_ID 18

    // 
    ULONG Reserved1;
    #define KernelPerfStates_Reserved1_SIZE sizeof(ULONG)
    #define KernelPerfStates_Reserved1_ID 19

    // 
    ULONGLONG Reserved2;
    #define KernelPerfStates_Reserved2_SIZE sizeof(ULONGLONG)
    #define KernelPerfStates_Reserved2_ID 20

    // 
    KernelPerfState State[1];
    #define KernelPerfStates_State_ID 21

} KernelPerfStates, *PKernelPerfStates;

// KernelIdleState - KernelIdleState
#define KernelIdleStateGuid \
    { 0x46bdcf4a,0xe076,0x4550, { 0x82,0xb2,0x9f,0x32,0xed,0xed,0x3e,0x7f } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(KernelIdleState_GUID, \
            0x46bdcf4a,0xe076,0x4550,0x82,0xb2,0x9f,0x32,0xed,0xed,0x3e,0x7f);
#endif


typedef struct _KernelIdleState
{
    // 
    ULONG Latency;
    #define KernelIdleState_Latency_SIZE sizeof(ULONG)
    #define KernelIdleState_Latency_ID 1

    // 
    ULONG Power;
    #define KernelIdleState_Power_SIZE sizeof(ULONG)
    #define KernelIdleState_Power_ID 2

    // 
    ULONG TimeCheck;
    #define KernelIdleState_TimeCheck_SIZE sizeof(ULONG)
    #define KernelIdleState_TimeCheck_ID 3

    // 
    UCHAR PromotePercent;
    #define KernelIdleState_PromotePercent_SIZE sizeof(UCHAR)
    #define KernelIdleState_PromotePercent_ID 4

    // 
    UCHAR DemotePercent;
    #define KernelIdleState_DemotePercent_SIZE sizeof(UCHAR)
    #define KernelIdleState_DemotePercent_ID 5

    // 
    UCHAR StateType;
    #define KernelIdleState_StateType_SIZE sizeof(UCHAR)
    #define KernelIdleState_StateType_ID 6

    // 
    UCHAR Reserved;
    #define KernelIdleState_Reserved_SIZE sizeof(UCHAR)
    #define KernelIdleState_Reserved_ID 7

    // 
    ULONG StateFlags;
    #define KernelIdleState_StateFlags_SIZE sizeof(ULONG)
    #define KernelIdleState_StateFlags_ID 8

    // 
    ULONG Context;
    #define KernelIdleState_Context_SIZE sizeof(ULONG)
    #define KernelIdleState_Context_ID 9

    // 
    ULONG IdleHandler;
    #define KernelIdleState_IdleHandler_SIZE sizeof(ULONG)
    #define KernelIdleState_IdleHandler_ID 10

    // 
    ULONG Reserved1;
    #define KernelIdleState_Reserved1_SIZE sizeof(ULONG)
    #define KernelIdleState_Reserved1_ID 11

} KernelIdleState, *PKernelIdleState;

#define KernelIdleState_SIZE (FIELD_OFFSET(KernelIdleState, Reserved1) + KernelIdleState_Reserved1_SIZE)

// KernelIdleStates - KernelIdleStates
#define KernelIdleStatesGuid \
    { 0xba138e10,0xe250,0x4ad7, { 0x86,0x16,0xcf,0x1a,0x7a,0xd4,0x10,0xe7 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(KernelIdleStates_GUID, \
            0xba138e10,0xe250,0x4ad7,0x86,0x16,0xcf,0x1a,0x7a,0xd4,0x10,0xe7);
#endif


typedef struct _KernelIdleStates
{
    // 
    ULONG Type;
    #define KernelIdleStates_Type_SIZE sizeof(ULONG)
    #define KernelIdleStates_Type_ID 1

    // 
    ULONG Count;
    #define KernelIdleStates_Count_SIZE sizeof(ULONG)
    #define KernelIdleStates_Count_ID 2

    // 
    ULONG TargetState;
    #define KernelIdleStates_TargetState_SIZE sizeof(ULONG)
    #define KernelIdleStates_TargetState_ID 3

    // 
    ULONG OldState;
    #define KernelIdleStates_OldState_SIZE sizeof(ULONG)
    #define KernelIdleStates_OldState_ID 4

    // 
    ULONGLONG TargetProcessors;
    #define KernelIdleStates_TargetProcessors_SIZE sizeof(ULONGLONG)
    #define KernelIdleStates_TargetProcessors_ID 5

    // 
    KernelIdleState State[1];
    #define KernelIdleStates_State_ID 6

} KernelIdleStates, *PKernelIdleStates;

// KernelPerfStateChange - KernelPerfStateChange
// Kernel Perf State Transition Event
#define KernelPerfStateChangeGuid \
    { 0xa5b32ddd,0x7f39,0x4abc, { 0xb8,0x92,0x90,0x0e,0x43,0xb5,0x9e,0xbb } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(KernelPerfStateChange_GUID, \
            0xa5b32ddd,0x7f39,0x4abc,0xb8,0x92,0x90,0x0e,0x43,0xb5,0x9e,0xbb);
#endif


typedef struct _KernelPerfStateChange
{
    // 
    ULONG State;
    #define KernelPerfStateChange_State_SIZE sizeof(ULONG)
    #define KernelPerfStateChange_State_ID 1

    // 
    ULONG Status;
    #define KernelPerfStateChange_Status_SIZE sizeof(ULONG)
    #define KernelPerfStateChange_Status_ID 2

    // 
    ULONG Latency;
    #define KernelPerfStateChange_Latency_SIZE sizeof(ULONG)
    #define KernelPerfStateChange_Latency_ID 3

    // 
    ULONG Speed;
    #define KernelPerfStateChange_Speed_SIZE sizeof(ULONG)
    #define KernelPerfStateChange_Speed_ID 4

    // 
    ULONG Processor;
    #define KernelPerfStateChange_Processor_SIZE sizeof(ULONG)
    #define KernelPerfStateChange_Processor_ID 5

} KernelPerfStateChange, *PKernelPerfStateChange;

#define KernelPerfStateChange_SIZE (FIELD_OFFSET(KernelPerfStateChange, Processor) + KernelPerfStateChange_Processor_SIZE)

// KernelPerfStateDomainChange - KernelPerfStateDomainChange
// Kernel Perf State Domain Transition Event
#define KernelPerfStateDomainChangeGuid \
    { 0x995e6b7f,0xd653,0x497a, { 0xb9,0x78,0x36,0xa3,0x0c,0x29,0xbf,0x01 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(KernelPerfStateDomainChange_GUID, \
            0x995e6b7f,0xd653,0x497a,0xb9,0x78,0x36,0xa3,0x0c,0x29,0xbf,0x01);
#endif


typedef struct _KernelPerfStateDomainChange
{
    // 
    ULONG State;
    #define KernelPerfStateDomainChange_State_SIZE sizeof(ULONG)
    #define KernelPerfStateDomainChange_State_ID 1

    // 
    ULONG Latency;
    #define KernelPerfStateDomainChange_Latency_SIZE sizeof(ULONG)
    #define KernelPerfStateDomainChange_Latency_ID 2

    // 
    ULONG Speed;
    #define KernelPerfStateDomainChange_Speed_SIZE sizeof(ULONG)
    #define KernelPerfStateDomainChange_Speed_ID 3

    // 
    ULONGLONG Processors;
    #define KernelPerfStateDomainChange_Processors_SIZE sizeof(ULONGLONG)
    #define KernelPerfStateDomainChange_Processors_ID 4

} KernelPerfStateDomainChange, *PKernelPerfStateDomainChange;

#define KernelPerfStateDomainChange_SIZE (FIELD_OFFSET(KernelPerfStateDomainChange, Processors) + KernelPerfStateDomainChange_Processors_SIZE)

// KernelIdleStateChange - KernelIdleStateChange
// Kernel Idle State Change Event
#define KernelIdleStateChangeGuid \
    { 0x4838fe4f,0xf71c,0x4e51, { 0x9e,0xcc,0x84,0x30,0xa7,0xac,0x4c,0x6c } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(KernelIdleStateChange_GUID, \
            0x4838fe4f,0xf71c,0x4e51,0x9e,0xcc,0x84,0x30,0xa7,0xac,0x4c,0x6c);
#endif


typedef struct _KernelIdleStateChange
{
    // 
    ULONG NewState;
    #define KernelIdleStateChange_NewState_SIZE sizeof(ULONG)
    #define KernelIdleStateChange_NewState_ID 1

    // 
    ULONG OldState;
    #define KernelIdleStateChange_OldState_SIZE sizeof(ULONG)
    #define KernelIdleStateChange_OldState_ID 2

    // 
    ULONGLONG Processors;
    #define KernelIdleStateChange_Processors_SIZE sizeof(ULONGLONG)
    #define KernelIdleStateChange_Processors_ID 3

} KernelIdleStateChange, *PKernelIdleStateChange;

#define KernelIdleStateChange_SIZE (FIELD_OFFSET(KernelIdleStateChange, Processors) + KernelIdleStateChange_Processors_SIZE)

// KernelThermalConstraintChange - KernelThermalConstraintChange
// Kernel Thermal Event
#define KernelThermalConstraintChangeGuid \
    { 0xa852c2c8,0x1a4c,0x423b, { 0x8c,0x2c,0xf3,0x0d,0x82,0x93,0x1a,0x88 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(KernelThermalConstraintChange_GUID, \
            0xa852c2c8,0x1a4c,0x423b,0x8c,0x2c,0xf3,0x0d,0x82,0x93,0x1a,0x88);
#endif


typedef struct _KernelThermalConstraintChange
{
    // 
    ULONG ThermalConstraint;
    #define KernelThermalConstraintChange_ThermalConstraint_SIZE sizeof(ULONG)
    #define KernelThermalConstraintChange_ThermalConstraint_ID 1

    // 
    ULONGLONG Processors;
    #define KernelThermalConstraintChange_Processors_SIZE sizeof(ULONGLONG)
    #define KernelThermalConstraintChange_Processors_ID 2

} KernelThermalConstraintChange, *PKernelThermalConstraintChange;

#define KernelThermalConstraintChange_SIZE (FIELD_OFFSET(KernelThermalConstraintChange, Processors) + KernelThermalConstraintChange_Processors_SIZE)

// IdleStateAccounting - IdleStateAccounting
#define IdleStateAccountingGuid \
    { 0x5280028a,0xc24f,0x43ec, { 0xb2,0x7d,0xa9,0x60,0xa7,0x0e,0x31,0x9a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(IdleStateAccounting_GUID, \
            0x5280028a,0xc24f,0x43ec,0xb2,0x7d,0xa9,0x60,0xa7,0x0e,0x31,0x9a);
#endif


typedef struct _IdleStateAccounting
{
    // 
    ULONG IdleTransitions;
    #define IdleStateAccounting_IdleTransitions_SIZE sizeof(ULONG)
    #define IdleStateAccounting_IdleTransitions_ID 1

    // 
    ULONG FailedTransitions;
    #define IdleStateAccounting_FailedTransitions_SIZE sizeof(ULONG)
    #define IdleStateAccounting_FailedTransitions_ID 2

    // 
    ULONG InvalidBucketIndex;
    #define IdleStateAccounting_InvalidBucketIndex_SIZE sizeof(ULONG)
    #define IdleStateAccounting_InvalidBucketIndex_ID 3

    // 
    ULONGLONG TotalTime;
    #define IdleStateAccounting_TotalTime_SIZE sizeof(ULONGLONG)
    #define IdleStateAccounting_TotalTime_ID 4

    // 
    ULONG IdleTimeBuckets[6];
    #define IdleStateAccounting_IdleTimeBuckets_SIZE sizeof(ULONG[6])
    #define IdleStateAccounting_IdleTimeBuckets_ID 5

} IdleStateAccounting, *PIdleStateAccounting;

#define IdleStateAccounting_SIZE (FIELD_OFFSET(IdleStateAccounting, IdleTimeBuckets) + IdleStateAccounting_IdleTimeBuckets_SIZE)

// IdleAccounting - IdleAccounting
#define IdleAccountingGuid \
    { 0xe2a26f78,0xae07,0x4ee0, { 0xa3,0x0f,0xce,0x35,0x4f,0x5a,0x94,0xcd } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(IdleAccounting_GUID, \
            0xe2a26f78,0xae07,0x4ee0,0xa3,0x0f,0xce,0x35,0x4f,0x5a,0x94,0xcd);
#endif


typedef struct _IdleAccounting
{
    // 
    ULONG StateCount;
    #define IdleAccounting_StateCount_SIZE sizeof(ULONG)
    #define IdleAccounting_StateCount_ID 1

    // 
    ULONG TotalTransitions;
    #define IdleAccounting_TotalTransitions_SIZE sizeof(ULONG)
    #define IdleAccounting_TotalTransitions_ID 2

    // 
    ULONG ResetCount;
    #define IdleAccounting_ResetCount_SIZE sizeof(ULONG)
    #define IdleAccounting_ResetCount_ID 3

    // 
    ULONGLONG StartTime;
    #define IdleAccounting_StartTime_SIZE sizeof(ULONGLONG)
    #define IdleAccounting_StartTime_ID 4

    // 
    IdleStateAccounting State[1];
    #define IdleAccounting_State_ID 5

} IdleAccounting, *PIdleAccounting;

// IdleStateBucketEx - IdleStateBucketEx
#define IdleStateBucketExGuid \
    { 0xe53e0a7d,0x36f0,0x4a77, { 0x87,0x9e,0x9c,0x6b,0x5e,0x4a,0x85,0x54 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(IdleStateBucketEx_GUID, \
            0xe53e0a7d,0x36f0,0x4a77,0x87,0x9e,0x9c,0x6b,0x5e,0x4a,0x85,0x54);
#endif


typedef struct _IdleStateBucketEx
{
    // 
    ULONGLONG TotalTimeUs;
    #define IdleStateBucketEx_TotalTimeUs_SIZE sizeof(ULONGLONG)
    #define IdleStateBucketEx_TotalTimeUs_ID 1

    // 
    ULONG MinTimeUs;
    #define IdleStateBucketEx_MinTimeUs_SIZE sizeof(ULONG)
    #define IdleStateBucketEx_MinTimeUs_ID 2

    // 
    ULONG MaxTimeUs;
    #define IdleStateBucketEx_MaxTimeUs_SIZE sizeof(ULONG)
    #define IdleStateBucketEx_MaxTimeUs_ID 3

    // 
    ULONG Count;
    #define IdleStateBucketEx_Count_SIZE sizeof(ULONG)
    #define IdleStateBucketEx_Count_ID 4

} IdleStateBucketEx, *PIdleStateBucketEx;

#define IdleStateBucketEx_SIZE (FIELD_OFFSET(IdleStateBucketEx, Count) + IdleStateBucketEx_Count_SIZE)

// IdleStateAccountingEx - IdleStateAccountingEx
#define IdleStateAccountingExGuid \
    { 0x3e0d7b2c,0x401b,0x480f, { 0x83,0x03,0xd0,0xc2,0x0e,0xa1,0xa7,0xd8 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(IdleStateAccountingEx_GUID, \
            0x3e0d7b2c,0x401b,0x480f,0x83,0x03,0xd0,0xc2,0x0e,0xa1,0xa7,0xd8);
#endif


typedef struct _IdleStateAccountingEx
{
    // 
    ULONGLONG TotalTime;
    #define IdleStateAccountingEx_TotalTime_SIZE sizeof(ULONGLONG)
    #define IdleStateAccountingEx_TotalTime_ID 1

    // 
    ULONG IdleTransitions;
    #define IdleStateAccountingEx_IdleTransitions_SIZE sizeof(ULONG)
    #define IdleStateAccountingEx_IdleTransitions_ID 2

    // 
    ULONG FailedTransitions;
    #define IdleStateAccountingEx_FailedTransitions_SIZE sizeof(ULONG)
    #define IdleStateAccountingEx_FailedTransitions_ID 3

    // 
    ULONG InvalidBucketIndex;
    #define IdleStateAccountingEx_InvalidBucketIndex_SIZE sizeof(ULONG)
    #define IdleStateAccountingEx_InvalidBucketIndex_ID 4

    // 
    ULONG MinTimeUs;
    #define IdleStateAccountingEx_MinTimeUs_SIZE sizeof(ULONG)
    #define IdleStateAccountingEx_MinTimeUs_ID 5

    // 
    ULONG MaxTimeUs;
    #define IdleStateAccountingEx_MaxTimeUs_SIZE sizeof(ULONG)
    #define IdleStateAccountingEx_MaxTimeUs_ID 6

    // 
    IdleStateBucketEx IdleTimeBuckets[16];
    #define IdleStateAccountingEx_IdleTimeBuckets_SIZE sizeof(IdleStateBucketEx[16])
    #define IdleStateAccountingEx_IdleTimeBuckets_ID 7

} IdleStateAccountingEx, *PIdleStateAccountingEx;

#define IdleStateAccountingEx_SIZE (FIELD_OFFSET(IdleStateAccountingEx, IdleTimeBuckets) + IdleStateAccountingEx_IdleTimeBuckets_SIZE)

// IdleAccountingEx - IdleAccountingEx
#define IdleAccountingExGuid \
    { 0xd67abd39,0x81f8,0x4a5e, { 0x81,0x52,0x72,0xe3,0x1e,0xc9,0x12,0xee } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(IdleAccountingEx_GUID, \
            0xd67abd39,0x81f8,0x4a5e,0x81,0x52,0x72,0xe3,0x1e,0xc9,0x12,0xee);
#endif


typedef struct _IdleAccountingEx
{
    // 
    ULONG StateCount;
    #define IdleAccountingEx_StateCount_SIZE sizeof(ULONG)
    #define IdleAccountingEx_StateCount_ID 1

    // 
    ULONG TotalTransitions;
    #define IdleAccountingEx_TotalTransitions_SIZE sizeof(ULONG)
    #define IdleAccountingEx_TotalTransitions_ID 2

    // 
    ULONG ResetCount;
    #define IdleAccountingEx_ResetCount_SIZE sizeof(ULONG)
    #define IdleAccountingEx_ResetCount_ID 3

    // 
    ULONGLONG StartTime;
    #define IdleAccountingEx_StartTime_SIZE sizeof(ULONGLONG)
    #define IdleAccountingEx_StartTime_ID 4

    // 
    IdleStateAccountingEx State[1];
    #define IdleAccountingEx_State_ID 5

} IdleAccountingEx, *PIdleAccountingEx;

// KernelThermalPolicyChange - KernelThermalPolicyChange
// Kernel Thermal Policy Event
#define KernelThermalPolicyChangeGuid \
    { 0xaca5a8f7,0x96ca,0x4397, { 0xba,0xde,0x43,0xbe,0x2f,0x57,0x7d,0x51 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(KernelThermalPolicyChange_GUID, \
            0xaca5a8f7,0x96ca,0x4397,0xba,0xde,0x43,0xbe,0x2f,0x57,0x7d,0x51);
#endif


typedef struct _KernelThermalPolicyChange
{
    // 
    UCHAR CoolingMode;
    #define KernelThermalPolicyChange_CoolingMode_SIZE sizeof(UCHAR)
    #define KernelThermalPolicyChange_CoolingMode_ID 1

    // 
    ULONGLONG Processors;
    #define KernelThermalPolicyChange_Processors_SIZE sizeof(ULONGLONG)
    #define KernelThermalPolicyChange_Processors_ID 2

} KernelThermalPolicyChange, *PKernelThermalPolicyChange;

#define KernelThermalPolicyChange_SIZE (FIELD_OFFSET(KernelThermalPolicyChange, Processors) + KernelThermalPolicyChange_Processors_SIZE)

// ProcessorPerformance - ProcessorPerformance
#define ProcessorPerformanceGuid \
    { 0x7fd18652,0x0cfe,0x40d2, { 0xb0,0xa1,0x0b,0x06,0x6a,0x87,0x75,0x9e } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ProcessorPerformance_GUID, \
            0x7fd18652,0x0cfe,0x40d2,0xb0,0xa1,0x0b,0x06,0x6a,0x87,0x75,0x9e);
#endif


typedef struct _ProcessorPerformance
{
    // 
    ULONG frequency;
    #define ProcessorPerformance_frequency_SIZE sizeof(ULONG)
    #define ProcessorPerformance_frequency_ID 1

    // 
    ULONG power;
    #define ProcessorPerformance_power_SIZE sizeof(ULONG)
    #define ProcessorPerformance_power_ID 2

    // 
    ULONG percentage;
    #define ProcessorPerformance_percentage_SIZE sizeof(ULONG)
    #define ProcessorPerformance_percentage_ID 3

} ProcessorPerformance, *PProcessorPerformance;

#define ProcessorPerformance_SIZE (FIELD_OFFSET(ProcessorPerformance, percentage) + ProcessorPerformance_percentage_SIZE)

#endif
