/*++

Copyright (c) 1999 - 2001  Microsoft Corporation

Module Name:

    dsm.h

Abstract:

    This file defines the interface between Multipath Device-Specific drivers and the
    Main Multipath driver.

Author:

Notes:

Revision History:

--*/

#ifndef _DSM_H_
#define _DSM_H_

#include <ntddk.h>
#include <scsi.h>
#include <ntddscsi.h>
#include <ntddstor.h>
#include <wmistr.h>
#include <wmiguid.h>
#include <wmilib.h>

#pragma warning(disable:4201) // bit field types

//
// List of DSM Identifiers passed to several
// of the dsm entry-points.
//
typedef struct _DSM_IDS {

    //
    // Number of ID's in the List.
    //
    ULONG Count;

    //
    // Array of DsmIdentiifiers
    //
    PVOID IdList[1];
} DSM_IDS, *PDSM_IDS;

#if (NTDDI_VERSION >= NTDDI_WS08)  // For Server 2008 and later.
//
// Structures for SCSI pass through and SCSI pass through direct.
//
//  IA64 requires 8-byte alignment for pointers,
//  but the IA64 NT kernel expects 16-byte alignment
//
#ifdef _WIN64
    #define PTRALIGN    DECLSPEC_ALIGN(16)
#else
    #define PTRALIGN    DECLSPEC_ALIGN(4)
#endif

#define SPTWB_SENSE_LENGTH  32
#define SPTWB_DATA_LENGTH   512

typedef struct _SCSI_PASS_THROUGH_WITH_BUFFERS {
    SCSI_PASS_THROUGH   ScsiPassThrough;
    PTRALIGN UCHAR      SenseInfoBuffer[SPTWB_SENSE_LENGTH];
    PTRALIGN UCHAR      DataBuffer[SPTWB_DATA_LENGTH];
} SCSI_PASS_THROUGH_WITH_BUFFERS, *PSCSI_PASS_THROUGH_WITH_BUFFERS;

typedef struct _SCSI_PASS_THROUGH_DIRECT_WITH_BUFFER {
    SCSI_PASS_THROUGH_DIRECT    ScsiPassThroughDirect;
    PTRALIGN UCHAR              SenseInfoBuffer[SPTWB_SENSE_LENGTH];
} SCSI_PASS_THROUGH_DIRECT_WITH_BUFFER, *PSCSI_PASS_THROUGH_DIRECT_WITH_BUFFER;

#endif // (NTDDI_VERSION >= NTDDI_WS08)

//
// Identification and initialization routines (other than DSM registration with MPCTL.sys)
//
typedef
NTSTATUS
(*DSM_INQUIRE_DRIVER) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDEVICE_OBJECT TargetDevice,
    _In_ IN PDEVICE_OBJECT PortFdo,
    _In_ IN PSTORAGE_DEVICE_DESCRIPTOR Descriptor,
    _In_ IN PSTORAGE_DEVICE_ID_DESCRIPTOR DeviceIdList,
    _Out_ OUT PVOID *DsmIdentifier
    );
/*++

Routine Description:

    This routine is used to determine if TargetDevice belongs to the DSM.
    If the device is owned by the driver, then DsmIdentifier will be updated with a
    DSM-derived value.

Arguments:

    DsmContext   - Context value given to the multipath driver during registration.
    TargetDevice - DeviceObject for the child device.
    PortFdo      - The Port driver FDO on which TargetDevice resides.
    Descriptor   - Pointer the device descriptor corresponding to TargetDevice. Rehash of inquiry
                   data, plus serial number information (if applicable).
    DeviceIdList - VPD Page 0x83 information.
    DsmIdentifier - Pointer to be filled in by the DSM on success.

Return Value:

    STATUS_SUCCESS and a DsmIdentifier if the DSM supports this device.
    Otherwise a NULL Identifier and the appropriate NTSTATUS value (SUCCESS or other).

--*/

typedef
BOOLEAN
(*DSM_COMPARE_DEVICES) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId1,
    _In_ IN PVOID DsmId2
    );
/*++

Routine Description:

    This routine is called to determine if the device ids represent the same underlying
    physical device.
    Additional ids (more than 2) can be tested by repeatedly calling this function.
    It is the DSM responsibility to keep the necessary information to identify the device(s).

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    DsmId1/2 - Identifers returned from DMS_INQUIRE_DRIVER.

Return Value:

    TRUE if DsmIds correspond to the same underlying device.

--*/

//
// This controller is active.
//
#define DSM_CONTROLLER_ACTIVE   0x00000001
//
// This controller is a stand-by controller.
//
#define DSM_CONTROLLER_STANDBY  0x00000002
//
// This controller has failed.
//
#define DSM_CONTROLLER_FAILED   0x00000003
//
// There are no controllers (JBOD, for example)
//
#define DSM_CONTROLLER_NO_CNTRL 0x00000004

typedef struct _CONTROLLER_IDS {

    //
    // Defined in ntddstor.h
    //
    STORAGE_IDENTIFIER_CODE_SET Type;

    //
    // Length, in bytes, or the 'Serial Number'.
    //
    ULONG Length;
    UCHAR SerialNumber[32];
} CONTROLLER_IDS, *PCONTROLLER_IDS;

typedef struct _CONTROLLER_INFO {
    //
    // The device object of the controller.
    // Retrieved by DsmGetAssociatedDevices.
    //
    PDEVICE_OBJECT DeviceObject;

    //
    // Ascii/Binary identifier. WWN, for example.
    //
    CONTROLLER_IDS Identifier;

    //
    // Controller state. See above.
    //
    ULONG State;
} CONTROLLER_INFO, *PCONTROLLER_INFO;

//
// Informs the DSM that ControllerInfo must be allocated.
//
#define DSM_CNTRL_FLAGS_ALLOCATE    0x00000001

