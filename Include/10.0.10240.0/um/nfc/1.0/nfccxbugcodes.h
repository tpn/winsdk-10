/*++

Copyright (c) Microsoft Corporation. All Rights Reserved

Module Name:

    NfcCxBugCodes.h

Abstract:

    Lists bugcheck subcode values for the NFC CX bugcheck code.
    
Environment:

    User-mode only

--*/

#pragma once

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#define NFC_CX_VERIFIER_BC  0xFFE

//
// Bugcheck Codes
//
typedef enum _NFC_CX_BC_CODE {
    NFC_CX_BC_POWER_REF_OVERFLOW = 0x00000001, // Power reference overflow condition detected
    NFC_CX_BC_POWER_REF_UNDERFLOW = 0x00000002, // Power reference underflow condition detected
    NFC_CX_BC_RF_QUEUE_OVERFLOW = 0x00000003, // RF serialization queue overflow
    NFC_CX_BC_RF_QUEUE_DRAIN_TIMEOUT = 0x00000004, // RF serialization queue drain timeout
    NFC_CX_BC_WATCHDOG_TIMEOUT = 0x00000005, // Watchdog timeout occured
    NFC_CX_BC_TML_INVALID_QUEUE_STATE = 0x00000006, // Invalid state detected in transport layer
    NFC_CX_BC_RF_EXECUTION_TIMEOUT = 0x00000007, // RF state machine has timed out. Usually indicates a deadlock condition
    NFC_CX_BC_RANGE_MAX = 0x0000FFFF // Max bug check range reserved for CX, client drivers can use codes outside this range
} NFC_CX_BC_CODE, *PNFC_CX_BC_CODE;

#endif // NTDDI_WINTHRESHOLD