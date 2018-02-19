/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    psci.h

Abstract:

    Structures and definitions for ARM PSCI support.

--*/

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

typedef union _PSCI_CPU_SUSPEND_POWER_STATE {
    ULONG AsUlong;
    struct {

        //
        // Platform-specific power state ID
        //

        ULONG StateId : 16;      // bits [0:15]

        //
        // Use PSCI_CPU_SUSPEND_POWER_STATE_TYPE_STANDBY
        // or PSCI_CPU_SUSPEND_POWER_STATE_TYPE_POWER_DOWN
        //

        ULONG StateType : 1;     // bit  [16]

        //
        // Must be zero.
        //

        ULONG Reserved0 : 7;     // bits [17:23]

        //
        // Determines level of affinity to be suspended - core, cluster,
        // or group of clusters.
        //

        ULONG AffinityLevel : 2; // bits [24:25]

        //
        // Must be zero.
        //

        ULONG Reserved1 : 6;     // bits [26:31]
    };
} PSCI_CPU_SUSPEND_POWER_STATE, *PPSCI_CPU_SUSPEND_POWER_STATE;

typedef union _PSCI_CPU_SUSPEND_POWER_STATE_EXTENDED {
    ULONG AsUlong;
    struct {

        //
        // Platform-specific power state ID, extended.
        //

        ULONG StateId : 28;  // bits [0:27]

        //
        // Must be zero.
        //

        ULONG Reserved0 : 2; // bits  [28:29]

        //
        // Use PSCI_CPU_SUSPEND_POWER_STATE_TYPE_STANDBY
        // or PSCI_CPU_SUSPEND_POWER_STATE_TYPE_POWER_DOWN
        //

        ULONG StateType : 1; // bit [30]

        //
        // Must be zero.
        //

        ULONG Reserved1 : 1; // bit [31]
    };
} PSCI_CPU_SUSPEND_POWER_STATE_EXTENDED, *PPSCI_CPU_SUSPEND_POWER_STATE_EXTENDED;

#define PSCI_CPU_SUSPEND_POWER_STATE_TYPE_STANDBY    0
#define PSCI_CPU_SUSPEND_POWER_STATE_TYPE_POWER_DOWN 1

#endif
