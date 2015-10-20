/*++

Copyright (c) 1989-2002  Microsoft Corporation

Module Name:

    fltKernel.h

Abstract:

    This contains all of the global definitions for mini-filters.

Environment:

    Kernel mode

--*/

#ifndef __FLTKERNEL__
#define __FLTKERNEL__

#ifdef __cplusplus
extern "C" {
#endif

//
// IMPORTANT!!!!!
//
// This is how FltMgr was released (from oldest to newest)
// xpsp2, srv03 SP1, w2k sp4+URP, LH, Win7
//

//
//  The defines items that are part of the filter manager baseline
//

#define FLT_MGR_BASELINE (((OSVER(NTDDI_VERSION) == NTDDI_WIN2K) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WIN2KSP4))) || \
                          ((OSVER(NTDDI_VERSION) == NTDDI_WINXP) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WINXPSP2))) || \
                          ((OSVER(NTDDI_VERSION) == NTDDI_WS03)  && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WS03SP1))) ||  \
                          (NTDDI_VERSION >= NTDDI_VISTA))

//
//  This defines items that were added after XPSP2 was released.  This means
//  they are in Srv03 SP1, W2K SP4+URP, and Longhorn and above.
//

#define FLT_MGR_AFTER_XPSP2 (((OSVER(NTDDI_VERSION) == NTDDI_WIN2K) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WIN2KSP4))) ||  \
                             ((OSVER(NTDDI_VERSION) == NTDDI_WINXP) && (SPVER(NTDDI_VERSION) >  SPVER(NTDDI_WINXPSP2))) ||  \
                             ((OSVER(NTDDI_VERSION) == NTDDI_WS03)  && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WS03SP1))) ||   \
                             (NTDDI_VERSION >= NTDDI_VISTA))

//
//  This defines items that only exist in longhorn or later
//

#define FLT_MGR_LONGHORN (NTDDI_VERSION >= NTDDI_VISTA)

//
//  This defines items that only exist in Windows 7 or later
//

#define FLT_MGR_WIN7 (NTDDI_VERSION >= NTDDI_WIN7)

//
//  This defines items that only exist in Windows 8 or later
//

#define FLT_MGR_WIN8 (NTDDI_VERSION >= NTDDI_WIN8)

//
//  This defines items that only exist in Windows Blue or later
//

#define FLT_MGR_WINBLUE (NTDDI_VERSION >= NTDDI_WINBLUE)

//
//  This defines items that only exist in Windows Threshold or later
//
//  Move this to threshold when we go there.
//  ABRACADABRA_THRESHOLD
//

//#define FLT_MGR_WINTHRESHOLD (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
#define FLT_MGR_WINTHRESHOLD (NTDDI_VERSION >= NTDDI_WINBLUE)

///////////////////////////////////////////////////////////////////////////////
//
//  Standard includes
//
///////////////////////////////////////////////////////////////////////////////

#include <ntifs.h>
#include <fltUserStructures.h>
#include <initguid.h>

#if FLT_MGR_BASELINE

///////////////////////////////////////////////////////////////////////////////
//
//  Miscellaneous macros useful for Filter Manager & mini-filters
//
///////////////////////////////////////////////////////////////////////////////

//
//  Version-differential support for ASSERTs
//  (NT_ASSERT on Vista and later, ASSERT otherwise)
//

#if FLT_MGR_LONGHORN

#define FLT_ASSERT(_e) NT_ASSERT(_e)
#define FLT_ASSERTMSG(_m, _e) NT_ASSERTMSG(_m, _e)

#else

#define FLT_ASSERT(_e) ASSERT(_e)
#define FLT_ASSERTMSG(_m, _e) ASSERTMSG(_m, _e)

#endif

//
//  Handy macros for doing pointer arithmetic
//

#define Add2Ptr(P,I) ((PVOID)((PUCHAR)(P) + (I)))
#define PtrOffset(B,O) ((ULONG)((ULONG_PTR)(O) - (ULONG_PTR)(B)))

//
//  This macro takes a length & rounds it up to a multiple of the alignment
//  Alignment is given as a power of 2
//

#define ROUND_TO_SIZE(_length, _alignment)                      \
            ((((ULONG_PTR)(_length)) + ((_alignment)-1)) & ~(ULONG_PTR) ((_alignment) - 1))

//
//  Checks if 1st argument is aligned on given power of 2 boundary specified
//  by 2nd argument
//

#define IS_ALIGNED(_pointer, _alignment)                        \
        ((((ULONG_PTR) (_pointer)) & ((_alignment) - 1)) == 0)

///////////////////////////////////////////////////////////////////////////////
//
//                  FltMgr Operation Definitions
//
///////////////////////////////////////////////////////////////////////////////

//
//  Along with the existing IRP_MJ_xxxx definitions (0 - 0x1b) in NTIFS.H,
//  this defines all of the operation IDs that can be sent to a mini-filter.
//

#define IRP_MJ_ACQUIRE_FOR_SECTION_SYNCHRONIZATION   ((UCHAR)-1)
#define IRP_MJ_RELEASE_FOR_SECTION_SYNCHRONIZATION   ((UCHAR)-2)
#define IRP_MJ_ACQUIRE_FOR_MOD_WRITE                 ((UCHAR)-3)
#define IRP_MJ_RELEASE_FOR_MOD_WRITE                 ((UCHAR)-4)
#define IRP_MJ_ACQUIRE_FOR_CC_FLUSH                  ((UCHAR)-5)
#define IRP_MJ_RELEASE_FOR_CC_FLUSH                  ((UCHAR)-6)


//
//  Leave space for additional FS_FILTER codes here
//

#define IRP_MJ_FAST_IO_CHECK_IF_POSSIBLE             ((UCHAR)-13)
#define IRP_MJ_NETWORK_QUERY_OPEN                    ((UCHAR)-14)
#define IRP_MJ_MDL_READ                              ((UCHAR)-15)
#define IRP_MJ_MDL_READ_COMPLETE                     ((UCHAR)-16)
#define IRP_MJ_PREPARE_MDL_WRITE                     ((UCHAR)-17)
#define IRP_MJ_MDL_WRITE_COMPLETE                    ((UCHAR)-18)
#define IRP_MJ_VOLUME_MOUNT                          ((UCHAR)-19)
#define IRP_MJ_VOLUME_DISMOUNT                       ((UCHAR)-20)


#define FLT_INTERNAL_OPERATION_COUNT                 22

//
//  Not currently implemented
//

/*
#define IRP_MJ_READ_COMPRESSED                      ((UCHAR)-xx)
#define IRP_MJ_WRITE_COMPRESSED                     ((UCHAR)-xx)
#define IRP_MJ_MDL_READ_COMPLETE_REQUEST            ((UCHAR)-xx)
#define IRP_MJ_MDL_WRITE_COMPLETE_COMPRESSED        ((UCHAR)-xx)
*/

//
//  Marks the end of the operation list for registration
//

#define IRP_MJ_OPERATION_END                        ((UCHAR)0x80)


///////////////////////////////////////////////////////////////////////////////
//
//  Basic Filter data types
//
///////////////////////////////////////////////////////////////////////////////

typedef struct _FLT_FILTER *PFLT_FILTER;
typedef struct _FLT_VOLUME *PFLT_VOLUME;
typedef struct _FLT_INSTANCE *PFLT_INSTANCE;
typedef struct _FLT_PORT *PFLT_PORT;

typedef PVOID PFLT_CONTEXT;
#define NULL_CONTEXT ((PFLT_CONTEXT)NULL)   //EMPTY context

#if !FLT_MGR_LONGHORN
//
//  For non-longhorn environments we need to define this structure since
//  it is used elsewhere.  In longhorn and later it is part of ntifs.h
//

typedef struct _KTRANSACTION *PKTRANSACTION;

#endif // !FLT_MGR_LONGHORN



///////////////////////////////////////////////////////////////////////////////
//
//  This defines the standard parameter block that is passed to every
//  callback.
//
///////////////////////////////////////////////////////////////////////////////

#if !defined(_AMD64_) && !defined(_IA64_) && !defined(_ARM_) && !defined(_ARM64_)
#include "pshpack4.h"
#endif

#if _MSC_VER >= 1200

#pragma warning(push)

#pragma warning(disable:4201) // nonstandard extension used : nameless struct/union

//
// Disable C++ specific warnings that fire since a few of the defined
// structs have constant fields.  Initialization of these fields is
// done by filter manager and filter should never change them.
//

#pragma warning(disable:4510) // default constructor could not be generated.
#pragma warning(disable:4512) // assignment operator could not be generated
#pragma warning(disable:4610) // struct can never be instantiated

#endif

