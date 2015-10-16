/*++

Copyright (c) 2007 Microsoft Corporation

Module Name:

    umstls.h

Abstract:

    TLS slot definitions for user mode scheduling.

Author:

    08-Oct-2007  Ajith Jayamohan (ajithj)

Revision History:    

--*/
#if _MSC_VER > 1000
#pragma once
#endif

#ifndef _UMSTLS_INCLUDE
#define _UMSTLS_INCLUDE

//
// Thread Local Storage (TLS) support.  TLS slots are statically allocated.
//
#define UMS_TLS_THREAD_CONTEXT                      4    // ums thread context data store
#define ULS_TLS_NUMBER_OF_RESERVED_SLOTS    1    // number of slots reserved in TLS for UMS

//
// VOID UmsTlsSetValue(DWORD dwIndex, LPVOID lpTlsValue);
//

#define UmsTlsSetValue(dwIndex, lpTlsValue)   \
    NtCurrentTeb()->TlsSlots[dwIndex] = lpTlsValue;

//
// LPVOID UmsTlsGetValue(DWORD dwIndex);
//

#define UmsTlsGetValue(dwIndex)               \
    (NtCurrentTeb()->TlsSlots[dwIndex])

#endif // _UMSTLS_INCLUDE

