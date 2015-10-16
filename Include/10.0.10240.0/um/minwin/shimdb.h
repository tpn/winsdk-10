/*--

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    shimdb.h

Abstract:

    Header for the database file access functions used by the App Compat system.

Author:

    dmunsil 02/02/2000

Revision History:

Notes:

    This "database" is more of a tagged file, designed to mimic the structure of an XML
    file. An XML file can be converted into this packed data format easily, and all strings
    will by default be packed into a stringtable and referenced by a DWORD identifier, so files
    that contain a lot of common strings (like the XML used by the App Compat team) will not
    bloat.

--*/

#ifndef _SDBAPI_H_
#define _SDBAPI_H_

#include <strsafe.h>
#include <ntarch.h>
#include <sdbapi.h>
#include <compatpeb.h>

#endif //_SDBAPI_H_
