/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    classpnp.h

Abstract:

    These are the structures and defines that are used in the
    SCSI class drivers.

--*/

#ifndef _CLASS_
#define _CLASS_

#include <ntdddisk.h>
#include <ntddcdrm.h>
#include <ntddtape.h>
#include <ntddscsi.h>
#include "ntddstor.h"

#include <stdio.h>

#include <scsi.h>

#if defined DebugPrint
    #undef DebugPrint
#endif

#ifdef TRY
    #undef TRY
#endif
#ifdef LEAVE
    #undef LEAVE
#endif
#ifdef FINALLY
    #undef FINALLY
#endif

#define TRY
#define LEAVE   goto __tryLabel;
#define FINALLY __tryLabel:

// #define ALLOCATE_SRB_FROM_POOL

//
// describes the well-known bit masks for ClassDebug, and describes the bits
// to enable in the debugger to view just those messages.  ClassDebugExternalX
// are reserved for third-party components' debugging use.  Anything above
// 16 will only be printed if the lower two bytes of ClassDebug are higher
// than the given level (no masking will be available).
//

typedef enum _CLASS_DEBUG_LEVEL {
    ClassDebugError        = 0,  // always printed
    ClassDebugWarning      = 1,  // set bit 0x00010000 in ClassDebug
    ClassDebugTrace        = 2,  // set bit 0x00020000 in ClassDebug
    ClassDebugInfo         = 3,  // set bit 0x00040000 in ClassDebug
#if 0
    ClassDebug Internal    = 4,  // set bit 0x00080000 in ClassDebug

    ClassDebug Internal    = 5,  // set bit 0x00100000 in ClassDebug
    ClassDebug Internal    = 6,  // set bit 0x00200000 in ClassDebug
    ClassDebug Internal    = 7,  // set bit 0x00400000 in ClassDebug
#endif // 0
    ClassDebugMediaLocks   = 8,  // set bit 0x00800000 in ClassDebug

    ClassDebugMCN          = 9,  // set bit 0x01000000 in ClassDebug
    ClassDebugDelayedRetry = 10, // set bit 0x02000000 in ClassDebug
    ClassDebugSenseInfo    = 11, // set bit 0x04000000 in ClassDebug
    ClassDebugRemoveLock   = 12, // set bit 0x08000000 in ClassDebug

    ClassDebugExternal4    = 13, // set bit 0x10000000 in ClassDebug
    ClassDebugExternal3    = 14, // set bit 0x20000000 in ClassDebug
    ClassDebugExternal2    = 15, // set bit 0x40000000 in ClassDebug
    ClassDebugExternal1    = 16  // set bit 0x80000000 in ClassDebug
} CLASS_DEBUG_LEVEL, *PCLASS_DEBUG_LEVEL;

#if DBG

#define DebugPrint(x) ClassDebugPrint x

#else

#define DebugPrint(x)

#endif // DBG

#define DEBUG_BUFFER_LENGTH 256

//
// Define our private SRB flags.  The high nibble of the flag field is
// reserved for class drivers's private use.
//

//
// Used to indicate that this request shouldn't invoke any power type operations
// like spinning up the drive.
//

#define SRB_CLASS_FLAGS_LOW_PRIORITY      0x10000000

//
// Used to indicate that the completion routine should not free the srb.
//

#define SRB_CLASS_FLAGS_PERSISTANT        0x20000000

//
// Used to indicate that an SRB is the result of a paging operation.
//

#define SRB_CLASS_FLAGS_PAGING            0x40000000

//
// Used to indicate the completion routine should free the MDL.
//

#define SRB_CLASS_FLAGS_FREE_MDL          0x80000000

//
// Random macros which should probably be in the system header files
// somewhere.
//

#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))

//
// Bit Flag Macros
//

#define SET_FLAG(Flags, Bit)    ((Flags) |= (Bit))
#define CLEAR_FLAG(Flags, Bit)  ((Flags) &= ~(Bit))
#define TEST_FLAG(Flags, Bit)   (((Flags) & (Bit)) != 0)

//
// neat little hacks to count number of bits set efficiently
//
__inline ULONG CountOfSetBitsUChar(UCHAR _X)
{ ULONG i = 0; while (_X) { _X &= _X - 1; i++; } return i; }
__inline ULONG CountOfSetBitsULong(ULONG _X)
{ ULONG i = 0; while (_X) { _X &= _X - 1; i++; } return i; }
__inline ULONG CountOfSetBitsULong32(ULONG32 _X)
{ ULONG i = 0; while (_X) { _X &= _X - 1; i++; } return i; }
__inline ULONG CountOfSetBitsULong64(ULONG64 _X)
{ ULONG i = 0; while (_X) { _X &= _X - 1; i++; } return i; }
__inline ULONG CountOfSetBitsUlongPtr(ULONG_PTR _X)
{ ULONG i = 0; while (_X) { _X &= _X - 1; i++; } return i; }


//
// Helper macros to verify data types and cleanup the code.
//

#define ASSERT_FDO(x) \
    NT_ASSERT(((PCOMMON_DEVICE_EXTENSION) (x)->DeviceExtension)->IsFdo)

#define ASSERT_PDO(x) \
    NT_ASSERT(!(((PCOMMON_DEVICE_EXTENSION) (x)->DeviceExtension)->IsFdo))

#define IS_CLEANUP_REQUEST(majorFunction)   \
        ((majorFunction == IRP_MJ_CLOSE) ||     \
         (majorFunction == IRP_MJ_CLEANUP) ||   \
         (majorFunction == IRP_MJ_SHUTDOWN))

#define DO_MCD(fdoExtension)                                        \
    (((fdoExtension)->MediaChangeDetectionInfo != NULL) &&          \
     ((fdoExtension)->MediaChangeDetectionInfo->MediaChangeDetectionDisableCount == 0))

#define IS_SCSIOP_READ(opCode)         \
      ((opCode == SCSIOP_READ6)   ||   \
       (opCode == SCSIOP_READ)    ||   \
       (opCode == SCSIOP_READ12)  ||   \
       (opCode == SCSIOP_READ16))

#define IS_SCSIOP_WRITE(opCode)         \
      ((opCode == SCSIOP_WRITE6)   ||   \
       (opCode == SCSIOP_WRITE)    ||   \
       (opCode == SCSIOP_WRITE12)  ||   \
       (opCode == SCSIOP_WRITE16))

#define IS_SCSIOP_READWRITE(opCode)  (IS_SCSIOP_READ(opCode) || IS_SCSIOP_WRITE(opCode))

#define ADJUST_FUA_FLAG(fdoExt) {                                                       \
    if (TEST_FLAG(fdoExt->DeviceFlags, DEV_WRITE_CACHE) &&                              \
        !TEST_FLAG(fdoExt->DeviceFlags, DEV_POWER_PROTECTED) &&                         \
        !TEST_FLAG(fdoExt->ScanForSpecialFlags, CLASS_SPECIAL_FUA_NOT_SUPPORTED) ) {    \
        fdoExt->CdbForceUnitAccess = TRUE;                                              \
    } else {                                                                            \
        fdoExt->CdbForceUnitAccess = FALSE;                                             \
    }                                                                                   \
}

#define FREE_POOL(_PoolPtr)     \
    if (_PoolPtr != NULL) {     \
        ExFreePool(_PoolPtr);   \
        _PoolPtr = NULL;        \
    }

#ifdef POOL_TAGGING
#undef ExAllocatePool
#undef ExAllocatePoolWithQuota
#define ExAllocatePool(a,b) ExAllocatePoolWithTag(a,b,'nUcS')
//#define ExAllocatePool(a,b) #NT_ASSERT(0)
#define ExAllocatePoolWithQuota(a,b) ExAllocatePoolWithQuotaTag(a,b,'nUcS')
#endif

#define CLASS_TAG_AUTORUN_DISABLE           'ALcS'
#define CLASS_TAG_FILE_OBJECT_EXTENSION     'FLcS'
#define CLASS_TAG_MEDIA_CHANGE_DETECTION    'MLcS'
#define CLASS_TAG_MOUNT                     'mLcS'
#define CLASS_TAG_RELEASE_QUEUE             'qLcS'
#define CLASS_TAG_POWER                     'WLcS'
#define CLASS_TAG_WMI                       'wLcS'
#define CLASS_TAG_FAILURE_PREDICT           'fLcS'
#define CLASS_TAG_DEVICE_CONTROL            'OIcS'
#define CLASS_TAG_MODE_DATA                 'oLcS'
#define CLASS_TAG_MULTIPATH                 'mPcS'
#define CLASS_TAG_LOCK_TRACKING             'TLcS'
#define CLASS_TAG_LB_PROVISIONING           'PLcS'

#define MAXIMUM_RETRIES 4

#define CLASS_DRIVER_EXTENSION_KEY ((PVOID) ClassInitialize)

struct _CLASS_INIT_DATA;
typedef struct _CLASS_INIT_DATA
                CLASS_INIT_DATA,
                *PCLASS_INIT_DATA;

//
// our first attempt at keeping private data actually private....
//

struct _CLASS_PRIVATE_FDO_DATA;
typedef struct _CLASS_PRIVATE_FDO_DATA
                CLASS_PRIVATE_FDO_DATA,
              *PCLASS_PRIVATE_FDO_DATA;

struct _CLASS_PRIVATE_PDO_DATA;
typedef struct _CLASS_PRIVATE_PDO_DATA
                CLASS_PRIVATE_PDO_DATA,
              *PCLASS_PRIVATE_PDO_DATA;

struct _CLASS_PRIVATE_COMMON_DATA;
typedef struct _CLASS_PRIVATE_COMMON_DATA
                CLASS_PRIVATE_COMMON_DATA,
              *PCLASS_PRIVATE_COMMON_DATA;

//
// Possible values for the IsRemoved flag
//

#define NO_REMOVE 0
#define REMOVE_PENDING 1
#define REMOVE_COMPLETE 2


#define ClassAcquireRemoveLock(devobj, tag) \
    ClassAcquireRemoveLockEx(devobj, tag, __FILE__, __LINE__)

//
// Define start unit timeout to be 4 minutes.
//

#define START_UNIT_TIMEOUT  (60 * 4)

//
// Define media change test time to be 1 second for quicker response

#define MEDIA_CHANGE_DEFAULT_TIME    1

//
// Used to detect the loss of the autorun irp.
//

#define MEDIA_CHANGE_TIMEOUT_TIME  300

//
// Define the various states that media can be in for autorun.
//
typedef enum _MEDIA_CHANGE_DETECTION_STATE {
    MediaUnknown,
    MediaPresent,
    MediaNotPresent,
    MediaUnavailable   // e.g. cd-r media undergoing burn
} MEDIA_CHANGE_DETECTION_STATE, *PMEDIA_CHANGE_DETECTION_STATE;


