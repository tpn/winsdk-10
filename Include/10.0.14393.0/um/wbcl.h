/*+--------------------------------------------------------------------------

Microsoft Windows
Copyright (c) Microsoft Corporation.  All rights reserved.

File:       wbcl.h

Contents:   Definitions and prototypes for parsing the TCG Log

---------------------------------------------------------------------------*/
#ifdef _MSC_VER
#pragma once
#endif

#ifndef _WBCL_H
#define _WBCL_H

#include <winapifamily.h>

#if defined(__cplusplus)
extern "C" {
#endif

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if NTDDI_VERSION >= NTDDI_WIN8 

//----------------------------------TCG-defined PCR Event Types
#ifndef SIPAEV_PREBOOT_CERT
#define SIPAEV_PREBOOT_CERT (0x00000000)
#define SIPAEV_POST_CODE (0x00000001)
#define SIPAEV_UNUSED (0x00000002)
#define SIPAEV_NO_ACTION (0x00000003)
#define SIPAEV_SEPARATOR (0x00000004)
#define SIPAEV_ACTION (0x00000005)
#define SIPAEV_EVENT_TAG (0x00000006)
#define SIPAEV_S_CRTM_CONTENTS (0x00000007)
#define SIPAEV_S_CRTM_VERSION (0x00000008)
#define SIPAEV_CPU_MICROCODE (0x00000009)
#define SIPAEV_PLATFORM_CONFIG_FLAGS (0x0000000A)
#define SIPAEV_TABLE_OF_DEVICES (0x0000000B)
#define SIPAEV_COMPACT_HASH (0x0000000C)
#define SIPAEV_IPL (0x0000000D)
#define SIPAEV_IPL_PARTITION_DATA (0x0000000E)
#define SIPAEV_NONHOST_CODE (0x0000000F)
#define SIPAEV_NONHOST_CONFIG (0x00000010)
#define SIPAEV_NONHOST_INFO (0x00000011)
#define SIPAEV_EFI_EVENT_BASE (0x80000000)
#define SIPAEV_EFI_VARIABLE_DRIVER_CONFIG (0x80000001)
#define SIPAEV_EFI_VARIABLE_BOOT (0x80000002)
#define SIPAEV_EFI_BOOT_SERVICES_APPLICATION (0x80000003)
#define SIPAEV_EFI_BOOT_SERVICES_DRIVER (0x80000004)
#define SIPAEV_EFI_RUNTIME_SERVICES_DRIVER (0x80000005)
#define SIPAEV_EFI_GPT_EVENT (0x80000006)
#define SIPAEV_EFI_ACTION (0x80000007)
#define SIPAEV_EFI_PLATFORM_FIRMWARE_BLOB (0x80000008)
#define SIPAEV_EFI_HANDOFF_TABLES (0x80000009)
#endif

//-----------------------------Types of tagged events in WBCL file
#ifndef SIPAEVENTTYPE_NONMEASURED
// Top 8 bits are event flags
#define SIPAEVENTTYPE_NONMEASURED                       (0x80000000)
#define SIPAEVENTTYPE_AGGREGATION                       (0x40000000)

// The next 8 bits are enumerating the event types
#define SIPAEVENTTYPE_CONTAINER                         (0x00010000)
#define SIPAEVENTTYPE_INFORMATION                       (0x00020000)
#define SIPAEVENTTYPE_ERROR                             (0x00030000)
#define SIPAEVENTTYPE_PREOSPARAMETER                    (0x00040000)
#define SIPAEVENTTYPE_OSPARAMETER                       (0x00050000)
#define SIPAEVENTTYPE_AUTHORITY                         (0x00060000)
#define SIPAEVENTTYPE_LOADEDMODULE                      (0x00070000)
#define SIPAEVENTTYPE_TRUSTPOINT                        (0x00080000)
#define SIPAEVENTTYPE_ELAM                              (0x00090000)
#define SIPAEVENTTYPE_VBS                               (0x000A0000)

//SIPAEVENTTYPE_CONTAINER
#define SIPAEVENT_TRUSTBOUNDARY            (SIPAEVENTTYPE_AGGREGATION + \
                                            SIPAEVENTTYPE_CONTAINER + \
                                            0x0001)
