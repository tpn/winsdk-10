/*++

Copyright (c) Microsoft Corporation.  All Rights Reserved

Module Name:

    ntddsysenv.h

Abstract:

    This is the include file that defines all constants and types for
    accessing the system variable device interface.

Revision History:

--*/

#ifndef _NTDDSYSENV_H_
#define _NTDDSYSENV_H_

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#if (NTDDI_VERSION >= NTDDI_WIN8)

#define SYSENV_DEVICE_NAME L"\\Device\\SysEnv"

//
// GUID for system variable device interface
// a942b3d9-ec95-4754-ae45-49c48735b893
//

DEFINE_GUID( GUID_SYSENV_INTERFACE ,
             0xa942b3d9, 0xec95, 0x4754, 0xae, 0x45, 0x49, 0xc4, 0x87, 0x35, 0xb8, 0x93);

#define IOCTL_SYSENV_GET_VARIABLE CTL_CODE(FILE_DEVICE_SYSENV, 1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SYSENV_SET_VARIABLE CTL_CODE(FILE_DEVICE_SYSENV, 2, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SYSENV_ENUM_VARIABLES CTL_CODE(FILE_DEVICE_SYSENV, 3, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SYSENV_QUERY_VARIABLE_INFO CTL_CODE(FILE_DEVICE_SYSENV, 4, METHOD_BUFFERED, FILE_ANY_ACCESS)

typedef struct _SYSENV_VARIABLE {
    GUID VendorGuid;
    ULONG VariableNameLength;
    WCHAR VariableName[ANYSIZE_ARRAY];
} SYSENV_VARIABLE, *PSYSENV_VARIABLE;

typedef struct _SYSENV_VALUE {
    ULONG Attributes;
    ULONG ValueLength;
    UCHAR ValueData[ANYSIZE_ARRAY];
} SYSENV_VALUE, *PSYSENV_VALUE;

#define VARIABLE_ATTRIBUTE_NON_VOLATILE 0x00000001

#define VARIABLE_INFORMATION_NAMES  1
#define VARIABLE_INFORMATION_VALUES 2

//
// N.B. These structures are identical in definition to the structures used
//      between the HAL and the kernel.
//

typedef struct _XVARIABLE_NAME_AND_VALUE {
    ULONG NextEntryOffset;
    ULONG ValueOffset;
    ULONG ValueLength;
    ULONG Attributes;
    GUID VendorGuid;
    WCHAR Name[ANYSIZE_ARRAY];
    //UCHAR Value[ANYSIZE_ARRAY];
} XVARIABLE_NAME_AND_VALUE, *PXVARIABLE_NAME_AND_VALUE;

typedef XVARIABLE_NAME_AND_VALUE SYSENV_VARIABLE_AND_VALUE, *PSYSENV_VARIABLE_AND_VALUE;

typedef struct _XVARIABLE_NAME {
    ULONG NextEntryOffset;
    GUID VendorGuid;
    WCHAR Name[ANYSIZE_ARRAY];
} XVARIABLE_NAME, *PXVARIABLE_NAME;

typedef XVARIABLE_NAME SYSENV_VARIABLE_NAME, *PSYSENV_VARIABLE_NAME;

//
// IOCTL_SYSENV_GET_VARIABLE
//
// Input Buffer:
//     Structure of type SYSENV_VARIABLE
//
// Output Buffer:
//     Structure of type SYSENV_VALUE
//

//
// IOCTL_SYSENV_SET_VARIABLE
//
// Input Buffer:
//     Structure of type SYSENV_VARIABLE_AND_VALUE
//
// Output Buffer:
//     None.
//

//
// IOCTL_SYSENV_ENUM_VARIABLES
//
// Input Buffer:
//     BOOLEAN indicating whether values should be included
//
// Output Buffer:
//
//     if values are have been requested, SYSENV_VARIABLES_AND_VALUE
//        structures will be returned.
//
//     Otherwise, SYSENV_VARIABLE_NAME structures will be returned.
//
//     The location of next entry is determined by the NextEntryOffset
//

//
// IOCTL_SYSENV_QUERY_VARIABLE_INFO
//
// Input Buffer:
//     ULONG Attributes
//
// Output Buffer:
//     Structure of type SYSENV_VARIABLE_INFO
//

typedef struct _SYSENV_VARIABLE_INFO {
    ULONGLONG MaximumVariableStorageSize;
    ULONGLONG RemainingVariableStorageSize;
    ULONGLONG MaximumVariableSize;
} SYSENV_VARIABLE_INFO, *PSYSENV_VARIABLE_INFO;

#endif

#endif // _NTDDSYSENV_H_