struct _MEDIA_CHANGE_DETECTION_INFO;
typedef struct _MEDIA_CHANGE_DETECTION_INFO
    MEDIA_CHANGE_DETECTION_INFO, *PMEDIA_CHANGE_DETECTION_INFO;

//
// Structures for maintaining a dictionary list (list of objects
// referenced by a key value)
//

struct _DICTIONARY_HEADER;
typedef struct _DICTIONARY_HEADER DICTIONARY_HEADER, *PDICTIONARY_HEADER;

typedef struct _DICTIONARY {
    ULONGLONG Signature;
    PDICTIONARY_HEADER List;
    KSPIN_LOCK SpinLock;
} DICTIONARY, *PDICTIONARY;


//
// structures to simplify matching devices, ids, and hacks required for
// these ids.
//

typedef struct _CLASSPNP_SCAN_FOR_SPECIAL_INFO {

    //
    // * NULL pointers indicates that no match is required.
    // * empty string will only match an empty string.  non-existant strings
    //   in the device descriptor are considered empty strings for this match.
    //   (ie. "" will only match "")
    // * all other strings will do partial matches, based upon
    //   string provided (ie. "hi" will match "hitazen" and "higazui")
    // * array must end with all three PCHARs being set to NULL.
    //

    PCHAR      VendorId;
    PCHAR      ProductId;
    PCHAR      ProductRevision;

    //
    // marked as a ULONG_PTR to allow use as either a ptr to a data block
    // or 32 bits worth of flags. (64 bits on 64 bit systems)  no longer a
    // const so that it may be dynamically built.
    //

    ULONG_PTR  Data;

} CLASSPNP_SCAN_FOR_SPECIAL_INFO, *PCLASSPNP_SCAN_FOR_SPECIAL_INFO;




#ifdef ALLOCATE_SRB_FROM_POOL

#define ClasspAllocateSrb(ext)
    ExAllocatePoolWithTag(NonPagedPool,                 \
                          sizeof(SCSI_REQUEST_BLOCK),   \
                          'sBRS')

#define ClasspFreeSrb(ext, srb)     ExFreePool((srb));

#else

#define ClasspAllocateSrb(ext)                      \
    ExAllocateFromNPagedLookasideList(              \
        &((ext)->CommonExtension.SrbLookasideList))

#define ClasspFreeSrb(ext, srb)                     \
    ExFreeToNPagedLookasideList(                    \
        &((ext)->CommonExtension.SrbLookasideList), \
        (srb))

#endif


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_ERROR()

Routine Description:

    This routine is a callback into the driver to handle errors.  The queue
    shall not be unfrozen when this error handler is called, even though the
    SRB flags may mark the queue as having been frozen due to this SRB.

Irql:

    This routine will be called at KIRQL <= DISPATCH_LEVEL

Arguments:

    DeviceObject is the device object the error occurred on.

    Srb is the Srb that was being processed when the error occurred.

    Status may be overwritten by the routine if it decides that the error
        was benign, or otherwise wishes to change the returned status code
        for this command

    Retry may be overwritten to specify that this command should or should
        not be retried (if the callee supports retrying commands)

Return Value:

    status

--*/

_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
VOID
(*PCLASS_ERROR) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _Out_ NTSTATUS *Status,
    _Inout_ BOOLEAN *Retry
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_ADD_DEVICE()

Routine Description:

    This routine is a callback into the driver to create and initialize a new
    FDO for the corresponding PDO.  It may perform property queries on the PDO
    but cannot do any media access operations.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DriverObject is the class driver object this callback is registered for.

    PDO is the physical device object being added to.

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_ADD_DEVICE) (
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDEVICE_OBJECT Pdo
    );


/*++////////////////////////////////////////////////////////////////////////////

CLASS_POWER_DEVICE()

Routine Description:

    This routine is a callback into the driver to handle power up and
    power down requests.  Most drivers can set this to ClassPowerHandler,
    which will send a STOP_UNIT on powerdown, and a START_UNIT on powerup.
    ClassMinimalPowerHandler() may also be used to do nothing for power
    operations (except succeed them).  Please see the DDK for proper handling
    of IRP_MN_DEVICE_USAGE_NOTIFICATION for details regarding interaction
    of paging device notifications and the IRQL at which this routine will
    be called.

Irql:

    This routine will be called at PASSIVE_LEVEL if DO_POWER_PAGABLE is set.
    This code should NOT be pagable to prevent race conditions during the
    setting and clearing of the DO_POWER_PAGABLE bit.

Arguments:

    DeviceObject is the device that has the pending power request

    Irp is the power irp that needs to be handled

Return Value:

    status

--*/
typedef
NTSTATUS
(*PCLASS_POWER_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );

/*++////////////////////////////////////////////////////////////////////////////

CLASS_START_DEVICE()

Routine Description:

    This routine is a callback into the driver to initialize the FDO or PDO for
    all requests, typically due to a IRP_MN_START_DEVICE.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device object being started

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_START_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject
    );


/*++////////////////////////////////////////////////////////////////////////////

CLASS_STOP_DEVICE()

Routine Description:

    This routine is a callback into the driver to stop the device.
    For the storage stack, unless there are known issues, this routine
    need only return.  All queueing shall be handled by the lower device
    drivers.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device object being stopped/query stopped.

    Type is the IRP_MN_ type that must be handled.

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_STOP_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ UCHAR Type
    );


/*++////////////////////////////////////////////////////////////////////////////

CLASS_INIT_DEVICE()

Routine Description:

    This routine is a callback into the driver to do one-time initialization
    of new device objects.  It shall be called exactly once per device object,
    and it shall be called prior to CLASS_START_DEVICE() routine.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device object to be initialized

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_INIT_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject
    );


/*++////////////////////////////////////////////////////////////////////////////

CLASS_ENUM_DEVICE()

Routine Description:

    This routine is a callback into the driver to update the list of PDOs for
    a given FDO.  See DISK.SYS's DiskEnumerateDevice for an example of use.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the FDO which is being enumerated.

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_ENUM_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_READ_WRITE()

Routine Description:

    This routine is a callback into the driver to verify READ and WRITE irps.
    If the READ or WRITE request is failed, this routine shall set the Irp's
    IoStatus.Status to the returned error code and the IoStatus.Information
    field as appropriate for the given error.

Irql:

    This routine will be called at KIRQL <= DISPATCH_LEVEL

Arguments:

    DeviceObject is the device object being read from or written to

    Irp is the read or write request being processed

Return Value:

    status

--*/
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
NTSTATUS
(*PCLASS_READ_WRITE) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_DEVICE_CONTROL()

Routine Description:

    This routine is a callback into the driver to

Irql:

    This routine will only be called at PASSIVE_LEVEL for storage IOCTLs.
    The code must therefore not be paged, but may call paged code for those
    ioctls which have been defined to be sent at PASSIVE_LEVEL, such as the
    storage IOCTLS.  Otherwise KIRQL <= DISPATCH_LEVEL.

Arguments:

    DeviceObject is the device object the IOCTL may be for

    Irp is the IOCTL request currently being processed

Return Value:

    status

--*/
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
NTSTATUS
(*PCLASS_DEVICE_CONTROL) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_SHUTDOWN_FLUSH()

Routine Description:

    This routine is a callback into the driver to handle shutdown and flush
    irps.  These are sent by the system before it actually shuts down or when
    the file system does a flush.

    This routine may synchronize the device's media / cache and ensure the
    device is not locked if the system is in the process of shutting down.

Irql:

    This routine will be called at KIRQL <= DISPATCH_LEVEL

Arguments:

    DeviceObject is the device object that needs to be flushed

    Irp is the shutdown or flush request currently being processed

Return Value:

    status

--*/
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
NTSTATUS
(*PCLASS_SHUTDOWN_FLUSH) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_CREATE_CLOSE()

Routine Description:

    This routine is a callback into the driver when the device is opened or
    closed.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject that is handling the request

    Irp is the create or close request currently being processed

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_CREATE_CLOSE) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_QUERY_ID()

Routine Description:

    This routine generates the PNP id's for the device's enumerated PDOs.
    If the specified ID is one that cannot be generated, then the return
    status shall be STATUS_NOT_IMPLEMENTED so that classpnp shall not
    handle the request.  This routine shall allocate the buffer in the unicode
    string "IdString" upon success; it is the caller's responsibility to free
    this buffer when it is done.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the PDO to generate an ID for

    IdType is the type of ID to be generated

    UnicodeIdString is the string to place the results into

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_QUERY_ID) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BUS_QUERY_ID_TYPE IdType,
    _In_ PUNICODE_STRING IdString
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_REMOVE_DEVICE()

Routine Description:

    This routine is a callback into the driver to release any resources the
    device may have allocated for the device object.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device object being removed/query removed/etc.

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_REMOVE_DEVICE) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ UCHAR Type
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_UNLOAD()

Routine Description:

    This routine is a callback into the driver to unload itself.  It must free
    any resources allocated in the DriverEntry portion of the driver.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    X

    Irp is the IOCTL request currently being processed

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
VOID
(*PCLASS_UNLOAD) (
    _In_ PDRIVER_OBJECT DriverObject
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_QUERY_PNP_CAPABILITIES()

Routine Description:

    ISSUE-2000/02/18-henrygab - description required

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    PhysicalDeviceObject is the PDO for which this query shall occur

    Capabilities is a structure that shall be modified by this routine
        to report the device's capabilities.

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_QUERY_PNP_CAPABILITIES) (
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ PDEVICE_CAPABILITIES Capabilities
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_TICK()

Routine Description:

    This routine is a callback into the driver that is called once per second.

Irql:

    This routine will be called at DISPATCH_LEVEL

Arguments:

    DeviceObject is the device object for which the timer has fired

Return Value:

    status

--*/
_IRQL_requires_(DISPATCH_LEVEL)
typedef
VOID
(*PCLASS_TICK) (
    _In_ PDEVICE_OBJECT DeviceObject
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_QUERY_WMI_REGINFO_EX()

Routine Description:

    This routine is a callback into the driver to retrieve information about
    the guids being registered.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device whose registration information is needed

    *RegFlags returns with a set of flags that describe the guids being
        registered for this device. If the device wants enable and disable
        collection callbacks before receiving queries for the registered
        guids then it should return the WMIREG_FLAG_EXPENSIVE flag. Also the
        returned flags may specify WMIREG_FLAG_INSTANCE_PDO in which case
        the instance name is determined from the PDO associated with the
        device object. Note that the PDO must have an associated devnode. If
        WMIREG_FLAG_INSTANCE_PDO is not set then Name must return a unique
        name for the device.

    Name returns with the instance name for the guids if
        WMIREG_FLAG_INSTANCE_PDO is not set in the returned *RegFlags. The
        caller will call ExFreePool with the buffer returned.

    MofResourceName returns filled with a static string that contains
        the name of the MOF resource attached to the drivers image. The
        caller does not free the buffer as it is expected that the
        caller will use RtlInitializeUnicodeString to populate it.

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_QUERY_WMI_REGINFO_EX) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ ULONG *RegFlags,
    _Out_ PUNICODE_STRING Name,
    _Out_ PUNICODE_STRING MofResouceName
    );