#define SIPAEVENT_ELAM_AGGREGATION         (SIPAEVENTTYPE_AGGREGATION + \
                                            SIPAEVENTTYPE_CONTAINER + \
                                            0x0002)
#define SIPAEVENT_LOADEDMODULE_AGGREGATION (SIPAEVENTTYPE_AGGREGATION + \
                                            SIPAEVENTTYPE_CONTAINER + \
                                            0x0003)
#define SIPAEVENT_TRUSTPOINT_AGGREGATION   (SIPAEVENTTYPE_NONMEASURED + \
                                            SIPAEVENTTYPE_AGGREGATION + \
                                            SIPAEVENTTYPE_CONTAINER + \
                                            0x0004)

//SIPAEVENTTYPE_ERROR
#define SIPAERROR_FIRMWAREFAILURE          (SIPAEVENTTYPE_ERROR + \
                                            0x0001)
#define SIPAERROR_TPMFAILURE               (SIPAEVENTTYPE_NONMEASURED + \
                                            SIPAEVENTTYPE_ERROR + \
                                            0x0002)
#define SIPAERROR_INTERNALFAILURE          (SIPAEVENTTYPE_ERROR + \
                                            0x0003)

//SIPAEVENTTYPE_INFORMATION
#define SIPAEVENT_INFORMATION              (SIPAEVENTTYPE_INFORMATION + \
                                            0x0001)
#define SIPAEVENT_BOOTCOUNTER              (SIPAEVENTTYPE_INFORMATION + \
                                            0x0002)
#define SIPAEVENT_TRANSFER_CONTROL         (SIPAEVENTTYPE_INFORMATION + \
                                            0x0003)
#define SIPAEVENT_APPLICATION_RETURN       (SIPAEVENTTYPE_INFORMATION + \
                                            0x0004)
#define SIPAEVENT_BITLOCKER_UNLOCK         (SIPAEVENTTYPE_INFORMATION + \
                                            0x0005)
#define SIPAEVENT_EVENTCOUNTER             (SIPAEVENTTYPE_INFORMATION + \
                                            0x0006)
#define SIPAEVENT_COUNTERID                (SIPAEVENTTYPE_INFORMATION + \
                                            0x0007)

#if NTDDI_VERSION >= NTDDI_THRESHOLD 

#define SIPAEVENT_MORBIT_NOT_CANCELABLE    (SIPAEVENTTYPE_INFORMATION + \
                                            0x0008)

#define SIPAEVENT_APPLICATION_SVN          (SIPAEVENTTYPE_INFORMATION + \
                                            0x0009)
#define SIPAEVENT_SVN_CHAIN_STATUS         (SIPAEVENTTYPE_INFORMATION + \
                                            0x000a)

#endif

//SIPAEVENTTYPE_PREOSPARAMETER
#define SIPAEVENT_BOOTDEBUGGING            (SIPAEVENTTYPE_PREOSPARAMETER + \
                                            0x0001)

#if NTDDI_VERSION >= NTDDI_THRESHOLD 

#define SIPAEVENT_BOOT_REVOCATION_LIST     (SIPAEVENTTYPE_PREOSPARAMETER + \
                                            0x0002)

#endif

//SIPAEVENTTYPE_OSPARAMETER
#define SIPAEVENT_OSKERNELDEBUG            (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0001)
#define SIPAEVENT_CODEINTEGRITY            (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0002)
#define SIPAEVENT_TESTSIGNING              (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0003)
#define SIPAEVENT_DATAEXECUTIONPREVENTION  (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0004)
#define SIPAEVENT_SAFEMODE                 (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0005)
#define SIPAEVENT_WINPE                    (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0006)
#define SIPAEVENT_PHYSICALADDRESSEXTENSION (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0007)
#define SIPAEVENT_OSDEVICE                 (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0008)
#define SIPAEVENT_SYSTEMROOT               (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0009)
#define SIPAEVENT_HYPERVISOR_LAUNCH_TYPE   (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x000A)
#define SIPAEVENT_HYPERVISOR_PATH          (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x000B)
#define SIPAEVENT_HYPERVISOR_IOMMU_POLICY  (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x000C)
#define SIPAEVENT_HYPERVISOR_DEBUG         (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x000D)

