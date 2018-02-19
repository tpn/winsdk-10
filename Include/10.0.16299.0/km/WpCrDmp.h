/*++

    Copyright (c) Microsoft Corporation. All rights reserved

Module Name:

    wpcrdmp.h

Abstract:

    This file defines the interface between Windows Phone crashdump driver and
    subsystem driver.


Environment:

    Kernel mode

--*/

#pragma once

#if (NTDDI_VERSION >= NTDDI_WIN8)

#ifdef __cplusplus
extern "C"
{
#endif



/******************************************************************************

Description:

    Defines the interface GUID so that subsystem drivers can find the Windows
    Phone Crashdump driver and acquire an I/O target for interface retrieval.

    {933B95C6-F9CF-4424-A9F8-F497F760AEE5}

**/

DEFINE_GUID (GUID_DEVINTERFACE_WPCRDMP,
    0x933b95c6, 0xf9cf, 0x4424, 0xa9, 0xf8, 0xf4, 0x97, 0xf7, 0x60, 0xae, 0xe5);



/******************************************************************************

Description:

    Registration and deregistration interface GUID of the Windows Phone Crash
    Dump driver.

    {8BCB35C2-CB20-44E4-9A1E-33A016856CBF}

**/
#define CURRENT_WPCRDMP_STANDARD_INTERFACE_VER 0x00000001

DEFINE_GUID(GUID_WPCRDMP_INTERFACE_STANDARD,
    0x8BCB35C2, 0xCB20, 0x44E4, 0x9A, 0x1E, 0x33, 0xA0, 0x16, 0x85, 0x6C, 0xBF);



/******************************************************************************

Description:

    Opaque context used to identify a registered subsystem.

**/
typedef ULONG SUBSYSTEM_CONTEXT;
typedef SUBSYSTEM_CONTEXT *PSUBSYSTEM_CONTEXT;



/******************************************************************************

Description:

    This structure contains the starting page address of a physical memory block
    belonging to the subsystem that is reporting memory usage. It is contained
    within a SUBSYSTEM_PHYSICAL_MEMORY_DESCRIPTOR block.

**/
typedef struct _SUBSYSTEM_PHYSICAL_MEMORY_RUN
{
    //
    // Physical address of the starting page in the contiguous block of memory
    //
    PHYSICAL_ADDRESS StartPageAddress;
    //
    // Number of pages in the contiguous block of memory
    //
    ULONG64 PageCount;
} SUBSYSTEM_PHYSICAL_MEMORY_RUN, *PSUBSYSTEM_PHYSICAL_MEMORY_RUN;



/******************************************************************************

Description:

    This structure encapsulates all the physical memory ranges (runs) of a given
    subsystem, allowing for an accurate picture of all fixed memory allocations
    owned by the subsystem that is captured in a crashdump.

    This is the header of a block of memory for NumberOfRuns count of
    SUBSYSTEM_PHYSICAL_MEMORY_RUN structures.

    This descriptor includes identification of all physical memory used, not
    just memory visible to the Windows Phone operating system, as this data will
    be used to identify memory for crashdump scenarios.

    .--------------------.
    | NumberOfRuns       |
    +--------------------+
    | TotalNumberOfPages |
    +--------------------+
    | StartPageAddress   | ]
    +--------------------+ |--> SUBSYSTEM_PHYSICAL_MEMORY_RUN[0]
    | PageCount          | ]
    +--------------------+
    | StartPageAddress   | ]
    +--------------------+ |--> SUBSYSTEM_PHYSICAL_MEMORY_RUN[1]
    | PageCount          | ]
    +--------------------+
            :
            :
    +--------------------+
    | StartPageAddress   | ]
    +--------------------+ |--> SUBSYSTEM_PHYSICAL_MEMORY_RUN[NumberOfRuns - 1]
    | PageCount          | ]
    '--------------------'

**/
typedef struct _SUBSYSTEM_PHYSICAL_MEMORY_DESCRIPTOR
{
    //
    // Total number of contiguous physical memory ranges represented by
    // SUBSYSTEM_PHYSICAL_MEMORY_RUN structures
    //
    ULONG64 NumberOfRuns;
    //
    // Total number of pages described within this descriptor block
    //
    ULONG64 TotalNumberOfPages;
    //
    // Physical memory ranges represented by SUBSYSTEM_PHYSICAL_MEMORY_RUN
    // structures
    //
    SUBSYSTEM_PHYSICAL_MEMORY_RUN Run[1];
} SUBSYSTEM_PHYSICAL_MEMORY_DESCRIPTOR, *PSUBSYSTEM_PHYSICAL_MEMORY_DESCRIPTOR;



/*******************************************************************************

Description:

    During registration of a subsystem driver, a function pointer of type
    PKBUGCHECK_NOTIFY_SUBSYSTEM_MEMLAYOUT is supplied by the Windows Phone
    Crash Dump driver. This notification function must be called by the
    subsystem driver whenever a memory layout change takes place.

Arguments:

    Context             Subsystem context as returned from the Windows Phone
                        Crash Dump driver during registeration.

    MemoryDescriptor    Pointer to SUBSYSTEM_PHYSICAL_MEMORY_DESCRIPTOR containing 
                        the memory runs identifying all physical memory in use by 
                        the subystem.

    SizeInBytes         The size of the MemoryDescriptor memory block; depending
                        upon the number of physical memory runs this will be equal
                        to:
                            sizeof(SUBSYSTEM_PHYSICAL_MEMORY_DESCRIPTOR) + 
                            (N - 1)*(sizeof(SUBSYSTEM_PHYSICAL_MEMORY_RUN)) 
                        where N is the total number of memory runs.


Return Value:

    STATUS_SUCCESS              No errors were encountered.
    STATUS_INVALID_PARAMETER    The function received an invalid input
                                parameter.
    STATUS_NO_MEMORY            Not enough memory is available to store supplied
                                memory layout.
    STATUS_UNSUCCESSFUL         An error was encountered while
                                processing the contents of
                                MemoryDescriptor.

**/
typedef
NTSTATUS
(*PKBUGCHECK_NOTIFY_SUBSYSTEM_MEMLAYOUT) (
    _In_ SUBSYSTEM_CONTEXT  Context,
    _In_ PSUBSYSTEM_PHYSICAL_MEMORY_DESCRIPTOR MemoryDescriptor,
    _In_ ULONG64 SizeInBytes
    );



/******************************************************************************

Description:

    Represents a failure digest containing a failure code, failure address, an
    ANSI string field for the subsystem vendor's use. The Buffer is managed
    (both allocation and deallocation) by the Windows Phone Crash Dump driver.

**/
typedef  struct _SUBSYSTEM_FAILURE_RECORD
{
    //
    // Failure code as identified by the subsystem driver
    //
    ULONG   FailureCode;
    //
    // Failure virtual address as identified by the subsystem driver
    //
    ULONG64 FailureAddress;
    //
    // Size of the supplied buffer
    //
    ULONG   SizeInBytes;
    //
    // ANSI string buffer for subsystem specific failure information, size
    // identified by SizeInBytes
    //
    CHAR    Buffer[1];
} SUBSYSTEM_FAILURE_RECORD, *PSUBSYSTEM_FAILURE_RECORD;



/*******************************************************************************

Description:

    During registration of a subsystem driver, a function pointer of type
    PKBUGCHECK_CALLBACK_FAILURERECORD is supplied to the Windows Phone
    Crash Dump driver. This callback function is called by the Windows Phone
    Crash Dump driver during bugcheck processing. The subsystem driver must
    fill the failure record with data as appropriate.

Arguments:

    Context     Subsystem context as returned from the Windows Phone Crash
                Dump driver during registration.

    Record      Pointer to memory buffer supplied by the Windows Phone crashdump
                kernel driver where SUBSYSTEM_FAILURE_RECORD structure data is
                to be populated by the subsystem driver.

Return Value:

    STATUS_SUCCESS              No errors were encountered.
    STATUS_INVALID_PARAMETER    The function received an invalid input
                                parameter.
    STATUS_UNSUCCESSFUL         Failure data was not available, or was unable
                                to be processed.

Note:

    Status return values relate to the functionality of the callback, not
    to the potential failure digest contents.  STATUS_SUCCESS would be returned
    and the Record buffer would be modified if failure data exists.
    STATUS_SUCCESS would be returned and the Record buffer would be unmodified
    if the subsystem has no failure data to report.

    Errors not covered in this section must use an appropriate NTSTATUS code
    from http://msdn.microsoft.com/en-us/library/cc704588(v=prot.10).aspx

    This function is subject to the bugcheck callback routine restrictions as
    described at http://msdn.microsoft.com/en-us/library/ff566401(v=VS.85).aspx

**/
typedef
NTSTATUS
(*PKBUGCHECK_CALLBACK_FAILURERECORD) (
    _In_ SUBSYSTEM_CONTEXT          Context,
    _In_ PSUBSYSTEM_FAILURE_RECORD  Record
    );



/*******************************************************************************

Description:

    Indicates that the Application Processor is entering a bugcheck state.  It
    is expected that the subsystems will halt processing; preserve as much
    state as possible.

Arguments:

    Context     Subsystem context as returned from the Windows Phone Crash
                Dump driver during registration.

Return Value:

    STATUS_SUCCESS              No errors were encountered.
    STATUS_INVALID_PARAMETER    The function received an invalid input
                                parameter.
    STATUS_UNSUCCESSFUL         Unknown error encountered halting the subsystem.

Note:

    Errors not covered in this section must use an appropriate NTSTATUS code
    from http://msdn.microsoft.com/en-us/library/cc704588(v=prot.10).aspx

    This function is subject to the bugcheck callback routine restrictions as
    described at http://msdn.microsoft.com/en-us/library/ff566401(v=VS.85).aspx

**/
typedef
NTSTATUS
(*PKBUGCHECK_CALLBACK_SUBSYSTEM_HALT) (
    _In_ SUBSYSTEM_CONTEXT Context
    );



/*******************************************************************************

Description:

    Indicates that the Windows Phone operating system is entering a state
    requiring memory to be accessible across the entire range of memory managed
    by the Windows memory manager. All memory protections should be removed.

Arguments:

    Context     Subsystem context as returned from the Windows Phone Crash
                Dump driver during registration.

    Protection  PAGE_NOACCESS enables read protection; PAGE_READONLY disables
                read protection.

    Reserved    Reserved for future use.


Return Value:

    STATUS_SUCCESS               No errors were encountered.
    STATUS_INVALID_PARAMETER     The function received an invalid input
                                 parameter.
    STATUS_UNSUCCESSFUL          Unknown error encountered changing memory
                                 protection.

Note:

    Errors not covered in this section must use an appropriate NTSTATUS code
    from http://msdn.microsoft.com/en-us/library/cc704588(v=prot.10).aspx

    This function is subject to the bugcheck callback routine restrictions as
    described at http://msdn.microsoft.com/en-us/library/ff566401(v=VS.85).aspx

**/
typedef
NTSTATUS
(*PKBUGCHECK_CALLBACK_SUBSYSTEM_CHANGE_MEMPROTECTION) (
    _In_ SUBSYSTEM_CONTEXT Context,
    _In_ ULONG  Protection,
    _In_ PVOID  Reserved
    );



/******************************************************************************

Description:

    The CRASHDUMP_CALLBACK_FUNCTBL contains the function pointers for the
    defined callbacks. SV subsystem driver implemented functions that are called
    from wpcrdmp.sys, are named callbacks.

**/
typedef struct _CRASHDUMP_CALLBACK_FUNCTBL {
    PKBUGCHECK_CALLBACK_FAILURERECORD                   pfnCallbackSubSystemFailureRecord;
    PKBUGCHECK_CALLBACK_SUBSYSTEM_HALT                  pfnCallbackSubSystemHalt;
    PKBUGCHECK_CALLBACK_SUBSYSTEM_CHANGE_MEMPROTECTION  pfnCallbackSubSystemMemoryProtection;
} CRASHDUMP_CALLBACK_FUNCTBL, *PCRASHDUMP_CALLBACK_FUNCTBL;



/******************************************************************************

Description:

    The CRASHDUMP_NOTIFY_FUNCTBL contains the function pointers for the defined
    notifications. SV subsystem driver calls notification functions that are
    implemented by Apollo Crash Dump driver.

**/
typedef struct _CRASHDUMP_NOTIFY_FUNCTBL {
    PKBUGCHECK_NOTIFY_SUBSYSTEM_MEMLAYOUT pfnNotifySubSystemMemoryLayout;
} CRASHDUMP_NOTIFY_FUNCTBL, *PCRASHDUMP_NOTIFY_FUNCTBL;




#define SUBSYSTEM_FRIENDLY_NAME_MAX_LENGTH     64
#define SUBSYSTEM_DRIVER_VERSION_MAX_LENGTH   128

/******************************************************************************

Description:

    This structure contains a summary of subsystem specific details.

**/
typedef struct _CRASHDUMP_SUBSYSTEM_REGISTRATION_DATA  {
    //
    // Version of the interface, for tracking the contents of the
    // WPCRDMP_CBTABLE and expected behavior
    //
    ULONG   InterfaceVersion;
    //
    // Unique identifier for the subsystem, used to differentiate subsystem
    // callbacks if the SV kernel driver supports multiple subsystems. The
    // predefined SubSystemId must remain unchanged to facilitate consistent
    // error reporting
    //
    GUID    SubSystemId;
    //
    // character field provided for the subsystem to store an ANSI string
    // name for ease of debugging
    //
    CHAR    SubSystemFriendlyName[SUBSYSTEM_FRIENDLY_NAME_MAX_LENGTH];
    //
    // character field provided for the subsystem to store version
    // information
    //
    CHAR    DriverVersion[SUBSYSTEM_DRIVER_VERSION_MAX_LENGTH];
} CRASHDUMP_SUBSYSTEM_REGISTRATION_DATA, *PCRASHDUMP_SUBSYSTEM_REGISTRATION_DATA;



/*******************************************************************************

Description:

    The subsystem driver uses the PKWPCRDMP_REGISTER function pointer that is
    exposed as part of the driver interface exported via
    GUID_WPCRDMP_INTERFACE_STANDARD and defined in the
    WPCRDMP_INTERFACE_STANDARD interface structure as pfnRegister.

    Subsystem drivers use pfnRegister to register with Windows Phone Crash Dump
    driver.

Arguments:

    RegistrationData        Pointer to a CRASHDUMP_SUBSYSTEM_REGISTRATION_DATA
                            structure that is filled out with the appropriate
                            subsystem information.

    CallbackFuncTable       Pointer to a CRASHDUMP_CALLBACK_FUNCTBL that will
                            supply the callback function pointers that are
                            applicable for the calling subsystem.

    NotifyFuncTable         Pointer to an empty CRASHDUMP_NOTIFY_FUNCTBL
                            structure that will receive notification function
                            pointers from the Windows Phone crashdump driver.

    Context                 Pointer to subsystem context that is returned
                            from the Windows Phone Crash Dump driver.


Return Value:

    STATUS_SUCCESS                  No errors were encountered.
    STATUS_INVALID_PARAMETER        The function received an invalid input
                                    parameter.
    STATUS_UNSUCCESSFUL             Unknown error encountered during
                                    registration.

Note:

    Errors not covered in this section must use an appropriate NTSTATUS code
    from http://msdn.microsoft.com/en-us/library/cc704588(v=prot.10).aspx

    As this function is not called during bugcheck operation, it is NOT subject
    to the bugcheck callback routine restrictions as described at
    http://msdn.microsoft.com/en-us/library/ff566401(v=VS.85).aspx

**/
typedef
NTSTATUS
(*PKWPCRDMP_REGISTER) (
    _In_ PCRASHDUMP_SUBSYSTEM_REGISTRATION_DATA RegistrationData,
    _In_ PCRASHDUMP_CALLBACK_FUNCTBL            CallbackFuncTable,
    _Out_ PCRASHDUMP_NOTIFY_FUNCTBL             NotifyFuncTable,
    _Out_ PSUBSYSTEM_CONTEXT                    Context
    );



/*******************************************************************************

Description:

    The subsystem driver uses the PKWPCRDMP_DEREGISTER function pointer that is
    exposed as part of the driver interface exported via
    GUID_WPCRDMP_INTERFACE_STANDARD and defined in the
    WPCRDMP_INTERFACE_STANDARD interface structure as pfnDeRegister.

    Subsystem drivers use pfnDeRegister to deregister from Windows Phone Crash
    Dump driver, stopping callbacks from being invoked.

Arguments:

    Context     Subsystem context that was returned from the Windows Phone
                Crash Dump driver during registration.

Return Value:

    STATUS_SUCCESS              No errors were encountered.
    STATUS_INVALID_PARAMETER    The function received an invalid input
                                parameter.
    STATUS_NO_SUCH_DEVICE       No registered device of the specified Context
                                was found.

Note:

    Errors not covered in this section must use an appropriate NTSTATUS code
    from http://msdn.microsoft.com/en-us/library/cc704588(v=prot.10).aspx

    As this function is not called during bugcheck operation, it is NOT subject
    to the bugcheck callback routine restrictions as described at
    http://msdn.microsoft.com/en-us/library/ff566401(v=VS.85).aspx

**/
typedef
NTSTATUS
(*PKWPCRDMP_DEREGISTER) (
    _In_ SUBSYSTEM_CONTEXT Context
    );



/******************************************************************************

Description:

    The driver interface structure that represents the interface exposed by GUID
    the registration and deregistration functions that are available to
    subsystems to enable Windows Phone specific crashdump support.

**/
typedef struct _WPCRDMP_INTERFACE_STANDARD {
    //
    // INTERFACE header as defined by WDK
    //
    INTERFACE InterfaceHeader;
    //
    // Pointer to registration function that will be used to enable the Windows
    // Phone Crashdump Driver governed functionality for the registering
    // subsystem
    //
    PKWPCRDMP_REGISTER pfnRegister;
    //
    // Pointer to the deregistration function that will be used to disable the
    // Windows Phone Crashdump driver governed functionality for the
    // deregistering subsystem
    //
    PKWPCRDMP_DEREGISTER pfnDeRegister;
} WPCRDMP_INTERFACE_STANDARD, *PWPCRDMP_INTERFACE_STANDARD;



#ifdef __cplusplus
}
#endif

#endif  // NTDDI_VERSION >= NTDDI_WIN8