//
// ControllerInfo is valid. The DSM should update 'State'.
//
#define DSM_CNTRL_FLAGS_CHECK_STATE 0x00000002

//
// Possible future expansion.
//
#define DSM_CNTRL_FLAGS_RESERVED   0xFFFFFFFC

typedef
NTSTATUS
(*DSM_GET_CONTROLLER_INFO) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN ULONG Flags,
    _Inout_ IN OUT PCONTROLLER_INFO *ControllerInfo
    );
/*++

Routine Description:

    This routine is used to get information about the controller that the device
    corresponding to DsmId in on.
    The Dsm shall allocate the necessary memory for the buffer (mpio has the responsibility
    to free it) and fill in the information.
    If the DSM controls hardware that uses no controllers, set State to NO_CNTRL.
    This information is used mainly by whatever WMI admin. utilities want if.

    This routine will be called initially after SetDeviceInfo, but also to retrieve
    the controller's state when an WMI request is received, after a fail-over/fail-back, etc.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    DsmId - Identifer returned from DMS_INQUIRE_DRIVER.
    Flags - Bitfield of modifiers. If ALLOCATE is not set, ControllerInfo will have
            a valid buffer for the DSM to operate on.
    ControllerInfo - Pointer  for  the DSM to place the allocated controller info
                     pertaining to DsmId


Return Value:

    NTSTATUS

--*/


typedef
PUCHAR
(*DSM_DEVICE_SERIAL_NUMBER) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId
    );
/*++

Routine Description:

    This OPTIONAL routine is used to retrieve a serial number for the device represented
    by DsmId. It is only called when the device doesn't support VPD pages 0x80 or 0x83.
    The buffer returned should be a null-terminated ascii string. MPIO is responsible for
    freeing this buffer and the DSM should not assume it's valid anytime after returning.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    DsmId - Value returned from DMSInquireDriver.

Return Value:

    Serial number string.

--*/

typedef
NTSTATUS
(*DSM_SET_DEVICE_INFO) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDEVICE_OBJECT TargetObject,
    _In_ IN PVOID DsmId,
    _Inout_ IN OUT PVOID *PathId
    );
/*++

Routine Description:

    This routine associates a returned DsmId to the controlling MPDisk PDO
    the targetObject for DSM-initiated requests, and to a Path (given by PathId).
    The Path ID is a unique per-path value and will be the same value for ALL devices that
    are on the same physical path.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    TargetObject - The D.O. to which DSM-initiated requests should be sent.
                   This is the Filter D.O. over the port PDO.
    DsmId - Value returned from DMSInquireDriver.
    PathId - Id that represents the path. The value passed in may be used as is, or the DSM
             optionally can update it if it requires additional state info to be kept.


Return Value:

    DSM should return SUCCESS. Other errors may be returned in event of failed
    allocations, etc. These other errors are fatal.

--*/

typedef
BOOLEAN
(*DSM_IS_PATH_ACTIVE) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID PathId,
    _In_ IN PVOID DsmId
    );
/*++

Routine Description:

    This routine is used to determine whether the path to DsmId is active
    (ie. able to handle requests without a failover).
    NOTE: This is used by the main module to determine load balance groups. If multiple
    paths are active to the same device then it is considered that requests can be
    submitted freely to ALL active paths, though the DSM is the determinator for path
    selection.

    In addition, after a failover, the path validity will be queried. If the path error
    was transitory and the DSM feels that the path is good, then this request will be
    re-issued to determine it's ACTIVE/PASSIVE state.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    PathId - Value set in SetDeviceInfo
    DsmId - Device Identifier returned from DsmInquire.

Return Value:

    TRUE - if path is active. Otherwise, FALSE.

--*/



//
// Error Handling, Failover and recovery routines.
//
// When a fatal error occurs, the Path is invalidated and a new one
// selected.
// After the fail-over is complete, mpctl will invoke the DSM's Recovery routine
// (if one is specified). Once the error has been dealt with, the DSM should notify
// mpctl of the success of the operation.
// PathVerify will be called with each DsmId that was on the path.
// If this is successful, ReenablePath is invoked to allow the DSM any final preperations
// before considering the path normal.
// IsActive is called to build the load-balance associations.
//
#define DSM_FATAL_ERROR          0x80000000
#define DSM_RETRY_DONT_DECREMENT 0x00008000
#define DSM_ADMIN_FO             0x40000000
#define DSM_FATAL_ERROR_OEM_MASK 0x0000FFFF
#define DSM_FATAL_ERROR_RESERVED 0x3FFF0000

typedef
ULONG
(*DSM_INTERPRET_ERROR) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _Inout_ IN OUT PNTSTATUS Status,
    _Out_ OUT PBOOLEAN Retry
    );
/*++

Routine Description:

    This routine informs the DSM that Srb has an error indicated with Srb->SrbStatus and/or Status.
    IF Srb->SrbFlags & SRB_FLAGS_AUTOSENSE_VALID is set, sense data will be available.

    The DSM should examine these, carry out any vendor-unique activities and update Retry and Status
    (if applicable). A determination should be made whether these errors constitute a fail over.
    Setting the high-bit of the return value indicates a fatal error. The DSM may additionally
    set any of the bits in the lower USHORT to facilitate information passing between this and
    the InvalidatePath routine.
    The Multipath driver (mpctl) will not override these return values.

Arguments:

    DsmId - Identifers returned from DMS_INQUIRE_DRIVER.
    Srb - The Srb with an error.
    Status - NTSTATUS of the operation. Can be updated.
    Retry - Allows the DSM to indicate whether to retry the IO.

Return Value:

    Setting DSM_FATAL_ERROR indicates a fatal error. DSM-specific info. can be kept in
    the lower WORD, which will be passed to InvalidatePath.

--*/

