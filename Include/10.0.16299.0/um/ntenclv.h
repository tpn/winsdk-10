/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ntenclv.h

Abstract:

    This module defines the types and contants used by the Windows kernel to
    support software enclave APIs, and which are exposed through the software
    enclave APIs.

--*/

#ifndef _NTENCLV_
#define _NTENCLV_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum ENCLAVE_SEALING_IDENTITY_POLICY {
    ENCLAVE_IDENTITY_POLICY_SEAL_INVALID = 0,
    ENCLAVE_IDENTITY_POLICY_SEAL_EXACT_CODE,
    ENCLAVE_IDENTITY_POLICY_SEAL_SAME_PRIMARY_CODE,
    ENCLAVE_IDENTITY_POLICY_SEAL_SAME_IMAGE,
    ENCLAVE_IDENTITY_POLICY_SEAL_SAME_FAMILY,
    ENCLAVE_IDENTITY_POLICY_SEAL_SAME_AUTHOR,
} ENCLAVE_SEALING_IDENTITY_POLICY;

#define ENCLAVE_RUNTIME_POLICY_ALLOW_FULL_DEBUG  1
#define ENCLAVE_RUNTIME_POLICY_ALLOW_DYNAMIC_DEBUG  2

#define ENCLAVE_UNSEAL_FLAG_STALE_KEY 1

#pragma warning(push)
#pragma warning(disable:4214) // bitfield types other than int

#pragma pack(push)
#pragma pack(1)

typedef struct ENCLAVE_IDENTITY {
    UINT8 OwnerId[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UINT8 UniqueId[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UINT8 AuthorId[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UINT8 FamilyId[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UINT8 ImageId[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UINT32 EnclaveSvn;
    UINT32 SecureKernelSvn;
    UINT32 PlatformSvn;
    UINT32 Flags;
    UINT32 SigningLevel;
    UINT32 Reserved;
} ENCLAVE_IDENTITY;

#define ENCLAVE_FLAG_FULL_DEBUG_ENABLED         0x00000001
#define ENCLAVE_FLAG_DYNAMIC_DEBUG_ENABLED      0x00000002
#define ENCLAVE_FLAG_DYNAMIC_DEBUG_ACTIVE       0x00000004

#define VBS_ENCLAVE_REPORT_PKG_HEADER_VERSION_CURRENT (1)

#define VBS_ENCLAVE_REPORT_SIGNATURE_SCHEME_SHA256_RSA_PSS_SHA256 (1)

typedef struct VBS_ENCLAVE_REPORT_PKG_HEADER {
    UINT32 PackageSize;
    UINT32 Version;
    UINT32 SignatureScheme;
    UINT32 SignedStatementSize;
    UINT32 SignatureSize;
    UINT32 Reserved;
} VBS_ENCLAVE_REPORT_PKG_HEADER;

#define VBS_ENCLAVE_REPORT_VERSION_CURRENT (1)

#define ENCLAVE_REPORT_DATA_LENGTH      64

typedef struct VBS_ENCLAVE_REPORT {
    UINT32 ReportSize;
    UINT32 ReportVersion;
    UINT8 EnclaveData[ENCLAVE_REPORT_DATA_LENGTH];
    ENCLAVE_IDENTITY EnclaveIdentity;    
} VBS_ENCLAVE_REPORT;

typedef struct VBS_ENCLAVE_REPORT_VARDATA_HEADER {
    UINT32 DataType;
    UINT32 Size;
} VBS_ENCLAVE_REPORT_VARDATA_HEADER;

#define VBS_ENCLAVE_VARDATA_INVALID     0x00000000
#define VBS_ENCLAVE_VARDATA_MODULE      0x00000001

typedef struct VBS_ENCLAVE_REPORT_MODULE {
    VBS_ENCLAVE_REPORT_VARDATA_HEADER Header;
    UINT8 UniqueId[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UINT8 AuthorId[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UINT8 FamilyId[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UINT8 ImageId[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UINT32 Svn;
    WCHAR ModuleName[ANYSIZE_ARRAY];
} VBS_ENCLAVE_REPORT_MODULE;

#pragma pack(pop)
#pragma warning(pop)

typedef struct ENCLAVE_INFORMATION {
    ULONG EnclaveType;
    ULONG Reserved;
    PVOID BaseAddress;
    SIZE_T Size;
    ENCLAVE_IDENTITY Identity;
} ENCLAVE_INFORMATION;

#ifdef __cplusplus
}
#endif

#endif /* _NTENCLV_ */