#define SIPAEVENT_DRIVER_LOAD_POLICY       (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x000E)

#if NTDDI_VERSION >= NTDDI_THRESHOLD 

//
//  SIPAEVENT_SI_POLICY is used to describe the System Integrity (SI) policy
//
#define SIPAEVENT_SI_POLICY                (SIPAEVENTTYPE_OSPARAMETER + \
                                           0x000F)

#define SIPAEVENT_HYPERVISOR_MMIO_NX_POLICY \
                                           (SIPAEVENTTYPE_OSPARAMETER + \
                                           0x0010)

#define SIPAEVENT_HYPERVISOR_MSR_FILTER_POLICY \
                                           (SIPAEVENTTYPE_OSPARAMETER + \
                                           0x0011)

#define SIPAEVENT_VSM_LAUNCH_TYPE          (SIPAEVENTTYPE_OSPARAMETER + \
                                           0x0012)

#define SIPAEVENT_OS_REVOCATION_LIST       (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0013)

//
// Describes the VSM/SMART identity decryption public key.
//
#define SIPAEVENT_VSM_IDK_INFO             (SIPAEVENTTYPE_OSPARAMETER + \
                                           0x0020)

#endif

#if NTDDI_VERSION >= NTDDI_WIN10_RS1 

#define SIPAEVENT_FLIGHTSIGNING            (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0021)


#define SIPAEVENT_PAGEFILE_ENCRYPTION_ENABLED   (SIPAEVENTTYPE_OSPARAMETER + \
                                                 0x0022)

//
// Describes the VSM/IUM identity signing public key.
//
#define SIPAEVENT_VSM_IDKS_INFO            (SIPAEVENTTYPE_OSPARAMETER + \
                                           0x0023)

//
// Indicates the setting to disable hibernation.
//
#define SIPAEVENT_HIBERNATION_DISABLED      (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0024)

//
// Indicates the setting by Guarded Host to disable crash dumps.
//
#define SIPAEVENT_DUMPS_DISABLED            (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0025)

//
// Indicates the setting by Guarded Host to disable crash dumps.
//
#define SIPAEVENT_DUMP_ENCRYPTION_ENABLED   (SIPAEVENTTYPE_OSPARAMETER + \
                                            0x0026)

//
// The data portion for this event is a SHA-256 digest of thefollowing regkey value:
// CurrentControlSet\Control\CrashControl\EncryptionCertificates\Certificate.1::PublicKey.
//
#define SIPAEVENT_DUMP_ENCRYPTION_KEY_DIGEST (SIPAEVENTTYPE_OSPARAMETER + \
                                             0x0027)

#endif

//SIPAEVENTTYPE_AUHTORITY
#define SIPAEVENT_NOAUTHORITY              (SIPAEVENTTYPE_AUTHORITY + \
                                            0x0001)
#define SIPAEVENT_AUTHORITYPUBKEY          (SIPAEVENTTYPE_AUTHORITY + \
                                            0x0002)

//SIPAEVENTTYPE_LOADEDIMAGE
#define SIPAEVENT_FILEPATH                 (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x0001)
#define SIPAEVENT_IMAGESIZE                (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x0002)
#define SIPAEVENT_HASHALGORITHMID          (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x0003)
#define SIPAEVENT_AUTHENTICODEHASH         (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x0004)
#define SIPAEVENT_AUTHORITYISSUER          (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x0005)
#define SIPAEVENT_AUTHORITYSERIAL          (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x0006)
#define SIPAEVENT_IMAGEBASE                (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x0007)
#define SIPAEVENT_AUTHORITYPUBLISHER       (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x0008)
#define SIPAEVENT_AUTHORITYSHA1THUMBPRINT  (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x0009)
#define SIPAEVENT_IMAGEVALIDATED           (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x000a)
#define SIPAEVENT_MODULE_SVN               (SIPAEVENTTYPE_LOADEDMODULE + \
                                            0x000b)

//SIPAEVENTTYPE_TRUSTPOINT
#define SIPAEVENT_QUOTE                    (SIPAEVENTTYPE_NONMEASURED + \
                                            SIPAEVENTTYPE_TRUSTPOINT + \
                                            0x0001)
