/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    NFCDriverDDI.h

Abstract:

    Header file for the NFC device driver interface

--*/

#ifndef __NFCDRIVERDDI_H__
#define __NFCDRIVERDDI_H__

#include <DevPropDef.h>
#include <NfpDev.h>
#include <NfcSEDev.h>
#include <NfcRadioDev.h>
#include <NciDef.h>

#ifdef DEFINE_DEVPROPKEY

#define NFC_CAPABILITY_PROXIMITY_SUPPORTED      0x1
#define NFC_CAPABILITY_SECUREELEMENT_SUPPORTED  0x2
#define NFC_CAPABILITY_SMARTCARD_SUPPORTED      0x4

//
// Property key for retrieving NFC capabilities of the device
//
DEFINE_DEVPROPKEY(PKEY_Device_NfcCapabilities, 0xc69ea577, 0xfd14, 0x4b60, 0x89, 0x90, 0x77, 0x40, 0x57, 0xf3, 0xec, 0xac, 1); // DEVPROP_TYPE_UINT32

#endif

#endif  // __NFCDRIVERDDI_H__
