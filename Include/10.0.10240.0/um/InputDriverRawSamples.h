//----------------------------------------------------------------------------
//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//----------------------------------------------------------------------------

#pragma once


//
// Device name used by privileged user-mode test applications to issue
// read requests for raw keyboard data
//

#define KEYBOARD_TEST_DEVICE_NAME L"\\Device\\KeyboardRaw0"
#define KEYBOARD_TEST_DEVICE_LINK L"\\DosDevices\\KeyboardRaw0"


//
// Device name used by privileged user-mode test applications to issue
// read requests for raw touch data
//

#define TOUCH_TEST_DEVICE_NAME L"\\Device\\TouchRaw0"
#define TOUCH_TEST_DEVICE_LINK L"\\DosDevices\\TouchRaw0"

//
// IOCTL to enable/disable blocking production touch/keyboard reads so that only
// raw read requests are allowed.
//

#define IOCTL_BROADCAST_BLOCK_EVENT                                         \
    CTL_CODE(FILE_DEVICE_KEYBOARD, 175, METHOD_BUFFERED, FILE_ANY_ACCESS)


//
// IOCTL to enable/disable blocking production touch samples so that only vhid
// (i.e. touch injection) data is allowed.
//

#define IOCTL_SET_TEST_MODE                                                 \
    CTL_CODE(FILE_DEVICE_KEYBOARD, 176, METHOD_BUFFERED, FILE_ANY_ACCESS)
    
    