typedef
ULONG
(*DSM_INTERPRET_ERROR_EX) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _Inout_ IN OUT PNTSTATUS Status,
    _Out_ OUT PBOOLEAN Retry,
    _Out_ OUT PLONG RetryInterval,
    ...
    );
/*++

Routine Description:

    This routine informs the DSM that Srb has an error indicated with Srb->SrbStatus and/or Status.
    IF Srb->SrbFlags & SRB_FLAGS_AUTOSENSE_VALID is set, sense data will be available.

    The DSM should examine these, carry out any vendor-unique activities and update Retry and Status
    (if applicable). A determination should be made whether these errors constitute a fail over.
    Setting the high-bit of the return value indicates a fatal error. The DSM may additionally
    set any of the bits in the lower USHORT to facilitate information passing between this and
    the InvalidatePath routine.
    The Multipath driver (mpctl) will not override these return values.

Arguments:

    DsmId - Identifers returned from DMS_INQUIRE_DRIVER.
    Srb - The Srb with an error.
    Status - NTSTATUS of the operation. Can be updated.
    Retry - Allows the DSM to indicate whether to retry the IO.
    RetryInterval - Lets DSM specify (in seconds) when this specific I/O should be
                    retried.  Use MAXLONG to use the default retry interval.
                    Use zero to retry immediately.  MPIO will set to MAXLONG
                    before calling the DSM.

Return Value:

    Setting DSM_FATAL_ERROR indicates a fatal error. DSM-specific info. can be kept in
    the lower WORD, which will be passed to InvalidatePath.

--*/


typedef
NTSTATUS
(*DSM_INVALIDATE_PATH) (
    _In_ IN PVOID DsmContext,
    _In_ IN ULONG ErrorMask,
    _In_ IN PVOID PathId,
    _Inout_ IN OUT PVOID *NewPathId
    );
/*++

Routine Description:

    This routine invalidates the given path and assigns the devices to the new path.
    NewPath is set to either an existing path or if all paths are dead, NULL.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    ErrorMask - Value returned from InterpretError.
    PathId - The failing path.
    NewPathId - Pointer to the new path.

Return Value:

    NTSTATUS of the operation.

--*/

typedef
NTSTATUS
(*DSM_PATH_VERIFY) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN PVOID PathId
    );
/*++

Routine Description:

    This routine is polled at a configurable interval and is used to determine the
    health of the device indicated by DsmId on PathId. The DSM makes the determination of
    validity using supplied library functions, or by issuing vendor-unique commands.

    After a fail-over condition has been dealt with, this is used as part of the fail-back
    mechanism.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    DsmId - Value returned from DMSInquireDriver.
    PathId - Value set in SetPathId.

Return Value:

    NTSTATUS
--*/


//
// PERMANENT indicates that SuggestedPath should be the device's preferred path.
// PENDING_REMOVAL indicates that the path is about to go away.
// OEM_MASK values specific to the DSM
// RESERVED future expansion
// ADMIN_REQUEST indicates that the request originated from some user-mode utility.
//
#define DSM_MOVE_PERMANENT       0x00000001
#define DSM_MOVE_PENDING_REMOVAL 0x00000002
#define DSM_MOVE_OEM_MASK        0x0000FF00
#define DSM_MOVE_RESERVED        0x7FFF0000
#define DSM_MOVE_ADMIN_REQUEST   0x80000000

typedef
NTSTATUS
(*DSM_MOVE_DEVICE) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PVOID MPIOPath,
    _In_ IN PVOID SuggestedPath,
    _In_ IN ULONG Flags
    );
/*++

Routine Description:

    This routine is invoked (usually) in response to an administrative request.
    The DSM will associate the Device described by DsmId to the SuggestedPath, or may
    select another available. As this request will usually be followed by an adapter
    removal, or can be used to set-up static load-balancing.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    DsmIds - The collection of DSM IDs that pertain to the MPDisk.
    MPIOPath - The original path value passed to SetDeviceInfo.
    SuggestedPath - The path which should become the active path.
    Flags - Bitmask indicating the intent of the move.

Return Value:

    NTSTATUS - STATUS_SUCCESS, some error status if there are no good alternate paths.

--*/

typedef
NTSTATUS
(*DSM_REMOVE_PENDING) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId
    );
/*++

Routine Description:

    This routine indicates that the device represented by DsmId will be removed, though
    due to outstanding I/Os or other conditions, it can't be removed immediately.
    The DSM_ID list passed to other functions will no longer contain DsmId, so internal
    structures should be updated accordingly.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    DsmId - Value referring to the failed device.

Return Value:

    NTSTATUS of the operation.

--*/


typedef
NTSTATUS
(*DSM_REMOVE_DEVICE) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN PVOID PathId
    );
/*++

Routine Description:

    This routine indicates that the main path has determined or been notified that thedevice
    has failed and should be removed from PathId.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    DsmId - Value referring to the failed device.
    PathId - The path on which the Device lives.

Return Value:

    NTSTATUS of the operation.

--*/

typedef
NTSTATUS
(*DSM_REMOVE_PATH) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID PathId
    );
/*++

Routine Description:

    This routine indicates that the path is no longer valid, and that the DSM should update
    it's internal state appropriately (tear down the structure, free allocations, ...).
    It is the responsibility of mpctl.sys to have already removed the devices (via RemoveDevice)
    that are attached to this path.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    PathId - The path to remove.

Return Value:

    NTSTATUS of the operation.

--*/

#define DSM_BROADCAST   0x00000001
#define DSM_WILL_HANDLE 0x00000002
#define DSM_PATH_SET    0x00000003
#define DSM_ERROR       0x00000004

//
// IOCTL handling routines.
//
typedef
ULONG
(*DSM_CATEGORIZE_REQUEST) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _In_ IN PVOID CurrentPath,
    _Outptr_result_maybenull_ OUT PVOID *PathId,
    _Out_ OUT NTSTATUS *Status
    );
