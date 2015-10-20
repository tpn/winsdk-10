/*++

Copyright (c) Microsoft Corporation

Module Name:

    wmilib.h

Abstract:

    This module contains the internal structure definitions and APIs used by
    the WMILIB helper functions

Revision History:

--*/

#ifndef _WMILIB_
#define _WMILIB_

#if defined (_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

//
// This defines a guid to be registered with WMI. Memory for this structure
// may be Paged.
//

typedef struct _WMIGUIDREGINFO {
    LPCGUID Guid;            // Guid to registered
    ULONG InstanceCount;     // Count of Instances of Datablock
    ULONG Flags;             // Additional flags (see WMIREGINFO in wmistr.h)
} WMIGUIDREGINFO, *PWMIGUIDREGINFO;

typedef enum _WMIENABLEDISABLECONTROL {
    WmiEventControl,       // Enable or disable an event
    WmiDataBlockControl    // Enable or disable data block collection
} WMIENABLEDISABLECONTROL, *PWMIENABLEDISABLECONTROL;

typedef enum _SYSCTL_IRP_DISPOSITION {
    IrpProcessed,    // Irp was processed and possibly completed
    IrpNotCompleted, // Irp was process and NOT completed
    IrpNotWmi,       // Irp is not a WMI irp
    IrpForward       // Irp is wmi irp, but targeted at another device object
} SYSCTL_IRP_DISPOSITION, *PSYSCTL_IRP_DISPOSITION;

_Function_class_(WMI_QUERY_REGINFO_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_QUERY_REGINFO_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PULONG RegFlags,
    _Inout_ PUNICODE_STRING InstanceName,
    _Outptr_result_maybenull_ PUNICODE_STRING *RegistryPath,
    _Inout_ PUNICODE_STRING MofResourceName,
    _Outptr_result_maybenull_ PDEVICE_OBJECT *Pdo
    );

typedef WMI_QUERY_REGINFO_CALLBACK *PWMI_QUERY_REGINFO;

/*++

Routine Description:

    This routine is a callback into the driver to retrieve information about
    the guids being registered.
	
    Implementations of this routine may be in paged memory

Arguments:

    DeviceObject is the device whose registration information is needed

    *RegFlags returns with a set of flags that describe all of the guids being
        registered for this device. If the device wants enable and disable
        collection callbacks before receiving queries for the registered
        guids then it should return the WMIREG_FLAG_EXPENSIVE flag. Also the
        returned flags may specify WMIREG_FLAG_INSTANCE_PDO in which case
        the instance name is determined from the PDO associated with the
        device object. Note that the PDO must have an associated devnode. If
        WMIREG_FLAG_INSTANCE_PDO is not set then Name must return a unique
        name for the device. These flags are ORed into the flags specified
        by the GUIDREGINFO for each guid.		

    InstanceName returns with the instance name for the guids if
        WMIREG_FLAG_INSTANCE_PDO is not set in the returned *RegFlags. The
        caller will call ExFreePool with the buffer returned.

    *RegistryPath returns with the registry path of the driver. This is
        required
		
    MofResourceName returns with the name of the MOF resource attached to
        the binary file. If the driver does not have a mof resource attached
        then this can be returned unmodified. If a value is returned then
        it is NOT freed.
		
    *Pdo returns with the device object for the PDO associated with this
        device if the WMIREG_FLAG_INSTANCE_PDO flag is retured in
        *RegFlags.

Return Value:

    status

--*/

_Function_class_(WMI_QUERY_DATABLOCK_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_QUERY_DATABLOCK_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG InstanceCount,
    _Out_writes_opt_(InstanceCount) PULONG InstanceLengthArray,
    _In_ ULONG BufferAvail,
    _Out_writes_bytes_opt_(BufferAvail) PUCHAR Buffer
    );

typedef WMI_QUERY_DATABLOCK_CALLBACK *PWMI_QUERY_DATABLOCK;

