/*++

Copyright (c) Microsoft Corporation

Module Name:

    Tdh.h

Abstract:

    ETW Event payload parsing API && ETW trace providers browsing API.


--*/

#ifndef __TDH_H__
#define __TDH_H__
#include <winapifamily.h>

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#ifdef __cplusplus
extern "C" {
#endif

#include <wmistr.h>
#include <evntrace.h>
#include <evntcons.h>

#pragma warning(push)
#pragma warning (disable:4201)  // nameless struct/union.
#pragma warning (disable:4214)  // bit field types other than int

typedef _Return_type_success_(return == ERROR_SUCCESS) ULONG TDHSTATUS;
#define TDHAPI  TDHSTATUS __stdcall

typedef HANDLE TDH_HANDLE, *PTDH_HANDLE;

typedef struct _EVENT_MAP_ENTRY {
    ULONG OutputOffset;
    union {
        ULONG Value;        // For ULONG value (valuemap and bitmap).
        ULONG InputOffset;  // For String value (patternmap or valuemap in WBEM).
    };
} EVENT_MAP_ENTRY;
typedef EVENT_MAP_ENTRY *PEVENT_MAP_ENTRY;

typedef enum _MAP_FLAGS {
    EVENTMAP_INFO_FLAG_MANIFEST_VALUEMAP = 0x1,
    EVENTMAP_INFO_FLAG_MANIFEST_BITMAP = 0x2,
    EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP = 0x4,
    EVENTMAP_INFO_FLAG_WBEM_VALUEMAP = 0x8,
    EVENTMAP_INFO_FLAG_WBEM_BITMAP = 0x10,
    EVENTMAP_INFO_FLAG_WBEM_FLAG = 0x20,
    EVENTMAP_INFO_FLAG_WBEM_NO_MAP = 0x40
} MAP_FLAGS;

typedef enum _MAP_VALUETYPE {
    EVENTMAP_ENTRY_VALUETYPE_ULONG,
    EVENTMAP_ENTRY_VALUETYPE_STRING
}  MAP_VALUETYPE;

typedef struct _EVENT_MAP_INFO {
    ULONG NameOffset;
    MAP_FLAGS Flag;
    ULONG EntryCount;
    union {
        MAP_VALUETYPE MapEntryValueType;
        ULONG FormatStringOffset;
    };
    _Field_size_(EntryCount) EVENT_MAP_ENTRY MapEntryArray[ANYSIZE_ARRAY];
} EVENT_MAP_INFO;
typedef EVENT_MAP_INFO *PEVENT_MAP_INFO;

// Intypes and outtypes are defined in winmeta.xml.

enum _TDH_IN_TYPE {
    TDH_INTYPE_NULL,
    TDH_INTYPE_UNICODESTRING,
    TDH_INTYPE_ANSISTRING,
    TDH_INTYPE_INT8,
    TDH_INTYPE_UINT8,
    TDH_INTYPE_INT16,
    TDH_INTYPE_UINT16,
    TDH_INTYPE_INT32,
    TDH_INTYPE_UINT32,
    TDH_INTYPE_INT64,
    TDH_INTYPE_UINT64,
    TDH_INTYPE_FLOAT,
    TDH_INTYPE_DOUBLE,
    TDH_INTYPE_BOOLEAN,
    TDH_INTYPE_BINARY,
    TDH_INTYPE_GUID,
    TDH_INTYPE_POINTER,
    TDH_INTYPE_FILETIME,
    TDH_INTYPE_SYSTEMTIME,
    TDH_INTYPE_SID,
    TDH_INTYPE_HEXINT32,
    TDH_INTYPE_HEXINT64,                    // End of winmeta intypes.
    TDH_INTYPE_COUNTEDSTRING = 300,         // Start of TDH intypes for WBEM.
    TDH_INTYPE_COUNTEDANSISTRING,
    TDH_INTYPE_REVERSEDCOUNTEDSTRING,
    TDH_INTYPE_REVERSEDCOUNTEDANSISTRING,
    TDH_INTYPE_NONNULLTERMINATEDSTRING,
    TDH_INTYPE_NONNULLTERMINATEDANSISTRING,
    TDH_INTYPE_UNICODECHAR,
    TDH_INTYPE_ANSICHAR,
    TDH_INTYPE_SIZET,
    TDH_INTYPE_HEXDUMP,
    TDH_INTYPE_WBEMSID
};

enum _TDH_OUT_TYPE {
    TDH_OUTTYPE_NULL,
    TDH_OUTTYPE_STRING,
    TDH_OUTTYPE_DATETIME,
    TDH_OUTTYPE_BYTE,
    TDH_OUTTYPE_UNSIGNEDBYTE,
    TDH_OUTTYPE_SHORT,
    TDH_OUTTYPE_UNSIGNEDSHORT,
    TDH_OUTTYPE_INT,
    TDH_OUTTYPE_UNSIGNEDINT,
    TDH_OUTTYPE_LONG,
    TDH_OUTTYPE_UNSIGNEDLONG,
    TDH_OUTTYPE_FLOAT,
    TDH_OUTTYPE_DOUBLE,
    TDH_OUTTYPE_BOOLEAN,
    TDH_OUTTYPE_GUID,
    TDH_OUTTYPE_HEXBINARY,
    TDH_OUTTYPE_HEXINT8,
    TDH_OUTTYPE_HEXINT16,
    TDH_OUTTYPE_HEXINT32,
    TDH_OUTTYPE_HEXINT64,
    TDH_OUTTYPE_PID,
    TDH_OUTTYPE_TID,
    TDH_OUTTYPE_PORT,
    TDH_OUTTYPE_IPV4,
    TDH_OUTTYPE_IPV6,
    TDH_OUTTYPE_SOCKETADDRESS,
    TDH_OUTTYPE_CIMDATETIME,
    TDH_OUTTYPE_ETWTIME,
    TDH_OUTTYPE_XML,
    TDH_OUTTYPE_ERRORCODE,
    TDH_OUTTYPE_WIN32ERROR,
    TDH_OUTTYPE_NTSTATUS,
    TDH_OUTTYPE_HRESULT,             // End of winmeta outtypes.
    TDH_OUTTYPE_CULTURE_INSENSITIVE_DATETIME, //Culture neutral datetime string.
    TDH_OUTTYPE_JSON,
    TDH_OUTTYPE_REDUCEDSTRING = 300, // Start of TDH outtypes for WBEM.
    TDH_OUTTYPE_NOPRINT
};

#define TDH_OUTYTPE_ERRORCODE TDH_OUTTYPE_ERRORCODE

typedef enum _PROPERTY_FLAGS
{
   PropertyStruct        = 0x1,      // Type is struct.
   PropertyParamLength   = 0x2,      // Length field is index of param with length.
   PropertyParamCount    = 0x4,      // Count file is index of param with count.
   PropertyWBEMXmlFragment = 0x8,    // WBEM extension flag for property.
   PropertyParamFixedLength = 0x10,  // Length of the parameter is fixed.
   PropertyParamFixedCount = 0x20,   // Count of the parameter is fixed.
   PropertyHasTags       = 0x40,     // The Tags field has been initialized.
   PropertyHasCustomSchema = 0x80,   // Type is described with a custom schema.
} PROPERTY_FLAGS;

typedef struct _EVENT_PROPERTY_INFO {
    PROPERTY_FLAGS Flags;
    ULONG NameOffset;
    union {
        struct _nonStructType {
            USHORT InType;
            USHORT OutType;
            ULONG MapNameOffset;
        } nonStructType;
        struct _structType {
            USHORT StructStartIndex;
            USHORT NumOfStructMembers;
            ULONG padding;
        } structType;
        struct _customSchemaType {
            USHORT padding2;
            USHORT OutType;
            ULONG CustomSchemaOffset;
        } customSchemaType;
    };
    union {
        USHORT count;
        USHORT countPropertyIndex;
    };
    union {
        USHORT length;
        USHORT lengthPropertyIndex;
    };
    union {
        ULONG Reserved;
        struct {
            ULONG Tags : 28;
        };
    };
} EVENT_PROPERTY_INFO;
typedef EVENT_PROPERTY_INFO *PEVENT_PROPERTY_INFO;

typedef enum _DECODING_SOURCE {
    DecodingSourceXMLFile,
    DecodingSourceWbem,
    DecodingSourceWPP,
    DecodingSourceTlg,
    DecodingSourceMax
} DECODING_SOURCE;

// Copy from Binres.h
typedef enum _TEMPLATE_FLAGS
{
    TEMPLATE_EVENT_DATA = 1, // Used when custom xml is not specified.
    TEMPLATE_USER_DATA = 2   // Used when custom xml is specified.
} TEMPLATE_FLAGS;

typedef struct _TRACE_EVENT_INFO {
    GUID ProviderGuid;
    GUID EventGuid;
    EVENT_DESCRIPTOR EventDescriptor;
    DECODING_SOURCE DecodingSource;
    ULONG ProviderNameOffset;
    ULONG LevelNameOffset;
    ULONG ChannelNameOffset;
    ULONG KeywordsNameOffset;
    ULONG TaskNameOffset;
    ULONG OpcodeNameOffset;
    ULONG EventMessageOffset;
    ULONG ProviderMessageOffset;
    ULONG BinaryXMLOffset;
    ULONG BinaryXMLSize;
    ULONG ActivityIDNameOffset;
    ULONG RelatedActivityIDNameOffset;
    ULONG PropertyCount;
    _Field_range_(0, PropertyCount) ULONG TopLevelPropertyCount;
    union {
        TEMPLATE_FLAGS Flags;
        struct {
            ULONG Reserved : 4; // TEMPLATE_FLAGS values
            ULONG Tags : 28;
        };
    };
    _Field_size_(PropertyCount) EVENT_PROPERTY_INFO EventPropertyInfoArray[ANYSIZE_ARRAY];
} TRACE_EVENT_INFO;
typedef TRACE_EVENT_INFO *PTRACE_EVENT_INFO;

typedef struct _PROPERTY_DATA_DESCRIPTOR {
    ULONGLONG PropertyName;                // Pointer to property name.
    ULONG ArrayIndex;                      // Array Index.
    ULONG Reserved;
} PROPERTY_DATA_DESCRIPTOR;
typedef PROPERTY_DATA_DESCRIPTOR *PPROPERTY_DATA_DESCRIPTOR;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

//
// ETW Payload Filtering Tdh support
//

//
// Payload filtering definitions
//

//
// TDH_PAYLOADFIELD_OPERATORs are used to build Payload filters.
//
//    BETWEEN uses a closed interval: [LowerBound <= FieldValue <= UpperBound].
//    Floating-point comparisons are not supported.
//    String comparisons are case-sensitive.
//    Values are converted based on the manifest field type.
//

typedef enum _PAYLOAD_OPERATOR {

    //
    // For integers, comparison can be one of:
    //

    PAYLOADFIELD_EQ = 0,
    PAYLOADFIELD_NE = 1,
    PAYLOADFIELD_LE = 2,
    PAYLOADFIELD_GT = 3,
    PAYLOADFIELD_LT = 4,
    PAYLOADFIELD_GE = 5,
    PAYLOADFIELD_BETWEEN = 6,        // Two values: lower/upper bounds
    PAYLOADFIELD_NOTBETWEEN = 7,     // Two values: lower/upper bounds
    PAYLOADFIELD_MODULO = 8,         // For periodically sampling a field

    //
    // For strings:
    //

    PAYLOADFIELD_CONTAINS      = 20, // Substring identical to Value
    PAYLOADFIELD_DOESNTCONTAIN = 21, // No substring identical to Value

    //
    // For strings or other non-integer values
    //

    PAYLOADFIELD_IS    = 30,         // Field is identical to Value
    PAYLOADFIELD_ISNOT = 31,         // Field is NOT identical to Value
    PAYLOADFIELD_INVALID = 32
} PAYLOAD_OPERATOR;


typedef struct _PAYLOAD_FILTER_PREDICATE {
    LPWSTR FieldName;
    USHORT CompareOp;    // PAYLOAD_OPERATOR
    LPWSTR Value;        // One or two values (i.e., two for BETWEEN operations)
} PAYLOAD_FILTER_PREDICATE, *PPAYLOAD_FILTER_PREDICATE;

#define MAX_PAYLOAD_PREDICATES 8

#if (WINVER >= _WIN32_WINNT_WINBLUE)

TDHAPI
TdhCreatePayloadFilter(
     _In_ LPCGUID ProviderGuid,        
     _In_ PCEVENT_DESCRIPTOR EventDescriptor,
     _In_ BOOLEAN EventMatchANY,
     _In_ ULONG PayloadPredicateCount,
     _In_reads_(PayloadPredicateCount)
        PPAYLOAD_FILTER_PREDICATE PayloadPredicates,
     _Outptr_result_maybenull_ PVOID *PayloadFilter
    );

TDHAPI
TdhDeletePayloadFilter(
     _Inout_ PVOID *PayloadFilter
    );

TDHAPI
TdhAggregatePayloadFilters(
    _In_ ULONG PayloadFilterCount,
    _In_reads_(PayloadFilterCount) PVOID *PayloadFilterPtrs,
    _In_reads_opt_(PayloadFilterCount) PBOOLEAN EventMatchALLFlags,
    _Out_ PEVENT_FILTER_DESCRIPTOR EventFilterDescriptor
    );

TDHAPI
TdhCleanupPayloadEventFilterDescriptor(
    _Inout_ PEVENT_FILTER_DESCRIPTOR EventFilterDescriptor
    );

#endif // WINVER

//
// Provider-side filters.
//

typedef struct _PROVIDER_FILTER_INFO {
    UCHAR Id;
    UCHAR Version;
    ULONG MessageOffset;
    ULONG Reserved;
    ULONG PropertyCount;
    _Field_size_(PropertyCount) EVENT_PROPERTY_INFO EventPropertyInfoArray[ANYSIZE_ARRAY];
} PROVIDER_FILTER_INFO, *PPROVIDER_FILTER_INFO;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

// Provider Enumeration.

typedef enum _EVENT_FIELD_TYPE {
    EventKeywordInformation = 0,
    EventLevelInformation,
    EventChannelInformation,
    EventTaskInformation,
    EventOpcodeInformation,
    EventInformationMax
} EVENT_FIELD_TYPE;

typedef struct _PROVIDER_FIELD_INFO {
    ULONG NameOffset;                  // English only.
    ULONG DescriptionOffset;           // Localizable String.
    ULONGLONG Value;
} PROVIDER_FIELD_INFO;
typedef PROVIDER_FIELD_INFO *PPROVIDER_FIELD_INFO;

typedef struct _PROVIDER_FIELD_INFOARRAY {
    ULONG NumberOfElements;
    EVENT_FIELD_TYPE FieldType;
    PROVIDER_FIELD_INFO FieldInfoArray[ANYSIZE_ARRAY];
} PROVIDER_FIELD_INFOARRAY;
typedef PROVIDER_FIELD_INFOARRAY *PPROVIDER_FIELD_INFOARRAY;

typedef struct _TRACE_PROVIDER_INFO {
    GUID ProviderGuid;
    ULONG SchemaSource;
    ULONG ProviderNameOffset;
} TRACE_PROVIDER_INFO;
typedef TRACE_PROVIDER_INFO *PTRACE_PROVIDER_INFO;

typedef struct _PROVIDER_ENUMERATION_INFO {
    ULONG NumberOfProviders;
    ULONG Reserved;
    _Field_size_(NumberOfProviders) TRACE_PROVIDER_INFO TraceProviderInfoArray[ANYSIZE_ARRAY];
} PROVIDER_ENUMERATION_INFO;
typedef PROVIDER_ENUMERATION_INFO *PPROVIDER_ENUMERATION_INFO;

typedef struct _PROVIDER_EVENT_INFO {
    ULONG NumberOfEvents;
    ULONG Reserved;
    _Field_size_(NumberOfEvents) EVENT_DESCRIPTOR EventDescriptorsArray[ANYSIZE_ARRAY];
} PROVIDER_EVENT_INFO;
typedef PROVIDER_EVENT_INFO *PPROVIDER_EVENT_INFO;

typedef enum _TDH_CONTEXT_TYPE {
    TDH_CONTEXT_WPP_TMFFILE = 0,
    TDH_CONTEXT_WPP_TMFSEARCHPATH,
    TDH_CONTEXT_WPP_GMT,
    TDH_CONTEXT_POINTERSIZE,
    TDH_CONTEXT_PDB_PATH,
    TDH_CONTEXT_MAXIMUM
} TDH_CONTEXT_TYPE;

typedef struct _TDH_CONTEXT {
    ULONGLONG ParameterValue;    // Pointer to Data.
    TDH_CONTEXT_TYPE ParameterType;
    ULONG ParameterSize;
} TDH_CONTEXT;
typedef TDH_CONTEXT *PTDH_CONTEXT;

TDHAPI
TdhGetEventInformation(
    _In_ PEVENT_RECORD Event,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT TdhContext,
    _Out_writes_bytes_opt_(*BufferSize) PTRACE_EVENT_INFO Buffer,
    _Inout_ PULONG BufferSize
    );

TDHAPI
TdhGetEventMapInformation(
    _In_ PEVENT_RECORD pEvent,
    _In_ PWSTR pMapName,
    _Out_writes_bytes_opt_(*pBufferSize) PEVENT_MAP_INFO pBuffer,
    _Inout_ ULONG *pBufferSize
    );

TDHAPI
TdhGetPropertySize(
    _In_ PEVENT_RECORD pEvent,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT pTdhContext,
    _In_ ULONG PropertyDataCount,
    _In_reads_(PropertyDataCount) PPROPERTY_DATA_DESCRIPTOR pPropertyData,
    _Out_ ULONG *pPropertySize
    );

TDHAPI
TdhGetProperty(
    _In_ PEVENT_RECORD pEvent,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT pTdhContext,
    _In_ ULONG PropertyDataCount,
    _In_reads_(PropertyDataCount) PPROPERTY_DATA_DESCRIPTOR pPropertyData,
    _In_ ULONG BufferSize,
    _Out_writes_bytes_(BufferSize) PBYTE pBuffer
    );

TDHAPI
TdhEnumerateProviders(
    _Out_writes_bytes_opt_(*pBufferSize) PPROVIDER_ENUMERATION_INFO pBuffer,
    _Inout_ ULONG *pBufferSize
    );

TDHAPI
TdhQueryProviderFieldInformation(
    _In_ LPGUID pGuid,
    _In_ ULONGLONG EventFieldValue,
    _In_ EVENT_FIELD_TYPE EventFieldType,
    _Out_writes_bytes_opt_(*pBufferSize) PPROVIDER_FIELD_INFOARRAY pBuffer,
    _Inout_ ULONG *pBufferSize
    );

TDHAPI
TdhEnumerateProviderFieldInformation(
    _In_ LPGUID pGuid,
    _In_ EVENT_FIELD_TYPE EventFieldType,
    _Out_writes_bytes_opt_(*pBufferSize) PPROVIDER_FIELD_INFOARRAY pBuffer,
    _Inout_ ULONG *pBufferSize
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI
TdhEnumerateProviderFilters(
    _In_ LPGUID Guid,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT TdhContext,
    _Out_ ULONG *FilterCount,
    _Out_writes_bytes_opt_(*BufferSize) PPROVIDER_FILTER_INFO *Buffer,
    _Inout_ ULONG *BufferSize
    );
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI
TdhLoadManifest(
    _In_ PWSTR Manifest
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI
TdhUnloadManifest(
    _In_ PWSTR Manifest
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI
TdhFormatProperty(
    _In_ PTRACE_EVENT_INFO EventInfo,
    _In_opt_ PEVENT_MAP_INFO MapInfo,
    _In_ ULONG PointerSize,
    _In_ USHORT PropertyInType,
    _In_ USHORT PropertyOutType,
    _In_ USHORT PropertyLength,
    _In_ USHORT UserDataLength,
    _In_reads_bytes_(UserDataLength) PBYTE UserData,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_opt_(*BufferSize) PWCHAR Buffer,
    _Out_ PUSHORT UserDataConsumed
    );
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhOpenDecodingHandle(
    _Out_ PTDH_HANDLE Handle
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhSetDecodingParameter(
    _In_ TDH_HANDLE Handle,
    _In_ PTDH_CONTEXT TdhContext
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhGetDecodingParameter(
    _In_ TDH_HANDLE Handle,
    _Inout_ PTDH_CONTEXT TdhContext
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhGetWppProperty(
    _In_ TDH_HANDLE Handle,
    _In_ PEVENT_RECORD EventRecord,
    _In_ PWSTR PropertyName,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_(*BufferSize) PBYTE Buffer
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhGetWppMessage(
    _In_ TDH_HANDLE Handle,
    _In_ PEVENT_RECORD EventRecord,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_(*BufferSize) PBYTE Buffer
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhCloseDecodingHandle(
    _In_ TDH_HANDLE Handle
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhLoadManifestFromBinary(
    _In_ PWSTR BinaryPath
    );
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (WINVER >= _WIN32_WINNT_WINBLUE)
TDHAPI
TdhEnumerateManifestProviderEvents (
    _In_ LPGUID ProviderGuid,        
    _Out_writes_bytes_opt_(*BufferSize) PPROVIDER_EVENT_INFO Buffer,
    _Inout_ ULONG *BufferSize  
    );
#endif

#if (WINVER >= _WIN32_WINNT_WINBLUE)
TDHAPI
TdhGetManifestEventInformation (
    _In_ LPGUID ProviderGuid,        
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _Out_writes_bytes_opt_(*BufferSize) PTRACE_EVENT_INFO Buffer,
    _Inout_  ULONG *BufferSize
    );
#endif

//
//  Helper macros to access strings from variable length Tdh structures.
//

FORCEINLINE
PWSTR
EMI_MAP_NAME(
    _In_ PEVENT_MAP_INFO MapInfo
    )
{
    return (MapInfo->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)MapInfo + MapInfo->NameOffset);
}

FORCEINLINE
PWSTR
EMI_MAP_FORMAT(
    _In_ PEVENT_MAP_INFO MapInfo
    )
{
    if ((MapInfo->Flag & EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP) &&
        (MapInfo->FormatStringOffset)) {
        return (PWSTR)((PBYTE)MapInfo + MapInfo->FormatStringOffset);
    } else {
        return NULL;
    }
}

FORCEINLINE
PWSTR
EMI_MAP_OUTPUT(
    _In_ PEVENT_MAP_INFO MapInfo,
    _In_ PEVENT_MAP_ENTRY Map
    )
{
    return (Map->OutputOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)MapInfo + Map->OutputOffset);
}

FORCEINLINE
PWSTR
EMI_MAP_INPUT(
    _In_ PEVENT_MAP_INFO MapInfo,
    _In_ PEVENT_MAP_ENTRY Map
    )
{
    if ((MapInfo->Flag & EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP) &&
        (Map->InputOffset != 0)) {
        return (PWSTR)((PBYTE)MapInfo + Map->InputOffset);
    } else {
        return NULL;
    }
}

FORCEINLINE
PWSTR
TEI_MAP_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo,
    _In_ PEVENT_PROPERTY_INFO Property
    )
{
    return (Property->nonStructType.MapNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + Property->nonStructType.MapNameOffset);
}

FORCEINLINE
PWSTR
TEI_PROPERTY_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo,
    _In_ PEVENT_PROPERTY_INFO Property
    )
{
    return (Property->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + Property->NameOffset);
}

FORCEINLINE
PWSTR
TEI_PROVIDER_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ProviderNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ProviderNameOffset);
}

FORCEINLINE
PWSTR
TEI_LEVEL_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->LevelNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->LevelNameOffset);
}

FORCEINLINE
PWSTR
TEI_CHANNEL_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ChannelNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ChannelNameOffset);
}