/*++

Routine Description:

    The routine is called when a request other than R/W is being handled.
    The DSM indicates whether the request should be handled by it's DsmBroadcastRequest,
    DsmSrbDeviceControl, or that the PathID indicated should be used.

Arguments:

    DsmIds - The collection of DSM IDs that pertain to the MPDisk.
    Irp - The Irp containing Srb.
    Srb - Scsi request block
    CurrentPath - Path to which last request was sent
    PathId - Updated to the PathId where the request should be sent if return value
             is DSM_PATH_SET.
    Status - Storage for status in the event that DSM_ERROR is returned.

Return Value:

    DSM_BROADCAST - If BroadcastRequest should be used.
    DSM_WILL_HANDLE - If SrbDeviceControl should be used.
    DSM_PATH_SET - If the Srb should just be sent to PathId
    DSM_ERROR - Indicates that an error occurred where by the request can't be handled.
                Status is updated, along with Srb->SrbStatus.

--*/

typedef
NTSTATUS
(*DSM_BROADCAST_SRB) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _In_ IN PKEVENT Event
    );
/*++

Routine Description:

    This routine is called when the DSM has indicated that Srb should be sent to the device
    down all paths. The DSM will update IoStatus information and status, but not complete the
    request.

Arguments:

    DsmIds - The collection of DSM IDs that pertain to the MPDisk.
    Irp - Irp containing SRB.
    Srb - Scsi request block
    Event - DSM sets this once all sub-requests have completed and the original request's
            IoStatus has been setup.

Return Value:

    NTSTATUS of the operation.

--*/


typedef
NTSTATUS
(*DSM_SRB_DEVICE_CONTROL) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _In_ IN PKEVENT Event
    );
/*++

Routine Description:

    This routine is called when the DSM has indicated that it wants to handle it internally
    (via CATEGORIZE_REQUEST).
    It should set IoStatus (Status and Information) and the Event, but not complete the request.

Arguments:

    DsmIds - The collection of DSM IDs that pertain to the MPDISK.
    Irp - Irp containing SRB.
    Srb - Scsi request block
    Event - Event to be set when the DSM is finished if DsmHandled is TRUE

Return Value:

    NTSTATUS of the request.

--*/

typedef
VOID
(*DSM_COMPLETION_ROUTINE) (
    _In_ IN PVOID DsmId,
    _In_ IN PIRP Irp,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _In_ IN PVOID DsmContext
    );
/*++

Routine Description:

    This routine is called from mpio's completion routine for those requests that
    the DSM has indicated that it wants a completion routine (set via SET_COMPLETION).

Arguments:

    DsmIds - The collection of DSM IDs that pertain to the MPDISK.
    Irp - Irp containing SRB.
    Srb - Scsi request block
    DsmContext - DSM supplied value.

Return Value:

    NONE

--*/


typedef struct _DSM_COMPLETION_INFO {

    //
    // Routine to be invoked on request completion.
    //
    DSM_COMPLETION_ROUTINE DsmCompletionRoutine;

    //
    // Context to be supplied.
    //
    PVOID DsmContext;

} DSM_COMPLETION_INFO, *PDSM_COMPLETION_INFO;

typedef
VOID
(*DSM_SET_COMPLETION) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId,
    _In_ IN PIRP Irp,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _Inout_ IN OUT PDSM_COMPLETION_INFO DsmCompletion
    );
/*++

Routine Description:

    This routine is called before the actual submission of a request, but after the categorisation
    of the I/O. This will be called only for those requests not handled by the DSM directly:
         Read/Write
         Other requests not handled by SrbControl or Broadcast
    The DSM can supply a completion routine and context which will be invoked when the
    request completion is being handled. It is not necessary to set completions on any or all
    requests.

Arguments:
    DsmId - Identifer that was indicated when the request was categorized (or be LBGetPath)
    Irp - Irp containing Srb.
    Srb - The request
    DsmCompletion - Completion info structure to be filled out by DSM.


Return Value:

    None

--*/

#define NUMA_MAX_WEIGHT 10

typedef
PVOID
(*DSM_LB_GET_PATH) (
    _In_ IN PVOID DsmContext,
    _In_ IN PSCSI_REQUEST_BLOCK Srb,
    _In_ IN PDSM_IDS DsmList,
    _In_ IN PVOID CurrentPath,
    _Out_ OUT NTSTATUS *Status
    );
/*++

Routine Description:

    This routine is called once per I/O and gives the DSM the ability to indicate
    to which path the request should be submitted. If the DSM returns a Path that was
    not active, this constitutes a Fail-over condition.

Arguments:

    Srb - The request that needs to be submitted
    DsmList - Ids of the devices that make up the multipath group.
    CurrentPath - Path to which last request was sent
    Status - Storage for an error status, if returning NULL path.

Return Value:

    PathId to where the request should be sent. NULL if all current paths are failed.

--*/

//
// WMI structs, defines, routines.
//

// DSM Type 1

typedef
NTSTATUS
(*DSM_QUERY_DATABLOCK) (
    _In_ IN PVOID DsmContext,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG InstanceCount,
    _Inout_ IN OUT PULONG InstanceLengthArray,
    _In_ IN ULONG BufferAvail,
    _Out_ OUT PUCHAR Buffer,
    _Out_ OUT PULONG DsmDataLength
    );

typedef
NTSTATUS
(*DSM_SET_DATABLOCK) (
    _In_ IN PVOID DsmContext,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG BufferSize,
    _In_ IN PUCHAR Buffer
    );

typedef
NTSTATUS
(*DSM_EXECUTE_METHOD) (
    _In_ IN PVOID DsmContext,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG MethodId,
    _In_ IN ULONG InBufferSize,
    _In_ IN PULONG OutBufferSize,
    _Inout_ IN OUT PUCHAR Buffer
    );

