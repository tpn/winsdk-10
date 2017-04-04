/*++

Copyright (C) Microsoft Corporation. All rights reserved.

Module Name:

    kusbfn.h

Abstract:

    This header defines all interfaces and macros that USB Function class
    drivers will require to implement class driver functionality.

Environment:

    Kernel mode

--*/
#pragma once

//
// Includes
//

#include <ntddk.h>
#pragma warning(disable:4201)  // disable nameless struct/union warnings
#include <wdf.h>
#pragma warning(default:4201)

#define NTSTRSAFE_LIB
#include <ntstrsafe.h>

// inlcude the usbfn base header
#include <initguid.h>
#include <usbfnbase.h>
#include <usbfnioctl.h>