/*++

Copyright (c) 1997  Microsoft Corporation

Module Name:

    acpiioct.h

Abstract:

    This module handles all of the INTERNAL_DEVICE_CONTROLS requested to
    the ACPI driver

Author:

Environment:

    NT Kernel Model Driver only

--*/

#ifndef _ACPIIOCT_H_
#define _ACPIIOCT_H_

#if defined (_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#pragma warning(push)
#endif

#pragma warning(disable:4201) // named type definition in parentheses

//
// IRP_MJ_INTERNAL_DEVICE_CONTROL CODES
//
#define IOCTL_ACPI_ASYNC_EVAL_METHOD            CTL_CODE(FILE_DEVICE_ACPI, 0, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ACPI_EVAL_METHOD                  CTL_CODE(FILE_DEVICE_ACPI, 1, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ACPI_ACQUIRE_GLOBAL_LOCK          CTL_CODE(FILE_DEVICE_ACPI, 4, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ACPI_RELEASE_GLOBAL_LOCK          CTL_CODE(FILE_DEVICE_ACPI, 5, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#if (NTDDI_VERSION >= NTDDI_VISTA)
#define IOCTL_ACPI_EVAL_METHOD_EX               CTL_CODE(FILE_DEVICE_ACPI, 6, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ACPI_ASYNC_EVAL_METHOD_EX         CTL_CODE(FILE_DEVICE_ACPI, 7, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ACPI_ENUM_CHILDREN                CTL_CODE(FILE_DEVICE_ACPI, 8, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#endif

//
// Windows8+ only IOCTLs.
//

#if (NTDDI_VERSION >= NTDDI_WIN8)

#define IOCTL_ACPI_GET_DEVICE_INFORMATION       CTL_CODE(FILE_DEVICE_ACPI, 10, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


#endif

//
// Data structures used for IOCTL_ACPI_ASYNC_EVAL_METHOD and
// IOCTL_ACPI_EVAL_METHOD
//

//
// Possible Input buffer
//
typedef struct _ACPI_EVAL_INPUT_BUFFER {
    ULONG       Signature;
    union {
        UCHAR   MethodName[4];
        ULONG   MethodNameAsUlong;
    } DUMMYUNIONNAME;
} ACPI_EVAL_INPUT_BUFFER, *PACPI_EVAL_INPUT_BUFFER;

typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER {
    ULONG       Signature;
    union {
        UCHAR   MethodName[4];
        ULONG   MethodNameAsUlong;
    } DUMMYUNIONNAME;
    ULONG       IntegerArgument;
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER;

typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING {
    ULONG       Signature;
    union {
        UCHAR   MethodName[4];
        ULONG   MethodNameAsUlong;
    } DUMMYUNIONNAME;
    ULONG       StringLength;
    _Field_size_bytes_(StringLength)
    _Null_terminated_
    UCHAR       String[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING;

typedef struct _ACPI_METHOD_ARGUMENT {
    USHORT      Type;
    USHORT      DataLength;
    union {
        ULONG   Argument;
        _Field_size_bytes_(DataLength)
        UCHAR       Data[ANYSIZE_ARRAY];
    } DUMMYUNIONNAME;
} ACPI_METHOD_ARGUMENT;

typedef ACPI_METHOD_ARGUMENT UNALIGNED *PACPI_METHOD_ARGUMENT;

#define ACPI_METHOD_ARGUMENT_LENGTH( DataLength )                          \
    (FIELD_OFFSET(ACPI_METHOD_ARGUMENT, Data) + max(sizeof(ULONG), DataLength))

#define ACPI_METHOD_ARGUMENT_LENGTH_FROM_ARGUMENT( Argument )              \
    (ACPI_METHOD_ARGUMENT_LENGTH(((PACPI_METHOD_ARGUMENT)Argument)->DataLength))

#define ACPI_METHOD_NEXT_ARGUMENT( Argument )                              \
    (PACPI_METHOD_ARGUMENT) ( (PUCHAR) Argument +                          \
    ACPI_METHOD_ARGUMENT_LENGTH_FROM_ARGUMENT( Argument ) )


#define ACPI_METHOD_SET_ARGUMENT_INTEGER( MethodArgument, IntData )   \
    { MethodArgument->Type = ACPI_METHOD_ARGUMENT_INTEGER;            \
      MethodArgument->DataLength = sizeof(ULONG);                     \
      MethodArgument->Argument = IntData; }

#define ACPI_METHOD_SET_ARGUMENT_STRING( Argument, StrData )          \
    { Argument->Type = ACPI_METHOD_ARGUMENT_STRING;                   \
      Argument->DataLength = strlen((PUCHAR)StrData) + sizeof(UCHAR); \
      RtlCopyMemory(&Argument->Data[0],(PUCHAR)StrData,Argument->DataLength); }

#define ACPI_METHOD_SET_ARGUMENT_BUFFER( Argument, BuffData, BuffLength ) \
    { Argument->Type = ACPI_METHOD_ARGUMENT_BUFFER;                       \
      Argument->DataLength = BuffLength;                                  \
      RtlCopyMemory(&Argument->Data[0],(PUCHAR)BuffData,Argument->DataLength); }

typedef struct _ACPI_EVAL_INPUT_BUFFER_COMPLEX {
    ULONG                   Signature;
    union {
        UCHAR               MethodName[4];
        ULONG               MethodNameAsUlong;
    } DUMMYUNIONNAME;
    ULONG                   Size;
    ULONG                   ArgumentCount;
    ACPI_METHOD_ARGUMENT    Argument[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_COMPLEX, *PACPI_EVAL_INPUT_BUFFER_COMPLEX;

typedef struct _ACPI_EVAL_OUTPUT_BUFFER {
    ULONG                   Signature;
    ULONG                   Length;
    ULONG                   Count;
    _Field_size_bytes_(Length - FIELD_OFFSET(struct _ACPI_EVAL_OUTPUT_BUFFER, Argument))
    ACPI_METHOD_ARGUMENT    Argument[ANYSIZE_ARRAY];
}  ACPI_EVAL_OUTPUT_BUFFER;

typedef ACPI_EVAL_OUTPUT_BUFFER UNALIGNED *PACPI_EVAL_OUTPUT_BUFFER;

#define ACPI_EVAL_INPUT_BUFFER_SIGNATURE                    'BieA'
#define ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_SIGNATURE     'IieA'
#define ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_SIGNATURE      'SieA'
#define ACPI_EVAL_INPUT_BUFFER_COMPLEX_SIGNATURE            'CieA'
#define ACPI_EVAL_OUTPUT_BUFFER_SIGNATURE                   'BoeA'
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define ACPI_EVAL_INPUT_BUFFER_SIGNATURE_EX                 'AieA'
#define ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_SIGNATURE_EX  'DieA'
#define ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_SIGNATURE_EX   'EieA'
#define ACPI_EVAL_INPUT_BUFFER_COMPLEX_SIGNATURE_EX         'FieA'
#define ACPI_ENUM_CHILDREN_OUTPUT_BUFFER_SIGNATURE          'GieA'
#define ACPI_ENUM_CHILDREN_INPUT_BUFFER_SIGNATURE           'HieA'
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
#define IOCTL_ACPI_GET_DEVICE_INFORMATION_SIGNATURE         'JieA'
#endif

#define ACPI_METHOD_ARGUMENT_INTEGER                      0x0
#define ACPI_METHOD_ARGUMENT_STRING                       0x1
#define ACPI_METHOD_ARGUMENT_BUFFER                       0x2
#define ACPI_METHOD_ARGUMENT_PACKAGE                      0x3
#define ACPI_METHOD_ARGUMENT_PACKAGE_EX                   0x4

//
// Data structures used for IOCTL_ACPI_ACQUIRE_GLOBAL_LOCK
//                          IOCTL_ACPI_RELEASE_GLOBAL_LOCK
//
typedef struct _ACPI_MANIPULATE_GLOBAL_LOCK_BUFFER {
    ULONG       Signature;
    PVOID       LockObject;
} ACPI_MANIPULATE_GLOBAL_LOCK_BUFFER, *PACPI_MANIPULATE_GLOBAL_LOCK_BUFFER;

#define ACPI_ACQUIRE_GLOBAL_LOCK_SIGNATURE              'LgaA'
#define ACPI_RELEASE_GLOBAL_LOCK_SIGNATURE              'LgrA'

//
// Data structure used for IOCTL_ACPI_ASYNC_EVAL_METHOD_EX,
//                         IOCTL_ACPI_EVAL_METHOD_EX and
//                         IOCTL_ACPI_ENUM_CHILDREN
//

typedef struct _ACPI_EVAL_INPUT_BUFFER_EX {
    ULONG       Signature;
    _Null_terminated_
    CHAR        MethodName[256]; //NULL terminated name string
} ACPI_EVAL_INPUT_BUFFER_EX, *PACPI_EVAL_INPUT_BUFFER_EX;

typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_EX {
    ULONG       Signature;
    _Null_terminated_
    CHAR        MethodName[256];//NULL terminated name string
    ULONG64     IntegerArgument;
} ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_EX, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_EX;

typedef struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_EX {
    ULONG       Signature;
    CHAR        MethodName[256];//NULL terminated name string
    ULONG       StringLength;
    _Field_size_(StringLength)
    _Null_terminated_
    UCHAR       String[ANYSIZE_ARRAY];

} ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_EX, *PACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_EX;

typedef struct _ACPI_EVAL_INPUT_BUFFER_COMPLEX_EX {
    ULONG                   Signature;
    CHAR                    MethodName[256];//NULL terminated name string
    ULONG                   Size;
    ULONG                   ArgumentCount;
    _Field_size_(ArgumentCount)
    ACPI_METHOD_ARGUMENT    Argument[ANYSIZE_ARRAY];
} ACPI_EVAL_INPUT_BUFFER_COMPLEX_EX, *PACPI_EVAL_INPUT_BUFFER_COMPLEX_EX;

typedef struct _ACPI_ENUM_CHILDREN_INPUT_BUFFER {
    ULONG       Signature;
    ULONG       Flags;
    ULONG       NameLength;
    _Field_size_bytes_(NameLength)
    _Null_terminated_
    CHAR        Name[ANYSIZE_ARRAY];
} ACPI_ENUM_CHILDREN_INPUT_BUFFER, *PACPI_ENUM_CHILDREN_INPUT_BUFFER;

typedef struct _ACPI_ENUM_CHILD {
    ULONG       Flags;
    ULONG       NameLength; // length including null terminator
    _Field_size_bytes_(NameLength)
    _Null_terminated_
    CHAR        Name[ANYSIZE_ARRAY];
} ACPI_ENUM_CHILD;

typedef ACPI_ENUM_CHILD UNALIGNED *PACPI_ENUM_CHILD;

typedef struct _ACPI_ENUM_CHILDREN_OUTPUT_BUFFER {
    ULONG           Signature;
    ULONG           NumberOfChildren;
    ACPI_ENUM_CHILD Children[ANYSIZE_ARRAY];
} ACPI_ENUM_CHILDREN_OUTPUT_BUFFER;

typedef ACPI_ENUM_CHILDREN_OUTPUT_BUFFER UNALIGNED *PACPI_ENUM_CHILDREN_OUTPUT_BUFFER;

#define ACPI_ENUM_CHILD_LENGTH_FROM_CHILD( Child )              \
    ( (2* sizeof (ULONG)) + Child->NameLength )

#define ACPI_ENUM_CHILD_NEXT( Child )                           \
    (PACPI_ENUM_CHILD) ( (PUCHAR) Child +                       \
    ACPI_ENUM_CHILD_LENGTH_FROM_CHILD( Child ) )

typedef struct _ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER {
    ULONG Signature;
    USHORT Size;
    UCHAR Revision;
    UCHAR Reserved0;

    //
    // Vendor and device strings.
    //

    USHORT VendorIdStringOffset;
    USHORT VendorStringLength;
    USHORT DeviceIdStringOffset;

    //
    // Sub system and sub device strings.
    //

    USHORT SubSystemIdStringOffset;
    USHORT SubSystemStringLength;
    USHORT SubDeviceIdStringOffset;

    //
    // Instance string.
    //

    USHORT InstanceIdLength;
    USHORT InstanceIdOffset;

    //
    // Classcodes hardware revision and programming interface.
    //

    USHORT BaseClassCode;
    USHORT HardwareRevision;
    UCHAR ProgrammingInterface;
    UCHAR Reserved1;
    USHORT SubClassCode;

    //
    // Strings are appended after the structure. e.g.:
    //
    // BYTE[SubVendorStringLength+1]   SubSystemIdString;
    // BYTE[VendorIdStringOffset+1]    VendorIdString;
    // BYTE[InstanceIdOffset+1]        InstanceIdString;
    //

} ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER, *PACPI_DEVICE_INFORMATION_OUTPUT_BUFFER;

//
// valid flags for ACPI_ENUM_CHILDREN_INPUT_BUFFER.Flags
//
#define ENUM_CHILDREN_IMMEDIATE_ONLY        0x1
#define ENUM_CHILDREN_MULTILEVEL            0x2
#define ENUM_CHILDREN_NAME_IS_FILTER        0x4

//
// valid flags for ACPI_ENUM_CHILD
//
#define ACPI_OBJECT_HAS_CHILDREN            0x1


//
// INTERNAL-ONLY DEFINITION SECTION.
//


#if defined (_MSC_VER) && (_MSC_VER >= 1020)
#pragma warning(pop)
#endif

#endif