typedef
NTSTATUS
(*DSM_FUNCTION_CONTROL) (
    _In_ IN PVOID DsmContext,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN WMIENABLEDISABLECONTROL Function,
    _In_ IN BOOLEAN Enable
    );

// DSM Type 2 and newer.

typedef
NTSTATUS
(*DSM_QUERY_DATABLOCK_EX) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG InstanceCount,
    _Inout_ IN OUT PULONG InstanceLengthArray,
    _In_ IN ULONG BufferAvail,
    _Out_ OUT PUCHAR Buffer,
    _Out_ OUT PULONG DsmDataLength,
    ...
    );

typedef
NTSTATUS
(*DSM_SET_DATABLOCK_EX) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG BufferSize,
    _In_ IN PUCHAR Buffer,
    ...
    );

typedef
NTSTATUS
(*DSM_EXECUTE_METHOD_EX) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN ULONG InstanceIndex,
    _In_ IN ULONG MethodId,
    _In_ IN ULONG InBufferSize,
    _In_ IN PULONG OutBufferSize,
    _Inout_ IN OUT PUCHAR Buffer,
    ...
    );

typedef
NTSTATUS
(*DSM_FUNCTION_CONTROL_EX) (
    _In_ IN PVOID DsmContext,
    _In_ IN PDSM_IDS DsmIds,
    _In_ IN PIRP Irp,
    _In_ IN ULONG GuidIndex,
    _In_ IN WMIENABLEDISABLECONTROL Function,
    _In_ IN BOOLEAN Enable,
    ...
    );

typedef struct _DSM_WMILIB_CONTEXT {
    ULONG GuidCount;
    PWMIGUIDREGINFO GuidList;
    UNICODE_STRING RegistryPath;
    UNICODE_STRING MofResourceName;
    union {
        DSM_QUERY_DATABLOCK QueryWmiDataBlock;
        DSM_QUERY_DATABLOCK_EX QueryWmiDataBlockEx;
    };
    union {
        DSM_SET_DATABLOCK SetWmiDataBlock;
        DSM_SET_DATABLOCK_EX SetWmiDataBlockEx;
    };
    union {
        DSM_EXECUTE_METHOD ExecuteWmiMethod;
        DSM_EXECUTE_METHOD_EX ExecuteWmiMethodEx;
    };
    union {
        DSM_FUNCTION_CONTROL WmiFunctionControl;
        DSM_FUNCTION_CONTROL_EX WmiFunctionControlEx;
    };
} DSM_WMILIB_CONTEXT, *PDSM_WMILIB_CONTEXT;


//
// This function must be supplied if the DSM type is 6 or higher.  MPIO will
// use this function to determine if the DSM supports the given address type.
// The passed in AddressType will be one of the values as defined by the
// STORAGE_ADDRESS_TYPE_* macros in srb.h.  The DSM must return TRUE if it can
// handle STORAGE_REQUEST_BLOCKs with the given address type, otherwise it must
// return FALSE.  If MPIO calls this function with a given address type, it
// does *not* imply that the DSM will only ever have to handle that address type.
//
typedef
BOOLEAN
(*DSM_ADDRESS_TYPE_SUPPORTED) (
    _In_ IN PVOID DsmContext,
    _In_ IN ULONG AddressType
    );


typedef
NTSTATUS
(*DSM_DEVICE_NOT_USED) (
    _In_ IN PVOID DsmContext,
    _In_ IN PVOID DsmId
    );
/*++

Routine Description:

    This routine indicates that the device represented by DsmId will not be
    initialized completely by MPIO.
    The DSM_ID list passed to other functions will no longer contain DsmId,
    so internal structures should be updated accordingly.

Arguments:

    DsmContext - Context value given to the multipath driver during registration.
    DsmId - Value referring to the uninitialized device.

Return Value:

    NTSTATUS of the operation.

--*/


//
// Unload routine.
//
typedef
NTSTATUS
(*DSM_UNLOAD) (
    _In_ IN PVOID DsmContext
    );
/*++

Routine Description:

    This routine is called when the main module requires the DSM to be unloaded
    (ie. prior to the main module unload).

Arguments:

    DsmContext - Context value passed to DsmInitialize()

Return Value:

    NTSTATUS - Had best be STATUS_SUCCESS;

--*/



//
// Registration routines.
//
// Called in the DSM's DriverEntry.
// The DSM will register with the main module by filling in the following structure
// and sending the REGISTER IOCTL
//

//
// DsmTypeUnknown == mustn't be used.
// DsmType1 == first version
// DsmType2 == indicates that DSM uses InterpretErrorEx() and handles WMI calls with
//             DSM_IDS passed in as extra parameter
// DsmType3 == indicates that DSM handles the case where its completion routine can be called with NULL DsmId
// DsmType4 == indicates that DSM provides version info
// DsmType5 == indicates that DSM provides additional DSM-centric (global) WMI classes (not used if Server 2008 or earlier)
// DsmType6 == indicates that DSM supports STORAGE_REQUEST_BLOCKs, the DSM_ADDRESS_TYPE_SUPPORTED and DSM_DEVICE_NOT_USED
//             functions, and is able to handle sense data in descriptor format
// DsmType7 == not used
//

#if (NTDDI_VERSION >= NTDDI_WIN8) // For Win8 Server and later.

typedef enum _DSM_TYPE {
    DsmTypeUnknown = 0,
    DsmType1,
    DsmType2,
    DsmType3,
    DsmType4,
    DsmType5,
    DsmType6,
    DsmType7
} DSM_TYPE, *PDSM_TYPE;

#elif (NTDDI_VERSION >= NTDDI_WIN7) // For Server 2008 R2 and later.

typedef enum _DSM_TYPE {
    DsmTypeUnknown = 0,
    DsmType1,
    DsmType2,
    DsmType3,
    DsmType4,
    DsmType5,
    DsmType6
} DSM_TYPE, *PDSM_TYPE;

#else // For Server 2008 and earlier.