FORCEINLINE
PWSTR
TEI_KEYWORDS_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->KeywordsNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->KeywordsNameOffset);
}

FORCEINLINE
PWSTR
TEI_TASK_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->TaskNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->TaskNameOffset);
}

FORCEINLINE
PWSTR
TEI_OPCODE_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->OpcodeNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->OpcodeNameOffset);
}

FORCEINLINE
PWSTR
TEI_EVENT_MESSAGE(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->EventMessageOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->EventMessageOffset);
}

FORCEINLINE
PWSTR
TEI_PROVIDER_MESSAGE(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ProviderMessageOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ProviderMessageOffset);
}

FORCEINLINE
PWSTR
TEI_ACTIVITYID_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ActivityIDNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ActivityIDNameOffset);
}

FORCEINLINE
PWSTR
TEI_RELATEDACTIVITYID_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->RelatedActivityIDNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->RelatedActivityIDNameOffset);
}

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN7)
FORCEINLINE
PWSTR
PFI_FILTER_MESSAGE(
    _In_ PPROVIDER_FILTER_INFO FilterInfo
    )
{
    return (FilterInfo->MessageOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FilterInfo + FilterInfo->MessageOffset);
}
#endif

#if (WINVER >= _WIN32_WINNT_WIN7)
FORCEINLINE
PWSTR
PFI_PROPERTY_NAME(
    _In_ PPROVIDER_FILTER_INFO FilterInfo,
    _In_ PEVENT_PROPERTY_INFO Property
    )
{
    return (Property->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FilterInfo + Property->NameOffset);
}
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

FORCEINLINE
PWSTR
PFI_FIELD_NAME(
    _In_ PPROVIDER_FIELD_INFOARRAY FieldInfoArray,
    _In_ PPROVIDER_FIELD_INFO FieldInfo
    )
{
    return (FieldInfo->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FieldInfoArray + FieldInfo->NameOffset);
}

FORCEINLINE
PWSTR
PFI_FIELD_MESSAGE(
    _In_ PPROVIDER_FIELD_INFOARRAY FieldInfoArray,
    _In_ PPROVIDER_FIELD_INFO FieldInfo
    )
{
    return (FieldInfo->DescriptionOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FieldInfoArray + FieldInfo->DescriptionOffset);
}

FORCEINLINE
PWSTR
PEI_PROVIDER_NAME(
    _In_ PPROVIDER_ENUMERATION_INFO ProviderEnum,
    _In_ PTRACE_PROVIDER_INFO ProviderInfo
    )
{
    return (ProviderInfo->ProviderNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)ProviderEnum + ProviderInfo->ProviderNameOffset);
}

#pragma warning(pop)

#ifdef __cplusplus
}
#endif


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif  // __TDH_H__