#define SIPAEVENT_QUOTESIGNATURE           (SIPAEVENTTYPE_NONMEASURED + \
                                            SIPAEVENTTYPE_TRUSTPOINT + \
                                            0x0002)
#define SIPAEVENT_AIKID                    (SIPAEVENTTYPE_NONMEASURED + \
                                            SIPAEVENTTYPE_TRUSTPOINT + \
                                            0x0003)
#define SIPAEVENT_AIKPUBDIGEST             (SIPAEVENTTYPE_NONMEASURED + \
                                            SIPAEVENTTYPE_TRUSTPOINT + \
                                            0x0004)

// SIPAEVENTTYPE_ELAM
#define SIPAEVENT_ELAM_KEYNAME             (SIPAEVENTTYPE_ELAM + \
                                            0x0001)
#define SIPAEVENT_ELAM_CONFIGURATION       (SIPAEVENTTYPE_ELAM + \
                                            0x0002)
#define SIPAEVENT_ELAM_POLICY              (SIPAEVENTTYPE_ELAM + \
                                            0x0003)
#define SIPAEVENT_ELAM_MEASURED            (SIPAEVENTTYPE_ELAM + \
                                            0x0004)

// SIPAEVENTTYPE_VBS
#define SIPAEVENT_VBS_VSM_REQUIRED         (SIPAEVENTTYPE_VBS + \
                                           0x0001)

#define SIPAEVENT_VBS_SECUREBOOT_REQUIRED  (SIPAEVENTTYPE_VBS + \
                                           0x0002)

#define SIPAEVENT_VBS_IOMMU_REQUIRED       (SIPAEVENTTYPE_VBS + \
                                           0x0003)

#define SIPAEVENT_VBS_MMIO_NX_REQUIRED     (SIPAEVENTTYPE_VBS + \
                                           0x004)

#define SIPAEVENT_VBS_MSR_FILTERING_REQUIRED \
                                           (SIPAEVENTTYPE_VBS + \
                                           0x0005)

#define SIPAEVENT_VBS_MANDATORY_ENFORCEMENT \
                                           (SIPAEVENTTYPE_VBS + \
                                           0x006)

#define SIPAEVENT_VBS_HVCI_POLICY          (SIPAEVENTTYPE_VBS + \
                                           0x007)

#define SIPAEVENT_VBS_MICROSOFT_BOOT_CHAIN_REQUIRED \
                                           (SIPAEVENTTYPE_VBS + \
                                           0x008)

//
#endif

//--------------------------------------------Value Definitions

#define FVEB_UNLOCK_FLAG_NONE            (0x00000000)
#define FVEB_UNLOCK_FLAG_CACHED          (0x00000001)
#define FVEB_UNLOCK_FLAG_MEDIA           (0x00000002)
#define FVEB_UNLOCK_FLAG_TPM             (0x00000004)
#define FVEB_UNLOCK_FLAG_PIN             (0x00000010)
#define FVEB_UNLOCK_FLAG_EXTERNAL        (0x00000020)
#define FVEB_UNLOCK_FLAG_RECOVERY        (0x00000040)

#define OSDEVICE_TYPE_UNKNOWN                       (0x00000000)
#define OSDEVICE_TYPE_BLOCKIO_HARDDISK              (0x00010001)
#define OSDEVICE_TYPE_BLOCKIO_REMOVABLEDISK         (0x00010002)
#define OSDEVICE_TYPE_BLOCKIO_CDROM                 (0x00010003)
#define OSDEVICE_TYPE_BLOCKIO_PARTITION             (0x00010004)
#define OSDEVICE_TYPE_BLOCKIO_FILE                  (0x00010005)
#define OSDEVICE_TYPE_BLOCKIO_RAMDISK               (0x00010006)
#define OSDEVICE_TYPE_BLOCKIO_VIRTUALHARDDISK       (0x00010007)
#define OSDEVICE_TYPE_SERIAL                        (0x00020000)
#define OSDEVICE_TYPE_UDP                           (0x00030000)


//--------------------------------------------------WBCL header
#define SIPAHDRSIGNATURE (0x4c434257) //WBCL
#define SIPALOGVERSION (0x00000001)