typedef union _FLT_PARAMETERS {

    //
    //  IRP_MJ_CREATE
    //

    struct {
        PIO_SECURITY_CONTEXT SecurityContext;

        //
        //  The low 24 bits contains CreateOptions flag values.
        //  The high 8 bits contains the CreateDisposition values.
        //

        ULONG Options;

        USHORT POINTER_ALIGNMENT FileAttributes;
        USHORT ShareAccess;
        ULONG POINTER_ALIGNMENT EaLength;

        PVOID EaBuffer;                 //Not in IO_STACK_LOCATION parameters list
        LARGE_INTEGER AllocationSize;   //Not in IO_STACK_LOCATION parameters list
    } Create;

    //
    //  IRP_MJ_CREATE_NAMED_PIPE
    //
    //  Notice that the fields in the following parameter structure must
    //  match those for the create structure other than the last longword.
    //  This is so that no distinctions need be made by the I/O system's
    //  parse routine other than for the last longword.
    //

    struct {
        PIO_SECURITY_CONTEXT SecurityContext;
        ULONG Options;
        USHORT POINTER_ALIGNMENT Reserved;
        USHORT ShareAccess;
        PVOID Parameters; // PNAMED_PIPE_CREATE_PARAMETERS
    } CreatePipe;

    //
    //  IRP_MJ_CREATE_MAILSLOT
    //
    //  Notice that the fields in the following parameter structure must
    //  match those for the create structure other than the last longword.
    //  This is so that no distinctions need be made by the I/O system's
    //  parse routine other than for the last longword.
    //

    struct {
        PIO_SECURITY_CONTEXT SecurityContext;
        ULONG Options;
        USHORT POINTER_ALIGNMENT Reserved;
        USHORT ShareAccess;
        PVOID Parameters; // PMAILSLOT_CREATE_PARAMETERS
    } CreateMailslot;

    //
    //  IRP_MJ_READ
    //

    struct {
        ULONG Length;                   //Length of transfer
        ULONG POINTER_ALIGNMENT Key;
        LARGE_INTEGER ByteOffset;       //Offset to read from

        PVOID ReadBuffer;       //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } Read;

    //
    //  IRP_MJ_WRITE
    //

    struct {
        ULONG Length;                   //Length of transfer
        ULONG POINTER_ALIGNMENT Key;
        LARGE_INTEGER ByteOffset;       //Offset to write to

        PVOID WriteBuffer;      //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } Write;

    //
    //  IRP_MJ_QUERY_INFORMATION
    //

    struct {
        ULONG Length;           //Length of buffer
        FILE_INFORMATION_CLASS POINTER_ALIGNMENT FileInformationClass; //Class of information to query

        PVOID InfoBuffer;       //Not in IO_STACK_LOCATION parameters list
    } QueryFileInformation;

    //
    //  IRP_MJ_SET_INFORMATION
    //

    struct {
        ULONG Length;
        FILE_INFORMATION_CLASS POINTER_ALIGNMENT FileInformationClass;
        PFILE_OBJECT ParentOfTarget;
        union {
            struct {
                BOOLEAN ReplaceIfExists;
                BOOLEAN AdvanceOnly;
            };
            ULONG ClusterCount;
            HANDLE DeleteHandle;
        };

        PVOID InfoBuffer;       //Not in IO_STACK_LOCATION parameters list
    } SetFileInformation;

    //
    //  IRP_MJ_QUERY_EA
    //

    struct {
        ULONG Length;
        PVOID EaList;
        ULONG EaListLength;
        ULONG POINTER_ALIGNMENT EaIndex;

        PVOID EaBuffer;         //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } QueryEa;

    //
    //  IRP_MJ_SET_EA
    //

    struct {
        ULONG Length;

        PVOID EaBuffer;         //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } SetEa;

    //
    //  IRP_MJ_QUERY_VOLUME_INFORMATION
    //

    struct {
        ULONG Length;
        FS_INFORMATION_CLASS POINTER_ALIGNMENT FsInformationClass;

        PVOID VolumeBuffer;     //Not in IO_STACK_LOCATION parameters list
    } QueryVolumeInformation;

    //
    //  IRP_MJ_SET_VOLUME_INFORMATION
    //

    struct {
        ULONG Length;
        FS_INFORMATION_CLASS POINTER_ALIGNMENT FsInformationClass;

        PVOID VolumeBuffer;     //Not in IO_STACK_LOCATION parameters list
    } SetVolumeInformation;

    //
    //  IRP_MJ_DIRECTORY_CONTROL
    //

    union {

        //
        //  IRP_MN_QUERY_DIRECTORY or IRP_MN_QUERY_OLE_DIRECTORY
        //

        struct {
            ULONG Length;
            PUNICODE_STRING FileName;
            FILE_INFORMATION_CLASS FileInformationClass;
            ULONG POINTER_ALIGNMENT FileIndex;

            PVOID DirectoryBuffer;  //Not in IO_STACK_LOCATION parameters list
            PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
        } QueryDirectory;

        //
        //  IRP_MN_NOTIFY_CHANGE_DIRECTORY
        //

        struct {
            ULONG Length;
            ULONG POINTER_ALIGNMENT CompletionFilter;

            //
            // These spares ensure that the offset of DirectoryBuffer is
            // exactly the same as that for QueryDirectory minor code. This
            // needs to be the same because filter manager code makes the assumption
            // they are the same
            //

            ULONG POINTER_ALIGNMENT Spare1;
            ULONG POINTER_ALIGNMENT Spare2;

            PVOID DirectoryBuffer;  //Not in IO_STACK_LOCATION parameters list
            PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
        } NotifyDirectory;

    } DirectoryControl;

    //
    //  IRP_MJ_FILE_SYSTEM_CONTROL
    //
    //  Note that the user's output buffer is stored in the UserBuffer field
    //  and the user's input buffer is stored in the SystemBuffer field.
    //

    union {

        //
        //  IRP_MN_VERIFY_VOLUME
        //

        struct {
            PVPB Vpb;
            PDEVICE_OBJECT DeviceObject;
        } VerifyVolume;

        //
        //  IRP_MN_KERNEL_CALL and IRP_MN_USER_FS_REQUEST
        //  The parameters are broken out into 3 separate unions based on the
        //  method of the FSCTL Drivers should use the method-appropriate
        //  union for accessing parameters
        //

        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT FsControlCode;
        } Common;

        //
        //  METHOD_NEITHER Fsctl parameters
        //

        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT FsControlCode;

            //
            //  Type3InputBuffer: name changed from IO_STACK_LOCATION parameters
            //  Note for this mothod, both input & output buffers are 'raw',
            //  i.e. unbuffered, and should be treated with caution ( either
            //  probed & captured before access, or use try-except to enclose
            //  access to the buffer)
            //

            PVOID InputBuffer;
            PVOID OutputBuffer;

            //
            //  Mdl address for the output buffer  (maybe NULL)
            //

            PMDL OutputMdlAddress;
        } Neither;

        //
        //  METHOD_BUFFERED Fsctl parameters
        //

        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT FsControlCode;

            //
            //  For method buffered, this buffer is used both for input and
            //  output
            //

            PVOID SystemBuffer;

        } Buffered;

        //
        //  METHOD_IN_DIRECT/METHOD_OUT_DIRECT Fsctl parameters
        //

        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT FsControlCode;

            //
            //  Note the input buffer is already captured & buffered here - so
            //  can be safely accessed from kernel mode.  The output buffer is
            //  locked down - so also safe to access, however the OutputBuffer
            //  pointer is the user virtual address, so if the driver wishes to
            //  access the buffer in a different process context than that of
            //  the original i/o - it will have to obtain the system address
            //  from the MDL
            //

            PVOID InputSystemBuffer;

            //
            //  User virtual address of output buffer
            //

            PVOID OutputBuffer;

            //
            //  Mdl address for the locked down output buffer (should be
            //  non-NULL)
            //

            PMDL OutputMdlAddress;
        } Direct;

    } FileSystemControl;

    //
    //  IRP_MJ_DEVICE_CONTROL or IRP_MJ_INTERNAL_DEVICE_CONTROL
    //

    union {

        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT IoControlCode;
        } Common;

        //
        //  The parameters are broken out into 3 separate unions based on the
        //  method of the IOCTL.  Drivers should use the method-appropriate
        //  union for accessing parameters.
        //

        //
        //  METHOD_NEITHER Ioctl parameters for IRP path
        //

        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT IoControlCode;

            //
            //  Type3InputBuffer: name changed from IO_STACK_LOCATION parameters
            //  Note for this mothod, both input & output buffers are 'raw',
            //  i.e. unbuffered, and should be treated with caution ( either
            //  probed & captured before access, or use try-except to enclose
            //  access to the buffer)
            //

            PVOID InputBuffer;
            PVOID OutputBuffer;

            //
            //  Mdl address for the output buffer  (maybe NULL)
            //

            PMDL OutputMdlAddress;
        } Neither;

        //
        //  METHOD_BUFFERED Ioctl parameters for IRP path
        //

        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT IoControlCode;

            //
            //  For method buffered, this buffer is used both for input and
            //  output
            //

            PVOID SystemBuffer;

        } Buffered;

        //
        //  METHOD_IN_DIRECT/METHOD_OUT_DIRECT Ioctl parameters
        //

        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT IoControlCode;

            //
            //  Note the input buffer is already captured & buffered here - so
            //  can be safely accessed from kernel mode.  The output buffer is
            //  locked down - so also safe to access, however the OutputBuffer
            //  pointer is the user virtual address, so if the driver wishes to
            //  access the buffer in a different process context than that of
            //  the original i/o - it will have to obtain the system address
            //  from the MDL
            //

            PVOID InputSystemBuffer;

            //
            //  User virtual address of output buffer
            //

            PVOID OutputBuffer;

            //
            //  Mdl address for the locked down output buffer (should be non-NULL)
            //

            PMDL OutputMdlAddress;
        } Direct;

        //
        //  Regardless of method, if the CALLBACK_DATA represents a fast i/o
        //  device IOCTL, this structure must be used to access the parameters
        //

        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT IoControlCode;

            //
            //  Both buffers are 'raw', i.e. unbuffered
            //

            PVOID InputBuffer;
            PVOID OutputBuffer;

        } FastIo;

    } DeviceIoControl;

    //
    //  IRP_MJ_LOCK_CONTROL
    //

    struct {
        PLARGE_INTEGER Length;
        ULONG POINTER_ALIGNMENT Key;
        LARGE_INTEGER ByteOffset;

        PEPROCESS ProcessId;        //  Only meaningful for FastIo locking operations.
        BOOLEAN FailImmediately;    //  Only meaningful for FastIo locking operations.
        BOOLEAN ExclusiveLock;      //  Only meaningful for FastIo locking operations.
    } LockControl;

    //
    //  IRP_MJ_QUERY_SECURITY
    //

    struct {
        SECURITY_INFORMATION SecurityInformation;
        ULONG POINTER_ALIGNMENT Length;

        PVOID SecurityBuffer;   //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } QuerySecurity;

    //
    //  IRP_MJ_SET_SECURITY
    //

    struct {
        SECURITY_INFORMATION SecurityInformation;
        PSECURITY_DESCRIPTOR SecurityDescriptor;
    } SetSecurity;

    //
    //  IRP_MJ_SYSTEM_CONTROL
    //

    struct {
        ULONG_PTR ProviderId;
        PVOID DataPath;
        ULONG BufferSize;
        PVOID Buffer;
    } WMI;

    //
    //  IRP_MJ_QUERY_QUOTA
    //

    struct {
        ULONG Length;
        PSID StartSid;
        PFILE_GET_QUOTA_INFORMATION SidList;
        ULONG SidListLength;

        PVOID QuotaBuffer;      //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } QueryQuota;

    //
    //  IRP_MJ_SET_QUOTA
    //

    struct {
        ULONG Length;

        PVOID QuotaBuffer;      //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } SetQuota;

    //
    //  IRP_MJ_PNP
    //

    union {

        //
        //  IRP_MN_START_DEVICE
        //

        struct {
            PCM_RESOURCE_LIST AllocatedResources;
            PCM_RESOURCE_LIST AllocatedResourcesTranslated;
        } StartDevice;

        //
        //  IRP_MN_QUERY_DEVICE_RELATIONS
        //

        struct {
            DEVICE_RELATION_TYPE Type;
        } QueryDeviceRelations;

        //
        //  IRP_MN_QUERY_INTERFACE
        //

        struct {
            CONST GUID *InterfaceType;
            USHORT Size;
            USHORT Version;
            PINTERFACE Interface;
            PVOID InterfaceSpecificData;
        } QueryInterface;

        //
        //  IRP_MN_QUERY_CAPABILITIES
        //

        struct {
            PDEVICE_CAPABILITIES Capabilities;
        } DeviceCapabilities;

        //
        //  IRP_MN_FILTER_RESOURCE_REQUIREMENTS
        //

        struct {
            PIO_RESOURCE_REQUIREMENTS_LIST IoResourceRequirementList;
        } FilterResourceRequirements;

        //
        //  IRP_MN_READ_CONFIG and IRP_MN_WRITE_CONFIG
        //

        struct {
            ULONG WhichSpace;
            PVOID Buffer;
            ULONG Offset;
            ULONG POINTER_ALIGNMENT Length;
        } ReadWriteConfig;

        //
        //  IRP_MN_SET_LOCK
        //

        struct {
            BOOLEAN Lock;
        } SetLock;

        //
        //  IRP_MN_QUERY_ID
        //

        struct {
            BUS_QUERY_ID_TYPE IdType;
        } QueryId;

        //
        //  IRP_MN_QUERY_DEVICE_TEXT
        //

        struct {
            DEVICE_TEXT_TYPE DeviceTextType;
            LCID POINTER_ALIGNMENT LocaleId;
        } QueryDeviceText;

        //
        //  IRP_MN_DEVICE_USAGE_NOTIFICATION
        //

        struct {
            BOOLEAN InPath;
            BOOLEAN Reserved[3];
            DEVICE_USAGE_NOTIFICATION_TYPE POINTER_ALIGNMENT Type;
        } UsageNotification;

    } Pnp;

    //
    //  ***** Start of Emulated IRP definitions
    //

    //
    //  IRP_MJ_ACQUIRE_FOR_SECTION_SYNCHRONIZATION
    //

    struct {
        FS_FILTER_SECTION_SYNC_TYPE SyncType;
        ULONG PageProtection;
        PFS_FILTER_SECTION_SYNC_OUTPUT OutputInformation;
    } AcquireForSectionSynchronization;

    //
    //  IRP_MJ_ACQUIRE_FOR_MOD_WRITE
    //

    struct {
        PLARGE_INTEGER EndingOffset;
        PERESOURCE *ResourceToRelease;
    } AcquireForModifiedPageWriter;

    //
    //  IRP_MJ_RELEASE_FOR_MOD_WRITE
    //

    struct {
        PERESOURCE ResourceToRelease;
    } ReleaseForModifiedPageWriter;


    //
    //  FAST_IO_CHECK_IF_POSSIBLE
    //

    struct {
        LARGE_INTEGER FileOffset;
        ULONG Length;
        ULONG POINTER_ALIGNMENT LockKey;
        BOOLEAN POINTER_ALIGNMENT CheckForReadOperation;
    } FastIoCheckIfPossible;

    //
    //  IRP_MJ_NETWORK_QUERY_OPEN
    //

    struct {
        PIRP Irp;
        PFILE_NETWORK_OPEN_INFORMATION NetworkInformation;
    } NetworkQueryOpen;

    //
    //  IRP_MJ_MDL_READ
    //

    struct {
        LARGE_INTEGER FileOffset;
        ULONG POINTER_ALIGNMENT Length;
        ULONG POINTER_ALIGNMENT Key;
        PMDL *MdlChain;
    } MdlRead;

    //
    //  IRP_MJ_MDL_READ_COMPLETE
    //

    struct {
        PMDL MdlChain;
    } MdlReadComplete;

    //
    //  IRP_MJ_PREPARE_MDL_WRITE
    //

    struct {
        LARGE_INTEGER FileOffset;
        ULONG POINTER_ALIGNMENT Length;
        ULONG POINTER_ALIGNMENT Key;
        PMDL *MdlChain;
    } PrepareMdlWrite;

    //
    //  IRP_MJ_MDL_WRITE_COMPLETE
    //

    struct {
        LARGE_INTEGER FileOffset;
        PMDL MdlChain;
    } MdlWriteComplete;

    //
    //  IRP_MJ_VOLUME_MOUNT
    //

    struct {
        ULONG DeviceType;
    } MountVolume;


    //
    // Others - driver-specific
    //

    struct {
        PVOID Argument1;
        PVOID Argument2;
        PVOID Argument3;
        PVOID Argument4;
        PVOID Argument5;
        LARGE_INTEGER Argument6;
    } Others;

} FLT_PARAMETERS, *PFLT_PARAMETERS;

#if !defined(_AMD64_) && !defined(_IA64_) && !defined(_ARM_) && !defined(_ARM64_)
#include "poppack.h"
#endif


///////////////////////////////////////////////////////////////////////////////
//
//                      CALLBACK DATA definition
//
///////////////////////////////////////////////////////////////////////////////

//
//  Changeable portion of the callback data. Any of the parameters in this
//  structure that are passed in via CallbackData->Px,  can be changed by
//  a mini-filter.  However if filter changes ANY of the parameters in this
//  structure, it needs to issue FltSetCallbackDataDirty()  on the
//  callback-data or the changes will not be honored & unpredictable failures
//  may occur.
//

typedef struct _FLT_IO_PARAMETER_BLOCK {


    //
    //  Fields from IRP
    //  Flags

    ULONG IrpFlags;

    //
    //  Major/minor functions from IRP
    //

    UCHAR MajorFunction;
    UCHAR MinorFunction;

    //
    //  The flags associated with operations.
    //  The IO_STACK_LOCATION.Flags field in the old model (SL_* flags)
    //

    UCHAR OperationFlags;

    //
    //  For alignment
    //

    UCHAR Reserved;


    //
    //  The FileObject that is the target for this
    //  IO operation.
    //

    PFILE_OBJECT TargetFileObject;

    //
    //  Instance that i/o is directed to
    //

    PFLT_INSTANCE TargetInstance;

    //
    //  Normalized parameters for the operation
    //

    FLT_PARAMETERS Parameters;

} FLT_IO_PARAMETER_BLOCK, *PFLT_IO_PARAMETER_BLOCK;


//
//  Flag Bit definitions for the Flags variable of FLT_CALLBACK_DATA
//

typedef ULONG FLT_CALLBACK_DATA_FLAGS;

    //
    //  Flags passed to mini-filters
    //

    //
    //  This mask designates the flags that describe the the type of i/o
    //  and parameters
    //
    #define FLTFL_CALLBACK_DATA_REISSUE_MASK           0x0000FFFF

    //
    //  The below 3 flags are mutually exclusive.
    //  i.e. only ONE and exacly one hould be set for the callback data.
    //  Once set they should never change
    //
    #define FLTFL_CALLBACK_DATA_IRP_OPERATION           0x00000001    // Set for Irp operations
    #define FLTFL_CALLBACK_DATA_FAST_IO_OPERATION       0x00000002    // Set for Fast Io operations
    #define FLTFL_CALLBACK_DATA_FS_FILTER_OPERATION     0x00000004    // Set for Fs Filter operations
    //
    //  In principle this flag can be set for any operation. Once set it shouldn't change
    //
    #define FLTFL_CALLBACK_DATA_SYSTEM_BUFFER           0x00000008    // Set if the buffer passed in for the i/o was a system buffer



    //
    //  Below flags are relevant only for IRP-based i/o - i.e. only
    //  if FLTFL_CALLBACK_DATA_IRP_OPERATION was set. If the i/o was reissued
    //  both flags will necessarily be set
    //
    #define FLTFL_CALLBACK_DATA_GENERATED_IO            0x00010000    // Set if this is I/O generated by a mini-filter
    #define FLTFL_CALLBACK_DATA_REISSUED_IO             0x00020000    // Set if this I/O was reissued

    //
    //  Below 2 flags are set only for post-callbacks.
    //
    #define FLTFL_CALLBACK_DATA_DRAINING_IO             0x00040000    // set if this operation is being drained. If set,
    #define FLTFL_CALLBACK_DATA_POST_OPERATION          0x00080000    // Set if this is a POST operation

    //
    //  This flag can only be set by Filter Manager, only for an IRP based operation
    //  and only for a post callback. When set, it specifies that a lower level driver
    //  allocated a buffer for AssociatedIrp.SystemBuffer in which the data for
    //  the operation will be returned to the IO manager. Filters need to know this
    //  because when they were called in the PRE operation AssociatedIrp.SystemBuffer
    //  was null and as such their buffer is set to UserBuffer and they have no way of
    //  getting the real data from SystemBuffer. Check the IRP_DEALLOCATE_BUFFER flag for
    //  more details on how this is used by file systems.
    //

    #define FLTFL_CALLBACK_DATA_NEW_SYSTEM_BUFFER       0x00100000

    //
    //  Flags set by mini-filters: these are set by the minifilters and may be reset
    //  by filter manager.
    //
    #define FLTFL_CALLBACK_DATA_DIRTY                   0x80000000    // Set by caller if parameters were changed



#if FLT_MGR_WIN7

//
//  CallbackData allocation flags.
//

typedef ULONG FLT_ALLOCATE_CALLBACK_DATA_FLAGS;

    //
    //  Normaly only the IrpCtrl is allocated and the other members
    //  that might be needed are allocated at the time when they are needed.
    //  This flag allows the user to preallocate all other structures that
    //  are needed thus avoiding a potential allocation failure at a later
    //  time. Useful when a filter wants to save a callbackdata to use in
    //  case it needs to perform IO under low memory conditions.
    //

    #define FLT_ALLOCATE_CALLBACK_DATA_PREALLOCATE_ALL_MEMORY   0x00000001

#endif //FLT_MGR_WIN7

//
//  This defines the standard information passed to a mini-filter for
//  every operation callback.
//

typedef struct _FLT_CALLBACK_DATA {

    //
    //  Flags
    //

    FLT_CALLBACK_DATA_FLAGS Flags;

    //
    //  Thread that initiated this operation.
    //

    PETHREAD CONST Thread;

    //
    //  Pointer to the changeable i/o parameters
    //

    PFLT_IO_PARAMETER_BLOCK CONST Iopb;

    //
    //  For pre-op calls: if filter returns STATUS_IO_COMPLETE, then it should
    //  set the return i/o status here.  For post-operation calls, this is set
    //  by filter-manager indicating the completed i/o status.
    //

    IO_STATUS_BLOCK IoStatus;


    struct _FLT_TAG_DATA_BUFFER *TagData;

    union {
        struct {

            //
            //  Queue links if the FltMgr queue is used to
            //  pend the callback
            //

            LIST_ENTRY QueueLinks;

            //
            //  Additional context
            //

            PVOID QueueContext[2];
        };

        //
        //  The following are available to filters to use
        //  in whatever manner desired if not using the filter manager
        //  queues.
        //  NOTE:  These fields are only valid while the filter is
        //         processing this operation which is inside the operation
        //         callback or while the operation is pended.
        //

        PVOID FilterContext[4];
    };

    //
    //  Original requester mode of caller
    //

    KPROCESSOR_MODE RequestorMode;

} FLT_CALLBACK_DATA, *PFLT_CALLBACK_DATA;


//
//  Routines to manipulate callback data dirty state
//

VOID
FLTAPI
FltSetCallbackDataDirty(
    _Inout_ PFLT_CALLBACK_DATA Data
    );

VOID
FLTAPI
FltClearCallbackDataDirty(
    _Inout_ PFLT_CALLBACK_DATA Data
    );

BOOLEAN
FLTAPI
FltIsCallbackDataDirty(
    _In_ PFLT_CALLBACK_DATA Data
    );


//
//  These used to be macros and our now routines.  This was done for greater
//  flexibility in the future.  I have kept the macros around for compatibility
//  with existing filters.
//

#define FLT_SET_CALLBACK_DATA_DIRTY(Data)   FltSetCallbackDataDirty(Data)
#define FLT_CLEAR_CALLBACK_DATA_DIRTY(Data) FltClearCallbackDataDirty(Data)
#define FLT_IS_CALLBACK_DATA_DIRTY(Data)    FltIsCallbackDataDirty(Data)

//
//  These just check the kind of operation for the CallbackData
//  All of them take callback data as the parameter
//

#define FLT_IS_IRP_OPERATION(Data)          (FlagOn( (Data)->Flags, FLTFL_CALLBACK_DATA_IRP_OPERATION ))
#define FLT_IS_FASTIO_OPERATION(Data)       (FlagOn( (Data)->Flags, FLTFL_CALLBACK_DATA_FAST_IO_OPERATION ))
#define FLT_IS_FS_FILTER_OPERATION(Data)    (FlagOn( (Data)->Flags, FLTFL_CALLBACK_DATA_FS_FILTER_OPERATION ))

//
//  Bunch of other miscellaneous i/o characteristics
//

#define FLT_IS_REISSUED_IO(Data)            (FlagOn( (Data)->Flags, FLTFL_CALLBACK_DATA_REISSUED_IO ))

//
//  This test only is useful for IRP operations to check if the passed in buffer is a system buffer
//

#define FLT_IS_SYSTEM_BUFFER(Data)          (FlagOn( (Data)->Flags, FLTFL_CALLBACK_DATA_SYSTEM_BUFFER ))


///////////////////////////////////////////////////////////////////////////////
//
//                        Context Definitions
//
///////////////////////////////////////////////////////////////////////////////

//
//  Definitions for the types of contexts that are available.
//

typedef USHORT FLT_CONTEXT_TYPE;

    #define FLT_VOLUME_CONTEXT          0x0001
    #define FLT_INSTANCE_CONTEXT        0x0002
    #define FLT_FILE_CONTEXT            0x0004
    #define FLT_STREAM_CONTEXT          0x0008
    #define FLT_STREAMHANDLE_CONTEXT    0x0010
    #define FLT_TRANSACTION_CONTEXT     0x0020

#if FLT_MGR_WIN8

    #define FLT_SECTION_CONTEXT         0x0040

#endif // FLT_MGR_WIN8


    #define FLT_CONTEXT_END             0xffff

//
//  Definition for ALL contexts
//

#if FLT_MGR_WIN8

#define FLT_ALL_CONTEXTS (FLT_VOLUME_CONTEXT |      \
                          FLT_INSTANCE_CONTEXT |    \
                          FLT_FILE_CONTEXT |        \
                          FLT_STREAM_CONTEXT |      \
                          FLT_STREAMHANDLE_CONTEXT |\
                          FLT_TRANSACTION_CONTEXT | \
                          FLT_SECTION_CONTEXT)

#else

#define FLT_ALL_CONTEXTS (FLT_VOLUME_CONTEXT |      \
                          FLT_INSTANCE_CONTEXT |    \
                          FLT_FILE_CONTEXT |        \
                          FLT_STREAM_CONTEXT |      \
                          FLT_STREAMHANDLE_CONTEXT |\
                          FLT_TRANSACTION_CONTEXT)

#endif // FLT_MGR_WIN8

//
//  This structure is passed to a filter's pre/post operation callback
//  routines and defines all of the handles associated with the given
//  operation.
//

typedef struct _FLT_RELATED_OBJECTS {

    USHORT CONST Size;
    USHORT CONST TransactionContext;            //TxF mini-version
    PFLT_FILTER CONST Filter;
    PFLT_VOLUME CONST Volume;
    PFLT_INSTANCE CONST Instance;
    PFILE_OBJECT CONST FileObject;
    PKTRANSACTION CONST Transaction;

} FLT_RELATED_OBJECTS, *PFLT_RELATED_OBJECTS;

typedef CONST struct _FLT_RELATED_OBJECTS *PCFLT_RELATED_OBJECTS;

//
//  Structure used by a filter to get/release multiple contexts at once.
//

typedef struct _FLT_RELATED_CONTEXTS {

    PFLT_CONTEXT VolumeContext;
    PFLT_CONTEXT InstanceContext;
    PFLT_CONTEXT FileContext;
    PFLT_CONTEXT StreamContext;
    PFLT_CONTEXT StreamHandleContext;
    PFLT_CONTEXT TransactionContext;


} FLT_RELATED_CONTEXTS, *PFLT_RELATED_CONTEXTS;

#if FLT_MGR_WIN8

//
//  Structure used by a filter to get/release multiple contexts at once.
//  Win8.
//

typedef struct _FLT_RELATED_CONTEXTS_EX {

    PFLT_CONTEXT VolumeContext;
    PFLT_CONTEXT InstanceContext;
    PFLT_CONTEXT FileContext;
    PFLT_CONTEXT StreamContext;
    PFLT_CONTEXT StreamHandleContext;
    PFLT_CONTEXT TransactionContext;
    PFLT_CONTEXT SectionContext;


} FLT_RELATED_CONTEXTS_EX, *PFLT_RELATED_CONTEXTS_EX;