/*++

Routine Description:

    This routine is a callback into the driver to query for the contents of
    one or more instances of a data block. When the driver has finished
    filling the
    data block it must call WmiCompleteRequest to complete the irp. The
    driver can return STATUS_PENDING if the irp cannot be completed
    immediately.

    Implementations of this routine may be in paged memory

Arguments:

    DeviceObject is the device whose data block is being queried

    Irp is the Irp that makes this request

    GuidIndex is the index into the list of guids provided when the
        device registered

    InstanceIndex is the index that denotes which instance of the data block
        is being queried.

    InstanceCount is the number of instances expected to be returned for
        the data block.

    InstanceLengthArray is a pointer to an array of ULONG that returns the
        lengths of each instance of the data block. If this is NULL then
        there was not enough space in the output buffer to fufill the request
        so the irp should be completed with the buffer needed.

    BufferAvail on entry has the maximum size available to write the data
        blocks.

    Buffer on return is filled with the returned data blocks. Note that each
        instance of the data block must be aligned on a 8 byte boundry. If
        this is NULL then there was not enough space in the output buffer
	to fufill the request so the irp should be completed with the buffer
        needed.


Return Value:

    status

--*/

_Function_class_(WMI_SET_DATABLOCK_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_SET_DATABLOCK_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer
    );

typedef WMI_SET_DATABLOCK_CALLBACK *PWMI_SET_DATABLOCK;

/*++

Routine Description:

    This routine is a callback into the driver to query for the contents of
    a data block. When the driver has finished filling the data block it
    must call WmiCompleteRequest to complete the irp. The driver can
    return STATUS_PENDING if the irp cannot be completed immediately.

    Implementations of this routine may be in paged memory

Arguments:

    DeviceObject is the device whose data block is being queried

    Irp is the Irp that makes this request

    GuidIndex is the index into the list of guids provided when the
        device registered

    InstanceIndex is the index that denotes which instance of the data block
        is being set.

    BufferSize has the size of the data block passed

    Buffer has the new values for the data block


Return Value:

    status

--*/

_Function_class_(WMI_SET_DATAITEM_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_SET_DATAITEM_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG DataItemId,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer
    );

typedef WMI_SET_DATAITEM_CALLBACK *PWMI_SET_DATAITEM;

/*++

Routine Description:

    This routine is a callback into the driver to query for the contents of
    a data block. When the driver has finished filling the data block it
    must call WmiCompleteRequest to complete the irp. The driver can
    return STATUS_PENDING if the irp cannot be completed immediately.

    Implementations of this routine may be in paged memory

Arguments:

    DeviceObject is the device whose data block is being queried

    Irp is the Irp that makes this request

    GuidIndex is the index into the list of guids provided when the
        device registered

    InstanceIndex is the index that denotes which instance of the data block
        is being set.

    DataItemId has the id of the data item being set

    BufferSize has the size of the data item passed

    Buffer has the new values for the data item


Return Value:

    status

--*/

_Function_class_(WMI_EXECUTE_METHOD_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_EXECUTE_METHOD_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG InstanceIndex,
    _In_ ULONG MethodId,
    _In_ ULONG InBufferSize,
    _In_ ULONG OutBufferSize,
    _Inout_updates_bytes_(OutBufferSize) PUCHAR Buffer
    );

typedef WMI_EXECUTE_METHOD_CALLBACK *PWMI_EXECUTE_METHOD;

/*++

Routine Description:

    This routine is a callback into the driver to execute a method. When the
    driver has finished filling the data block it must call
    WmiCompleteRequest to complete the irp. The driver can
    return STATUS_PENDING if the irp cannot be completed immediately.

    Implementations of this routine may be in paged memory

Arguments:

    DeviceObject is the device whose data block is being queried

    Irp is the Irp that makes this request

    GuidIndex is the index into the list of guids provided when the
        device registered

    InstanceIndex is the index that denotes which instance of the data block
        is being called.

    MethodId has the id of the method being called

    InBufferSize has the size of the data block passed in as the input to
        the method.

    OutBufferSize on entry has the maximum size available to write the
        returned data block.

    Buffer on entry has the input data block and on return has the output
        output data block.


Return Value:

    status

--*/

_Function_class_(WMI_FUNCTION_CONTROL_CALLBACK)
_IRQL_requires_same_
_Must_inspect_result_
typedef
NTSTATUS
WMI_FUNCTION_CONTROL_CALLBACK (
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ WMIENABLEDISABLECONTROL Function,
    _In_ BOOLEAN Enable
    );

typedef WMI_FUNCTION_CONTROL_CALLBACK *PWMI_FUNCTION_CONTROL;

