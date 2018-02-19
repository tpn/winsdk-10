/*++

Copyright (c) Microsoft Corporation

Module Name:

    afunix.h

Abstract:

    This file contains the definitions for the AF_UNIX socket address family
    that can be used by both user-mode and kernel mode modules.

    BETA: The definitions in this header are subject to change.

--*/

#pragma once

typedef struct _SOCKADDR_UN
{
     ADDRESS_FAMILY Family;
     wchar_t Path[63];
} SOCKADDR_UN, *PSOCKADDR_UN;