/*++////////////////////////////////////////////////////////////////////////////

PCLASS_QUERY_WMI_REGINFO()

Routine Description:

    This routine is a callback into the driver to retrieve information about
    the guids being registered.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device whose registration information is needed

    *RegFlags returns with a set of flags that describe the guids being
        registered for this device. If the device wants enable and disable
        collection callbacks before receiving queries for the registered
        guids then it should return the WMIREG_FLAG_EXPENSIVE flag. Also the
        returned flags may specify WMIREG_FLAG_INSTANCE_PDO in which case
        the instance name is determined from the PDO associated with the
        device object. Note that the PDO must have an associated devnode. If
        WMIREG_FLAG_INSTANCE_PDO is not set then Name must return a unique
        name for the device.

    Name returns with the instance name for the guids if
        WMIREG_FLAG_INSTANCE_PDO is not set in the returned *RegFlags. The
        caller will call ExFreePool with the buffer returned.


Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_QUERY_WMI_REGINFO) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ ULONG *RegFlags,
    _Out_ PUNICODE_STRING Name
    );

/*++////////////////////////////////////////////////////////////////////////////

PCLASS_QUERY_WMI_DATABLOCK()

Routine Description:

    This routine is a callback into the driver to query for the contents of
    a data block. When the driver has finished filling the data block it
    must call ClassWmiCompleteRequest to complete the irp. The driver can
    return STATUS_PENDING if the irp cannot be completed immediately.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device whose data block is being queried

    Irp is the Irp that makes this request

    GuidIndex is the index into the list of guids provided when the
        device registered

    BufferAvail on has the maximum size available to write the data
        block.

    Buffer on return is filled with the returned data block


Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_QUERY_WMI_DATABLOCK) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG BufferAvail,
    _Out_writes_bytes_(BufferAvail) PUCHAR Buffer
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_SET_WMI_DATABLOCK()

Routine Description:

    This routine is a callback into the driver to query for the contents of
    a data block. When the driver has finished filling the data block it
    must call ClassWmiCompleteRequest to complete the irp. The driver can
    return STATUS_PENDING if the irp cannot be completed immediately.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device whose data block is being queried

    Irp is the Irp that makes this request

    GuidIndex is the index into the list of guids provided when the
        device registered

    BufferSize has the size of the data block passed

    Buffer has the new values for the data block


Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_SET_WMI_DATABLOCK) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_SET_WMI_DATAITEM()

Routine Description:

    This routine is a callback into the driver to query for the contents of
    a data block. When the driver has finished filling the data block it
    must call ClassWmiCompleteRequest to complete the irp. The driver can
    return STATUS_PENDING if the irp cannot be completed immediately.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device whose data block is being queried

    Irp is the Irp that makes this request

    GuidIndex is the index into the list of guids provided when the
        device registered

    DataItemId has the id of the data item being set

    BufferSize has the size of the data item passed

    Buffer has the new values for the data item


Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_SET_WMI_DATAITEM) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG DataItemId,
    _In_ ULONG BufferSize,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer
    );


/*++////////////////////////////////////////////////////////////////////////////

PCLASS_EXECUTE_WMI_METHOD()

Routine Description:

    This routine is a callback into the driver to execute a method. When the
    driver has finished filling the data block it must call
    ClassWmiCompleteRequest to complete the irp. The driver can
    return STATUS_PENDING if the irp cannot be completed immediately.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device whose data block is being queried

    Irp is the Irp that makes this request

    GuidIndex is the index into the list of guids provided when the
        device registered

    MethodId has the id of the method being called

    InBufferSize has the size of the data block passed in as the input to
        the method.

    OutBufferSize on entry has the maximum size available to write the
        returned data block.

    Buffer is filled with the returned data block


Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_EXECUTE_WMI_METHOD) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ ULONG MethodId,
    _In_ ULONG InBufferSize,
    _In_ ULONG OutBufferSize,
    _In_reads_(_Inexpressible_(max(InBufferSize, OutBufferSize))) PUCHAR Buffer
    );



//
// used by PCLASS_WMI_FUNCTION_CONTROL
//
typedef enum {
    EventGeneration,
    DataBlockCollection
} CLASSENABLEDISABLEFUNCTION;

/*++////////////////////////////////////////////////////////////////////////////

PCLASS_WMI_FUNCTION_CONTROL()

Routine Description:

    This routine is a callback into the driver to enabled or disable event
    generation or data block collection. A device should only expect a
    single enable when the first event or data consumer enables events or
    data collection and a single disable when the last event or data
    consumer disables events or data collection. Data blocks will only
    receive collection enable/disable if they were registered as requiring
    it.

Irql:

    This routine will be called at PASSIVE_LEVEL.
    Its code may be safely paged.

Arguments:

    DeviceObject is the device whose data block is being queried

    GuidIndex is the index into the list of guids provided when the
        device registered

    Function specifies which functionality is being enabled or disabled

    Enable is TRUE then the function is being enabled else disabled

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PCLASS_WMI_FUNCTION_CONTROL) (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG GuidIndex,
    _In_ CLASSENABLEDISABLEFUNCTION Function,
    _In_ BOOLEAN Enable
    );

/*++////////////////////////////////////////////////////////////////////////////

    This structure defines the history kept for a given transfer packet.
    It includes a srb status/sense data structure that is always either valid
    or zero-filled for the full 18 bytes, time sent/completed, and how long
    the retry delay was requested to be.

--*/
typedef struct _SRB_HISTORY_ITEM {
    LARGE_INTEGER TickCountSent;             //  0x00..0x07
    LARGE_INTEGER TickCountCompleted;        //  0x08..0x0F
    ULONG         MillisecondsDelayOnRetry;  //  0x10..0x13
    SENSE_DATA    NormalizedSenseData;       //  0x14..0x25 (0x12 bytes)
    UCHAR         SrbStatus;                 //  0x26
    UCHAR         ClassDriverUse;            //  0x27 -- one byte free (alignment)
} SRB_HISTORY_ITEM, *PSRB_HISTORY_ITEM;

typedef struct _SRB_HISTORY {
    ULONG_PTR        ClassDriverUse[4]; // for the class driver to use as they please
    _Field_range_(1,30000)
    ULONG            TotalHistoryCount;
    _Field_range_(0,TotalHistoryCount)
    ULONG            UsedHistoryCount;
    _Field_size_part_(TotalHistoryCount, UsedHistoryCount)
    SRB_HISTORY_ITEM History[1];
} SRB_HISTORY, *PSRB_HISTORY;

/*++////////////////////////////////////////////////////////////////////////////

PCLASS_INTERPRET_SENSE_INFO()

Routine Description:

    This routine is a callback into the driver to perform interpretation of the
    errors that may have occurred during an SRB transfer.  It closely matches the
    API set of ClassInterpretSenseInfo, with modifications to allow for a history
    of why the request was previously retried (and when), and changes the retry
    interval from being in seconds to being in milliseconds.  Finally, use of this
    extended API removes all retry logic from classpnp for these requests.  Thus,
    the provided routine must return FALSE when it determines the number of times
    the request should be retried has been exceeded.

Irql:

    This routine will be called at KIRQL <= DISPATCH_LEVEL

NOTE:

    Although it is not illegal to have both a PCLASS_INTERPRET_SENSE_INFO() and
    a PCLASS_ERROR() routine, the PCLASS_ERROR() function will only be called
    if the class driver (as part of its PCLASS_INTERPRET_SENSE_INFO() routine)
    calls into the legacy ClassInterpretSenseInfo().

Arguments:


Return Value:

    TRUE if the request should be retried
    FALSE if the request should be failed

--*/

// NOTE: Start with a smaller 100 second maximum, due to current NT_ASSERT in CLASSPNP
//       0x0000 00C9'2A69 C000 (864,000,000,000) is 24 hours in 100ns units
//       0x0000 0000'3B9A CA00 (  1,000,000,000) is 100 seconds in 100ns units
#define MAXIMUM_RETRY_FOR_SINGLE_IO_IN_100NS_UNITS (0x3B9ACA00)

_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
BOOLEAN
(*PCLASS_INTERPRET_SENSE_INFO) (
    _In_      PDEVICE_OBJECT      Fdo,
    _In_opt_  PIRP                OriginalRequest, // not always the same as in SRB
    _In_      PSCSI_REQUEST_BLOCK Srb,
    _In_      UCHAR               MajorFunctionCode,
    _In_      ULONG               IoDeviceCode,
    _In_      ULONG               PreviousRetryCount,
    // const except for bits explicitly set aside for class driver to update
    _In_opt_  SRB_HISTORY *       RequestHistory,
    _Out_     NTSTATUS    *       Status,
    _Out_ _Deref_out_range_(0,MAXIMUM_RETRY_FOR_SINGLE_IO_IN_100NS_UNITS)
              LONGLONG * RetryIn100nsUnits
    );

/*++////////////////////////////////////////////////////////////////////////////

PCLASS_COMPRESS_HISTORY_DATA()

Routine Description:

    This routine is a callback into the driver to perform "compression" of the
    history data that is saved during retry of SRBs.  The function will only be
    called when the history array is full (UsedHistoryCount == TotalHistoryCount).
    This function must reduce the overall UsedHistoryCount by at least one
    element (and update the UsedHistoryCount field appropriately).
    .  that may have occurred during an SRB transfer.  It closely matches the
    API set of ClassInterpretSenseInfo, with modifications to allow for a history
    of why the request was previously retried (and when), and changes the retry
    interval from being in seconds to being in milliseconds.  Finally, use of this
    extended API removes all retry logic from classpnp for these requests.  Thus,
    the provided routine must return FALSE when it determines the number of times
    the request should be retried has been exceeded.

Irql:

    This routine will be called at KIRQL <= DISPATCH_LEVEL

NOTE:

    Although it is not illegal to have both a PCLASS_INTERPRET_SENSE_INFO() and
    a PCLASS_ERROR() routine, the PCLASS_ERROR() function will only be called
    if the class driver (as part of its PCLASS_INTERPRET_SENSE_INFO() routine)
    calls into the legacy ClassInterpretSenseInfo().

Arguments:


--*/
_IRQL_requires_max_(DISPATCH_LEVEL)
_At_(RequestHistory->UsedHistoryCount,
     _Pre_equal_to_(RequestHistory->TotalHistoryCount)
     _Out_range_(0, RequestHistory->TotalHistoryCount - 1))
