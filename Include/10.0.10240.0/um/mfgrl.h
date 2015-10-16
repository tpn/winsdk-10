//*@@@+++@@@@******************************************************************
//
// Microsoft Windows Media
// Copyright (C) Microsoft Corporation. All rights reserved.
//
//*@@@---@@@@******************************************************************

#pragma once
// mfgrl.h

#ifndef __MFGRL_H_
#define __MFGRL_H_

//
// Values GRLReader will match against GRL header to verify it recognizes the format
//
#define GRL_HEADER_IDENTIFIER L"MSGRL"
#define GRL_FORMAT_MAJOR 1
#define GRL_FORMAT_MINOR 0

//
// Very very conservative max sizes (in bytes) for each section.
// This allows GRLReader to avoid over-allocating memory for corrupted / malicious data
//
#define GRL_CORE_SIZE_MAX 1048576
#define GRL_EXT_SIZE_MAX 1048576
#define GRL_RENEWAL_SIZE_MAX 1048576
#define GRL_CORE_SIG_SIZE_MAX 1048576
#define GRL_EXT_SIG_SIZE_MAX 1048576

#define GRL_PATH_KEY             L"System\\CurrentControlSet\\Services\\PEAuth"
#define GRL_PATH_KEY_KERNEL      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\PEAuth"
#define GRL_PATH_VALUE           L"DataPath"

///////////////////////////////////////////////////////////////////////////////
typedef struct _GRL_HEADER
{
    WCHAR       wszIdentifier[6];
    WORD        wFormatMajor;
    WORD        wFormatMinor;
    FILETIME    CreationTime;
    DWORD       dwSequenceNumber;
    DWORD       dwForceRebootVersion;
    DWORD       dwForceProcessRestartVersion;

    DWORD       cbRevocationSectionOffset;
    DWORD       cRevokedKernelBinaries;
    DWORD       cRevokedUserBinaries;
    DWORD       cRevokedCertificates;
    DWORD       cTrustedRoots;

    DWORD       cbExtensibleSectionOffset;
    DWORD       cExtensibleEntries;

    DWORD       cbRenewalSectionOffset;
    DWORD       cRevokedKernelBinaryRenewals;
    DWORD       cRevokedUserBinaryRenewals;
    DWORD       cRevokedCertificateRenewals;

    DWORD       cbSignatureCoreOffset;
    DWORD       cbSignatureExtOffset;
} GRL_HEADER;

///////////////////////////////////////////////////////////////////////////////
// This corresponds to RTL_MAX_HASH_LEN_V1
#define GRL_HASH_SIZE 20
#define GRL_EXTENSIBLE_ENTRY_SIZE 4096

///////////////////////////////////////////////////////////////////////////////
typedef struct _GRL_ENTRY
{
    BYTE rgbGRLEntry[GRL_HASH_SIZE];
} GRL_ENTRY;

///////////////////////////////////////////////////////////////////////////////
typedef struct _GRL_EXTENSIBLE_ENTRY
{
    GUID guidExtensionID;
    BYTE rgbExtensibleEntry[GRL_EXTENSIBLE_ENTRY_SIZE];
} GRL_EXTENSIBLE_ENTRY;

///////////////////////////////////////////////////////////////////////////////
typedef struct _GRL_RENEWAL_ENTRY
{
    GRL_ENTRY grlEntry;
    GUID     guidRenewalID;
} GRL_RENEWAL_ENTRY;

#pragma pack(push, 1)
///////////////////////////////////////////////////////////////////////////////
typedef struct _MF_SIGNATURE
{
    DWORD dwSignVer;
    DWORD cbSign;
    BYTE rgSign[1];
} MF_SIGNATURE;
#pragma pack(pop)


///////////////////////////////////////////////////////////////////////////////
// Other GRL constants
///////////////////////////////////////////////////////////////////////////////

// 
// The value of dwForceRebootVersion in the GRL header before the first component
// is added to the GRL that requires a reboot.
//
#define GRL_FORCEREBOOTVERSION_INITIAL             0

// 
// The value of dwForceProcessRestartVersion in the GRL header before the first component
// is added to the GRL that requires processes to be restarted.
//
#define GRL_FORCEPROCESSRESTARTVERSION_INITIAL     0


#endif  // __MFGRL_H_