#endif //NTDDI_VERSION >= NTDDI_WIN8 

//---------------------------Logging structures in the TCG log
#pragma pack(push,1)

//
// These values are aligned with TPM 2.0 ALG_ID.
//
typedef UINT16 WBCL_DIGEST_ALG_ID;

#define WBCL_DIGEST_ALG_ID_SHA_1            0x0004
#define WBCL_DIGEST_ALG_ID_SHA_2_256        0x000B
#define WBCL_DIGEST_ALG_ID_SHA_2_384        0x000C
#define WBCL_DIGEST_ALG_ID_SHA_2_512        0x000D

//
// These values are aligned with the TPM 2.0 algorithm bitmap
//
#define WBCL_DIGEST_ALG_BITMAP_SHA_1        0x00000001
#define WBCL_DIGEST_ALG_BITMAP_SHA_2_256    0x00000002
#define WBCL_DIGEST_ALG_BITMAP_SHA_2_384    0x00000004
#define WBCL_DIGEST_ALG_BITMAP_SHA_2_512    0x00000008

//
// An iterator object for WBCL log.
//
typedef struct _WBCL_Iterator
{
  // Pointer to the first element of the log.
  PVOID     firstElementPtr;
  
  // Log size in bytes.
  UINT32    logSize;

  // Pointer to the current element of the log.
  PVOID     currentElementPtr;

  // Size of the current log entry pointed to by currentElementPtr.
  UINT32    currentElementSize;

  // Size of the digest field of event log entries.
  UINT16    digestSize;

  // Indicates the log format.
  UINT16    logFormat;

  // number of algorithms stored in the following digest table.
  UINT32    numberOfDigests;

  // points to the table in the header that contains the mapping of algorithm ids to digest sizes.
  PVOID     digestSizes;

  // Hash algorithm ID used for the log. The value corresponds to one of the TPM 2.0 ALG_ID values.
  WBCL_DIGEST_ALG_ID    hashAlgorithm;
} WBCL_Iterator, *PWBCL_Iterator;

#if NTDDI_VERSION >= NTDDI_WIN10

HRESULT
WbclApiInitIterator(
    _In_    PVOID  pLogBuffer,
    _In_    UINT32 logSize,
    _Out_   WBCL_Iterator* pWbclIterator);

HRESULT
WbclApiGetCurrentElement(
    _In_            WBCL_Iterator* pWbclIterator,
    _Out_           UINT32* pcrIndex,
    _Out_           UINT32* eventType,
    _Outptr_opt_result_bytebuffer_(pWbclIterator->digestSize) BYTE** ppDigest,
    _Out_opt_       UINT32* pcbElementDataSize,
    _Outptr_opt_result_bytebuffer_(*pcbElementDataSize) BYTE** ppbElementData
    );

HRESULT
WbclApiMoveToNextElement(
    _In_ WBCL_Iterator* pWbclIterator);

#endif //NTDDI_VERSION >= NTDDI_WIN10

// =========  SHA-1 legacy WBCL structures =================
#define WBCL_HASH_LEN_SHA1 20

#if NTDDI_VERSION >= NTDDI_WIN8 

typedef struct _TCG_PCClientPCREventStruct
{
    UINT32 pcrIndex;
    UINT32 eventType;
    BYTE   digest[WBCL_HASH_LEN_SHA1];
    UINT32 eventDataSize;
    _Field_size_bytes_(eventDataSize)
    BYTE event[1];
} TCG_PCClientPCREventStruct, *PTCG_PCClientPCREventStruct;
typedef const TCG_PCClientPCREventStruct *PCTCG_PCClientPCREventStruct;

typedef struct _TCG_PCClientTaggedEventStruct
{
    UINT32 EventID;
    UINT32 EventDataSize;

    _Field_size_bytes_(EventDataSize)
    BYTE EventData[ANYSIZE_ARRAY];
} TCG_PCClientTaggedEventStruct, *PTCG_PCClientTaggedEventStruct;
typedef const TCG_PCClientTaggedEventStruct *PCTCG_PCClientTaggedEventStruct;

