/*++
Copyright (c) Microsoft Corporation.  All rights reserved.

File Name:

    WPSecurityPolicyState.h

Abstract: 

    Definitions for GetDeviceSecurityPolicyState kernel API for Windows Phone.

Environment:

    Kernel Mode Only, Windows Phone Blue

--*/

#pragma once


#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
    //
    //  the device is not secure boot capable
    //
    DEVICE_SECURITY_POLICY_STATE_SECUREBOOT_NOT_CAPABLE,

    //
    //  the device is secure boot off
    //
    DEVICE_SECURITY_POLICY_STATE_SECUREBOOT_OFF,

    //
    //  the device has generic SBCP debug policy
    //
    DEVICE_SECURITY_POLICY_STATE_DEBUG,

    //
    //  the device is a retail device with retail-unlocked SBCP policy.
    //  this is a per-device/device-bound SBCP debug Policy
    //
    DEVICE_SECURITY_POLICY_STATE_RETAIL_UNLOCKED,

    //
    //  the device has retail SBCP policy
    //
    DEVICE_SECURITY_POLICY_STATE_RETAIL,

    //
    //  the device has invalid secure boot policy state
    //
    DEVICE_SECURITY_POLICY_STATE_INVALID
} DEVICE_SECURITY_POLICY_STATE, *PDEVICE_SECURITY_POLICY_STATE;


/// <summary>
///     Get the Security Policy State of a Windows Phone device
/// </summary>
/// <param name="DeviceSecurityPolicyState">
///     DeviceSecurityPolicyState - When GetDeviceSecurityPolicyState returns successfully, 
///                                 *DeviceSecurityPolicyState indicates the device's security
///                                 policy state.
/// </param>
/// <returns>
///     Standard NTSTATUS Code.
/// </returns>

_IRQL_requires_max_(PASSIVE_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
NTSTATUS
GetDeviceSecurityPolicyState(_Inout_ DEVICE_SECURITY_POLICY_STATE* DeviceSecurityPolicyState);

#ifdef __cplusplus
}
#endif
