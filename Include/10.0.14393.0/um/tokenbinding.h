//+-----------------------------------------------------------------------
//
// Microsoft Windows
//
// Copyright (C) Microsoft Corporation
//
// File:        tokenbinding.h
//
// Contents:    Common definitions for the token binding library
//
//------------------------------------------------------------------------

#ifndef __TOKENBINDING_H__
#define __TOKENBINDING_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include <winapifamily.h>

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

//
// Public APIs and structures
//

#if(_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

typedef enum TOKENBINDING_TYPE{
    TOKENBINDING_TYPE_PROVIDED = 0,
    TOKENBINDING_TYPE_REFERRED = 1,
}TOKENBINDING_TYPE;

typedef enum TOKENBINDING_HASH_ALGORITHM{
    TOKENBINDING_HASH_ALGORITHM_SHA256 = 4,
}TOKENBINDING_HASH_ALGORITHM;

typedef enum TOKENBINDING_SIGNATURE_ALGORITHM{
    TOKENBINDING_SIGNATURE_ALGORITHM_RSA = 1,
    TOKENBINDING_SIGNATURE_ALGORITHM_ECDSAP256 = 3,
}TOKENBINDING_SIGNATURE_ALGORITHM;

typedef enum TOKENBINDING_EXTENSION_FORMAT{
    TOKENBINDING_EXTENSION_FORMAT_UNDEFINED = 0,
}TOKENBINDING_EXTENSION_FORMAT;

typedef enum TOKENBINDING_KEY_PARAMETERS_TYPE{
    TOKENBINDING_KEY_PARAMETERS_TYPE_RSA_PKCS_SHA256 = 0,
    TOKENBINDING_KEY_PARAMETERS_TYPE_RSA_PSS_SHA256 = 1,
    TOKENBINDING_KEY_PARAMETERS_TYPE_ECDSA_SHA256 = 2,
}TOKENBINDING_KEY_PARAMETERS_TYPE;

#pragma pack(push, 1)
typedef struct TOKENBINDING_IDENTIFIER{
    BYTE bindingType;
    BYTE hashAlgorithm;
    BYTE signatureAlgorithm;
}TOKENBINDING_IDENTIFIER;
#pragma pack(pop)

typedef struct TOKENBINDING_RESULT_DATA{
    DWORD identifierSize;
    TOKENBINDING_IDENTIFIER *identifierData;
    TOKENBINDING_EXTENSION_FORMAT extensionFormat;
    DWORD extensionSize;
    PVOID extensionData;
}TOKENBINDING_RESULT_DATA;

typedef struct TOKENBINDING_RESULT_LIST{
    DWORD resultCount;
    TOKENBINDING_RESULT_DATA *resultData;
}TOKENBINDING_RESULT_LIST;

#define TOKENBINDING_RSA_2048_KEY_TYPE L"RSA_2048"
#define TOKENBINDING_ECDSA_P256_KEY_TYPE L"ECDSA_P256"

typedef struct TOKENBINDING_KEY_TYPES{
    DWORD keyCount;
    PCWSTR *key;
}TOKENBINDING_KEY_TYPES;

STDAPI_(SECURITY_STATUS)
TokenBindingGenerateBinding(
    _In_ PCWSTR keyType,
    _In_ PCWSTR targetURL,
    _In_ TOKENBINDING_TYPE bindingType,
    _In_reads_bytes_(tlsUniqueSize) const void *tlsUnique,
    _In_ DWORD tlsUniqueSize,
    _In_ TOKENBINDING_EXTENSION_FORMAT extensionFormat,
    _In_ const void *extensionData,
    _Outptr_result_buffer_(*tokenBindingSize) void **tokenBinding,
    _Out_ DWORD *tokenBindingSize,
    _Outptr_opt_ TOKENBINDING_RESULT_DATA **resultData
);

STDAPI_(SECURITY_STATUS)
TokenBindingGenerateMessage(
    _In_count_(tokenBindingsCount) const void *tokenBindings[],
    _In_count_(tokenBindingsCount) const DWORD tokenBindingsSize[],
    _In_ DWORD tokenBindingsCount,
    _Outptr_result_buffer_(*tokenBindingMessageSize) void **tokenBindingMessage,
    _Out_ DWORD *tokenBindingMessageSize
);

STDAPI_(SECURITY_STATUS)
TokenBindingVerifyMessage(
    _In_reads_bytes_(tokenBindingMessageSize) const void *tokenBindingMessage,
    _In_ DWORD tokenBindingMessageSize,
    _In_ PCWSTR keyType,
    _In_reads_bytes_(tlsUniqueSize) const void *tlsUnique,
    _In_ DWORD tlsUniqueSize,
    _Outptr_ TOKENBINDING_RESULT_LIST **resultList
);

STDAPI_(SECURITY_STATUS)
TokenBindingGetKeyTypesClient(
    _Outptr_ TOKENBINDING_KEY_TYPES **keyTypes
);

STDAPI_(SECURITY_STATUS)
TokenBindingGetKeyTypesServer(
    _Outptr_ TOKENBINDING_KEY_TYPES **keyTypes
);

STDAPI_(SECURITY_STATUS)
TokenBindingDeleteBinding(
    _In_ PCWSTR targetURL
);

STDAPI_(SECURITY_STATUS)
TokenBindingDeleteAllBindings();

STDAPI_(SECURITY_STATUS)
TokenBindingGenerateID(
    _In_ PCWSTR keyType,
    _In_reads_bytes_(publicKeySize) const void *publicKey,
    _In_ DWORD publicKeySize,
    _Outptr_ TOKENBINDING_RESULT_DATA **resultData
);

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif
