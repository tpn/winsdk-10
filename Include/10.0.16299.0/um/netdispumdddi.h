/******************************Module*Header**********************************\
*
* Module Name: netdispumdddi.h
*
* Content: User mode Miracast display driver data type and DDI functions
*          definitions.
*
* Copyright (c) Microsoft Corporation.  All rights reserved.
\*****************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#ifndef _NETDISPUMDDDI_H_
#define _NETDISPUMDDDI_H_

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

#pragma warning(push)
#pragma warning(disable:4201) // nameless struct/union

//
// Definition of QueryMiracastDriverInterface function.
//

typedef
NTSTATUS
(NTAPI *QUERY_MIRACAST_DRIVER_INTERFACE)(
    _In_ UINT MiracastDriverInterfaceVersion,
    _In_ UINT MiracastDriverInterfaceSize,
    _Out_writes_bytes_(MiracastDriverInterfaceSize) VOID* pMiracastDriverInterface
    );

//
// Definition of MIRACAST_CALLBACKS and its callback functions.
//

//
// Definition of ReportSessionStatus callback function.
//

typedef enum
{
    MIRACAST_STATUS_CRITICAL_ERROR                      = 0,
    MIRACAST_STATUS_MISSING_KEEPALIVE                   = 1,
    MIRACAST_STATUS_SINK_DISOCNNECT_REQUEST             = 2,
    MIRACAST_STATUS_INSUFFICIENT_BANDWIDTH              = 3,
    MIRACAST_STATUS_SINK_FAILED_STANDARD_MODE_CHANGE    = 4,
    MIRACAST_STATUS_COMPANION_DRIVER_DISCONNECT         = 5,
    MIRACAST_STATUS_FORCE_UINT32                        = 0xffffffff,
} MIRACAST_STATUS;

typedef
VOID
(NTAPI *PFN_REPORT_SESSION_STATUS)(
    _In_ HANDLE hMiracastDeviceHandle,
    _In_ MIRACAST_STATUS MiracastStatus,
    _In_ NTSTATUS Status
    );

//
// Definition of MiracastIoControl callback function.
//

typedef
NTSTATUS
(NTAPI *PFN_MIRACAST_IO_CONTROL)(
    _In_ HANDLE hMiracastDeviceHandle,
    _In_ BOOL HardwareAccess,
    _In_ UINT InputBufferSize,
    _In_reads_bytes_(InputBufferSize) VOID* pInputBuffer,
    _In_ UINT OutputBufferSize,
    _Out_writes_bytes_(OutputBufferSize) VOID* pOutputBuffer,
    _Out_opt_ UINT* pBytesReturned
    );

//
// Definition of ReportStatistic callback function.
//

typedef enum
{
    MIRACAST_PROTOCOL_EVENT_IFRAME_RQ                           = 0,
    MIRACAST_PROTOCOL_EVENT_MONITOR_ARRIVE                      = 1,
    MIRACAST_PROTOCOL_EVENT_MONITOR_DEPART                      = 2,
    MIRACAST_PROTOCOL_EVENT_SINK_FAILED_PREFERRED_MODE_CHANGE   = 3,
    MIRACAST_PROTOCOL_EVENT_FORCE_UINT32                        = 0xffffffff,
} MIRACAST_PROTOCOL_EVENT;

typedef enum
{
    MIRACAST_STATISTIC_TYPE_CHUNK_PROCESSING_COMPLETE = 0,
    MIRACAST_STATISTIC_TYPE_CHUNK_SENT                = 1,
    MIRACAST_STATISTIC_TYPE_EVENT                     = 2,
    MIRACAST_STATISTIC_TYPE_FORCE_UINT32              = 0xffffffff,
} MIRACAST_STATISTIC_TYPE;

typedef union
{
    struct
    {
        UINT64 FrameNumber : 40;
        UINT64 PartNumber  : 24;
    };
    UINT64 Value;
} MIRACAST_CHUNK_ID;

typedef enum
{
    MIRACAST_CHUNK_TYPE_UNKNOWN                 = 0,
    MIRACAST_CHUNK_TYPE_COLOR_CONVERT_COMPLETE  = 1,
    MIRACAST_CHUNK_TYPE_ENCODE_COMPLETE         = 2,
    MIRACAST_CHUNK_TYPE_FRAME_START             = 3,
    MIRACAST_CHUNK_TYPE_FRAME_DROPPED           = 4,
    MIRACAST_CHUNK_TYPE_ENCODE_DRIVER_DEFINED_1 = 0x80000000,
    MIRACAST_CHUNK_TYPE_ENCODE_DRIVER_DEFINED_2 = 0x80000001,
    MIRACAST_CHUNK_TYPE_ENCODE_FORCE_UINT32     = 0xffffffff,
} MIRACAST_CHUNK_TYPE;

typedef struct
{
    MIRACAST_CHUNK_TYPE ChunkType;      // Type of chunk info
    MIRACAST_CHUNK_ID ChunkId;          // Identifier for this chunk
    UINT  ProcessingTime;               // Time the process took to complete in microsecond
    UINT  EncodeRate;                   // Encode bitrate driver reported for the chunk, kilobits per second
} MIRACAST_CHUNK_INFO;

typedef struct
{
    MIRACAST_STATISTIC_TYPE  StatisticType;
    union
    {
        struct
        {
            MIRACAST_CHUNK_INFO ChunkInfo;
        } EncodeComplete;

        struct
        {
            MIRACAST_CHUNK_ID ChunkId;
        } ChunkSent;

        struct
        {
            MIRACAST_PROTOCOL_EVENT Event;
        } ProtocolEvent;
    };
} MIRACAST_STATISTIC_DATA;

typedef
VOID
(NTAPI *PFN_REPORT_STATISTIC)(
    _In_ HANDLE hMiracastDeviceHandle,
    _In_ MIRACAST_STATISTIC_DATA* pStatistics
    );

//
// Definition of GetNextChunkData callback function.
//

typedef struct
{
    MIRACAST_CHUNK_INFO ChunkInfo;
    UINT                PrivateDriverDataSize; // Size of private data
    UCHAR               PrivateDriverData[1];  // Private data buffer
} MIRACAST_CHUNK_DATA;

#define MAX_ADDITIONAL_EVENTS 4

typedef
NTSTATUS
(NTAPI *PFN_GET_NEXT_CHUNK_DATA)(
    _In_ HANDLE hMiracastDeviceHandle,
    _In_ UINT TimeoutInMilliseconds,
    _In_ UINT AdditionalWaitEventCount,
    _In_opt_ HANDLE* pAdditionalWaitEvents,
    _Inout_ UINT* pChunkDataBufferSize,
    _Out_ MIRACAST_CHUNK_DATA* pChunkDataBuffer,
    _Out_ UINT* pOutstandingChunksToProcess
    );

//
// Definition of network bandwidth callback function.
//

typedef struct {
    UINT64 EncoderBitRate;          // Windows recommended bitrate for audio/video encoder to use in bits per second
    UINT64 CurrentMaxTxDataRate;    // Theoretical max speed reported by WiFi driver in bits per second
    UINT64 TransmittedFrameCount;   // Total Wi-Fi frames sent with zero retries since last time step
    UINT64 FailedFrameCount;        // Total Wi-Fi frames that exhausted maximum number of retries since last time step
    UINT64 RetriedFrameCount;       // Total Wi-Fi frames that succeeded after a single retry since last time step
    UINT64 MultipleRetryFrameCount; // Total Wi-Fi frames that succeeded after more than one retry since last time step
} MIRACAST_DATARATE_STATS;

typedef
void
(NTAPI *PFN_DATARATE_NOTIFICATION)(
    _In_ PVOID context,
    _In_opt_ MIRACAST_DATARATE_STATS* pDataRateStats
    );

typedef
NTSTATUS
(NTAPI *PFN_REGISTER_DATARATE_NOTIFICATIONS)(
     _In_ HANDLE hMiracastDeviceHandle,
     _In_opt_ PVOID pNotificationContext,
     _In_opt_ PFN_DATARATE_NOTIFICATION pfnDataRateNotify
    );

//
// Definition of the driver callback interfaces provided by the system.
//

typedef struct _MIRACAST_CALLBACKS
{
    PFN_REPORT_SESSION_STATUS ReportSessionStatus;
    PFN_MIRACAST_IO_CONTROL MiracastIoControl;
    PFN_REPORT_STATISTIC ReportStatistic;
    PFN_GET_NEXT_CHUNK_DATA GetNextChunkData;
    PFN_REGISTER_DATARATE_NOTIFICATIONS RegisterForDataRateNotifications;
} MIRACAST_CALLBACKS, *PMIRACAST_CALLBACKS;


//
// Definition of MIRACAST_DRIVER_INTERFACE and its interface functions.
//

#define MIRACAST_DRIVER_INTERFACE_VERSION_1 0x01

//
// Definition of CreateMiracastContext interface function.
//

typedef
NTSTATUS
(NTAPI *PFN_CREATE_MIRACAST_CONTEXT)(
    _In_ HANDLE hMiracastDeviceHandle,
    _In_ MIRACAST_CALLBACKS* pMiracastCallbacks,
    _Out_ PVOID* ppMiracastContext
    );

//
// Definition of DestroyMiracastContext interface function.
//

typedef
VOID
(NTAPI *PFN_DESTROY_MIRACAST_CONTEXT)(
    _In_ PVOID pMiracastContext
    );

//
// Definition of StartMiracastSession interface function.
//

typedef union
{
    struct
    {
        UINT MonitorConnected : 1;
        UINT ReducedModeListDueToBandwidth : 1;
        UINT Reserved : 30;
    };
    UINT Value;
} MIRACAST_SESSION_INFO;

typedef struct
{
    UINT64 CurrentBitRate;          // Windows recommended bitrate for audio/video encoder to use in bits per second
    UINT64 LocalMaxBitRate;         // Maximum bitrate the local WiFi-Direct hardware can support in bits per second
    UINT64 RemoteMaxBitRate;        // Maximum bitrate the Miracast sink hardware can support in bits per second
} MIRACAST_WFD_CONNECTION_STATS;

typedef
NTSTATUS
(NTAPI *PFN_START_MIRACAST_SESSION)(
    _In_ PVOID pMiracastContext,
    _In_ SOCKET MiracastRTSPSocket,
    _In_ MIRACAST_WFD_CONNECTION_STATS* pWfdConnectionStats,
    _Out_ MIRACAST_SESSION_INFO* pSessionInfo
    );

//
// Definition of StopMiracastSession interface function.
//

typedef
VOID
(NTAPI *PFN_STOP_MIRACAST_SESSION)(
    _In_ PVOID pMiracastContext
    );

//
// Definition of HandleKernelModeMessage interface function.
//

typedef
NTSTATUS
(NTAPI *PFN_HANDLE_KMD_MESSAGE)(
    _In_ PVOID pMiracastContext,
    _In_ UINT InputBufferSize,
    _In_reads_bytes_(InputBufferSize) VOID* pInputBuffer,
    _In_ UINT OutputBufferSize,
    _Out_writes_bytes_(OutputBufferSize) VOID* pOutputBuffer,
    _Out_ UINT* pBytesReturned
    );

//
// Definition of the driver interfaces.
//

typedef struct _MIRACAST_DRIVER_INTERFACE
{
    UINT Size;
    PFN_CREATE_MIRACAST_CONTEXT CreateMiracastContext;
    PFN_DESTROY_MIRACAST_CONTEXT DestroyMiracastContext;
    PFN_START_MIRACAST_SESSION StartMiracastSession;
    PFN_STOP_MIRACAST_SESSION StopMiracastSession;
    PFN_HANDLE_KMD_MESSAGE HandleKernelModeMessage;
} MIRACAST_DRIVER_INTERFACE, *PMIRACAST_DRIVER_INTERFACE;

#pragma warning(pop)

#endif // (NTDDI_VERSION >= NTDDI_WINBLUE)

#endif // _NETDISPUMDDDI_H_
