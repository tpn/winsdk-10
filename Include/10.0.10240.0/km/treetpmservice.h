/*++

Copyright (C) Microsoft. All rights reserved.

Module Name:

    TrEETPMService.h

Abstract:

    This module contains definitions used by the OS to invoke TPM operations via a Trusted Execution Environment.    

--*/

#pragma once

//
// TPM Service
// {36deaa79-c5dd-447c-95e6-b3859589291a}
//

DEFINE_GUID(GUID_TREE_TPM_SERVICE,
    0x36deaa79, 0xc5dd, 0x447c, 0x95, 0xe6, 0xb3, 0x85, 0x95, 0x89, 0x29, 0x1a);

//
// Defines the expected value of the TPM secure service major version.
//
#define TPM_TRUSTED_SERVICE_MAJOR_VERSION   (1)

//
// Defines the minimum expected value of the TPM secure service minor version.
//
#define TPM_TRUSTED_SERVICE_MINOR_VERSION_MIN   (0)

//
// Defines the minimum expected value of the TPM secure service minor version
// where PPI support is expected.
//
#define TPM_TRUSTED_SERVICE_MINOR_VERSION_PPI_SUPPORT_MIN   (1)

//
// TPM function code
//

//
// Generic function invocation, this is the function code to be passed
// to the miniport driver. The miniport driver is expected to look at the CRB
// structure to determine the operationt that is expected (execute, idle, ready)
// 

#define TPM_FUNCTION_INVOKE         0

//
// This function index is used to ask the TrEE to execute a PPI command.
//
// A TPM TrEE service which supports this function should report the minimum 
// service version of 1.1 to the OS in response to a IOCTL_TR_SERVICE_QUERY.
//
// The input buffer passed with this function contains an array combining the PPI command
// code with PPI command arguments (according to PPI spec ver 1.3).
// It has the following generic layout (all multi-byte types are packed in little Endian):
//
// Offset       Length          Description:
//  +0:             4           PPI Function Index as UINT32.
//
//  +4:             0 or 4      The first argument to the PPI Function (per spec).
//                              Typically will be either no argument at all or a 4 byte 
//                              long UINT32 value. We do not (yet) support the first parameter
//                              being a string (as required by the "Submit preferred user language" function).
//
//  +8:             0 or 4      The second argument to the PPI Function (per spec) if any.
//                              Typically will be either no argument at all or a 4 byte 
//                              long UINT32 value. The second argument can only be present
//                              when the first argument is present.
//
// The output buffer filled by TrEE in response should contain PPI returned values
// according to spec 1.3. Typical return values are shown below:
//
// Offset       Length          Description:
//  +0:          (varies)       The first value returned by the PPI function.
//                              This varies per spec. Most common instances include:
//                              - An ASCII zero terminated string (returned by "Get Physical Presence Interface Version" function).
//                                Max string length is 200 bytes (per ACPI spec).
//                              - An UINT32 4-byte-long interger (returned by many PPI functions).
//
//  +4:             0 or 4      The second value returned by the PPI function (per spec).
//                              Typically this will be a 4 byte-long UINT32 integer, and it will only be
//                              present when the first returned value is also an integer.
//
//  +8:             0 or 4      The third value returned by the PPI function (per spec).
//                              Typically this will be a 4 byte-long UINT32 integer, and it will only be
//                              present when both the first and the second returned values are also integers.

#define TPM_FUNCTION_PPI            1

//
// Input structure for TPM_FUNCTION_INVOKE
// Flags is reserved
// 

typedef struct _TPM_INVOKE_GENERIC_IN {
    ULONG64 Flags;
} TPM_INVOKE_GENERIC_IN, *PTPM_INVOKE_GENERIC_IN;

//
// Output structure for TPM_FUNCTION_INVOKE
// Status indicates the status if the command was dispatched successfully. This error is returned by the TrEE class extension
// or the miniport driver.
// 

typedef struct _TPM_INVOKE_GENERIC_OUT {
    NTSTATUS Status;    
} TPM_INVOKE_GENERIC_OUT, *PTPM_INVOKE_GENERIC_OUT;
