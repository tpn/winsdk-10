/*++ BUILD Version: 0011    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    arc_x.h

Abstract:

    This header file defines the ARC system firmware interface and the
    NT structures that are dependent on ARC types.

    This module may contain definitions that are exposed in kit headers
    for use by external developers.

Author:

    David N. Cutler (davec) 18-May-1991


Revision History:

    James E. Moe (jamoe) 23-Jan-2003
        Public/Private header split

--*/

#ifdef __cplusplus
extern "C" {
#endif

// begin_ntddk
#ifndef _ARC_DDK_
#define _ARC_DDK_

//
// Define configuration routine types.
//
// Configuration information.
//

typedef enum _CONFIGURATION_TYPE {
    ArcSystem,
    CentralProcessor,
    FloatingPointProcessor,
    PrimaryIcache,
    PrimaryDcache,
    SecondaryIcache,
    SecondaryDcache,
    SecondaryCache,
    EisaAdapter,
    TcAdapter,
    ScsiAdapter,
    DtiAdapter,
    MultiFunctionAdapter,
    DiskController,
    TapeController,
    CdromController,
    WormController,
    SerialController,
    NetworkController,
    DisplayController,
    ParallelController,
    PointerController,
    KeyboardController,
    AudioController,
    OtherController,
    DiskPeripheral,
    FloppyDiskPeripheral,
    TapePeripheral,
    ModemPeripheral,
    MonitorPeripheral,
    PrinterPeripheral,
    PointerPeripheral,
    KeyboardPeripheral,
    TerminalPeripheral,
    OtherPeripheral,
    LinePeripheral,
    NetworkPeripheral,
    SystemMemory,
    DockingInformation,
    RealModeIrqRoutingTable,
    RealModePCIEnumeration,
    MaximumType
} CONFIGURATION_TYPE, *PCONFIGURATION_TYPE;

#endif // _ARC_DDK_
// end_ntddk

#ifdef __cplusplus
}
#endif
