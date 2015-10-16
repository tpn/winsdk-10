/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ndis.h

Abstract:

    This module defines the structures, macros, and functions available
    to NDIS drivers.

Notes:

    Before including this header, you must define one or more macros.  In all
    examples, "630" can be any version number (as explained later).

    1.  If you are compiling a kernel-mode miniport driver, define:
            #define NDIS_MINIPORT_DRIVER 1
            #define NDIS630_MINIPORT 1
        Additionally, if you are compiling a WDM or WDF (i.e., KMDF) driver,
        you must include wdm.h/wdf.h before including ndis.h, and also define:
            #define NDIS_WDM

    2.  If you are compiling any other kernel-mode code (including protocol
        drivers, lightweight filters, or generic code not using the NDIS
        driver model), define:
            #define NDIS630

    3.  An IM driver, because it is both a protocol and a miniport, should
        follow both 1. and 2. above.

    4.  If you would like to use NDIS definitions from user-mode, do not
        include this ndis.h header.  Instead, include ntddndis.h from the SDK.
        Before including it, include windows.h, and define:
            #define UM_NDIS630

    Definitions with NDIS version numbers may use any of the following:

        Version     First available in
        ------------------------------------------------------------------
        640         Windows 8.1 / Windows Server 2012 R2
        630         Windows 8 / Windows Server 2012
        620         Windows 7 / Windows Server 2008 R2
        61          Windows Vista SP1 / Windows Server 2008 RTM
        60          Windows Vista RTM
        52          Windows Server 2003 R2 / Windows Server 2003 + SNP
        51          Windows XP / Windows Server 2003
        50          Windows 2000
        40          Windows 95

    Code should define only the versions it explicitly supports at runtime.  In
    most cases, this is exactly one version (e.g., your driver only defines
    NDIS630 and no other versions).  But if you have a driver that can register
    either a 6.0 or a 6.20 protocol at runtime based on the results of
    NdisGetVersion(), then you may define support for multiple macros (e.g.,
    define both NDIS60 and NDIS630).

    Your code may inspect the value of the following macros, but you must not
    attempt to define them directly:


        NDIS_MINIPORT_MAJOR_VERSION     For miniports, contains the major
                                        version of the NDIS contract (example:
                                        6 for a 6.20 miniport)

        NDIS_MINIPORT_MINOR_VERSION     For miniports, contains the major
                                        version of the NDIS contract (example:
                                        20 for a 6.20 miniport)

        NDIS_PROTOCOL_MAJOR_VERSION     For protocols or lightweight filters,
        NDIS_FILTER_MAJOR_VERSION       contains the major version of the NDIS
                                        contract (example: 6 for a 6.20 LWF)

        NDIS_PROTOCOL_MINOR_VERSION     For protocols or lightweight filters,
        NDIS_FILTER_MINOR_VERSION       contains the minor version of the NDIS
                                        contract (example: 20 for a 6.20 LWF)

        NDIS_SUPPORT_NDIS6              For all kernel-mode code, this is
        NDIS_SUPPORT_NDIS61             defined if the driver supports that
        NDIS_SUPPORT_NDIS620            version of NDIS.  The versioning is
        NDIS_SUPPORT_NDIS630            cumulative, so for example, a 6.20
                                        miniport will see all of
                                        NDIS_SUPPORT_NDIS620,
                                        NDIS_SUPPORT_NDIS61, and
                                        NDIS_SUPPORT_NDIS6.

    Do not define BINARY_COMPATIBLE, USE_KLOCKS, or WIRELESS_WAN; these are
    deprecated.  Do not define NDIS_WRAPPER; it is reserved for use by NDIS.

--*/

#if !defined(_NDIS_)
#define _NDIS_

#if !defined(NDIS_WDM)
#define NDIS_WDM        0
#endif


//
// Set BINARY_COMPATIBLE to 0 if it is not defined. Error out if user tries
// to build a Win9x binary compatible driver using this DDK.
//

#if !defined(BINARY_COMPATIBLE)
#define BINARY_COMPATIBLE 0
#else
#if (BINARY_COMPATIBLE != 0)
#error Can not build Win9x binary compatible drivers. Please remove the definition for BINARY_COMPATIBLE or set it to 0
#endif
#endif


//
// BEGIN INTERNAL DEFINITIONS
//


#include <ntddk.h>