typedef
VOID
(*PCLASS_COMPRESS_RETRY_HISTORY_DATA) (
    _In_     PDEVICE_OBJECT DeviceObject,
    _Inout_  PSRB_HISTORY   RequestHistory
    );

//
// Restricted - May only append to this structure for backwards compatibility
//
typedef struct {
    GUID Guid;               // Guid to registered
    ULONG InstanceCount;     // Count of Instances of Datablock
    ULONG Flags;             // Additional flags (see WMIREGINFO in wmistr.h)
} GUIDREGINFO, *PGUIDREGINFO;


//
// Restricted - May only append to this structure for backwards compatibility
//
typedef struct _CLASS_WMI_INFO {
    ULONG GuidCount;
    PGUIDREGINFO GuidRegInfo;

    PCLASS_QUERY_WMI_REGINFO      ClassQueryWmiRegInfo;
    PCLASS_QUERY_WMI_DATABLOCK    ClassQueryWmiDataBlock;
    PCLASS_SET_WMI_DATABLOCK      ClassSetWmiDataBlock;
    PCLASS_SET_WMI_DATAITEM       ClassSetWmiDataItem;
    PCLASS_EXECUTE_WMI_METHOD     ClassExecuteWmiMethod;
    PCLASS_WMI_FUNCTION_CONTROL   ClassWmiFunctionControl;
} CLASS_WMI_INFO, *PCLASS_WMI_INFO;


//
// Restricted - May only append to this structure for backwards compatibility
//
typedef struct _CLASS_DEV_INFO {

    //
    // Bytes needed by the class driver
    // for it's extension.
    // If this is zero, the driver does not expect to have any PDO's
    //

    ULONG DeviceExtensionSize;

    DEVICE_TYPE DeviceType;

    UCHAR StackSize;

    //
    // Device Characteristics flags
    //  eg.:
    //
    //  FILE_REMOVABLE_MEDIA
    //  FILE_READ_ONLY_DEVICE
    //  FILE_FLOPPY_DISKETTE
    //  FILE_WRITE_ONCE_MEDIA
    //  FILE_REMOTE_DEVICE
    //  FILE_DEVICE_IS_MOUNTED
    //  FILE_VIRTUAL_VOLUME
    //

    ULONG DeviceCharacteristics;

    PCLASS_ERROR                    ClassError;
    PCLASS_READ_WRITE               ClassReadWriteVerification;
    PCLASS_DEVICE_CONTROL           ClassDeviceControl;
    PCLASS_SHUTDOWN_FLUSH           ClassShutdownFlush;
    PCLASS_CREATE_CLOSE             ClassCreateClose;

    PCLASS_INIT_DEVICE              ClassInitDevice;
    PCLASS_START_DEVICE             ClassStartDevice;
    PCLASS_POWER_DEVICE             ClassPowerDevice;
    PCLASS_STOP_DEVICE              ClassStopDevice;
    PCLASS_REMOVE_DEVICE            ClassRemoveDevice;

    PCLASS_QUERY_PNP_CAPABILITIES   ClassQueryPnpCapabilities;

    //
    // Registered Data Block info for wmi
    //
    CLASS_WMI_INFO                  ClassWmiInfo;

} CLASS_DEV_INFO, *PCLASS_DEV_INFO;

//
// Restricted - May only append to this structure for backwards compatibility
//
struct _CLASS_INIT_DATA {

    //
    // This structure size - version checking.
    //

    ULONG InitializationDataSize;

    //
    // Specific init data for functional and physical device objects.
    //

    CLASS_DEV_INFO FdoData;
    CLASS_DEV_INFO PdoData;

    //
    // Device-specific driver routines
    //

    PCLASS_ADD_DEVICE             ClassAddDevice;
    PCLASS_ENUM_DEVICE            ClassEnumerateDevice;

    PCLASS_QUERY_ID               ClassQueryId;

    PDRIVER_STARTIO               ClassStartIo;
    PCLASS_UNLOAD                 ClassUnload;

    PCLASS_TICK                   ClassTick;
};

//
// this is a private structure, but must be kept here
// to properly compile size of FUNCTIONAL_DEVICE_EXTENSION
//
typedef struct _FILE_OBJECT_EXTENSION {
    PFILE_OBJECT FileObject;
    PDEVICE_OBJECT DeviceObject;
    ULONG LockCount;
    ULONG McnDisableCount;
} FILE_OBJECT_EXTENSION, *PFILE_OBJECT_EXTENSION;

typedef struct _CLASS_WORKING_SET
{
    _Field_range_(sizeof(CLASS_WORKING_SET),sizeof(CLASS_WORKING_SET))
    ULONG Size;          // Must be sizeof(CLASS_WORKING_SET)

    _Field_range_(0,2048) // NOTE: This range can be made larger more easily than it can be reduced
    ULONG XferPacketsWorkingSetMaximum;
    _Field_range_(0,2048)
    ULONG XferPacketsWorkingSetMinimum;
} CLASS_WORKING_SET, *PCLASS_WORKING_SET;
#define CLASS_WORKING_SET_MAXIMUM 2048

typedef struct _CLASS_INTERPRET_SENSE_INFO2
{
    _Field_range_(sizeof(CLASS_INTERPRET_SENSE_INFO2),sizeof(CLASS_INTERPRET_SENSE_INFO2))
    ULONG Size;          // Must be sizeof(CLASS_INTERPRET_SENSE_INFO2)

    _Field_range_(1,30000)
    ULONG HistoryCount;  // The number of SRB_HISTORY units that will be used

    __callback PCLASS_COMPRESS_RETRY_HISTORY_DATA Compress;
    __callback PCLASS_INTERPRET_SENSE_INFO        Interpret;

} CLASS_INTERPRET_SENSE_INFO2, *PCLASS_INTERPRET_SENSE_INFO2;
// A compile-time check of the 30,000 limit not overflowing ULONG size...
// Note that it is not expected that a release (FRE) driver will normally
// have such a large history, instead using the compression function.
#define CLASS_INTERPRET_SENSE_INFO2_MAXIMUM_HISTORY_COUNT 30000
C_ASSERT( (MAXULONG - sizeof(SRB_HISTORY)) / 30000 >= sizeof(SRB_HISTORY_ITEM) );

//
// Bit flags for SRB support in class drivers
//

#define CLASS_SRB_SCSI_REQUEST_BLOCK    0x1
#define CLASS_SRB_STORAGE_REQUEST_BLOCK 0x2

//
// Restricted - May only append to this structure for backwards compatibility
//
typedef struct _CLASS_DRIVER_EXTENSION {

    UNICODE_STRING RegistryPath;

    CLASS_INIT_DATA InitData;

    ULONG DeviceCount;

#if (NTDDI_VERSION >= NTDDI_WINXP)
    PCLASS_QUERY_WMI_REGINFO_EX   ClassFdoQueryWmiRegInfoEx;
    PCLASS_QUERY_WMI_REGINFO_EX   ClassPdoQueryWmiRegInfoEx;
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
    REGHANDLE EtwHandle;

    PDRIVER_DISPATCH DeviceMajorFunctionTable[IRP_MJ_MAXIMUM_FUNCTION + 1];
    PDRIVER_DISPATCH MpDeviceMajorFunctionTable[IRP_MJ_MAXIMUM_FUNCTION + 1];

    //
    // Support for cdrom class drivers to extend
    // the interpret sense information routine
    // and retry history per-packet.  Need to
    // setup during DriverEntry, so must be placed here.
    //
    PCLASS_INTERPRET_SENSE_INFO2 InterpretSenseInfo;

    //
    // Support for overriding the min/max number
    // of packets to keep allocated.  Need to
    // setup during DriverEntry, so must be placed here.
    //
    PCLASS_WORKING_SET WorkingSet;

#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)

    //
    // Bit flags reporting SRB types supported in class driver.
    // Need to setup during DriverEntry, so must be placed here.
    //
    ULONG SrbSupport;

#endif

} CLASS_DRIVER_EXTENSION, *PCLASS_DRIVER_EXTENSION;

typedef struct _COMMON_DEVICE_EXTENSION COMMON_DEVICE_EXTENSION, *PCOMMON_DEVICE_EXTENSION;
typedef struct _FUNCTIONAL_DEVICE_EXTENSION FUNCTIONAL_DEVICE_EXTENSION, *PFUNCTIONAL_DEVICE_EXTENSION;
typedef struct _PHYSICAL_DEVICE_EXTENSION PHYSICAL_DEVICE_EXTENSION, *PPHYSICAL_DEVICE_EXTENSION;

