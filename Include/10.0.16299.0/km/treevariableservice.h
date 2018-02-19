/*++

Copyright (C) Microsoft. All rights reserved.

Module Name:

    TrEEVariableService.h

Abstract:

    This module contains definitions used by the I/O manager to query UEFI
    variables from a Trusted Execution Environment.

    These structures are modeled as closely as possible to follow the
    2_4_Errata_B.pdf document available at http://uefi.org/specifications.
    Please refer to Section 7.2 Variable Services.

    Refer to the UEFI spec for expected output dependent on all possible status
    codes. For example, a status return of EFI_BUFFER_TOO_SMALL will mean only
    DataSize will matter.

    VariableName does not have a defined maximum size as per the UEFI spec.
    Data's maximum size is implementation specific and is returned as part of
    the QueryVariableInfo method.

--*/

#pragma once

//
// UEFI Variables Service
// {699AA2F1-A42E-40DF-BABE-3AAAD2BB6A47}
//

DEFINE_GUID(GUID_EFI_VARIABLE_SERVICE,
    0x699aa2f1, 0xa42e, 0x40df, 0xba, 0xbe, 0x3a, 0xaa, 0xd2, 0xbb, 0x6a, 0x47);

//
// Returns the value of a variable.
//

#define EFI_VARIABLE_FUNCTION_GET_VARIABLE              0

//
// Enumerates the current variable names.
//

#define EFI_VARIABLE_FUNCTION_GET_NEXT_VARIABLE_NAME    1

//
// Sets the value of a variable.
//

#define EFI_VARIABLE_FUNCTION_SET_VARIABLE              2

//
// Returns information about the EFI variables.
//

#define EFI_VARIABLE_FUNCTION_QUERY_VARIABLE_INFO       3

//
// Variable Attributes
//

#define EFI_VARIABLE_NON_VOLATILE                           0x00000001
#define EFI_VARIABLE_BOOTSERVICE_ACCESS                     0x00000002
#define EFI_VARIABLE_RUNTIME_ACCESS                         0x00000004
#define EFI_VARIABLE_HARDWARE_ERROR_RECORD                  0x00000008
#define EFI_VARIABLE_AUTHENTICATED_WRITE_ACCESS             0x00000010
#define EFI_VARIABLE_TIME_BASED_AUTHENTICATED_WRITE_ACCESS  0x00000020
#define EFI_VARIABLE_APPEND_WRITE                           0x00000040

typedef ULONG_PTR EFI_VARIABLE_STATUS, *PEFI_VARIABLE_STATUS;

//
// GetVariable
//

typedef struct _EFI_GET_VARIABLE_IN {
    GUID VendorGuid;
    CHAR16 VariableName[ANYSIZE_ARRAY];
} EFI_GET_VARIABLE_IN, *PEFI_GET_VARIABLE_IN;

typedef struct _EFI_GET_VARIABLE_OUT {
    EFI_VARIABLE_STATUS EfiStatus;
    ULONG Attributes;
    SIZE_T DataSize;
    BYTE Data[ANYSIZE_ARRAY];
} EFI_GET_VARIABLE_OUT, *PEFI_GET_VARIABLE_OUT;

//
// GetNextVariableName
//

typedef struct _EFI_GET_NEXT_VARIABLE_NAME_IN {
    GUID VendorGuid;
    CHAR16 VariableName[ANYSIZE_ARRAY];
} EFI_GET_NEXT_VARIABLE_NAME_IN, *PEFI_GET_NEXT_VARIABLE_NAME_IN;

typedef struct _EFI_GET_NEXT_VARIABLE_NAME_OUT {
    EFI_VARIABLE_STATUS EfiStatus;
    GUID VendorGuid;
    ULONG NameLength;
    CHAR16 VariableName[ANYSIZE_ARRAY];
} EFI_GET_NEXT_VARIABLE_NAME_OUT, *PEFI_GET_NEXT_VARIABLE_NAME_OUT;

//
// SetVariable
//

typedef struct _EFI_SET_VARIABLE_IN {

    //
    // Byte offset from beginning of this struct where the variable name is located.
    //

    ULONG VariableNameOffset;
    GUID VendorGuid;
    ULONG Attributes;
    SIZE_T DataSize;

    //
    // Byte offset from beginning of this struct where the data is located.
    //

    ULONG DataOffset;

    //
    // Variable name (null-terminated string) and data will be present in the
    // buffer at their respective offsets from the beginning of this struct.
    //

    BYTE Buffer[ANYSIZE_ARRAY];
} EFI_SET_VARIABLE_IN, *PEFI_SET_VARIABLE_IN;

#define EFI_SET_VARIABLE_GET_VARIABLE_NAME(_SetVariable) \
            ((CHAR16*)(((ULONG_PTR)(_SetVariable)) + \
                       (_SetVariable)->VariableNameOffset))

#define EFI_SET_VARIABLE_GET_DATA(_SetVariable) \
            ((VOID*)(((ULONG_PTR)(_SetVariable)) + \
                     (_SetVariable)->DataOffset))

typedef struct _EFI_SET_VARIABLE_OUT {
    EFI_VARIABLE_STATUS EfiStatus;
} EFI_SET_VARIABLE_OUT, *PEFI_SET_VARIABLE_OUT;

//
// QueryVariableInfo
//

typedef struct _EFI_QUERY_VARIABLE_INFO_IN {
    ULONG Attributes;
} EFI_QUERY_VARIABLE_INFO_IN, *PEFI_QUERY_VARIABLE_INFO_IN;

typedef struct _EFI_QUERY_VARIABLE_INFO_OUT {
    EFI_VARIABLE_STATUS EfiStatus;
    ULONGLONG MaximumVariableStorageSize;
    ULONGLONG RemainingVariableStorageSize;
    ULONGLONG MaximumVariableSize;
} EFI_QUERY_VARIABLE_INFO_OUT, *PEFI_QUERY_VARIABLE_INFO_OUT;
