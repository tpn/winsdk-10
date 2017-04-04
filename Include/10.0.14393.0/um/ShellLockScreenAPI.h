//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

#pragma once

#include "ShellLockScreenAPITypes.h"

/// <summary>
///     Returns a snapshot of all the information displayed in the lock screen.
/// </summary>
/// <param name="pSnapshot">
///    [in/out] Pointer to a preallocated buffer to receive the snapshot.
///             The caller must set the "size" member to the size of the struct. Otherwise
///             the API will return an error.
/// </param>
HRESULT Shell_LockScreen_GetNotificationsSnapshot(
    _Inout_ LPDEVICE_LOCK_SCREEN_SNAPSHOT pSnapshot);