#endif // FLT_MGR_WIN8

//
//  Prototype for Context Cleanup routine.  This routine is called by the
//  filterManager when it has determined it is time to free a context.
//  The called filter should cleanup any allocated memory they have inside
//  this context structure.  FLTMGR will free the context upon return.
//

typedef VOID
(FLTAPI *PFLT_CONTEXT_CLEANUP_CALLBACK) (
    _In_ PFLT_CONTEXT Context,
    _In_ FLT_CONTEXT_TYPE ContextType
    );

//
//  Function prototypes for Allocation and Free callbacks that may be used by
//  advanced filters that want to manage context allocation directly.
//
//  NOTE:  Most filters do not need to use this feature since the default
//         mechanism built into FltMgr does this efficiently.
//

typedef PVOID
(FLTAPI *PFLT_CONTEXT_ALLOCATE_CALLBACK)(
    _In_ POOL_TYPE PoolType,
    _In_ SIZE_T Size,
    _In_ FLT_CONTEXT_TYPE ContextType
    );

typedef VOID
(FLTAPI *PFLT_CONTEXT_FREE_CALLBACK)(
    _In_ PVOID Pool,
    _In_ FLT_CONTEXT_TYPE ContextType
    );

//
//  Defines context registration flags
//

typedef USHORT FLT_CONTEXT_REGISTRATION_FLAGS;

    //
    //  By default, the FltMgr matches exactly a given context allocation
    //  request with a size specified at context registration time.  If
    //  this flag is specified, then the FltMgr will use a given registered
    //  size definition if the requested size is <= to it.  Note that the
    //  FltMgr sorts multiple size definions into ascending order.
    //
    //  This flag is ignored on entries with FLT_VARIABLE_SIZED_CONTEXTS
    //  specified or Alloc/Free routines specified
    //

    #define FLTFL_CONTEXT_REGISTRATION_NO_EXACT_SIZE_MATCH 0x0001


//
//  When this value is used in the "Size" field of the FLT_CONTEXT_REGISTRATION
//  structure, then this registered context entry has no explicit size.
//  When allocation requests are made, FltMgr directly allocates and frees
//  the memory from pool.
//
//  For a given context and pool type, only one entry may have this value.
//  This may be included with multiple explicitly sized entries.  This will
//  always be sorted to the end of the list.
//

#define FLT_VARIABLE_SIZED_CONTEXTS ((SIZE_T)-1)

//
//  An array of this structure is used for registering the different kinds of
//  contexts used by this mini-filter.
//
//  At least one of these records must be speicifed to allocate a context of a
//  given type.
//

typedef struct _FLT_CONTEXT_REGISTRATION {

    //
    //  Identifies the type of this context
    //

    FLT_CONTEXT_TYPE ContextType;

    //
    //  Local flags
    //

    FLT_CONTEXT_REGISTRATION_FLAGS Flags;

    //
    //  Routine to call to cleanup the context before it is deleted.
    //  This may be NULL if not cleanup is needed.
    //

    PFLT_CONTEXT_CLEANUP_CALLBACK ContextCleanupCallback;

    //
    //  Defines the size & pool tag the mini-filter wants for the given context.
    //  FLT_VARIABLE_SIZED_CONTEXTS may be specified for the size if variable
    //  sized contexts are used.  A size of zero is valid.  If an empty pooltag
    //  value is specified, the FLTMGR will use a context type specific tag.
    //
    //  If an explicit size is specified, the FLTMGR internally optimizes the
    //  allocation of that entry.
    //
    //  NOTE:  These fields are ignored if Allocate & Free routines are
    //         specifed.
    //

    SIZE_T Size;
    ULONG PoolTag;

    //
    //  Specifies the ALLOCATE and FREE routines that should be used
    //  when allocating a context for this mini-filter.
    //
    //  NOTE: The above size & PoolTag fields are ignored when these routines
    //        are defined.
    //

    PFLT_CONTEXT_ALLOCATE_CALLBACK ContextAllocateCallback;
    PFLT_CONTEXT_FREE_CALLBACK ContextFreeCallback;

    //
    //  Reserved for future expansion
    //

    PVOID Reserved1;

} FLT_CONTEXT_REGISTRATION, *PFLT_CONTEXT_REGISTRATION;

typedef const FLT_CONTEXT_REGISTRATION *PCFLT_CONTEXT_REGISTRATION;


///////////////////////////////////////////////////////////////////////////////
//
//                  Known File System Types
//
///////////////////////////////////////////////////////////////////////////////

//
//  The enum FLT_FILESYSTEM_TYPE has been moved to FltUserStructures.h
//  so it can be referenced by both user mode and kernel mode components
//


///////////////////////////////////////////////////////////////////////////////
//
//              Instance attach/detach callback definitions
//
///////////////////////////////////////////////////////////////////////////////

//
//                ******** Instance setup ********
//

//
//  Flags identifying why the given instance attach callback routine was
//  called.  More then one bit may be set.
//

typedef ULONG FLT_INSTANCE_SETUP_FLAGS;

    //
    //  If set, this is an automatic instance attachment notification.  These
    //  occur when the filter is first loaded for all existing volumes, and
    //  when a new volume is mounted.
    //

    #define FLTFL_INSTANCE_SETUP_AUTOMATIC_ATTACHMENT   0x00000001

    //
    //  If set, this is a manual instance attachment request via FilterAttach
    //  (user mode) or FltAttachVolume.
    //

    #define FLTFL_INSTANCE_SETUP_MANUAL_ATTACHMENT      0x00000002

    //
    //  If set, this is an automatic instance notification for a volume that
    //  has just been mounted in the system.
    //

    #define FLTFL_INSTANCE_SETUP_NEWLY_MOUNTED_VOLUME   0x00000004

#if FLT_MGR_LONGHORN
    //
    //  If set, this volume is not currently attached to a storage stack.
    //  This usually means the volume is dismounted but it does not always
    //  mean that.  There are scnearios with certain file systems (fat & cdfs
    //  being some) where a volume can become reattached after it has detached.
    //  This flag is only set in Longhorn or later.
    //

    #define FLTFL_INSTANCE_SETUP_DETACHED_VOLUME        0x00000008

#endif // FLT_MGR_LONGHORN


//
//  This is called whenever a new instance is being created.  This gives the
//  filter the opportunity to decide if they want to attach to the given
//  volume or not.
//
//  A SUCCESS return value will cause the instance to be attached to the given
//  volume.  A WARNING or ERROR return value will cause the instance to NOT be
//  attached to the given volume.  Following are reasonable sample return
//  values:
//      STATUS_SUCCESS
//      STATUS_FLT_DO_NOT_ATTACH
//
//  If no callback is defined the given instance will be attached.
//

typedef NTSTATUS
(FLTAPI *PFLT_INSTANCE_SETUP_CALLBACK) (
    _In_ PCFLT_RELATED_OBJECTS FltObjects,
    _In_ FLT_INSTANCE_SETUP_FLAGS Flags,
    _In_ DEVICE_TYPE VolumeDeviceType,
    _In_ FLT_FILESYSTEM_TYPE VolumeFilesystemType
    );


//
//          ******** Instance Query Detach ********
//

//
//  Flags identifying why the given instance query detach callback routine was
//  called.  More then one bit may be set.
//

typedef ULONG FLT_INSTANCE_QUERY_TEARDOWN_FLAGS;

  //
  //  No flags currently defined
  //

//
//  This is called whenever a manual detachment request is made for the given
//  instance.  This is not called for mandatory detachment requests (like
//  filter unload or volume dismount).  This gives the filter the opportunity
//  to decide if they want to detach from the given volume or not.
//
//  A SUCCESS return value will cause the instance to be detached from the
//  given volume.  A WARNING or ERROR return value will cause the instance to
//  NOT be detached from the given volume.  Following are reasonable sample
//  return values:
//      STATUS_SUCCESS
//      STATUS_FLT_DO_NOT_DETACH
//
//  If no callback is defined the given instance will NOT be detached.
//

typedef NTSTATUS
(FLTAPI *PFLT_INSTANCE_QUERY_TEARDOWN_CALLBACK) (
    _In_ PCFLT_RELATED_OBJECTS FltObjects,
    _In_ FLT_INSTANCE_QUERY_TEARDOWN_FLAGS Flags
    );


//
//          ******** Instance teardown ********
//

//
//  Flag identifying why the given instance detach callback routine was called.
//  More then one bit may be set.
//

typedef ULONG FLT_INSTANCE_TEARDOWN_FLAGS;

    //
    //  If set, this is a manual instance detach request via FilterDetach
    //  (user mode) or FltDetachVolume (kernel mode).
    //

    #define FLTFL_INSTANCE_TEARDOWN_MANUAL                  0x00000001

    //
    //  If set, the filter is being unloaded.
    //

    #define FLTFL_INSTANCE_TEARDOWN_FILTER_UNLOAD           0x00000002

    //
    //  If set, the filter is being unloaded.
    //

    #define FLTFL_INSTANCE_TEARDOWN_MANDATORY_FILTER_UNLOAD 0x00000004

    //
    //  If set, the volume is being dismounted.
    //

    #define FLTFL_INSTANCE_TEARDOWN_VOLUME_DISMOUNT         0x00000008

    //
    //  If set, an error occurred while doing instance setup (like running
    //  out of memory).
    //

    #define FLTFL_INSTANCE_TEARDOWN_INTERNAL_ERROR          0x00000010


//
//  This is the prototype for two different teardown callback routines.
//
//  The TEARDOWN_START routine is called at the beginning of teardown process.
//  There may still be operation callbacks in progress.  This is called to give
//  the filter the oppertunity to do the following things:
//  - Restart any pended operations
//  - Set state so that minimual processing will be performed on future
//    operation callbacks.
//  - Unregister from other OS callback APIs
//

//
//  The TEARDOWN_COMPLETE routine is called after teardown has been finished.
//  The system guarentees that all existing callbacks have been completed
//  before this routine is called.  This is called to give the filter the
//  oppertunity to:
//  - Close any open files.
//  - do other instance state cleanup.
//

typedef VOID
(FLTAPI *PFLT_INSTANCE_TEARDOWN_CALLBACK) (
    _In_ PCFLT_RELATED_OBJECTS FltObjects,
    _In_ FLT_INSTANCE_TEARDOWN_FLAGS Reason
    );

//////////////////////////////////////////////////////////////////////////////
//
//                  Pre/Post Operation Callback definitions
//
///////////////////////////////////////////////////////////////////////////////

//
//  Values returned from the pre-operation callback routine defining what
//  to do next.
//

typedef enum _FLT_PREOP_CALLBACK_STATUS {

    FLT_PREOP_SUCCESS_WITH_CALLBACK,
    FLT_PREOP_SUCCESS_NO_CALLBACK,
    FLT_PREOP_PENDING,
    FLT_PREOP_DISALLOW_FASTIO,
    FLT_PREOP_COMPLETE,
    FLT_PREOP_SYNCHRONIZE


} FLT_PREOP_CALLBACK_STATUS, *PFLT_PREOP_CALLBACK_STATUS;

//
//  Pre-operation callback prototype.
//

typedef FLT_PREOP_CALLBACK_STATUS
(FLTAPI *PFLT_PRE_OPERATION_CALLBACK) (
    _Inout_ PFLT_CALLBACK_DATA Data,
    _In_ PCFLT_RELATED_OBJECTS FltObjects,
    _Outptr_result_maybenull_ PVOID *CompletionContext
    );


//
//  Values returned from the post-operation callback routine defining what
//  to od next.
//

typedef enum _FLT_POSTOP_CALLBACK_STATUS {

    FLT_POSTOP_FINISHED_PROCESSING,
    FLT_POSTOP_MORE_PROCESSING_REQUIRED

} FLT_POSTOP_CALLBACK_STATUS, *PFLT_POSTOP_CALLBACK_STATUS;

//
//  Flag BITS sent to the post-operation callback routine
//

typedef ULONG FLT_POST_OPERATION_FLAGS;

    //
    //  If set, this instance is being detached and this post-operation
    //  routine has been called for cleanup processing (drained).  Since this
    //  instance is going away, you should perform a minimum of operations
    //  while processing this completion.
    //

    #define FLTFL_POST_OPERATION_DRAINING               0x00000001

//
//  Post-operation callback prototype
//

typedef FLT_POSTOP_CALLBACK_STATUS
(FLTAPI *PFLT_POST_OPERATION_CALLBACK) (
    _Inout_ PFLT_CALLBACK_DATA Data,
    _In_ PCFLT_RELATED_OBJECTS FltObjects,
    _In_opt_ PVOID CompletionContext,
    _In_ FLT_POST_OPERATION_FLAGS Flags
    );

//
//  Post operation callbacks may be called at DPC level.  This routine may be
//  used to transfer completion processing to a "safe" IRQL level.  This
//  routine will determine if it is safe to call the "SafePostCallback" now
//  or if it must post the request to a worker thread.  If posting to a worker
//  thread is needed it determines it is safe to do so (some operations can
//  not be posted like paging IO).
//

_Must_inspect_result_
BOOLEAN
FLTAPI
FltDoCompletionProcessingWhenSafe(
    _In_ PFLT_CALLBACK_DATA Data,
    _In_ PCFLT_RELATED_OBJECTS FltObjects,
    _In_opt_ PVOID CompletionContext,
    _In_ FLT_POST_OPERATION_FLAGS Flags,
    _In_ PFLT_POST_OPERATION_CALLBACK SafePostCallback,
    _Out_ PFLT_POSTOP_CALLBACK_STATUS RetPostOperationStatus
    );

//
//  Defines current operation callback flags.
//

typedef ULONG FLT_OPERATION_REGISTRATION_FLAGS;

    //
    //  If set, the filter's callbacks for this operation will not be called,
    //  if it's a paging i/o operation. This flag is relevant only for IRP-based
    //  operations & ignored for non-IRP operations
    //

    #define FLTFL_OPERATION_REGISTRATION_SKIP_PAGING_IO     0x00000001

    //
    //  If set read/write operations that are not non-cached will be skipped:
    //  i.e. the mini-filters callback for this operation will be bypassed.
    //  This flag is relevant only for IRP_MJ_READ & IRP_MJ_WRITE
    //  This of course implies that fast i/o reads and writes will be skipped,
    //  since those imply cached i/o by default
    //

    #define FLTFL_OPERATION_REGISTRATION_SKIP_CACHED_IO     0x00000002

    //
    //  If set all operations that are not issued on a DASD (volume) handle will be skipped:
    //  i.e. the mini-filters callback for this operation will be bypassed.
    //  This flag is relevant for all operations
    //

    #define FLTFL_OPERATION_REGISTRATION_SKIP_NON_DASD_IO   0x00000004


//
//  Structure used for registering operation callback routines
//

typedef struct _FLT_OPERATION_REGISTRATION {

    UCHAR MajorFunction;
    FLT_OPERATION_REGISTRATION_FLAGS Flags;
    PFLT_PRE_OPERATION_CALLBACK PreOperation;
    PFLT_POST_OPERATION_CALLBACK PostOperation;

    PVOID Reserved1;

} FLT_OPERATION_REGISTRATION, *PFLT_OPERATION_REGISTRATION;


///////////////////////////////////////////////////////////////////////////////
//
//  This defines structures and flags for reparse point tag notifications
//  that a filter uses to register.
//
///////////////////////////////////////////////////////////////////////////////

typedef struct _FLT_TAG_DATA_BUFFER {
    ULONG FileTag;
    USHORT TagDataLength;
    USHORT UnparsedNameLength;
    union {
        struct {
            USHORT SubstituteNameOffset;
            USHORT SubstituteNameLength;
            USHORT PrintNameOffset;
            USHORT PrintNameLength;
            ULONG  Flags;
            WCHAR  PathBuffer[1];
        } SymbolicLinkReparseBuffer;

        struct {
            USHORT SubstituteNameOffset;
            USHORT SubstituteNameLength;
            USHORT PrintNameOffset;
            USHORT PrintNameLength;
            WCHAR PathBuffer[1];
        } MountPointReparseBuffer;

        struct {
            UCHAR  DataBuffer[1];
        } GenericReparseBuffer;

        //
        //  Used for non-Microsoft reparse points
        //

        struct {
            GUID TagGuid;
            UCHAR DataBuffer[1];
        } GenericGUIDReparseBuffer;
    };
} FLT_TAG_DATA_BUFFER, *PFLT_TAG_DATA_BUFFER;

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

#define FLT_TAG_DATA_BUFFER_HEADER_SIZE   FIELD_OFFSET(FLT_TAG_DATA_BUFFER, GenericReparseBuffer)



///////////////////////////////////////////////////////////////////////////////
//
//                      Filter Unload Definitions
//
///////////////////////////////////////////////////////////////////////////////

typedef ULONG FLT_FILTER_UNLOAD_FLAGS;

    //
    //  If set, the OS has requested to unload this filter and the operation
    //  can not be failed.
    //

    #define FLTFL_FILTER_UNLOAD_MANDATORY               0x00000001


//
//  Callback to notify a filter it is being unloaded.  If the filter returns
//  a SUCCESS code, then the filter is unloaded.  If a WARNING or ERROR
//  code is returned then the filter is not unloaded.  If not callback is
//  defined the filter will not be unloaded.
//

typedef NTSTATUS
(FLTAPI *PFLT_FILTER_UNLOAD_CALLBACK) (
    FLT_FILTER_UNLOAD_FLAGS Flags
    );

/////////////////////////////////////////////////////////////////////////
//
//  Routines and structures for Name Providing Filter (filters that modify
//  names in the namespace).
//
////////////////////////////////////////////////////////////////////////

//
//  The FLT_NAME_CONTROL structure is used to efficiently manage a name buffer
//  as a name is generated by a filter that modifies the namespace.
//
//  The filter should never free or try to replace the buffer in the Name
//  UNICODE_STRING directly.  It should call FltNameControlCheckAndGrow to
//  varify that the buffer is large enough for more data to be added and grow
//  the buffer as needed.
//

typedef struct _FLT_NAME_CONTROL {

    //
    //  The unicode string where the name should be set.
    //

    UNICODE_STRING Name;

} FLT_NAME_CONTROL, *PFLT_NAME_CONTROL;

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltCheckAndGrowNameControl (
    _Inout_ PFLT_NAME_CONTROL NameCtrl,
    _In_ USHORT NewSize
    );

//
//  Define this here for the PFLT_GENERATE_FILE_NAME signature.  This is defined
//  again later at the point where the flags are defined.
//

typedef ULONG FLT_FILE_NAME_OPTIONS;

