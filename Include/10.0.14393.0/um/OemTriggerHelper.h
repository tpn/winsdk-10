//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

#pragma once

#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <windows.h>

#include <SebPublish.h>
#include <wnfnamesp.h>

NTSTATUS RaiseDeviceManufacturerNotificationTrigger(
    __in_z LPCWSTR pszTriggerQualifier
    );

NTSTATUS RaiseDeviceManufacturerNotificationTriggerEx(
    __in_z LPCWSTR pszTriggerQualifier,
    __in DWORD dwTimeout
    );
