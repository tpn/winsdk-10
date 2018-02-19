/*++ 

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ntddsfio.h

Abstract:

    This is the include file that defines all common constants, ioctls and types
    for Scheduled File I/O (SFIO).

Revision History:

--*/
#if (NTDDI_VERSION >= NTDDI_VISTA)

#pragma once

typedef enum _IO_ACCESS_TYPE {

    //
    // Indicates  that the  Io will
    // be comprised solely of reads
    //
    ReadAccess,

    //
    // Indicates  that  the  Io will
    // be comprised solely of writes
    //
    WriteAccess,

    //
    // Indicates that the Io will be
    // comprised of reads and writes
    //
    ModifyAccess

} IO_ACCESS_TYPE;

typedef enum _IO_ACCESS_MODE {

    //
    // Indicates  that the  Io will be
    // sent down in a sequential order
    //
    SequentialAccess,

    //
    // Indicates  that the  Io might
    // not be in a predictable order
    //
    RandomAccess
    
} IO_ACCESS_MODE;

#endif // (NTDDI_VERSION >= NTDDI_VISTA)
