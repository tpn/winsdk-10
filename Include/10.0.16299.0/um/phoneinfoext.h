//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
#pragma once

#include <windows.h>

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

//
// Enum describing the information to be queried with QueryPhoneInformation
//

typedef enum _PHONE_INFORMATION_KEY
{
    PhoneManufacturer = 0,  // Retrieves the device manufacturer's name
    PhoneROMVersion,        // Retrieves the ROM version 
    PhoneMobileOperatorName, // Retrieves the mobile operator's name
    PhoneMobileOperatorDisplayName, // Retrieves the mobile operator "friendly" name
    PhoneModelName,         // Retrieves the mobile operator's device model name
    PhoneManufacturerModelName, // Retrieves the original equipment manufacturer's device model name
    PhoneHardwareRevision,  // Retrieves the device hardware revision
    PhoneSOCVersion,        // Retrieves the system-on-chip version
    PhoneFirmwareRevision,  // Retrieves the device's firmware revision
    PhoneRadioHardwareRevision, // Retrieves the radio hardware revision
    PhoneRadioSoftwareRevision, // Retrieves the radio software revision
    PhoneBootLoaderVersion, // Retrieves the bootloader version
    PhoneSupportPhoneNumber, // Retrieves the mobile operator's support phone numbers
    PhoneSupportLink,       // Retrieves the mobile operator's support URL
    PhoneOEMSupportLink,    // Retrieves the original equipment manufacturer's support URL
    PhoneFriendlyName,      // Retrieves the user viewable, friendly name of the device
    RoamingSupportPhoneNumber, // Retrieves the mobile operator's roaming support phone numbers
    PhoneManufacturerDisplayName, // Retrieves the device manufacturer's or ODMs name, falls back to PhoneManufacturer if the value is not found
    MaxPhoneInformationKey  // Must always be last
	
} PHONE_INFORMATION_KEY;

/*++

Routine Description:

    Retrieve device specific information in string format.

Parameters:

    key - A PHONE_INFORMATION_KEY value describing the type of information to
    be retrieved.

    pszValue - An output string buffer to receive the requested information.
    May be set to NULL if pcchLength is non-NULL.

    cchValue - The size of the output pszValue buffer in characters. Set to 0
    when pszValue is set to NULL.

    pcchLength - An output value to receive the number of characters in the
    phone information string being requested. May be set to NULL if pszValue
    is non-NULL.

Return Values:

    BOOL value indicating the result of the operation. TRUE on success, FALSE
    on failure. Call GetLastError to retrieve extended error information.

Notes:

 --*/

BOOL WINAPI
QueryPhoneInformation (
    PHONE_INFORMATION_KEY key,
    _Out_writes_opt_z_(cchValue) PWSTR pszValue,
    SIZE_T cchValue,
    _Out_opt_ SIZE_T* pcchLength
    );

/*++

Routine Description:

    Retrieve an OSVERSIONINFOW or OSVERSIONINFOEXW structure populated with
    phone specific version information.

Parameters:

    lpVersionInformation - An output structure to receive version information
    about the phone. Must be either a pointer to an OSVERSIONINFOW or 
    OSVERSIONINFOEXW structure. Caller must initialize the dwOSVersionInfoSize
    field to either sizeof(OSVERSIONINFOW) or sizeof(OSVERSIONINFOEXW) prior to
    calling the API.

Return Values:

    BOOL value indicating the result of the operation. TRUE on success, FALSE
    on failure. Call GetLastError to retrieve extended error information.

Notes:

 --*/
BOOL WINAPI
GetPhoneVersion(
    _Inout_ LPOSVERSIONINFOW lpVersionInformation
    );		

/*++

Routine Description:

    Query display's diagonal with the lookup table which contains the diagonals of Apollo devices.

Parameters:

    pdblDiagonal - queried device's diagonal in inch.

Return Values:

    BOOL value indicating the result of the operation. TRUE on success, FALSE
    on failure. Call GetLastError to retrieve extended error information.

Notes:

 --*/
BOOL 
WINAPI LookupDisplayDiagonal(
    _Out_ double* pdblDiagonal
    );

#ifdef __cplusplus
}
#endif // __cplusplus