typedef enum _DSM_TYPE {
    DsmTypeUnknown = 0,
    DsmType1,
    DsmType2,
    DsmType3,
    DsmType4,
    DsmType5
} DSM_TYPE, *PDSM_TYPE;

#endif

typedef struct _DSM_VERSION_INFO {
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG ProductBuild;
    ULONG QfeNumber;
} DSM_VERSION_INFO, *PDSM_VERSION_INFO;

typedef struct _DSM_INIT_DATA {

    //
    // Size, in bytes.
    //
    ULONG InitDataSize;

    //
    // DSM entry points.
    //
    DSM_INQUIRE_DRIVER DsmInquireDriver;
    DSM_COMPARE_DEVICES DsmCompareDevices;
    DSM_DEVICE_SERIAL_NUMBER DsmDeviceSerialNumber;
    DSM_GET_CONTROLLER_INFO DsmGetControllerInfo;
    DSM_SET_DEVICE_INFO DsmSetDeviceInfo;
    DSM_IS_PATH_ACTIVE DsmIsPathActive;
    DSM_PATH_VERIFY DsmPathVerify;
    DSM_INVALIDATE_PATH DsmInvalidatePath;
    DSM_MOVE_DEVICE DsmMoveDevice;
    DSM_REMOVE_PENDING DsmRemovePending;
    DSM_REMOVE_DEVICE DsmRemoveDevice;
    DSM_REMOVE_PATH DsmRemovePath;
    DSM_SRB_DEVICE_CONTROL DsmSrbDeviceControl;
    DSM_LB_GET_PATH DsmLBGetPath;
    union {
        DSM_INTERPRET_ERROR DsmInterpretError;
        DSM_INTERPRET_ERROR_EX DsmInterpretErrorEx;
    };
    DSM_UNLOAD DsmUnload;
    DSM_SET_COMPLETION DsmSetCompletion;
    DSM_CATEGORIZE_REQUEST DsmCategorizeRequest;
    DSM_BROADCAST_SRB DsmBroadcastSrb;

    //
    // Wmi entry point and guid information.
    //
    DSM_WMILIB_CONTEXT DsmWmiInfo;

    //
    // Context value.
    //
    PVOID DsmContext;

    //
    // DriverObject for the DSM.
    //
    PDRIVER_OBJECT DriverObject;

    //
    // Friendly name for the DSM.
    //
    UNICODE_STRING DisplayName;

    //
    // Reserved.
    //
    ULONG Reserved;

    //
    // Version 2 starts here...
    //

    DSM_TYPE DsmType;

    //
    // Version 4 starts here...
    //

    DSM_VERSION_INFO DsmVersion;

#if (NTDDI_VERSION >= NTDDI_WIN7) // For Server 2008 R2 and later.
    //
    // Version 5 starts here...
    //

    //
    // Wmi entry point and guid information for DSM-centric classes.
    //
    DSM_WMILIB_CONTEXT DsmWmiGlobalInfo;
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8) // For Win8 Server and later.
    //
    // Version 6 starts here...
    //

    //
    // Function to see if a certain address type is supported.
    //
    DSM_ADDRESS_TYPE_SUPPORTED DsmIsAddressTypeSupported;

    //
    // Function to indicate that a device instance will not be
    // initialized and can thus be immediately removed by the DSM.
    //
    DSM_DEVICE_NOT_USED DsmDeviceNotUsed;
#endif

} DSM_INIT_DATA, *PDSM_INIT_DATA;


#define DSM_INIT_DATA_TYPE_1_SIZE   (RTL_SIZEOF_THROUGH_FIELD(DSM_INIT_DATA, Reserved))
#define DSM_INIT_DATA_TYPE_2_SIZE   (RTL_SIZEOF_THROUGH_FIELD(DSM_INIT_DATA, DsmType))
#define DSM_INIT_DATA_TYPE_3_SIZE   DSM_INIT_DATA_TYPE_2_SIZE

#if (NTDDI_VERSION >= NTDDI_WIN8) // For Win8 Server and later.

#define DSM_INIT_DATA_TYPE_4_SIZE   (RTL_SIZEOF_THROUGH_FIELD(DSM_INIT_DATA, DsmVersion))
#define DSM_INIT_DATA_TYPE_5_SIZE   (RTL_SIZEOF_THROUGH_FIELD(DSM_INIT_DATA, DsmWmiGlobalInfo))
#define DSM_INIT_DATA_TYPE_6_SIZE   (sizeof(DSM_INIT_DATA))

#elif (NTDDI_VERSION == NTDDI_WIN7) // For Server 2008 R2.

#define DSM_INIT_DATA_TYPE_4_SIZE   (RTL_SIZEOF_THROUGH_FIELD(DSM_INIT_DATA, DsmVersion))
#define DSM_INIT_DATA_TYPE_5_SIZE   (sizeof(DSM_INIT_DATA))

#else // For Server 2008 and earlier.

#define DSM_INIT_DATA_TYPE_4_SIZE   (sizeof(DSM_INIT_DATA))

#endif


typedef struct _MPIO_VERSION_INFO {
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG ProductBuild;
    ULONG QfeNumber;
} MPIO_VERSION_INFO, *PMPIO_VERSION_INFO;

//
// Output structure for the registration. The DSM needs to keep this value for certain
// routines such as DsmNotification and DsmGetTargetObject.
//
typedef struct _DSM_MPIO_CONTEXT {
    PVOID MPIOContext;
} DSM_MPIO_CONTEXT, *PDSM_MPIO_CONTEXT;


//
// Input structure for deregistration.
//
typedef struct _DSM_DEREGISTER_DATA {

    //
    // Size in bytes
    //
    ULONG DeregisterDataSize;

    //
    // Context value.
    //
    PVOID DsmContext;

    //
    // DriverObject for the DSM.
    //
    PDRIVER_OBJECT DriverObject;

    //
    // MPIO context that was passed back to DSM at registration time
    //
    PDSM_MPIO_CONTEXT MpioContext;

} DSM_DEREGISTER_DATA, *PDSM_DEREGISTER_DATA;