//
// Restricted - May only append to this structure for backwards compatibility
//
typedef struct _COMMON_DEVICE_EXTENSION {

    //
    // Version control field
    //
    // Note - this MUST be the first thing in the device extension
    // for any class driver using classpnp or a later version.
    //

    ULONG Version;

    //
    // Back pointer to device object
    //
    // NOTE - this MUST be the second field in the common device extension.
    // Users of this structure will include it in a union with the DeviceObject
    // pointer so they can reference this with a bit of syntactic sugar.
    //

    PDEVICE_OBJECT DeviceObject;

    //
    // Pointer to lower device object - send all requests through this
    //

    PDEVICE_OBJECT LowerDeviceObject;

    //
    // Pointer to the partition zero device extension.
    // There are several flags stored there that pdo
    // routines need to access
    //

    PFUNCTIONAL_DEVICE_EXTENSION PartitionZeroExtension;

    //
    // Pointer to the initialization data for this driver.  This is more
    // efficient than constantly getting the driver extension.
    //

    PCLASS_DRIVER_EXTENSION DriverExtension;

    //
    // INTERLOCKED counter of the number of requests/function calls outstanding
    // which will need to use this device object.  When this count goes to
    // zero the RemoveEvent will be set.
    //
    // This variable is only manipulated by ClassIncrementRemoveLock and
    // ClassDecrementRemoveLock.
    //

    LONG RemoveLock;

    //
    // This event will be signalled when it is safe to remove the device object
    //

    KEVENT RemoveEvent;

    //
    // The spinlock and the list are only used in checked builds to track
    // who has acquired the remove lock.  Free systems will leave these
    // initialized to ff
    //

    KSPIN_LOCK RemoveTrackingSpinlock;

    PVOID RemoveTrackingList;

    LONG RemoveTrackingUntrackedCount;

    //
    // Pointer to the driver specific data area
    //

    PVOID DriverData;

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4214) // bit field types other than int
#pragma warning(disable:4201) // nameless struct/union

    //
    // Flag indicates whether this device object is
    // an FDO or a PDO
    //

    struct {
        BOOLEAN IsFdo : 1;
        BOOLEAN IsInitialized : 1;

        //
        // Flag indicating whether the lookaside listhead for srbs has been
        // initialized.
        //

        BOOLEAN IsSrbLookasideListInitialized : 1;
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

    //
    // Contains the IRP_MN_CODE of the last state-changing pnp irps we
    // recieved (XXX_STOP, XXX_REMOVE, START, etc...).  Used in concert
    // with IsRemoved.
    //

    UCHAR PreviousState;
    UCHAR CurrentState;

    //
    // interlocked flag indicating that the device has been removed.
    //

    ULONG IsRemoved;

    //
    // The name of the object
    //
    UNICODE_STRING DeviceName;

    //
    // The next child device (or if this is an FDO, the first child device).
    //

    PPHYSICAL_DEVICE_EXTENSION ChildList;

    //
    // Number of the partition or -1L if not partitionable.
    //

    ULONG PartitionNumber;

    //
    // Length of partition in bytes
    //

    LARGE_INTEGER PartitionLength;

    //
    // Number of bytes before start of partition
    //

    LARGE_INTEGER StartingOffset;

    //
    // Dev-Info structure for this type of device object
    // Contains call-out routines for the class driver.
    //

    PCLASS_DEV_INFO DevInfo;

    //
    // Count of page files going through this device object
    // and event to synchronize them with.
    //

    ULONG PagingPathCount;
    ULONG DumpPathCount;
    ULONG HibernationPathCount;
    KEVENT PathCountEvent;

#ifndef ALLOCATE_SRB_FROM_POOL
    //
    // Lookaside listhead for srbs.
    //

    NPAGED_LOOKASIDE_LIST SrbLookasideList;
#endif

    //
    // Interface name string returned by IoRegisterDeviceInterface.
    //

    UNICODE_STRING MountedDeviceInterfaceName;


    //
    // Registered Data Block info for wmi
    //
    ULONG GuidCount;
    PGUIDREGINFO GuidRegInfo;

    //
    // File object dictionary for this device object.  Extensions are stored
    // in here rather than off the actual file object.
    //

    DICTIONARY FileObjectDictionary;

    //
    // The following will be in the released product as reserved.
    // Leave these at the end of the structure.
    //

#if (NTDDI_VERSION >= NTDDI_WINXP)
    PCLASS_PRIVATE_COMMON_DATA PrivateCommonData;
#else
    ULONG_PTR Reserved1;
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
    //
    // Pointer to the dispatch table for this object
    //

    PDRIVER_DISPATCH *DispatchTable;
#else
    ULONG_PTR Reserved2;
#endif

    ULONG_PTR Reserved3;
    ULONG_PTR Reserved4;

} COMMON_DEVICE_EXTENSION, *PCOMMON_DEVICE_EXTENSION;

typedef enum {
    FailurePredictionNone = 0,     // No failure detection polling needed
    FailurePredictionIoctl,        // Do failure detection via IOCTL
    FailurePredictionSmart,        // Do failure detection via SMART
    FailurePredictionSense         // Do failure detection via sense data
} FAILURE_PREDICTION_METHOD, *PFAILURE_PREDICTION_METHOD;

//
// Default failure prediction polling interval is every hour
//

#define DEFAULT_FAILURE_PREDICTION_PERIOD 60 * 60 * 1

//
// The failure prediction structure is internal to classpnp - drivers do not
// need to know what it contains.
//

struct _FAILURE_PREDICTION_INFO;
typedef struct _FAILURE_PREDICTION_INFO *PFAILURE_PREDICTION_INFO;

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4214) // bit field types other than int

//
// this is to allow for common code to handle
// every option.
//

typedef struct _CLASS_POWER_OPTIONS {
    ULONG PowerDown              :  1;
    ULONG LockQueue              :  1;
    ULONG HandleSpinDown         :  1;
    ULONG HandleSpinUp           :  1;
    ULONG Reserved               : 27;
} CLASS_POWER_OPTIONS, *PCLASS_POWER_OPTIONS;

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

//
// this is a private structure, but must be kept here
// to properly compile size of FUNCTIONAL_DEVICE_EXTENSION
//
typedef enum {
    PowerDownDeviceInitial,
    PowerDownDeviceLocked,
    PowerDownDeviceStopped,
    PowerDownDeviceOff,
    PowerDownDeviceUnlocked
} CLASS_POWER_DOWN_STATE;

//
// same as above, but with an extra state.
// should be ok to change the above structure, but that
// would break someone somewhere who ignore the PRIVATE
// nature of the structure.
//

typedef enum {
    PowerDownDeviceInitial2,
    PowerDownDeviceLocked2,
    PowerDownDeviceFlushed2,
    PowerDownDeviceStopped2,
    PowerDownDeviceOff2,
    PowerDownDeviceUnlocked2
} CLASS_POWER_DOWN_STATE2;

//
// same as above, but with an extra state regarding to device quiescence
//

typedef enum {
    PowerDownDeviceInitial3 = 0,
    PowerDownDeviceLocked3,
    PowerDownDeviceQuiesced3,
    PowerDownDeviceFlushed3,
    PowerDownDeviceStopped3,
    PowerDownDeviceOff3,
    PowerDownDeviceUnlocked3
} CLASS_POWER_DOWN_STATE3;

//
// this is a private enum, but must be kept here
// to properly compile size of FUNCTIONAL_DEVICE_EXTENSION
//
typedef enum {
    PowerUpDeviceInitial,
    PowerUpDeviceLocked,
    PowerUpDeviceOn,
    PowerUpDeviceStarted,
    PowerUpDeviceUnlocked
} CLASS_POWER_UP_STATE;

//
// this is a private structure, but must be kept here
// to properly compile size of FUNCTIONAL_DEVICE_EXTENSION
//
typedef struct _CLASS_POWER_CONTEXT {

    union {
        CLASS_POWER_DOWN_STATE PowerDown;
        CLASS_POWER_DOWN_STATE2 PowerDown2;
        CLASS_POWER_DOWN_STATE3 PowerDown3;
        CLASS_POWER_UP_STATE PowerUp;
    } PowerChangeState;

    CLASS_POWER_OPTIONS Options;

    BOOLEAN InUse;
    BOOLEAN QueueLocked;

    NTSTATUS FinalStatus;

    ULONG RetryCount;
    ULONG RetryInterval;

    PIO_COMPLETION_ROUTINE CompletionRoutine;
    PDEVICE_OBJECT DeviceObject;
    PIRP Irp;

    SCSI_REQUEST_BLOCK Srb;

} CLASS_POWER_CONTEXT, *PCLASS_POWER_CONTEXT;

//
// This structure is used to keep supportive information for IOCTL_STORAGE_QUERY_PROPERTY,
// especially for propertyid: StorageAccessAlignmentProperty, StorageDeviceSeekPenaltyProperty and StorageDeviceTrimProperty.
// Current implementation is to support them on for Disk device. As there is possibility for other devices to use the same mechanism,
// this information is kept in structure FUNCTIONAL_DEVICE_EXTENSION.
//

typedef enum  {
    SupportUnknown = 0,
    Supported,
    NotSupported
} CLASS_FUNCTION_SUPPORT;

typedef struct _CLASS_VPD_B1_DATA {
    NTSTATUS    CommandStatus;
    USHORT      MediumRotationRate;   // Non-rotating medium if the value is 0001h
    UCHAR       NominalFormFactor;
    UCHAR       Reserved;
    ULONG       MediumProductType;
} CLASS_VPD_B1_DATA, *PCLASS_VPD_B1_DATA;

typedef struct _CLASS_VPD_B0_DATA {
    NTSTATUS    CommandStatus;
    ULONG       MaxUnmapLbaCount;
    ULONG       MaxUnmapBlockDescrCount;
    ULONG       OptimalUnmapGranularity;
    ULONG       UnmapGranularityAlignment;
    BOOLEAN     UGAVALID;
    UCHAR       Reserved0;
    USHORT      OptimalTransferLengthGranularity;
    ULONG       MaximumTransferLength;
    ULONG       OptimalTransferLength;
} CLASS_VPD_B0_DATA, *PCLASS_VPD_B0_DATA;

#if _MSC_VER >= 1600
#pragma warning(push)
#endif
#pragma warning(disable:4214) // bit field types other than int
typedef struct _CLASS_VPD_B2_DATA {
    NTSTATUS    CommandStatus;
    UCHAR       ThresholdExponent;
    UCHAR       DP          : 1;
    UCHAR       ANC_SUP     : 1;
    UCHAR       Reserved0   : 2;
    UCHAR       LBPRZ       : 1;
    UCHAR       LBPWS10     : 1;
    UCHAR       LBPWS       : 1;
    UCHAR       LBPU        : 1;

    UCHAR       ProvisioningType : 3;
    UCHAR       Reserved1        : 5;

    ULONG       SoftThresholdEventPending;
} CLASS_VPD_B2_DATA, *PCLASS_VPD_B2_DATA;
#if _MSC_VER >= 1600
#pragma warning(pop)
#endif

typedef struct _CLASS_READ_CAPACITY16_DATA {
    NTSTATUS    CommandStatus;
    ULONG       BytesPerLogicalSector;
    ULONG       BytesPerPhysicalSector;
    ULONG       BytesOffsetForSectorAlignment; // starting offset of Logical Sector inside Physical Sector
    BOOLEAN     LBProvisioningEnabled;  // Don't use this field, use the Provisioning Type from VPD page 0xB2 instead.
    BOOLEAN     LBProvisioningReadZeros;// Don't use this field, use LBPRZ from VPD page 0xB2 instead.
    UCHAR       Reserved0[2];
    ULONG       Reserved1;
} CLASS_READ_CAPACITY16_DATA, *PCLASS_READ_CAPACITY16_DATA;

typedef struct _CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS {
    NTSTATUS CommandStatus;
    USHORT MaximumRangeDescriptors;
    UCHAR Restricted;
    UCHAR Reserved;
    ULONG MaximumInactivityTimer;
    ULONG DefaultInactivityTimer;
    ULONGLONG MaximumTokenTransferSize;
    ULONGLONG OptimalTransferCount;
} CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS, *PCLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS;

