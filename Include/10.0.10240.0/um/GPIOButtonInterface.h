//----------------------------------------------------------------------------
//
// File: GPIOButtonInterface.h (Shared with Button Injection Tool)
//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//----------------------------------------------------------------------------


#pragma once


#include "GPIOButtonTypes.h"


//
// Function pointers we export for device drivers that can't give us both edges
// and for test code.
//
// 30ebfbf8-df5f-4d4d-9fc5-a26c7fd1df4a
//

DEFINE_GUID(GUID_GPIOBUTTONS_NOTIFY_INTERFACE, 0x30ebfbf8, 0xdf5f, 0x4d4d, 0x9f, 0xc5, 0xa2, 0x6c, 0x7f, 0xd1, 0xdf, 0x4a);


typedef
__drv_functionClass(GPIOBUTTONS_PRESS_NOTIFICATION)
NTSTATUS
GPIOBUTTONS_PRESS_NOTIFICATION(
    _In_ GPIOBUTTONS_BUTTON_TYPE buttonType,
    _In_ BOOLEAN buttonPressed);


typedef GPIOBUTTONS_PRESS_NOTIFICATION * PGPIOBUTTONS_PRESS_NOTIFICATION;


typedef struct _GPIOBUTTONS_INTERFACE_STANDARD
{
   USHORT                           Size;
   USHORT                           Version;
   PINTERFACE_REFERENCE             InterfaceReference;
   PINTERFACE_DEREFERENCE           InterfaceDereference;
   PGPIOBUTTONS_PRESS_NOTIFICATION  NotifyButton;
} GPIOBUTTONS_INTERFACE_STANDARD, *PGPIOBUTTONS_INTERFACE_STANDARD;
