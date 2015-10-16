/*++

Copyright (c) Microsoft Corporation  All rights reserved.

File Name:

    winnls_ext_tzid.h

Abstract:

    Procedure declarations, constant definitions, and macros for
    getting and setting TZIDs.
    
    The declarations are taken from the Mango version of winnls.h.

--*/


#ifndef _WINNLS_EXTENDEDCOMPAT_TZID_
#define _WINNLS_EXTENDEDCOMPAT_TZID_

#include <winnls.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INVALID_TIMEZONE_ID
#define INVALID_TIMEZONE_ID 0xFFFFFFFF
#endif


/// <summary>
///     SetTimeZoneInformationByID 
///     Sets the current time-zone parameters using timezone ID.
/// <param name="nID">
///     [IN] The TZID to set.
///     The parameter should be one of valid timezone ID stored in registry.
///     Refer to the TZID values returned by either GetTimeZoneInformationID
///     or GetTimeZoneList.
/// </param>
/// <returns>
///     TRUE if set, FALSE if error. Call GetLastError() to get the 
///     error code.
/// </returns>
/// <remarks>
///     To be used internally by the Date + Time CPL, OOBE, auto time update
/// </remarks>
BOOL 
WINAPI 
SetTimeZoneInformationByID(__in const UINT nID);



/// <summary>
///     GetTimeZoneInformationID
///     Gets the TZID of the currently set time zone. 
/// </summary>
/// <returns>
///     The unique TZID of the currently set time zone. 
///     Refer to the TZID values returned by GetTimeZoneList.
/// </returns
UINT 
WINAPI 
GetTimeZoneInformationID(void);


#ifdef __cplusplus
}
#endif


#endif // _WINNLS_EXTENDEDCOMPAT_TZID_

