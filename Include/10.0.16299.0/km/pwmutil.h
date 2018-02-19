/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    pwmutil.h

Abstract:

    This module contains the Pulse Width Modulator (PWM) helper routines for
    use by kernel-mode drivers.

Environment:

    Kernel-mode only.

--*/

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (NTDDI_VERSION >= NTDDI_WIN10)

#ifdef _MSC_VER
#pragma once
#endif //_MSC_VER

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

FORCEINLINE
NTSTATUS
PwmParsePinPath (
    _In_ UNICODE_STRING* PinPath,
    _Out_opt_ ULONG* PinNumber
    )
/*++

Routine Description: 

    This routine parses a pin path under the PWM controller namespace to validate
    its format and extract the pin number where the pin path string should be in
    the form: "\<PinNumber>".

Arguments: 

    PinPath [in] - Supplies a pointer to Unicode string. 

    PinNumber [out, optional] - Supplies a pointer to variable which receives pin number.

Return Value:

    STATUS_SUCCESS
        Extracted pin path successfully from supplied pin path.

    STATUS_INVALID_PARAMETER
        The supplied pin path pointer is invalid or its Unicode string is
        invalid.

    STATUS_NO_SUCH_FILE
        The supplied pin path does not constitute a valid pin path. The pin path
        should be in the form: "\<PinNumber>".

--*/
{
    NTSTATUS status;
    ULONG pinNumber;
    ULONG nChars;
    const WCHAR* currentChar;
    const WCHAR* strEnd;

    if (PinPath == NULL) {
        return STATUS_INVALID_PARAMETER;
    }

    status = RtlUnicodeStringValidate(PinPath);
    if (!NT_SUCCESS(status)) {
        return status;
    }

    nChars = PinPath->Length / sizeof(WCHAR);

    //
    // Fast fail if the buffer isn't big enough to hold at least one backslash
    // and a single decimal digit, or if the first character isn't a backslash.
    //
    if ((nChars < 2) || (*PinPath->Buffer != L'\\')) {
        return STATUS_NO_SUCH_FILE;
    }

    currentChar = PinPath->Buffer + 1;
    strEnd = PinPath->Buffer + nChars;
    pinNumber = 0;

    while (currentChar < strEnd) {
        if ((*currentChar < L'0') || (*currentChar > L'9')) {
            return STATUS_NO_SUCH_FILE;
        }

        pinNumber *= 10;
        pinNumber += (*currentChar - L'0');
        ++currentChar;
    }

    if (PinNumber != NULL) {
        *PinNumber = pinNumber;
    }

    return STATUS_SUCCESS;
}

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif // NTDDI_VERSION >= NTDDI_WIN10

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