#define MPIO_DSM ((ULONG) 'dsm')

//
// IOCTL sent by the DSM to pass entry point info to the MultiPath Control driver.
// Passed in structure defined above (DSM_INIT_DATA).
//
#define IOCTL_MPDSM_REGISTER    CTL_CODE (MPIO_DSM, 0x01, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//
// IOCTL sent by the DSM to deregister from the MultiPath Control driver.
// Passed in structure defined above (DSM_DEREGISTER_DATA).
//
#define IOCTL_MPDSM_DEREGISTER    CTL_CODE (MPIO_DSM, 0x02, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)


//
// DSM library routines.
//
VOID
DsmSendDeviceIoControlSynchronous(
    _In_ IN ULONG IoControlCode,
    _In_ IN PDEVICE_OBJECT TargetDeviceObject,
    _In_opt_ IN PVOID InputBuffer OPTIONAL,
    _Inout_opt_ IN OUT PVOID OutputBuffer OPTIONAL,
    _In_ IN ULONG InputBufferLength,
    _In_ IN ULONG OutputBufferLength,
    _In_ IN BOOLEAN InternalDeviceIoControl,
    _Out_ OUT PIO_STATUS_BLOCK IoStatus
    );

/*++

Routine Description:

    This routine is used by the DSM to send IoDeviceControls.
    Buffer must be of the appropriate size to encapsulate both input and output.
    This routine handles errors/retries.

Arguments:

    IoControlCode - The DeviceIoControl code.
    TargetDevice - DeviceObject to which the request should be sent.
    Buffer - The input/output buffer for the request.
    InputBufferLength - Length of the input parameters buffer.
    OutputBufferLength - Length of the output buffer
    InternalDeviceIoControl - Indicates whether the IOCTL is marked as Internal or public.
    IoStatus - IO STATUS BLOCK to receive the final status/information fields.

Return Value:

   NONE

--*/


NTSTATUS
DsmSendPassThroughDirect(
    _In_ IN PDEVICE_OBJECT DeviceObject,
    _In_ IN PSCSI_PASS_THROUGH_DIRECT ScsiPassThrough,
    _In_ IN ULONG InputBufferLength,
    _In_ IN ULONG OutputBufferLength
    );
/*++

Routine Description:

    This routine will send the requested ScsiPassThrough as 'Direct'.

Arguments:

    DeviceObject - Target of the request.
    ScsiPassThrough - A fully initialised ScsiPassThrough struct.
    InputBufferLength - Length, in bytes, of the Input buffer.
    OutputBufferLength - Length, in bytes, of the output buffer.

Return Value:

    The interpreted status of the request or SUCCESS.

--*/


NTSTATUS
DsmGetScsiAddress(
    _In_ IN PDEVICE_OBJECT DeviceObject,
    _Outptr_ OUT PSCSI_ADDRESS *ScsiAddress
    );
/*++

Routine Description:

    This routine will return the scsi_address (Port, Path, TargetId, LUN) of DeviceObject.
    The buffer for the Address will be allocated and it is the responsibility of the caller
    to free it.

Arguments:

    DeviceObject - The DO of which the address is needed.
    ScsiAddress - Location where the address struct. will be placed.

Return Value:

    SUCCESS, INSUFFICIENT_RESOURCES, NO_SUCH_DEVICE

--*/


PDSM_IDS
DsmGetAssociatedDevice(
    _In_ IN PVOID MPIOContext,
    _In_ IN PDEVICE_OBJECT PortFdo,
    _In_ IN UCHAR DeviceType
    );
/*++

Routine Description:

    If the DSM needs to acquire information from other devices (such as a controller), this
    routine can be used to get a list of the PDO's associated with PortFdo.

Arguments:

    PortFdo - Port driver FDO passed to InquireDriver.
    DeviceType - Indicates the SCSI DeviceType to return.

Return Value:

    Pointer to a DSM_ID structure, where IdList entries are PDEVICE_OBJECT. It is the
    reponsibility of the DSM to free the buffer.

--*/


NTSTATUS
DsmReleaseQueue(
    _In_ IN PDEVICE_OBJECT TargetDevice
    );
/*++

Routine Description:

    In the event that a DSM-originated request freezes the queue (SRB_STATUS_QUEUE_FROZEN), this
    must be used to un-freeze the queue.
    DSM's must check the SRB_STATUS_XXX values upon request completion for those requests that
    they sent.

Arguments:

    TargetDevice - DeviceObject to which the release queue should be sent.

Return Value:

    Status of of the ReleaseQueue IOCTL.

--*/


NTSTATUS
DsmSendTUR(
    _In_ IN PDEVICE_OBJECT TargetDevice
    );
/*++

Routine Description:

    Sends a Test Unit Ready to TargetDevice.

Arguments:

    TargetDevice - DeviceObject to which the TUR should be sent.

Return Value:

    Status of of the TUR.

--*/

NTSTATUS
DsmSendRequest(
    _In_ IN PVOID MPIOContext,
    _In_ IN PDEVICE_OBJECT TargetDevice,
    _In_ IN PIRP Irp,
    _In_ IN PVOID DsmId
    );
/*++

Routine Description:

    This routine is used by the DSM to send it's OOB, Broadcast, or any other DSM built requests
    to TargetDevice. Not to be used for Irps sent to the DSM by the MPIO driver. Using this
    routine allows MPIO to maintain the necessary state info so that Power and PnP requests
    can be handled correctly.

Arguments:

    MPIOContext - Value given to dsm during init.
    TargetDevice - DeviceObject to which Irp should be sent.
    Irp - The request to send.
    DsmId - DSM value referring to the port PDO.

Return Value:

    Status of IoCallDriver or an error status if one is detected.

--*/

