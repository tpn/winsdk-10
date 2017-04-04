/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

        USBDRIVR.H

Abstract:

   This file defined USB header files of interest to a driver.

Environment:

    Kernel mode

Revision History:

--*/

#ifndef   __USBDRIVR_H__
#define   __USBDRIVR_H__

#define USB_KERNEL_IOCTL
#include "usbioctl.h"
#undef USB_KERNEL_IOCTL

#include "usb.h"
#include "usbdlib.h"
#include "usbbusif.h"


#endif // __USBDRIVR_H__