/*++

Routine Description:

    This routine is a callback into the driver to enabled or disable event
    generation or data block collection. A device should only expect a
    single enable when the first event or data consumer enables events or
    data collection and a single disable when the last event or data
    consumer disables events or data collection. Data blocks will only
    receive collection enable/disable if they were registered as requiring
    it.

    Implementations of this routine may be in paged memory

Arguments:

    DeviceObject is the device whose data block is being queried

    GuidIndex is the index into the list of guids provided when the
        device registered

    Function specifies which functionality is being enabled or disabled

    Enable is TRUE then the function is being enabled else disabled

Return Value:

    status

--*/

//
// This structure supplies context information for WMILIB to process the
// WMI irps. Memory for this structure may be paged.
//

typedef struct _WMILIB_CONTEXT {

    //
    // WMI data block guid registration info
    //

    ULONG GuidCount;
    _Field_size_(GuidCount) PWMIGUIDREGINFO GuidList;

    //
    // WMI functionality callbacks
    //

    PWMI_QUERY_REGINFO QueryWmiRegInfo;
    PWMI_QUERY_DATABLOCK QueryWmiDataBlock;
    PWMI_SET_DATABLOCK SetWmiDataBlock;
    PWMI_SET_DATAITEM SetWmiDataItem;
    PWMI_EXECUTE_METHOD ExecuteWmiMethod;
    PWMI_FUNCTION_CONTROL WmiFunctionControl;
} WMILIB_CONTEXT, *PWMILIB_CONTEXT;

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
WmiCompleteRequest (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ NTSTATUS Status,
    _In_ ULONG BufferUsed,
    _In_ CCHAR PriorityBoost
    );

/*++

Routine Description:


    This routine will do the work of completing a WMI irp. Depending upon the
    the WMI request this routine will fixup the returned WNODE appropriately.

    This may be called at DPC level
Arguments:

    DeviceObject - Supplies a pointer to the device object for this request.

    Irp - Supplies the Irp making the request.

    Status has the return status code for the IRP

    BufferUsed has the number of bytes needed by the device to return the
       data requested in any query. In the case that the buffer passed to
       the device is too small this has the number of bytes needed for the
       return data. If the buffer passed is large enough then this has the
       number of bytes actually used by the device.

    PriorityBoost is the value used for the IoCompleteRequest call.

Return Value:

    status

--*/
#endif // (NTDDI_VERSION >= NTDDI_WIN2K)

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Success_(TRUE)
NTSTATUS
WmiSystemControl (
    _In_ PWMILIB_CONTEXT WmiLibInfo,
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _Out_ _At_(*IrpDisposition, _Must_inspect_result_) PSYSCTL_IRP_DISPOSITION IrpDisposition
    );

/*++

Routine Description:

    Dispatch helper routine for IRP_MJ_SYSTEM_CONTROL. This routine will
    determine if the irp passed contains a WMI request and if so process it
    by invoking the appropriate callback in the WMILIB structure.

    This routine may only be called at passive level

Arguments:

    WmiLibInfo has the WMI information control block

    DeviceObject - Supplies a pointer to the device object for this request.

    Irp - Supplies the Irp making the request.

    IrpDisposition - Returns a value that specifies how the irp was handled.

Return Value:

    status

--*/
#endif // (NTDDI_VERSION >= NTDDI_WIN2K)

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
_Success_(TRUE)
NTSTATUS
WmiFireEvent (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ LPCGUID Guid,
    _In_ ULONG InstanceIndex,
    _In_ ULONG EventDataSize,
    _In_reads_bytes_opt_(EventDataSize) __drv_freesMem(Mem) PVOID EventData
    );

/*++

Routine Description:

    This routine will fire a WMI event using the data buffer passed. This
    routine may be called at or below DPC level

Arguments:

    DeviceObject - Supplies a pointer to the device object for this event

    Guid is pointer to the GUID that represents the event

    InstanceIndex is the index of the instance of the event

    EventDataSize is the number of bytes of data that is being fired with
       with the event

    EventData is the data that is fired with the events. This may be NULL
        if there is no data associated with the event

Return Value:

    status

--*/
#endif // (NTDDI_VERSION >= NTDDI_WIN2K)

#ifdef __cplusplus
}
#endif

#endif