//
// Restricted - May only append to this structure for backwards compatibility
//
typedef struct _CLASS_FUNCTION_SUPPORT_INFO {

    // Synchronize r/w access to this structure.
    // Currently only GenerationCount, ChangeRequestCount, BlockLimitsData and HwFirmwareGetInfo
    // are expected to change after initialization
    KSPIN_LOCK SyncLock;

    ULONG GenerationCount;
    volatile ULONG ChangeRequestCount;

#if _MSC_VER >= 1600
#pragma warning(push)
#endif
#pragma warning(disable:4214) // bit field types other than int
    // VPD page support info, from INQUIRY - VPD Support Pages
    struct {
        ULONG   BlockLimits                : 1;
        ULONG   BlockDeviceCharacteristics : 1;
        ULONG   LBProvisioning             : 1;
        ULONG   BlockDeviceRODLimits       : 1;
        ULONG   Reserved                   : 28;
    } ValidInquiryPages;
#if _MSC_VER >= 1600
#pragma warning(pop)
#endif

    // IOCTL/Function supported by lower layer driver
    struct {
        CLASS_FUNCTION_SUPPORT SeekPenaltyProperty;
        CLASS_FUNCTION_SUPPORT AccessAlignmentProperty;
        CLASS_FUNCTION_SUPPORT TrimProperty;
        CLASS_FUNCTION_SUPPORT TrimProcess;
    } LowerLayerSupport;

    // user setting in registry
    BOOLEAN     RegAccessAlignmentQueryNotSupported;
    BOOLEAN     AsynchronousNotificationSupported;
    UCHAR       Reserved[2];

    // cached data
    CLASS_VPD_B0_DATA           BlockLimitsData;
    CLASS_VPD_B1_DATA           DeviceCharacteristicsData;
    CLASS_VPD_B2_DATA           LBProvisioningData;
    CLASS_READ_CAPACITY16_DATA  ReadCapacity16Data;
    CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS BlockDeviceRODLimitsData;

#if _MSC_VER >= 1600
#pragma warning(push)
#endif
#pragma warning(disable:4214) // bit field types other than int
    struct {
        ULONG D3ColdSupported           : 1;
        ULONG DeviceWakeable            : 1;
        ULONG IdlePowerEnabled          : 1;
        ULONG D3IdleTimeoutOverridden   : 1; // Idle timeout has been overridden by user
        ULONG NoVerifyDuringIdlePower   : 1;
        ULONG Reserved2                 : 27;

        ULONG D3IdleTimeout;    // The D3 idle timeout in milliseconds.
    } IdlePower;
#if _MSC_VER >= 1600
#pragma warning(pop)
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
    CLASS_FUNCTION_SUPPORT HwFirmwareGetInfoSupport;
    PSTORAGE_HW_FIRMWARE_INFO HwFirmwareInfo;
#endif

} CLASS_FUNCTION_SUPPORT_INFO, *PCLASS_FUNCTION_SUPPORT_INFO;

//
// Restricted - May only append to this structure for backwards compatibility
//

typedef struct _ADDITIONAL_FDO_DATA {
    ULONG       DeviceGuidFlags;

    GUID        DeviceGuid;

} ADDITIONAL_FDO_DATA, *PADDITIONAL_FDO_DATA;

//
// Restricted - May only append to this structure for backwards compatibility
//
typedef struct _FUNCTIONAL_DEVICE_EXTENSION {

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201) // nameless struct/union

    //
    // Common device extension header
    //

    union {
        struct {
            ULONG Version;
            PDEVICE_OBJECT DeviceObject;
        };
        COMMON_DEVICE_EXTENSION CommonExtension;
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

    //
    // Pointer to the physical device object we attached to - use this
    // for Pnp calls which need a PDO
    //

    PDEVICE_OBJECT LowerPdo;

    //
    // Device capabilities
    //

    PSTORAGE_DEVICE_DESCRIPTOR DeviceDescriptor;

    //
    // SCSI port driver capabilities
    //

    PSTORAGE_ADAPTER_DESCRIPTOR AdapterDescriptor;

    //
    // Current Power state of the device
    //

    DEVICE_POWER_STATE DevicePowerState;

    //
    // DM Driver for IDE drives hack (ie. OnTrack)
    // Bytes to skew all requests
    //

    ULONG DMByteSkew;

    //
    // DM Driver for IDE drives hack (ie. OnTrack)
    // Sectors to skew all requests.
    //

    ULONG DMSkew;

    //
    // DM Driver for IDE drives hack (ie. OnTrack)
    // Flag to indicate whether DM driver has been located on an IDE drive.
    //

    BOOLEAN DMActive;

#if (NTDDI_VERSION >= NTDDI_WIN8)

    //
    // Buffer length of SenseData
    //

    UCHAR SenseDataLength;

#else
    UCHAR Reserved;
#endif

    //
    // For future expandability
    //
    UCHAR Reserved0[2];

    //
    // Buffer for drive parameters returned in IO device control.
    //

    DISK_GEOMETRY DiskGeometry;

    //
    // Request Sense Buffer
    //

    PSENSE_DATA SenseData;

    //
    // Request timeout in seconds;
    //

    ULONG TimeOutValue;

    //
    // System device number
    //

    ULONG DeviceNumber;

    //
    // Add default Srb Flags.
    //

    ULONG SrbFlags;

    //
    // Total number of SCSI protocol errors on the device.
    //

    ULONG ErrorCount;

    //
    // Lock count for removable media.
    //

    LONG LockCount;
    LONG ProtectedLockCount;
    LONG InternalLockCount;

    KEVENT EjectSynchronizationEvent;

    //
    // Values for the flags are below.
    //

    USHORT  DeviceFlags;

    //
    // Log2 of sector size
    //

    UCHAR SectorShift;

    //
    // Flags to optimize CDB handling.
    //

#if (NTDDI_VERSION >= NTDDI_VISTA)
    UCHAR CdbForceUnitAccess;
#else
    UCHAR ReservedByte;
#endif

    //
    // Indicates that the necessary data structures for media change
    // detection have been initialized.
    //

    PMEDIA_CHANGE_DETECTION_INFO MediaChangeDetectionInfo;

    PKEVENT Unused1;
    HANDLE  Unused2;

    //
    // File system context. Used for kernel-mode requests to disable autorun.
    //

    FILE_OBJECT_EXTENSION KernelModeMcnContext;

    //
    // Count of media changes.  This field is only valid for the root partition
    // (ie. if PhysicalDevice == NULL).
    //

    ULONG MediaChangeCount;

    //
    // Storage for a handle to the directory the PDO's are placed in
    //

    HANDLE DeviceDirectory;

    //
    // Storage for a release queue request.
    //

    KSPIN_LOCK ReleaseQueueSpinLock;

    PIRP ReleaseQueueIrp;

    SCSI_REQUEST_BLOCK ReleaseQueueSrb;

    BOOLEAN ReleaseQueueNeeded;

    BOOLEAN ReleaseQueueInProgress;

    BOOLEAN ReleaseQueueIrpFromPool;
    //
    // Failure detection storage
    //

    BOOLEAN FailurePredicted;

    ULONG FailureReason;
    PFAILURE_PREDICTION_INFO FailurePredictionInfo;

    BOOLEAN PowerDownInProgress;

    //
    // Interlock for ensuring we don't recurse during enumeration.
    //

    ULONG EnumerationInterlock;

    //
    // Synchronization object for manipulating the child list.
    //

    KEVENT ChildLock;

    //
    // The thread which currently owns the ChildLock.  This is used to
    // avoid recursive acquisition.
    //

    PKTHREAD ChildLockOwner;

    //
    // The number of times this event has been acquired.
    //

    ULONG ChildLockAcquisitionCount;

    //
    // Flags for special behaviour required by
    // different hardware, such as never spinning down
    // or disabling advanced features such as write cache
    //

    ULONG ScanForSpecialFlags;

    //
    // For delayed retry of power requests at DPC level
    //

    KDPC PowerRetryDpc;
    KTIMER PowerRetryTimer;

    //
    // Context structure for power operations.  Since we can only have
    // one D irp at any time in the stack we don't need to worry about
    // allocating multiple of these structures.
    //

    CLASS_POWER_CONTEXT PowerContext;

#if (NTDDI_VERSION <= NTDDI_WIN2K)

#if (SPVER(NTDDI_VERSION) < 2))

    ULONG_PTR Reserved1;
    ULONG_PTR Reserved2;
    ULONG_PTR Reserved3;
    ULONG_PTR Reserved4;

#else

    //
    // Indicates the number of successfully completed
    // requests, if error throttling has been applied.
    //
    ULONG CompletionSuccessCount;

    //
    // When too many errors occur and features are turned off
    // the old SrbFlags are saved here, so that if the condition
    // is fixed, we can restore them to their proper state.
    //
    ULONG SavedSrbFlags;

    //
    // Once recovery has been initiated, cache the old error count value.
    // If new errors occur, go back to the feature set as was earlier used.
    //
    ULONG SavedErrorCount;

    //
    // For future expandability
    // leave these at the end of the structure.
    //

    ULONG_PTR Reserved1;
#endif

#else

    //
    // Hold new private data that only classpnp should modify
    // in this structure.
    //

    PCLASS_PRIVATE_FDO_DATA PrivateFdoData;


#if (NTDDI_VERSION >= NTDDI_WIN8)
    PCLASS_FUNCTION_SUPPORT_INFO FunctionSupportInfo;

    PSTORAGE_MINIPORT_DESCRIPTOR MiniportDescriptor;

#else
    ULONG_PTR Reserved2;
    ULONG_PTR Reserved3;
#endif
    
#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
    PADDITIONAL_FDO_DATA AdditionalFdoData;
#else
    ULONG_PTR Reserved4;
#endif
#endif

} FUNCTIONAL_DEVICE_EXTENSION, *PFUNCTIONAL_DEVICE_EXTENSION;

//
// The following CLASS_SPECIAL_ flags are set in ScanForSpecialFlags
// in the FdoExtension
//

// Never Spin Up/Down the drive (may not handle properly)
#define CLASS_SPECIAL_DISABLE_SPIN_DOWN                 0x00000001
#define CLASS_SPECIAL_DISABLE_SPIN_UP                   0x00000002

// Don't bother to lock the queue when powering down
// (used mostly to send a quick stop to a cdrom to abort audio playback)
#define CLASS_SPECIAL_NO_QUEUE_LOCK                     0x00000008

// Disable write cache due to known bugs
#define CLASS_SPECIAL_DISABLE_WRITE_CACHE               0x00000010

