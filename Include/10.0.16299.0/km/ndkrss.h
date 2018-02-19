/*++

Copyright (c) 2016  Microsoft Corporation

Module Name:

    ndkrss.h

Abstract:

    This module contains definitions and structures for
    the RSS extension interface for NDK_ADAPTER object.

Environment:

    Kernel-mode only.

--*/

#ifndef _NDK_RSS_H_
#define _NDK_RSS_H_

#if _MSC_VER > 1000
#pragma once
#endif

// bab27026-86c3-4e31-9f72-4936ded76d42
DEFINE_GUID(
   NDK_EXTENSION_ID_ADAPTER_RSS_DISPATCH,
   0xbab27026,
   0x86c3,
   0x4e31,
   0x9f, 0x72, 0x49, 0x36, 0xde, 0xd7, 0x6d, 0x42
);

typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NDIS_STATUS
(*NDK_FN_GET_RSS_PROCESSOR_INFO) (
    _In_ NDK_ADAPTER *pNdkAdapter,
    _Out_writes_bytes_to_opt_(*Size, *Size) PNDIS_RSS_PROCESSOR_INFO RssProcessorInfo,
    _Inout_ PSIZE_T Size
    );

typedef struct _NDK_EXTENSION_ADAPTER_RSS_DISPATCH {
    NDK_FN_GET_RSS_PROCESSOR_INFO NdkGetRssProcessorInfo;
} NDK_EXTENSION_ADAPTER_RSS_DISPATCH;

#endif  //_NDK_RSS_H_