NTSTATUS
DsmSendRequestEx(
    _In_ IN PVOID MPIOContext,
    _In_ IN PDEVICE_OBJECT TargetDevice,
    _In_ IN PIRP Irp,
    _In_ IN PVOID DsmId,
    _In_ IN ULONG Flags
    );
/*++

Routine Description:

    This routine is used by the DSM to send it's OOB, Broadcast, or any other DSM built requests
    to TargetDevice. Not to be used for Irps sent to the DSM by the MPIO driver. Using this
    routine allows MPIO to maintain the necessary state info so that Power and PnP requests
    can be handled correctly.

Arguments:

    MPIOContext - Value given to dsm during init.
    TargetDevice - DeviceObject to which Irp should be sent.
    Irp - The request to send.
    DsmId - DSM value referring to the port PDO.
    Flags - DSM_CALL_COMPLETION_ON_MPIO_ERROR
            - Specifies that the completion routine should be called even if DsmSendRequestEx
              exits before calling IoCallDriver due to an error.

Return Value:

    Status of IoCallDriver or an error status if one is detected.

--*/

//
// DsmSendRequestEx specific flags
//

#define DSM_CALL_COMPLETION_ON_MPIO_ERROR   0x00000001

VOID
DsmCompleteRequest(
    _In_ IN PVOID MPIOContext,
    _In_ IN PVOID DsmId
    );
/*++

Routine Description:

    This routine is used by the DSM on completion of a request sent via DsmSendRequest. This
    notifies MPIO that the request is no longer outstanding and to release any references that
    were being held.

    NOTE: This should NOT be called if DsmSendRequest returned any error status values. If an
    error was returned, SendRequest did any clean-up necessary.

Arguments:

    MPIOContext - The Context value (FDO) given to the DSM during init.
    DsmId        - The DSM ID associated with DeviceObject.

Return Value:

    NONE

--*/

PDEVICE_OBJECT
DsmGetPDO(
    _In_ IN PVOID MPIOContext,
    _In_ IN PDEVICE_OBJECT DeviceObject
    );
/*++

Routine Description:

    This routine is used by the DSM to retrieve the PDO for an adapter FDO.
    The DeviceObject passed in must be the PortFdo supplied to InquireDriver.

Arguments:

    MPIOContext - Value given to the DSM during initialization.
    DeviceObject - The PortFDO that the PDO is needed.

Return Value:

    The PDO or NULL.
--*/


typedef enum _DSM_NOTIFICATION_TYPE {
     DeviceFailure,
     PathFailure,
     PathOnLine,
     ThrottleIO,
     ResumeIO,
     SetCurrentPath,
     ThrottleIO_V2,
     ResumeIO_V2,
     SetCurrentPath_V2,
     MaxDsmNotificationType
} DSM_NOTIFICATION_TYPE, *PDSM_NOTIFICATION_TYPE;


VOID
DsmNotification(
    _In_ IN PVOID MPIOContext,
    _In_ IN DSM_NOTIFICATION_TYPE NotificationType,
    ...
    );
/*++

Routine Description:

    This routine is called by the DSM to inform mpctl of certain events such as
    Device/Path failure, Device/Path coming back online after a failure, WMI Events, or TBD....

Arguments:

    MPIOContext - Value given to the DSM during initialization.
    NotificationType - Specifies the type of notification.
    Additional Parameters depend on NotificationType
        DeviceFailure - DsmId (PVOID)
        PathFailure - PathId (PVOID)
        PathOnLine - PathId (PVOID)
        ThrottleIO - DsmId (PVOID)
        ResumeIO - DsmId (PVOID)
        SetCurrentPath - PathId (PVOID), DsmId (PVOID)
        ThrottleIO_V2 - DsmId (PVOID), Reserved1 (BOOLEAN), Status (PNTSTATUS), Reserved (LONG)
        ResumeIO_V2 - DsmId (PVOID), Categorize (BOOLEAN), Status (PNTSTATUS), Reserved (LONG)
                                     If Categorize is TRUE, then throttled requests will be presented
                                                   to DSM's LBGetPath or CategorizeRequest (as appropriate)
                                     Reserved must be passed in as 0
        SetCurrentPath_V2 - PathId (PVOID), DsmId (PVOID), Status (PNTSTATUS), Reserved (LONG)

Return Value:

    None

--*/


NTSTATUS
DsmWriteEvent(
    _In_ IN PVOID MPIOContext,
    _In_ IN PWSTR ComponentName,
    _In_ IN PWSTR EventDescription,
    _In_ IN ULONG Severity
    );
/*++

Routine Description:

    The will cause a WMI Event to be fired, containing the Paramter information as
    the event data.

Arguments:

    MpctlContext - Value given to the DSM during initialization.
    ComponentName - Name of the object effected.
    EventDescription - Description of the event.
    Severity - Lower is worse.

Return Value:

    None

--*/

NTSTATUS
DsmGetVersion(
    _Inout_ IN OUT PMPIO_VERSION_INFO MpioVersion,
    _In_ IN ULONG MpioVersionSize
    );
/*++

Routine Description:

    This routine will return the version of multipath drivers installed.

Arguments:

    MpioVersion - pointer to version structure.
    MpioVersionSize - byte size of input structure.

Return Value:

    NTSTATUS

--*/

PVOID
DsmGetContextFromSrb(
    _In_ IN PSCSI_REQUEST_BLOCK Srb
    );
/*++

Routine Description:

    This routine will return the DSM-supplied per-request context associated with
    Srb. This routine can only be called after DsmSetCompletion and must be in the context
    of one of the DSM's exported functions.

Arguments:

    Srb - The SCSI_REQUEST_BLOCK to which the DSM-supplied context is associated.

Return Value:

    The context or NULL.

--*/


#endif // _DSM_H_
