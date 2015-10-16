/******************************Module*Header**********************************\
*
* Module Name: umdprovider.h
*
* Content: Longhorn Display Driver Model (LDDM) definitions for D3D UMD logging.
*
* Copyright (c) Microsoft Corporation.  All rights reserved.
\*****************************************************************************/

#if NTDDI_VERSION >= NTDDI_WIN8 

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _UMDPROVIDER_H
#define _UMDPROVIDER_H

#include "Evntprov.h"
#include "Evntrace.h"
#include "UMDEtw.h"

//
// Describe how the driver will use the allocation it creates.
// If more values are needed, please work with Microsoft to define them.
//
typedef struct _UMDETW_ALLOCATION_USAGE
{
    union
    {
        struct
        {
            UINT Packed : 1;
            UINT Renamed : 1;
            UINT Reserved : 14;
            UINT DriverReserved : 16;
        };
        UINT Value;
    };
} UMDETW_ALLOCATION_USAGE;

//
// For driver-internal allocations, describe the allocation's purpose.
// If more values are needed, please work with Microsoft to define them.
//
typedef enum _UMDETW_ALLOCATION_SEMANTIC
{
    UMDETW_ALLOCATION_SEMANTIC_NONE = 0,
    UMDETW_ALLOCATION_SEMANTIC_DMA_BUFFER = 1,
    UMDETW_ALLOCATION_SEMANTIC_UPLOAD_STAGING = 2,
    UMDETW_ALLOCATION_SEMANTIC_DOWNLOAD_STAGING = 3,
    UMDETW_ALLOCATION_SEMANTIC_CONTEXT_SAVE = 4,
    UMDETW_ALLOCATION_SEMANTIC_DRIVER_OTHER_MIN = 5,
    UMDETW_ALLOCATION_SEMANTIC_DRIVER_OTHER_MAX = 0xFFFF
} UMDETW_ALLOCATION_SEMANTIC;

typedef void (*PFNUMDETW_RUNDOWN)();

void UMDEtwRegister(PFNUMDETW_RUNDOWN CbRundown);
void UMDEtwUnregister();
void UMDEtwLogMapAllocation(ULONGLONG hD3DAllocation,
                            ULONGLONG hDxgAllocation,
                            ULONGLONG Offset,
                            ULONGLONG Size,
                            UMDETW_ALLOCATION_USAGE Usage,
                            UMDETW_ALLOCATION_SEMANTIC Semantic);
void UMDEtwLogUnmapAllocation(ULONGLONG hD3DAllocation,
                              ULONGLONG hDxgAllocation,
                              ULONGLONG Offset,
                              ULONGLONG Size,
                              UMDETW_ALLOCATION_USAGE Usage,
                              UMDETW_ALLOCATION_SEMANTIC Semantic);

// GUID for UMD ETW provider
// {A688EE40-D8D9-4736-B6F9-6B74935BA3B1}
static const GUID UMDEtwProviderId = 
{ 0xa688ee40, 0xd8d9, 0x4736, { 0xb6, 0xf9, 0x6b, 0x74, 0x93, 0x5b, 0xa3, 0xb1 } };

// Registration handle, returned by EventRegister and passed to EventUnregister
__declspec(selectany) REGHANDLE RegHandle = NULL;

// Whether any level of logging is enabled.
__declspec(selectany) BOOLEAN Enabled = FALSE;

// Whether we are currently in a rundown
__declspec(selectany) BOOLEAN InRundown = FALSE;

// Callback to the driver when a rundown is needed
__declspec(selectany) PFNUMDETW_RUNDOWN Rundown = NULL;

FORCEINLINE void NTAPI EnableCallback(
  __in      LPCGUID SourceId,
  __in      ULONG IsEnabled,
  __in      UCHAR Level,
  __in      ULONGLONG MatchAnyKeyword,
  __in      ULONGLONG MatchAllKeywords,
  __in_opt  PEVENT_FILTER_DESCRIPTOR FilterData,
  __in_opt  PVOID CallbackContext
)
{
    switch (IsEnabled)
    {
        case EVENT_CONTROL_CODE_DISABLE_PROVIDER:
            Enabled = FALSE;
            break;
        case EVENT_CONTROL_CODE_ENABLE_PROVIDER:
            Enabled = TRUE;
            break;
        case EVENT_CONTROL_CODE_CAPTURE_STATE:
            // Temporarily enable logging during the rundown
            BOOLEAN OldEnabled = Enabled;
            Enabled = TRUE;
            
            InRundown = TRUE;
            Rundown();
            InRundown = FALSE;

            // Restore Enabled to its original state
            Enabled = OldEnabled;
            
            break;
    }
}

FORCEINLINE void UMDEtwRegister(PFNUMDETW_RUNDOWN RundownCb)
{
    Rundown = RundownCb;

    // Register the provider
    EventRegister(&UMDEtwProviderId,
                  EnableCallback,
                  NULL,
                  &RegHandle);
}

FORCEINLINE void UMDEtwUnregister()
{
    EventUnregister(RegHandle);
}

FORCEINLINE void LogMapAllocation(BOOLEAN Enter,
                    ULONGLONG hD3DAllocation,
                    ULONGLONG hDxgAllocation,
                    ULONGLONG Offset,
                    ULONGLONG Size,
                    UMDETW_ALLOCATION_USAGE Usage,
                    UMDETW_ALLOCATION_SEMANTIC Semantic)
{
    if (Enabled)
    {   
        EVENT_DATA_DESCRIPTOR Descriptors[6];
        
        // Create a description of the event
        EventDataDescCreate(&Descriptors[0], &hD3DAllocation, 8);
        EventDataDescCreate(&Descriptors[1], &hDxgAllocation, 8);
        EventDataDescCreate(&Descriptors[2], &Offset, 8);
        EventDataDescCreate(&Descriptors[3], &Size, 8);
        EventDataDescCreate(&Descriptors[4], &Usage, 4);
        EventDataDescCreate(&Descriptors[5], &Semantic, 4);

        // Log the event
        EventWrite(
            RegHandle,
            Enter ? (InRundown ? &RundownAllocationEvent : &MapAllocationEvent) : &UnmapAllocationEvent,
            sizeof(Descriptors) / sizeof(Descriptors[0]),
            Descriptors
        );
    }
}

FORCEINLINE void UMDEtwLogMapAllocation(ULONGLONG hD3DAllocation,
                            ULONGLONG hDxgAllocation,
                            ULONGLONG Offset,
                            ULONGLONG Size,
                            UMDETW_ALLOCATION_USAGE Usage,
                            UMDETW_ALLOCATION_SEMANTIC Semantic)
{
    LogMapAllocation(TRUE,
                     hD3DAllocation,
                     hDxgAllocation,
                     Offset,
                     Size,
                     Usage,
                     Semantic);
}

FORCEINLINE void UMDEtwLogUnmapAllocation(ULONGLONG hD3DAllocation,
                              ULONGLONG hDxgAllocation,
                              ULONGLONG Offset,
                              ULONGLONG Size,
                              UMDETW_ALLOCATION_USAGE Usage,
                              UMDETW_ALLOCATION_SEMANTIC Semantic)
{
    LogMapAllocation(FALSE,
                     hD3DAllocation,
                     hDxgAllocation,
                     Offset,
                     Size,
                     Usage,
                     Semantic);
}

#endif // _UMDPROVIDER_H

#endif // if NTDDI_VERSION >= NTDDI_WIN8 