typedef struct _WBCL_LogHdr
{
    UINT32 signature;
    UINT32 version;
    UINT32 entries;
    UINT32 length;
} WBCL_LogHdr, *PWBCL_LogHdr;

#endif //NTDDI_VERSION >= NTDDI_WIN8 

#if NTDDI_VERSION >= NTDDI_THRESHOLD 

//
// Describes the VSM/SMART identity public key.
//
typedef struct tag_SIPAEVENT_VSM_IDK_RSA_INFO
{
    //
    // Length of the RSA IDK modulus in bits.
    //
    ULONG32 KeyBitLength;
    
    //
    // Length of the RSA IDK public exponent in bytes.
    //
    ULONG32 PublicExpLengthBytes;

    //
    // Length of the modulus field in bytes.
    //
    ULONG32 ModulusSizeBytes;

    //
    // The layout of the PublicKeyData field is as follows:
    // PublicExponent[PublicExpLengthBytes] in Big-endian.
    // Modulus[ModulusSizeBytes] in Big-endian.
    //
    BYTE    PublicKeyData[ANYSIZE_ARRAY];

} SIPAEVENT_VSM_IDK_RSA_INFO, *PSIPAEVENT_VSM_IDK_RSA_INFO;

//
// Payload structure for the SIPAEVENT_VSM_IDK_INFO event.
//
typedef struct tag_SIPAEVENT_VSM_IDK_INFO_PAYLOAD
{
    //
    // Specifies the algorithm used for IDK. Should be one of VSM_IDK_ALG_ID values.
    //
    ULONG32	KeyAlgID;

    //
    // Algorithm-specific description of the public key.
    //
    union
    {
        //
        // Description of the RSA public key.
        //
        SIPAEVENT_VSM_IDK_RSA_INFO	RsaKeyInfo;	
    } DUMMYUNIONNAME;

} SIPAEVENT_VSM_IDK_INFO_PAYLOAD, *PSIPAEVENT_VSM_IDK_INFO_PAYLOAD;

//
// Payload structure used to carry information about any policy blob.
//
typedef struct tag_SIPAEVENT_SI_POLICY_PAYLOAD
{
    //
    // Policy version
    //
    ULONGLONG PolicyVersion;

    //
    // Indicates the length (in bytes) of the policy name stored as part of VarLengthData.
    //
    UINT16  PolicyNameLength;

    //
    // Indicates hash algorithm ID used to produce policy digest.
    // Contains one of the TPM_ALG_ID values, typically the TPM_ALG_SHA256.
    //
    UINT16  HashAlgID;

    //
    // Indicates the hash digest length (in bytes). Digest is stored as part of VarLengthData.
    //
    UINT32  DigestLength;

    //
    // VarLengthData layout is:
    //
    // (Policy name is stored as a WCHAR string with a terminating zero).
    // BYTE PolicyName[PolicyNameLength].
    //
    // BYTE Digest[DigestLength]
    //
    _Field_size_bytes_(PolicyNameLength + DigestLength)
    BYTE    VarLengthData[ANYSIZE_ARRAY];

} SIPAEVENT_SI_POLICY_PAYLOAD, *PSIPAEVENT_SI_POLICY_PAYLOAD;

//
// Payload structure used to carry information about revocation lists.
//
typedef struct tag_SIPAEVENT_REVOCATION_LIST_PAYLOAD
{
    //
    // Creation time.
    //
    LONGLONG CreationTime;

    //
    // Indicates the hash digest length (in bytes).
    //
    UINT32  DigestLength;

    //
    // Indicates hash algorithm ID used to produce the revocation list digest.
    // Contains one of the TPM_ALG_ID values, typically the TPM_ALG_SHA256.
    //
    UINT16  HashAlgID;

    //
    // Hash digest of the revocation list.
    //
    _Field_size_bytes_(DigestLength)
    BYTE    Digest[ANYSIZE_ARRAY];

} SIPAEVENT_REVOCATION_LIST_PAYLOAD, *PSIPAEVENT_REVOCATION_LIST_PAYLOAD;

#endif // NTDDI_VERSION >= NTDDI_THRESHOLD

#pragma pack(pop)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#if defined(__cplusplus)
}
#endif

#endif _WBCL_H

