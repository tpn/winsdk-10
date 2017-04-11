
/*++
   Copyright (c) 2000  Microsoft Corporation

Module:

    Simple.h


    Common header file for extensions

--*/

#include <windows.h>

//
// Define KDEXT_64BIT to make all wdbgexts APIs recognize 64 bit addresses
// It is recommended for extensions to use 64 bit headers from wdbgexts so
// the extensions could support 64 bit targets.
//
#define KDEXT_64BIT
#include <wdbgexts.h>