typedef NTSTATUS
(FLTAPI *PFLT_GENERATE_FILE_NAME) (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PFLT_CALLBACK_DATA CallbackData,
    _In_ FLT_FILE_NAME_OPTIONS NameOptions,
    _Out_ PBOOLEAN CacheFileNameInformation,
    _Out_ PFLT_NAME_CONTROL FileName
    );

typedef ULONG FLT_NORMALIZE_NAME_FLAGS;

//
//  Normalize name flags
//

    #define FLTFL_NORMALIZE_NAME_CASE_SENSITIVE         0x01
    #define FLTFL_NORMALIZE_NAME_DESTINATION_FILE_NAME  0x02

typedef NTSTATUS
(FLTAPI *PFLT_NORMALIZE_NAME_COMPONENT) (
    _In_ PFLT_INSTANCE Instance,
    _In_ PCUNICODE_STRING ParentDirectory,
    _In_ USHORT VolumeNameLength,
    _In_ PCUNICODE_STRING Component,
    _Out_writes_bytes_(ExpandComponentNameLength) PFILE_NAMES_INFORMATION ExpandComponentName,
    _In_ ULONG ExpandComponentNameLength,
    _In_ FLT_NORMALIZE_NAME_FLAGS Flags,
    _Inout_ PVOID *NormalizationContext
    );

typedef NTSTATUS
(FLTAPI *PFLT_NORMALIZE_NAME_COMPONENT_EX) (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_ PCUNICODE_STRING ParentDirectory,
    _In_ USHORT VolumeNameLength,
    _In_ PCUNICODE_STRING Component,
    _Out_writes_bytes_(ExpandComponentNameLength) PFILE_NAMES_INFORMATION ExpandComponentName,
    _In_ ULONG ExpandComponentNameLength,
    _In_ FLT_NORMALIZE_NAME_FLAGS Flags,
    _Inout_ PVOID *NormalizationContext
    );

