/*++

Copyright (C) Microsoft. All rights reserved.

Module Name:

    TrEERPMBService.h

Abstract:

    Defines constants and structs to use RPMB access support built in Windows
    Trusted Runtime class extension.

Environment:

    Kernel mode

--*/

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#include <sffdisk.h>

//
// RPMB OS Service
//
// This GUID is for TrEE miniports to send RPMB access requests to RPMB service
// provider, such as sd. Call TrSecureDeviceCallOSService function to send
// requests.
//
// {27447c21-bcc3-4d07-a05b-a3395bb4eee7}
//

//
// Defined in sffdisk.h
//

/*
DEFINE_GUID(GUID_DEVINTERFACE_EMMC_PARTITION_ACCESS_RPMB,
    0x27447c21L, 0xbcc3, 0x4d07, 0xa0, 0x5b, 0xa3, 0x39, 0x5b, 0xb4, 0xee, 0xe7);
*/

//
// Old built-in RPMB service GUID. To be removed when transition to
// GUID_DEVINTERFACE_EMMC_PARTITION_ACCESS_RPMB is complete.
//

DEFINE_GUID(GUID_TREE_RPMB_SERVICE,
    0x5272f96, 0xad1a, 0x4497, 0x97, 0xc2, 0x16, 0xb9, 0x65, 0xb1, 0x97, 0xb3);

#define TREE_RPMB_SFFDISK_PARTITION_ACCESS      0x10001
#define TREE_RPMB_AUTHENTICATED_WRITE_EX        0x10002
#define TREE_RPMB_AUTHENTICATED_WRITE_EX2       0x10003

typedef struct _TREE_RPMB_AUTHENTICATED_WRITE_EX_INPUT {
    ULONG WriteFrameCount;

    //
    // This field is used only when TREE_RPMB_AUTHENTICATED_WRITE_EX2 function
    // code is specified.
    //
    ULONG ReliableWriteSizeOverride;

    SFFDISK_DEVICE_RPMB_DATA_FRAME Data[1];
} TREE_RPMB_AUTHENTICATED_WRITE_EX_INPUT,
  *PTREE_RPMB_AUTHENTICATED_WRITE_EX_INPUT;

typedef struct _TREE_RPMB_AUTHENTICATED_WRITE_EX_OUTPUT {
    ULONG ResponseFrameCount;
    ULONG FramesWritten;
            
    SFFDISK_DEVICE_RPMB_DATA_FRAME Data[1];
} TREE_RPMB_AUTHENTICATED_WRITE_EX_OUTPUT,
  *PTREE_RPMB_AUTHENTICATED_WRITE_EX_OUTPUT;