//
// Special interpretation of "device not ready / cause not reportable" for
// devices which don't tell us they need to be spun up manually after they
// spin themselves down behind our back.
//
// The down side of this is that if the drive chooses to report
// "device not ready / cause not reportable" to mean "no media in device"
// or any other error which really does require user intervention NT will
// waste a large amount of time trying to spin up a disk which can't be spun
// up.
//

#define CLASS_SPECIAL_CAUSE_NOT_REPORTABLE_HACK         0x00000020

#if ((NTDDI_VERSION == NTDDI_WIN2KSP3) || (OSVER(NTDDI_VERSION) == NTDDI_WINXP))
// Disabling the write cache is not supported on this device
#define CLASS_SPECIAL_DISABLE_WRITE_CACHE_NOT_SUPPORTED 0x00000040  // Obsolete
#endif
#define CLASS_SPECIAL_MODIFY_CACHE_UNSUCCESSFUL         0x00000040
#define CLASS_SPECIAL_FUA_NOT_SUPPORTED                 0x00000080

#define CLASS_SPECIAL_VALID_MASK                        0x000000FB
#define CLASS_SPECIAL_RESERVED         (~CLASS_SPECIAL_VALID_MASK)


//
// Restricted - May only append to this structure for backwards compatibility
//
typedef struct _PHYSICAL_DEVICE_EXTENSION {

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201) // nameless struct/union

    //
    // Common extension data
    //

    union {
        struct {
            ULONG Version;
            PDEVICE_OBJECT DeviceObject;
        };
        COMMON_DEVICE_EXTENSION CommonExtension;
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

    //
    // Indicates that the pdo no longer physically exits.
    //

    BOOLEAN IsMissing;

    //
    // Indicates that the PDO has been handed out to the PNP system.
    //

    BOOLEAN IsEnumerated;

    //
    // Hold new private data that only classpnp should modify
    // in this structure.
    //

#if (NTDDI_VERSION >= NTDDI_WINXP)
    PCLASS_PRIVATE_PDO_DATA PrivatePdoData;
#else
    ULONG_PTR Reserved1;
#endif

    //
    // for future expandability
    // leave these at the end of the structure.
    //

    ULONG_PTR Reserved2;
    ULONG_PTR Reserved3;
    ULONG_PTR Reserved4;

} PHYSICAL_DEVICE_EXTENSION, *PPHYSICAL_DEVICE_EXTENSION;

//
// Indicates that the device has write caching enabled.
//

#define DEV_WRITE_CACHE     0x00000001

//
// Build SCSI 1 or SCSI 2 CDBs
//

#define DEV_USE_SCSI1       0x00000002

//
// Indicates whether is is safe to send StartUnit commands
// to this device. It will only be off for some removeable devices.
//

#define DEV_SAFE_START_UNIT 0x00000004

//
// Indicates whether it is unsafe to send SCSIOP_MECHANISM_STATUS commands to
// this device.  Some devices don't like these 12 byte commands
//

#define DEV_NO_12BYTE_CDB   0x00000008

//
// Indicates that the device is connected to a backup power supply
// and hence write-through and synch cache requests may be ignored
//

#define DEV_POWER_PROTECTED 0x00000010

//
// Indicates that the device supports 16 byte CDBs
//

#define DEV_USE_16BYTE_CDB  0x00000020


#if (NTDDI_VERSION >= NTDDI_WIN8)

//
// Size of extended SRB used for 16 byte SCSI cdbs
//

#define CLASS_SRBEX_SCSI_CDB16_BUFFER_SIZE \
    (sizeof(STORAGE_REQUEST_BLOCK) + sizeof(STOR_ADDR_BTL8) + sizeof(SRBEX_DATA_SCSI_CDB16))

//
// Size of extended SRB with no SRB extended data
//
#define CLASS_SRBEX_NO_SRBEX_DATA_BUFFER_SIZE \
    (sizeof(STORAGE_REQUEST_BLOCK) + sizeof(STOR_ADDR_BTL8))

#endif

//
// Define context structure for asynchronous completions.
//