typedef VOID
(FLTAPI *PFLT_NORMALIZE_CONTEXT_CLEANUP) (
    _In_opt_ PVOID *NormalizationContext
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltPurgeFileNameInformationCache (
    _In_ PFLT_INSTANCE Instance,
    _In_opt_ PFILE_OBJECT FileObject
    );

///////////////////////////////////////////////////////////////////////////////
//
//                 Transaction callback definitions
//
///////////////////////////////////////////////////////////////////////////////

#if FLT_MGR_LONGHORN

typedef NTSTATUS
(FLTAPI *PFLT_TRANSACTION_NOTIFICATION_CALLBACK) (
    _In_ PCFLT_RELATED_OBJECTS FltObjects,
    _In_ PFLT_CONTEXT TransactionContext,
    _In_ ULONG NotificationMask
    );

#endif // FLT_MGR_LONGHORN

///////////////////////////////////////////////////////////////////////////////
//
//  Routines and callbacks for handling datascan support provided by filter manager
//
///////////////////////////////////////////////////////////////////////////////

#if FLT_MGR_WIN8

typedef NTSTATUS
(FLTAPI *PFLT_SECTION_CONFLICT_NOTIFICATION_CALLBACK) (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFLT_CONTEXT SectionContext,
    _In_ PFLT_CALLBACK_DATA Data
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltRegisterForDataScan(
    _In_ PFLT_INSTANCE Instance
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltCreateSectionForDataScan(
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_ PFLT_CONTEXT SectionContext,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PLARGE_INTEGER MaximumSize,
    _In_ ULONG SectionPageProtection,
    _In_ ULONG AllocationAttributes,
    _In_ ULONG Flags,
    _Out_ PHANDLE SectionHandle,
    _Outptr_ PVOID *SectionObject,
    _Out_opt_ PLARGE_INTEGER SectionFileSize
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltCloseSectionForDataScan(
    _In_ PFLT_CONTEXT SectionContext
    );

#endif // FLT_MGR_WIN8

//////////////////////////////////////////////////////////////////////////////
//
//  This structure is used at registration time to define what callbacks
//  this driver wishes to receive.
//
///////////////////////////////////////////////////////////////////////////////

//
//  This defines the MAJOR/MINOR version number to be passed in at registration
//  time.  The filter manager uses this number to validate / process the
//  parameters passed in.  Note that the minor version number can change and
//  you will still be able to register.  If the major version number changes
//  then the filter will no longer load.
//

//
//  Registration version for XP SP2 and W2K3 SP1
//

#define FLT_REGISTRATION_VERSION_0200  0x0200

//
//  Registration version for Vista Beta 2
//  (adds PFLT_TRANSACTION_NOTIFICATION_CALLBACK)
//

#define FLT_REGISTRATION_VERSION_0201  0x0201

//
//  Registration version for Vista RTM
//  (adds PFLT_NORMALIZE_NAME_COMPONENT_EX)
//

#define FLT_REGISTRATION_VERSION_0202  0x0202

//
//  Registration version for Win 8
//  (adds PFLT_SECTION_CONFLICT_NOTIFICATION_CALLBACK)
//

#define FLT_REGISTRATION_VERSION_0203  0x0203

//
//  NOTE:  You should always pass in this defined value (do not explicitly
//         specify older values)

#if FLT_MGR_WIN8
    #define FLT_REGISTRATION_VERSION   FLT_REGISTRATION_VERSION_0203  // Current version is 2.03
#elif FLT_MGR_LONGHORN
    #define FLT_REGISTRATION_VERSION   FLT_REGISTRATION_VERSION_0202  // Current version is 2.02
#else
    #define FLT_REGISTRATION_VERSION   FLT_REGISTRATION_VERSION_0200  // Current version is 2.00
#endif

//
//  Defines current registration flags
//

typedef ULONG FLT_REGISTRATION_FLAGS;

    //
    //  If set, this filter does not support a service stop request. This is
    //  is how the OS unloads drivers.
    //

    #define FLTFL_REGISTRATION_DO_NOT_SUPPORT_SERVICE_STOP  0x00000001

    //
    //  If set, this filter is aware of named pipe and mailslot filtering
    //  and would like filter manager to give it the option of filtering
    //  these file systems.
    //

    #define FLTFL_REGISTRATION_SUPPORT_NPFS_MSFS            0x00000002

//
//  Registration structure
//

typedef struct _FLT_REGISTRATION {

    //
    //  The size, in bytes, of this registration structure.
    //

    USHORT Size;
    USHORT Version;

    //
    //  Flag values
    //

    FLT_REGISTRATION_FLAGS Flags;

    //
    //  Variable length array of routines that are used to manage contexts in
    //  the system.
    //

    CONST FLT_CONTEXT_REGISTRATION *ContextRegistration;

    //
    //  Variable length array of routines used for processing pre- and post-
    //  file system operations.
    //

    CONST FLT_OPERATION_REGISTRATION *OperationRegistration;

    //
    //  This is called before a filter is unloaded.  If an ERROR or WARNING
    //  status is returned then the filter is NOT unloaded.  A mandatory unload
    //  can not be failed.
    //
    //  If a NULL is specified for this routine, then the filter can never be
    //  unloaded.
    //

    PFLT_FILTER_UNLOAD_CALLBACK FilterUnloadCallback;

    //
    //  This is called to see if a filter would like to attach an instance
    //  to the given volume.  If an ERROR or WARNING status is returned, an
    //  attachment is not made.
    //
    //  If a NULL is specified for this routine, the attachment is always made.
    //

    PFLT_INSTANCE_SETUP_CALLBACK InstanceSetupCallback;

    //
    //  This is called to see if the filter wants to detach from the given
    //  volume.  This is only called for manual detach requests.  If an
    //  ERROR or WARNING status is returned, the filter is not detached.
    //
    //  If a NULL is specified for this routine, then instances can never be
    //  manually detached.
    //

    PFLT_INSTANCE_QUERY_TEARDOWN_CALLBACK InstanceQueryTeardownCallback;

    //
    //  This is called at the start of a filter detaching from a volume.
    //
    //  It is OK for this field to be NULL.
    //

    PFLT_INSTANCE_TEARDOWN_CALLBACK InstanceTeardownStartCallback;

    //
    //  This is called at the end of a filter detaching from a volume.  All
    //  outstanding operations have been completed by the time this routine
    //  is called.
    //
    //  It is OK for this field to be NULL.
    //

    PFLT_INSTANCE_TEARDOWN_CALLBACK InstanceTeardownCompleteCallback;

    //
    //  The following callbacks are provided by a filter only if it is
    //  interested in modifying the name space.
    //
    //  If NULL is specified for these callbacks, it is assumed that the
    //  filter would not affect the name being requested.
    //

    PFLT_GENERATE_FILE_NAME GenerateFileNameCallback;

    PFLT_NORMALIZE_NAME_COMPONENT NormalizeNameComponentCallback;

    PFLT_NORMALIZE_CONTEXT_CLEANUP NormalizeContextCleanupCallback;

    //
    //  The PFLT_NORMALIZE_NAME_COMPONENT_EX callback is also a name
    //  provider callback. It is not included here along with the
    //  other name provider callbacks to take care of the registration
    //  structure versioning issues.
    //

#if FLT_MGR_LONGHORN

    //
    //  This is called for transaction notifications received from the KTM
    //  when a filter has enlisted on that transaction.
    //

    PFLT_TRANSACTION_NOTIFICATION_CALLBACK TransactionNotificationCallback;

    //
    //  This is the extended normalize name component callback
    //  If a mini-filter provides this callback, then  this callback
    //  will be used as opposed to using PFLT_NORMALIZE_NAME_COMPONENT
    //
    //  The PFLT_NORMALIZE_NAME_COMPONENT_EX provides an extra parameter
    //  (PFILE_OBJECT) in addition to the parameters provided to
    //  PFLT_NORMALIZE_NAME_COMPONENT. A mini-filter may use this parameter
    //  to get to additional information like the TXN_PARAMETER_BLOCK.
    //
    //  A mini-filter that has no use for the additional parameter may
    //  only provide a PFLT_NORMALIZE_NAME_COMPONENT callback.
    //
    //  A mini-filter may provide both a PFLT_NORMALIZE_NAME_COMPONENT
    //  callback and a PFLT_NORMALIZE_NAME_COMPONENT_EX callback. The
    //  PFLT_NORMALIZE_NAME_COMPONENT_EX callback will be used by fltmgr
    //  versions that understand this callback (Vista RTM and beyond)
    //  and PFLT_NORMALIZE_NAME_COMPONENT callback will be used by fltmgr
    //  versions that do not understand the PFLT_NORMALIZE_NAME_COMPONENT_EX
    //  callback (prior to Vista RTM). This allows the same mini-filter
    //  binary to run with all versions of fltmgr.
    //

    PFLT_NORMALIZE_NAME_COMPONENT_EX NormalizeNameComponentExCallback;

#endif // FLT_MGR_LONGHORN

#if FLT_MGR_WIN8

    //
    //  This is called for IO failures due to the existence of sections
    //  when those sections are created through FltCreateSectionForDatascan.
    //

    PFLT_SECTION_CONFLICT_NOTIFICATION_CALLBACK SectionNotificationCallback;

#endif // FLT_MGR_WIN8

} FLT_REGISTRATION, *PFLT_REGISTRATION;



///////////////////////////////////////////////////////////////////////////////
//
// Callback routine for async i/o operations
//
///////////////////////////////////////////////////////////////////////////////

typedef VOID
(FLTAPI *PFLT_COMPLETED_ASYNC_IO_CALLBACK)(
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ PFLT_CONTEXT Context
    );


///////////////////////////////////////////////////////////////////////////////
//
// Flags that can be specified in Flt* APIs to indicate the nature of the
// i/o operation
//
// FltReadFile/FltWriteFile will accept these flags for example
//
///////////////////////////////////////////////////////////////////////////////

typedef ULONG FLT_IO_OPERATION_FLAGS;

    //
    //  If set, the given read/write request will be non-cached.
    //

    #define FLTFL_IO_OPERATION_NON_CACHED                   0x00000001

    //
    //  If set, the given read/write request will have the
    //  IRP_PAGING_IO flag set
    //

    #define FLTFL_IO_OPERATION_PAGING                       0x00000002

    //
    //  If set, the given read/write request will not update the
    //  file object's current byte offset.
    //

    #define FLTFL_IO_OPERATION_DO_NOT_UPDATE_BYTE_OFFSET    0x00000004

#if FLT_MGR_LONGHORN
    //
    //  If set, the given read/write request will have the
    //  IRP_SYNCHRONOUS_PAGING_IO flag set
    //

    #define FLTFL_IO_OPERATION_SYNCHRONOUS_PAGING           0x00000008

#endif // FLT_MGR_LONGHORN


///////////////////////////////////////////////////////////////////////////////
//
//  These routines are used to register/unregister all callback routines for a
//  give file system mini-filter driver.
//
///////////////////////////////////////////////////////////////////////////////

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltRegisterFilter (
    _In_ PDRIVER_OBJECT Driver,
    _In_ CONST FLT_REGISTRATION *Registration,
    _Outptr_ PFLT_FILTER *RetFilter
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltUnregisterFilter (
    _In_ PFLT_FILTER Filter
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltStartFiltering (
    _In_ PFLT_FILTER Filter
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
PVOID
FLTAPI
FltGetRoutineAddress (
    _In_ PCSTR FltMgrRoutineName
    );

///////////////////////////////////////////////////////////////////////////////
//
//  Pending support routines
//
///////////////////////////////////////////////////////////////////////////////


_When_(CallbackStatus==FLT_PREOP_COMPLETE, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(CallbackStatus!=FLT_PREOP_COMPLETE, _IRQL_requires_max_(APC_LEVEL))
VOID
FLTAPI
FltCompletePendedPreOperation (
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ FLT_PREOP_CALLBACK_STATUS CallbackStatus,
    _In_opt_ PVOID Context
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FLTAPI
FltCompletePendedPostOperation (
    _In_ PFLT_CALLBACK_DATA CallbackData
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Routines for requesting operation status.  This is used to get the result
//  returned by IoCallDriver for operations where STATUS_PENDING is treated
//  as a success code.  This occurs with oplocks and directory change
//  notifications
//
///////////////////////////////////////////////////////////////////////////////

typedef VOID
(FLTAPI *PFLT_GET_OPERATION_STATUS_CALLBACK)(
    _In_ PCFLT_RELATED_OBJECTS FltObjects,
    _In_ PFLT_IO_PARAMETER_BLOCK IopbSnapshot,
    _In_ NTSTATUS OperationStatus,
    _In_opt_ PVOID RequesterContext
    );


_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltRequestOperationStatusCallback(
    _In_ PFLT_CALLBACK_DATA Data,
    _In_ PFLT_GET_OPERATION_STATUS_CALLBACK CallbackRoutine,
    _In_opt_ PVOID RequesterContext
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Memory support routines
//
///////////////////////////////////////////////////////////////////////////////


_When_((PoolType==NonPagedPoolNx), _IRQL_requires_max_(DISPATCH_LEVEL))
_When_((PoolType!=NonPagedPoolNx), _IRQL_requires_max_(APC_LEVEL))
PVOID
FLTAPI
FltAllocatePoolAlignedWithTag (
    _In_ PFLT_INSTANCE Instance,
    _In_ POOL_TYPE PoolType,
    _In_ SIZE_T NumberOfBytes,
    _In_ ULONG Tag
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FLTAPI
FltFreePoolAlignedWithTag (
    _In_ PFLT_INSTANCE Instance,
    _In_ PVOID Buffer,
    _In_ ULONG Tag
    );

///////////////////////////////////////////////////////////////////////////////
//
//  Routines for getting file, directory and volume names.
//
///////////////////////////////////////////////////////////////////////////////

//
//  The FLT_FILE_NAME_OPTIONS is a ULONG that gets broken down into three
//  sections:
//   bits 0-7:  enumeration representing the file name formats available
//   bits 8-15: enumeration representing the querying methods available
//   bits 16-23:  Currently unused
//   bits 24-31:  Flags
//

typedef ULONG FLT_FILE_NAME_OPTIONS;

//
//  Name format options
//

#define FLT_VALID_FILE_NAME_FORMATS 0x000000ff

    #define FLT_FILE_NAME_NORMALIZED    0x01
    #define FLT_FILE_NAME_OPENED        0x02
    #define FLT_FILE_NAME_SHORT         0x03

#define FltGetFileNameFormat( _NameOptions ) \
    ((_NameOptions) & FLT_VALID_FILE_NAME_FORMATS)

//
//  Name query methods.
//

#define FLT_VALID_FILE_NAME_QUERY_METHODS               0x0000ff00

    //
    //  In the default mode, if it is safe to query the file system,
    //  the Filter Manager try to retrieve the name from the cache first, and,
    //  if a name is not found, the name will be generated by querying the file
    //  system.
    //
    #define FLT_FILE_NAME_QUERY_DEFAULT                     0x0100

    //
    //  Query the Filter Manager's name cache for the name, but don't try
    //  to query the file system if the name is not in the cache.
    //
    #define FLT_FILE_NAME_QUERY_CACHE_ONLY                  0x0200

    //
    //  Only query the file system for the name, bypassing the Filter Manager's
    //  name cache completely.  Any name retrieved will not be cached.
    //
    #define FLT_FILE_NAME_QUERY_FILESYSTEM_ONLY             0x0300

    //
    //  Query the Filter Manager's name cache, but if the name is not
    //  found try to query the file system if it is safe to do so.
    //
    #define FLT_FILE_NAME_QUERY_ALWAYS_ALLOW_CACHE_LOOKUP   0x0400

#define FltGetFileNameQueryMethod( _NameOptions ) \
    ((_NameOptions) & FLT_VALID_FILE_NAME_QUERY_METHODS)

//
//  File name option flags
//

#define FLT_VALID_FILE_NAME_FLAGS                           0xff000000

    //
    //  This flag is to be used by name provider filters to specify that a name
    //  query request they are making should be redirected to their filter rather
    //  than being satified by the name providers lower in the stack.
    //
    #define FLT_FILE_NAME_REQUEST_FROM_CURRENT_PROVIDER     0x01000000

    //
    //  This flag denotes that the name retrieved from this query should not
    //  be cached.  This is used by name providers as they perform intermediate
    //  queries to generate a name.
    //
    #define FLT_FILE_NAME_DO_NOT_CACHE                      0x02000000

#if FLT_MGR_AFTER_XPSP2

    //
    //  This flag denotes that it is safe to query the name in post-CREATE if
    //  STATUS_REPARSE was returned.  To ensure the name returned is valid,
    //  the call must know that the FileObject->FileName was not changed before
    //  STATUS_REPARSE was returned.
    //
    #define FLT_FILE_NAME_ALLOW_QUERY_ON_REPARSE            0x04000000

#endif

//
//  The flags are used to tell the file name routines which types of names
//  you would like parsed from the full name.  They are also used to specify
//  which names have been filled in for a given FLT_FILE_NAME_INFORMATION
//  structure.
//

typedef USHORT FLT_FILE_NAME_PARSED_FLAGS;

    #define FLTFL_FILE_NAME_PARSED_FINAL_COMPONENT      0x0001
    #define FLTFL_FILE_NAME_PARSED_EXTENSION            0x0002
    #define FLTFL_FILE_NAME_PARSED_STREAM               0x0004
    #define FLTFL_FILE_NAME_PARSED_PARENT_DIR           0x0008

//
//  This structure holds the different types of name information that
//  can be given for a file.  The NamesParsed field will have the
//  appropriate flags set to denote which names are filled in inside
//  the structure.
//

typedef struct _FLT_FILE_NAME_INFORMATION {

    USHORT Size;

    //
    //  For each bit that is set in the NamesParsed flags field, the
    //  corresponding substring from Name has been appropriately
    //  parsed into one of the unicode strings below.
    //

    FLT_FILE_NAME_PARSED_FLAGS NamesParsed;

    //
    //  The name format that this FLT_FILE_NAME_INFORMATION structure
    //  represents.
    //

    FLT_FILE_NAME_OPTIONS Format;

    //
    //  For normalized and opened names, this name contains the version of
    //  name in the following format:
    //
    //    [Volume name][Full path to file][File name][Stream Name]
    //
    //    For example, the above components would map to this example name as
    //    follows:
    //
    //    \Device\HarddiskVolume1\Documents and Settings\MyUser\My Documents\Test Results.txt:stream1
    //
    //    [Volume name] = "\Device\HarddiskVolume1"
    //    [Full path to file] = "\Documents and Settings\MyUser\My Documents\"
    //    [File name] = "Test Results.txt"
    //    [Stream name] = ":stream1"
    //
    //  For short names, only the short name for the final name component is
    //  returned in the Name unicode string.  Therefore, if you requested
    //  the short name of the file object representing an open on the file:
    //
    //    \Device\HarddiskVolume1\Documents and Settings\MyUser\My Documents\Test Results.txt
    //
    //  The name returned in Name will be at most 8 characters followed by a '.'
    //  then at most 3 more characters, like:
    //
    //    testre~1.txt
    //

    UNICODE_STRING Name;

    //
    //  The Volume is only filled in for name requested in normalized and opened
    //  formats.
    //

    UNICODE_STRING Volume;

    //
    //  The share component of the file name requested.  This will only be
    //  set for normalized and opened name formats on files that opened across
    //  redirectors.  For local files, this string will always be 0 length.
    //

    UNICODE_STRING Share;

    //
    //  To exemplify what each of the following substrings refer to, let's
    //  look again at the first example string from above:
    //
    //    \Device\HarddiskVolume1\Documents and Settings\MyUser\My Documents\Test Results.txt:stream1
    //
    //  Extension = "txt"
    //  Stream = ":stream1"
    //  FinalComponent = "Test Results.txt:stream1"
    //  ParentDir = "\Documents and Settings\MyUser\My Documents\"
    //

    //
    //  This can be parsed from a normalized, opened, or short name.
    //

    UNICODE_STRING Extension;

    //
    //  The following parse formats are only available for normalized and
    //  opened name formats, but not short names.
    //

    UNICODE_STRING Stream;
    UNICODE_STRING FinalComponent;
    UNICODE_STRING ParentDir;

} FLT_FILE_NAME_INFORMATION, *PFLT_FILE_NAME_INFORMATION;

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetFileNameInformation (
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ FLT_FILE_NAME_OPTIONS NameOptions,
    _Outptr_ PFLT_FILE_NAME_INFORMATION *FileNameInformation
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetFileNameInformationUnsafe (
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PFLT_INSTANCE Instance,
    _In_ FLT_FILE_NAME_OPTIONS NameOptions,
    _Outptr_ PFLT_FILE_NAME_INFORMATION *FileNameInformation
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltReleaseFileNameInformation (
    _In_ PFLT_FILE_NAME_INFORMATION FileNameInformation
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltReferenceFileNameInformation (
    _In_ PFLT_FILE_NAME_INFORMATION FileNameInformation
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltParseFileName (
    _In_ PCUNICODE_STRING FileName,
    _Inout_opt_ PUNICODE_STRING Extension,
    _Inout_opt_ PUNICODE_STRING Stream,
    _Inout_opt_ PUNICODE_STRING FinalComponent
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltParseFileNameInformation (
    _Inout_ PFLT_FILE_NAME_INFORMATION FileNameInformation
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetTunneledName (
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ PFLT_FILE_NAME_INFORMATION FileNameInformation,
    _Outptr_result_maybenull_ PFLT_FILE_NAME_INFORMATION *RetTunneledFileNameInformation
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetVolumeName (
    _In_ PFLT_VOLUME Volume,
    _Inout_opt_ PUNICODE_STRING VolumeName,
    _Out_opt_ PULONG BufferSizeNeeded
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetDestinationFileNameInformation (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ HANDLE RootDirectory,
    _In_reads_bytes_(FileNameLength) PWSTR FileName,
    _In_ ULONG FileNameLength,
    _In_ FLT_FILE_NAME_OPTIONS NameOptions,
    _Outptr_ PFLT_FILE_NAME_INFORMATION *RetFileNameInformation
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltIsDirectory (
    _In_ PFILE_OBJECT FileObject,
    _In_ PFLT_INSTANCE Instance,
    _Out_ PBOOLEAN IsDirectory
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Routines for loading and unloading Filters
//
///////////////////////////////////////////////////////////////////////////////

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltLoadFilter (
    _In_ PCUNICODE_STRING FilterName
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltUnloadFilter (
    _In_ PCUNICODE_STRING FilterName
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltAttachVolume (
    _Inout_ PFLT_FILTER Filter,
    _Inout_ PFLT_VOLUME Volume,
    _In_opt_ PCUNICODE_STRING InstanceName,
    _Outptr_opt_result_maybenull_ PFLT_INSTANCE *RetInstance
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltAttachVolumeAtAltitude (
    _Inout_ PFLT_FILTER Filter,
    _Inout_ PFLT_VOLUME Volume,
    _In_ PCUNICODE_STRING Altitude,
    _In_opt_ PCUNICODE_STRING InstanceName,
    _Outptr_opt_result_maybenull_ PFLT_INSTANCE *RetInstance
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltDetachVolume (
    _Inout_ PFLT_FILTER Filter,
    _Inout_ PFLT_VOLUME Volume,
    _In_opt_ PCUNICODE_STRING InstanceName
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Routines for initiating I/O from within a filter.
//
///////////////////////////////////////////////////////////////////////////////

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltAllocateCallbackData (
    _In_ PFLT_INSTANCE Instance,
    _In_opt_ PFILE_OBJECT FileObject,
    _Outptr_ PFLT_CALLBACK_DATA *RetNewCallbackData
    );

#if FLT_MGR_WIN7

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltAllocateCallbackDataEx (
    _In_ PFLT_INSTANCE Instance,
    _In_opt_ PFILE_OBJECT FileObject,
    _In_ FLT_ALLOCATE_CALLBACK_DATA_FLAGS Flags,
    _Outptr_ PFLT_CALLBACK_DATA *RetNewCallbackData
    );

#endif //FLT_MGR_WIN7


_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FLTAPI
FltFreeCallbackData(
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltReuseCallbackData (
    _Inout_ PFLT_CALLBACK_DATA CallbackData
    );

_When_(FlagOn(CallbackData->Iopb->IrpFlags, IRP_PAGING_IO), _IRQL_requires_max_(APC_LEVEL))
_When_(!FlagOn(CallbackData->Iopb->IrpFlags, IRP_PAGING_IO), _IRQL_requires_max_(PASSIVE_LEVEL))
VOID
FLTAPI
FltPerformSynchronousIo (
    _Inout_ PFLT_CALLBACK_DATA CallbackData
    );


_Must_inspect_result_
_When_( FlagOn(CallbackData->Iopb->IrpFlags, IRP_PAGING_IO), _IRQL_requires_max_(APC_LEVEL))
_When_( !FlagOn(CallbackData->Iopb->IrpFlags, IRP_PAGING_IO), _IRQL_requires_max_(PASSIVE_LEVEL))
NTSTATUS
FLTAPI
FltPerformAsynchronousIo (
    _Inout_ PFLT_CALLBACK_DATA CallbackData,
    _In_ PFLT_COMPLETED_ASYNC_IO_CALLBACK CallbackRoutine,
    _In_ PVOID CallbackContext
    );

#if FLT_MGR_WINBLUE

NTSTATUS
FLTAPI
FltpTraceRedirectedFileIo (
    _In_ PFILE_OBJECT OriginatingFileObject,
    _Inout_ PFLT_CALLBACK_DATA ChildCallbackData
    );

#endif

#if FLT_MGR_WIN8

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltCreateNamedPipeFile (
    _In_ PFLT_FILTER Filter,
    _In_opt_ PFLT_INSTANCE Instance,
    _Out_ PHANDLE FileHandle,
    _Outptr_opt_ PFILE_OBJECT *FileObject,
    _In_ ULONG DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG ShareAccess,
    _In_ ULONG CreateDisposition,
    _In_ ULONG CreateOptions,
    _In_ ULONG NamedPipeType,
    _In_ ULONG ReadMode,
    _In_ ULONG CompletionMode,
    _In_ ULONG MaximumInstances,
    _In_ ULONG InboundQuota,
    _In_ ULONG OutboundQuota,
    _In_opt_ PLARGE_INTEGER DefaultTimeout,
    _In_opt_ PIO_DRIVER_CREATE_CONTEXT DriverContext
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltCreateMailslotFile (
    _In_ PFLT_FILTER Filter,
    _In_opt_ PFLT_INSTANCE Instance,
    _Out_ PHANDLE FileHandle,
    _Outptr_opt_ PFILE_OBJECT *FileObject,
    _In_ ULONG DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG CreateOptions,
    _In_ ULONG MailslotQuota,
    _In_ ULONG MaximumMessageSize,
    _In_ PLARGE_INTEGER ReadTimeout,
    _In_opt_ PIO_DRIVER_CREATE_CONTEXT DriverContext
    );

#define FLT_MAX_DEVICE_REPARSE_ATTEMPTS 64

//
//  Flags that control the behavior of FltCreateFileEx2 device reparse
//  handling.
//

typedef USHORT FLT_CREATEFILE_TARGET_FLAGS;

    //
    //  If set Filter Manager will attempt to handle the device reparse
    //  during FltCreateFileEx2.
    //

    #define FLTTCFL_AUTO_REPARSE          0x0001

//
//  This GUID and structure define an extra create parameter used for
//  passing back reparse information from FltCreateFileEx2 when the
//  create is reparsed to a different device.
//

DEFINE_GUID(GUID_ECP_FLT_CREATEFILE_TARGET,
            0xce08041d,
            0xf411,
            0x447f,
            0xb7, 0xd, 0xcc, 0xee, 0x45, 0xc2, 0x3f, 0xac);

typedef struct _FLT_CREATEFILE_TARGET_ECP_CONTEXT {

    PFLT_INSTANCE Instance;

    PFLT_VOLUME Volume;

    PFLT_FILE_NAME_INFORMATION FileNameInformation;

    FLT_CREATEFILE_TARGET_FLAGS Flags;

} FLT_CREATEFILE_TARGET_ECP_CONTEXT, *PFLT_CREATEFILE_TARGET_ECP_CONTEXT;

#endif // FLT_MGR_WIN8

#if FLT_MGR_LONGHORN

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltCreateFileEx2 (
    _In_ PFLT_FILTER Filter,
    _In_opt_ PFLT_INSTANCE Instance,
    _Out_ PHANDLE FileHandle,
    _Outptr_opt_ PFILE_OBJECT *FileObject,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_opt_ PLARGE_INTEGER AllocationSize,
    _In_ ULONG FileAttributes,
    _In_ ULONG ShareAccess,
    _In_ ULONG CreateDisposition,
    _In_ ULONG CreateOptions,
    _In_reads_bytes_opt_(EaLength) PVOID EaBuffer,
    _In_ ULONG EaLength,
    _In_ ULONG Flags,
    _In_opt_ PIO_DRIVER_CREATE_CONTEXT DriverContext
    );

#endif

#if FLT_MGR_AFTER_XPSP2

//
//  Old version, please use the Ex2 version of this API when possible
//

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltCreateFileEx (
    _In_ PFLT_FILTER Filter,
    _In_opt_ PFLT_INSTANCE Instance,
    _Out_ PHANDLE FileHandle,
    _Outptr_opt_ PFILE_OBJECT *FileObject,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_opt_ PLARGE_INTEGER AllocationSize,
    _In_ ULONG FileAttributes,
    _In_ ULONG ShareAccess,
    _In_ ULONG CreateDisposition,
    _In_ ULONG CreateOptions,
    _In_reads_bytes_opt_(EaLength) PVOID EaBuffer,
    _In_ ULONG EaLength,
    _In_ ULONG Flags
    );

#endif

//
//  Old version, please use the Ex2 version of this API when possible
//

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltCreateFile (
    _In_ PFLT_FILTER Filter,
    _In_opt_ PFLT_INSTANCE Instance,
    _Out_ PHANDLE   FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_opt_ PLARGE_INTEGER AllocationSize,
    _In_ ULONG FileAttributes,
    _In_ ULONG ShareAccess,
    _In_ ULONG CreateDisposition,
    _In_ ULONG CreateOptions,
    _In_reads_bytes_opt_(EaLength)PVOID EaBuffer,
    _In_ ULONG EaLength,
    _In_ ULONG Flags
    );

#if FLT_MGR_AFTER_XPSP2

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltOpenVolume (
    _In_ PFLT_INSTANCE Instance,
    _Out_ PHANDLE VolumeHandle,
    _Outptr_opt_ PFILE_OBJECT *VolumeFileObject
    );

#endif

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_((Flags|FLTFL_IO_OPERATION_PAGING|FLTFL_IO_OPERATION_SYNCHRONOUS_PAGING),_IRQL_requires_max_(APC_LEVEL))
NTSTATUS
FLTAPI
FltReadFile (
    _In_ PFLT_INSTANCE InitiatingInstance,
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_ ULONG Length,
    _Out_writes_bytes_to_(Length,*BytesRead) PVOID Buffer,
    _In_ FLT_IO_OPERATION_FLAGS Flags,
    _Out_opt_ PULONG BytesRead,
    _In_opt_ PFLT_COMPLETED_ASYNC_IO_CALLBACK CallbackRoutine,
    _In_opt_ PVOID CallbackContext
    );

#if FLT_MGR_WIN8
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_((Flags|FLTFL_IO_OPERATION_PAGING|FLTFL_IO_OPERATION_SYNCHRONOUS_PAGING),_IRQL_requires_max_(APC_LEVEL))
NTSTATUS
FLTAPI
FltReadFileEx (
    _In_ PFLT_INSTANCE InitiatingInstance,
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_ ULONG Length,
    _Out_writes_bytes_to_opt_(Length,*BytesRead) PVOID Buffer,
    _In_ FLT_IO_OPERATION_FLAGS Flags,
    _Out_opt_ PULONG BytesRead,
    _In_opt_ PFLT_COMPLETED_ASYNC_IO_CALLBACK CallbackRoutine,
    _In_opt_ PVOID CallbackContext,
    _In_opt_ PULONG Key,
    _In_opt_ PMDL Mdl
    );
#endif

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltTagFile (
    _In_ PFLT_INSTANCE InitiatingInstance,
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG FileTag,
    _In_opt_ GUID *Guid,
    _In_reads_bytes_(DataBufferLength) PVOID DataBuffer,
    _In_ USHORT DataBufferLength
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltUntagFile(
    _In_ PFLT_INSTANCE InitiatingInstance,
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG FileTag,
    _In_opt_ GUID *Guid
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_((Flags|FLTFL_IO_OPERATION_PAGING|FLTFL_IO_OPERATION_SYNCHRONOUS_PAGING),_IRQL_requires_max_(APC_LEVEL))
NTSTATUS
FLTAPI
FltWriteFile (
    _In_ PFLT_INSTANCE InitiatingInstance,
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_ ULONG Length,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ FLT_IO_OPERATION_FLAGS Flags,
    _Out_opt_ PULONG BytesWritten,
    _In_opt_ PFLT_COMPLETED_ASYNC_IO_CALLBACK CallbackRoutine,
    _In_opt_ PVOID CallbackContext
    );

#if FLT_MGR_WIN8
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_((Flags|FLTFL_IO_OPERATION_PAGING|FLTFL_IO_OPERATION_SYNCHRONOUS_PAGING),_IRQL_requires_max_(APC_LEVEL))
NTSTATUS
FLTAPI
FltWriteFileEx (
    _In_ PFLT_INSTANCE InitiatingInstance,
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_ ULONG Length,
    _In_reads_bytes_opt_(Length) PVOID Buffer,
    _In_ FLT_IO_OPERATION_FLAGS Flags,
    _Out_opt_ PULONG BytesWritten,
    _In_opt_ PFLT_COMPLETED_ASYNC_IO_CALLBACK CallbackRoutine,
    _In_opt_ PVOID CallbackContext,
    _In_opt_ PULONG Key,
    _In_opt_ PMDL Mdl
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
BOOLEAN
FLTAPI
FltFastIoMdlRead (
    _In_ PFLT_INSTANCE InitiatingInstance,
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Outptr_ PMDL *MdlChain,
    _Inout_ PIO_STATUS_BLOCK IoStatus
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
BOOLEAN
FLTAPI
FltFastIoMdlReadComplete (
    _In_ PFLT_INSTANCE InitiatingInstance,
    _In_ PFILE_OBJECT FileObject,
    _In_ PMDL MdlChain
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
BOOLEAN
FLTAPI
FltFastIoPrepareMdlWrite (
    _In_ PFLT_INSTANCE InitiatingInstance,
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Outptr_ PMDL *MdlChain,
    _Inout_ PIO_STATUS_BLOCK IoStatus
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
BOOLEAN
FLTAPI
FltFastIoMdlWriteComplete (
    _In_ PFLT_INSTANCE InitiatingInstance,
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PMDL MdlChain
    );
#endif

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltQueryInformationFile (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Out_writes_bytes_to_(Length,*LengthReturned) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _Out_opt_ PULONG LengthReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltSetInformationFile (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );

#if FLT_MGR_LONGHORN

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltQueryDirectoryFile (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_opt_ PUNICODE_STRING FileName,
    _In_ BOOLEAN RestartScan,
    _Out_opt_ PULONG LengthReturned
    );

#endif

#if FLT_MGR_WIN8
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltQueryQuotaInformationFile (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(SidListLength) PVOID SidList,
    _In_ ULONG SidListLength,
    _In_reads_bytes_opt_((8 + (4 * ((SID *)StartSid)->SubAuthorityCount))) PULONG StartSid,
    _In_ BOOLEAN RestartScan,
    _Out_opt_ PULONG LengthReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltSetQuotaInformationFile (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
#endif

#if FLT_MGR_AFTER_XPSP2

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltQueryEaFile(
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Out_writes_bytes_to_(Length,*LengthReturned) PVOID ReturnedEaData,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(EaListLength) PVOID EaList,
    _In_ ULONG EaListLength,
    _In_opt_ PULONG EaIndex,
    _In_ BOOLEAN RestartScan,
    _Out_opt_ PULONG LengthReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltSetEaFile(
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(Length) PVOID EaBuffer,
    _In_ ULONG Length
    );

#endif

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltQueryVolumeInformationFile (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Out_writes_bytes_to_(Length,*LengthReturned) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass,
    _Out_opt_ PULONG LengthReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltQuerySecurityObject (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Inout_updates_bytes_opt_(Length) PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ULONG Length,
    _Out_opt_ PULONG LengthNeeded
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltSetSecurityObject (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltFlushBuffers (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltFsControlFile (
    _In_ PFLT_INSTANCE Instance,
    _In_  PFILE_OBJECT FileObject,
    _In_ ULONG FsControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_to_opt_(OutputBufferLength,*LengthReturned) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _Out_opt_ PULONG LengthReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltDeviceIoControlFile (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG IoControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_to_opt_(OutputBufferLength,*LengthReturned) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _Out_opt_ PULONG LengthReturned
    );

_When_(FlagOn(CallbackData->Iopb->IrpFlags, IRP_PAGING_IO), _IRQL_requires_max_(APC_LEVEL))
_When_(!FlagOn(CallbackData->Iopb->IrpFlags, IRP_PAGING_IO), _IRQL_requires_max_(PASSIVE_LEVEL))
VOID
FLTAPI
FltReissueSynchronousIo (
   _In_ PFLT_INSTANCE InitiatingInstance,
   _In_ PFLT_CALLBACK_DATA CallbackData
   );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltClose(
   _In_ HANDLE FileHandle
   );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FLTAPI
FltCancelFileOpen (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltCreateSystemVolumeInformationFolder (
    _In_ PFLT_INSTANCE Instance
    );

///////////////////////////////////////////////////////////////////////////////
//
//                  CONTEXT routines
//
///////////////////////////////////////////////////////////////////////////////

//
//  Returns TRUE if the given file object supports the given type of context.
//  FALSE otherwise.
//

#if FLT_MGR_LONGHORN

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltSupportsFileContextsEx (
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PFLT_INSTANCE Instance
    );

#endif

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltSupportsFileContexts (
    _In_ PFILE_OBJECT FileObject
    );

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltSupportsStreamContexts (
    _In_ PFILE_OBJECT FileObject
    );

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltSupportsStreamHandleContexts (
    _In_ PFILE_OBJECT FileObject
    );


//
//  Called to allocate a context.  All context must be allocated via
//  this routine.
//

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltAllocateContext (
    _In_ PFLT_FILTER Filter,
    _In_ FLT_CONTEXT_TYPE ContextType,
    _In_ SIZE_T ContextSize,
    _In_ POOL_TYPE PoolType,
    _Outptr_result_bytebuffer_(ContextSize) PFLT_CONTEXT *ReturnedContext
    );

//
//  Get and release multiple contexts
//

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltGetContexts (
    _In_ PCFLT_RELATED_OBJECTS FltObjects,
    _In_ FLT_CONTEXT_TYPE DesiredContexts,
    _Out_ PFLT_RELATED_CONTEXTS Contexts
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltReleaseContexts (
    _In_ PFLT_RELATED_CONTEXTS Contexts
    );

#if FLT_MGR_WIN8

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetContextsEx (
    _In_ PCFLT_RELATED_OBJECTS FltObjects,
    _In_ FLT_CONTEXT_TYPE DesiredContexts,
    _In_ SIZE_T ContextsSize,
    _Out_ PFLT_RELATED_CONTEXTS_EX Contexts
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltReleaseContextsEx (
    _In_ SIZE_T ContextsSize,
    _In_ PFLT_RELATED_CONTEXTS_EX Contexts
    );

#endif  // FLT_MGR_WIN8

//
//  State values for the SetContext routines
//

typedef enum _FLT_SET_CONTEXT_OPERATION {

    //
    //  If a context already exists, replace with the given context.
    //  Return the old context.
    //

    FLT_SET_CONTEXT_REPLACE_IF_EXISTS,

    //
    //  If a context already exists, keep the old context and return an
    //  error status.  Return the old context (yes, we really do want to
    //  return the old context, the caller already has the new context).
    //  The context returned must later be released.
    //

    FLT_SET_CONTEXT_KEEP_IF_EXISTS

} FLT_SET_CONTEXT_OPERATION, *PFLT_SET_CONTEXT_OPERATION;

//
//  Routines for setting a context on a given object.  Once a context has
//  been set, it can not be freed except in the free context callback
//  routine.
//

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltSetVolumeContext (
    _In_ PFLT_VOLUME Volume,
    _In_ FLT_SET_CONTEXT_OPERATION Operation,
    _In_ PFLT_CONTEXT NewContext,
    _Outptr_opt_result_maybenull_ PFLT_CONTEXT *OldContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltSetInstanceContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ FLT_SET_CONTEXT_OPERATION Operation,
    _In_ PFLT_CONTEXT NewContext,
    _Outptr_opt_result_maybenull_ PFLT_CONTEXT *OldContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltSetFileContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_ FLT_SET_CONTEXT_OPERATION Operation,
    _In_ PFLT_CONTEXT NewContext,
    _Outptr_opt_result_maybenull_ PFLT_CONTEXT *OldContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltSetStreamContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_ FLT_SET_CONTEXT_OPERATION Operation,
    _In_ PFLT_CONTEXT NewContext,
    _Outptr_opt_result_maybenull_ PFLT_CONTEXT *OldContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltSetStreamHandleContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _In_ FLT_SET_CONTEXT_OPERATION Operation,
    _In_ PFLT_CONTEXT NewContext,
    _Outptr_opt_result_maybenull_ PFLT_CONTEXT *OldContext
    );

#if FLT_MGR_LONGHORN

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltSetTransactionContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PKTRANSACTION Transaction,
    _In_ FLT_SET_CONTEXT_OPERATION Operation,
    _In_ PFLT_CONTEXT NewContext,
    _Outptr_opt_ PFLT_CONTEXT *OldContext
    );

#endif // FLT_MGR_LONGHORN

//
//  Routines for deleting a context on a given object.
//

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltDeleteContext (
    _In_ PFLT_CONTEXT Context
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltDeleteVolumeContext (
    _In_ PFLT_FILTER Filter,
    _In_ PFLT_VOLUME Volume,
    _Outptr_opt_result_maybenull_ PFLT_CONTEXT *OldContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltDeleteInstanceContext (
    _In_ PFLT_INSTANCE Instance,
    _Outptr_opt_result_maybenull_ PFLT_CONTEXT *OldContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltDeleteFileContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Outptr_opt_result_maybenull_ PFLT_CONTEXT *OldContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltDeleteStreamContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Outptr_opt_result_maybenull_ PFLT_CONTEXT *OldContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltDeleteStreamHandleContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Outptr_opt_result_maybenull_ PFLT_CONTEXT *OldContext
    );


#if FLT_MGR_LONGHORN

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltDeleteTransactionContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PKTRANSACTION Transaction,
    _Outptr_opt_ PFLT_CONTEXT *OldContext
    );

#endif // FLT_MGR_LONGHORN

//
//  Routines for getting/releasing contexts.  Any time a filter gets a context,
//  a corresponding release must be called.
//

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetVolumeContext (
    _In_ PFLT_FILTER Filter,
    _In_ PFLT_VOLUME Volume,
    _Outptr_ PFLT_CONTEXT *Context
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetInstanceContext (
    _In_ PFLT_INSTANCE Instance,
    _Outptr_ PFLT_CONTEXT *Context
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetFileContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Outptr_ PFLT_CONTEXT *Context
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetStreamContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Outptr_ PFLT_CONTEXT *Context
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetStreamHandleContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Outptr_ PFLT_CONTEXT *Context
    );

#if FLT_MGR_LONGHORN

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetTransactionContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PKTRANSACTION Transaction,
    _Outptr_ PFLT_CONTEXT *Context
    );

#endif // FLT_MGR_LONGHORN

#if FLT_MGR_WIN8

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetSectionContext (
    _In_ PFLT_INSTANCE Instance,
    _In_ PFILE_OBJECT FileObject,
    _Outptr_ PFLT_CONTEXT *Context
    );

#endif // FLT_MGR_WIN8

//
//  This adds a reference to the given context structure.  The added reference
//  must be explicitly removed by a call to FltReleaseContext.
//

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FLTAPI
FltReferenceContext (
    _In_ PFLT_CONTEXT Context
    );

//
//  Routine to release contexts
//

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FLTAPI
FltReleaseContext (
    _In_ PFLT_CONTEXT Context
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Routines for getting handles to Filters, Instances,
//  and Volumes.
//
///////////////////////////////////////////////////////////////////////////////

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetFilterFromName (
    _In_ PCUNICODE_STRING FilterName,
    _Outptr_ PFLT_FILTER *RetFilter
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltGetVolumeFromName (
    _In_ PFLT_FILTER Filter,
    _In_ PCUNICODE_STRING VolumeName,
    _Outptr_ PFLT_VOLUME *RetVolume
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetVolumeInstanceFromName (
    _In_opt_ PFLT_FILTER Filter,
    _In_ PFLT_VOLUME Volume,
    _In_opt_ PCUNICODE_STRING InstanceName,
    _Outptr_ PFLT_INSTANCE *RetInstance
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetVolumeFromInstance (
    _In_ PFLT_INSTANCE Instance,
    _Outptr_ PFLT_VOLUME *RetVolume
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetFilterFromInstance (
    _In_ PFLT_INSTANCE Instance,
    _Outptr_ PFLT_FILTER *RetFilter
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetVolumeFromFileObject (
    _In_ PFLT_FILTER Filter,
    _In_ PFILE_OBJECT FileObject,
    _Outptr_ PFLT_VOLUME *RetVolume
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetVolumeFromDeviceObject (
    _In_ PFLT_FILTER Filter,
    _In_ PDEVICE_OBJECT DeviceObject,
    _Outptr_ PFLT_VOLUME *RetVolume
    );

#if FLT_MGR_LONGHORN

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltIsFltMgrVolumeDeviceObject(
    _In_ PDEVICE_OBJECT DeviceObject
    );

#endif

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltGetDeviceObject (
    _In_ PFLT_VOLUME Volume,
    _Outptr_ PDEVICE_OBJECT *DeviceObject
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltGetDiskDeviceObject(
    _In_ PFLT_VOLUME Volume,
    _Outptr_ PDEVICE_OBJECT *DiskDeviceObject
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetLowerInstance (
    _In_ PFLT_INSTANCE CurrentInstance,
    _Outptr_ PFLT_INSTANCE *LowerInstance
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetUpperInstance (
    _In_ PFLT_INSTANCE CurrentInstance,
    _Outptr_ PFLT_INSTANCE *UpperInstance
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetTopInstance (
    _In_ PFLT_VOLUME Volume,
    _Outptr_ PFLT_INSTANCE *Instance
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetBottomInstance (
    _In_ PFLT_VOLUME Volume,
    _Outptr_ PFLT_INSTANCE *Instance
    );

LONG
FLTAPI
FltCompareInstanceAltitudes (
    _In_ PFLT_INSTANCE Instance1,
    _In_ PFLT_INSTANCE Instance2
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Routines for getting information on Filters and Filter Instances.
//
///////////////////////////////////////////////////////////////////////////////

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetFilterInformation (
    _In_ PFLT_FILTER Filter,
    _In_ FILTER_INFORMATION_CLASS InformationClass,
    _Out_writes_bytes_to_opt_(BufferSize, *BytesReturned) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_ PULONG BytesReturned
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetInstanceInformation (
    _In_ PFLT_INSTANCE Instance,
    _In_ INSTANCE_INFORMATION_CLASS InformationClass,
    _Out_writes_bytes_to_opt_(BufferSize,*BytesReturned) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_ PULONG BytesReturned
    );

#if FLT_MGR_LONGHORN

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetVolumeInformation (
    _In_ PFLT_VOLUME Volume,
    _In_ FILTER_VOLUME_INFORMATION_CLASS InformationClass,
    _Out_writes_bytes_to_opt_(BufferSize,*BytesReturned) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_ PULONG BytesReturned
    );

#endif // FLT_MGR_LONGHORN

///////////////////////////////////////////////////////////////////////////////
//
//  Routines for getting information about Volumes.
//
///////////////////////////////////////////////////////////////////////////////

typedef struct _FLT_VOLUME_PROPERTIES {

    //
    //  The possible DeviceTypes are defined in NTIFS.H and begin with
    //  FILE_DEVICE_
    //

    DEVICE_TYPE DeviceType;

    //
    //  The possible DeviceCharacteristics flags are defined in NTIFS.H.
    //  Potential values are:
    //      FILE_REMOVABLE_MEDIA
    //      FILE_READ_ONLY_DEVICE
    //      FILE_FLOPPY_DISKETTE
    //      FILE_WRITE_ONCE_MEDIA
    //      FILE_REMOTE_DEVICE
    //      FILE_DEVICE_IS_MOUNTED
    //      FILE_VIRTUAL_VOLUME
    //      FILE_AUTOGENERATED_DEVICE_NAME
    //      FILE_DEVICE_SECURE_OPEN
    //

    ULONG DeviceCharacteristics;

    //
    //  The possible DeviceObjectFlags are define in NTIFS.H.  All potential
    //  values begin with DO_.
    //

    ULONG DeviceObjectFlags;

    ULONG AlignmentRequirement;

    USHORT SectorSize;

    USHORT Reserved0;

    //
    //  The name of the file system driver associated with this device.
    //
    //  The buffer for this unicode string is contiguous with this structure and
    //  does not need to be initialized before calling FltGetVolumeProperties.
    //

    UNICODE_STRING FileSystemDriverName;

    //
    //  The name of the file system device associated with this device.
    //
    //  The buffer for this unicode string is contiguous with this structure and
    //  does not need to be initialized before calling FltGetVolumeProperties.
    //

    UNICODE_STRING FileSystemDeviceName;

    //
    //  The name of the real device object associated with this device.  This
    //  is empty for network file systems.
    //
    //  The buffer for this unicode string is contiguous with this structure and
    //  does not need to be initialized before calling FltGetVolumeProperties.
    //

    UNICODE_STRING RealDeviceName;

} FLT_VOLUME_PROPERTIES, *PFLT_VOLUME_PROPERTIES;

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetVolumeProperties (
    _In_ PFLT_VOLUME Volume,
    _Out_writes_bytes_to_opt_(VolumePropertiesLength,*LengthReturned) PFLT_VOLUME_PROPERTIES VolumeProperties,
    _In_ ULONG VolumePropertiesLength,
    _Out_ PULONG LengthReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltIsVolumeWritable (
    _In_ PVOID FltObject,
    _Out_ PBOOLEAN IsWritable
    );

#if FLT_MGR_LONGHORN

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltGetFileSystemType (
    _In_ PVOID FltObject,
    _Out_ PFLT_FILESYSTEM_TYPE FileSystemType
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltIsVolumeSnapshot (
    _In_ PVOID FltObject,
    _Out_ PBOOLEAN IsSnapshotVolume
    );

#endif // FLT_MGR_LONGHORN

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltGetVolumeGuidName (
    _In_ PFLT_VOLUME Volume,
    _Inout_opt_ PUNICODE_STRING VolumeGuidName,
    _Out_opt_ PULONG BufferSizeNeeded
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltQueryVolumeInformation(
    _In_ PFLT_INSTANCE Instance,
    _Out_ PIO_STATUS_BLOCK Iosb,
    _Out_writes_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltSetVolumeInformation(
    _In_ PFLT_INSTANCE Instance,
    _Out_ PIO_STATUS_BLOCK Iosb,
    _Out_writes_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Routines for enumerating Filter information, Instance informations and
//  Filter Instances in the system.
//
///////////////////////////////////////////////////////////////////////////////

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltEnumerateFilters (
    _Out_writes_to_opt_(FilterListSize,*NumberFiltersReturned) PFLT_FILTER *FilterList,
    _In_ ULONG FilterListSize,
    _Out_ PULONG NumberFiltersReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltEnumerateVolumes (
    _In_ PFLT_FILTER Filter,
    _Out_writes_to_opt_(VolumeListSize,*NumberVolumesReturned) PFLT_VOLUME *VolumeList,
    _In_ ULONG VolumeListSize,
    _Out_ PULONG NumberVolumesReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltEnumerateInstances (
    _In_opt_ PFLT_VOLUME Volume,
    _In_opt_ PFLT_FILTER Filter,
    _Out_writes_to_opt_(InstanceListSize,*NumberInstancesReturned) PFLT_INSTANCE *InstanceList,
    _In_ ULONG InstanceListSize,
    _Out_ PULONG NumberInstancesReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltEnumerateFilterInformation (
    _In_ ULONG Index,
    _In_ FILTER_INFORMATION_CLASS InformationClass,
    _Out_writes_bytes_to_opt_(BufferSize,*BytesReturned) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_ PULONG BytesReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltEnumerateInstanceInformationByFilter (
    _In_ PFLT_FILTER Filter,
    _In_ ULONG Index,
    _In_ INSTANCE_INFORMATION_CLASS InformationClass,
    _Out_writes_bytes_to_opt_(BufferSize,*BytesReturned) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_ PULONG BytesReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltEnumerateInstanceInformationByVolume (
    _In_ PFLT_VOLUME Volume,
    _In_ ULONG Index,
    _In_ INSTANCE_INFORMATION_CLASS InformationClass,
    _Out_writes_bytes_to_opt_(BufferSize,*BytesReturned) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_ PULONG BytesReturned
    );

#if FLT_MGR_WIN8
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltEnumerateInstanceInformationByVolumeName(
    _In_ PUNICODE_STRING VolumeName,
    _In_ ULONG Index,
    _In_ INSTANCE_INFORMATION_CLASS InformationClass,
    _Out_writes_bytes_to_opt_(BufferSize,*BytesReturned) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_ PULONG BytesReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltEnumerateInstanceInformationByDeviceObject(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG Index,
    _In_ INSTANCE_INFORMATION_CLASS InformationClass,
    _Out_writes_bytes_to_opt_(BufferSize,*BytesReturned) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_ PULONG BytesReturned
    );
#endif

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltEnumerateVolumeInformation (
    _In_ PFLT_FILTER Filter,
    _In_ ULONG Index,
    _In_ FILTER_VOLUME_INFORMATION_CLASS InformationClass,
    _Out_writes_bytes_to_opt_(BufferSize,*BytesReturned) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_ PULONG BytesReturned
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Routines for referencing and closing FLT_VOLUMEs, FLT_INSTANCEs, and
//  FLT_FILTERs.
//
///////////////////////////////////////////////////////////////////////////////

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltObjectReference (
    _Inout_ PVOID FltObject
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FLTAPI
FltObjectDereference (
    _Inout_ PVOID FltObject
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Routines & defs for sending messages from a filter to a user-mode component.
//
///////////////////////////////////////////////////////////////////////////////

//
//  Access masks for filter communication ports
//

#define FLT_PORT_CONNECT        0x0001
#define FLT_PORT_ALL_ACCESS     (FLT_PORT_CONNECT | STANDARD_RIGHTS_ALL)

//
//  Callback to notify a filter it has received a message from a user App
//

typedef NTSTATUS
(FLTAPI *PFLT_MESSAGE_NOTIFY) (
    _In_opt_ PVOID PortCookie,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_to_opt_(OutputBufferLength,*ReturnOutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _Out_ PULONG ReturnOutputBufferLength
    );

//
//  Callback to notify a filter when a new connection to a port is established
//

typedef NTSTATUS
(FLTAPI *PFLT_CONNECT_NOTIFY) (
      _In_ PFLT_PORT ClientPort,
      _In_opt_ PVOID ServerPortCookie,
      _In_reads_bytes_opt_(SizeOfContext) PVOID ConnectionContext,
      _In_ ULONG SizeOfContext,
      _Outptr_result_maybenull_ PVOID *ConnectionPortCookie
      );

//
//  Callback to notify a filter when a connection to a port is being torn down
//

typedef VOID
(FLTAPI *PFLT_DISCONNECT_NOTIFY) (
      _In_opt_ PVOID ConnectionCookie
      );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltCreateCommunicationPort (
    _In_ PFLT_FILTER Filter,
    _Outptr_ PFLT_PORT *ServerPort,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PVOID ServerPortCookie,
    _In_ PFLT_CONNECT_NOTIFY ConnectNotifyCallback,
    _In_ PFLT_DISCONNECT_NOTIFY DisconnectNotifyCallback,
    _In_opt_ PFLT_MESSAGE_NOTIFY MessageNotifyCallback,
    _In_ LONG MaxConnections
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FLTAPI
FltCloseCommunicationPort (
    _In_ PFLT_PORT ServerPort
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FLTAPI
FltCloseClientPort (
    _In_ PFLT_FILTER Filter,
    _Inout_ PFLT_PORT *ClientPort
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltSendMessage (
    _In_ PFLT_FILTER Filter,
    _In_ PFLT_PORT *ClientPort,
    _In_reads_bytes_(SenderBufferLength) PVOID SenderBuffer,
    _In_ ULONG SenderBufferLength,
    _Out_writes_bytes_opt_(*ReplyLength) PVOID ReplyBuffer,
    _Inout_opt_ PULONG ReplyLength,
    _In_opt_ PLARGE_INTEGER Timeout
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltBuildDefaultSecurityDescriptor(
     _Outptr_ PSECURITY_DESCRIPTOR *SecurityDescriptor,
     _In_ ACCESS_MASK DesiredAccess
     );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltFreeSecurityDescriptor(
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );

///////////////////////////////////////////////////////////////////////////////
//
//  Plain cancel support. Note that using callback data queues and
//  setting the cancel routine manually is not supported
//
///////////////////////////////////////////////////////////////////////////////

typedef VOID
(FLTAPI *PFLT_COMPLETE_CANCELED_CALLBACK) (
    _In_ PFLT_CALLBACK_DATA CallbackData
);

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
BOOLEAN
FLTAPI
FltCancelIo(
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltSetCancelCompletion (
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ PFLT_COMPLETE_CANCELED_CALLBACK CanceledCallback
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltClearCancelCompletion(
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

BOOLEAN
FLTAPI
FltIsIoCanceled(
    _In_ PFLT_CALLBACK_DATA CallbackData
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Workqueue wrappers
//
///////////////////////////////////////////////////////////////////////////////

typedef struct _FLT_DEFERRED_IO_WORKITEM *PFLT_DEFERRED_IO_WORKITEM;
typedef struct _FLT_GENERIC_WORKITEM *PFLT_GENERIC_WORKITEM;

typedef VOID
(FLTAPI *PFLT_DEFERRED_IO_WORKITEM_ROUTINE) (
    _In_ PFLT_DEFERRED_IO_WORKITEM FltWorkItem,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_opt_ PVOID Context
    );

typedef VOID
(FLTAPI *PFLT_GENERIC_WORKITEM_ROUTINE) (
    _In_ PFLT_GENERIC_WORKITEM FltWorkItem,
    _In_ PVOID FltObject,
    _In_opt_ PVOID Context
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
PFLT_DEFERRED_IO_WORKITEM
FLTAPI
FltAllocateDeferredIoWorkItem(
    VOID
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FLTAPI
FltFreeDeferredIoWorkItem (
    _In_ PFLT_DEFERRED_IO_WORKITEM FltWorkItem
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
PFLT_GENERIC_WORKITEM
FLTAPI
FltAllocateGenericWorkItem(
    VOID
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FLTAPI
FltFreeGenericWorkItem (
    _In_ PFLT_GENERIC_WORKITEM FltWorkItem
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltQueueDeferredIoWorkItem (
    _In_ PFLT_DEFERRED_IO_WORKITEM FltWorkItem,
    _In_ PFLT_CALLBACK_DATA Data,
    _In_ PFLT_DEFERRED_IO_WORKITEM_ROUTINE WorkerRoutine,
    _In_ WORK_QUEUE_TYPE QueueType,
    _In_ PVOID Context
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltQueueGenericWorkItem (
    _In_ PFLT_GENERIC_WORKITEM FltWorkItem,
    _In_ PVOID FltObject,
    _In_ PFLT_GENERIC_WORKITEM_ROUTINE WorkerRoutine,
    _In_ WORK_QUEUE_TYPE QueueType,
    _In_opt_ PVOID Context
    );



///////////////////////////////////////////////////////////////////////////////
//
//  Routines for decoding params, locking data buffers etc.
//
///////////////////////////////////////////////////////////////////////////////


_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltLockUserBuffer(
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

NTSTATUS
FLTAPI
FltDecodeParameters(
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _Outptr_opt_ PMDL **MdlAddressPointer,
    _Outptr_opt_result_bytebuffer_(**Length) PVOID  **Buffer,
    _Outptr_opt_ PULONG *Length,
    _Out_opt_ LOCK_OPERATION *DesiredAccess
    );

PMDL
FASTCALL
FltGetSwappedBufferMdlAddress(
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

VOID
FASTCALL
FltRetainSwappedBufferMdlAddress(
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

#if FLT_MGR_WIN7

_Must_inspect_result_
_IRQL_requires_max_(DPC_LEVEL)
PVOID
FLTAPI
FltGetNewSystemBufferAddress(
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

#endif // FLT_MGR_WIN7

///////////////////////////////////////////////////////////////////////////////
//
//  Routines for accessing cancel-safe queue abstraction provided by
//  filter manager
//
///////////////////////////////////////////////////////////////////////////////

//
// The cancel safe queue is not exposed in the w2k DDK headers, so we
// define what is neccesary here.
//

typedef IO_CSQ_IRP_CONTEXT FLT_CALLBACK_DATA_QUEUE_IO_CONTEXT, *PFLT_CALLBACK_DATA_QUEUE_IO_CONTEXT;

//
// Forward define callback data queue
//

typedef struct _FLT_CALLBACK_DATA_QUEUE FLT_CALLBACK_DATA_QUEUE, *PFLT_CALLBACK_DATA_QUEUE;

//
// Routines that insert/remove callback data's
//

typedef NTSTATUS
(FLTAPI *PFLT_CALLBACK_DATA_QUEUE_INSERT_IO)(
    _Inout_ PFLT_CALLBACK_DATA_QUEUE Cbdq,
    _In_ PFLT_CALLBACK_DATA Cbd,
    _In_opt_ PVOID InsertContext
    );

typedef VOID
(FLTAPI *PFLT_CALLBACK_DATA_QUEUE_REMOVE_IO)(
    _Inout_ PFLT_CALLBACK_DATA_QUEUE Cbdq,
    _In_ PFLT_CALLBACK_DATA Cbd
    );

//
// Retrieves the next callback data from the queue. NULL if none are left.
// If Cbd is NULL, returns the entry at the head of the queue. Does not remove
// Cbd from queue.
//

typedef PFLT_CALLBACK_DATA
(FLTAPI *PFLT_CALLBACK_DATA_QUEUE_PEEK_NEXT_IO)(
    _In_ PFLT_CALLBACK_DATA_QUEUE Cbdq,
    _In_opt_ PFLT_CALLBACK_DATA Cbd,
    _In_opt_ PVOID PeekContext
    );

//
//  Lock routine that protects the cancel safe queue
//

typedef VOID
(FLTAPI *PFLT_CALLBACK_DATA_QUEUE_ACQUIRE)(
    _Inout_ PFLT_CALLBACK_DATA_QUEUE Cbdq,
    _Out_opt_ PKIRQL Irql
    );

typedef VOID
(FLTAPI *PFLT_CALLBACK_DATA_QUEUE_RELEASE)(
    _Inout_ PFLT_CALLBACK_DATA_QUEUE Cbdq,
    _In_opt_ KIRQL Irql
    );

//
//  Cancel routine callback for queued callback data's
//

typedef VOID
(FLTAPI *PFLT_CALLBACK_DATA_QUEUE_COMPLETE_CANCELED_IO)(
    _Inout_ PFLT_CALLBACK_DATA_QUEUE Cbdq,
    _Inout_ PFLT_CALLBACK_DATA Cbd
    );


typedef enum _FLT_CALLBACK_DATA_QUEUE_FLAGS FLT_CALLBACK_DATA_QUEUE_FLAGS;
//
// Following structure is opaque to filters, but allocated by them.
//

typedef struct _FLT_CALLBACK_DATA_QUEUE {

    //
    //  Embedded IRP cancel queue: this is opaque to minifilters
    //

    IO_CSQ Csq;

    //
    //  Flags .. These are private to filter manager
    //

    FLT_CALLBACK_DATA_QUEUE_FLAGS Flags;

    //
    //  Instance that is using this queue
    //

    PFLT_INSTANCE Instance;

    //
    //  Cancel-safe queue callbacks
    //

    PFLT_CALLBACK_DATA_QUEUE_INSERT_IO                   InsertIo;
    PFLT_CALLBACK_DATA_QUEUE_REMOVE_IO                   RemoveIo;
    PFLT_CALLBACK_DATA_QUEUE_PEEK_NEXT_IO                PeekNextIo;
    PFLT_CALLBACK_DATA_QUEUE_ACQUIRE                     Acquire;
    PFLT_CALLBACK_DATA_QUEUE_RELEASE                     Release;
    PFLT_CALLBACK_DATA_QUEUE_COMPLETE_CANCELED_IO        CompleteCanceledIo;


} FLT_CALLBACK_DATA_QUEUE, *PFLT_CALLBACK_DATA_QUEUE;


NTSTATUS
FLTAPI
FltCbdqInitialize(
    _In_ PFLT_INSTANCE                                       Instance,
    _Inout_ PFLT_CALLBACK_DATA_QUEUE                         Cbdq,
    _In_ PFLT_CALLBACK_DATA_QUEUE_INSERT_IO                  CbdqInsertIo,
    _In_ PFLT_CALLBACK_DATA_QUEUE_REMOVE_IO                  CbdqRemoveIo,
    _In_ PFLT_CALLBACK_DATA_QUEUE_PEEK_NEXT_IO               CbdqPeekNextIo,
    _In_ PFLT_CALLBACK_DATA_QUEUE_ACQUIRE                    CbdqAcquire,
    _In_ PFLT_CALLBACK_DATA_QUEUE_RELEASE                    CbdqRelease,
    _In_ PFLT_CALLBACK_DATA_QUEUE_COMPLETE_CANCELED_IO       CbdqCompleteCanceledIo
    );

VOID
FLTAPI
FltCbdqEnable(
    _Inout_ PFLT_CALLBACK_DATA_QUEUE Cbdq
    );

VOID
FLTAPI
FltCbdqDisable(
    _Inout_ PFLT_CALLBACK_DATA_QUEUE Cbdq
    );

_Must_inspect_result_
NTSTATUS
FLTAPI
FltCbdqInsertIo(
    _Inout_ PFLT_CALLBACK_DATA_QUEUE Cbdq,
    _In_ PFLT_CALLBACK_DATA Cbd,
    _In_opt_ PFLT_CALLBACK_DATA_QUEUE_IO_CONTEXT Context,
    _In_opt_ PVOID InsertContext
    );

_Must_inspect_result_
PFLT_CALLBACK_DATA
FLTAPI
FltCbdqRemoveIo(
    _Inout_ PFLT_CALLBACK_DATA_QUEUE Cbdq,
    _In_ PFLT_CALLBACK_DATA_QUEUE_IO_CONTEXT Context
    );

_Must_inspect_result_
PFLT_CALLBACK_DATA
FLTAPI
FltCbdqRemoveNextIo(
    _Inout_  PFLT_CALLBACK_DATA_QUEUE Cbdq,
    _In_opt_  PVOID     PeekContext
    );


///////////////////////////////////////////////////////////////////////////////
//
//  Routines and callbacks for handling oplocks provided by filter manager
//
///////////////////////////////////////////////////////////////////////////////

typedef
VOID
(FLTAPI *PFLTOPLOCK_WAIT_COMPLETE_ROUTINE) (
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_opt_ PVOID Context
    );

typedef
VOID
(FLTAPI *PFLTOPLOCK_PREPOST_CALLBACKDATA_ROUTINE) (
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_opt_ PVOID Context
    );

//
// Oplock support routines.
//

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltInitializeOplock (
    _Out_ POPLOCK Oplock
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltUninitializeOplock (
    _In_ POPLOCK Oplock
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
FLT_PREOP_CALLBACK_STATUS
FLTAPI
FltOplockFsctrl (
    _In_ POPLOCK Oplock,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ ULONG OpenCount
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
FLT_PREOP_CALLBACK_STATUS
FLTAPI
FltCheckOplock (
    _In_ POPLOCK Oplock,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_opt_ PVOID Context,
    _In_opt_ PFLTOPLOCK_WAIT_COMPLETE_ROUTINE WaitCompletionRoutine,
    _In_opt_ PFLTOPLOCK_PREPOST_CALLBACKDATA_ROUTINE PrePostCallbackDataRoutine
    );

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltOplockIsFastIoPossible (
    _In_ POPLOCK Oplock
    );

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltCurrentBatchOplock (
    _In_ POPLOCK Oplock
    );

#if FLT_MGR_WIN7

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
FLT_PREOP_CALLBACK_STATUS
FLTAPI
FltCheckOplockEx (
    _In_ POPLOCK Oplock,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ ULONG Flags,
    _In_opt_ PVOID Context,
    _In_opt_ PFLTOPLOCK_WAIT_COMPLETE_ROUTINE WaitCompletionRoutine,
    _In_opt_ PFLTOPLOCK_PREPOST_CALLBACKDATA_ROUTINE PrePostCallbackDataRoutine
    );

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltCurrentOplock (
    _In_ POPLOCK Oplock
    );

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltCurrentOplockH (
    _In_ POPLOCK Oplock
    );

_IRQL_requires_max_(APC_LEVEL)
FLT_PREOP_CALLBACK_STATUS
FLTAPI
FltOplockBreakH (
    _In_ POPLOCK Oplock,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ ULONG Flags,
    _In_opt_ PVOID Context,
    _In_opt_ PFLTOPLOCK_WAIT_COMPLETE_ROUTINE WaitCompletionRoutine,
    _In_opt_ PFLTOPLOCK_PREPOST_CALLBACKDATA_ROUTINE PrePostCallbackDataRoutine
    );

_IRQL_requires_max_(APC_LEVEL)
FLT_PREOP_CALLBACK_STATUS
FLTAPI
FltOplockBreakToNone (
    _In_ POPLOCK Oplock,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_opt_ PVOID Context,
    _In_opt_ PFLTOPLOCK_WAIT_COMPLETE_ROUTINE WaitCompletionRoutine,
    _In_opt_ PFLTOPLOCK_PREPOST_CALLBACKDATA_ROUTINE PrePostCallbackDataRoutine
    );

_IRQL_requires_max_(APC_LEVEL)
FLT_PREOP_CALLBACK_STATUS
FLTAPI
FltOplockBreakToNoneEx (
    _In_ POPLOCK Oplock,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ ULONG Flags,
    _In_opt_ PVOID Context,
    _In_opt_ PFLTOPLOCK_WAIT_COMPLETE_ROUTINE WaitCompletionRoutine,
    _In_opt_ PFLTOPLOCK_PREPOST_CALLBACKDATA_ROUTINE PrePostCallbackDataRoutine
    );

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltOplockIsSharedRequest (
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
FLT_PREOP_CALLBACK_STATUS
FLTAPI
FltOplockFsctrlEx (
    _In_ POPLOCK Oplock,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ ULONG OpenCount,
    _In_ ULONG Flags
    );

BOOLEAN
FLTAPI
FltOplockKeysEqual (
    _In_opt_ PFILE_OBJECT Fo1,
    _In_opt_ PFILE_OBJECT Fo2
    );

#endif  //  FLT_MGR_WIN7

///////////////////////////////////////////////////////////////////////////////
//
//  Routines and callbacks for handling file lock support provided by filter manager
//
///////////////////////////////////////////////////////////////////////////////

typedef
NTSTATUS
(*PFLT_COMPLETE_LOCK_CALLBACK_DATA_ROUTINE) (
    _In_opt_ PVOID Context,
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

VOID
FLTAPI
FltInitializeFileLock (
    _Out_ PFILE_LOCK FileLock
    );

VOID
FLTAPI
FltUninitializeFileLock (
    _In_ PFILE_LOCK FileLock
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
PFILE_LOCK
FLTAPI
FltAllocateFileLock (
    _In_opt_ PFLT_COMPLETE_LOCK_CALLBACK_DATA_ROUTINE CompleteLockCallbackDataRoutine,
    _In_opt_ PUNLOCK_ROUTINE UnlockRoutine
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltFreeFileLock (
    _In_ PFILE_LOCK FileLock
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
FLT_PREOP_CALLBACK_STATUS
FLTAPI
FltProcessFileLock (
    _In_ PFILE_LOCK FileLock,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_opt_ PVOID Context
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltCheckLockForReadAccess (
    _In_ PFILE_LOCK FileLock,
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltCheckLockForWriteAccess (
    _In_ PFILE_LOCK FileLock,
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

///////////////////////////////////////////////////////////////////////////////
//
//                          Locking Primitives
//
///////////////////////////////////////////////////////////////////////////////

//
//  EResource APIs which do proper wrapping of KeEnterCriticalRegion and
//  KeExitCriticalRegion to disable APCs (except Special Kernel APCs) while
//  the lock is held
//
//  Use ExInitializeResourceLite() to init the resource
//  Use ExDeleteResourceLite() to delete the resource
//

_Acquires_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltAcquireResourceExclusive(
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PERESOURCE Resource
    );

_Acquires_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltAcquireResourceShared(
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PERESOURCE Resource
    );

_Releases_lock_(_Global_critical_region_)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FLTAPI
FltReleaseResource(
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_) PERESOURCE Resource
    );


//
//  PUSHLOCK APIs which do proper wrapping of KeEnterCriticalRegion and
//  KeExitCriticalRegion to disable APCs (except Special Kernel APCs) while
//  the lock is held
//

#define FLT_PUSH_LOCK_ENABLE_AUTO_BOOST               (0x1) // Deprecated.
#define FLT_PUSH_LOCK_DISABLE_AUTO_BOOST              (0x2)
#define FLT_PUSH_LOCK_VALID_FLAGS                     (0x3)

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltInitializePushLock(
    _Out_ PEX_PUSH_LOCK PushLock
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltDeletePushLock(
    _In_ PEX_PUSH_LOCK PushLock
    );

_Acquires_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltAcquirePushLockExclusive(
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    );

_Acquires_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltAcquirePushLockShared(
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    );

_Releases_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltReleasePushLock(
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    );

#if FLT_MGR_WINBLUE && !defined(FLT_MGR_LEGACY_PUSH_LOCKS)

_Acquires_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltAcquirePushLockExclusiveEx(
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

_Acquires_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltAcquirePushLockSharedEx(
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

_Releases_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltReleasePushLockEx(
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

#if !defined(FLT_SKIP_PUSH_LOCK_REDIRECTION)

#define FltAcquirePushLockExclusive(Lock) \
        FltAcquirePushLockExclusiveEx(Lock, 0)

#define FltAcquirePushLockShared(Lock) \
        FltAcquirePushLockSharedEx(Lock, 0)

#define FltReleasePushLock(Lock) \
        FltReleasePushLockEx(Lock, 0)

#endif // !defined(FLT_SKIP_PUSH_LOCK_REDIRECTION)

#endif // FLT_MGR_WINBLUE && !defined(FLT_MGR_LEGACY_PUSH_LOCKS)

///////////////////////////////////////////////////////////////////////////////
//
//  Synchronization support routines
//
///////////////////////////////////////////////////////////////////////////////

#if FLT_MGR_LONGHORN

_Must_inspect_result_
_When_(((CallbackData!=NULL) && FLT_IS_IRP_OPERATION(CallbackData)), _IRQL_requires_max_(PASSIVE_LEVEL))
_When_((!((CallbackData!=NULL) && FLT_IS_IRP_OPERATION(CallbackData))), _IRQL_requires_max_(APC_LEVEL))
NTSTATUS
FLTAPI
FltCancellableWaitForSingleObject(
    _In_ PVOID Object,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_opt_ PFLT_CALLBACK_DATA CallbackData
    );

_Must_inspect_result_
_When_(((CallbackData!=NULL) && FLT_IS_IRP_OPERATION(CallbackData)), _IRQL_requires_max_(PASSIVE_LEVEL))
_When_((!((CallbackData!=NULL) && FLT_IS_IRP_OPERATION(CallbackData))), _IRQL_requires_max_(APC_LEVEL))
NTSTATUS
FLTAPI
FltCancellableWaitForMultipleObjects(
    _In_ ULONG Count,
    _In_reads_(Count) PVOID ObjectArray[],
    _In_ WAIT_TYPE WaitType,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_opt_ PKWAIT_BLOCK WaitBlockArray,
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

#endif // FLT_MGR_LONGHORN


///////////////////////////////////////////////////////////////////////////////
//
//  General support routines
//
///////////////////////////////////////////////////////////////////////////////


BOOLEAN
FLTAPI
FltIsOperationSynchronous (
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
BOOLEAN
FLTAPI
FltIs32bitProcess (
    _In_opt_ PFLT_CALLBACK_DATA CallbackData
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
PEPROCESS
FLTAPI
FltGetRequestorProcess (
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FLTAPI
FltGetRequestorProcessId (
    _In_ PFLT_CALLBACK_DATA CallbackData
    );


#if FLT_MGR_LONGHORN

_IRQL_requires_max_(DISPATCH_LEVEL)
HANDLE
FLTAPI
FltGetRequestorProcessIdEx (
    _In_ PFLT_CALLBACK_DATA CallbackData
    );

#endif // FLT_MGR_LONGHORN

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltNotifyFilterChangeDirectory (
    _Inout_ PNOTIFY_SYNC NotifySync,
    _Inout_ PLIST_ENTRY NotifyList,
    _In_ PVOID FsContext,
    _In_ PSTRING FullDirectoryName,
    _In_ BOOLEAN WatchTree,
    _In_ BOOLEAN IgnoreBuffer,
    _In_ ULONG CompletionFilter,
    _In_ PFLT_CALLBACK_DATA NotifyCallbackData,
    _In_opt_ PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectContext,
    _In_opt_ PFILTER_REPORT_CHANGE FilterCallback
    );

#if FLT_MGR_WIN7

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetRequestorSessionId(
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _Out_ PULONG SessionId
    );


_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltAdjustDeviceStackSizeForIoRedirection(
    _In_ PFLT_INSTANCE SourceInstance,
    _In_ PFLT_INSTANCE TargetInstance,
    _Out_opt_ PBOOLEAN SourceDeviceStackSizeModified
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltIsIoRedirectionAllowed(
    _In_ PFLT_INSTANCE SourceInstance,
    _In_ PFLT_INSTANCE TargetInstance,
    _Out_ PBOOLEAN RedirectionAllowed
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltIsIoRedirectionAllowedForOperation(
    _In_ PFLT_CALLBACK_DATA Data,
    _In_ PFLT_INSTANCE TargetInstance,
    _Out_ PBOOLEAN RedirectionAllowedThisIo,
    _Out_opt_ PBOOLEAN RedirectionAllowedAllIo
    );


#endif // FLT_MGR_WIN7


///////////////////////////////////////////////////////////////////////////////
//
//  Transaction (TxF) support routines
//
///////////////////////////////////////////////////////////////////////////////

#if FLT_MGR_LONGHORN

//
//  Select ALL transaction notification values
//

#define FLT_MAX_TRANSACTION_NOTIFICATIONS \
                (TRANSACTION_NOTIFY_PREPREPARE | \
                 TRANSACTION_NOTIFY_PREPARE | \
                 TRANSACTION_NOTIFY_COMMIT | \
                 TRANSACTION_NOTIFY_ROLLBACK | \
                 TRANSACTION_NOTIFY_COMMIT_FINALIZE)

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltEnlistInTransaction (
    _In_ PFLT_INSTANCE Instance,
    _In_ PKTRANSACTION Transaction,
    _In_ PFLT_CONTEXT TransactionContext,
    _In_ NOTIFICATION_MASK NotificationMask
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltRollbackEnlistment (
    _In_ PFLT_INSTANCE Instance,
    _In_ PKTRANSACTION Transaction,
    _In_opt_ PFLT_CONTEXT TransactionContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltPrePrepareComplete (
    _In_ PFLT_INSTANCE Instance,
    _In_ PKTRANSACTION Transaction,
    _In_opt_ PFLT_CONTEXT TransactionContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltPrepareComplete (
    _In_ PFLT_INSTANCE Instance,
    _In_ PKTRANSACTION Transaction,
    _In_opt_ PFLT_CONTEXT TransactionContext
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltCommitComplete (
    _In_ PFLT_INSTANCE Instance,
    _In_ PKTRANSACTION Transaction,
    _In_opt_ PFLT_CONTEXT TransactionContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltCommitFinalizeComplete (
    _In_ PFLT_INSTANCE Instance,
    _In_ PKTRANSACTION Transaction,
    _In_opt_ PFLT_CONTEXT TransactionContext
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FLTAPI
FltRollbackComplete (
    _In_ PFLT_INSTANCE Instance,
    _In_ PKTRANSACTION Transaction,
    _In_opt_ PFLT_CONTEXT TransactionContext
    );

//
//  Some Kernel routines related to ECP manipulation
//      ZwCreateTransactionManager
//      ZwCreateResourceManager
//      TmEnableCallbacks
//      IoGetTransactionParameterBlock
//      TmCreateEnlistment
//      TmPrePrepareComplete
//      TmPrepareComplete
//      TmCommitComplete
//      TmRollbackComplete
//      TmRollbackEnlistment
//

#endif // FLT_MGR_LONGHORN



///////////////////////////////////////////////////////////////////////////////
//
//  Extra Create Parameter (ECP) support routines
//
///////////////////////////////////////////////////////////////////////////////

#if FLT_MGR_LONGHORN

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltAllocateExtraCreateParameterList (
    _In_ PFLT_FILTER Filter,
    _In_ FSRTL_ALLOCATE_ECPLIST_FLAGS Flags,
    _Outptr_ PECP_LIST *EcpList
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltAllocateExtraCreateParameter (
    _In_ PFLT_FILTER Filter,
    _In_ LPCGUID EcpType,
     ULONG SizeOfContext,
    _In_ FSRTL_ALLOCATE_ECP_FLAGS Flags,
    _In_opt_ PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
    _In_ ULONG PoolTag,
    _Outptr_ PVOID *EcpContext
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltInitExtraCreateParameterLookasideList (
    _In_ PFLT_FILTER Filter,
    _Inout_ PVOID Lookaside,
    _In_ FSRTL_ECP_LOOKASIDE_FLAGS Flags,
    _In_ SIZE_T Size,
    _In_ ULONG Tag
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltDeleteExtraCreateParameterLookasideList (
    _In_ PFLT_FILTER Filter,
    _Inout_ PVOID Lookaside,
    _In_ FSRTL_ECP_LOOKASIDE_FLAGS Flags
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltAllocateExtraCreateParameterFromLookasideList (
    _In_ PFLT_FILTER Filter,
    _In_ LPCGUID EcpType,
    _In_ ULONG SizeOfContext,
    _In_ FSRTL_ALLOCATE_ECP_FLAGS Flags,
    _In_opt_ PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
    _Inout_ PVOID LookasideList,
    _Outptr_ PVOID *EcpContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltInsertExtraCreateParameter (
    _In_ PFLT_FILTER Filter,
    _Inout_ PECP_LIST EcpList,
    _Inout_ PVOID EcpContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltFindExtraCreateParameter (
    _In_ PFLT_FILTER Filter,
    _In_ PECP_LIST EcpList,
    _In_ LPCGUID EcpType,
    _Outptr_opt_ PVOID *EcpContext,
    _Out_opt_ ULONG *EcpContextSize
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltRemoveExtraCreateParameter (
    _In_ PFLT_FILTER Filter,
    _Inout_ PECP_LIST EcpList,
    _In_ LPCGUID EcpType,
    _Outptr_ PVOID *EcpContext,
    _Out_opt_ ULONG *EcpContextSize
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltFreeExtraCreateParameterList (
    _In_ PFLT_FILTER Filter,
    _In_ PECP_LIST EcpList
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltFreeExtraCreateParameter (
    _In_ PFLT_FILTER Filter,
    _In_ PVOID EcpContext
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetEcpListFromCallbackData (
    _In_ PFLT_FILTER Filter,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _Outptr_result_maybenull_ PECP_LIST *EcpList
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltSetEcpListIntoCallbackData (
    _In_ PFLT_FILTER Filter,
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _In_ PECP_LIST EcpList
    );

_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FLTAPI
FltGetNextExtraCreateParameter (
    _In_ PFLT_FILTER Filter,
    _In_ PECP_LIST EcpList,
    _In_opt_ PVOID CurrentEcpContext,
    _Out_opt_ LPGUID NextEcpType,
    _Outptr_opt_ PVOID *NextEcpContext,
    _Out_opt_ ULONG *NextEcpContextSize
    );

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltAcknowledgeEcp (
    _In_ PFLT_FILTER Filter,
    _In_ PVOID EcpContext
    );

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltIsEcpAcknowledged (
    _In_ PFLT_FILTER Filter,
    _In_ PVOID EcpContext
    );

_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FLTAPI
FltIsEcpFromUserMode (
    _In_ PFLT_FILTER Filter,
    _In_ PVOID EcpContext
    );

//
//  Some Kernel routines related to ECP manipulation
//
//      FsRtlAllocateExtraCreateParameterList
//      FsRtlFreeExtraCreateParameterList
//      FsRtlAllocateExtraCreateParameter
//      FsRtlFreeExtraCreateParameter
//      FsRtlInitExtraCreateParameterLookasideList
//      FsRtlDeleteExtraCreateParameterLookasideList
//      FsRtlAllocateExtraCreateParameterFromLookasideList
//      FsRtlInsertExtraCreateParameter
//      FsRtlRemoveExtraCreateParameter
//      FsRtlGetEcpListFromIrp
//      FsRtlSetEcpListIntoIrp
//      FsRtlGetNextExtraCreateParameter
//      FsRtlAcknowledgeEcp
//      FsRtlIsEcpAcknowledged
//      FsRtlIsEcpFromUserMode
//

#endif // FLT_MGR_LONGHORN

#if FLT_MGR_WIN8

_IRQL_requires_max_(APC_LEVEL)
VOID
FLTAPI
FltPrepareToReuseEcp (
    _In_ PFLT_FILTER Filter,
    _In_ PVOID EcpContext
    );

//
//  Some Win8 kernel routines related to ECP manipulation
//
//      FsRtlPrepareToReuseEcp
//

#endif


///////////////////////////////////////////////////////////////////////////////
//
//  IoPriorityHint support routines
//
///////////////////////////////////////////////////////////////////////////////

#if FLT_MGR_LONGHORN

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltRetrieveIoPriorityInfo (
    _In_opt_ PFLT_CALLBACK_DATA Data,
    _In_opt_ PFILE_OBJECT FileObject,
    _In_opt_ PETHREAD Thread,
    _Inout_ PIO_PRIORITY_INFO PriorityInfo
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltApplyPriorityInfoThread(
    _In_ PIO_PRIORITY_INFO InputPriorityInfo,
    _Out_opt_ PIO_PRIORITY_INFO OutputPriorityInfo,
    _In_ PETHREAD Thread
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
IO_PRIORITY_HINT
FLTAPI
FltGetIoPriorityHint (
    _In_ PFLT_CALLBACK_DATA Data
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
IO_PRIORITY_HINT
FLTAPI
FltGetIoPriorityHintFromCallbackData (
    _In_ PFLT_CALLBACK_DATA Data
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltSetIoPriorityHintIntoCallbackData (
    _In_ PFLT_CALLBACK_DATA Data,
    _In_ IO_PRIORITY_HINT PriorityHint
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
IO_PRIORITY_HINT
FLTAPI
FltGetIoPriorityHintFromFileObject (
    _In_ PFILE_OBJECT FileObject
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltSetIoPriorityHintIntoFileObject (
    _In_ PFILE_OBJECT FileObject,
    _In_ IO_PRIORITY_HINT PriorityHint
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
IO_PRIORITY_HINT
FLTAPI
FltGetIoPriorityHintFromThread (
    _In_ PETHREAD Thread
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltSetIoPriorityHintIntoThread (
    _In_ PETHREAD Thread,
    _In_ IO_PRIORITY_HINT PriorityHint
    );

//
//  Some Kernel routines related to IoPriorityHint manipulation
//
//      IoInitializePriorityInfo
//      IoSetIoPriorityHint
//      IoGetIoPriorityHint
//      ZwSetInformationFile (FileIoPriorityHintInformation class)
//      ZwQueryInformationFile (FileIoPriorityHintInformation class)
//

#endif // FLT_MGR_LONGHORN


///////////////////////////////////////////////////////////////////////////////
//
//  Routines for activity ID management
//
///////////////////////////////////////////////////////////////////////////////

#if FLT_MGR_WIN8

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltGetActivityIdCallbackData(
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _Out_ LPGUID Guid
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltSetActivityIdCallbackData(
    _Inout_ PFLT_CALLBACK_DATA CallbackData,
    _In_opt_ LPCGUID Guid
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FLTAPI
FltPropagateActivityIdToThread(
    _In_ PFLT_CALLBACK_DATA CallbackData,
    _Inout_ LPGUID PropagateId,
    _Outptr_ LPCGUID *OriginalId
    );

//
//  Some Kernel routines related to activity ID management
//
//      IoGetActvityIdIrp
//      IoPropagateActivityIdThread
//      IoSetActivityIdIrp
//      IoSetActivityIdThread
//      IoClearActivityIdThread
//
//

#endif // FLT_MGR_WIN8



///////////////////////////////////////////////////////////////////////////////
//
//  Routines for getting/setting zeroing offset
//
///////////////////////////////////////////////////////////////////////////////


#if FLT_MGR_WINBLUE

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FltGetFsZeroingOffset(
    _In_ PFLT_CALLBACK_DATA Data,
    _Out_ PULONG ZeroingOffset
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FltSetFsZeroingOffsetRequired(
    _In_ PFLT_CALLBACK_DATA Data
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FltSetFsZeroingOffset(
    _In_ PFLT_CALLBACK_DATA Data,
    _In_ ULONG ZeroingOffset
    );

#endif


///////////////////////////////////////////////////////////////////////////////
//
//                      Debug support routines
//
///////////////////////////////////////////////////////////////////////////////

PCHAR
FLTAPI
FltGetIrpName (
    _In_ UCHAR IrpMajorCode
    );


///////////////////////////////////////////////////////////////////////////////
//
//  End of MAIN conditional compilation variables
//
///////////////////////////////////////////////////////////////////////////////

#else
#   pragma message("You are building for a target that does not have FilterManager Support!")
#endif // FLT_MGR_BASELINE

#ifdef __cplusplus
}       //  Balance extern "C" above
#endif

#endif  //__FLTKERNEL__

