//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft
// premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license
// agreement, you are not authorized to use this source code.
// For the terms of the license, please see the license agreement
// signed by you and Microsoft.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

#pragma once

// Callback signature
typedef VOID (CALLBACK *RCSE_PFN_CALLBACK)(PVOID context, ULONG count, _In_reads_(count) const LPWSTR *ppPhoneNumbers);

// Capability structure/enum
enum RCSeCapabilityState
{
    RCSeCapabilityState_Unknown,
    RCSeCapabilityState_Incapable,
    RCSeCapabilityState_Capable,
};

struct RCSeCapability
{
    LPCWSTR phoneNumber;
    RCSeCapabilityState state;
};

/// <summary>
/// Set the RCSe Capability status for one or more numbers.
/// </summary>
/// <param name="count">Count of items in pCapability.</param>
/// <param name="pCapability">
///   Pointer to an array of RCSeCapability structures containing the numbers 
///   and status for which to set RCSe capability status.
/// </param>
EXTERN_C HRESULT WINAPI RCSeSetCapability(
    _In_ ULONG count,
    _In_reads_ (count) RCSeCapability * pCapability);

/// <summary>
/// Set the callback for RCSe Capability detection.  A consumer calls this function
/// to set or clear the callback used to inform the consumer when mobile numbers needs to
/// be checked for RCSe capabilities.
/// </summary>
/// <param name="pCallbackFunction">Function callback.</param>
/// <param name="pContext">Context the caller will receive when the callback is invoked.</param>
/// <remarks>
/// Only a single callback is supported in a given process.
//  Set pfn to nullptr to clear current callback.
/// </remarks>
EXTERN_C HRESULT WINAPI RCSeSetCallback(
    _In_opt_ RCSE_PFN_CALLBACK pCallbackFunction,
    _In_opt_ PVOID pContext);

/// <summary>
/// Log a request sent to check the capability of a phone number.  A consumer calls this function
/// after sending a request to check the RCSe capability of a phone number received via the callback
/// set in RCSeSetCallback.
/// </summary>
EXTERN_C HRESULT WINAPI RCSeLogRequestForState();
