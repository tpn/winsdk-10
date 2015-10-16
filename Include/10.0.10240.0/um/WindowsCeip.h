/*++

Copyright (c) Microsoft Corporation.  All Rights Reserved

Module Name:

    WindowsCeip.h

Abstract:

    Public interfaces for the Windows Customer Experience Improvement Program.

--*/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#include <winapifamily.h>

#ifdef __cplusplus
extern "C" {
#endif

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#if (NTDDI_VERSION >= NTDDI_WIN8)

BOOL
WINAPI
CeipIsOptedIn();

#endif // NTDDI_VERSION >= NTDDI_WIN8
	
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#ifdef __cplusplus
}
#endif

