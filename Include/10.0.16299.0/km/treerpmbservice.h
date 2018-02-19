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
#ifndef _NTDDSTOR_H_
#include <ntddstor.h>
#endif

//
// RPMB OS Service
//

//
// Old built-in RPMB service GUID. To be removed when transition to
// GUID_DEVINTERFACE_EMMC_PARTITION_ACCESS_RPMB is complete.
//

DEFINE_GUID(GUID_TREE_RPMB_SERVICE,
            0x5272f96, 0xad1a, 0x4497, 0x97, 0xc2, 0x16, 0xb9, 0x65, 0xb1, 0x97, 0xb3);

#define TREE_RPMB_SFFDISK_PARTITION_ACCESS      0x10001
#define TREE_RPMB_AUTHENTICATED_WRITE_EX        0x10002
#define TREE_RPMB_AUTHENTICATED_WRITE_EX2       0x10003
#define TREE_RPMB_UNIFIED_ACCESS                0x10004

typedef struct _TREE_RPMB_AUTHENTICATED_WRITE_EX_INPUT {
    
    ULONG WriteFrameCount;

    //
    // This field is used only when TREE_RPMB_AUTHENTICATED_WRITE_EX2 function
    // code is specified.
    //
    ULONG ReliableWriteSizeOverride;

    SFFDISK_DEVICE_RPMB_DATA_FRAME Data[1];

} TREE_RPMB_AUTHENTICATED_WRITE_EX_INPUT, *PTREE_RPMB_AUTHENTICATED_WRITE_EX_INPUT;

typedef struct _TREE_RPMB_AUTHENTICATED_WRITE_EX_OUTPUT {

    ULONG ResponseFrameCount;
    ULONG FramesWritten;
            
    SFFDISK_DEVICE_RPMB_DATA_FRAME Data[1];

} TREE_RPMB_AUTHENTICATED_WRITE_EX_OUTPUT, *PTREE_RPMB_AUTHENTICATED_WRITE_EX_OUTPUT;

typedef struct _TREE_RPMB_COMMAND_INPUT {
    
    //
    // The count of frames to be written to the RPMB 
    //
    ULONG InputFrameCount;
    
    //
    // The number of frames the TrEE driver should align the payload to for each 
    // transaction to the storage driver. For UFS, this value will be between 1 and
    // (MaxReliableWriteSizeInBytes / 256)
    //
    ULONG FramesPerTransaction;
    
    //
    // The variable sized frame data to be sent to the RPMB
    // The size should be InputFrameCount * sizeof(RPMB_DATA_FRAME)
    //
    STORAGE_RPMB_DATA_FRAME Data[1];

} TREE_RPMB_COMMAND_INPUT, *PTREE_RPMB_COMMAND_INPUT;

typedef struct _TREE_RPMB_COMMAND_OUTPUT {
    
    //
    // The count of frames to be received from the RPMB
    //
    ULONG OutputFrameCount;
    
    //
    // Only valid for Authenticated Write and Authenticated Device Config Write
    //
    ULONG FramesWritten;
    
    //
    // The variable sized frame data to be received from the RPMB
    // The size should be OutputFrameCount * sizeof(RPMB_DATA_FRAME)
    //
    STORAGE_RPMB_DATA_FRAME Data[1];

} TREE_RPMB_COMMAND_OUTPUT, *PTREE_RPMB_COMMAND_OUTPUT;