typedef struct _COMPLETION_CONTEXT {
    PDEVICE_OBJECT DeviceObject;
#if (NTDDI_VERSION >= NTDDI_WIN8)
    union {
        SCSI_REQUEST_BLOCK Srb;
        STORAGE_REQUEST_BLOCK SrbEx;
        UCHAR SrbExBuffer[CLASS_SRBEX_SCSI_CDB16_BUFFER_SIZE];
    } Srb;
#else
    SCSI_REQUEST_BLOCK Srb;
#endif
} COMPLETION_CONTEXT, *PCOMPLETION_CONTEXT;


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
SCSIPORT_API
ULONG
ClassInitialize(
    _In_  PVOID            Argument1,
    _In_  PVOID            Argument2,
    _In_  PCLASS_INIT_DATA InitializationData
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/

//
// List of the GUIDs supported by ClassInitializeEx() and the structure
// type used for the data parameter for that GUID.
//
// {00E34B11-2444-4745-A53D-620100CD82F7} == CLASS_QUERY_WMI_REGINFO_EX_LIST
// {509a8c5f-71d7-48f6-821e-173c49bf2f18} == CLASS_INTERPRET_SENSE_INFO2
// {105701b0-9e9b-47cb-9780-81198af7b524} == CLASS_WORKING_SET
// {0a483941-bdfd-4f7b-be95-cee2a216090c} == ULONG

#define GUID_CLASSPNP_QUERY_REGINFOEX { 0x00e34b11, 0x2444, 0x4745, { 0xa5, 0x3d, 0x62, 0x01, 0x00, 0xcd, 0x82, 0xf7 } }
#define GUID_CLASSPNP_SENSEINFO2      { 0x509a8c5f, 0x71d7, 0x48f6, { 0x82, 0x1e, 0x17, 0x3c, 0x49, 0xbf, 0x2f, 0x18 } }
#define GUID_CLASSPNP_WORKING_SET     { 0x105701b0, 0x9e9b, 0x47cb, { 0x97, 0x80, 0x81, 0x19, 0x8a, 0xf7, 0xb5, 0x24 } }
#define GUID_CLASSPNP_SRB_SUPPORT     { 0x0a483941, 0xbdfd, 0x4f7b, { 0xbe, 0x95, 0xce, 0xe2, 0xa2, 0x16, 0x09, 0x0c } }

//
// The structure specifies callbacks that are used instead of the
// PCLASS_QUERY_WMI_REGINFO callbacks.
//
typedef struct _CLASS_QUERY_WMI_REGINFO_EX_LIST
{
    ULONG Size;          // Should be sizeof(CLASS_QUERY_REGINFO_EX_LIST)

    __callback PCLASS_QUERY_WMI_REGINFO_EX   ClassFdoQueryWmiRegInfoEx;
    __callback PCLASS_QUERY_WMI_REGINFO_EX   ClassPdoQueryWmiRegInfoEx;

} CLASS_QUERY_WMI_REGINFO_EX_LIST, *PCLASS_QUERY_WMI_REGINFO_EX_LIST;

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
SCSIPORT_API
ULONG
ClassInitializeEx(
    _In_  PDRIVER_OBJECT   DriverObject,
    _In_  LPGUID           Guid,
    _In_  PVOID            Data
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
_Post_satisfies_(return <= 0)
SCSIPORT_API
NTSTATUS
ClassCreateDeviceObject(
    _In_ PDRIVER_OBJECT     DriverObject,
    _In_z_ PCCHAR           ObjectNameBuffer,
    _In_ PDEVICE_OBJECT     LowerDeviceObject,
    _In_ BOOLEAN            IsFdo,
    _Outptr_result_nullonfailure_
    _At_(*DeviceObject, __drv_allocatesMem(Mem) __drv_aliasesMem)
    PDEVICE_OBJECT          *DeviceObject
    );

/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_Must_inspect_result_
SCSIPORT_API
NTSTATUS
ClassReadDriveCapacity(
    _In_ PDEVICE_OBJECT DeviceObject
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
VOID
ClassReleaseQueue(
    _In_ PDEVICE_OBJECT DeviceObject
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
VOID
ClassSplitRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ ULONG MaximumBytes
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
NTSTATUS
ClassDeviceControl(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
IO_COMPLETION_ROUTINE ClassIoComplete;


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
IO_COMPLETION_ROUTINE ClassIoCompleteAssociated;


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
BOOLEAN
ClassInterpretSenseInfo(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PSCSI_REQUEST_BLOCK Srb,
    _In_ UCHAR MajorFunctionCode,
    _In_ ULONG IoDeviceCode,
    _In_ ULONG RetryCount,
    _Out_ NTSTATUS *Status,
    _Out_opt_ _Deref_out_range_(0,100) ULONG *RetryInterval
    );

/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
VOID
ClassSendDeviceIoControlSynchronous(
    _In_ ULONG IoControlCode,
    _In_ PDEVICE_OBJECT TargetDeviceObject,
    _Inout_updates_opt_(_Inexpressible_(max(InputBufferLength, OutputBufferLength))) PVOID Buffer,
    _In_ ULONG InputBufferLength,
    _In_ ULONG OutputBufferLength,
    _In_ BOOLEAN InternalDeviceIoControl,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
NTSTATUS
ClassSendIrpSynchronous(
    _In_ PDEVICE_OBJECT TargetDeviceObject,
    _In_ PIRP Irp); /*++ Internal function - described in classpnp\class.c in ddk sources --*/ SCSIPORT_API NTSTATUS ClassForwardIrpSynchronous(
    _In_ PCOMMON_DEVICE_EXTENSION CommonExtension,
    _In_ PIRP Irp
    );

/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
NTSTATUS
ClassSendSrbSynchronous(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PSCSI_REQUEST_BLOCK Srb,
    _In_reads_bytes_opt_(BufferLength) PVOID BufferAddress,
    _In_ ULONG BufferLength,
    _In_ BOOLEAN WriteToDevice
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_Success_(return == STATUS_PENDING)
SCSIPORT_API
NTSTATUS
ClassSendSrbAsynchronous(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ _On_failure_(__drv_freesMem(Mem)) __drv_aliasesMem PSCSI_REQUEST_BLOCK _Srb,
    _In_ PIRP Irp,
    _In_reads_bytes_opt_(BufferLength) __drv_aliasesMem PVOID BufferAddress,
    _In_ ULONG BufferLength,
    _In_ BOOLEAN WriteToDevice
    );

/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
NTSTATUS
ClassBuildRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
ULONG
ClassModeSense(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_reads_bytes_(Length) PCHAR ModeSenseBuffer,
    _In_ ULONG Length,
    _In_ UCHAR PageMode
    );

/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
PVOID
ClassFindModePage(
    _In_reads_bytes_(Length) PCHAR ModeSenseBuffer,
    _In_ ULONG Length,
    _In_ UCHAR PageMode,
    _In_ BOOLEAN Use6Byte
    );

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
ULONG
ClassModeSenseEx(
    _In_ PDEVICE_OBJECT Fdo,
    _In_reads_bytes_(Length) PCHAR ModeSenseBuffer,
    _In_ ULONG Length,
    _In_ UCHAR PageMode,
    _In_ UCHAR PageControl
    );

/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
NTSTATUS
ClassModeSelect(
    _In_ PDEVICE_OBJECT Fdo,
    _In_reads_bytes_(Length) PCHAR ModeSelectBuffer,
    _In_ ULONG Length,
    _In_ BOOLEAN SavePages
    );

#endif // (NTDDI_VERSION >= NTDDI_WINBLUE)


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
NTSTATUS
ClassClaimDevice(
    _In_ PDEVICE_OBJECT LowerDeviceObject,
    _In_ BOOLEAN Release
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
_Dispatch_type_(IRP_MJ_SCSI)
DRIVER_DISPATCH ClassInternalIoControl;

/*++

Internal function - described in classpnp\utils.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassInitializeSrbLookasideList(
    _Inout_ PCOMMON_DEVICE_EXTENSION CommonExtension,
    _In_ ULONG NumberElements
    );

/*++

Internal function - described in classpnp\utils.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassDeleteSrbLookasideList(
    _Inout_ PCOMMON_DEVICE_EXTENSION CommonExtension
    );

/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
ULONG
ClassQueryTimeOutRegistryValue(
    _In_ PDEVICE_OBJECT DeviceObject
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
NTSTATUS
ClassGetDescriptor(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PSTORAGE_PROPERTY_ID PropertyId,
    _Outptr_ PVOID *Descriptor
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassInvalidateBusRelations(
    _In_ PDEVICE_OBJECT Fdo
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassMarkChildrenMissing(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION Fdo
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
BOOLEAN
ClassMarkChildMissing(
    _In_ PPHYSICAL_DEVICE_EXTENSION PdoExtension,
    _In_ BOOLEAN AcquireChildLock
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
VOID
ClassDebugPrint(
    _In_ CLASS_DEBUG_LEVEL DebugPrintLevel,
    _In_z_ PCCHAR DebugMessage,
    ...
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
__drv_aliasesMem
_IRQL_requires_max_(DISPATCH_LEVEL)
SCSIPORT_API
PCLASS_DRIVER_EXTENSION
ClassGetDriverExtension(
    _In_ PDRIVER_OBJECT DriverObject
    );


/*++

Internal function - described in classpnp\lock.c in ddk sources

--*/
SCSIPORT_API
VOID
ClassCompleteRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ CCHAR PriorityBoost
    );


/*++

Internal function - described in classpnp\lock.c in ddk sources

--*/
SCSIPORT_API
VOID
ClassReleaseRemoveLock(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ PVOID Tag
    );


/*++

Internal function - described in classpnp\lock.c in ddk sources

--*/
SCSIPORT_API
ULONG
ClassAcquireRemoveLockEx(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PVOID Tag,
    _In_ PCSTR File,
    _In_ ULONG Line
    );




/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassUpdateInformationInRegistry(
    _In_ PDEVICE_OBJECT   Fdo,
    _In_ PCHAR            DeviceName,
    _In_ ULONG            DeviceNumber,
    _In_reads_bytes_opt_(InquiryDataLength) PINQUIRYDATA InquiryData,
    _In_ ULONG            InquiryDataLength
    );


/*++

Internal function - described in classpnp\classwmi.c in ddk sources

--*/
SCSIPORT_API
NTSTATUS
ClassWmiCompleteRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp,
    _In_ NTSTATUS Status,
    _In_ ULONG BufferUsed,
    _In_ CCHAR PriorityBoost
    );


/*++

Internal function - described in classpnp\classwmi.c in ddk sources

--*/
_IRQL_requires_max_(DISPATCH_LEVEL)
SCSIPORT_API
NTSTATUS
ClassWmiFireEvent(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ LPGUID Guid,
    _In_ ULONG InstanceIndex,
    _In_ ULONG EventDataSize,
    _In_reads_bytes_(EventDataSize) PVOID EventData
    );


/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
SCSIPORT_API
VOID
ClassResetMediaChangeTimer(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );


/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassInitializeMediaChangeDetection(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ PUCHAR EventPrefix
    );


/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
NTSTATUS
ClassInitializeTestUnitPolling(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ BOOLEAN AllowDriveToSleep
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
PVPB
ClassGetVpb(
    _In_ PDEVICE_OBJECT DeviceObject
    );


/*++

Internal function - described in classpnp\power.c in ddk sources

--*/
SCSIPORT_API
__control_entrypoint(DeviceDriver)
NTSTATUS
ClassSpinDownPowerHandler(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );


/*++

Internal function - described in classpnp\power.c in ddk sources

--*/
NTSTATUS
ClassStopUnitPowerHandler(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );


/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ClassSetFailurePredictionPoll(
    _Inout_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ FAILURE_PREDICTION_METHOD FailurePredictionMethod,
    _In_ ULONG PollingPeriod
    );


/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
ClassNotifyFailurePredicted(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_reads_bytes_(BufferSize) PUCHAR Buffer,
    _In_ ULONG BufferSize,
    _In_ BOOLEAN LogError,
    _In_ ULONG UniqueErrorValue,
    _In_ UCHAR PathId,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassAcquireChildLock(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
VOID
ClassReleaseChildLock(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
IO_COMPLETION_ROUTINE ClassSignalCompletion;


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
VOID
ClassSendStartUnit(
    _In_ PDEVICE_OBJECT DeviceObject
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
NTSTATUS
ClassRemoveDevice(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ UCHAR RemoveType
    );


/*++

Internal function - described in classpnp\class.c in ddk sources

--*/
SCSIPORT_API
IO_COMPLETION_ROUTINE ClassAsynchronousCompletion;


/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
SCSIPORT_API
VOID
ClassCheckMediaState(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );


/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassSetMediaChangeState(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ MEDIA_CHANGE_DETECTION_STATE State,
    _In_ BOOLEAN Wait
    );


/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassEnableMediaChangeDetection(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );


/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassDisableMediaChangeDetection(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );


/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
SCSIPORT_API
VOID
ClassCleanupMediaChangeDetection(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    );


/*++

Internal function - described in classpnp\utils.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
ClassGetDeviceParameter(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_opt_ PWSTR SubkeyName,
    _In_ PWSTR ParameterName,
    _Inout_ PULONG ParameterValue
    );


/*++

Internal function - described in classpnp\utils.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ClassSetDeviceParameter(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_opt_ PWSTR SubkeyName,
    _In_ PWSTR ParameterName,
    _In_ ULONG ParameterValue
    );

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*++

Internal function - described in classpnp\create.c in ddk sources

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
PFILE_OBJECT_EXTENSION
ClassGetFsContext(
    _In_ PCOMMON_DEVICE_EXTENSION CommonExtension,
    _In_ PFILE_OBJECT FileObject
    );

/*++

Internal function - described in classpnp\autorun.c in ddk sources

--*/
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
ClassSendNotification(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ const GUID * Guid,
    _In_ ULONG  ExtraDataSize,
    _In_reads_bytes_opt_(ExtraDataSize) PVOID  ExtraData
    );

#endif

//
// could be #define, but this allows typechecking
//

__inline
UCHAR
GET_FDO_EXTENSON_SENSE_DATA_LENGTH (
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension
    )
{
    UCHAR SenseDataLength = 0;

    if (FdoExtension->SenseData != NULL) {

#if (NTDDI_VERSION >= NTDDI_WIN8)
        if (FdoExtension->SenseDataLength > 0) {
            SenseDataLength = FdoExtension->SenseDataLength;
        } else {
            // For backward compatibility with Windows 7 and earlier
            SenseDataLength = SENSE_BUFFER_SIZE;
        }
#else
        SenseDataLength = SENSE_BUFFER_SIZE;
#endif

    }

    return SenseDataLength;
}

__inline
BOOLEAN
PORT_ALLOCATED_SENSE(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb
    )
{
    return ((BOOLEAN)((TEST_FLAG(Srb->SrbFlags, SRB_FLAGS_PORT_DRIVER_ALLOCSENSE) &&
             TEST_FLAG(Srb->SrbFlags, SRB_FLAGS_FREE_SENSE_BUFFER)) &&
            (Srb->SenseInfoBuffer != FdoExtension->SenseData))
            );
}

__inline
VOID
FREE_PORT_ALLOCATED_SENSE_BUFFER(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ PSCSI_REQUEST_BLOCK Srb
    )
{
    NT_ASSERT(TEST_FLAG(Srb->SrbFlags, SRB_FLAGS_PORT_DRIVER_ALLOCSENSE));
    NT_ASSERT(TEST_FLAG(Srb->SrbFlags, SRB_FLAGS_FREE_SENSE_BUFFER));
    NT_ASSERT(Srb->SenseInfoBuffer != FdoExtension->SenseData);

    ExFreePool(Srb->SenseInfoBuffer);
    Srb->SenseInfoBuffer = FdoExtension->SenseData;
    Srb->SenseInfoBufferLength = GET_FDO_EXTENSON_SENSE_DATA_LENGTH(FdoExtension);
    CLEAR_FLAG(Srb->SrbFlags, SRB_FLAGS_FREE_SENSE_BUFFER);
    return;
}



/*++////////////////////////////////////////////////////////////////////////////

PCLASS_SCAN_FOR_SPECIAL_HANDLER()

Routine Description:

    This routine is a callback into the driver to set device-specific
    flags based upon matches made to the device's inquiry data.  Drivers
    register for this callback using ClassRegisterScanForSpecial().

Irql:

    This routine will be called at KIRQL == PASSIVE_LEVEL

Arguments:

    DeviceObject is the device object the error occurred on.

    Srb is the Srb that was being processed when the error occurred.

    Status may be overwritten by the routine if it decides that the error
        was benign, or otherwise wishes to change the returned status code
        for this command

    Retry may be overwritten to specify that this command should or should
        not be retried (if the callee supports retrying commands)

Return Value:

    status

--*/
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
VOID
(*PCLASS_SCAN_FOR_SPECIAL_HANDLER) (
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ ULONG_PTR Data
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
ClassScanForSpecial(
    _In_ PFUNCTIONAL_DEVICE_EXTENSION FdoExtension,
    _In_ CLASSPNP_SCAN_FOR_SPECIAL_INFO DeviceList[],
    _In_ PCLASS_SCAN_FOR_SPECIAL_HANDLER Function
    );

#endif /* _CLASS_ */
