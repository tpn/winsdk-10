/*++ BUILD Version: 0008    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    ntioapi_x.h

Abstract:

    This module contains the user APIs for the NT I/O system.

    This module may contain definitions that are exposed in kit headers
    for use by external developers.

--*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4201) // nonstandard extension used : nameless struct/union
#pragma warning(disable:4668) // #if not_defined treated as #if 0
#pragma warning(disable:4820) // padding added after data member
#endif

// begin_wdm
// begin_winnt
// begin_access

//
// Define access rights to files and directories
//

//
// The FILE_READ_DATA and FILE_WRITE_DATA constants are also defined in
// devioctl.h as FILE_READ_ACCESS and FILE_WRITE_ACCESS. The values for these
// constants *MUST* always be in sync.
// The values are redefined in devioctl.h because they must be available to
// both DOS and NT.
//

#define FILE_READ_DATA            ( 0x0001 )    // file & pipe
#define FILE_LIST_DIRECTORY       ( 0x0001 )    // directory

#define FILE_WRITE_DATA           ( 0x0002 )    // file & pipe
#define FILE_ADD_FILE             ( 0x0002 )    // directory

#define FILE_APPEND_DATA          ( 0x0004 )    // file
#define FILE_ADD_SUBDIRECTORY     ( 0x0004 )    // directory
#define FILE_CREATE_PIPE_INSTANCE ( 0x0004 )    // named pipe


#define FILE_READ_EA              ( 0x0008 )    // file & directory

#define FILE_WRITE_EA             ( 0x0010 )    // file & directory

#define FILE_EXECUTE              ( 0x0020 )    // file
#define FILE_TRAVERSE             ( 0x0020 )    // directory

#define FILE_DELETE_CHILD         ( 0x0040 )    // directory

#define FILE_READ_ATTRIBUTES      ( 0x0080 )    // all

#define FILE_WRITE_ATTRIBUTES     ( 0x0100 )    // all

#define FILE_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED | SYNCHRONIZE | 0x1FF)

#define FILE_GENERIC_READ         (STANDARD_RIGHTS_READ     |\
                                   FILE_READ_DATA           |\
                                   FILE_READ_ATTRIBUTES     |\
                                   FILE_READ_EA             |\
                                   SYNCHRONIZE)


#define FILE_GENERIC_WRITE        (STANDARD_RIGHTS_WRITE    |\
                                   FILE_WRITE_DATA          |\
                                   FILE_WRITE_ATTRIBUTES    |\
                                   FILE_WRITE_EA            |\
                                   FILE_APPEND_DATA         |\
                                   SYNCHRONIZE)


#define FILE_GENERIC_EXECUTE      (STANDARD_RIGHTS_EXECUTE  |\
                                   FILE_READ_ATTRIBUTES     |\
                                   FILE_EXECUTE             |\
                                   SYNCHRONIZE)

// end_access
// end_winnt

//
// Define share access rights to files and directories
//

#define FILE_SHARE_READ                 0x00000001  // winnt
#define FILE_SHARE_WRITE                0x00000002  // winnt
#define FILE_SHARE_DELETE               0x00000004  // winnt
#define FILE_SHARE_VALID_FLAGS          0x00000007

//
// Define the file attributes values
//
// Note:  0x00000008 is reserved for use for the old DOS VOLID (volume ID)
//        and is therefore not considered valid in NT.
//
// Note:  Note also that the order of these flags is set to allow both the
//        FAT and the Pinball File Systems to directly set the attributes
//        flags in attributes words without having to pick each flag out
//        individually.  The order of these flags should not be changed!
//

#define FILE_ATTRIBUTE_READONLY             0x00000001  // winnt
#define FILE_ATTRIBUTE_HIDDEN               0x00000002  // winnt
#define FILE_ATTRIBUTE_SYSTEM               0x00000004  // winnt
//OLD DOS VOLID                             0x00000008

#define FILE_ATTRIBUTE_DIRECTORY            0x00000010  // winnt
#define FILE_ATTRIBUTE_ARCHIVE              0x00000020  // winnt
#define FILE_ATTRIBUTE_DEVICE               0x00000040  // winnt
#define FILE_ATTRIBUTE_NORMAL               0x00000080  // winnt

#define FILE_ATTRIBUTE_TEMPORARY            0x00000100  // winnt
#define FILE_ATTRIBUTE_SPARSE_FILE          0x00000200  // winnt
#define FILE_ATTRIBUTE_REPARSE_POINT        0x00000400  // winnt
#define FILE_ATTRIBUTE_COMPRESSED           0x00000800  // winnt

#define FILE_ATTRIBUTE_OFFLINE              0x00001000  // winnt
#define FILE_ATTRIBUTE_NOT_CONTENT_INDEXED  0x00002000  // winnt
#define FILE_ATTRIBUTE_ENCRYPTED            0x00004000  // winnt

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define FILE_ATTRIBUTE_INTEGRITY_STREAM     0x00008000  // winnt

#endif

#define FILE_ATTRIBUTE_VIRTUAL              0x00010000  // winnt

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define FILE_ATTRIBUTE_NO_SCRUB_DATA        0x00020000  // winnt

#endif

#if (_WIN32_WINNT > _WIN32_WINNT_WINBLUE || (_WIN32_WINNT == _WIN32_WINNT_WINBLUE && defined(WINBLUE_KBSPRING14)))

#define FILE_ATTRIBUTE_EA                   0x00040000  // winnt

#endif

#if (_WIN32_WINNT < _WIN32_WINNT_WIN8)

#define FILE_ATTRIBUTE_VALID_FLAGS          0x00007fb7
#define FILE_ATTRIBUTE_VALID_SET_FLAGS      0x000031a7

#else

#define FILE_ATTRIBUTE_VALID_FLAGS          0x0002ffb7
#define FILE_ATTRIBUTE_VALID_SET_FLAGS      0x000231a7

#endif

// begin_wudfwdm
//
// Define the create disposition values
//

#define FILE_SUPERSEDE                  0x00000000
#define FILE_OPEN                       0x00000001
#define FILE_CREATE                     0x00000002
#define FILE_OPEN_IF                    0x00000003
#define FILE_OVERWRITE                  0x00000004
#define FILE_OVERWRITE_IF               0x00000005
#define FILE_MAXIMUM_DISPOSITION        0x00000005

//
// Define the create/open option flags
//

#define FILE_DIRECTORY_FILE                     0x00000001
#define FILE_WRITE_THROUGH                      0x00000002
#define FILE_SEQUENTIAL_ONLY                    0x00000004
#define FILE_NO_INTERMEDIATE_BUFFERING          0x00000008

#define FILE_SYNCHRONOUS_IO_ALERT               0x00000010
#define FILE_SYNCHRONOUS_IO_NONALERT            0x00000020
#define FILE_NON_DIRECTORY_FILE                 0x00000040
#define FILE_CREATE_TREE_CONNECTION             0x00000080

#define FILE_COMPLETE_IF_OPLOCKED               0x00000100
#define FILE_NO_EA_KNOWLEDGE                    0x00000200
#define FILE_OPEN_REMOTE_INSTANCE               0x00000400
#define FILE_RANDOM_ACCESS                      0x00000800

#define FILE_DELETE_ON_CLOSE                    0x00001000
#define FILE_OPEN_BY_FILE_ID                    0x00002000
#define FILE_OPEN_FOR_BACKUP_INTENT             0x00004000
#define FILE_NO_COMPRESSION                     0x00008000

#if (NTDDI_VERSION >= NTDDI_WIN7)
#define FILE_OPEN_REQUIRING_OPLOCK              0x00010000
#define FILE_DISALLOW_EXCLUSIVE                 0x00020000
#endif /* NTDDI_VERSION >= NTDDI_WIN7 */
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define FILE_SESSION_AWARE                      0x00040000
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#define FILE_RESERVE_OPFILTER                   0x00100000
#define FILE_OPEN_REPARSE_POINT                 0x00200000
#define FILE_OPEN_NO_RECALL                     0x00400000
#define FILE_OPEN_FOR_FREE_SPACE_QUERY          0x00800000

// end_wudfwdm
//
//  The FILE_VALID_OPTION_FLAGS mask cannot be expanded to include the
//  highest 8 bits of the DWORD because those are used to represent the
//  create disposition in the IO Request Packet when sending information
//  to the file system
//
#define FILE_VALID_OPTION_FLAGS                 0x00ffffff
#define FILE_VALID_PIPE_OPTION_FLAGS            0x00000032
#define FILE_VALID_MAILSLOT_OPTION_FLAGS        0x00000032
#define FILE_VALID_SET_FLAGS                    0x00000036

//
// Define the I/O status information return values for NtCreateFile/NtOpenFile
//

#define FILE_SUPERSEDED                 0x00000000
#define FILE_OPENED                     0x00000001
#define FILE_CREATED                    0x00000002
#define FILE_OVERWRITTEN                0x00000003
#define FILE_EXISTS                     0x00000004
#define FILE_DOES_NOT_EXIST             0x00000005

// end_wdm
// begin_ntifs

//
// Define the I/O status information return values for requests for oplocks
// via NtFsControlFile
//

#define FILE_OPLOCK_BROKEN_TO_LEVEL_2   0x00000007
#define FILE_OPLOCK_BROKEN_TO_NONE      0x00000008

//
// Define the I/O status information return values for NtCreateFile/NtOpenFile
// when the sharing access fails but a batch oplock break is in progress
//

#define FILE_OPBATCH_BREAK_UNDERWAY     0x00000009

//
// Define the filter flags for NtNotifyChangeDirectoryFile
//

#define FILE_NOTIFY_CHANGE_FILE_NAME    0x00000001   // winnt
#define FILE_NOTIFY_CHANGE_DIR_NAME     0x00000002   // winnt
#define FILE_NOTIFY_CHANGE_NAME         0x00000003
#define FILE_NOTIFY_CHANGE_ATTRIBUTES   0x00000004   // winnt
#define FILE_NOTIFY_CHANGE_SIZE         0x00000008   // winnt
#define FILE_NOTIFY_CHANGE_LAST_WRITE   0x00000010   // winnt
#define FILE_NOTIFY_CHANGE_LAST_ACCESS  0x00000020   // winnt
#define FILE_NOTIFY_CHANGE_CREATION     0x00000040   // winnt
#define FILE_NOTIFY_CHANGE_EA           0x00000080
#define FILE_NOTIFY_CHANGE_SECURITY     0x00000100   // winnt
#define FILE_NOTIFY_CHANGE_STREAM_NAME  0x00000200
#define FILE_NOTIFY_CHANGE_STREAM_SIZE  0x00000400
#define FILE_NOTIFY_CHANGE_STREAM_WRITE 0x00000800
#define FILE_NOTIFY_VALID_MASK          0x00000fff

//
// Define the file action type codes for NtNotifyChangeDirectoryFile
//

#define FILE_ACTION_ADDED                   0x00000001   // winnt
#define FILE_ACTION_REMOVED                 0x00000002   // winnt
#define FILE_ACTION_MODIFIED                0x00000003   // winnt
#define FILE_ACTION_RENAMED_OLD_NAME        0x00000004   // winnt
#define FILE_ACTION_RENAMED_NEW_NAME        0x00000005   // winnt
#define FILE_ACTION_ADDED_STREAM            0x00000006
#define FILE_ACTION_REMOVED_STREAM          0x00000007
#define FILE_ACTION_MODIFIED_STREAM         0x00000008
#define FILE_ACTION_REMOVED_BY_DELETE       0x00000009
#define FILE_ACTION_ID_NOT_TUNNELLED        0x0000000A
#define FILE_ACTION_TUNNELLED_ID_COLLISION  0x0000000B

//
// Define the NamedPipeType flags for NtCreateNamedPipeFile
//

#define FILE_PIPE_BYTE_STREAM_TYPE          0x00000000
#define FILE_PIPE_MESSAGE_TYPE              0x00000001

#define FILE_PIPE_ACCEPT_REMOTE_CLIENTS     0x00000000
#define FILE_PIPE_REJECT_REMOTE_CLIENTS     0x00000002

#define FILE_PIPE_TYPE_VALID_MASK           0x00000003

//
// Define the CompletionMode flags for NtCreateNamedPipeFile
//

#define FILE_PIPE_QUEUE_OPERATION       0x00000000
#define FILE_PIPE_COMPLETE_OPERATION    0x00000001

//
// Define the ReadMode flags for NtCreateNamedPipeFile
//

#define FILE_PIPE_BYTE_STREAM_MODE      0x00000000
#define FILE_PIPE_MESSAGE_MODE          0x00000001

//
// Define the NamedPipeConfiguration flags for NtQueryInformation
//

#define FILE_PIPE_INBOUND               0x00000000
#define FILE_PIPE_OUTBOUND              0x00000001
#define FILE_PIPE_FULL_DUPLEX           0x00000002

//
// Define the NamedPipeState flags for NtQueryInformation
//

#define FILE_PIPE_DISCONNECTED_STATE    0x00000001
#define FILE_PIPE_LISTENING_STATE       0x00000002
#define FILE_PIPE_CONNECTED_STATE       0x00000003
#define FILE_PIPE_CLOSING_STATE         0x00000004

//
// Define the NamedPipeEnd flags for NtQueryInformation
//

#define FILE_PIPE_CLIENT_END            0x00000000
#define FILE_PIPE_SERVER_END            0x00000001

// end_ntifs
//
// Special value for NextMessageSize to indicate that there is no next
// message.
//

#define MAILSLOT_NO_MESSAGE             ((ULONG)-1) // winnt

//
// Special value for mailslot size creation to indicate that MSFS should
// choose the size of the mailslot buffer.
//

#define MAILSLOT_SIZE_AUTO              0

//
// Special value for read timeout to indicate that mailslot reads should
// never timeout.
//

#define MAILSLOT_WAIT_FOREVER           ((ULONG)-1) // winnt

// begin_wdm
//
// Define special ByteOffset parameters for read and write operations
//

#define FILE_WRITE_TO_END_OF_FILE       0xffffffff
#define FILE_USE_FILE_POINTER_POSITION  0xfffffffe

//
// Define alignment requirement values
//

#define FILE_BYTE_ALIGNMENT             0x00000000
#define FILE_WORD_ALIGNMENT             0x00000001
#define FILE_LONG_ALIGNMENT             0x00000003
#define FILE_QUAD_ALIGNMENT             0x00000007
#define FILE_OCTA_ALIGNMENT             0x0000000f
#define FILE_32_BYTE_ALIGNMENT          0x0000001f
#define FILE_64_BYTE_ALIGNMENT          0x0000003f
#define FILE_128_BYTE_ALIGNMENT         0x0000007f
#define FILE_256_BYTE_ALIGNMENT         0x000000ff
#define FILE_512_BYTE_ALIGNMENT         0x000001ff

//
// Define the maximum length of a filename string
//

#define MAXIMUM_FILENAME_LENGTH         256

// end_wdm
// begin_ntifs

//
// Define the file system attributes flags
//

#define FILE_CASE_SENSITIVE_SEARCH          0x00000001  // winnt
#define FILE_CASE_PRESERVED_NAMES           0x00000002  // winnt
#define FILE_UNICODE_ON_DISK                0x00000004  // winnt
#define FILE_PERSISTENT_ACLS                0x00000008  // winnt
#define FILE_FILE_COMPRESSION               0x00000010  // winnt
#define FILE_VOLUME_QUOTAS                  0x00000020  // winnt
#define FILE_SUPPORTS_SPARSE_FILES          0x00000040  // winnt
#define FILE_SUPPORTS_REPARSE_POINTS        0x00000080  // winnt
#define FILE_SUPPORTS_REMOTE_STORAGE        0x00000100  // winnt
#define FILE_VOLUME_IS_COMPRESSED           0x00008000  // winnt
#define FILE_SUPPORTS_OBJECT_IDS            0x00010000  // winnt
#define FILE_SUPPORTS_ENCRYPTION            0x00020000  // winnt
#define FILE_NAMED_STREAMS                  0x00040000  // winnt
#define FILE_READ_ONLY_VOLUME               0x00080000  // winnt
#define FILE_SEQUENTIAL_WRITE_ONCE          0x00100000  // winnt
#define FILE_SUPPORTS_TRANSACTIONS          0x00200000  // winnt
#define FILE_SUPPORTS_HARD_LINKS            0x00400000  // winnt
#define FILE_SUPPORTS_EXTENDED_ATTRIBUTES   0x00800000  // winnt
//
//  When enabled this attribute implies that the FileID's for the supported
//  file system are also durable.  This means the FileID will not change due
//  to other file system operations like rename or defrag.  If a file
//  is deleted and re-created the ID will change.
//
#define FILE_SUPPORTS_OPEN_BY_FILE_ID       0x01000000  // winnt
#define FILE_SUPPORTS_USN_JOURNAL           0x02000000  // winnt
#define FILE_SUPPORTS_INTEGRITY_STREAMS     0x04000000  // winnt
#define FILE_SUPPORTS_BLOCK_REFCOUNTING     0x08000000  // winnt
#define FILE_SUPPORTS_SPARSE_VDL            0x10000000  // winnt

#define FILE_INVALID_FILE_ID               ((LONGLONG)-1LL) // winnt

typedef struct _FILE_ID_128 {                               // winnt
    UCHAR Identifier[16];                                   // winnt
} FILE_ID_128, *PFILE_ID_128;                               // winnt

//
// Define the flags for NtSet(Query)EaFile service structure entries
//

#define FILE_NEED_EA                    0x00000080

//
// Define EA type values
//

#define FILE_EA_TYPE_BINARY             0xfffe
#define FILE_EA_TYPE_ASCII              0xfffd
#define FILE_EA_TYPE_BITMAP             0xfffb
#define FILE_EA_TYPE_METAFILE           0xfffa
#define FILE_EA_TYPE_ICON               0xfff9
#define FILE_EA_TYPE_EA                 0xffee
#define FILE_EA_TYPE_MVMT               0xffdf
#define FILE_EA_TYPE_MVST               0xffde
#define FILE_EA_TYPE_ASN1               0xffdd
#define FILE_EA_TYPE_FAMILY_IDS         0xff01

// end_ntifs
// begin_wdm
// begin_wudfpwdm
//
// Define the various device characteristics flags
//

#define FILE_REMOVABLE_MEDIA                        0x00000001
#define FILE_READ_ONLY_DEVICE                       0x00000002
#define FILE_FLOPPY_DISKETTE                        0x00000004
#define FILE_WRITE_ONCE_MEDIA                       0x00000008
#define FILE_REMOTE_DEVICE                          0x00000010
#define FILE_DEVICE_IS_MOUNTED                      0x00000020
#define FILE_VIRTUAL_VOLUME                         0x00000040
#define FILE_AUTOGENERATED_DEVICE_NAME              0x00000080
#define FILE_DEVICE_SECURE_OPEN                     0x00000100
#define FILE_CHARACTERISTIC_PNP_DEVICE              0x00000800
#define FILE_CHARACTERISTIC_TS_DEVICE               0x00001000
#define FILE_CHARACTERISTIC_WEBDAV_DEVICE           0x00002000
#define FILE_CHARACTERISTIC_CSV                     0x00010000
#define FILE_DEVICE_ALLOW_APPCONTAINER_TRAVERSAL    0x00020000
#define FILE_PORTABLE_DEVICE                        0x00040000

// end_wudfpwdm
// end_wdm
// begin_ntddk

#if (NTDDI_VERSION >= NTDDI_WIN7)
#define FILE_CHARACTERISTICS_EXPECT_ORDERLY_REMOVAL_EX     0x00004000
#define FILE_CHARACTERISTICS_EXPECT_SURPRISE_REMOVAL_EX    0x00008000
#define FILE_CHARACTERISTICS_REMOVAL_POLICY_MASK_EX \
    (FILE_CHARACTERISTICS_EXPECT_ORDERLY_REMOVAL_EX | \
     FILE_CHARACTERISTICS_EXPECT_SURPRISE_REMOVAL_EX)

#define FILE_CHARACTERISTICS_EXPECT_ORDERLY_REMOVAL_DEPRECATED 0x00000200
#define FILE_CHARACTERISTICS_EXPECT_SURPRISE_REMOVAL_DEPRECATED 0x00000300
#define FILE_CHARACTERISTICS_REMOVAL_POLICY_MASK_DEPRECATED 0x00000300

#else
#define FILE_CHARACTERISTICS_EXPECT_ORDERLY_REMOVAL     0x00000200
#define FILE_CHARACTERISTICS_EXPECT_SURPRISE_REMOVAL    0x00000300
#define FILE_CHARACTERISTICS_REMOVAL_POLICY_MASK        0x00000300

#define FILE_CHARACTERISTICS_EXPECT_ORDERLY_REMOVAL_EX FILE_CHARACTERISTICS_EXPECT_ORDERLY_REMOVAL
#define FILE_CHARACTERISTICS_EXPECT_SURPRISE_REMOVAL_EX FILE_CHARACTERISTICS_EXPECT_SURPRISE_REMOVAL
#define FILE_CHARACTERISTICS_REMOVAL_POLICY_MASK_EX FILE_CHARACTERISTICS_REMOVAL_POLICY_MASK
#endif

//
// flags specified here will be propagated up and down a device stack
// after FDO and all filter devices are added, but before the device
// stack is started
//

#define FILE_CHARACTERISTICS_PROPAGATED (   FILE_REMOVABLE_MEDIA   | \
                                            FILE_READ_ONLY_DEVICE  | \
                                            FILE_FLOPPY_DISKETTE   | \
                                            FILE_WRITE_ONCE_MEDIA  | \
                                            FILE_DEVICE_SECURE_OPEN | \
                                            FILE_CHARACTERISTIC_CSV | \
                                            FILE_PORTABLE_DEVICE )

// end_ntddk

// begin_wdm
// begin_wudfwdm
//
// Define the base asynchronous I/O argument types
//

typedef struct _IO_STATUS_BLOCK {
    union {
        NTSTATUS Status;
        PVOID Pointer;
    } DUMMYUNIONNAME;

    ULONG_PTR Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;

// end_wudfwdm

typedef struct _IO_STATUS_BLOCK32 {
    NTSTATUS Status;
    ULONG Information;
} IO_STATUS_BLOCK32, *PIO_STATUS_BLOCK32;

//
// Define an Asynchronous Procedure Call from I/O viewpoint
//

typedef
VOID
(NTAPI *PIO_APC_ROUTINE) (
    _In_ PVOID ApcContext,
    _In_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG Reserved
    );

#define PIO_APC_ROUTINE_DEFINED

//
// Define the session states and events
//
typedef enum _IO_SESSION_EVENT {
    IoSessionEventIgnore         = 0,
    IoSessionEventCreated,      // 1
    IoSessionEventTerminated,   // 2
    IoSessionEventConnected,    // 3
    IoSessionEventDisconnected, // 4
    IoSessionEventLogon,        // 5
    IoSessionEventLogoff,       // 6
    IoSessionEventMax
} IO_SESSION_EVENT, *PIO_SESSION_EVENT;

typedef enum _IO_SESSION_STATE {
    IoSessionStateCreated                = 1,
    IoSessionStateInitialized,          // 2
    IoSessionStateConnected,            // 3
    IoSessionStateDisconnected,         // 4
    IoSessionStateDisconnectedLoggedOn, // 5
    IoSessionStateLoggedOn,             // 6
    IoSessionStateLoggedOff,            // 7
    IoSessionStateTerminated,           // 8
    IoSessionStateMax
} IO_SESSION_STATE, *PIO_SESSION_STATE;

//
// Define masks that determine which events a driver that registers for
// callbacks care about
//

#define IO_SESSION_STATE_ALL_EVENTS             0xffffffff
#define IO_SESSION_STATE_CREATION_EVENT         0x00000001
#define IO_SESSION_STATE_TERMINATION_EVENT      0x00000002
#define IO_SESSION_STATE_CONNECT_EVENT          0x00000004
#define IO_SESSION_STATE_DISCONNECT_EVENT       0x00000008
#define IO_SESSION_STATE_LOGON_EVENT            0x00000010
#define IO_SESSION_STATE_LOGOFF_EVENT           0x00000020

#define IO_SESSION_STATE_VALID_EVENT_MASK       0x0000003f

#define IO_SESSION_MAX_PAYLOAD_SIZE             256L

//
// Payload structures
//

// IoSessionEventConnected
typedef struct _IO_SESSION_CONNECT_INFO {
    ULONG SessionId;
    BOOLEAN LocalSession;
} IO_SESSION_CONNECT_INFO, *PIO_SESSION_CONNECT_INFO;


// end_wdm

// begin_winnt begin_ntifs

//
// Define the file notification information structure
//

typedef struct _FILE_NOTIFY_INFORMATION {
    ULONG NextEntryOffset;
    ULONG Action;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NOTIFY_INFORMATION, *PFILE_NOTIFY_INFORMATION;

// end_winnt end_ntifs

// begin_wdm
//
// Define the file information class values
//
// WARNING:  The order of the following values are assumed by the I/O system.
//           Any changes made here should be reflected there as well.
//

typedef enum _FILE_INFORMATION_CLASS {
    FileDirectoryInformation         = 1,
    FileFullDirectoryInformation,   // 2
    FileBothDirectoryInformation,   // 3
    FileBasicInformation,           // 4
    FileStandardInformation,        // 5
    FileInternalInformation,        // 6
    FileEaInformation,              // 7
    FileAccessInformation,          // 8
    FileNameInformation,            // 9
    FileRenameInformation,          // 10
    FileLinkInformation,            // 11
    FileNamesInformation,           // 12
    FileDispositionInformation,     // 13
    FilePositionInformation,        // 14
    FileFullEaInformation,          // 15
    FileModeInformation,            // 16
    FileAlignmentInformation,       // 17
    FileAllInformation,             // 18
    FileAllocationInformation,      // 19
    FileEndOfFileInformation,       // 20
    FileAlternateNameInformation,   // 21
    FileStreamInformation,          // 22
    FilePipeInformation,            // 23
    FilePipeLocalInformation,       // 24
    FilePipeRemoteInformation,      // 25
    FileMailslotQueryInformation,   // 26
    FileMailslotSetInformation,     // 27
    FileCompressionInformation,     // 28
    FileObjectIdInformation,        // 29
    FileCompletionInformation,      // 30
    FileMoveClusterInformation,     // 31
    FileQuotaInformation,           // 32
    FileReparsePointInformation,    // 33
    FileNetworkOpenInformation,     // 34
    FileAttributeTagInformation,    // 35
    FileTrackingInformation,        // 36
    FileIdBothDirectoryInformation, // 37
    FileIdFullDirectoryInformation, // 38
    FileValidDataLengthInformation, // 39
    FileShortNameInformation,       // 40
    FileIoCompletionNotificationInformation, // 41
    FileIoStatusBlockRangeInformation,       // 42
    FileIoPriorityHintInformation,           // 43
    FileSfioReserveInformation,              // 44
    FileSfioVolumeInformation,               // 45
    FileHardLinkInformation,                 // 46
    FileProcessIdsUsingFileInformation,      // 47
    FileNormalizedNameInformation,           // 48
    FileNetworkPhysicalNameInformation,      // 49
    FileIdGlobalTxDirectoryInformation,      // 50
    FileIsRemoteDeviceInformation,           // 51
    FileUnusedInformation,                   // 52
    FileNumaNodeInformation,                 // 53
    FileStandardLinkInformation,             // 54
    FileRemoteProtocolInformation,           // 55

        //
        //  These are special versions of these operations (defined earlier)
        //  which can be used by kernel mode drivers only to bypass security
        //  access checks for Rename and HardLink operations.  These operations
        //  are only recognized by the IOManager, a file system should never
        //  receive these.
        //
    FileRenameInformationBypassAccessCheck,  // 56
    FileLinkInformationBypassAccessCheck,    // 57
    FileVolumeNameInformation,               // 58
    FileIdInformation,                       // 59
    FileIdExtdDirectoryInformation,          // 60
    FileReplaceCompletionInformation,        // 61
    FileHardLinkFullIdInformation,           // 62
    FileIdExtdBothDirectoryInformation,      // 63
    FileMaximumInformation
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;

//
// Define the various structures which are returned on query operations
//

// end_wdm
// begin_ntifs

//
// NtQueryDirectoryFile return types:
//
//      FILE_DIRECTORY_INFORMATION
//      FILE_FULL_DIR_INFORMATION
//      FILE_ID_FULL_DIR_INFORMATION
//      FILE_BOTH_DIR_INFORMATION
//      FILE_ID_BOTH_DIR_INFORMATION
//      FILE_NAMES_INFORMATION
//      FILE_ID_EXTD_DIR_INFORMATION
//      FILE_OBJECTID_INFORMATION
//

typedef struct _FILE_DIRECTORY_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_DIRECTORY_INFORMATION, *PFILE_DIRECTORY_INFORMATION;

typedef struct _FILE_FULL_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    WCHAR FileName[1];
} FILE_FULL_DIR_INFORMATION, *PFILE_FULL_DIR_INFORMATION;

typedef struct _FILE_ID_FULL_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    LARGE_INTEGER FileId;
    WCHAR FileName[1];
} FILE_ID_FULL_DIR_INFORMATION, *PFILE_ID_FULL_DIR_INFORMATION;

typedef struct _FILE_BOTH_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    WCHAR FileName[1];
} FILE_BOTH_DIR_INFORMATION, *PFILE_BOTH_DIR_INFORMATION;

typedef struct _FILE_ID_BOTH_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    LARGE_INTEGER FileId;
    WCHAR FileName[1];
} FILE_ID_BOTH_DIR_INFORMATION, *PFILE_ID_BOTH_DIR_INFORMATION;

typedef struct _FILE_NAMES_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NAMES_INFORMATION, *PFILE_NAMES_INFORMATION;

typedef struct _FILE_ID_GLOBAL_TX_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    LARGE_INTEGER FileId;
    GUID LockingTransactionId;
    ULONG TxInfoFlags;
    WCHAR FileName[1];
} FILE_ID_GLOBAL_TX_DIR_INFORMATION, *PFILE_ID_GLOBAL_TX_DIR_INFORMATION;

#define FILE_ID_GLOBAL_TX_DIR_INFO_FLAG_WRITELOCKED         0x00000001
#define FILE_ID_GLOBAL_TX_DIR_INFO_FLAG_VISIBLE_TO_TX       0x00000002
#define FILE_ID_GLOBAL_TX_DIR_INFO_FLAG_VISIBLE_OUTSIDE_TX  0x00000004

typedef struct _FILE_ID_EXTD_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    ULONG ReparsePointTag;
    FILE_ID_128 FileId;
    WCHAR FileName[1];
} FILE_ID_EXTD_DIR_INFORMATION, *PFILE_ID_EXTD_DIR_INFORMATION;

typedef struct _FILE_ID_EXTD_BOTH_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    ULONG ReparsePointTag;
    FILE_ID_128 FileId;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    WCHAR FileName[1];
} FILE_ID_EXTD_BOTH_DIR_INFORMATION, *PFILE_ID_EXTD_BOTH_DIR_INFORMATION;

typedef struct _FILE_OBJECTID_INFORMATION {
    LONGLONG FileReference;
    UCHAR ObjectId[16];
    union {
        struct {
            UCHAR BirthVolumeId[16];
            UCHAR BirthObjectId[16];
            UCHAR DomainId[16];
        } DUMMYSTRUCTNAME;
        UCHAR ExtendedInfo[48];
    } DUMMYUNIONNAME;
} FILE_OBJECTID_INFORMATION, *PFILE_OBJECTID_INFORMATION;

//
//  The following constants provide addition meta characters to fully
//  support the more obscure aspects of DOS wild card processing.
//

#define ANSI_DOS_STAR   ('<')
#define ANSI_DOS_QM     ('>')
#define ANSI_DOS_DOT    ('"')

#define DOS_STAR        (L'<')
#define DOS_QM          (L'>')
#define DOS_DOT         (L'"')

//
// NtQuery(Set)InformationFile return types:
//
//      FILE_BASIC_INFORMATION
//      FILE_STANDARD_INFORMATION
//      FILE_INTERNAL_INFORMATION
//      FILE_EA_INFORMATION
//      FILE_ACCESS_INFORMATION
//      FILE_POSITION_INFORMATION
//      FILE_MODE_INFORMATION
//      FILE_ALIGNMENT_INFORMATION
//      FILE_NAME_INFORMATION
//      FILE_ALL_INFORMATION
//
//      FILE_NETWORK_OPEN_INFORMATION
//
//      FILE_ALLOCATION_INFORMATION
//      FILE_COMPRESSION_INFORMATION
//      FILE_DISPOSITION_INFORMATION
//      FILE_END_OF_FILE_INFORMATION
//      FILE_LINK_INFORMATION
//      FILE_MOVE_CLUSTER_INFORMATION
//      FILE_RENAME_INFORMATION
//      FILE_SHORT_NAME_INFORMATION
//      FILE_STREAM_INFORMATION
//      FILE_COMPLETION_INFORMATION
//
//      FILE_PIPE_INFORMATION
//      FILE_PIPE_LOCAL_INFORMATION
//      FILE_PIPE_REMOTE_INFORMATION
//
//      FILE_MAILSLOT_QUERY_INFORMATION
//      FILE_MAILSLOT_SET_INFORMATION
//      FILE_REPARSE_POINT_INFORMATION
//
//      FILE_NETWORK_PHYSICAL_NAME_INFORMATION
//

// end_ntifs
// begin_wdm
typedef struct _FILE_BASIC_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION;

typedef struct _FILE_STANDARD_INFORMATION {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
typedef struct _FILE_STANDARD_INFORMATION_EX {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
    BOOLEAN AlternateStream;
    BOOLEAN MetadataAttribute;
} FILE_STANDARD_INFORMATION_EX, *PFILE_STANDARD_INFORMATION_EX;
#endif

// end_wdm
// begin_ntifs

typedef struct _FILE_INTERNAL_INFORMATION {
    LARGE_INTEGER IndexNumber;
} FILE_INTERNAL_INFORMATION, *PFILE_INTERNAL_INFORMATION;

typedef struct _FILE_ID_INFORMATION {
    ULONGLONG VolumeSerialNumber;
    FILE_ID_128 FileId;
} FILE_ID_INFORMATION, *PFILE_ID_INFORMATION;

typedef struct _FILE_EA_INFORMATION {
    ULONG EaSize;
} FILE_EA_INFORMATION, *PFILE_EA_INFORMATION;

typedef struct _FILE_ACCESS_INFORMATION {
    ACCESS_MASK AccessFlags;
} FILE_ACCESS_INFORMATION, *PFILE_ACCESS_INFORMATION;

// end_ntifs
// begin_wdm

typedef struct _FILE_POSITION_INFORMATION {
    LARGE_INTEGER CurrentByteOffset;
} FILE_POSITION_INFORMATION, *PFILE_POSITION_INFORMATION;

// end_wdm
// begin_ntifs
typedef struct _FILE_MODE_INFORMATION {
    ULONG Mode;
} FILE_MODE_INFORMATION, *PFILE_MODE_INFORMATION;

// end_ntifs
// begin_ntddk

typedef struct _FILE_ALIGNMENT_INFORMATION {
    ULONG AlignmentRequirement;
} FILE_ALIGNMENT_INFORMATION, *PFILE_ALIGNMENT_INFORMATION;

//
// This is also used for FileNormalizedNameInformation
//

typedef struct _FILE_NAME_INFORMATION {
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NAME_INFORMATION, *PFILE_NAME_INFORMATION;

// end_ntddk
// begin_ntifs
typedef struct _FILE_ALL_INFORMATION {
    FILE_BASIC_INFORMATION BasicInformation;
    FILE_STANDARD_INFORMATION StandardInformation;
    FILE_INTERNAL_INFORMATION InternalInformation;
    FILE_EA_INFORMATION EaInformation;
    FILE_ACCESS_INFORMATION AccessInformation;
    FILE_POSITION_INFORMATION PositionInformation;
    FILE_MODE_INFORMATION ModeInformation;
    FILE_ALIGNMENT_INFORMATION AlignmentInformation;
    FILE_NAME_INFORMATION NameInformation;
} FILE_ALL_INFORMATION, *PFILE_ALL_INFORMATION;

// end_ntifs
// begin_wdm

typedef struct _FILE_NETWORK_OPEN_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION;

// end_wdm
// begin_ntddk
typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION {
    ULONG FileAttributes;
    ULONG ReparseTag;
} FILE_ATTRIBUTE_TAG_INFORMATION, *PFILE_ATTRIBUTE_TAG_INFORMATION;

// end_ntddk
// begin_ntifs

typedef struct _FILE_ALLOCATION_INFORMATION {
    LARGE_INTEGER AllocationSize;
} FILE_ALLOCATION_INFORMATION, *PFILE_ALLOCATION_INFORMATION;


typedef struct _FILE_COMPRESSION_INFORMATION {
    LARGE_INTEGER CompressedFileSize;
    USHORT CompressionFormat;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved[3];
} FILE_COMPRESSION_INFORMATION, *PFILE_COMPRESSION_INFORMATION;


#define CHECKSUM_ENFORCEMENT_OFF       0x00000001

// end_ntifs
// begin_ntddk
typedef struct _FILE_DISPOSITION_INFORMATION {
    BOOLEAN DeleteFile;
} FILE_DISPOSITION_INFORMATION, *PFILE_DISPOSITION_INFORMATION;

typedef struct _FILE_END_OF_FILE_INFORMATION {
    LARGE_INTEGER EndOfFile;
} FILE_END_OF_FILE_INFORMATION, *PFILE_END_OF_FILE_INFORMATION;

typedef struct _FILE_VALID_DATA_LENGTH_INFORMATION {
    LARGE_INTEGER ValidDataLength;
} FILE_VALID_DATA_LENGTH_INFORMATION, *PFILE_VALID_DATA_LENGTH_INFORMATION;

// end_ntddk
// begin_ntifs

#ifdef _MAC
#pragma warning( disable : 4121)
#endif

typedef struct _FILE_LINK_INFORMATION {
    BOOLEAN ReplaceIfExists;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_LINK_INFORMATION, *PFILE_LINK_INFORMATION;


#ifdef _MAC
#pragma warning( default : 4121 )
#endif

typedef struct _FILE_MOVE_CLUSTER_INFORMATION {
    ULONG ClusterCount;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_MOVE_CLUSTER_INFORMATION, *PFILE_MOVE_CLUSTER_INFORMATION;

#ifdef _MAC
#pragma warning( disable : 4121)
#endif

typedef struct _FILE_RENAME_INFORMATION {
    BOOLEAN ReplaceIfExists;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_RENAME_INFORMATION, *PFILE_RENAME_INFORMATION;

#ifdef _MAC
#pragma warning( default : 4121 )
#endif

typedef struct _FILE_STREAM_INFORMATION {
    ULONG NextEntryOffset;
    ULONG StreamNameLength;
    LARGE_INTEGER StreamSize;
    LARGE_INTEGER StreamAllocationSize;
    WCHAR StreamName[1];
} FILE_STREAM_INFORMATION, *PFILE_STREAM_INFORMATION;

typedef struct _FILE_TRACKING_INFORMATION {
    HANDLE DestinationFile;
    ULONG ObjectInformationLength;
    CHAR ObjectInformation[1];
} FILE_TRACKING_INFORMATION, *PFILE_TRACKING_INFORMATION;

typedef struct _FILE_COMPLETION_INFORMATION {
    HANDLE Port;
    PVOID Key;
} FILE_COMPLETION_INFORMATION, *PFILE_COMPLETION_INFORMATION;

typedef struct _FILE_PIPE_INFORMATION {
     ULONG ReadMode;
     ULONG CompletionMode;
} FILE_PIPE_INFORMATION, *PFILE_PIPE_INFORMATION;

typedef struct _FILE_PIPE_LOCAL_INFORMATION {
     ULONG NamedPipeType;
     ULONG NamedPipeConfiguration;
     ULONG MaximumInstances;
     ULONG CurrentInstances;
     ULONG InboundQuota;
     ULONG ReadDataAvailable;
     ULONG OutboundQuota;
     ULONG WriteQuotaAvailable;
     ULONG NamedPipeState;
     ULONG NamedPipeEnd;
} FILE_PIPE_LOCAL_INFORMATION, *PFILE_PIPE_LOCAL_INFORMATION;

typedef struct _FILE_PIPE_REMOTE_INFORMATION {
     LARGE_INTEGER CollectDataTime;
     ULONG MaximumCollectionCount;
} FILE_PIPE_REMOTE_INFORMATION, *PFILE_PIPE_REMOTE_INFORMATION;


typedef struct _FILE_MAILSLOT_QUERY_INFORMATION {
    ULONG MaximumMessageSize;
    ULONG MailslotQuota;
    ULONG NextMessageSize;
    ULONG MessagesAvailable;
    LARGE_INTEGER ReadTimeout;
} FILE_MAILSLOT_QUERY_INFORMATION, *PFILE_MAILSLOT_QUERY_INFORMATION;

typedef struct _FILE_MAILSLOT_SET_INFORMATION {
    PLARGE_INTEGER ReadTimeout;
} FILE_MAILSLOT_SET_INFORMATION, *PFILE_MAILSLOT_SET_INFORMATION;

typedef struct _FILE_REPARSE_POINT_INFORMATION {
    LONGLONG FileReference;
    ULONG Tag;
} FILE_REPARSE_POINT_INFORMATION, *PFILE_REPARSE_POINT_INFORMATION;

typedef struct _FILE_LINK_ENTRY_INFORMATION {
    ULONG NextEntryOffset;
    LONGLONG ParentFileId;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_LINK_ENTRY_INFORMATION, *PFILE_LINK_ENTRY_INFORMATION;

typedef struct _FILE_LINKS_INFORMATION {
    ULONG BytesNeeded;
    ULONG EntriesReturned;
    FILE_LINK_ENTRY_INFORMATION Entry;
} FILE_LINKS_INFORMATION, *PFILE_LINKS_INFORMATION;

typedef struct _FILE_LINK_ENTRY_FULL_ID_INFORMATION {
    ULONG NextEntryOffset;
    FILE_ID_128 ParentFileId;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_LINK_ENTRY_FULL_ID_INFORMATION, *PFILE_LINK_ENTRY_FULL_ID_INFORMATION;

typedef struct _FILE_LINKS_FULL_ID_INFORMATION {
    ULONG BytesNeeded;
    ULONG EntriesReturned;
    FILE_LINK_ENTRY_FULL_ID_INFORMATION Entry;
} FILE_LINKS_FULL_ID_INFORMATION, *PFILE_LINKS_FULL_ID_INFORMATION;

typedef struct _FILE_NETWORK_PHYSICAL_NAME_INFORMATION {
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NETWORK_PHYSICAL_NAME_INFORMATION, *PFILE_NETWORK_PHYSICAL_NAME_INFORMATION;

typedef struct _FILE_STANDARD_LINK_INFORMATION {
    ULONG NumberOfAccessibleLinks;
    ULONG TotalNumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
} FILE_STANDARD_LINK_INFORMATION, *PFILE_STANDARD_LINK_INFORMATION;

//
// NtQuery(Set)EaFile
//
// The offset for the start of EaValue is EaName[EaNameLength + 1]
//

// end_ntifs
// begin_wdm

typedef struct _FILE_FULL_EA_INFORMATION {
    ULONG NextEntryOffset;
    UCHAR Flags;
    UCHAR EaNameLength;
    USHORT EaValueLength;
    CHAR EaName[1];
} FILE_FULL_EA_INFORMATION, *PFILE_FULL_EA_INFORMATION;

// end_wdm
// begin_ntifs

typedef struct _FILE_GET_EA_INFORMATION {
    ULONG NextEntryOffset;
    UCHAR EaNameLength;
    CHAR EaName[1];
} FILE_GET_EA_INFORMATION, *PFILE_GET_EA_INFORMATION;

// end_ntifs
// begin_wdm

//
// Support to reserve bandwidth for a file handle.
//

typedef struct _FILE_SFIO_RESERVE_INFORMATION {
    ULONG RequestsPerPeriod;
    ULONG Period;
    BOOLEAN RetryFailures;
    BOOLEAN Discardable;
    ULONG RequestSize;
    ULONG NumOutstandingRequests;
} FILE_SFIO_RESERVE_INFORMATION, *PFILE_SFIO_RESERVE_INFORMATION;

//
// Support to query bandwidth properties of a volume.
//

typedef struct _FILE_SFIO_VOLUME_INFORMATION {
    ULONG MaximumRequestsPerPeriod;
    ULONG MinimumPeriod;
    ULONG MinimumTransferSize;
} FILE_SFIO_VOLUME_INFORMATION, *PFILE_SFIO_VOLUME_INFORMATION;

//
// Support to set priority hints on a filehandle.
//

typedef enum _IO_PRIORITY_HINT {
    IoPriorityVeryLow = 0,          // Defragging, content indexing and other background I/Os
    IoPriorityLow,                  // Prefetching for applications.
    IoPriorityNormal,               // Normal I/Os
    IoPriorityHigh,                 // Used by filesystems for checkpoint I/O
    IoPriorityCritical,             // Used by memory manager. Not available for applications.
    MaxIoPriorityTypes
} IO_PRIORITY_HINT;

typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION {
    IO_PRIORITY_HINT   PriorityHint;
} FILE_IO_PRIORITY_HINT_INFORMATION, *PFILE_IO_PRIORITY_HINT_INFORMATION;

typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION_EX {
    IO_PRIORITY_HINT   PriorityHint;
    BOOLEAN            BoostOutstanding;
} FILE_IO_PRIORITY_HINT_INFORMATION_EX, *PFILE_IO_PRIORITY_HINT_INFORMATION_EX;

//
// Don't queue an entry to an associated completion port if returning success
// synchronously.
//
#define FILE_SKIP_COMPLETION_PORT_ON_SUCCESS    0x1

//
// Don't set the file handle event on IO completion.
//
#define FILE_SKIP_SET_EVENT_ON_HANDLE           0x2

//
// Don't set user supplied event on successful fast-path IO completion.
//
#define FILE_SKIP_SET_USER_EVENT_ON_FAST_IO     0x4

typedef  struct _FILE_IO_COMPLETION_NOTIFICATION_INFORMATION {
    ULONG Flags;
} FILE_IO_COMPLETION_NOTIFICATION_INFORMATION, *PFILE_IO_COMPLETION_NOTIFICATION_INFORMATION;

typedef  struct _FILE_PROCESS_IDS_USING_FILE_INFORMATION {
    ULONG NumberOfProcessIdsInList;
    ULONG_PTR ProcessIdList[1];
} FILE_PROCESS_IDS_USING_FILE_INFORMATION, *PFILE_PROCESS_IDS_USING_FILE_INFORMATION;

typedef struct _FILE_IS_REMOTE_DEVICE_INFORMATION {
    BOOLEAN IsRemote;
} FILE_IS_REMOTE_DEVICE_INFORMATION, *PFILE_IS_REMOTE_DEVICE_INFORMATION;

typedef struct _FILE_NUMA_NODE_INFORMATION {
    USHORT NodeNumber;
} FILE_NUMA_NODE_INFORMATION, *PFILE_NUMA_NODE_INFORMATION;

// end_wdm
// begin_ntifs

//
// File Remote protocol information (FileRemoteProtocolInformation)
//

//
// Protocol generic flags for version 1 and higher
//

#define REMOTE_PROTOCOL_FLAG_LOOPBACK           0x00000001
#define REMOTE_PROTOCOL_FLAG_OFFLINE            0x00000002

//
// Protocol generic flags valid for version 2 and higher
//
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define REMOTE_PROTOCOL_FLAG_PERSISTENT_HANDLE  0x00000004
#define REMOTE_PROTOCOL_FLAG_PRIVACY            0x00000008
#define REMOTE_PROTOCOL_FLAG_INTEGRITY          0x00000010
#define REMOTE_PROTOCOL_FLAG_MUTUAL_AUTH        0x00000020
#endif

//
// Protocol specific SMB2 share capability flags for version
// 2 and higher
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define RPI_SMB2_SHARECAP_TIMEWARP                0x00000002
#define RPI_SMB2_SHARECAP_DFS                     0x00000008
#define RPI_SMB2_SHARECAP_CONTINUOUS_AVAILABILITY 0x00000010
#define RPI_SMB2_SHARECAP_SCALEOUT                0x00000020
#define RPI_SMB2_SHARECAP_CLUSTER                 0x00000040
#define RPI_SMB2_SHARECAP_ENCRYPTED               0x00000080
#endif

//
// Protocol specific SMB2 server capability flags for version
// 2 and higher
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define RPI_SMB2_SERVERCAP_DFS                    0x00000001
#define RPI_SMB2_SERVERCAP_LEASING                0x00000002
#define RPI_SMB2_SERVERCAP_LARGEMTU               0x00000004
#define RPI_SMB2_SERVERCAP_MULTICHANNEL           0x00000008
#define RPI_SMB2_SERVERCAP_PERSISTENT_HANDLES     0x00000010
#define RPI_SMB2_SERVERCAP_DIRECTORY_LEASING      0x00000020
#define RPI_SMB2_SERVERCAP_ENCRYPTION_AWARE       0x00000040
#endif

typedef struct _FILE_REMOTE_PROTOCOL_INFORMATION
{
    // Structure Version
    USHORT StructureVersion;     // 1 for Win7, 2 for Win8 SMB3, 3 for Blue SMB3.
    USHORT StructureSize;        // sizeof(FILE_REMOTE_PROTOCOL_INFORMATION)

    ULONG  Protocol;             // Protocol (WNNC_NET_*) defined in winnetwk.h or ntifs.h.

    // Protocol Version & Type
    USHORT ProtocolMajorVersion;
    USHORT ProtocolMinorVersion;
    USHORT ProtocolRevision;

    USHORT Reserved;

    // Protocol-Generic Information
    ULONG  Flags;

    struct {
        ULONG Reserved[8];
    } GenericReserved;

    // Protocol specific information

#if (_WIN32_WINNT < _WIN32_WINNT_WIN8)
    struct {
        ULONG Reserved[16];
    } ProtocolSpecificReserved;
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
    union {

        struct {

            struct {
                ULONG Capabilities;
            } Server;

            struct {
                ULONG Capabilities;
                ULONG CachingFlags;
            } Share;

        } Smb2;

        ULONG Reserved[16];

    } ProtocolSpecific;

#endif

} FILE_REMOTE_PROTOCOL_INFORMATION, *PFILE_REMOTE_PROTOCOL_INFORMATION;

//
// NtQuery(Set)QuotaInformationFile
//

typedef struct _FILE_GET_QUOTA_INFORMATION {
    ULONG NextEntryOffset;
    ULONG SidLength;
    SID Sid;
} FILE_GET_QUOTA_INFORMATION, *PFILE_GET_QUOTA_INFORMATION;

typedef struct _FILE_QUOTA_INFORMATION {
    ULONG NextEntryOffset;
    ULONG SidLength;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER QuotaUsed;
    LARGE_INTEGER QuotaThreshold;
    LARGE_INTEGER QuotaLimit;
    SID Sid;
} FILE_QUOTA_INFORMATION, *PFILE_QUOTA_INFORMATION;

//
// File volume name information (FileVolumeNameInformation)
//

typedef struct _FILE_VOLUME_NAME_INFORMATION {
    ULONG DeviceNameLength;
    WCHAR DeviceName[1];
} FILE_VOLUME_NAME_INFORMATION, *PFILE_VOLUME_NAME_INFORMATION;

// end_ntifs
// begin_wdm
//
// Set an range of IOSBs on a file handle.
//

typedef struct _FILE_IOSTATUSBLOCK_RANGE_INFORMATION {
    PUCHAR       IoStatusBlockRange;
    ULONG        Length;
} FILE_IOSTATUSBLOCK_RANGE_INFORMATION, *PFILE_IOSTATUSBLOCK_RANGE_INFORMATION;

//
// Define the file system information class values
//
// WARNING:  The order of the following values are assumed by the I/O system.
//           Any changes made here should be reflected there as well.

typedef enum _FSINFOCLASS {
    FileFsVolumeInformation          = 1,
    FileFsLabelInformation,         // 2
    FileFsSizeInformation,          // 3
    FileFsDeviceInformation,        // 4
    FileFsAttributeInformation,     // 5
    FileFsControlInformation,       // 6
    FileFsFullSizeInformation,      // 7
    FileFsObjectIdInformation,      // 8
    FileFsDriverPathInformation,    // 9
    FileFsVolumeFlagsInformation,   // 10
    FileFsSectorSizeInformation,    // 11
    FileFsDataCopyInformation,      // 12
    FileFsMetadataSizeInformation,  // 13
    FileFsMaximumInformation
} FS_INFORMATION_CLASS, *PFS_INFORMATION_CLASS;

// end_wdm
// begin_ntddk
//
// NtQuery[Set]VolumeInformationFile types:
//
//  FILE_FS_LABEL_INFORMATION
//  FILE_FS_VOLUME_INFORMATION
//  FILE_FS_SIZE_INFORMATION
//  FILE_FS_FULL_SIZE_INFORMATION
//  FILE_FS_SECTOR_SIZE_INFORMATION
//  FILE_FS_OBJECTID_INFORMATION
//  FILE_FS_DEVICE_INFORMATION
//  FILE_FS_ATTRIBUTE_INFORMATION
//  FILE_FS_DRIVER_PATH_INFORMATION
//  FILE_FS_VOLUME_FLAGS_INFORMATION
//  FILE_FS_CONTROL_INFORMATION
//

typedef struct _FILE_FS_LABEL_INFORMATION {
    ULONG VolumeLabelLength;
    WCHAR VolumeLabel[1];
} FILE_FS_LABEL_INFORMATION, *PFILE_FS_LABEL_INFORMATION;

typedef struct _FILE_FS_VOLUME_INFORMATION {
    LARGE_INTEGER VolumeCreationTime;
    ULONG VolumeSerialNumber;
    ULONG VolumeLabelLength;
    BOOLEAN SupportsObjects;
    WCHAR VolumeLabel[1];
} FILE_FS_VOLUME_INFORMATION, *PFILE_FS_VOLUME_INFORMATION;

typedef struct _FILE_FS_SIZE_INFORMATION {
    LARGE_INTEGER TotalAllocationUnits;
    LARGE_INTEGER AvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_SIZE_INFORMATION, *PFILE_FS_SIZE_INFORMATION;

typedef struct _FILE_FS_FULL_SIZE_INFORMATION {
    LARGE_INTEGER TotalAllocationUnits;
    LARGE_INTEGER CallerAvailableAllocationUnits;
    LARGE_INTEGER ActualAvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_FULL_SIZE_INFORMATION, *PFILE_FS_FULL_SIZE_INFORMATION;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
typedef struct _FILE_FS_METADATA_SIZE_INFORMATION {
    LARGE_INTEGER TotalMetadataAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_METADATA_SIZE_INFORMATION, *PFILE_FS_METADATA_SIZE_INFORMATION;
#endif

//
//  Flag definitions for FILE_FS_SECTOR_SIZE_INFORMATION structure
//

//
//  If this flag is set then the partition is correctly aligned with the
//  physical sector size of the device for optimial performance.
//

//
//  If SET the device has EVEN alignment
//  If NOT SET the device has ODD alignment
//

#define SSINFO_FLAGS_ALIGNED_DEVICE                 0x00000001

//
//  If SET the partition is properly aligned with the alignment of the device
//  If NOT SET the parition is NOT properly aligned with the partition which can
//      lead to performance issues on this device
//

#define SSINFO_FLAGS_PARTITION_ALIGNED_ON_DEVICE    0x00000002

//
//  If SET the device reports that it does not have a seek penalty (usually this means an SSD)
//  If NOT SET the device reports it does have a seek penalty or the property could not be queried
//

#define SSINFO_FLAGS_NO_SEEK_PENALTY                0x00000004

//
//  If SET the device supports the TRIM operation
//  If NOT SET the device does not support trim operations or the property could not be queried
//

#define SSINFO_FLAGS_TRIM_ENABLED                   0x00000008


//
//  If this value is set for the Sector and Parition alignment
//  fields then it means the alignment is not known and the
//  alignment flags have no meaning
//
#define SSINFO_OFFSET_UNKNOWN (0xffffffff)

typedef struct _FILE_FS_SECTOR_SIZE_INFORMATION {
    ULONG LogicalBytesPerSector;
    ULONG PhysicalBytesPerSectorForAtomicity;
    ULONG PhysicalBytesPerSectorForPerformance;
    ULONG FileSystemEffectivePhysicalBytesPerSectorForAtomicity;
    ULONG Flags;
    ULONG ByteOffsetForSectorAlignment;
    ULONG ByteOffsetForPartitionAlignment;
} FILE_FS_SECTOR_SIZE_INFORMATION, *PFILE_FS_SECTOR_SIZE_INFORMATION;

typedef struct _FILE_FS_OBJECTID_INFORMATION {
    UCHAR ObjectId[16];
    UCHAR ExtendedInfo[48];
} FILE_FS_OBJECTID_INFORMATION, *PFILE_FS_OBJECTID_INFORMATION;

// end_ntddk
// begin_wdm

typedef struct _FILE_FS_DEVICE_INFORMATION {
    DEVICE_TYPE DeviceType;
    ULONG Characteristics;
} FILE_FS_DEVICE_INFORMATION, *PFILE_FS_DEVICE_INFORMATION;

// end_wdm
// begin_ntifs

typedef struct _FILE_FS_ATTRIBUTE_INFORMATION {
    ULONG FileSystemAttributes;
    LONG MaximumComponentNameLength;
    ULONG FileSystemNameLength;
    WCHAR FileSystemName[1];
} FILE_FS_ATTRIBUTE_INFORMATION, *PFILE_FS_ATTRIBUTE_INFORMATION;

typedef struct _FILE_FS_DRIVER_PATH_INFORMATION {
    BOOLEAN DriverInPath;
    ULONG   DriverNameLength;
    WCHAR   DriverName[1];
} FILE_FS_DRIVER_PATH_INFORMATION, *PFILE_FS_DRIVER_PATH_INFORMATION;

typedef struct _FILE_FS_VOLUME_FLAGS_INFORMATION {
    ULONG Flags;
} FILE_FS_VOLUME_FLAGS_INFORMATION, *PFILE_FS_VOLUME_FLAGS_INFORMATION;

//
// File system control flags
//

#define FILE_VC_QUOTA_NONE                  0x00000000
#define FILE_VC_QUOTA_TRACK                 0x00000001
#define FILE_VC_QUOTA_ENFORCE               0x00000002
#define FILE_VC_QUOTA_MASK                  0x00000003

#define FILE_VC_CONTENT_INDEX_DISABLED      0x00000008

#define FILE_VC_LOG_QUOTA_THRESHOLD         0x00000010
#define FILE_VC_LOG_QUOTA_LIMIT             0x00000020
#define FILE_VC_LOG_VOLUME_THRESHOLD        0x00000040
#define FILE_VC_LOG_VOLUME_LIMIT            0x00000080

#define FILE_VC_QUOTAS_INCOMPLETE           0x00000100
#define FILE_VC_QUOTAS_REBUILDING           0x00000200

#define FILE_VC_VALID_MASK                  0x000003ff

typedef struct _FILE_FS_CONTROL_INFORMATION {
    LARGE_INTEGER FreeSpaceStartFiltering;
    LARGE_INTEGER FreeSpaceThreshold;
    LARGE_INTEGER FreeSpaceStopFiltering;
    LARGE_INTEGER DefaultQuotaThreshold;
    LARGE_INTEGER DefaultQuotaLimit;
    ULONG FileSystemControlFlags;
} FILE_FS_CONTROL_INFORMATION, *PFILE_FS_CONTROL_INFORMATION;

typedef struct _FILE_FS_DATA_COPY_INFORMATION {
    ULONG NumberOfCopies;
} FILE_FS_DATA_COPY_INFORMATION, *PFILE_FS_DATA_COPY_INFORMATION;

// end_ntifs
// begin_winnt begin_wdm

//
// Define segement buffer structure for scatter/gather read/write.
//

typedef union _FILE_SEGMENT_ELEMENT {
    PVOID64 Buffer;
    ULONGLONG Alignment;
}FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;

// end_winnt end_wdm
// begin_ntifs

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCreateFile (
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_opt_ PLARGE_INTEGER AllocationSize,
    _In_ ULONG FileAttributes,
    _In_ ULONG ShareAccess,
    _In_ ULONG CreateDisposition,
    _In_ ULONG CreateOptions,
    _In_reads_bytes_opt_(EaLength) PVOID EaBuffer,
    _In_ ULONG EaLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtDeviceIoControlFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG IoControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtFsControlFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG FsControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtLockFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key,
    _In_ BOOLEAN FailImmediately,
    _In_ BOOLEAN ExclusiveLock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenFile (
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG ShareAccess,
    _In_ ULONG OpenOptions
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryDirectoryFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_opt_ PUNICODE_STRING FileName,
    _In_ BOOLEAN RestartScan
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryQuotaInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(SidListLength) PVOID SidList,
    _In_ ULONG SidListLength,
    _In_reads_bytes_opt_((8 + (4 * ((SID *)StartSid)->SubAuthorityCount))) // SeLengthSid()
        PSID StartSid,
    _In_ BOOLEAN RestartScan
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryVolumeInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtReadFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetQuotaInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetVolumeInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtWriteFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtUnlockFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key
    );
#endif

// begin_winnt begin_wdm
#if (NTDDI_VERSION >= NTDDI_WIN8)

//
//  Flag defintions for NtFlushBuffersFileEx
//
//  If none of the below flags are specified the following will occur for a
//  given file handle:
//      - Write any modified data for the given file from the Windows in-memory
//        cache.
//      - Commit all pending metadata changes for the given file from the
//        Windows in-memory cache.
//      - Send a SYNC command to the underlying storage device to commit all
//        written data in the devices cache to persistent storage.
//
//  If a volume handle is specified:
//      - Write all modified data for all files on the volume from the Windows
//        in-memory cache.
//      - Commit all pending metadata changes for all files on the volume from
//        the Windows in-memory cache.
//      - Send a SYNC command to the underlying storage device to commit all
//        written data in the devices cache to persistent storage.
//
//  This is equivalent to how NtFlushBuffersFile has always worked.
//

//
//  If set, this operation will write the data for the given file from the
//  Windows in-memory cache.  This will NOT commit any associated metadata
//  changes.  This will NOT send a SYNC to the storage device to flush its
//  cache.  Not supported on volume handles.  Only supported by the NTFS
//  filesystem.
//

#define FLUSH_FLAGS_FILE_DATA_ONLY     0x00000001

//
//  If set, this operation will commit both the data and metadata changes for
//  the given file from the Windows in-memory cache.  This will NOT send a SYNC
//  to the storage device to flush its cache.  Not supported on volume handles.
//  Only supported by the NTFS filesystem.
//

#define FLUSH_FLAGS_NO_SYNC             0x00000002

#endif  // (NTDDI_VERSION >= NTDDI_WIN8)

// end_winnt end_wdm

#if (NTDDI_VERSION >= NTDDI_WIN8)

__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtFlushBuffersFileEx (
    _In_ HANDLE FileHandle,
    _In_ ULONG Flags,
    _In_reads_bytes_(ParametersSize) PVOID Parameters,
    _In_ ULONG ParametersSize,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );

#endif  // (NTDDI_VERSION >= NTDDI_WIN8)

//
// Macro definition for defining IOCTL and FSCTL function control codes.  Note
// that function codes 0-2047 are reserved for Microsoft Corporation, and
// 2048-4095 are reserved for customers.
//
// These macros are defined in devioctl.h which contains the portable IO
// definitions (for use by both DOS and NT)
//

//
// The IoGetFunctionCodeFromCtlCode( ControlCode ) Macro is defined in io.h
// This macro is used to extract the function code from an IOCTL (or FSCTL).
// The macro can only be used in kernel mode code.
//

//
// General File System control codes - Note that these values are valid
// regardless of the actual file system type
//

//
//  IMPORTANT:  These values have been arranged in order of increasing
//              control codes.  Do NOT break this!!  Add all new codes
//              at end of list regardless of functionality type.
//
//  Note: FSCTL_QUERY_RETRIEVAL_POINTER and FSCTL_MARK_AS_SYSTEM_HIVE only
//        work from Kernel mode on local paging files or the system hives.
//

// begin_winioctl

#ifndef _FILESYSTEMFSCTL_
#define _FILESYSTEMFSCTL_

//
// The following is a list of the native file system fsctls followed by
// additional network file system fsctls.  Some values have been
// decommissioned.
//

#define FSCTL_REQUEST_OPLOCK_LEVEL_1    CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  0, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_REQUEST_OPLOCK_LEVEL_2    CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_REQUEST_BATCH_OPLOCK      CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  2, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_OPLOCK_BREAK_ACKNOWLEDGE  CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  3, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_OPBATCH_ACK_CLOSE_PENDING CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  4, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_OPLOCK_BREAK_NOTIFY       CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  5, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_LOCK_VOLUME               CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  6, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_UNLOCK_VOLUME             CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  7, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_DISMOUNT_VOLUME           CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  8, METHOD_BUFFERED, FILE_ANY_ACCESS)
// decommissioned fsctl value                                              9
#define FSCTL_IS_VOLUME_MOUNTED         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 10, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_IS_PATHNAME_VALID         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 11, METHOD_BUFFERED, FILE_ANY_ACCESS) // PATHNAME_BUFFER,
#define FSCTL_MARK_VOLUME_DIRTY         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 12, METHOD_BUFFERED, FILE_ANY_ACCESS)
// decommissioned fsctl value                                             13
#define FSCTL_QUERY_RETRIEVAL_POINTERS  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 14,  METHOD_NEITHER, FILE_ANY_ACCESS)
#define FSCTL_GET_COMPRESSION           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 15, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SET_COMPRESSION           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 16, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA)
// decommissioned fsctl value                                             17
// decommissioned fsctl value                                             18
#define FSCTL_SET_BOOTLOADER_ACCESSED   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 19,  METHOD_NEITHER, FILE_ANY_ACCESS)
#define FSCTL_MARK_AS_SYSTEM_HIVE       FSCTL_SET_BOOTLOADER_ACCESSED
#define FSCTL_OPLOCK_BREAK_ACK_NO_2     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 20, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_INVALIDATE_VOLUMES        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 21, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_QUERY_FAT_BPB             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 22, METHOD_BUFFERED, FILE_ANY_ACCESS) // FSCTL_QUERY_FAT_BPB_BUFFER
#define FSCTL_REQUEST_FILTER_OPLOCK     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 23, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_FILESYSTEM_GET_STATISTICS CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 24, METHOD_BUFFERED, FILE_ANY_ACCESS) // FILESYSTEM_STATISTICS

#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)
#define FSCTL_GET_NTFS_VOLUME_DATA      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 25, METHOD_BUFFERED, FILE_ANY_ACCESS) // NTFS_VOLUME_DATA_BUFFER
#define FSCTL_GET_NTFS_FILE_RECORD      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 26, METHOD_BUFFERED, FILE_ANY_ACCESS) // NTFS_FILE_RECORD_INPUT_BUFFER, NTFS_FILE_RECORD_OUTPUT_BUFFER
#define FSCTL_GET_VOLUME_BITMAP         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 27,  METHOD_NEITHER, FILE_ANY_ACCESS) // STARTING_LCN_INPUT_BUFFER, VOLUME_BITMAP_BUFFER
#define FSCTL_GET_RETRIEVAL_POINTERS    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 28,  METHOD_NEITHER, FILE_ANY_ACCESS) // STARTING_VCN_INPUT_BUFFER, RETRIEVAL_POINTERS_BUFFER
#define FSCTL_MOVE_FILE                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 29, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // MOVE_FILE_DATA,
#define FSCTL_IS_VOLUME_DIRTY           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 30, METHOD_BUFFERED, FILE_ANY_ACCESS)
// decommissioned fsctl value                                             31
#define FSCTL_ALLOW_EXTENDED_DASD_IO    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 32, METHOD_NEITHER,  FILE_ANY_ACCESS)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
// decommissioned fsctl value                                             33
// decommissioned fsctl value                                             34
#define FSCTL_FIND_FILES_BY_SID         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 35, METHOD_NEITHER, FILE_ANY_ACCESS)
// decommissioned fsctl value                                             36
// decommissioned fsctl value                                             37
#define FSCTL_SET_OBJECT_ID             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 38, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // FILE_OBJECTID_BUFFER
#define FSCTL_GET_OBJECT_ID             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 39, METHOD_BUFFERED, FILE_ANY_ACCESS) // FILE_OBJECTID_BUFFER
#define FSCTL_DELETE_OBJECT_ID          CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 40, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_SET_REPARSE_POINT         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 41, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // REPARSE_DATA_BUFFER,
#define FSCTL_GET_REPARSE_POINT         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 42, METHOD_BUFFERED, FILE_ANY_ACCESS) // REPARSE_DATA_BUFFER
#define FSCTL_DELETE_REPARSE_POINT      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 43, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // REPARSE_DATA_BUFFER,
#define FSCTL_ENUM_USN_DATA             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 44,  METHOD_NEITHER, FILE_ANY_ACCESS) // MFT_ENUM_DATA,
#define FSCTL_SECURITY_ID_CHECK         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 45,  METHOD_NEITHER, FILE_READ_DATA)  // BULK_SECURITY_TEST_DATA,
#define FSCTL_READ_USN_JOURNAL          CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 46,  METHOD_NEITHER, FILE_ANY_ACCESS) // READ_USN_JOURNAL_DATA, USN
#define FSCTL_SET_OBJECT_ID_EXTENDED    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 47, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_CREATE_OR_GET_OBJECT_ID   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 48, METHOD_BUFFERED, FILE_ANY_ACCESS) // FILE_OBJECTID_BUFFER
#define FSCTL_SET_SPARSE                CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 49, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_SET_ZERO_DATA             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 50, METHOD_BUFFERED, FILE_WRITE_DATA) // FILE_ZERO_DATA_INFORMATION,
#define FSCTL_QUERY_ALLOCATED_RANGES    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 51,  METHOD_NEITHER, FILE_READ_DATA)  // FILE_ALLOCATED_RANGE_BUFFER, FILE_ALLOCATED_RANGE_BUFFER
#define FSCTL_ENABLE_UPGRADE            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 52, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_SET_ENCRYPTION            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 53,  METHOD_NEITHER, FILE_ANY_ACCESS) // ENCRYPTION_BUFFER, DECRYPTION_STATUS_BUFFER
#define FSCTL_ENCRYPTION_FSCTL_IO       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 54,  METHOD_NEITHER, FILE_ANY_ACCESS)
#define FSCTL_WRITE_RAW_ENCRYPTED       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 55,  METHOD_NEITHER, FILE_SPECIAL_ACCESS) // ENCRYPTED_DATA_INFO, EXTENDED_ENCRYPTED_DATA_INFO
#define FSCTL_READ_RAW_ENCRYPTED        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 56,  METHOD_NEITHER, FILE_SPECIAL_ACCESS) // REQUEST_RAW_ENCRYPTED_DATA, ENCRYPTED_DATA_INFO, EXTENDED_ENCRYPTED_DATA_INFO
#define FSCTL_CREATE_USN_JOURNAL        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 57,  METHOD_NEITHER, FILE_ANY_ACCESS) // CREATE_USN_JOURNAL_DATA,
#define FSCTL_READ_FILE_USN_DATA        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 58,  METHOD_NEITHER, FILE_ANY_ACCESS) // Read the Usn Record for a file
#define FSCTL_WRITE_USN_CLOSE_RECORD    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 59,  METHOD_NEITHER, FILE_ANY_ACCESS) // Generate Close Usn Record
#define FSCTL_EXTEND_VOLUME             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 60, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_QUERY_USN_JOURNAL         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 61, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_DELETE_USN_JOURNAL        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 62, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_MARK_HANDLE               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 63, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SIS_COPYFILE              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 64, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SIS_LINK_FILES            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 65, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA)
// decommissional fsctl value                                             66
// decommissioned fsctl value                                             67
// decommissioned fsctl value                                             68
#define FSCTL_RECALL_FILE               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 69, METHOD_NEITHER, FILE_ANY_ACCESS)
// decommissioned fsctl value                                             70
#define FSCTL_READ_FROM_PLEX            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 71, METHOD_OUT_DIRECT, FILE_READ_DATA)
#define FSCTL_FILE_PREFETCH             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 72, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // FILE_PREFETCH
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)
#define FSCTL_MAKE_MEDIA_COMPATIBLE         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 76, METHOD_BUFFERED, FILE_WRITE_DATA) // UDFS R/W
#define FSCTL_SET_DEFECT_MANAGEMENT         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 77, METHOD_BUFFERED, FILE_WRITE_DATA) // UDFS R/W
#define FSCTL_QUERY_SPARING_INFO            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 78, METHOD_BUFFERED, FILE_ANY_ACCESS) // UDFS R/W
#define FSCTL_QUERY_ON_DISK_VOLUME_INFO     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 79, METHOD_BUFFERED, FILE_ANY_ACCESS) // C/UDFS
#define FSCTL_SET_VOLUME_COMPRESSION_STATE  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 80, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // VOLUME_COMPRESSION_STATE
// decommissioned fsctl value                                                 80
#define FSCTL_TXFS_MODIFY_RM                CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 81, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_QUERY_RM_INFORMATION     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 82, METHOD_BUFFERED, FILE_READ_DATA)  // TxF
// decommissioned fsctl value                                                 83
#define FSCTL_TXFS_ROLLFORWARD_REDO         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 84, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_ROLLFORWARD_UNDO         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 85, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_START_RM                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 86, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_SHUTDOWN_RM              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 87, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_READ_BACKUP_INFORMATION  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 88, METHOD_BUFFERED, FILE_READ_DATA)  // TxF
#define FSCTL_TXFS_WRITE_BACKUP_INFORMATION CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 89, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_CREATE_SECONDARY_RM      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 90, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_GET_METADATA_INFO        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 91, METHOD_BUFFERED, FILE_READ_DATA)  // TxF
#define FSCTL_TXFS_GET_TRANSACTED_VERSION   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 92, METHOD_BUFFERED, FILE_READ_DATA)  // TxF
// decommissioned fsctl value                                                 93
#define FSCTL_TXFS_SAVEPOINT_INFORMATION    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 94, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_CREATE_MINIVERSION       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 95, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
// decommissioned fsctl value                                                 96
// decommissioned fsctl value                                                 97
// decommissioned fsctl value                                                 98
#define FSCTL_TXFS_TRANSACTION_ACTIVE       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 99, METHOD_BUFFERED, FILE_READ_DATA)  // TxF
#define FSCTL_SET_ZERO_ON_DEALLOCATION      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 101, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_SET_REPAIR                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 102, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_GET_REPAIR                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 103, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_WAIT_FOR_REPAIR               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 104, METHOD_BUFFERED, FILE_ANY_ACCESS)
// decommissioned fsctl value                                                 105
#define FSCTL_INITIATE_REPAIR               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 106, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSC_INTERNAL                  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 107, METHOD_NEITHER, FILE_ANY_ACCESS) // CSC internal implementation
#define FSCTL_SHRINK_VOLUME                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 108, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // SHRINK_VOLUME_INFORMATION
#define FSCTL_SET_SHORT_NAME_BEHAVIOR       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 109, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_DFSR_SET_GHOST_HANDLE_STATE   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 110, METHOD_BUFFERED, FILE_ANY_ACCESS)

//
//  Values 111 - 119 are reserved for FSRM.
//

#define FSCTL_TXFS_LIST_TRANSACTION_LOCKED_FILES \
                                            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 120, METHOD_BUFFERED, FILE_READ_DATA) // TxF
#define FSCTL_TXFS_LIST_TRANSACTIONS        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 121, METHOD_BUFFERED, FILE_READ_DATA) // TxF
#define FSCTL_QUERY_PAGEFILE_ENCRYPTION     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 122, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_VISTA */

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)
#define FSCTL_RESET_VOLUME_ALLOCATION_HINTS CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 123, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_VISTA */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_QUERY_DEPENDENT_VOLUME        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 124, METHOD_BUFFERED, FILE_ANY_ACCESS)    // Dependency File System Filter
#define FSCTL_SD_GLOBAL_CHANGE              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 125, METHOD_BUFFERED, FILE_ANY_ACCESS) // Query/Change NTFS Security Descriptors
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)
#define FSCTL_TXFS_READ_BACKUP_INFORMATION2 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 126, METHOD_BUFFERED, FILE_ANY_ACCESS) // TxF
#endif /* _WIN32_WINNT >= _WIN32_WINNT_VISTA */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_LOOKUP_STREAM_FROM_CLUSTER    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 127, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_TXFS_WRITE_BACKUP_INFORMATION2 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 128, METHOD_BUFFERED, FILE_ANY_ACCESS) // TxF
#define FSCTL_FILE_TYPE_NOTIFICATION        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 129, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_FILE_LEVEL_TRIM               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 130, METHOD_BUFFERED, FILE_WRITE_DATA)
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

//
//  Values 131 - 139 are reserved for FSRM.
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_GET_BOOT_AREA_INFO            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 140, METHOD_BUFFERED, FILE_ANY_ACCESS) // BOOT_AREA_INFO
#define FSCTL_GET_RETRIEVAL_POINTER_BASE    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 141, METHOD_BUFFERED, FILE_ANY_ACCESS) // RETRIEVAL_POINTER_BASE
#define FSCTL_SET_PERSISTENT_VOLUME_STATE   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 142, METHOD_BUFFERED, FILE_ANY_ACCESS)  // FILE_FS_PERSISTENT_VOLUME_INFORMATION
#define FSCTL_QUERY_PERSISTENT_VOLUME_STATE CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 143, METHOD_BUFFERED, FILE_ANY_ACCESS)  // FILE_FS_PERSISTENT_VOLUME_INFORMATION

#define FSCTL_REQUEST_OPLOCK                CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 144, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_CSV_TUNNEL_REQUEST            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 145, METHOD_BUFFERED, FILE_ANY_ACCESS) // CSV_TUNNEL_REQUEST
#define FSCTL_IS_CSV_FILE                   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 146, METHOD_BUFFERED, FILE_ANY_ACCESS) // IS_CSV_FILE

#define FSCTL_QUERY_FILE_SYSTEM_RECOGNITION CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 147, METHOD_BUFFERED, FILE_ANY_ACCESS) //
#define FSCTL_CSV_GET_VOLUME_PATH_NAME      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 148, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_GET_VOLUME_NAME_FOR_VOLUME_MOUNT_POINT CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 149, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_GET_VOLUME_PATH_NAMES_FOR_VOLUME_NAME CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 150,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_IS_FILE_ON_CSV_VOLUME         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 151,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_CORRUPTION_HANDLING           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 152, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_OFFLOAD_READ                  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 153, METHOD_BUFFERED, FILE_READ_ACCESS)
#define FSCTL_OFFLOAD_WRITE                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 154, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_CSV_INTERNAL                  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 155,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_SET_PURGE_FAILURE_MODE        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 156, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_QUERY_FILE_LAYOUT             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 157, METHOD_NEITHER, FILE_ANY_ACCESS)
#define FSCTL_IS_VOLUME_OWNED_BYCSVFS       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 158,  METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_GET_INTEGRITY_INFORMATION     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 159, METHOD_BUFFERED, FILE_ANY_ACCESS)                  // FSCTL_GET_INTEGRITY_INFORMATION_BUFFER
#define FSCTL_SET_INTEGRITY_INFORMATION     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 160, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA) // FSCTL_SET_INTEGRITY_INFORMATION_BUFFER

#define FSCTL_QUERY_FILE_REGIONS            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 161, METHOD_BUFFERED, FILE_ANY_ACCESS)

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

//
// Dedup FSCTLs
// Values 162 - 170 are reserved for Dedup.
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_DEDUP_FILE                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 165, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_DEDUP_QUERY_FILE_HASHES       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 166, METHOD_NEITHER, FILE_READ_DATA)
#define FSCTL_DEDUP_QUERY_RANGE_STATE       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 167, METHOD_NEITHER, FILE_READ_DATA)
#define FSCTL_DEDUP_QUERY_REPARSE_INFO      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 168, METHOD_NEITHER, FILE_ANY_ACCESS)
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_RKF_INTERNAL                  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 171, METHOD_NEITHER, FILE_ANY_ACCESS) // Resume Key Filter

#define FSCTL_SCRUB_DATA                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 172, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_REPAIR_COPIES                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 173, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA)
#define FSCTL_DISABLE_LOCAL_BUFFERING       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 174, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_MGMT_LOCK                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 175, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_QUERY_DOWN_LEVEL_FILE_SYSTEM_CHARACTERISTICS CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 176, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_ADVANCE_FILE_ID               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 177, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_SYNC_TUNNEL_REQUEST       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 178, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_QUERY_VETO_FILE_DIRECT_IO CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 179, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_WRITE_USN_REASON              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 180, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_CONTROL                   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 181, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_GET_REFS_VOLUME_DATA          CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 182, METHOD_BUFFERED, FILE_ANY_ACCESS)
// end_ntifs end_winioctl
// begin_ntosifs
#define FSCTL_SET_BREAK_ON_STATUS           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 183, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CBAFILT_IGNORE_ADS_CHANGES    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 184, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
// end_ntosifs
// begin_ntifs begin_winioctl
#define FSCTL_CSV_H_BREAKING_SYNC_TUNNEL_REQUEST CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 185, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

// end_ntifs end_winioctl

// begin_ntosifs
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_MPFILTER_QUERY_FILE_CHANGE    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 186, METHOD_NEITHER, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
// end_ntosifs

// begin_ntifs begin_winioctl
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_QUERY_STORAGE_CLASSES         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 187, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_QUERY_REGION_INFO             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 188, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_USN_TRACK_MODIFIED_RANGES     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 189, METHOD_BUFFERED, FILE_ANY_ACCESS) // USN_TRACK_MODIFIED_RANGES
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
// end_ntifs end_winioctl

// begin_ntosifs
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_USN_SUBMIT_MODIFIED_RANGES    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 190, METHOD_BUFFERED, FILE_ANY_ACCESS) // RANGETRACK_TRANSFER_PACKET
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
// end_ntosifs

// begin_ntifs begin_winioctl
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_QUERY_SHARED_VIRTUAL_DISK_SUPPORT CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 192, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SVHDX_SYNC_TUNNEL_REQUEST         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 193, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SVHDX_SET_INITIATOR_INFORMATION   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 194, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_SET_EXTERNAL_BACKING              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 195, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_GET_EXTERNAL_BACKING              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 196, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_DELETE_EXTERNAL_BACKING           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 197, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_ENUM_EXTERNAL_BACKING             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 198, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_ENUM_OVERLAY                      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 199, METHOD_NEITHER, FILE_ANY_ACCESS)
// end_ntifs end_winioctl begin_ntosifs
#define FSCTL_START_OVERLAY_INTEGRITY           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 200, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_STOP_OVERLAY_INTEGRITY            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 201, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_CONTROL_OVERLAY_INTEGRITY         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 202, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_QUERY_OVERLAY_INTEGRITY           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 203, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
// begin_ntifs begin_winioctl end_ntosifs
#define FSCTL_ADD_OVERLAY                       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 204, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_REMOVE_OVERLAY                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 205, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_UPDATE_OVERLAY                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 206, METHOD_BUFFERED, FILE_WRITE_DATA)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN7) */
// end_ntifs end_winioctl
// begin_ntosifs
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_SHUFFLE_FILE                      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 208, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) // SHUFFLE_FILE_DATA
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */
// end_ntosifs
// begin_ntifs begin_winioctl
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_DUPLICATE_EXTENTS_TO_FILE         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 209, METHOD_BUFFERED, FILE_WRITE_DATA )
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
// end_ntifs end_winioctl
// begin_ntosifs
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_CHECK_FOR_SECTION                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 210, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
// end_ntosifs
// begin_ntifs begin_winioctl
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_SPARSE_OVERALLOCATE               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 211, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_STORAGE_QOS_CONTROL               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 212, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
// end_ntifs end_winioctl
// begin_ntosifs
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_CLOUD_DATA_TRANSFER               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 213, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)
#define FSCTL_CLOUD_COMMAND                     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 214, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN7) */
// end_ntosifs
// begin_ntifs begin_winioctl
#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
#define FSCTL_INITIATE_FILE_METADATA_OPTIMIZATION       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 215, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_QUERY_FILE_METADATA_OPTIMIZATION          CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 216, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD) */
// end_ntifs end_winioctl

// begin_ntifs begin_winioctl
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_SVHDX_ASYNC_TUNNEL_REQUEST         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 217, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
// end_ntifs end_winioctl
// begin_ntifs begin_winioctl
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_GET_WOF_VERSION                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 218, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif
// end_ntifs end_winioctl

// begin_ntifs begin_winioctl
#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
#define FSCTL_HCS_SYNC_TUNNEL_REQUEST            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 219, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_HCS_ASYNC_TUNNEL_REQUEST           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 220, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_QUERY_EXTENT_READ_CACHE_INFO       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 221, METHOD_NEITHER, FILE_ANY_ACCESS)  // VCN_RANGE_INPUT_BUFFER, EXTENT_READ_CACHE_INFO_BUFFER
#define FSCTL_QUERY_REFS_VOLUME_COUNTER_INFO     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 222, METHOD_NEITHER, FILE_ANY_ACCESS)  // REFS_VOLUME_COUNTER_INFO_INPUT_BUFFER, VOLUME_REFS_INFO_BUFFER
#define FSCTL_CLEAN_VOLUME_METADATA              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 223, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SET_INTEGRITY_INFORMATION_EX       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 224, METHOD_BUFFERED, FILE_ANY_ACCESS) // FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_SUSPEND_OVERLAY                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 225, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
#define FSCTL_VIRTUAL_STORAGE_QUERY_PROPERTY     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 226, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_FILESYSTEM_GET_STATISTICS_EX       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 227, METHOD_BUFFERED, FILE_ANY_ACCESS) // FILESYSTEM_STATISTICS_EX
#endif
// end_ntifs end_winioctl

//
//  New File System FSCTLs should go here starting with 227
//

// begin_ntddk begin_winioctl
//
// AVIO IOCTLS.
//

#define IOCTL_AVIO_ALLOCATE_STREAM      CTL_CODE(FILE_DEVICE_AVIO, 1, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define IOCTL_AVIO_FREE_STREAM          CTL_CODE(FILE_DEVICE_AVIO, 2, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define IOCTL_AVIO_MODIFY_STREAM        CTL_CODE(FILE_DEVICE_AVIO, 3, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

// end_ntddk
// begin_ntifs

//
// The following long list of structs are associated with the preceeding
// file system fsctls.
//

//
//==================== FSCTL_IS_PATHNAME_VALID ======================
//
// Structure for FSCTL_IS_PATHNAME_VALID
//

typedef struct _PATHNAME_BUFFER {

    ULONG PathNameLength;
    WCHAR Name[1];

} PATHNAME_BUFFER, *PPATHNAME_BUFFER;

//
//==================== FSCTL_QUERY_BPB_INFO ======================
//
// Structure for FSCTL_QUERY_BPB_INFO
//

typedef struct _FSCTL_QUERY_FAT_BPB_BUFFER {

    UCHAR First0x24BytesOfBootSector[0x24];

} FSCTL_QUERY_FAT_BPB_BUFFER, *PFSCTL_QUERY_FAT_BPB_BUFFER;

#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)

//
//==================== FSCTL_GET_NTFS_VOLUME_DATA ======================
//
// Structures for FSCTL_GET_NTFS_VOLUME_DATA.
// The user must pass the basic buffer below.  Ntfs
// will return as many fields as available in the extended
// buffer which follows immediately after the VOLUME_DATA_BUFFER.
//

typedef struct {

    LARGE_INTEGER VolumeSerialNumber;
    LARGE_INTEGER NumberSectors;
    LARGE_INTEGER TotalClusters;
    LARGE_INTEGER FreeClusters;
    LARGE_INTEGER TotalReserved;
    ULONG BytesPerSector;
    ULONG BytesPerCluster;
    ULONG BytesPerFileRecordSegment;
    ULONG ClustersPerFileRecordSegment;
    LARGE_INTEGER MftValidDataLength;
    LARGE_INTEGER MftStartLcn;
    LARGE_INTEGER Mft2StartLcn;
    LARGE_INTEGER MftZoneStart;
    LARGE_INTEGER MftZoneEnd;

} NTFS_VOLUME_DATA_BUFFER, *PNTFS_VOLUME_DATA_BUFFER;

typedef struct {

    ULONG ByteCount;

    USHORT MajorVersion;
    USHORT MinorVersion;

    ULONG BytesPerPhysicalSector;

    USHORT LfsMajorVersion;
    USHORT LfsMinorVersion;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
    ULONG MaxDeviceTrimExtentCount;
    ULONG MaxDeviceTrimByteCount;

    ULONG MaxVolumeTrimExtentCount;
    ULONG MaxVolumeTrimByteCount;
#endif

} NTFS_EXTENDED_VOLUME_DATA, *PNTFS_EXTENDED_VOLUME_DATA;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

//
//==================== FSCTL_GET_REFS_VOLUME_DATA ======================
//
// Structures for FSCTL_GET_REFS_VOLUME_DATA.
//

typedef struct {

    ULONG ByteCount;
    ULONG MajorVersion;
    ULONG MinorVersion;

    ULONG BytesPerPhysicalSector;

    LARGE_INTEGER VolumeSerialNumber;
    LARGE_INTEGER NumberSectors;
    LARGE_INTEGER TotalClusters;
    LARGE_INTEGER FreeClusters;
    LARGE_INTEGER TotalReserved;
    ULONG BytesPerSector;
    ULONG BytesPerCluster;
    LARGE_INTEGER MaximumSizeOfResidentFile;

    LARGE_INTEGER Reserved[10];

} REFS_VOLUME_DATA_BUFFER, *PREFS_VOLUME_DATA_BUFFER;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN8 */


#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)
//
//==================== FSCTL_GET_VOLUME_BITMAP ======================
//
// Structure for FSCTL_GET_VOLUME_BITMAP
//

typedef struct {

    LARGE_INTEGER StartingLcn;

} STARTING_LCN_INPUT_BUFFER, *PSTARTING_LCN_INPUT_BUFFER;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#define GET_VOLUME_BITMAP_FLAG_MASK_METADATA         0x00000001

typedef struct {

    LARGE_INTEGER StartingLcn;
    ULONG Flags;

} STARTING_LCN_INPUT_BUFFER_EX, *PSTARTING_LCN_INPUT_BUFFER_EX;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

typedef struct {

    LARGE_INTEGER StartingLcn;
    LARGE_INTEGER BitmapSize;
    UCHAR Buffer[1];

} VOLUME_BITMAP_BUFFER, *PVOLUME_BITMAP_BUFFER;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */

#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)
//
//==================== FSCTL_GET_RETRIEVAL_POINTERS ======================
//
// Structure for FSCTL_GET_RETRIEVAL_POINTERS
//

typedef struct {

    LARGE_INTEGER StartingVcn;

} STARTING_VCN_INPUT_BUFFER, *PSTARTING_VCN_INPUT_BUFFER;

typedef struct RETRIEVAL_POINTERS_BUFFER {

    ULONG ExtentCount;
    LARGE_INTEGER StartingVcn;
    struct {
        LARGE_INTEGER NextVcn;
        LARGE_INTEGER Lcn;
    } Extents[1];

} RETRIEVAL_POINTERS_BUFFER, *PRETRIEVAL_POINTERS_BUFFER;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */

#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)
//
//==================== FSCTL_GET_NTFS_FILE_RECORD ======================
//
// Structures for FSCTL_GET_NTFS_FILE_RECORD
//

typedef struct {

    LARGE_INTEGER FileReferenceNumber;

} NTFS_FILE_RECORD_INPUT_BUFFER, *PNTFS_FILE_RECORD_INPUT_BUFFER;

typedef struct {

    LARGE_INTEGER FileReferenceNumber;
    ULONG FileRecordLength;
    UCHAR FileRecordBuffer[1];

} NTFS_FILE_RECORD_OUTPUT_BUFFER, *PNTFS_FILE_RECORD_OUTPUT_BUFFER;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */

#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)
//
//==================== FSCTL_MOVE_FILE ======================
//
// Structure for FSCTL_MOVE_FILE
//

typedef struct {

    HANDLE FileHandle;
    LARGE_INTEGER StartingVcn;
    LARGE_INTEGER StartingLcn;
    ULONG ClusterCount;

} MOVE_FILE_DATA, *PMOVE_FILE_DATA;

typedef struct {

    HANDLE FileHandle;
    LARGE_INTEGER SourceFileRecord;
    LARGE_INTEGER TargetFileRecord;

} MOVE_FILE_RECORD_DATA, *PMOVE_FILE_RECORD_DATA;


#if defined(_WIN64)
//
//  32/64 Bit thunking support structure
//

typedef struct _MOVE_FILE_DATA32 {

    UINT32 FileHandle;
    LARGE_INTEGER StartingVcn;
    LARGE_INTEGER StartingLcn;
    ULONG ClusterCount;

} MOVE_FILE_DATA32, *PMOVE_FILE_DATA32;
#endif
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_FIND_FILES_BY_SID ======================
//
// Structures for FSCTL_FIND_FILES_BY_SID
//

typedef struct {
    ULONG Restart;
    SID Sid;
} FIND_BY_SID_DATA, *PFIND_BY_SID_DATA;

typedef struct {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FIND_BY_SID_OUTPUT, *PFIND_BY_SID_OUTPUT;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//  The following structures apply to Usn operations.
//

//
//==================== FSCTL_ENUM_USN_DATA ======================
//
// Structure for FSCTL_ENUM_USN_DATA
//

typedef struct {

    ULONGLONG StartFileReferenceNumber;
    USN LowUsn;
    USN HighUsn;

} MFT_ENUM_DATA_V0, *PMFT_ENUM_DATA_V0;

typedef struct {

    ULONGLONG StartFileReferenceNumber;
    USN LowUsn;
    USN HighUsn;
    USHORT MinMajorVersion;
    USHORT MaxMajorVersion;

} MFT_ENUM_DATA_V1, *PMFT_ENUM_DATA_V1;

#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef MFT_ENUM_DATA_V1 MFT_ENUM_DATA, *PMFT_ENUM_DATA;
#else
typedef MFT_ENUM_DATA_V0 MFT_ENUM_DATA, *PMFT_ENUM_DATA;
#endif

//
//==================== FSCTL_CREATE_USN_JOURNAL ======================
//
// Structure for FSCTL_CREATE_USN_JOURNAL
//

typedef struct {

    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;

} CREATE_USN_JOURNAL_DATA, *PCREATE_USN_JOURNAL_DATA;

//
//==================== FSCTL_READ_FILE_USN_DATA ====================
//
// Structure for FSCTL_READ_FILE_USN_DATA
//

//
//  Windows 7 and earlier releases did not use an input buffer
//  for this FSCTL.  It is valid to omit this, and doing so
//  will default to MinMajorVersion == 2, MaxMajorVersion == 2.
//

typedef struct {

    USHORT MinMajorVersion;
    USHORT MaxMajorVersion;

} READ_FILE_USN_DATA, *PREAD_FILE_USN_DATA;


//
//==================== FSCTL_READ_USN_JOURNAL ======================
//
// Structure for FSCTL_READ_USN_JOURNAL
//

typedef struct {

    USN StartUsn;
    ULONG ReasonMask;
    ULONG ReturnOnlyOnClose;
    ULONGLONG Timeout;
    ULONGLONG BytesToWaitFor;
    ULONGLONG UsnJournalID;

} READ_USN_JOURNAL_DATA_V0, *PREAD_USN_JOURNAL_DATA_V0;

typedef struct {

    USN StartUsn;
    ULONG ReasonMask;
    ULONG ReturnOnlyOnClose;
    ULONGLONG Timeout;
    ULONGLONG BytesToWaitFor;
    ULONGLONG UsnJournalID;
    USHORT MinMajorVersion;
    USHORT MaxMajorVersion;

} READ_USN_JOURNAL_DATA_V1, *PREAD_USN_JOURNAL_DATA_V1;

#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef READ_USN_JOURNAL_DATA_V1 READ_USN_JOURNAL_DATA, *PREAD_USN_JOURNAL_DATA;
#else
typedef READ_USN_JOURNAL_DATA_V0 READ_USN_JOURNAL_DATA, *PREAD_USN_JOURNAL_DATA;
#endif

//
//==================== FSCTL_USN_TRACK_MODIFIED_RANGES ======================
//
// Structure for FSCTL_USN_TRACK_MODIFIED_RANGES
//

typedef struct {
    ULONG Flags;
    ULONG Unused;
    ULONGLONG ChunkSize;
    LONGLONG FileSizeThreshold;
} USN_TRACK_MODIFIED_RANGES, *PUSN_TRACK_MODIFIED_RANGES;

typedef struct {
    USN Usn;
} USN_RANGE_TRACK_OUTPUT, *PUSN_RANGE_TRACK_OUTPUT;

#define FLAG_USN_TRACK_MODIFIED_RANGES_ENABLE 0x00000001

//
//  The initial Major.Minor version of the Usn record will be 2.0.
//  In general, the MinorVersion may be changed if fields are added
//  to this structure in such a way that the previous version of the
//  software can still correctly the fields it knows about.  The
//  MajorVersion should only be changed if the previous version of
//  any software using this structure would incorrectly handle new
//  records due to structure changes.
//
//  The first update to this will force the structure to version 2.0.
//  This will add the extended information about the source as
//  well as indicate the file name offset within the structure.
//
//  The following structure is returned with these fsctls.
//
//      FSCTL_READ_USN_JOURNAL
//      FSCTL_READ_FILE_USN_DATA
//      FSCTL_ENUM_USN_DATA
//

typedef struct {

    ULONG RecordLength;
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONGLONG FileReferenceNumber;
    ULONGLONG ParentFileReferenceNumber;
    USN Usn;
    LARGE_INTEGER TimeStamp;
    ULONG Reason;
    ULONG SourceInfo;
    ULONG SecurityId;
    ULONG FileAttributes;
    USHORT FileNameLength;
    USHORT FileNameOffset;
    WCHAR FileName[1];

} USN_RECORD_V2, *PUSN_RECORD_V2;

typedef struct {

    ULONG RecordLength;
    USHORT MajorVersion;
    USHORT MinorVersion;
    FILE_ID_128 FileReferenceNumber;
    FILE_ID_128 ParentFileReferenceNumber;
    USN Usn;
    LARGE_INTEGER TimeStamp;
    ULONG Reason;
    ULONG SourceInfo;
    ULONG SecurityId;
    ULONG FileAttributes;
    USHORT FileNameLength;
    USHORT FileNameOffset;
    WCHAR FileName[1];

} USN_RECORD_V3, *PUSN_RECORD_V3;

typedef USN_RECORD_V2 USN_RECORD, *PUSN_RECORD;

typedef struct {
    ULONG RecordLength;
    USHORT MajorVersion;
    USHORT MinorVersion;
} USN_RECORD_COMMON_HEADER, *PUSN_RECORD_COMMON_HEADER;

typedef struct {
    LONGLONG Offset;
    LONGLONG Length;
} USN_RECORD_EXTENT, *PUSN_RECORD_EXTENT;

typedef struct {
    USN_RECORD_COMMON_HEADER Header;
    FILE_ID_128 FileReferenceNumber;
    FILE_ID_128 ParentFileReferenceNumber;
    USN Usn;
    ULONG Reason;
    ULONG SourceInfo;
    ULONG RemainingExtents;
    USHORT NumberOfExtents;
    USHORT ExtentSize;
    USN_RECORD_EXTENT Extents[1];
} USN_RECORD_V4, *PUSN_RECORD_V4;

typedef union {
    USN_RECORD_COMMON_HEADER Header;
    USN_RECORD_V2 V2;
    USN_RECORD_V3 V3;
    USN_RECORD_V4 V4;
} USN_RECORD_UNION, *PUSN_RECORD_UNION;

#define USN_PAGE_SIZE                    (0x1000)

#define USN_REASON_DATA_OVERWRITE        (0x00000001)
#define USN_REASON_DATA_EXTEND           (0x00000002)
#define USN_REASON_DATA_TRUNCATION       (0x00000004)
#define USN_REASON_NAMED_DATA_OVERWRITE  (0x00000010)
#define USN_REASON_NAMED_DATA_EXTEND     (0x00000020)
#define USN_REASON_NAMED_DATA_TRUNCATION (0x00000040)
#define USN_REASON_FILE_CREATE           (0x00000100)
#define USN_REASON_FILE_DELETE           (0x00000200)
#define USN_REASON_EA_CHANGE             (0x00000400)
#define USN_REASON_SECURITY_CHANGE       (0x00000800)
#define USN_REASON_RENAME_OLD_NAME       (0x00001000)
#define USN_REASON_RENAME_NEW_NAME       (0x00002000)
#define USN_REASON_INDEXABLE_CHANGE      (0x00004000)
#define USN_REASON_BASIC_INFO_CHANGE     (0x00008000)
#define USN_REASON_HARD_LINK_CHANGE      (0x00010000)
#define USN_REASON_COMPRESSION_CHANGE    (0x00020000)
#define USN_REASON_ENCRYPTION_CHANGE     (0x00040000)
#define USN_REASON_OBJECT_ID_CHANGE      (0x00080000)
#define USN_REASON_REPARSE_POINT_CHANGE  (0x00100000)
#define USN_REASON_STREAM_CHANGE         (0x00200000)
#define USN_REASON_TRANSACTED_CHANGE     (0x00400000)
#define USN_REASON_INTEGRITY_CHANGE      (0x00800000)
#define USN_REASON_CLOSE                 (0x80000000)

//
//==================== FSCTL_QUERY_USN_JOUNAL ======================
//
//  Structure for FSCTL_QUERY_USN_JOUNAL
//

typedef struct {

    ULONGLONG UsnJournalID;
    USN FirstUsn;
    USN NextUsn;
    USN LowestValidUsn;
    USN MaxUsn;
    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;

} USN_JOURNAL_DATA_V0, *PUSN_JOURNAL_DATA_V0;

typedef struct {

    ULONGLONG UsnJournalID;
    USN FirstUsn;
    USN NextUsn;
    USN LowestValidUsn;
    USN MaxUsn;
    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;
    USHORT MinSupportedMajorVersion;
    USHORT MaxSupportedMajorVersion;

} USN_JOURNAL_DATA_V1, *PUSN_JOURNAL_DATA_V1;

typedef struct {

    ULONGLONG UsnJournalID;
    USN FirstUsn;
    USN NextUsn;
    USN LowestValidUsn;
    USN MaxUsn;
    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;
    USHORT MinSupportedMajorVersion;
    USHORT MaxSupportedMajorVersion;
    ULONG Flags;
    ULONGLONG RangeTrackChunkSize;
    LONGLONG RangeTrackFileSizeThreshold;

} USN_JOURNAL_DATA_V2, *PUSN_JOURNAL_DATA_V2;


#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef USN_JOURNAL_DATA_V1 USN_JOURNAL_DATA, *PUSN_JOURNAL_DATA;
#else
typedef USN_JOURNAL_DATA_V0 USN_JOURNAL_DATA, *PUSN_JOURNAL_DATA;
#endif

//
//==================== FSCTL_DELETE_USN_JOURNAL ======================
//
//  Structure for FSCTL_DELETE_USN_JOURNAL
//

typedef struct {

    ULONGLONG UsnJournalID;
    ULONG DeleteFlags;

} DELETE_USN_JOURNAL_DATA, *PDELETE_USN_JOURNAL_DATA;

#define USN_DELETE_FLAG_DELETE              (0x00000001)
#define USN_DELETE_FLAG_NOTIFY              (0x00000002)

#define USN_DELETE_VALID_FLAGS              (0x00000003)

//
//==================== FSCTL_MARK_HANDLE ======================
//
//  Structure for FSCTL_MARK_HANDLE
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

typedef struct {

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
    union {
        ULONG UsnSourceInfo;
        ULONG CopyNumber;
    } DUMMYUNIONNAME;
#else
    ULONG UsnSourceInfo;
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

    HANDLE VolumeHandle;
    ULONG HandleInfo;

} MARK_HANDLE_INFO, *PMARK_HANDLE_INFO;

#if defined(_WIN64)
//
//  32/64 Bit thunking support structure
//

typedef struct {

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
    union {
        ULONG UsnSourceInfo;
        ULONG CopyNumber;
    } DUMMYUNIONNAME;
#else
    ULONG UsnSourceInfo;
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */
    UINT32 VolumeHandle;
    ULONG HandleInfo;

} MARK_HANDLE_INFO32, *PMARK_HANDLE_INFO32;
#endif

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4201)       // unnamed struct
#endif

//
//  Flags for the additional source information above.
//
//      USN_SOURCE_DATA_MANAGEMENT - Service is not modifying the external view
//          of any part of the file.  Typical case is HSM moving data to
//          and from external storage.
//
//      USN_SOURCE_AUXILIARY_DATA - Service is not modifying the external view
//          of the file with regard to the application that created this file.
//          Can be used to add private data streams to a file.
//
//      USN_SOURCE_REPLICATION_MANAGEMENT - Service is modifying a file to match
//          the contents of the same file which exists in another member of the
//          replica set.
//
//      USN_SOURCE_CLIENT_REPLICATION_MANAGEMENT - Replication is being performed
//          on clint systems either from the cloud or servers
//

#define USN_SOURCE_DATA_MANAGEMENT                  (0x00000001)
#define USN_SOURCE_AUXILIARY_DATA                   (0x00000002)
#define USN_SOURCE_REPLICATION_MANAGEMENT           (0x00000004)
#define USN_SOURCE_CLIENT_REPLICATION_MANAGEMENT    (0x00000008)

#define USN_SOURCE_VALID_FLAGS      (USN_SOURCE_DATA_MANAGEMENT |               \
                                     USN_SOURCE_AUXILIARY_DATA |                \
                                     USN_SOURCE_REPLICATION_MANAGEMENT |        \
                                     USN_SOURCE_CLIENT_REPLICATION_MANAGEMENT)


//
//  Flags for the HandleInfo field above
//
//  MARK_HANDLE_PROTECT_CLUSTERS - disallow any defragmenting (FSCTL_MOVE_FILE) until the
//      the handle is closed
//
//  MARK_HANDLE_TXF_SYSTEM_LOG - indicates that this stream is being used as the Txf
//      log for an RM on the volume.  Must be called in the kernel using
//      IRP_MN_KERNEL_CALL.
//
//  MARK_HANDLE_NOT_TXF_SYSTEM_LOG - indicates that this user is no longer using this
//      object as a log file.
//
//  MARK_HANDLE_REALTIME
//
//  MARK_HANDLE_NOT_REALTIME
//
//  MARK_HANDLE_READ_COPY - indicates the data must be read from the specified copy.
//
//  MARK_HANDLE_NOT_READ_COPY - indicates the data is no longer to be read from a specific copy.
//
//  MARK_HANDLE_CLOUD_SYNC - indicates that the handle belongs to the cloud sync engine
//

#define MARK_HANDLE_PROTECT_CLUSTERS                    (0x00000001)
#define MARK_HANDLE_TXF_SYSTEM_LOG                      (0x00000004)
#define MARK_HANDLE_NOT_TXF_SYSTEM_LOG                  (0x00000008)

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

#define MARK_HANDLE_REALTIME                            (0x00000020)
#define MARK_HANDLE_NOT_REALTIME                        (0x00000040)
#define MARK_HANDLE_FILTER_METADATA                     (0x00000200)        // 8.1 update and newer

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define MARK_HANDLE_READ_COPY                           (0x00000080)
#define MARK_HANDLE_NOT_READ_COPY                       (0x00000100)
#define MARK_HANDLE_RETURN_PURGE_FAILURE                (0x00000400)        // 8.1 and newer

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

#define MARK_HANDLE_CLOUD_SYNC                          (0x00000800)

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#define MARK_HANDLE_DISABLE_FILE_METADATA_OPTIMIZATION  (0x00001000)        // 9.0 and newer
#define MARK_HANDLE_ENABLE_USN_SOURCE_ON_PAGING_IO      (0x00002000)        // 9.0 and newer
#define MARK_HANDLE_SKIP_COHERENCY_SYNC_DISALLOW_WRITES (0x00004000)        // 9.0 and newer

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

#define NO_8DOT3_NAME_PRESENT               (0x00000001)
#define REMOVED_8DOT3_NAME                  (0x00000002)

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_SECURITY_ID_CHECK ======================
//
// Structure for FSCTL_SECURITY_ID_CHECK
//

typedef struct {

    ACCESS_MASK DesiredAccess;
    ULONG SecurityIds[1];

} BULK_SECURITY_TEST_DATA, *PBULK_SECURITY_TEST_DATA;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_IS_VOLUME_DIRTY ======================
//
//  Output flags for the FSCTL_IS_VOLUME_DIRTY
//

#define VOLUME_IS_DIRTY                  (0x00000001)
#define VOLUME_UPGRADE_SCHEDULED         (0x00000002)
#define VOLUME_SESSION_OPEN              (0x00000004)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
// Structures for FSCTL_FILE_PREFETCH
//

typedef struct _FILE_PREFETCH {
    ULONG Type;
    ULONG Count;
    ULONGLONG Prefetch[1];
} FILE_PREFETCH, *PFILE_PREFETCH;

typedef struct _FILE_PREFETCH_EX {
    ULONG Type;
    ULONG Count;
    PVOID Context;
    ULONGLONG Prefetch[1];
} FILE_PREFETCH_EX, *PFILE_PREFETCH_EX;

#define FILE_PREFETCH_TYPE_FOR_CREATE       0x1
#define FILE_PREFETCH_TYPE_FOR_DIRENUM      0x2
#define FILE_PREFETCH_TYPE_FOR_CREATE_EX    0x3
#define FILE_PREFETCH_TYPE_FOR_DIRENUM_EX   0x4

#define FILE_PREFETCH_TYPE_MAX              0x4

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

//
//==================== FSCTL_FILESYSTEM_GET_STATISTICS ======================
//
// Structures for FSCTL_FILESYSTEM_GET_STATISTICS
//
// Filesystem performance counters
//

typedef struct _FILESYSTEM_STATISTICS {

    USHORT FileSystemType;
    USHORT Version;                     // currently version 1

    ULONG SizeOfCompleteStructure;      // must by a mutiple of 64 bytes

    ULONG UserFileReads;
    ULONG UserFileReadBytes;
    ULONG UserDiskReads;
    ULONG UserFileWrites;
    ULONG UserFileWriteBytes;
    ULONG UserDiskWrites;

    ULONG MetaDataReads;
    ULONG MetaDataReadBytes;
    ULONG MetaDataDiskReads;
    ULONG MetaDataWrites;
    ULONG MetaDataWriteBytes;
    ULONG MetaDataDiskWrites;

    //
    //  The file system's private structure is appended here.
    //

} FILESYSTEM_STATISTICS, *PFILESYSTEM_STATISTICS;

// values for FS_STATISTICS.FileSystemType

#define FILESYSTEM_STATISTICS_TYPE_NTFS     1
#define FILESYSTEM_STATISTICS_TYPE_FAT      2
#define FILESYSTEM_STATISTICS_TYPE_EXFAT    3
#define FILESYSTEM_STATISTICS_TYPE_REFS     4

//
//  File System Specific Statistics Data
//

typedef struct _FAT_STATISTICS {
    ULONG CreateHits;
    ULONG SuccessfulCreates;
    ULONG FailedCreates;

    ULONG NonCachedReads;
    ULONG NonCachedReadBytes;
    ULONG NonCachedWrites;
    ULONG NonCachedWriteBytes;

    ULONG NonCachedDiskReads;
    ULONG NonCachedDiskWrites;
} FAT_STATISTICS, *PFAT_STATISTICS;

typedef struct _EXFAT_STATISTICS {
    ULONG CreateHits;
    ULONG SuccessfulCreates;
    ULONG FailedCreates;

    ULONG NonCachedReads;
    ULONG NonCachedReadBytes;
    ULONG NonCachedWrites;
    ULONG NonCachedWriteBytes;

    ULONG NonCachedDiskReads;
    ULONG NonCachedDiskWrites;
} EXFAT_STATISTICS, *PEXFAT_STATISTICS;

typedef struct _NTFS_STATISTICS {

    ULONG LogFileFullExceptions;
    ULONG OtherExceptions;

    //
    // Other meta data io's
    //

    ULONG MftReads;
    ULONG MftReadBytes;
    ULONG MftWrites;
    ULONG MftWriteBytes;
    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
        USHORT Flush;
    } MftWritesUserLevel;

    USHORT MftWritesFlushForLogFileFull;
    USHORT MftWritesLazyWriter;
    USHORT MftWritesUserRequest;

    ULONG Mft2Writes;
    ULONG Mft2WriteBytes;
    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
        USHORT Flush;
    } Mft2WritesUserLevel;

    USHORT Mft2WritesFlushForLogFileFull;
    USHORT Mft2WritesLazyWriter;
    USHORT Mft2WritesUserRequest;

    ULONG RootIndexReads;
    ULONG RootIndexReadBytes;
    ULONG RootIndexWrites;
    ULONG RootIndexWriteBytes;

    ULONG BitmapReads;
    ULONG BitmapReadBytes;
    ULONG BitmapWrites;
    ULONG BitmapWriteBytes;

    USHORT BitmapWritesFlushForLogFileFull;
    USHORT BitmapWritesLazyWriter;
    USHORT BitmapWritesUserRequest;

    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
    } BitmapWritesUserLevel;

    ULONG MftBitmapReads;
    ULONG MftBitmapReadBytes;
    ULONG MftBitmapWrites;
    ULONG MftBitmapWriteBytes;

    USHORT MftBitmapWritesFlushForLogFileFull;
    USHORT MftBitmapWritesLazyWriter;
    USHORT MftBitmapWritesUserRequest;

    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
        USHORT Flush;
    } MftBitmapWritesUserLevel;

    ULONG UserIndexReads;
    ULONG UserIndexReadBytes;
    ULONG UserIndexWrites;
    ULONG UserIndexWriteBytes;

    //
    // Additions for NT 5.0
    //

    ULONG LogFileReads;
    ULONG LogFileReadBytes;
    ULONG LogFileWrites;
    ULONG LogFileWriteBytes;

    struct {
        ULONG Calls;                // number of individual calls to allocate clusters
        ULONG Clusters;             // number of clusters allocated
        ULONG Hints;                // number of times a hint was specified

        ULONG RunsReturned;         // number of runs used to satisify all the requests

        ULONG HintsHonored;         // number of times the hint was useful
        ULONG HintsClusters;        // number of clusters allocated via the hint
        ULONG Cache;                // number of times the cache was useful other than the hint
        ULONG CacheClusters;        // number of clusters allocated via the cache other than the hint
        ULONG CacheMiss;            // number of times the cache wasn't useful
        ULONG CacheMissClusters;    // number of clusters allocated without the cache
    } Allocate;

    //
    //  Additions for Windows 8.1
    //

    ULONG DiskResourcesExhausted;

    //
    //  All future expansion of this structure needs to be in NTFS_STATISTICS_EX starting Windows 10
    //

} NTFS_STATISTICS, *PNTFS_STATISTICS;

typedef struct _FILESYSTEM_STATISTICS_EX {

    USHORT FileSystemType;
    USHORT Version;                     // currently version 1

    ULONG SizeOfCompleteStructure;      // must by a mutiple of 64 bytes

    ULONGLONG UserFileReads;
    ULONGLONG UserFileReadBytes;
    ULONGLONG UserDiskReads;
    ULONGLONG UserFileWrites;
    ULONGLONG UserFileWriteBytes;
    ULONGLONG UserDiskWrites;

    ULONGLONG MetaDataReads;
    ULONGLONG MetaDataReadBytes;
    ULONGLONG MetaDataDiskReads;
    ULONGLONG MetaDataWrites;
    ULONGLONG MetaDataWriteBytes;
    ULONGLONG MetaDataDiskWrites;

    //
    //  The file system's private structure is appended here.
    //

} FILESYSTEM_STATISTICS_EX, *PFILESYSTEM_STATISTICS_EX;

typedef struct _NTFS_STATISTICS_EX {

    ULONG LogFileFullExceptions;
    ULONG OtherExceptions;

    //
    // Other meta data io's
    //

    ULONGLONG MftReads;
    ULONGLONG MftReadBytes;
    ULONGLONG MftWrites;
    ULONGLONG MftWriteBytes;
    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } MftWritesUserLevel;

    ULONG MftWritesFlushForLogFileFull;
    ULONG MftWritesLazyWriter;
    ULONG MftWritesUserRequest;

    ULONGLONG Mft2Writes;
    ULONGLONG Mft2WriteBytes;
    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } Mft2WritesUserLevel;

    ULONG Mft2WritesFlushForLogFileFull;
    ULONG Mft2WritesLazyWriter;
    ULONG Mft2WritesUserRequest;

    ULONGLONG RootIndexReads;
    ULONGLONG RootIndexReadBytes;
    ULONGLONG RootIndexWrites;
    ULONGLONG RootIndexWriteBytes;

    ULONGLONG BitmapReads;
    ULONGLONG BitmapReadBytes;
    ULONGLONG BitmapWrites;
    ULONGLONG BitmapWriteBytes;

    ULONG BitmapWritesFlushForLogFileFull;
    ULONG BitmapWritesLazyWriter;
    ULONG BitmapWritesUserRequest;

    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } BitmapWritesUserLevel;

    ULONGLONG MftBitmapReads;
    ULONGLONG MftBitmapReadBytes;
    ULONGLONG MftBitmapWrites;
    ULONGLONG MftBitmapWriteBytes;

    ULONG MftBitmapWritesFlushForLogFileFull;
    ULONG MftBitmapWritesLazyWriter;
    ULONG MftBitmapWritesUserRequest;

    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } MftBitmapWritesUserLevel;

    ULONGLONG UserIndexReads;
    ULONGLONG UserIndexReadBytes;
    ULONGLONG UserIndexWrites;
    ULONGLONG UserIndexWriteBytes;

    //
    // Additions for NT 5.0
    //

    ULONGLONG LogFileReads;
    ULONGLONG LogFileReadBytes;
    ULONGLONG LogFileWrites;
    ULONGLONG LogFileWriteBytes;

    struct {
        ULONG Calls;                    // number of individual calls to allocate clusters
        ULONG RunsReturned;             // number of runs used to satisify all the requests
        ULONG Hints;                    // number of times a hint was specified
        ULONG HintsHonored;             // number of times the hint was useful
        ULONG Cache;                    // number of times the cache was useful other than the hint
        ULONG CacheMiss;                // number of times the cache wasn't useful

        ULONGLONG Clusters;             // number of clusters allocated
        ULONGLONG HintsClusters;        // number of clusters allocated via the hint
        ULONGLONG CacheClusters;        // number of clusters allocated via the cache other than the hint
        ULONGLONG CacheMissClusters;    // number of clusters allocated without the cache
    } Allocate;

    //
    //  Additions for Windows 8.1
    //

    ULONG DiskResourcesExhausted;

    //
    //  Additions for Windows 10
    //

    ULONGLONG VolumeTrimCount;
    ULONGLONG VolumeTrimTime;
    ULONGLONG VolumeTrimByteCount;

    ULONGLONG FileLevelTrimCount;
    ULONGLONG FileLevelTrimTime;
    ULONGLONG FileLevelTrimByteCount;

    ULONGLONG VolumeTrimSkippedCount;
    ULONGLONG VolumeTrimSkippedByteCount;

} NTFS_STATISTICS_EX, *PNTFS_STATISTICS_EX;

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_SET_OBJECT_ID ================================
//==================== FSCTL_GET_OBJECT_ID ================================
//==================== FSCTL_CREATE_OR_GET_OBJECT_ID ======================
//
//  Structures for FSCTL_SET_OBJECT_ID, FSCTL_GET_OBJECT_ID, and
//  FSCTL_CREATE_OR_GET_OBJECT_ID
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

typedef struct _FILE_OBJECTID_BUFFER {

    //
    //  This is the portion of the object id that is indexed.
    //

    UCHAR ObjectId[16];

    //
    //  This portion of the object id is not indexed, it's just
    //  some metadata for the user's benefit.
    //

    union {
        struct {
            UCHAR BirthVolumeId[16];
            UCHAR BirthObjectId[16];
            UCHAR DomainId[16];
        } DUMMYSTRUCTNAME;
        UCHAR ExtendedInfo[48];
    } DUMMYUNIONNAME;

} FILE_OBJECTID_BUFFER, *PFILE_OBJECTID_BUFFER;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 ) /* nonstandard extension used : nameless struct/union */
#endif

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_SET_SPARSE ======================
//
// Structure for FSCTL_SET_SPARSE
//

typedef struct _FILE_SET_SPARSE_BUFFER {
    BOOLEAN SetSparse;
} FILE_SET_SPARSE_BUFFER, *PFILE_SET_SPARSE_BUFFER;


#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_SET_ZERO_DATA ======================
//
// Structure for FSCTL_SET_ZERO_DATA
//

typedef struct _FILE_ZERO_DATA_INFORMATION {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER BeyondFinalZero;

} FILE_ZERO_DATA_INFORMATION, *PFILE_ZERO_DATA_INFORMATION;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#define FILE_ZERO_DATA_INFORMATION_FLAG_PRESERVE_CACHED_DATA       (0x00000001)
typedef struct _FILE_ZERO_DATA_INFORMATION_EX {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER BeyondFinalZero;
    ULONG Flags;

} FILE_ZERO_DATA_INFORMATION_EX, *PFILE_ZERO_DATA_INFORMATION_EX;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_QUERY_ALLOCATED_RANGES ======================
//
// Structure for FSCTL_QUERY_ALLOCATED_RANGES
//

//
// Querying the allocated ranges requires an output buffer to store the
// allocated ranges and an input buffer to specify the range to query.
// The input buffer contains a single entry, the output buffer is an
// array of the following structure.
//

typedef struct _FILE_ALLOCATED_RANGE_BUFFER {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER Length;

} FILE_ALLOCATED_RANGE_BUFFER, *PFILE_ALLOCATED_RANGE_BUFFER;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//====================== FSCTL_SET_ENCRYPTION ===============================
//====================== FSCTL_WRITE_RAW_ENCRYPTED ==========================
//====================== FSCTL_READ_RAW_ENCRYPTED ===========================
//
// Structures for FSCTL_SET_ENCRYPTION, FSCTL_WRITE_RAW_ENCRYPTED, and FSCTL_READ_RAW_ENCRYPTED
//

//
//  The input buffer to set encryption indicates whether we are to encrypt/decrypt a file
//  or an individual stream.
//

typedef struct _ENCRYPTION_BUFFER {

    ULONG EncryptionOperation;
    UCHAR Private[1];

} ENCRYPTION_BUFFER, *PENCRYPTION_BUFFER;

#define FILE_SET_ENCRYPTION         0x00000001
#define FILE_CLEAR_ENCRYPTION       0x00000002
#define STREAM_SET_ENCRYPTION       0x00000003
#define STREAM_CLEAR_ENCRYPTION     0x00000004

#define MAXIMUM_ENCRYPTION_VALUE    0x00000004

//
//  The optional output buffer to set encryption indicates that the last encrypted
//  stream in a file has been marked as decrypted.
//

typedef struct _DECRYPTION_STATUS_BUFFER {

    BOOLEAN NoEncryptedStreams;

} DECRYPTION_STATUS_BUFFER, *PDECRYPTION_STATUS_BUFFER;

#define ENCRYPTION_FORMAT_DEFAULT        (0x01)

//
//  Request Encrypted Data structure.  This is used to indicate
//  the range of the file to read.  It also describes the
//  output buffer used to return the data.
//

typedef struct _REQUEST_RAW_ENCRYPTED_DATA {

    //
    //  Requested file offset and requested length to read.
    //  The fsctl will round the starting offset down
    //  to a file system boundary.  It will also
    //  round the length up to a file system boundary.
    //

    LONGLONG FileOffset;
    ULONG Length;

} REQUEST_RAW_ENCRYPTED_DATA, *PREQUEST_RAW_ENCRYPTED_DATA;

//
//  Encrypted Data Information structure.  This structure
//  is used to return raw encrypted data from a file in
//  order to perform off-line recovery.  The data will be
//  encrypted or encrypted and compressed.  The off-line
//  service will need to use the encryption and compression
//  format information to recover the file data.  In the
//  event that the data is both encrypted and compressed then
//  the decryption must occur before decompression.  All
//  the data units below must be encrypted and compressed
//  with the same format.
//
//  The data will be returned in units.  The data unit size
//  will be fixed per request.  If the data is compressed
//  then the data unit size will be the compression unit size.
//
//  This structure is at the beginning of the buffer used to
//  return the encrypted data.  The actual raw bytes from
//  the file will follow this buffer.  The offset of the
//  raw bytes from the beginning of this structure is
//  specified in the REQUEST_RAW_ENCRYPTED_DATA structure
//  described above.
//

typedef struct _ENCRYPTED_DATA_INFO {

    //
    //  This is the file offset for the first entry in the
    //  data block array.  The file system will round
    //  the requested start offset down to a boundary
    //  that is consistent with the format of the file.
    //

    ULONGLONG StartingFileOffset;

    //
    //  Data offset in output buffer.  The output buffer
    //  begins with an ENCRYPTED_DATA_INFO structure.
    //  The file system will then store the raw bytes from
    //  disk beginning at the following offset within the
    //  output buffer.
    //

    ULONG OutputBufferOffset;

    //
    //  The number of bytes being returned that are within
    //  the size of the file.  If this value is less than
    //  (NumberOfDataBlocks << DataUnitShift), it means the
    //  end of the file occurs within this transfer.  Any
    //  data beyond file size is invalid and was never
    //  passed to the encryption driver.
    //

    ULONG BytesWithinFileSize;

    //
    //  The number of bytes being returned that are below
    //  valid data length.  If this value is less than
    //  (NumberOfDataBlocks << DataUnitShift), it means the
    //  end of the valid data occurs within this transfer.
    //  After decrypting the data from this transfer, any
    //  byte(s) beyond valid data length must be zeroed.
    //

    ULONG BytesWithinValidDataLength;

    //
    //  Code for the compression format as defined in
    //  ntrtl.h.  Note that COMPRESSION_FORMAT_NONE
    //  and COMPRESSION_FORMAT_DEFAULT are invalid if
    //  any of the described chunks are compressed.
    //

    USHORT CompressionFormat;

    //
    //  The DataUnit is the granularity used to access the
    //  disk.  It will be the same as the compression unit
    //  size for a compressed file.  For an uncompressed
    //  file, it will be some cluster-aligned power of 2 that
    //  the file system deems convenient.  A caller should
    //  not expect that successive calls will have the
    //  same data unit shift value as the previous call.
    //
    //  Since chunks and compression units are expected to be
    //  powers of 2 in size, we express them log2.  So, for
    //  example (1 << ChunkShift) == ChunkSizeInBytes.  The
    //  ClusterShift indicates how much space must be saved
    //  to successfully compress a compression unit - each
    //  successfully compressed data unit must occupy
    //  at least one cluster less in bytes than an uncompressed
    //  data block unit.
    //

    UCHAR DataUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;

    //
    //  The format for the encryption.
    //

    UCHAR EncryptionFormat;

    //
    //  This is the number of entries in the data block size
    //  array.
    //

    USHORT NumberOfDataBlocks;

    //
    //  This is an array of sizes in the data block array.  There
    //  must be one entry in this array for each data block
    //  read from disk.  The size has a different meaning
    //  depending on whether the file is compressed.
    //
    //  A size of zero always indicates that the final data consists entirely
    //  of zeroes.  There is no decryption or decompression to
    //  perform.
    //
    //  If the file is compressed then the data block size indicates
    //  whether this block is compressed.  A size equal to
    //  the block size indicates that the corresponding block did
    //  not compress.  Any other non-zero size indicates the
    //  size of the compressed data which needs to be
    //  decrypted/decompressed.
    //
    //  If the file is not compressed then the data block size
    //  indicates the amount of data within the block that
    //  needs to be decrypted.  Any other non-zero size indicates
    //  that the remaining bytes in the data unit within the file
    //  consists of zeros.  An example of this is when the
    //  the read spans the valid data length of the file.  There
    //  is no data to decrypt past the valid data length.
    //

    ULONG DataBlockSize[ANYSIZE_ARRAY];

} ENCRYPTED_DATA_INFO, *PENCRYPTED_DATA_INFO;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
//
//  Extended encryption structure for read/write raw encrypted operations.
//  This was needed so we can explicitly indicate if a file is sparse or not
//
//  Flag to indicate the encrypted file is sparse
//

#define ENCRYPTED_DATA_INFO_SPARSE_FILE    1

typedef struct _EXTENDED_ENCRYPTED_DATA_INFO {

    //
    //  This is really a 4 byte character array which
    //  must have the value "EXTD".  We use this
    //  to determine if we should read the extended data
    //  or not.
    //

    ULONG ExtendedCode;

    //
    //  The length of the extended data structure
    //

    ULONG Length;

    //
    //  Encrypted data flags (currently only sparse is defined)
    //

    ULONG Flags;
    ULONG Reserved;

} EXTENDED_ENCRYPTED_DATA_INFO, *PEXTENDED_ENCRYPTED_DATA_INFO;
#endif /*(_WIN32_WINNT >= _WIN32_WINNT_WIN7)*/


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//======================== FSCTL_READ_FROM_PLEX ===========================
//
//  Request Plex Read Data structure.  This is used to indicate
//  the range of the file to read.  It also describes
//  which plex to perform the read from.
//

typedef struct _PLEX_READ_DATA_REQUEST {

    //
    //  Requested offset and length to read.
    //  The offset can be the virtual offset (vbo) in to a file,
    //  or a volume. In the case of a file offset,
    //  the fsd will round the starting offset down
    //  to a file system boundary.  It will also
    //  round the length up to a file system boundary and
    //  enforce any other applicable limits.
    //

    LARGE_INTEGER ByteOffset;
    ULONG ByteLength;
    ULONG PlexNumber;

} PLEX_READ_DATA_REQUEST, *PPLEX_READ_DATA_REQUEST;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//======================== FSCTL_SIS_COPYFILE ===========================
//
// Source and destination file names are passed in the FileNameBuffer.
// Both strings are null terminated, with the source name starting at
// the beginning of FileNameBuffer, and the destination name immediately
// following.  Length fields include terminating nulls.
//

typedef struct _SI_COPYFILE {
    ULONG SourceFileNameLength;
    ULONG DestinationFileNameLength;
    ULONG Flags;
    WCHAR FileNameBuffer[1];
} SI_COPYFILE, *PSI_COPYFILE;

#define COPYFILE_SIS_LINK       0x0001              // Copy only if source is SIS
#define COPYFILE_SIS_REPLACE    0x0002              // Replace destination if it exists, otherwise don't.
#define COPYFILE_SIS_FLAGS      0x0003
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)
//
//======================== FSCTL_MAKE_MEDIA_COMPATIBLE ===========================
//
//  Input parameter structure for FSCTL_MAKE_MEDIA_COMPATIBLE
//

typedef struct _FILE_MAKE_COMPATIBLE_BUFFER {
    BOOLEAN CloseDisc;
} FILE_MAKE_COMPATIBLE_BUFFER, *PFILE_MAKE_COMPATIBLE_BUFFER;

//
//======================== FSCTL_SET_DEFECT_MANAGEMENT ===========================
//
//  Input parameter structure for FSCTL_SET_DEFECT_MANAGEMENT
//

typedef struct _FILE_SET_DEFECT_MGMT_BUFFER {
    BOOLEAN Disable;
} FILE_SET_DEFECT_MGMT_BUFFER, *PFILE_SET_DEFECT_MGMT_BUFFER;

//
//======================== FSCTL_QUERY_SPARING_INFO ===========================
//
//  Output structure for FSCTL_QUERY_SPARING_INFO
//

typedef struct _FILE_QUERY_SPARING_BUFFER {
    ULONG SparingUnitBytes;
    BOOLEAN SoftwareSparing;
    ULONG TotalSpareBlocks;
    ULONG FreeSpareBlocks;
} FILE_QUERY_SPARING_BUFFER, *PFILE_QUERY_SPARING_BUFFER;

//
//===================== FSCTL_QUERY_ON_DISK_VOLUME_INFO ========================
//
//  Output structure for FSCTL_QUERY_ON_DISK_VOLUME_INFO
//

typedef struct _FILE_QUERY_ON_DISK_VOL_INFO_BUFFER {
    LARGE_INTEGER DirectoryCount;       // -1 = unknown
    LARGE_INTEGER FileCount;            // -1 = unknown
    USHORT FsFormatMajVersion;          // -1 = unknown or n/a
    USHORT FsFormatMinVersion;          // -1 = unknown or n/a
    WCHAR FsFormatName[ 12];
    LARGE_INTEGER FormatTime;
    LARGE_INTEGER LastUpdateTime;
    WCHAR CopyrightInfo[ 34];
    WCHAR AbstractInfo[ 34];
    WCHAR FormattingImplementationInfo[ 34];
    WCHAR LastModifyingImplementationInfo[ 34];
} FILE_QUERY_ON_DISK_VOL_INFO_BUFFER, *PFILE_QUERY_ON_DISK_VOL_INFO_BUFFER;

//
//===================== FSCTL_SET_REPAIR ========================
//
//  Input flags for FSCTL_SET_REPAIR
//

#define SET_REPAIR_ENABLED                                      (0x00000001)
#define SET_REPAIR_WARN_ABOUT_DATA_LOSS                         (0x00000008)
#define SET_REPAIR_DISABLED_AND_BUGCHECK_ON_CORRUPT             (0x00000010)
#define SET_REPAIR_VALID_MASK                                   (0x00000019)

//
//===================== FSCTL_INITIATE_REPAIR ========================
//
//  Optional output structure for FSCTL_INITIATE_REPAIR
//

#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_NOT_IN_USE                               (0x0000000000000001)
#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_REUSED                                   (0x0000000000000002)
#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_NOT_EXIST                                (0x0000000000000004)
#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_NOT_BASE_RECORD                          (0x0000000000000008)
#define FILE_INITIATE_REPAIR_HINT1_SYSTEM_FILE                                          (0x0000000000000010)
#define FILE_INITIATE_REPAIR_HINT1_NOT_IMPLEMENTED                                      (0x0000000000000020)
#define FILE_INITIATE_REPAIR_HINT1_UNABLE_TO_REPAIR                                     (0x0000000000000040)
#define FILE_INITIATE_REPAIR_HINT1_REPAIR_DISABLED                                      (0x0000000000000080)
#define FILE_INITIATE_REPAIR_HINT1_RECURSIVELY_CORRUPTED                                (0x0000000000000100)
#define FILE_INITIATE_REPAIR_HINT1_ORPHAN_GENERATED                                     (0x0000000000000200)
#define FILE_INITIATE_REPAIR_HINT1_REPAIRED                                             (0x0000000000000400)
#define FILE_INITIATE_REPAIR_HINT1_NOTHING_WRONG                                        (0x0000000000000800)
#define FILE_INITIATE_REPAIR_HINT1_ATTRIBUTE_NOT_FOUND                                  (0x0000000000001000)
#define FILE_INITIATE_REPAIR_HINT1_POTENTIAL_CROSSLINK                                  (0x0000000000002000)
#define FILE_INITIATE_REPAIR_HINT1_STALE_INFORMATION                                    (0x0000000000004000)
#define FILE_INITIATE_REPAIR_HINT1_CLUSTERS_ALREADY_IN_USE                              (0x0000000000008000)
#define FILE_INITIATE_REPAIR_HINT1_LCN_NOT_EXIST                                        (0x0000000000010000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_RUN_LENGTH                                   (0x0000000000020000)
#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_NOT_ORPHAN                               (0x0000000000040000)
#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_IS_BASE_RECORD                           (0x0000000000080000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_ARRAY_LENGTH_COUNT                           (0x0000000000100000)
#define FILE_INITIATE_REPAIR_HINT1_SID_VALID                                            (0x0000000000200000)
#define FILE_INITIATE_REPAIR_HINT1_SID_MISMATCH                                         (0x0000000000400000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_PARENT                                       (0x0000000000800000)
#define FILE_INITIATE_REPAIR_HINT1_PARENT_FILE_RECORD_NOT_IN_USE                        (0x0000000001000000)
#define FILE_INITIATE_REPAIR_HINT1_PARENT_FILE_RECORD_REUSED                            (0x0000000002000000)
#define FILE_INITIATE_REPAIR_HINT1_PARENT_FILE_RECORD_NOT_EXIST                         (0x0000000004000000)
#define FILE_INITIATE_REPAIR_HINT1_PARENT_FILE_RECORD_NOT_BASE_RECORD                   (0x0000000008000000)
#define FILE_INITIATE_REPAIR_HINT1_PARENT_FILE_RECORD_NOT_INDEX                         (0x0000000010000000)
#define FILE_INITIATE_REPAIR_HINT1_VALID_INDEX_ENTRY                                    (0x0000000020000000)
#define FILE_INITIATE_REPAIR_HINT1_OUT_OF_GENERIC_NAMES                                 (0x0000000040000000)
#define FILE_INITIATE_REPAIR_HINT1_OUT_OF_RESOURCE                                      (0x0000000080000000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_LCN                                          (0x0000000100000000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_VCN                                          (0x0000000200000000)
#define FILE_INITIATE_REPAIR_HINT1_NAME_CONFLICT                                        (0x0000000400000000)
#define FILE_INITIATE_REPAIR_HINT1_ORPHAN                                               (0x0000000800000000)
#define FILE_INITIATE_REPAIR_HINT1_ATTRIBUTE_TOO_SMALL                                  (0x0000001000000000)
#define FILE_INITIATE_REPAIR_HINT1_ATTRIBUTE_NON_RESIDENT                               (0x0000002000000000)
#define FILE_INITIATE_REPAIR_HINT1_DENY_DEFRAG                                          (0x0000004000000000)
#define FILE_INITIATE_REPAIR_HINT1_PREVIOUS_PARENT_STILL_VALID                          (0x0000008000000000)
#define FILE_INITIATE_REPAIR_HINT1_INDEX_ENTRY_MISMATCH                                 (0x0000010000000000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_ORPHAN_RECOVERY_NAME                         (0x0000020000000000)
#define FILE_INITIATE_REPAIR_HINT1_MULTIPLE_FILE_NAME_ATTRIBUTES                        (0x0000040000000000)


//
//  We need to expose CLSN definition???????????????
//
typedef ULONGLONG CLSN;

typedef struct _FILE_INITIATE_REPAIR_OUTPUT_BUFFER {
    ULONGLONG Hint1;
    ULONGLONG Hint2;
    CLSN Clsn;
    NTSTATUS Status;
} FILE_INITIATE_REPAIR_OUTPUT_BUFFER, *PFILE_INITIATE_REPAIR_OUTPUT_BUFFER;

//
//===================== FSCTL_SHRINK_VOLUME ========================
//
//  Input structures for FSCTL_SHRINK_VOLUME.
//

typedef enum _SHRINK_VOLUME_REQUEST_TYPES
{
    ShrinkPrepare = 1,
    ShrinkCommit,
    ShrinkAbort

} SHRINK_VOLUME_REQUEST_TYPES, *PSHRINK_VOLUME_REQUEST_TYPES;

typedef struct _SHRINK_VOLUME_INFORMATION
{
    SHRINK_VOLUME_REQUEST_TYPES ShrinkRequestType;
    ULONGLONG Flags;
    LONGLONG NewNumberOfSectors;

} SHRINK_VOLUME_INFORMATION, *PSHRINK_VOLUME_INFORMATION;

//
//========= FSCTL_TXFS_MODIFY_RM,  FSCTL_TXFS_QUERY_RM_INFORMATION ============
//
//  Structures for FSCTL_TXFS_MODIFY_RM and FSCTL_TXFS_QUERY_RM_INFORMATION
//
//  For ModifyRM, TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS and
//  TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT are mutually exclusive.
//  You can specify the log growth amount in number of containers or as a percentage.
//
//  For ModifyRM, TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MAX and
//  TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX are mutually exclusive.
//
//  For ModifyRM, TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MIN and
//  TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN are mutually exclusive.
//
//  For ModifyRM, TXFS_RM_FLAG_RESET_RM_AT_NEXT_START and
//  TXFS_RM_FLAG_DO_NOT_RESET_RM_AT_NEXT_START are mutually exclusive and only
//  apply to default RMs.
//
//  For ModifyRM, TXFS_RM_FLAG_PREFER_CONSISTENCY and
//  TXFS_RM_FLAG_PREFER_AVAILABILITY are mutually exclusive.  After calling ModifyRM
//  with one of these flags set the RM must be restarted for the change to take effect.
//

#define TXFS_RM_FLAG_LOGGING_MODE                           0x00000001
#define TXFS_RM_FLAG_RENAME_RM                              0x00000002
#define TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MAX                0x00000004
#define TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MIN                0x00000008
#define TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS    0x00000010
#define TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT           0x00000020
#define TXFS_RM_FLAG_LOG_AUTO_SHRINK_PERCENTAGE             0x00000040
#define TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX             0x00000080
#define TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN             0x00000100
#define TXFS_RM_FLAG_GROW_LOG                               0x00000400
#define TXFS_RM_FLAG_SHRINK_LOG                             0x00000800
#define TXFS_RM_FLAG_ENFORCE_MINIMUM_SIZE                   0x00001000
#define TXFS_RM_FLAG_PRESERVE_CHANGES                       0x00002000
#define TXFS_RM_FLAG_RESET_RM_AT_NEXT_START                 0x00004000
#define TXFS_RM_FLAG_DO_NOT_RESET_RM_AT_NEXT_START          0x00008000
#define TXFS_RM_FLAG_PREFER_CONSISTENCY                     0x00010000
#define TXFS_RM_FLAG_PREFER_AVAILABILITY                    0x00020000

#define TXFS_LOGGING_MODE_SIMPLE        (0x0001)
#define TXFS_LOGGING_MODE_FULL          (0x0002)

#define TXFS_TRANSACTION_STATE_NONE         0x00
#define TXFS_TRANSACTION_STATE_ACTIVE       0x01
#define TXFS_TRANSACTION_STATE_PREPARED     0x02
#define TXFS_TRANSACTION_STATE_NOTACTIVE    0x03

#define TXFS_MODIFY_RM_VALID_FLAGS                                      \
                (TXFS_RM_FLAG_LOGGING_MODE                          |   \
                 TXFS_RM_FLAG_RENAME_RM                             |   \
                 TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MAX               |   \
                 TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MIN               |   \
                 TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS   |   \
                 TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT          |   \
                 TXFS_RM_FLAG_LOG_AUTO_SHRINK_PERCENTAGE            |   \
                 TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX            |   \
                 TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN            |   \
                 TXFS_RM_FLAG_SHRINK_LOG                            |   \
                 TXFS_RM_FLAG_GROW_LOG                              |   \
                 TXFS_RM_FLAG_ENFORCE_MINIMUM_SIZE                  |   \
                 TXFS_RM_FLAG_PRESERVE_CHANGES                      |   \
                 TXFS_RM_FLAG_RESET_RM_AT_NEXT_START                |   \
                 TXFS_RM_FLAG_DO_NOT_RESET_RM_AT_NEXT_START         |   \
                 TXFS_RM_FLAG_PREFER_CONSISTENCY                    |   \
                 TXFS_RM_FLAG_PREFER_AVAILABILITY)

typedef struct _TXFS_MODIFY_RM {

    //
    //  TXFS_RM_FLAG_* flags
    //

    ULONG Flags;

    //
    //  Maximum log container count if TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MAX is set.
    //

    ULONG LogContainerCountMax;

    //
    //  Minimum log container count if TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MIN is set.
    //

    ULONG LogContainerCountMin;

    //
    //  Target log container count for TXFS_RM_FLAG_SHRINK_LOG or _GROW_LOG.
    //

    ULONG LogContainerCount;

    //
    //  When the log is full, increase its size by this much.  Indicated as either a percent of
    //  the log size or absolute container count, depending on which of the TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_*
    //  flags is set.
    //

    ULONG LogGrowthIncrement;

    //
    //  Sets autoshrink policy if TXFS_RM_FLAG_LOG_AUTO_SHRINK_PERCENTAGE is set.  Autoshrink
    //  makes the log shrink so that no more than this percentage of the log is free at any time.
    //

    ULONG LogAutoShrinkPercentage;

    //
    //  Reserved.
    //

    ULONGLONG Reserved;

    //
    //  If TXFS_RM_FLAG_LOGGING_MODE is set, this must contain one of TXFS_LOGGING_MODE_SIMPLE
    //  or TXFS_LOGGING_MODE_FULL.
    //

    USHORT LoggingMode;

} TXFS_MODIFY_RM,
 *PTXFS_MODIFY_RM;

#define TXFS_RM_STATE_NOT_STARTED       0
#define TXFS_RM_STATE_STARTING          1
#define TXFS_RM_STATE_ACTIVE            2
#define TXFS_RM_STATE_SHUTTING_DOWN     3

//
//  The flags field for query RM information is used for the following information:
//
//  1)  To indicate whether the LogGrowthIncrement field is reported as a percent
//      or as a number of containers.  Possible flag values for this are:
//
//      TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS xor TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT
//
//  2)  To indicate that there is no set maximum or minimum container count.  Possible
//      flag values for this are:
//
//      TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX
//      TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN
//
//      Note that these flags are not mutually exclusive.
//
//  2)  To report whether the RM will be reset the next time it is started.  Note that
//      only the default RM will report a meaningful value (secondary RMs will always
//      report DO_NOT_RESET) Possible flag values for this are:
//
//      TXFS_RM_FLAG_RESET_RM_AT_NEXT_START xor TXFS_RM_FLAG_DO_NOT_RESET_RM_AT_NEXT_START
//
//  3)  To report whether the RM is in consistency mode or availability mode.  Possible
//      flag values for this are:
//
//      TXFS_RM_FLAG_PREFER_CONSISTENCY xor TXFS_RM_FLAG_PREFER_AVAILABILITY
//
//  The RmState field can have exactly one of the above-defined TXF_RM_STATE_ values.
//

#define TXFS_QUERY_RM_INFORMATION_VALID_FLAGS                           \
                (TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS   |   \
                 TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT          |   \
                 TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX            |   \
                 TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN            |   \
                 TXFS_RM_FLAG_RESET_RM_AT_NEXT_START                |   \
                 TXFS_RM_FLAG_DO_NOT_RESET_RM_AT_NEXT_START         |   \
                 TXFS_RM_FLAG_PREFER_CONSISTENCY                    |   \
                 TXFS_RM_FLAG_PREFER_AVAILABILITY)

typedef struct _TXFS_QUERY_RM_INFORMATION {

    //
    //  If the return value is STATUS_BUFFER_OVERFLOW (ERROR_MORE_DATA), this
    //  will indicate how much space is required to hold everything.
    //

    ULONG BytesRequired;

    //
    //  LSN of earliest available record in the RM's log.
    //

    ULONGLONG TailLsn;

    //
    //  LSN of most recently-written record in the RM's log.
    //

    ULONGLONG CurrentLsn;

    //
    //  LSN of the log's archive tail.
    //

    ULONGLONG ArchiveTailLsn;

    //
    //  Size of a log container in bytes.
    //

    ULONGLONG LogContainerSize;

    //
    //  Highest virtual clock value recorded in this RM's log.
    //

    LARGE_INTEGER HighestVirtualClock;

    //
    //  Number of containers in this RM's log.
    //

    ULONG LogContainerCount;

    //
    //  Maximum-allowed log container count.
    //

    ULONG LogContainerCountMax;

    //
    //  Minimum-allowed log container count.
    //

    ULONG LogContainerCountMin;

    //
    //  Amount by which log will grow when it gets full.  Indicated as either a percent of
    //  the log size or absolute container count, depending on which of the TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_*
    //  flags is set.
    //

    ULONG LogGrowthIncrement;

    //
    //  Reports on the autoshrink policy if.  Autoshrink makes the log shrink so that no more than this
    //  percentage of the log is free at any time.  A value of 0 indicates that autoshrink is off (i.e.
    //  the log will not automatically shrink).
    //

    ULONG LogAutoShrinkPercentage;

    //
    //  TXFS_RM_FLAG_* flags.  See the comment above at TXFS_QUERY_RM_INFORMATION_VALID_FLAGS to see
    //  what the flags here mean.
    //

    ULONG Flags;

    //
    //  Exactly one of TXFS_LOGGING_MODE_SIMPLE or TXFS_LOGGING_MODE_FULL.
    //

    USHORT LoggingMode;

    //
    //  Reserved.
    //

    USHORT Reserved;

    //
    //  Activity state of the RM.  May be exactly one of the above-defined TXF_RM_STATE_ values.
    //

    ULONG RmState;

    //
    //  Total capacity of the log in bytes.
    //

    ULONGLONG LogCapacity;

    //
    //  Amount of free space in the log in bytes.
    //

    ULONGLONG LogFree;

    //
    //  Size of $Tops in bytes.
    //

    ULONGLONG TopsSize;

    //
    //  Amount of space in $Tops in use.
    //

    ULONGLONG TopsUsed;

    //
    //  Number of transactions active in the RM at the time of the call.
    //

    ULONGLONG TransactionCount;

    //
    //  Total number of single-phase commits that have happened the RM.
    //

    ULONGLONG OnePCCount;

    //
    //  Total number of two-phase commits that have happened the RM.
    //

    ULONGLONG TwoPCCount;

    //
    //  Number of times the log has filled up.
    //

    ULONGLONG NumberLogFileFull;

    //
    //  Age of oldest active transaction in the RM, in milliseconds.
    //

    ULONGLONG OldestTransactionAge;

    //
    //  Name of the RM.
    //

    GUID RMName;

    //
    //  Offset in bytes from the beginning of this structure to a NULL-terminated Unicode
    //  string indicating the path to the RM's transaction manager's log.
    //

    ULONG TmLogPathOffset;

} TXFS_QUERY_RM_INFORMATION,
 *PTXFS_QUERY_RM_INFORMATION;

//
//======================== FSCTL_TXFS_ROLLFORWARD_REDO ========================
//
// Structures for FSCTL_TXFS_ROLLFORWARD_REDO
//

#define TXFS_ROLLFORWARD_REDO_FLAG_USE_LAST_REDO_LSN        0x01
#define TXFS_ROLLFORWARD_REDO_FLAG_USE_LAST_VIRTUAL_CLOCK   0x02

#define TXFS_ROLLFORWARD_REDO_VALID_FLAGS                               \
                (TXFS_ROLLFORWARD_REDO_FLAG_USE_LAST_REDO_LSN |         \
                 TXFS_ROLLFORWARD_REDO_FLAG_USE_LAST_VIRTUAL_CLOCK)

typedef struct _TXFS_ROLLFORWARD_REDO_INFORMATION {
    LARGE_INTEGER  LastVirtualClock;
    ULONGLONG LastRedoLsn;
    ULONGLONG HighestRecoveryLsn;
    ULONG Flags;
} TXFS_ROLLFORWARD_REDO_INFORMATION,
 *PTXFS_ROLLFORWARD_REDO_INFORMATION;

#ifdef DEPRECATE_SUPPORTED
#ifndef USE_TXF_DEPRECATED_FUNCTIONALITY
#pragma deprecated(TXFS_ROLLFORWARD_REDO_INFORMATION)
#pragma deprecated(PTXFS_ROLLFORWARD_REDO_INFORMATION)
#endif
#endif

//
//======================== FSCTL_TXFS_START_RM ========================
//
//  Structures for FSCTL_TXFS_START_RM
//
//  Note that TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS and
//  TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT are mutually exclusive.
//  You can specify the log growth amount in number of containers or as a percentage.
//
//  TXFS_START_RM_FLAG_CONTAINER_COUNT_MAX and TXFS_START_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX
//  are mutually exclusive.
//
//  TXFS_START_RM_FLAG_LOG_CONTAINER_COUNT_MIN and TXFS_START_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN
//  are mutually exclusive.
//
//  TXFS_START_RM_FLAG_PREFER_CONSISTENCY and TXFS_START_RM_FLAG_PREFER_AVAILABILITY
//  are mutually exclusive.
//
//  Optional parameters will have system-supplied defaults applied if omitted.
//

#define TXFS_START_RM_FLAG_LOG_CONTAINER_COUNT_MAX              0x00000001
#define TXFS_START_RM_FLAG_LOG_CONTAINER_COUNT_MIN              0x00000002
#define TXFS_START_RM_FLAG_LOG_CONTAINER_SIZE                   0x00000004
#define TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS  0x00000008
#define TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT         0x00000010
#define TXFS_START_RM_FLAG_LOG_AUTO_SHRINK_PERCENTAGE           0x00000020
#define TXFS_START_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX           0x00000040
#define TXFS_START_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN           0x00000080

#define TXFS_START_RM_FLAG_RECOVER_BEST_EFFORT                  0x00000200
#define TXFS_START_RM_FLAG_LOGGING_MODE                         0x00000400
#define TXFS_START_RM_FLAG_PRESERVE_CHANGES                     0x00000800

#define TXFS_START_RM_FLAG_PREFER_CONSISTENCY                   0x00001000
#define TXFS_START_RM_FLAG_PREFER_AVAILABILITY                  0x00002000

#define TXFS_START_RM_VALID_FLAGS                                           \
                (TXFS_START_RM_FLAG_LOG_CONTAINER_COUNT_MAX             |   \
                 TXFS_START_RM_FLAG_LOG_CONTAINER_COUNT_MIN             |   \
                 TXFS_START_RM_FLAG_LOG_CONTAINER_SIZE                  |   \
                 TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS |   \
                 TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT        |   \
                 TXFS_START_RM_FLAG_LOG_AUTO_SHRINK_PERCENTAGE          |   \
                 TXFS_START_RM_FLAG_RECOVER_BEST_EFFORT                 |   \
                 TXFS_START_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX          |   \
                 TXFS_START_RM_FLAG_LOGGING_MODE                        |   \
                 TXFS_START_RM_FLAG_PRESERVE_CHANGES                    |   \
                 TXFS_START_RM_FLAG_PREFER_CONSISTENCY                  |   \
                 TXFS_START_RM_FLAG_PREFER_AVAILABILITY)

typedef struct _TXFS_START_RM_INFORMATION {

    //
    //  TXFS_START_RM_FLAG_* flags.
    //

    ULONG Flags;

    //
    //  RM log container size, in bytes.  This parameter is optional.
    //

    ULONGLONG LogContainerSize;

    //
    //  RM minimum log container count.  This parameter is optional.
    //

    ULONG LogContainerCountMin;

    //
    //  RM maximum log container count.  This parameter is optional.
    //

    ULONG LogContainerCountMax;

    //
    //  RM log growth increment in number of containers or percent, as indicated
    //  by TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_* flag.  This parameter is
    //  optional.
    //

    ULONG LogGrowthIncrement;

    //
    //  RM log auto shrink percentage.  This parameter is optional.
    //

    ULONG LogAutoShrinkPercentage;

    //
    //  Offset from the beginning of this structure to the log path for the KTM
    //  instance to be used by this RM.  This must be a two-byte (WCHAR) aligned
    //  value.  This parameter is required.
    //

    ULONG TmLogPathOffset;

    //
    //  Length in bytes of log path for the KTM instance to be used by this RM.
    //  This parameter is required.
    //

    USHORT TmLogPathLength;

    //
    //  Logging mode for this RM.  One of TXFS_LOGGING_MODE_SIMPLE or
    //  TXFS_LOGGING_MODE_FULL (mutually exclusive).  This parameter is optional,
    //  and will default to TXFS_LOGGING_MODE_SIMPLE.
    //

    USHORT LoggingMode;

    //
    //  Length in bytes of the path to the log to be used by the RM.  This parameter
    //  is required.
    //

    USHORT LogPathLength;

    //
    //  Reserved.
    //

    USHORT Reserved;

    //
    //  The path to the log (in Unicode characters) to be used by the RM goes here.
    //  This parameter is required.
    //

    WCHAR LogPath[1];

} TXFS_START_RM_INFORMATION,
 *PTXFS_START_RM_INFORMATION;

#ifdef DEPRECATE_SUPPORTED
#ifndef USE_TXF_DEPRECATED_FUNCTIONALITY
#pragma deprecated(TXFS_START_RM_INFORMATION)
#pragma deprecated(PTXFS_START_RM_INFORMATION)
#endif
#endif

//
//======================== FSCTL_TXFS_GET_METADATA_INFO ========================
//
//  Structures for FSCTL_TXFS_GET_METADATA_INFO
//

typedef struct _TXFS_GET_METADATA_INFO_OUT {

    //
    //  Returns the TxfId of the file referenced by the handle used to call this routine.
    //

    struct {
        LONGLONG LowPart;
        LONGLONG HighPart;
    } TxfFileId;

    //
    //  The GUID of the transaction that has the file locked, if applicable.
    //

    GUID LockingTransaction;

    //
    //  Returns the LSN for the most recent log record we've written for the file.
    //

    ULONGLONG LastLsn;

    //
    //  Transaction state, a TXFS_TRANSACTION_STATE_* value.
    //

    ULONG TransactionState;

} TXFS_GET_METADATA_INFO_OUT, *PTXFS_GET_METADATA_INFO_OUT;

//
//================= FSCTL_TXFS_LIST_TRANSACTION_LOCKED_FILES ==================
//
//  Structures for FSCTL_TXFS_LIST_TRANSACTION_LOCKED_FILES
//
//  TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY_FLAG_CREATED means the reported name was created
//  in the locking transaction.
//
//  TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY_FLAG_DELETED means the reported name was deleted
//  in the locking transaction.
//
//  Note that both flags may appear if the name was both created and deleted in the same
//  transaction.  In that case the FileName[] member will contain only "\0", as there is
//  no meaningful name to report.
//

#define TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY_FLAG_CREATED   0x00000001
#define TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY_FLAG_DELETED   0x00000002

typedef struct _TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY {

    //
    //  Offset in bytes from the beginning of the TXFS_LIST_TRANSACTION_LOCKED_FILES
    //  structure to the next TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY.
    //

    ULONGLONG Offset;

    //
    //  TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY_FLAG_* flags to indicate whether the
    //  current name was deleted or created in the transaction.
    //

    ULONG NameFlags;

    //
    //  NTFS File ID of the file.
    //

    LONGLONG FileId;

    //
    //  Reserved.
    //

    ULONG Reserved1;
    ULONG Reserved2;
    LONGLONG Reserved3;

    //
    //  NULL-terminated Unicode path to this file, relative to RM root.
    //

    WCHAR FileName[1];
} TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY, *PTXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY;


typedef struct _TXFS_LIST_TRANSACTION_LOCKED_FILES {

    //
    //  GUID name of the KTM transaction that files should be enumerated from.
    //

    GUID KtmTransaction;

    //
    //  On output, the number of files involved in the transaction on this RM.
    //

    ULONGLONG NumberOfFiles;

    //
    //  The length of the buffer required to obtain the complete list of files.
    //  This value may change from call to call as the transaction locks more files.
    //

    ULONGLONG BufferSizeRequired;

    //
    //  Offset in bytes from the beginning of this structure to the first
    //  TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY.
    //

    ULONGLONG Offset;
} TXFS_LIST_TRANSACTION_LOCKED_FILES, *PTXFS_LIST_TRANSACTION_LOCKED_FILES;

//
//==================== FSCTL_TXFS_LIST_TRANSACTIONS ======================
//
//  Structures for FSCTL_TXFS_LIST_TRANSACTIONS
//

typedef struct _TXFS_LIST_TRANSACTIONS_ENTRY {

    //
    //  Transaction GUID.
    //

    GUID TransactionId;

    //
    //  Transaction state, a TXFS_TRANSACTION_STATE_* value.
    //

    ULONG TransactionState;

    //
    //  Reserved fields
    //

    ULONG Reserved1;
    ULONG Reserved2;
    LONGLONG Reserved3;
} TXFS_LIST_TRANSACTIONS_ENTRY, *PTXFS_LIST_TRANSACTIONS_ENTRY;

typedef struct _TXFS_LIST_TRANSACTIONS {

    //
    //  On output, the number of transactions involved in this RM.
    //

    ULONGLONG NumberOfTransactions;

    //
    //  The length of the buffer required to obtain the complete list of
    //  transactions.  Note that this value may change from call to call
    //  as transactions enter and exit the system.
    //

    ULONGLONG BufferSizeRequired;
} TXFS_LIST_TRANSACTIONS, *PTXFS_LIST_TRANSACTIONS;


//
//==================== FSCTL_TXFS_READ_BACKUP_INFORMATION ======================
//
//  Structures for FSCTL_TXFS_READ_BACKUP_INFORMATION
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

typedef struct _TXFS_READ_BACKUP_INFORMATION_OUT {
    union {

        //
        //  Used to return the required buffer size if return code is STATUS_BUFFER_OVERFLOW
        //

        ULONG BufferLength;

        //
        //  On success the data is copied here.
        //

        UCHAR Buffer[1];
    } DUMMYUNIONNAME;
} TXFS_READ_BACKUP_INFORMATION_OUT, *PTXFS_READ_BACKUP_INFORMATION_OUT;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 )
#endif

//
//==================== FSCTL_TXFS_WRITE_BACKUP_INFORMATION ======================
//
//  Structures for FSCTL_TXFS_WRITE_BACKUP_INFORMATION
//

typedef struct _TXFS_WRITE_BACKUP_INFORMATION {

    //
    //  The data returned in the Buffer member of a previous call to
    //  FSCTL_TXFS_READ_BACKUP_INFORMATION goes here.
    //

    UCHAR Buffer[1];
} TXFS_WRITE_BACKUP_INFORMATION, *PTXFS_WRITE_BACKUP_INFORMATION;

//
//==================== FSCTL_TXFS_GET_TRANSACTED_VERSION ======================
//
//  Output structure for FSCTL_TXFS_GET_TRANSACTED_VERSION
//

#define TXFS_TRANSACTED_VERSION_NONTRANSACTED   0xFFFFFFFE
#define TXFS_TRANSACTED_VERSION_UNCOMMITTED     0xFFFFFFFF

typedef struct _TXFS_GET_TRANSACTED_VERSION {

    //
    //  The version that this handle is opened to.  This will be
    //  TXFS_TRANSACTED_VERSION_UNCOMMITTED for nontransacted and
    //  transactional writer handles.
    //

    ULONG ThisBaseVersion;

    //
    //  The most recent committed version available.
    //

    ULONG LatestVersion;

    //
    //  If this is a handle to a miniversion, the ID of the miniversion.
    //  If it is not a handle to a minivers, this field will be 0.
    //

    USHORT ThisMiniVersion;

    //
    //  The first available miniversion.  Unless the miniversions are
    //  visible to the transaction bound to this handle, this field will be zero.
    //

    USHORT FirstMiniVersion;

    //
    //  The latest available miniversion.  Unless the miniversions are
    //  visible to the transaction bound to this handle, this field will be zero.
    //

    USHORT LatestMiniVersion;

} TXFS_GET_TRANSACTED_VERSION, *PTXFS_GET_TRANSACTED_VERSION;

//
//==================== FSCTL_TXFS_SAVEPOINT_INFORMATION ======================
//
//  Structures for FSCTL_TXFS_SAVEPOINT_INFORMATION
//
//  Note that the TXFS_SAVEPOINT_INFORMATION structure is both and in and out structure.
//  The KtmTransaction and ActionCode members are always in-parameters, and the SavepointId
//  member is either an in-parameter, an out-parameter, or not used (see its definition below).
//

//
//  Create a new savepoint.
//

#define TXFS_SAVEPOINT_SET                      0x00000001

//
//  Roll back to a specified savepoint.
//

#define TXFS_SAVEPOINT_ROLLBACK                 0x00000002

//
//  Clear (make unavailable for rollback) the most recently set savepoint
//  that has not yet been cleared.
//

#define TXFS_SAVEPOINT_CLEAR                    0x00000004

//
//  Clear all savepoints from the transaction.
//

#define TXFS_SAVEPOINT_CLEAR_ALL                0x00000010

typedef struct _TXFS_SAVEPOINT_INFORMATION {

    //
    //  Handle to the transaction on which to perform the savepoint operation.
    //

    HANDLE KtmTransaction;

    //
    //  Specifies the savepoint action to take.  A TXFS_SAVEPOINT_* value.
    //

    ULONG ActionCode;

    //
    //  In-parameter for TXFS_ROLLBACK_TO_SAVEPOINT - specifies the savepoint to which
    //  to roll back.
    //
    //  Out-parameter for TXFS_SET_SAVEPOINT - the newly-created savepoint ID will be
    //  returned here.
    //
    //  Not used for TXFS_CLEAR_SAVEPOINT or TXFS_CLEAR_ALL_SAVEPOINTS.
    //

    ULONG SavepointId;

} TXFS_SAVEPOINT_INFORMATION, *PTXFS_SAVEPOINT_INFORMATION;

#ifdef DEPRECATE_SUPPORTED
#ifndef USE_TXF_DEPRECATED_FUNCTIONALITY
#pragma deprecated(TXFS_SAVEPOINT_INFORMATION)
#pragma deprecated(PTXFS_SAVEPOINT_INFORMATION)
#endif
#endif

//
//==================== FSCTL_TXFS_CREATE_MINIVERSION ======================
//
//  Structures for FSCTL_TXFS_CREATE_MINIVERSION
//
//      Only an out parameter is necessary.  That returns the identifier of the new miniversion created.
//

typedef struct _TXFS_CREATE_MINIVERSION_INFO {

    USHORT StructureVersion;

    USHORT StructureLength;

    //
    //  The base version for the newly created miniversion.
    //

    ULONG BaseVersion;

    //
    //  The miniversion that was just created.
    //

    USHORT MiniVersion;

} TXFS_CREATE_MINIVERSION_INFO, *PTXFS_CREATE_MINIVERSION_INFO;

#ifdef DEPRECATE_SUPPORTED
#ifndef USE_TXF_DEPRECATED_FUNCTIONALITY
#pragma deprecated(TXFS_CREATE_MINIVERSION_INFO)
#pragma deprecated(PTXFS_CREATE_MINIVERSION_INFO)
#endif
#endif

//
//==================== FSCTL_TXFS_TRANSACTION_ACTIVE ======================
//
//  Structure for FSCTL_TXFS_TRANSACTION_ACTIVE
//

typedef struct _TXFS_TRANSACTION_ACTIVE_INFO {

    //
    //  Whether or not the volume had active transactions when this snapshot was taken.
    //

    BOOLEAN TransactionsActiveAtSnapshot;

} TXFS_TRANSACTION_ACTIVE_INFO, *PTXFS_TRANSACTION_ACTIVE_INFO;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_VISTA */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

//
//======================= FSCTL_GET_BOOT_AREA_INFO ==========================
//
// Output structure for FSCTL_GET_BOOT_AREA_INFO
//

typedef struct _BOOT_AREA_INFO {

    ULONG               BootSectorCount;  // the count of boot sectors present on the file system
    struct {
        LARGE_INTEGER   Offset;
    } BootSectors[2];                     // variable number of boot sectors.

} BOOT_AREA_INFO, *PBOOT_AREA_INFO;

//
//==================== FSCTL_GET_RETRIEVAL_POINTER_BASE ======================
//
// Output structure for FSCTL_GET_RETRIEVAL_POINTER_BASE
//

typedef struct _RETRIEVAL_POINTER_BASE {

    LARGE_INTEGER       FileAreaOffset; // sector offset to the first allocatable unit on the filesystem
} RETRIEVAL_POINTER_BASE, *PRETRIEVAL_POINTER_BASE;

//
//==================== FSCTL_QUERY_PERSISTENT_VOLUME_STATE ====================
//==================== FSCTL_SET_PERSISTENT_VOLUME_STATE ======================
//
// Structure for FSCTL_SET_PERSISTENT_VOLUME_STATE and
//  FSCTL_GET_PERSISTENT_VOLUME_STATE.  The initial version will be 1.0
//

typedef struct _FILE_FS_PERSISTENT_VOLUME_INFORMATION {

    ULONG VolumeFlags;
    ULONG FlagMask;
    ULONG Version;
    ULONG Reserved;

} FILE_FS_PERSISTENT_VOLUME_INFORMATION, *PFILE_FS_PERSISTENT_VOLUME_INFORMATION;

//
//  VolumeFlags values
//

#define PERSISTENT_VOLUME_STATE_SHORT_NAME_CREATION_DISABLED        (0x00000001)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define PERSISTENT_VOLUME_STATE_VOLUME_SCRUB_DISABLED               (0x00000002)

#endif  /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
//
//  Persistent volume flags to control the file systems' storage tiering
//  awareness.
//

#define PERSISTENT_VOLUME_STATE_GLOBAL_METADATA_NO_SEEK_PENALTY     (0x00000004)
#define PERSISTENT_VOLUME_STATE_LOCAL_METADATA_NO_SEEK_PENALTY      (0x00000008)
#define PERSISTENT_VOLUME_STATE_NO_HEAT_GATHERING                   (0x00000010)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

//
//  These are flags that define a volume's dependency on WimBoot file.
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

//
//  The volume backs a system critical volume, typically the one that has wimboot
//  image file serving the system files
//

#define PERSISTENT_VOLUME_STATE_CONTAINS_BACKING_WIM                (0x00000020)

//
//  The volume is backed by other volume that actually has the system files.
//  And hence this relies on the other volume being present in order for the sytem to boot up.
//

#define PERSISTENT_VOLUME_STATE_BACKED_BY_WIM                       (0x00000040)

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN7) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

//
//  Writes will be dynamically redirected on tiered volumes
//

#define PERSISTENT_VOLUME_STATE_WRITE_AUTO_TIERING                  (0x00000080)

#endif // #if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

//
//==================== FSCTL_QUERY_FILE_SYSTEM_RECOGNITION ====================
//
//  Structure for FSCTL_QUERY_FILE_SYSTEM_RECOGNITION
//

typedef struct _FILE_SYSTEM_RECOGNITION_INFORMATION {

    CHAR FileSystem[9];

} FILE_SYSTEM_RECOGNITION_INFORMATION, *PFILE_SYSTEM_RECOGNITION_INFORMATION;

//
//=========================== FSCTL_REQUEST_OPLOCK ===========================
//
//  Structures for FSCTL_REQUEST_OPLOCK
//

#define OPLOCK_LEVEL_CACHE_READ         (0x00000001)
#define OPLOCK_LEVEL_CACHE_HANDLE       (0x00000002)
#define OPLOCK_LEVEL_CACHE_WRITE        (0x00000004)

#define REQUEST_OPLOCK_INPUT_FLAG_REQUEST               (0x00000001)
#define REQUEST_OPLOCK_INPUT_FLAG_ACK                   (0x00000002)
#define REQUEST_OPLOCK_INPUT_FLAG_COMPLETE_ACK_ON_CLOSE (0x00000004)

#define REQUEST_OPLOCK_CURRENT_VERSION          1

typedef struct _REQUEST_OPLOCK_INPUT_BUFFER {

    //
    //  This should be set to REQUEST_OPLOCK_CURRENT_VERSION.
    //

    USHORT StructureVersion;

    USHORT StructureLength;

    //
    //  One or more OPLOCK_LEVEL_CACHE_* values to indicate the desired level of the oplock.
    //

    ULONG RequestedOplockLevel;

    //
    //  REQUEST_OPLOCK_INPUT_FLAG_* flags.
    //

    ULONG Flags;

} REQUEST_OPLOCK_INPUT_BUFFER, *PREQUEST_OPLOCK_INPUT_BUFFER;

#define REQUEST_OPLOCK_OUTPUT_FLAG_ACK_REQUIRED     (0x00000001)
#define REQUEST_OPLOCK_OUTPUT_FLAG_MODES_PROVIDED   (0x00000002)

typedef struct _REQUEST_OPLOCK_OUTPUT_BUFFER {

    //
    //  This should be set to REQUEST_OPLOCK_CURRENT_VERSION.
    //

    USHORT StructureVersion;

    USHORT StructureLength;

    //
    //  One or more OPLOCK_LEVEL_CACHE_* values indicating the level of the oplock that
    //  was just broken.
    //

    ULONG OriginalOplockLevel;

    //
    //  One or more OPLOCK_LEVEL_CACHE_* values indicating the level to which an oplock
    //  is being broken, or an oplock level that may be available for granting, depending
    //  on the operation returning this buffer.
    //

    ULONG NewOplockLevel;

    //
    //  REQUEST_OPLOCK_OUTPUT_FLAG_* flags.
    //

    ULONG Flags;

    //
    //  When REQUEST_OPLOCK_OUTPUT_FLAG_MODES_PROVIDED is set, and when the
    //  OPLOCK_LEVEL_CACHE_HANDLE level is being lost in an oplock break, these fields
    //  contain the access mode and share mode of the request that is causing the break.
    //

    ACCESS_MASK AccessMode;

    USHORT ShareMode;

} REQUEST_OPLOCK_OUTPUT_BUFFER, *PREQUEST_OPLOCK_OUTPUT_BUFFER;

//
//======================= FSCTL_QUERY_DEPENDENT_VOLUME =======================
//

#ifndef _VIRTUAL_STORAGE_TYPE_DEFINED
#define _VIRTUAL_STORAGE_TYPE_DEFINED
typedef struct _VIRTUAL_STORAGE_TYPE
{
    ULONG DeviceId;
    GUID  VendorId;
} VIRTUAL_STORAGE_TYPE, *PVIRTUAL_STORAGE_TYPE;
#endif

//
//  These structures are used by the FSCTL_QUERY_DEPENDENT_VOLUME
//

typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_REQUEST {
    ULONG   RequestLevel;
    ULONG   RequestFlags;
} STORAGE_QUERY_DEPENDENT_VOLUME_REQUEST, *PSTORAGE_QUERY_DEPENDENT_VOLUME_REQUEST;

#define QUERY_DEPENDENT_VOLUME_REQUEST_FLAG_HOST_VOLUMES    0x1
#define QUERY_DEPENDENT_VOLUME_REQUEST_FLAG_GUEST_VOLUMES   0x2

typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY {
    ULONG   EntryLength;
    ULONG   DependencyTypeFlags;
    ULONG   ProviderSpecificFlags;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
} STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY, *PSTORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY;

typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY {
    ULONG   EntryLength;
    ULONG   DependencyTypeFlags;
    ULONG   ProviderSpecificFlags;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
    ULONG   AncestorLevel;      // Root parent is 0, every child level after that is incremented
    ULONG   HostVolumeNameOffset;
    ULONG   HostVolumeNameSize;
    ULONG   DependentVolumeNameOffset;
    ULONG   DependentVolumeNameSize;
    ULONG   RelativePathOffset;
    ULONG   RelativePathSize;
    ULONG   DependentDeviceNameOffset;
    ULONG   DependentDeviceNameSize;
} STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY, *PSTORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY;

#ifdef _MSC_EXTENSIONS

#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4200) // zero length array
#endif


typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE {
    ULONG   ResponseLevel;
    ULONG   NumberEntries;
    union {
        STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY Lev1Depends[];
        STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY Lev2Depends[];
    } DUMMYUNIONNAME;
} STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE, *PSTORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE;

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

#endif

//
//========================== FSCTL_SD_GLOBAL_CHANGE ==========================
//
//  Structures for FSCTL_SD_GLOBAL_CHANGE
//

//
//  list of operations supported
//

#define SD_GLOBAL_CHANGE_TYPE_MACHINE_SID   1
#define SD_GLOBAL_CHANGE_TYPE_QUERY_STATS   (1 << 16)
#define SD_GLOBAL_CHANGE_TYPE_ENUM_SDS      (2 << 16)


//
//  Operation specific structures for SD_GLOBAL_CHANGE_TYPE_MACHINE_SID
//

typedef struct _SD_CHANGE_MACHINE_SID_INPUT {

    //
    //  The current machine SID to change.
    //  This defines the offset from the beginning of the SD_GLOBAL_CHANGE_INPUT
    //  structure of where the CurrentMachineSID to replace begins.  This will
    //  be a SID structure.  The length defines the length of the imbedded SID
    //  structure.
    //

    USHORT CurrentMachineSIDOffset;
    USHORT CurrentMachineSIDLength;

    //
    //  The new machine SID value to set inplace of the current machine SID
    //  This defines the offset from the beginning of the SD_GLOBAL_CHANGE_INPUT
    //  structure of where the NewMachineSID to set begins.  This will
    //  be a SID structure.  The length defines the length of the imbedded SID
    //  structure.
    //

    USHORT NewMachineSIDOffset;
    USHORT NewMachineSIDLength;

} SD_CHANGE_MACHINE_SID_INPUT, *PSD_CHANGE_MACHINE_SID_INPUT;

typedef struct _SD_CHANGE_MACHINE_SID_OUTPUT {

    //
    //  How many entries were successfully changed in the $Secure stream
    //

    ULONGLONG NumSDChangedSuccess;

    //
    //  How many entries failed the update in the $Secure stream
    //

    ULONGLONG NumSDChangedFail;

    //
    //  How many entries are unused in the current security stream
    //

    ULONGLONG NumSDUnused;

    //
    //  The total number of entries processed in the $Secure stream
    //

    ULONGLONG NumSDTotal;

    //
    //  How many entries were successfully changed in the $MFT file
    //

    ULONGLONG NumMftSDChangedSuccess;

    //
    //  How many entries failed the update in the $MFT file
    //

    ULONGLONG NumMftSDChangedFail;

    //
    //  Total number of entriess process in the $MFT file
    //

    ULONGLONG NumMftSDTotal;

} SD_CHANGE_MACHINE_SID_OUTPUT, *PSD_CHANGE_MACHINE_SID_OUTPUT;

//
//  Operation specific structures for SD_GLOBAL_CHANGE_TYPE_QUERY_STATS
//

typedef struct _SD_QUERY_STATS_INPUT {

    ULONG Reserved;

} SD_QUERY_STATS_INPUT, *PSD_QUERY_STATS_INPUT;

typedef struct _SD_QUERY_STATS_OUTPUT {

    //
    //  Stream size and allocation size for the security descriptor
    //  data stream ($Secure:$SDS).
    //

    ULONGLONG SdsStreamSize;
    ULONGLONG SdsAllocationSize;

    //
    //  Stream size and allocation size for the security ID index
    //  stream ($Secure:$SII).
    //

    ULONGLONG SiiStreamSize;
    ULONGLONG SiiAllocationSize;

    //
    //  Stream size and allocation size for the security descriptor
    //  hash index stream ($Secure:$SDH).
    //

    ULONGLONG SdhStreamSize;
    ULONGLONG SdhAllocationSize;

    //
    //  The total number of entries in the security descriptor data
    //  stream.
    //

    ULONGLONG NumSDTotal;

    //
    //  The number of unused entries in the security descriptor data
    //  stream.
    //

    ULONGLONG NumSDUnused;

} SD_QUERY_STATS_OUTPUT, *PSD_QUERY_STATS_OUTPUT;

//
//  Operation specific structures for SD_GLOBAL_CHANGE_TYPE_ENUM_SDS
//

typedef struct _SD_ENUM_SDS_INPUT {

    //
    //  The byte offset within the security descriptor data stream to look
    //  for security descriptors.  This must be a multiple of 16.
    //
    //  Note this is a virtual byte offset.  The security descriptor data
    //  stream contains some additional data embedded inside the stream for
    //  redundancy, and this extra data does not count toward this byte
    //  offset.
    //

    ULONGLONG StartingOffset;

    //
    //  The maximum number of SD entries to return.  This is primarily
    //  useful for supporting a model where you only want one entry at
    //  a time.  Set to 0 for no max.
    //

    ULONGLONG MaxSDEntriesToReturn;

} SD_ENUM_SDS_INPUT, *PSD_ENUM_SDS_INPUT;

typedef struct _SD_ENUM_SDS_ENTRY {

    //
    //  Hash value of the security decriptor.
    //

    ULONG Hash;

    //
    //  SecurityId for the security descriptor.
    //

    ULONG SecurityId;

    //
    //  Virtual byte offset of this header in the security descriptor
    //  data stream.
    //

    ULONGLONG Offset;

    //
    //  Length of this header + security descriptor that follows this
    //  header.
    //

    ULONG Length;

    //
    //  Actual security decriptor, variable length.
    //

    UCHAR Descriptor[1];

} SD_ENUM_SDS_ENTRY, *PSD_ENUM_SDS_ENTRY;

typedef struct _SD_ENUM_SDS_OUTPUT {

    //
    //  The current machine SID to change.
    //  This defines the offset from the beginning of the SD_GLOBAL_CHANGE_INPUT
    //  structure of where the CurrentMachineSID to replace begins.  This will
    //  be a SID structure.  The length defines the length of the imbedded SID
    //  structure.
    //

    ULONGLONG NextOffset;

    //
    //  The total number of entries returned.
    //

    ULONGLONG NumSDEntriesReturned;

    //
    //  The total number of bytes of entries returned.
    //

    ULONGLONG NumSDBytesReturned;

    //
    //  Variable length array of security descriptor stream entries.
    //  There should be NumSDEntriesReturned of them.  To walk this array,
    //  first point to SDEntry[0], then advance a number of bytes equal
    //  to the entry's Length rounded up to a multiple of 16.  (Each entry
    //  will be aligned to a 16-byte boundary.)
    //

    SD_ENUM_SDS_ENTRY SDEntry[1];

} SD_ENUM_SDS_OUTPUT, *PSD_ENUM_SDS_OUTPUT;

//
//  Generic INPUT & OUTPUT structures for FSCTL_SD_GLOBAL_CHANGE
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

typedef struct _SD_GLOBAL_CHANGE_INPUT
{
    //
    //  Input flags (none currently defined)
    //

    ULONG Flags;

    //
    //  Specifies which type of change we are doing and pics which member
    //  of the below union is in use.
    //

    ULONG ChangeType;

    union {

        SD_CHANGE_MACHINE_SID_INPUT SdChange;
        SD_QUERY_STATS_INPUT SdQueryStats;
        SD_ENUM_SDS_INPUT SdEnumSds;
    } DUMMYUNIONNAME;

} SD_GLOBAL_CHANGE_INPUT, *PSD_GLOBAL_CHANGE_INPUT;

typedef struct _SD_GLOBAL_CHANGE_OUTPUT
{

    //
    //  Output State Flags (none currently defined)
    //

    ULONG Flags;

    //
    //  Specifies which below union to use
    //

    ULONG ChangeType;

    union {

        SD_CHANGE_MACHINE_SID_OUTPUT SdChange;
        SD_QUERY_STATS_OUTPUT SdQueryStats;
        SD_ENUM_SDS_OUTPUT SdEnumSds;
    } DUMMYUNIONNAME;

} SD_GLOBAL_CHANGE_OUTPUT, *PSD_GLOBAL_CHANGE_OUTPUT;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 ) /* nonstandard extension used : nameless struct/union */
#endif

//
//==================== FSCTL_LOOKUP_STREAM_FROM_CLUSTER =======================
//

typedef struct _LOOKUP_STREAM_FROM_CLUSTER_INPUT {

    //
    //  Flags for the operation.  Currently no flags are defined.
    //
    ULONG         Flags;

    //
    //  Number of clusters in the following array of clusters.
    //  The input buffer must be large enough to contain this
    //  number or the operation will fail.
    //
    ULONG         NumberOfClusters;

    //
    //  An array of one or more clusters to look up.
    //
    LARGE_INTEGER Cluster[1];
} LOOKUP_STREAM_FROM_CLUSTER_INPUT, *PLOOKUP_STREAM_FROM_CLUSTER_INPUT;

typedef struct _LOOKUP_STREAM_FROM_CLUSTER_OUTPUT {
    //
    //  Offset from the beginning of this structure to the first entry
    //  returned.  If no entries are returned, this value is zero.
    //
    ULONG         Offset;

    //
    //  Number of matches to the input criteria.  Note that more matches
    //  may be found than entries returned if the buffer is not large
    //  enough.
    //
    ULONG         NumberOfMatches;

    //
    //  Minimum size of the buffer, in bytes, which would be needed to
    //  contain all matching entries to the input criteria.
    //
    ULONG         BufferSizeRequired;
} LOOKUP_STREAM_FROM_CLUSTER_OUTPUT, *PLOOKUP_STREAM_FROM_CLUSTER_OUTPUT;

#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_FLAG_PAGE_FILE          0x00000001
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_FLAG_DENY_DEFRAG_SET    0x00000002
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_FLAG_FS_SYSTEM_FILE     0x00000004
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_FLAG_TXF_SYSTEM_FILE    0x00000008

#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_ATTRIBUTE_MASK          0xff000000
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_ATTRIBUTE_DATA          0x01000000
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_ATTRIBUTE_INDEX         0x02000000
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_ATTRIBUTE_SYSTEM        0x03000000

typedef struct _LOOKUP_STREAM_FROM_CLUSTER_ENTRY {
    //
    //  Offset from the beginning of this structure to the next entry
    //  returned.  If there are no more entries, this value is zero.
    //
    ULONG         OffsetToNext;

    //
    //  Flags describing characteristics about this stream.
    //
    ULONG         Flags;

    //
    //  This value is reserved and is currently zero.
    //
    LARGE_INTEGER Reserved;

    //
    //  This is the cluster that this entry refers to.  It will be one
    //  of the clusters passed in the input structure.
    //
    LARGE_INTEGER Cluster;

    //
    //  A NULL-terminated Unicode string containing the path of the
    //  object relative to the root of the volume.  This string
    //  will refer to the attribute or stream represented by the
    //  cluster.
    //
    WCHAR         FileName[1];
} LOOKUP_STREAM_FROM_CLUSTER_ENTRY, *PLOOKUP_STREAM_FROM_CLUSTER_ENTRY;

//
//==================== FSCTL_FILE_TYPE_NOTIFICATION =======================
//
//  This is the structure for the FSCTL_FILE_TYPE_NOTIFICATION operation.
//  Its purpose is to notify the storage stack about the extents of certain
//  types of files.  This is only callable from kernel mode
//

typedef struct _FILE_TYPE_NOTIFICATION_INPUT {

    //
    //  Flags for this operation
    //  FILE_TYPE_NOTIFICATION_FLAG_*
    //

    ULONG Flags;

    //
    //  A count of how many FileTypeID guids are given
    //

    ULONG NumFileTypeIDs;

    //
    //  This is a unique identifer for the type of file notification occuring
    //

    GUID FileTypeID[1];

} FILE_TYPE_NOTIFICATION_INPUT, *PFILE_TYPE_NOTIFICATION_INPUT;

//
//  Flags for the given operation
//

#define FILE_TYPE_NOTIFICATION_FLAG_USAGE_BEGIN     0x00000001      //Set when adding the specified usage on the given file
#define FILE_TYPE_NOTIFICATION_FLAG_USAGE_END       0x00000002      //Set when removing the specified usage on the given file

//
//  These are the globally defined file types
//

DEFINE_GUID( FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE,         0x0d0a64a1, 0x38fc, 0x4db8, 0x9f, 0xe7, 0x3f, 0x43, 0x52, 0xcd, 0x7c, 0x5c );
DEFINE_GUID( FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE,  0xb7624d64, 0xb9a3, 0x4cf8, 0x80, 0x11, 0x5b, 0x86, 0xc9, 0x40, 0xe7, 0xb7 );
DEFINE_GUID( FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE,    0x9d453eb7, 0xd2a6, 0x4dbd, 0xa2, 0xe3, 0xfb, 0xd0, 0xed, 0x91, 0x09, 0xa9 );

//
//=========================FSCTL_CSV_MGMT_LOCK===========================
//
#define CSV_MGMTLOCK_CHECK_VOLUME_REDIRECTED 0x00000001
typedef struct _CSV_MGMT_LOCK {
    ULONG      Flags;
}CSV_MGMT_LOCK, *PCSV_MGMT_LOCK;

//
//========================= FSCTL_IS_CSV_FILE ============================
//
// Structure for FSCTL_IS_CSV_FILE
//

typedef struct _CSV_NAMESPACE_INFO {

    ULONG         Version;
    ULONG         DeviceNumber;
    LARGE_INTEGER StartingOffset;
    ULONG         SectorSize;

} CSV_NAMESPACE_INFO, *PCSV_NAMESPACE_INFO;

#define CSV_NAMESPACE_INFO_V1 (sizeof(CSV_NAMESPACE_INFO))
#define CSV_INVALID_DEVICE_NUMBER 0xFFFFFFFF

//
//========================= FSCTL_CSV_CONTROL =============================
//

typedef enum _CSV_CONTROL_OP {
    CsvControlStartRedirectFile                  = 0x02,
    CsvControlStopRedirectFile                   = 0x03,
    CsvControlQueryRedirectState                 = 0x04,
    CsvControlQueryFileRevision                  = 0x06,
    CsvControlQueryMdsPath                       = 0x08,
    CsvControlQueryFileRevisionFileId128         = 0x09,
    CsvControlQueryVolumeRedirectState           = 0x0a,
    CsvControlEnableUSNRangeModificationTracking = 0x0d,
    CsvControlMarkHandleLocalVolumeMount         = 0x0e,
    CsvControlUnmarkHandleLocalVolumeMount       = 0x0f,

} CSV_CONTROL_OP, *PCSV_CONTROL_OP;

typedef struct _CSV_CONTROL_PARAM {
    CSV_CONTROL_OP Operation;
    LONGLONG Unused;
} CSV_CONTROL_PARAM, *PCSV_CONTROL_PARAM;

//
// Output for the CsvInternalControlQueryRedirectState
//
typedef struct _CSV_QUERY_REDIRECT_STATE {
    ULONG MdsNodeId;
    ULONG DsNodeId;
    BOOLEAN FileRedirected;
} CSV_QUERY_REDIRECT_STATE, *PCSV_QUERY_REDIRECT_STATE;

//
// Output for the CsvControlQueryFileRevision
// Note that revision tracking is per file, and not per
// stream so it changes every time one of the stream
// changes.
//
typedef struct _CSV_QUERY_FILE_REVISION {
    //
    // NTFS File Id
    //
    LONGLONG FileId;
    //
    // FileRevision[0] increases each time the CSV MDS
    // stack is rebuilt and CSVFLT loses its state.
    //
    // FileRevision[1] increases each time CSV MDS
    // stack purges the cached revision # for the
    // file.
    //
    // FileRevision[2] increases each time CSV MDS
    // observes that file sizes might have
    // changed or the file might have been written
    // to. It also is incremented when one of the
    // nodes performs the first direct IO on a stream
    // associated with this file after opening this stream.
    //
    // If any of the numbers are 0 the caller should
    // assume that the file was modified
    //
    LONGLONG FileRevision[3];

} CSV_QUERY_FILE_REVISION, *PCSV_QUERY_FILE_REVISION;

//
// Output for the CsvControlQueryFileRevisionFileId128
// Note that revision tracking is per file, and not per
// stream so it changes every time one of the stream
// changes.
//
typedef struct _CSV_QUERY_FILE_REVISION_FILE_ID_128 {
    //
    // File Id
    //
    FILE_ID_128 FileId;
    //
    // FileRevision[0] increases each time the CSV MDS
    // stack is rebuilt and CSVFLT loses its state.
    //
    // FileRevision[1] increases each time CSV MDS
    // stack purges the cached revision # for the
    // file.
    //
    // FileRevision[2] increases each time CSV MDS
    // observes that file sizes might have
    // changed or the file might have been written
    // to. It also is incremented when one of the
    // nodes performs the first direct IO on a stream
    // associated with this file after opening this stream.
    //
    // If any of the numbers are 0 the caller should
    // assume that the file was modified
    //
    LONGLONG FileRevision[3];

} CSV_QUERY_FILE_REVISION_FILE_ID_128, *PCSV_QUERY_FILE_REVISION_FILE_ID_128;


//
// Output for the CsvInternalControlQueryMdsPath
// This control returns the path that is used by CSV to
// communicate to the MDS
//
typedef struct _CSV_QUERY_MDS_PATH {
    ULONG MdsNodeId;
    ULONG DsNodeId;
    ULONG PathLength;
    WCHAR Path[1];
} CSV_QUERY_MDS_PATH, *PCSV_QUERY_MDS_PATH;

typedef enum _CSVFS_DISK_CONNECTIVITY
{
    CsvFsDiskConnectivityNone          = 0,
    CsvFsDiskConnectivityMdsNodeOnly   = 1,
    CsvFsDiskConnectivitySubsetOfNodes = 2,
    CsvFsDiskConnectivityAllNodes      = 3
} CSVFS_DISK_CONNECTIVITY, *PCSVFS_DISK_CONNECTIVITY;

//
// Output for the CsvControlQueryVolumeRedirectState
//
typedef struct _CSV_QUERY_VOLUME_REDIRECT_STATE {
    ULONG MdsNodeId;
    ULONG DsNodeId;
    BOOLEAN IsDiskConnected;
    BOOLEAN ClusterEnableDirectIo;
    CSVFS_DISK_CONNECTIVITY DiskConnectivity;
} CSV_QUERY_VOLUME_REDIRECT_STATE, *PCSV_QUERY_VOLUME_REDIRECT_STATE;

//
//====================== FSCTL_CSV_QUERY_VETO_FILE_DIRECT_IO =========================
//
// In output buffer set Veto to TRUE to prevent CsvFs from
// performing DirectIO on the stream.
// VetoedFromAltitude and Reason are optional fields that
// are used to help with troubleshooting. CSV writes these
// strings to the diagnostic log. Filter can set it to a
// string that would hint why volume is in a redirected mode.
//
typedef struct _CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT {
    ULONGLONG VetoedFromAltitudeIntegral;
    ULONGLONG VetoedFromAltitudeDecimal;
    WCHAR   Reason[256];
} CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT, *PCSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

//
//========================= FSCTL_IS_VOLUME_OWNED_BYCSVFS ============================
//

typedef struct _CSV_IS_OWNED_BY_CSVFS {
    BOOLEAN OwnedByCSVFS;
}CSV_IS_OWNED_BY_CSVFS, *PCSV_IS_OWNED_BY_CSVFS;

//
//======================== FSCTL_FILE_LEVEL_TRIM ===========================
//
//  Structure defintions for supporint file level trim
//

typedef struct _FILE_LEVEL_TRIM_RANGE {

    //
    //  Bytes offset from the front of the given file to trim at
    //

    ULONGLONG Offset;

    //
    //  Length in bytes to trim from the given offset
    //

    ULONGLONG Length;
} FILE_LEVEL_TRIM_RANGE, *PFILE_LEVEL_TRIM_RANGE;

//
//  Input buffer defining what ranges to trim
//

typedef struct _FILE_LEVEL_TRIM {

    //
    // Used when interacting with byte range locks. Set to zero if not SMB or
    //  similar.
    //

    ULONG Key;

    //
    // A count of how many Offset:Length pairs are given
    //

    ULONG NumRanges;

    //
    //  All the pairs.
    //

    FILE_LEVEL_TRIM_RANGE Ranges[1];

} FILE_LEVEL_TRIM, *PFILE_LEVEL_TRIM;

//
//  This is an optional output buffer
//

typedef struct _FILE_LEVEL_TRIM_OUTPUT {

    //
    //  Receives the number of input ranges
    //  that were processed
    //

    ULONG NumRangesProcessed;

} FILE_LEVEL_TRIM_OUTPUT, *PFILE_LEVEL_TRIM_OUTPUT;

//
//==================== FSCTL_QUERY_FILE_LAYOUT ===========================
//

//
// Clear the state of the internal cursor.
//
#define QUERY_FILE_LAYOUT_RESTART                                       (0x00000001)

//
// Request that the API call retrieve name information for the
// objects on the volume.
//
#define QUERY_FILE_LAYOUT_INCLUDE_NAMES                                 (0x00000002)

//
// Request that the API call include streams of the file.
//
#define QUERY_FILE_LAYOUT_INCLUDE_STREAMS                               (0x00000004)

//
// Include extent information with the attribute entries, where applicable.
// Use of this flag requires the _INCLUDE_STREAMS flag.
//
#define QUERY_FILE_LAYOUT_INCLUDE_EXTENTS                               (0x00000008)

//
// Include extra information, such as modification times and security
// IDs, with each returned file layout entry.
//
#define QUERY_FILE_LAYOUT_INCLUDE_EXTRA_INFO                            (0x00000010)

//
// Include unallocated attributes in the enumeration, which in NTFS means one
// of two cases:
//      1. Resident attributes.
//      2. Compressed or sparse nonresident attributes with no physical
//         allocation (consisting only of a sparse hole).
//  This flag may only be used when no cluster ranges are specified (i. e.
//  on a whole-volume query).
//

#define QUERY_FILE_LAYOUT_INCLUDE_STREAMS_WITH_NO_CLUSTERS_ALLOCATED    (0x00000020)

typedef enum _QUERY_FILE_LAYOUT_FILTER_TYPE {
    QUERY_FILE_LAYOUT_FILTER_TYPE_NONE = 0,
    QUERY_FILE_LAYOUT_FILTER_TYPE_CLUSTERS = 1,
    QUERY_FILE_LAYOUT_FILTER_TYPE_FILEID = 2,
    QUERY_FILE_LAYOUT_NUM_FILTER_TYPES = 3,
} QUERY_FILE_LAYOUT_FILTER_TYPE;

typedef struct _CLUSTER_RANGE {

    //
    // The starting cluster for this query region
    // (inclusive).
    //
    LARGE_INTEGER       StartingCluster;

    //
    // The length of the cluster region.
    //
    LARGE_INTEGER       ClusterCount;

} CLUSTER_RANGE, *PCLUSTER_RANGE;

typedef struct _FILE_REFERENCE_RANGE {

    //
    // The starting file reference number for this
    // query region (inclusive).
    //
    ULONGLONG           StartingFileReferenceNumber;

    //
    // The ending file reference number for this
    // query region (inclusive).
    //
    ULONGLONG           EndingFileReferenceNumber;

} FILE_REFERENCE_RANGE, *PFILE_REFERENCE_RANGE;

typedef struct _QUERY_FILE_LAYOUT_INPUT {

    //
    // Number of filter range pairs in the following array.
    // The input buffer must be large enough to contain this
    // number or the operation will fail.
    //
    ULONG               NumberOfPairs;

    //
    // Flags for the operation.
    //
    ULONG               Flags;

    //
    //  The type of filter being applied for this operation.
    //

    QUERY_FILE_LAYOUT_FILTER_TYPE   FilterType;

    //
    //  Reserved for future use. Should be set to zero.
    //

    ULONG               Reserved;

    //
    //  A pointer to the filter-type-specific information.  This is
    //  the caller's actual set of cluster ranges or filter ranges.
    //

    union {

        //
        //  The following  is used when the caller wishes to filter
        //  on a set of cluster ranges.
        //

        _When_((FilterType == QUERY_FILE_LAYOUT_FILTER_TYPE_CLUSTERS),
               _Field_size_(NumberOfPairs))
        CLUSTER_RANGE ClusterRanges[1];

        //
        //  The following is used when the caller wishes to filter
        //  on a set of file reference ranges.
        //

        _When_((FilterType == QUERY_FILE_LAYOUT_FILTER_TYPE_FILEID),
               _Field_size_(NumberOfPairs))
        FILE_REFERENCE_RANGE FileReferenceRanges[1];

    } Filter;
} QUERY_FILE_LAYOUT_INPUT, *PQUERY_FILE_LAYOUT_INPUT;

//
// Indicates that the filesystem is returning stream extents in a
// single-instanced fashion.
//
#define QUERY_FILE_LAYOUT_SINGLE_INSTANCED                              (0x00000001)

typedef struct _QUERY_FILE_LAYOUT_OUTPUT {

    //
    // Number of file entries following this header.
    // Includes only the number of file entries in
    // this iteration.
    //
    ULONG               FileEntryCount;

    //
    // Offset to the first file entry in this buffer,
    // expressed in bytes.
    //
    ULONG               FirstFileOffset;

    //
    // Flags indicating context that is applicable to the
    // entire output set.
    //
    ULONG               Flags;

    //
    // For alignment/later use.
    //
    ULONG               Reserved;

} QUERY_FILE_LAYOUT_OUTPUT, *PQUERY_FILE_LAYOUT_OUTPUT;

typedef struct _FILE_LAYOUT_ENTRY {

    //
    // Version number of this structure
    // (current version number is 1).
    //
    ULONG         Version;

    //
    // Offset to next file entry (in bytes)
    // or zero if this is the last entry.
    //
    ULONG         NextFileOffset;

    //
    // Flags containing context applicable to this
    // file.
    //
    ULONG         Flags;

    //
    // File attributes.
    //
    ULONG         FileAttributes;

    //
    // File ID for this file.
    //
    ULONGLONG     FileReferenceNumber;

    //
    // Offset to the first name entry
    // from the start of this record, or
    // zero if there are no link records.
    //
    ULONG         FirstNameOffset;

    //
    // Offset to the first stream entry
    // from the start of this record, or
    // zero if there are no stream records.
    //
    ULONG         FirstStreamOffset;

    //
    // Offset to additional per-file information,
    // contained in a FILE_LAYOUT_INFO_ENTRY
    // structure, or zero if this information was
    // not returned.
    //
    ULONG         ExtraInfoOffset;

    //
    // For alignment/future use.
    //
    ULONG         Reserved;

    //
    // The structure may be extended here to support
    // additional static fields (e.g. pointing to
    // a FILE_BASIC_INFORMATION structure, etc.). This
    // sort of change should coincide with a version
    // number increase.
    //

} FILE_LAYOUT_ENTRY, *PFILE_LAYOUT_ENTRY;

//
// Each file name entry may be one, both, or neither of
// these.
//
#define FILE_LAYOUT_NAME_ENTRY_PRIMARY                                  (0x00000001)
#define FILE_LAYOUT_NAME_ENTRY_DOS                                      (0x00000002)

typedef struct _FILE_LAYOUT_NAME_ENTRY {

    //
    // Offset to next name entry (in bytes)
    // or zero if this is the last entry.
    //
    ULONG         NextNameOffset;

    //
    // Flags for this file name entry.
    //
    ULONG         Flags;

    //
    // Parent FRN for this link.
    //
    ULONGLONG     ParentFileReferenceNumber;

    //
    // File name length (bytes).
    //
    ULONG         FileNameLength;

    //
    // For later use/alignment.
    //
    ULONG         Reserved;

    //
    // Starting point for the name itself
    // (NOT null-terminated).
    //
    _Field_size_bytes_(FileNameLength)
    WCHAR         FileName[1];

} FILE_LAYOUT_NAME_ENTRY, *PFILE_LAYOUT_NAME_ENTRY;

typedef struct _FILE_LAYOUT_INFO_ENTRY {

    //
    // Basic information for this file.
    //
    struct {
        LARGE_INTEGER CreationTime;
        LARGE_INTEGER LastAccessTime;
        LARGE_INTEGER LastWriteTime;
        LARGE_INTEGER ChangeTime;
        ULONG FileAttributes;
    } BasicInformation;

    //
    // Owner ID for this file.
    //
    ULONG                       OwnerId;

    //
    // Security ID for this file.
    //
    ULONG                       SecurityId;

    //
    // Update sequence number for this file.
    //
    USN                         Usn;

} FILE_LAYOUT_INFO_ENTRY, *PFILE_LAYOUT_INFO_ENTRY;

//
// This attribute/stream is known to the filesystem to be immovable.
//
#define STREAM_LAYOUT_ENTRY_IMMOVABLE                                   (0x00000001)

//
// This attribute/stream is currently pinned by another application.
// It is unmovable for the duration of the pin.
//
#define STREAM_LAYOUT_ENTRY_PINNED                                      (0x00000002)

//
// This attribute is resident.
//
#define STREAM_LAYOUT_ENTRY_RESIDENT                                    (0x00000004)

//
// This attribute has no clusters allocated to it.
//
#define STREAM_LAYOUT_ENTRY_NO_CLUSTERS_ALLOCATED                       (0x00000008)

typedef struct _STREAM_LAYOUT_ENTRY {

    //
    // Version of this struct. Current version is 1.
    //
    ULONG         Version;

    //
    // Offset to the next stream entry (bytes).
    //
    ULONG         NextStreamOffset;

    //
    // FSCTL-specific flags.
    //
    ULONG         Flags;

    //
    // Offset to the extent information buffer
    // for this stream, or zero if none exists.
    // This is relative to the start of this
    // stream record.
    //
    ULONG         ExtentInformationOffset;

    //
    // Total allocated size of this stream,
    // in bytes.
    //
    LARGE_INTEGER AllocationSize;

    //
    // End of file location as a byte offset.
    //
    LARGE_INTEGER EndOfFile;

    //
    // For alignment purposes. Can be used
    // for future expansion.
    //
    ULONGLONG     Reserved;

    //
    // Stream attribute flags.
    //
    ULONG         AttributeFlags;

    //
    // Length of the stream identifier, in bytes.
    //
    ULONG         StreamIdentifierLength;

    //
    // Starting point for the stream identifier
    // buffer.
    //
    _Field_size_bytes_(StreamIdentifierLength)
    WCHAR         StreamIdentifier[1];

} STREAM_LAYOUT_ENTRY, *PSTREAM_LAYOUT_ENTRY;

//
// Flag noting that the extent information may be interpreted as
// a RETRIEVAL_POINTERS_BUFFER structure
//
#define STREAM_EXTENT_ENTRY_AS_RETRIEVAL_POINTERS                       (0x00000001)

//
// Flag noting that all of the stream's extents are returned in
// this structure, even if only some of them fall within the caller's
// specified interest region(s).
//
#define STREAM_EXTENT_ENTRY_ALL_EXTENTS                                 (0x00000002)


typedef struct _STREAM_EXTENT_ENTRY {

    //
    // Extent-level flags for this entry.
    //
    ULONG        Flags;

    union {

        //
        // All that's defined for now is a retrieval
        // pointers buffer, since this is what NTFS
        // will use.
        //
        RETRIEVAL_POINTERS_BUFFER        RetrievalPointers;

    } ExtentInformation;

} STREAM_EXTENT_ENTRY, *PSTREAM_EXTENT_ENTRY;

//
//==================== FSCTL_GET_INTEGRITY_INFORMATION / FSCTL_SET_INTEGRITY_INFORMATION ===========================
//

#define CHECKSUM_TYPE_UNCHANGED        (-1)

#define CHECKSUM_TYPE_NONE              (0)
#define CHECKSUM_TYPE_CRC32             (1)
#define CHECKSUM_TYPE_CRC64             (2)
#define CHECKSUM_TYPE_ECC               (3)
#define CHECKSUM_TYPE_FIRST_UNUSED_TYPE (4)

#define FSCTL_INTEGRITY_FLAG_CHECKSUM_ENFORCEMENT_OFF        (1)

typedef struct _FSCTL_GET_INTEGRITY_INFORMATION_BUFFER {
    USHORT ChecksumAlgorithm;   // Checksum algorithm. e.g. CHECKSUM_TYPE_UNCHANGED, CHECKSUM_TYPE_NONE, CHECKSUM_TYPE_CRC32
    USHORT Reserved;            // Must be 0
    ULONG Flags;                // FSCTL_INTEGRITY_FLAG_xxx
    ULONG ChecksumChunkSizeInBytes;
    ULONG ClusterSizeInBytes;
} FSCTL_GET_INTEGRITY_INFORMATION_BUFFER, *PFSCTL_GET_INTEGRITY_INFORMATION_BUFFER;

typedef struct _FSCTL_SET_INTEGRITY_INFORMATION_BUFFER {
    USHORT ChecksumAlgorithm;   // Checksum algorithm. e.g. CHECKSUM_TYPE_UNCHANGED, CHECKSUM_TYPE_NONE, CHECKSUM_TYPE_CRC32
    USHORT Reserved;            // Must be 0
    ULONG Flags;                // FSCTL_INTEGRITY_FLAG_xxx
} FSCTL_SET_INTEGRITY_INFORMATION_BUFFER, *PFSCTL_SET_INTEGRITY_INFORMATION_BUFFER;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
typedef struct _FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX {
    UCHAR EnableIntegrity;             // 0 to disable integrity, 1 to enable integrity
    UCHAR KeepIntegrityStateUnchanged; // 1 to keep the current integrity state and ignore the value in EnableIntegrity, 0 to use EnableIntegrity value
    USHORT Reserved;                   // Must be 0
    ULONG Flags;                       // FSCTL_INTEGRITY_FLAG_xxx
    UCHAR Version;                     // Structure version info, must be 1
    UCHAR Reserved2[7];                // Must be 0
} FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX, *PFSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX;
#endif // #if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)


//
//======================== FSCTL_OFFLOAD_READ ==============================
//
//  Structures used by FSCTL_OFFLOAD_READ operation
//

typedef struct _FSCTL_OFFLOAD_READ_INPUT {
    ULONG Size;
    ULONG Flags;
    ULONG TokenTimeToLive; // In milliseconds
    ULONG Reserved;
    ULONGLONG FileOffset;
    ULONGLONG CopyLength;
} FSCTL_OFFLOAD_READ_INPUT, *PFSCTL_OFFLOAD_READ_INPUT;

typedef struct _FSCTL_OFFLOAD_READ_OUTPUT {
    ULONG Size;
    ULONG Flags;
    ULONGLONG TransferLength;
    UCHAR Token[512];
} FSCTL_OFFLOAD_READ_OUTPUT, *PFSCTL_OFFLOAD_READ_OUTPUT;

#define OFFLOAD_READ_FLAG_ALL_ZERO_BEYOND_CURRENT_RANGE       (1)


//
//======================== FSCTL_OFFLOAD_WRITE =============================
//
//  Structures used by FSCTL_OFFLOAD_WRITE operation
//

typedef struct _FSCTL_OFFLOAD_WRITE_INPUT {
    ULONG Size;
    ULONG Flags;
    ULONGLONG FileOffset;
    ULONGLONG CopyLength;
    ULONGLONG TransferOffset;
    UCHAR Token[512];
} FSCTL_OFFLOAD_WRITE_INPUT, *PFSCTL_OFFLOAD_WRITE_INPUT;

typedef struct _FSCTL_OFFLOAD_WRITE_OUTPUT {
    ULONG Size;
    ULONG Flags;
    ULONGLONG LengthWritten;
} FSCTL_OFFLOAD_WRITE_OUTPUT, *PFSCTL_OFFLOAD_WRITE_OUTPUT;


//
//======================== FSCTL_SET_PURGE_FAILURE_MODE ===========================
//
//  Structure defintions for supporting purge failure mode
//

typedef struct _SET_PURGE_FAILURE_MODE_INPUT {
    ULONG Flags;
} SET_PURGE_FAILURE_MODE_INPUT, *PSET_PURGE_FAILURE_MODE_INPUT;

#define SET_PURGE_FAILURE_MODE_ENABLED   0x00000001    // Enable purge failure mode
#define SET_PURGE_FAILURE_MODE_DISABLED  0x00000002    // Disable purge failure mode


//
//======================== FSCTL_SET_PURGE_FAILURE_MODE ===========================
//

// Used as input by FSCTL_DEDUP_QUERY_FILE_HASHES to specify the hash query range/offset in a file
typedef struct _DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER {
    ULONG           Version;
    ULONG           QueryFlags;
    ULONG           HashAlgorithm;
    LARGE_INTEGER   RangeOffsetInFile;
    LARGE_INTEGER   RangeLength;
} DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER, *PDEDUP_QUERY_FILE_HASHES_INPUT_BUFFER;

// Used as output by FSCTL_DEDUP_QUERY_FILE_HASHES to capture the information for a chunk
typedef struct _DEDUP_CHUNK_INFORMATION_HASH32 {
    ULONG    ChunkFlags;
    LONGLONG ChunkOffsetInFile;
    LONGLONG ChunkSize;
    UCHAR    HashVal[32];
} DEDUP_CHUNK_INFORMATION_HASH32, *PDEDUP_CHUNK_INFORMATION_HASH32;

// Used as input by FSCTL_DEDUP_FILE to specify the operation code.
typedef struct _DEDUP_FILE_OPERATION {
    ULONG   Code;
} DEDUP_FILE_OPERATION, *PDEDUP_FILE_OPERATION;

// Operation code used to signal optimization is about to start on a file.
#define DEDUP_FILE_OP_NOTIFY_OPTIMIZATION   0xc0000013

// Operation code used to zero data a deduped file
#define DEDUP_FILE_OP_SET_ZERO_DATA   0xc0000002

// Operation code used to recall user file
#define DEDUP_FILE_RECALL             0xc0000009

// Operation code used to set dedup reparse point
#define DEDUP_FILE_OP_SET_REPARSE_POINT 0xc0000001

//
//======================= FSCTL_REPAIR_COPIES =============================
//

typedef struct _REPAIR_COPIES_INPUT {

    ULONG Size;                                 // sizeof(REPAIR_COPIES_INPUT)

    ULONG Flags;                                // Reserved (must be zero)

    LARGE_INTEGER FileOffset;

    ULONG Length;

    ULONG SourceCopy;                           // The copy number of the source copy.

    ULONG NumberOfRepairCopies;                 // The number of copies that will be repaired.

    ULONG RepairCopies[ANYSIZE_ARRAY];          // The copy numbers of all the copies that will be repaired.

} REPAIR_COPIES_INPUT, *PREPAIR_COPIES_INPUT;

typedef struct _REPAIR_COPIES_OUTPUT {

    ULONG Size;                                 // sizeof(REPAIR_COPIES_OUTPUT)

    ULONG Status;                               // Operational status

    LARGE_INTEGER ResumeFileOffset;             // File Offset hint to use to resume repair operation skipping
                                                // the range where errors were found (operational Status is non-success).
} REPAIR_COPIES_OUTPUT, *PREPAIR_COPIES_OUTPUT;

//======================= FSCTL_QUERY_FILE_REGIONS =============================

//
//  Structures used for querying for Various file region definitions
//  The initial values if for query VDL
//

//
//  Bit flags which may be OR'd together to define the usage of the given range
//      If the given bit is SET, then the specified region has that attribute
//      if the bit is NOT set, then the specified region does NOT have that attribute
//

#define FILE_REGION_USAGE_VALID_CACHED_DATA     0x00000001
#define FILE_REGION_USAGE_VALID_NONCACHED_DATA  0x00000002

typedef struct _FILE_REGION_INFO {
    LONGLONG FileOffset;
    LONGLONG Length;
    ULONG Usage;
    ULONG Reserved;
} FILE_REGION_INFO, *PFILE_REGION_INFO;

typedef struct _FILE_REGION_OUTPUT {
    ULONG Flags;                            //none currently defined
    ULONG TotalRegionEntryCount;            //count of total regions that could be returned
    ULONG RegionEntryCount;                 //count of regions that were returned
    ULONG Reserved;                         //for longlong alignment
    FILE_REGION_INFO Region[1];
} FILE_REGION_OUTPUT, *PFILE_REGION_OUTPUT;

//
//  This is an optional buffer given on input to specify a region of the
//  file the caller is interested in
//

typedef struct _FILE_REGION_INPUT {

    LONGLONG FileOffset;
    LONGLONG Length;
    ULONG DesiredUsage;

} FILE_REGION_INPUT, *PFILE_REGION_INPUT;

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

//======================= FSCTL_WRITE_USN_REASON =============================

//
//  The list of valid USN reasons that can be set with this FSCTL.  Any bits
//  which are specified which are not defined by this mask are silently
//  stripped.  This operation will not be failed for sending undefined reasons
//  This operation is only supported from kernel mode.
//  The output of this operation is a USN structure.
//

#define VALID_WRITE_USN_REASON_MASK     (USN_REASON_DATA_OVERWRITE |        \
                                         USN_REASON_CLOSE)

typedef struct _WRITE_USN_REASON_INPUT {

    ULONG Flags;                        // Flags for this operation (none defined)
    ULONG UsnReasonToWrite;             // A list of USN reasons to set

} WRITE_USN_REASON_INPUT, *PWRITE_USN_REASON_INPUT;

//No Flags currently defined


// end_ntifs end_winioctl
// begin_ntosifs

//======================= FSCTL_SET_BREAK_ON_STATUS ===========================

#define MAX_IMAGE_FILE_NAME_LEN 15  // to match EPROCESS.ImageFileName

typedef struct BREAK_ON_STATUS_BUFFER {

    //
    //  Set at least one of these to have the file system break into the
    //  debugger when it is about to return a particular NT status code
    //  or Win32 error code (which can cover multiple NT status codes).
    //
    //  It is sufficient for EITHER of these to be satisfied, not
    //  necessarily both.  This means that NtStatus does not override
    //  Win32Error; it can be used to break on an additional status code.
    //
    //  Set both of these to 0 to disable break-on-status.
    //

    NTSTATUS NtStatus;
    ULONG Win32Error;

    //
    //  Additional restrictions (optional).  ALL of these that are set to
    //  a non-zero value must be satisfied or the file system will not break.
    //  This means that ThreadId overrides ProcessId.
    //

    ULONG ThreadId;   // e.g. GetCurrentThreadId()
    ULONG ProcessId;  // e.g. GetCurrentProcessId()

    CHAR ImageFileName[MAX_IMAGE_FILE_NAME_LEN + 1];  // ANSI, case insensitive

} BREAK_ON_STATUS_BUFFER, *PBREAK_ON_STATUS_BUFFER;

// end_ntosifs
// begin_ntifs begin_winioctl

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
// ****************** FSCTL_QUERY_STORAGE_CLASSES ***************************

//
//  The FILE_STORAGE_TIER is an identifier for the storage tier relative to the volume.
//  The storage tier ID for a particular volume has no relationship to the storage tier
//  ID with the same value on a different volume.
//

#define FILE_STORAGE_TIER_NAME_LENGTH           (256)
#define FILE_STORAGE_TIER_DESCRIPTION_LENGTH    (512)

//
//  These flags *must* match those for _STORAGE_TIER as the file system does a
//  pass through.
//

#define FILE_STORAGE_TIER_FLAG_NO_SEEK_PENALTY    (0x00020000)
#define FILE_STORAGE_TIER_FLAG_WRITE_BACK_CACHE   (0x00200000)
#define FILE_STORAGE_TIER_FLAG_READ_CACHE         (0x00400000)

typedef enum _FILE_STORAGE_TIER_MEDIA_TYPE {

    FileStorageTierMediaTypeUnspecified = 0,
    FileStorageTierMediaTypeDisk,
    FileStorageTierMediaTypeSsd

} FILE_STORAGE_TIER_MEDIA_TYPE, *PFILE_STORAGE_TIER_MEDIA_TYPE;

typedef struct _FILE_STORAGE_TIER {

    //
    // Tier ID
    //

    GUID Id;

    //
    // Name for the tier
    //

    WCHAR Name[FILE_STORAGE_TIER_NAME_LENGTH];

    //
    // Note for the tier
    //

    WCHAR Description[FILE_STORAGE_TIER_NAME_LENGTH];

    //
    // Flags: FILE_STORAGE_TIER_FLAG_xxx
    //

    ULONGLONG Flags;

    //
    // Provisioned capacity of the tier
    //

    ULONGLONG ProvisionedCapacity;

    //
    // Media type of the tier
    //

    FILE_STORAGE_TIER_MEDIA_TYPE MediaType;

} FILE_STORAGE_TIER, *PFILE_STORAGE_TIER;

//
//  This structure has the same fields as STORAGE_DEVICE_TIERING_DESCRIPTOR and
//  that structure reserves the upper USHORT of the Flags field for file system use.
//  We define the following possible values for the Flags field.
//

#define QUERY_STORAGE_CLASSES_FLAGS_MEASURE_WRITE      0x80000000
#define QUERY_STORAGE_CLASSES_FLAGS_MEASURE_READ       0x40000000
#define QUERY_STORAGE_CLASSES_FLAGS_NO_DEFRAG_VOLUME   0x20000000

//
//  The response returns a single structure of FSCTL_QUERY_STORAGE_CLASSES_OUTPUT
//  that has all the tiers for this volume.
//

typedef _Struct_size_bytes_(Size) struct _FSCTL_QUERY_STORAGE_CLASSES_OUTPUT {


    //
    // Size of this structure serves
    // as the version
    //

    ULONG Version;

    //
    // Size of  this structure  plus
    // all the variable sized fields
    //

    ULONG Size;

    //
    // Flags
    //

    ULONG Flags;

    //
    // The total number of available tiers for this disk
    //

    ULONG TotalNumberOfTiers;

    //
    // The number of tiers that fit in the output
    //

    ULONG NumberOfTiersReturned;

    //
    // Detailed info on the storage tiers.
    //

    FILE_STORAGE_TIER Tiers[ANYSIZE_ARRAY];

} FSCTL_QUERY_STORAGE_CLASSES_OUTPUT, *PFSCTL_QUERY_STORAGE_CLASSES_OUTPUT;

#define FSCTL_QUERY_STORAGE_CLASSES_OUTPUT_VERSION          sizeof(FSCTL_QUERY_STORAGE_CLASSES_OUTPUT)

// ****************** FSCTL_QUERY_REGION_INFO *******************************

//
//  Input structure for FSCTL_QUERY_REGION_INFO.
//
//  This FSCTL returns the storage tier regions from the storage
//  stack for a particular volume.
//

typedef struct _FSCTL_QUERY_REGION_INFO_INPUT {

    ULONG     Version;                      // The version of this structure.
    ULONG     Size;                         // The size of this structure in bytes.

    ULONG     Flags;                        // Reserved for future use.

    ULONG     NumberOfTierIds;              // Number of entries in TierIds, 0 for all for volume
    GUID      TierIds[ANYSIZE_ARRAY];       // Storage tiers to return information for

} FSCTL_QUERY_REGION_INFO_INPUT, *PFSCTL_QUERY_REGION_INFO_INPUT;

#define FSCTL_QUERY_REGION_INFO_INPUT_VERSION               sizeof(FSCTL_QUERY_REGION_INFO_INPUT)

//
//  Structure that describes a single storage tier region.
//

typedef struct _FILE_STORAGE_TIER_REGION {

    GUID        TierId;     // Tier ID

    ULONGLONG   Offset;     // offset of region in bytes
    ULONGLONG   Length;     // length of region in bytes

} FILE_STORAGE_TIER_REGION, *PFILE_STORAGE_TIER_REGION;

//
//  Output structure for FSCTL_QUERY_REGION_INFO.
//
//  The FSCTL_QUERY_REGION_INFO response returns a single one of these that include
//  multiple FILE_STORAGE_TIER_REGION records, one for each region.
//

typedef struct _FSCTL_QUERY_REGION_INFO_OUTPUT {

    ULONG     Version;                      // The version of this structure.
    ULONG     Size;                         // The size of this structure in bytes.

    ULONG     Flags;                        // Reserved for future use.
    ULONG     Reserved;                     // Reserved for future use.

    ULONGLONG Alignment;                    // in bytes, must align to slab boundary

    ULONG     TotalNumberOfRegions;             // Total number of available regions.
    ULONG     NumberOfRegionsReturned;          // Number of regions that fit in the output.

    FILE_STORAGE_TIER_REGION Regions[ANYSIZE_ARRAY]; // Detailed info on the regions.

} FSCTL_QUERY_REGION_INFO_OUTPUT, *PFSCTL_QUERY_REGION_INFO_OUTPUT;

#define FSCTL_QUERY_REGION_INFO_OUTPUT_VERSION              sizeof(FSCTL_QUERY_REGION_INFO_OUTPUT)

//
//=============== FSCTL_DUPLICATE_EXTENTS_TO_FILE ====================
//

typedef struct _DUPLICATE_EXTENTS_DATA {
    HANDLE FileHandle;
    LARGE_INTEGER SourceFileOffset;
    LARGE_INTEGER TargetFileOffset;
    LARGE_INTEGER ByteCount;
} DUPLICATE_EXTENTS_DATA, *PDUPLICATE_EXTENTS_DATA;

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

//
// Generic fsctl headers which can be sent to the driver.
//

#define WOF_CURRENT_VERSION (0x00000001)

#define WOF_PROVIDER_WIM            (0x00000001)
#define WOF_PROVIDER_FILE           (0x00000002)
#define WOF_PROVIDER_CLOUD          (0x00000003)

typedef struct _WOF_EXTERNAL_INFO {
    ULONG Version;
    ULONG Provider;
} WOF_EXTERNAL_INFO, *PWOF_EXTERNAL_INFO;

typedef struct _WOF_EXTERNAL_FILE_ID {
    FILE_ID_128 FileId;
} WOF_EXTERNAL_FILE_ID, *PWOF_EXTERNAL_FILE_ID;

typedef struct _WOF_VERSION_INFO {
    ULONG WofVersion;
} WOF_VERSION_INFO, *PWOF_VERSION_INFO;

//
// Structures for WIM provider specific fsctl's.
//

#ifndef WIM_PROVIDER_HASH_SIZE
#define WIM_PROVIDER_HASH_SIZE 20
#endif

#define WIM_PROVIDER_CURRENT_VERSION  (0x00000001)

#define WIM_PROVIDER_EXTERNAL_FLAG_NOT_ACTIVE    (0x00000001)
#define WIM_PROVIDER_EXTERNAL_FLAG_SUSPENDED     (0x00000002)

typedef struct _WIM_PROVIDER_EXTERNAL_INFO {
    ULONG Version;
    ULONG Flags;
    LARGE_INTEGER DataSourceId;
    UCHAR ResourceHash[WIM_PROVIDER_HASH_SIZE];
} WIM_PROVIDER_EXTERNAL_INFO, *PWIM_PROVIDER_EXTERNAL_INFO;

//
//  WimType specifies a set of flags corresponding to the type of WIM.
//
//  WIM_BOOT_OS_WIM means the wim contains Windows system files.
//  WIM_BOOT_NOT_OS_WIM means the wim contains 3rd party files or data files.
//
//  Do not use WIM_BOOT_OS_WIM for data that should be preserved on
//  system upgrade.
//

#define WIM_BOOT_OS_WIM       (0x00000001)
#define WIM_BOOT_NOT_OS_WIM   (0x00000000)

typedef struct _WIM_PROVIDER_ADD_OVERLAY_INPUT {
    ULONG WimType;
    ULONG WimIndex;
    ULONG WimFileNameOffset;
    ULONG WimFileNameLength;
} WIM_PROVIDER_ADD_OVERLAY_INPUT, *PWIM_PROVIDER_ADD_OVERLAY_INPUT;

typedef struct _WIM_PROVIDER_UPDATE_OVERLAY_INPUT {
    LARGE_INTEGER DataSourceId;
    ULONG WimFileNameOffset;
    ULONG WimFileNameLength;
} WIM_PROVIDER_UPDATE_OVERLAY_INPUT, *PWIM_PROVIDER_UPDATE_OVERLAY_INPUT;

typedef struct _WIM_PROVIDER_REMOVE_OVERLAY_INPUT {
    LARGE_INTEGER DataSourceId;
} WIM_PROVIDER_REMOVE_OVERLAY_INPUT, *PWIM_PROVIDER_REMOVE_OVERLAY_INPUT;

typedef struct _WIM_PROVIDER_SUSPEND_OVERLAY_INPUT {
    LARGE_INTEGER DataSourceId;
} WIM_PROVIDER_SUSPEND_OVERLAY_INPUT, *PWIM_PROVIDER_SUSPEND_OVERLAY_INPUT;

typedef struct _WIM_PROVIDER_OVERLAY_ENTRY {
    ULONG NextEntryOffset;
    LARGE_INTEGER DataSourceId;
    GUID WimGuid;
    ULONG WimFileNameOffset;
    ULONG WimType;
    ULONG WimIndex;
    ULONG Flags;
} WIM_PROVIDER_OVERLAY_ENTRY, *PWIM_PROVIDER_OVERLAY_ENTRY;

#endif

// end_ntifs end_winioctl
// begin_ntosifs

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

typedef struct _WIM_PROVIDER_CONTROL_INTEGRITY {
    ULONG ControlCode;
} WIM_PROVIDER_CONTROL_INTEGRITY, *PWIM_PROVIDER_CONTROL_INTEGRITY;

#define WIM_PROVIDER_INTEGRITY_CONTROLCODE_SNAPSHOT                 (0)
#define WIM_PROVIDER_INTEGRITY_CONTROLCODE_REVERT_SNAPSHOT          (1)
#define WIM_PROVIDER_INTEGRITY_CONTROLCODE_POWER_HIBERNATE          (2)
#define WIM_PROVIDER_INTEGRITY_CONTROLCODE_POWER_RESUME             (3)
#define WIM_PROVIDER_INTEGRITY_CONTROLCODE_BACKGROUND_VALIDATION    (4)

typedef struct _WIM_PROVIDER_INTEGRITY_STATUS {
    BOOLEAN IntegrityComplete;
    BOOLEAN IntegrityRunning;
    ULONGLONG IntegrityAvailable;
    ULONGLONG IntegrityRequired;
} WIM_PROVIDER_INTEGRITY_STATUS, *PWIM_PROVIDER_INTEGRITY_STATUS;

typedef struct _WIM_PROVIDER_START_INTEGRITY {
    LARGE_INTEGER DataSourceId;
} WIM_PROVIDER_START_INTEGRITY, *PWIM_PROVIDER_START_INTEGRITY;

// end_ntosifs
// begin_ntifs begin_winioctl

//
// Structures for WOF File provider specific fsctl's.
//

#define FILE_PROVIDER_CURRENT_VERSION        (0x00000001)

#define FILE_PROVIDER_SINGLE_FILE            (0x00000001)

#define FILE_PROVIDER_COMPRESSION_XPRESS4K   (0x00000000)
#define FILE_PROVIDER_COMPRESSION_LZX        (0x00000001)
#define FILE_PROVIDER_COMPRESSION_XPRESS8K   (0x00000002)
#define FILE_PROVIDER_COMPRESSION_XPRESS16K  (0x00000003)
#define FILE_PROVIDER_COMPRESSION_MAXIMUM    (0x00000004)

#define FILE_PROVIDER_FLAG_COMPRESS_ON_WRITE (0x00000001)

typedef struct _FILE_PROVIDER_EXTERNAL_INFO_V0 {
    ULONG Version;
    ULONG Algorithm;
} FILE_PROVIDER_EXTERNAL_INFO_V0, *PFILE_PROVIDER_EXTERNAL_INFO_V0;

typedef struct _FILE_PROVIDER_EXTERNAL_INFO_V1 {
    ULONG Version;
    ULONG Algorithm;
    ULONG Flags;
} FILE_PROVIDER_EXTERNAL_INFO_V1, *PFILE_PROVIDER_EXTERNAL_INFO_V1;

typedef FILE_PROVIDER_EXTERNAL_INFO_V1  FILE_PROVIDER_EXTERNAL_INFO;
typedef PFILE_PROVIDER_EXTERNAL_INFO_V1 PFILE_PROVIDER_EXTERNAL_INFO;

// end_ntifs end_winioctl
// begin_ntosifs

//
//  Structures for WOF Cloud Files provider specific fsctls.
//

//
//  This is the cloud-specific part of the reparse tag.
//

#define CLOUD_PROVIDER_CURRENT_VERSION      (0x00000001)

#define CPEI_FLAG_CONVERT_TO_PLACEHOLDER    (0x00000001)

#define CPEI_FLAG_VALID_FLAGS               (0x00000001)

typedef struct _CLOUD_PROVIDER_EXTERNAL_INFO {
    ULONG Version;
    ULONG Flags;
    LARGE_INTEGER ServerFileSize;
    GUID SyncServiceId;
    ULONG ServiceDataOffset;
    ULONG ServiceDataSize;
} CLOUD_PROVIDER_EXTERNAL_INFO, *PCLOUD_PROVIDER_EXTERNAL_INFO;

//
//  Defines for FSCTL_CLOUD_DATA_TRANSFER.
//

#define CLOUD_DATA_TRANSFER_FLAG_NO_RECALL          (0x00000001)

typedef struct _CLOUD_DATA_TRANSFER {
    LARGE_INTEGER RequiredOffset;
    LARGE_INTEGER ByteOffset;
    ULONG RequiredLength;
    ULONG Length;
    ULONG Flags;
    NTSTATUS ServiceStatus;
} CLOUD_DATA_TRANSFER, *PCLOUD_DATA_TRANSFER;

//
//  Defines for FSCTL_CLOUD_COMMAND.
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

#define CLOUD_COMMAND_CURRENT_VERSION       (0x00000001)

#define CLOUD_COMMAND_INITIATE_RECALL       (0)
#define CLOUD_COMMAND_DEFLATE               (1)
#define CLOUD_COMMAND_INVALIDATE_VERSION    (2)
#define CLOUD_COMMAND_GET_SERVICE_DATA      (3)
#define CLOUD_COMMAND_SET_SERVICE_DATA      (4)
#define CLOUD_COMMAND_SET_SYNC_SCOPE        (5)

typedef struct _CLOUD_COMMAND {
    ULONG Version;
    ULONG CommandCode;

    union {

        struct {
            LARGE_INTEGER RecallOffset;
            ULONG RecallLength;
        } InitiateRecall;

        struct {
            LARGE_INTEGER DeflateOffset;
            ULONG DeflateLength;
        } Deflate;

        struct {
            LARGE_INTEGER NewServerFileSize;
            ULONG ServiceDataOffset;
            ULONG ServiceDataSize;
        } InvalidateVersion;

        struct {
            ULONG ServiceDataOffset;
            ULONG ServiceDataSize;
        } ServiceData;

        struct {
            GUID SyncServiceId;
            BOOLEAN SetScope;
        } SetSyncScope;

    } DUMMYUNIONNAME;
} CLOUD_COMMAND, *PCLOUD_COMMAND;

//
//  Defines for cloud filter communication port messages.
//

#define CLOUDPROV_PORT_NAME L"\\CloudFileFilterPort"

//
//  The service GUID is appended to this prefix.
//

#define CLOUDPROV_SERVICE_PREFIX L"\\CloudServicePort"

#define CLOUD_PROVIDER_MESSAGE_CURRENT_VERSION      (0x00000001)

#define CLOUD_PROVIDER_MESSAGE_CODE_FILE_OPEN               (1)
#define CLOUD_PROVIDER_MESSAGE_CODE_FETCH_DATA              (2)
#define CLOUD_PROVIDER_MESSAGE_CODE_FILE_LEAVING_SCOPE      (3)
#define CLOUD_PROVIDER_MESSAGE_CODE_DELETE_PENDING          (4)
#define CLOUD_PROVIDER_MESSAGE_CODE_LAST_USER_HANDLE_CLOSE  (5)

#define FETCH_DATA_FLAG_READ    (0x00000001)
#define FETCH_DATA_FLAG_WRITE   (0x00000002)

#define CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE   48

typedef struct _CLOUD_PROVIDER_MESSAGE {
    ULONG Version;
    ULONG MessageCode;

    union {
        struct {
            FILE_ID_128 FileId;
            WCHAR VolumeGuidName[CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE];
        } FileOpen;

        struct {
            FILE_ID_128 FileId;
            LARGE_INTEGER ContainingOffset;
            LARGE_INTEGER ContainingLength;
            LARGE_INTEGER RequiredOffset;
            ULONG RequiredLength;
            ULONG Flags;
            ULONG Alignment;
            WCHAR VolumeGuidName[CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE];
        } FetchData;

        struct {
            FILE_ID_128 FileId;
            FILE_ID_128 TargetDirectoryFileId;
            WCHAR VolumeGuidName[CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE];
        } FileLeavingScope;

        struct {
            FILE_ID_128 FileId;
            WCHAR VolumeGuidName[CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE];
        } DeletePending;

        struct {
            FILE_ID_128 FileId;
            WCHAR VolumeGuidName[CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE];
        } LastUserHandleClose;

    } DUMMYUNIONNAME;
} CLOUD_PROVIDER_MESSAGE, *PCLOUD_PROVIDER_MESSAGE;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 ) /* nonstandard extension used : nameless struct/union */
#endif

#endif  //  (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

// end_ntosifs
// begin_ntifs begin_winioctl

// ****************** Insert New FSCTLs Here ********************************

#endif // _FILESYSTEMFSCTL_

// end_ntifs end_winioctl

//          NOTE: Most new FSCTL structures should go inside the
//                _FILESYSTEMFSCTL_ conditional so there won't be
//                conflicts between winioctl and other headress.
//                Below this point are structure defintions that are
//                in other header files (like winnt.h)
//

// begin_ntifs

//
//======================= FSCTL_SET_REPARSE_POINT =========================
//======================= FSCTL_GET_REPARSE_POINT =========================
//======================= FSCTL_DELETE_REPARSE_POINT ======================
//
// Structures for FSCTL_SET_REPARSE_POINT, FSCTL_GET_REPARSE_POINT, and FSCTL_DELETE_REPARSE_POINT
//

//
// The reparse structure is used by layered drivers to store data in a
// reparse point. The constraints on reparse tags are defined below.
// This version of the reparse data buffer is only for Microsoft tags.
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

#define SYMLINK_FLAG_RELATIVE   1

typedef struct _REPARSE_DATA_BUFFER {
    ULONG  ReparseTag;
    USHORT ReparseDataLength;
    USHORT Reserved;
    union {
        struct {
            USHORT SubstituteNameOffset;
            USHORT SubstituteNameLength;
            USHORT PrintNameOffset;
            USHORT PrintNameLength;
            ULONG Flags;
            WCHAR PathBuffer[1];
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
    } DUMMYUNIONNAME;
} REPARSE_DATA_BUFFER, *PREPARSE_DATA_BUFFER;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 )
#endif

#define REPARSE_DATA_BUFFER_HEADER_SIZE   FIELD_OFFSET(REPARSE_DATA_BUFFER, GenericReparseBuffer)


// begin_winnt
//
// The reparse GUID structure is used by all 3rd party layered drivers to
// store data in a reparse point. For non-Microsoft tags, The GUID field
// cannot be GUID_NULL.
// The constraints on reparse tags are defined below.
// Microsoft tags can also be used with this format of the reparse point buffer.
//

typedef struct _REPARSE_GUID_DATA_BUFFER {
    ULONG  ReparseTag;
    USHORT ReparseDataLength;
    USHORT Reserved;
    GUID   ReparseGuid;
    struct {
        UCHAR  DataBuffer[1];
    } GenericReparseBuffer;
} REPARSE_GUID_DATA_BUFFER, *PREPARSE_GUID_DATA_BUFFER;

#define REPARSE_GUID_DATA_BUFFER_HEADER_SIZE   FIELD_OFFSET(REPARSE_GUID_DATA_BUFFER, GenericReparseBuffer)

//
// Maximum allowed size of the reparse data.
//

#define MAXIMUM_REPARSE_DATA_BUFFER_SIZE      ( 16 * 1024 )

//
// Predefined reparse tags.
// These tags need to avoid conflicting with IO_REMOUNT defined in ntos\inc\io.h
//

#define IO_REPARSE_TAG_RESERVED_ZERO             (0)
#define IO_REPARSE_TAG_RESERVED_ONE              (1)

//
// The value of the following constant needs to satisfy the following conditions:
//  (1) Be at least as large as the largest of the reserved tags.
//  (2) Be strictly smaller than all the tags in use.
//

#define IO_REPARSE_TAG_RESERVED_RANGE            IO_REPARSE_TAG_RESERVED_ONE

//
// The reparse tags are a ULONG. The 32 bits are laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +-+-+-+-+-----------------------+-------------------------------+
//  |M|R|N|R|     Reserved bits     |       Reparse Tag Value       |
//  +-+-+-+-+-----------------------+-------------------------------+
//
// M is the Microsoft bit. When set to 1, it denotes a tag owned by Microsoft.
//   All ISVs must use a tag with a 0 in this position.
//   Note: If a Microsoft tag is used by non-Microsoft software, the
//   behavior is not defined.
//
// R is reserved.  Must be zero for non-Microsoft tags.
//
// N is name surrogate. When set to 1, the file represents another named
//   entity in the system.
//
// The M and N bits are OR-able.
// The following macros check for the M and N bit values:
//

//
// Macro to determine whether a reparse point tag corresponds to a tag
// owned by Microsoft.
//

#define IsReparseTagMicrosoft(_tag) (              \
                           ((_tag) & 0x80000000)   \
                           )

//
// Macro to determine whether a reparse point tag is a name surrogate
//

#define IsReparseTagNameSurrogate(_tag) (          \
                           ((_tag) & 0x20000000)   \
                           )

// end_winnt

//
// The following constant represents the bits that are valid to use in
// reparse tags.
//

#define IO_REPARSE_TAG_VALID_VALUES     (0xF000FFFF)

//
// Macro to determine whether a reparse tag is a valid tag.
//

#define IsReparseTagValid(_tag) (                               \
                  !((_tag) & ~IO_REPARSE_TAG_VALID_VALUES) &&   \
                  ((_tag) > IO_REPARSE_TAG_RESERVED_RANGE)      \
                 )

///////////////////////////////////////////////////////////////////////////////
//
// Microsoft tags for reparse points.
//
///////////////////////////////////////////////////////////////////////////////

#define IO_REPARSE_TAG_MOUNT_POINT              (0xA0000003L)       // winnt
#define IO_REPARSE_TAG_HSM                      (0xC0000004L)       // winnt
#define IO_REPARSE_TAG_DRIVE_EXTENDER           (0x80000005L)
#define IO_REPARSE_TAG_HSM2                     (0x80000006L)       // winnt
#define IO_REPARSE_TAG_SIS                      (0x80000007L)       // winnt
#define IO_REPARSE_TAG_WIM                      (0x80000008L)       // winnt
#define IO_REPARSE_TAG_CSV                      (0x80000009L)       // winnt
#define IO_REPARSE_TAG_DFS                      (0x8000000AL)       // winnt
#define IO_REPARSE_TAG_FILTER_MANAGER           (0x8000000BL)
#define IO_REPARSE_TAG_SYMLINK                  (0xA000000CL)       // winnt
#define IO_REPARSE_TAG_IIS_CACHE                (0xA0000010L)
#define IO_REPARSE_TAG_DFSR                     (0x80000012L)       // winnt
#define IO_REPARSE_TAG_DEDUP                    (0x80000013L)       // winnt
#define IO_REPARSE_TAG_APPXSTRM                 (0xC0000014L)
#define IO_REPARSE_TAG_NFS                      (0x80000014L)       // winnt
#define IO_REPARSE_TAG_FILE_PLACEHOLDER         (0x80000015L)       // winnt
#define IO_REPARSE_TAG_DFM                      (0x80000016L)
#define IO_REPARSE_TAG_WOF                      (0x80000017L)       // winnt
#define IO_REPARSE_TAG_WCI                      (0x80000018L)       // winnt
#define IO_REPARSE_TAG_GLOBAL_REPARSE           (0x80000019L)       // winnt


///////////////////////////////////////////////////////////////////////////////
//
// Non-Microsoft tags for reparse points
//
///////////////////////////////////////////////////////////////////////////////

//
// Tag allocated to CONGRUENT, May 2000. Used by IFSTEST
//

#define IO_REPARSE_TAG_IFSTEST_CONGRUENT        (0x00000009L)

//
//  Tag allocated to Moonwalk Univeral for HSM
//  GUID: 257ABE42-5A28-4C8C-AC46-8FEA5619F18F
//

#define IO_REPARSE_TAG_MOONWALK_HSM             (0x0000000AL)

//
//  Tag allocated to Tsinghua Univeristy for Research purposes
//  No released products should use this tag
//  GUID: b86dff51-a31e-4bac-b3cf-e8cfe75c9fc2
//

#define IO_REPARSE_TAG_TSINGHUA_UNIVERSITY_RESEARCH (0x0000000BL)

//
// Tag allocated to ARKIVIO for HSM
//

#define IO_REPARSE_TAG_ARKIVIO                  (0x0000000CL)

//
//  Tag allocated to SOLUTIONSOFT for name surrogate
//

#define IO_REPARSE_TAG_SOLUTIONSOFT             (0x2000000DL)

//
//  Tag allocated to COMMVAULT for HSM
//

#define IO_REPARSE_TAG_COMMVAULT                (0x0000000EL)

//
//  Tag allocated to Overtone Software for HSM
//

#define IO_REPARSE_TAG_OVERTONE                 (0x0000000FL)

//
//  Tag allocated to Symantec (formerly to KVS Inc) for HSM
//  GUID: A49F7BF6-77CA-493c-A0AA-18DBB28D1098
//

#define IO_REPARSE_TAG_SYMANTEC_HSM2            (0x00000010L)

//
//  Tag allocated to Enigma Data for HSM
//

#define IO_REPARSE_TAG_ENIGMA_HSM               (0x00000011L)

//
//  Tag allocated to Symantec for HSM
//  GUID: B99F4235-CF1C-48dd-9E6C-459FA289F8C7
//

#define IO_REPARSE_TAG_SYMANTEC_HSM             (0x00000012L)

//
//  Tag allocated to INTERCOPE for HSM
//  GUID: F204BE2D-AEEB-4728-A31C-C7F4E9BEA758}
//

#define IO_REPARSE_TAG_INTERCOPE_HSM            (0x00000013L)

//
//  Tag allocated to KOM Networks for HSM
//

#define IO_REPARSE_TAG_KOM_NETWORKS_HSM         (0x00000014L)

//
//  Tag allocated to MEMORY_TECH for HSM
//  GUID: E51BA456-046C-43ea-AEC7-DC1A87E1FD49
//

#define IO_REPARSE_TAG_MEMORY_TECH_HSM          (0x00000015L)

//
//  Tag allocated to BridgeHead Software for HSM
//  GUID: EBAFF6E3-F21D-4496-8342-58144B3D2BD0
//

#define IO_REPARSE_TAG_BRIDGEHEAD_HSM           (0x00000016L)

//
//  Tag allocated to OSR for samples reparse point filter
//  GUID: 3740c860-b19b-11d9-9669-0800200c9a66
//

#define IO_REPARSE_TAG_OSR_SAMPLE               (0x20000017L)

//
//  Tag allocated to Global 360 for HSM
//  GUID: C4B51F66-7F00-4c55-9441-8A1B159F209B
//

#define IO_REPARSE_TAG_GLOBAL360_HSM            (0x00000018L)

//
//  Tag allocated to Altiris for HSM
//  GUID: fc1047eb-fb2d-45f2-a2f4-a71c1032fa2dB
//

#define IO_REPARSE_TAG_ALTIRIS_HSM              (0x00000019L)

//
//  Tag allocated to Hermes for HSM
//  GUID: 437E0FD5-FCB4-42fe-877A-C785DA662AC2
//

#define IO_REPARSE_TAG_HERMES_HSM               (0x0000001AL)

//
//  Tag allocated to PointSoft for HSM
//  GUID: 547BC7FD-9604-4deb-AE07-B6514DF5FBC6
//

#define IO_REPARSE_TAG_POINTSOFT_HSM            (0x0000001BL)

//
//  Tag allocated to GRAU Data Storage for HSM
//  GUID: 6662D310-5653-4D10-8C31-F8E166D1A1BD
//

#define IO_REPARSE_TAG_GRAU_DATASTORAGE_HSM     (0x0000001CL)

//
//  Tag allocated to CommVault for HSM
//  GUID: cc38adf3-c583-4efa-b183-72c1671941de
//

#define IO_REPARSE_TAG_COMMVAULT_HSM            (0x0000001DL)


//
//  Tag allocated to Data Storage Group for single instance storage
//  GUID: C1182673-0562-447a-8E40-4F0549FDF817
//

#define IO_REPARSE_TAG_DATASTOR_SIS             (0x0000001EL)


//
//  Tag allocated to Enterprise Data Solutions, Inc. for HSM
//  GUID: EB63DF9D-8874-41cd-999A-A197542CDAFC
//

#define IO_REPARSE_TAG_EDSI_HSM                 (0x0000001FL)


//
//  Tag allocated to HP StorageWorks Reference Information Manager for Files (HSM)
//  GUID: 3B0F6B23-0C2E-4281-9C19-C6AEEBC88CD8
//

#define IO_REPARSE_TAG_HP_HSM                   (0x00000020L)


//
//  Tag allocated to SER Beteiligung Solutions Deutschland GmbH (HSM)
//  GUID: 55B673F0-978E-41c5-9ADB-AF99640BE90E
//

#define IO_REPARSE_TAG_SER_HSM                  (0x00000021L)


//
//  Tag allocated to Double-Take Software (formerly NSI Software, Inc.) for HSM
//  GUID: f7cb0ce8-453a-4ae1-9c56-db41b55f6ed4
//

#define IO_REPARSE_TAG_DOUBLE_TAKE_HSM          (0x00000022L)


//
//  Tag allocated to Beijing Wisdata Systems CO, LTD for HSM
//  GUID: d546500a-2aeb-45f6-9482-f4b1799c3177
//

#define IO_REPARSE_TAG_WISDATA_HSM              (0x00000023L)


//
//  Tag allocated to Mimosa Systems Inc for HSM
//  GUID: 8ddd4144-1a22-404b-8a5a-fcd91c6ee9f3
//

#define IO_REPARSE_TAG_MIMOSA_HSM               (0x00000024L)


//
//  Tag allocated to H&S Heilig und Schubert Software AG for HSM
//  GUID: 77CA30C0-E5EC-43df-9E44-A4910378E284
//

#define IO_REPARSE_TAG_HSAG_HSM                 (0x00000025L)


//
//  Tag allocated to Atempo Inc. (Atempo Digital Archive)  for HSM
//  GUID: 9B64518A-D6A4-495f-8D01-392F38862F0C
//

#define IO_REPARSE_TAG_ADA_HSM                  (0x00000026L)


//
//  Tag allocated to Autonomy Corporation for HSM
//  GUID: EB112A57-10FC-4b42-B590-A61897FDC432
//

#define IO_REPARSE_TAG_AUTN_HSM                 (0x00000027L)


//
//  Tag allocated to Nexsan for HSM
//  GUID: d35eba9a-e722-445d-865f-dde1120acf16
//

#define IO_REPARSE_TAG_NEXSAN_HSM               (0x00000028L)


//
//  Tag allocated to Double-Take for SIS
//  GUID: BDA506C2-F74D-4495-9A8D-44FD8D5B4F42
//

#define IO_REPARSE_TAG_DOUBLE_TAKE_SIS          (0x00000029L)


//
//  Tag allocated to Sony for HSM
//  GUID: E95032E4-FD81-4e15-A8E2-A1F078061C4E
//

#define IO_REPARSE_TAG_SONY_HSM                 (0x0000002AL)


//
//  Tag allocated to Eltan Comm for HSM
//  GUID: E1596D9F-44D8-43f4-A2D6-E9FE8D3E28FB
//

#define IO_REPARSE_TAG_ELTAN_HSM                (0x0000002BL)


//
//  Tag allocated to Utixo LLC for HSM
//  GUID: 5401F960-2F95-46D0-BBA6-052929FE2C32
//

#define IO_REPARSE_TAG_UTIXO_HSM                (0x0000002CL)


//
//  Tag allocated to Quest Software for HSM
//  GUID: D546500A-2AEB-45F6-9482-F4B1799C3177
//

#define IO_REPARSE_TAG_QUEST_HSM                (0x0000002DL)


//
//  Tag allocated to DataGlobal GmbH for HSM
//  GUID: 7A09CA83-B7B1-4614-ADFD-0BD5F4F989C9
//

#define IO_REPARSE_TAG_DATAGLOBAL_HSM           (0x0000002EL)


//
//  Tag allocated to Qi Tech LLC for HSM
//  GUID: C8110B39-A4CE-432E-B58A-FBEAD296DF03
//

#define IO_REPARSE_TAG_QI_TECH_HSM              (0x2000002FL)

//
//  Tag allocated to DataFirst Corporation for HSM
//  GUID: E0E40591-6434-479f-94AC-DECF6DAEFB5C
//

#define IO_REPARSE_TAG_DATAFIRST_HSM            (0x00000030L)

//
//  Tag allocated to C2C Systems for HSM
//  GUID: 6F2F829C-36AE-4E88-A3B6-E2C24377EA1C
//

#define IO_REPARSE_TAG_C2CSYSTEMS_HSM           (0x00000031L)

//
//  Tag allocated to Waterford Technologies for deduplication
//  GUID: 0AF8B999-B8E8-408b-805F-5448E68F9274
//

#define IO_REPARSE_TAG_WATERFORD                (0x00000032L)

//
//  Tag allocated to Riverbed Technology for HSM
//  GUID: 3336274-255B-4038-9D39-14B0EC3F8256
//

#define IO_REPARSE_TAG_RIVERBED_HSM             (0x00000033L)

//
//  Tag allocated to Caringo, Inc.  for HSM
//  GUID: B92426FA-D35F-48DB-A452-8FD557A23353
//

#define IO_REPARSE_TAG_CARINGO_HSM              (0x00000034L)

//
//  Tag allocated to MaxiScale, Inc. for HSM
//  GUID: 643B4714-BA13-427b-B771-C5BFDE787BB7
//

#define IO_REPARSE_TAG_MAXISCALE_HSM            (0x20000035L)

//
//  Tag allocated to Citrix Systems for profile management
//  GUID: B9150EDE-5845-4818-841B-5BCBB3B848E3
//

#define IO_REPARSE_TAG_CITRIX_PM                (0x00000036L)

//
//  Tag allocated to OpenAFS for DFS
//  GUID: EF21A155-5C92-4470-AB3B-370403D96369
//

#define IO_REPARSE_TAG_OPENAFS_DFS              (0x00000037L)

//
//  Tag allocated to ZL Technologies Inc for HSM
//  GUID: A521FE7A-EB10-4148-BAC7-264359827B7E
//

#define IO_REPARSE_TAG_ZLTI_HSM                 (0x00000038L)

//
//  Tag allocated to EMC Corporation for HSM
//  GUID: 119EA2B9-8979-48b9-B4CE-5082AF2D81E5
//

#define IO_REPARSE_TAG_EMC_HSM                  (0x00000039L)

//
//  Tag allocated to VMware for profile management
//  GUID: 6D020A57-C9BB-4DA4-A43F-49686D8D5E77
//

#define IO_REPARSE_TAG_VMWARE_PM                (0x0000003AL)

//
//  Tag allocated to Arco Computer Products for backup
//  GUID: C933F72B-A64D-44d9-8CD9-F339D12390CC
//

#define IO_REPARSE_TAG_ARCO_BACKUP              (0x0000003BL)

//
//  Tag allocated to Carroll-Net for HSM
//  GUID: 805EB191-564B-415a-A78C-9ED0AF8E02FF
//

#define IO_REPARSE_TAG_CARROLL_HSM              (0x0000003CL)

//
//  Tag allocated to ComTrade for HSM
//  GUID: D546500A-2AEB-45F6-9482-F4B1799C3177
//

#define IO_REPARSE_TAG_COMTRADE_HSM             (0x0000003DL)

//
//  Tag allocated to EaseVault for HSM
//  GUID: BBA65D6F-F8A0-48CC-B748-DBD5FFFCCFB1
//

#define IO_REPARSE_TAG_EASEVAULT_HSM            (0x0000003EL)

//
//  Tag allocated to Hitachi Data Systems for HSM
//  GUID: DC095FD2-AC3C-46BA-9E58-DD182BE86AF4
//

#define IO_REPARSE_TAG_HDS_HSM                  (0x0000003FL)

//
//  Tag allocated to Maginatics for network redirector
//  GUID: 1907AE87-388D-4854-AF63-B585A619DF28
//

#define IO_REPARSE_TAG_MAGINATICS_RDR           (0x00000040L)

//
//  Tag allocated to Google for HSM
//  GUID: 40550C94-68DB-4726-9C62-47BB88577BD0
//

#define IO_REPARSE_TAG_GOOGLE_HSM               (0x00000041L)

//
//  Tag allocated to Quaddra for HSM
//  GUID: 491D6619-20C3-4BFA-AF98-4EA2A7F53F1D
//

#define IO_REPARSE_TAG_QUADDRA_HSM              (0x00000042L)

//
//  Tag allocated to HP for backup
//  GUID: 0c5ed442-4928-473e-970e-5389ff2b4328
//

#define IO_REPARSE_TAG_HP_BACKUP                (0x00000043L)

//
//  Reparse point index keys.
//
//  The index with all the reparse points that exist in a volume at a
//  given time contains entries with keys of the form
//                        <reparse tag, file record id>.
//  The data part of these records is empty.
//

#pragma pack(4)

typedef struct _REPARSE_INDEX_KEY {

    //
    //  The tag of the reparse point.
    //

    ULONG FileReparseTag;

    //
    //  The file record Id where the reparse point is set.
    //

    LARGE_INTEGER FileId;

} REPARSE_INDEX_KEY, *PREPARSE_INDEX_KEY;

#pragma pack()

//
//  To better guarentee backwards compatibility for selective new file system
//  functionality, this new functionality will be disabled until all mini
//  file system filters as well as legacy file system filters explicitly opt-in
//  to this new functionality.  This is controlled by a new registry key in
//  the filters service defintion called "SupportedFeatures".
//
//  File System filters need to update their .INF files to set state that the
//  given functionality is now supported.  Even if a filter can't actually
//  support the given operations they should mark in the .INF that it is
//  supported and modify their filter to fail the operations they don't support.
//
//  Following are the currently defined flag defintions for new functionality
//  and the indicator as to which version
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define SUPPORTED_FS_FEATURES_OFFLOAD_READ    0x00000001
#define SUPPORTED_FS_FEATURES_OFFLOAD_WRITE   0x00000002

#define SUPPORTED_FS_FEATURES_VALID_MASK      (SUPPORTED_FS_FEATURES_OFFLOAD_READ |\
                                               SUPPORTED_FS_FEATURES_OFFLOAD_WRITE)

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */
// end_ntifs
// begin_ntifs begin_winnt

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

//======================= FSCTL_SCRUB_DATA =============================

#define SCRUB_DATA_INPUT_FLAG_RESUME                           0x00000001
#define SCRUB_DATA_INPUT_FLAG_SKIP_IN_SYNC                     0x00000002
#define SCRUB_DATA_INPUT_FLAG_SKIP_NON_INTEGRITY_DATA          0x00000004

#define SCRUB_DATA_OUTPUT_FLAG_INCOMPLETE                      0x00000001

#define SCRUB_DATA_OUTPUT_FLAG_NON_USER_DATA_RANGE             0x00010000
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define SCRUB_DATA_OUTPUT_FLAG_PARITY_EXTENT_DATA_RETURNED     0x00020000
#define SCRUB_DATA_OUTPUT_FLAG_RESUME_CONTEXT_LENGTH_SPECIFIED 0x00040000
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINBLUE */

typedef struct _SCRUB_DATA_INPUT {

    //
    // sizeof(SCRUB_DATA_INPUT)
    //

    ULONG Size;

    //
    // Zero for the initial call.
    //
    // SCRUB_DATA_INPUT_FLAG_RESUME has to be specified when
    // ResumeContext is provided from the previous call
    //

    ULONG Flags;

    //
    // Maximum number of IOs in a single call. This is a hint to a
    // file system to halt the operation with a restart context if the
    // operation takes too long.
    //

    ULONG MaximumIos;

    //
    // Reserved
    //

    ULONG Reserved[17];

    //
    // Opaque data returned from the previous call to restart the
    // operation. Only valid when SCRUB_DATA_FLAG_RESUME is set
    // at Flags field.
    //

    UCHAR ResumeContext[816];

} SCRUB_DATA_INPUT, *PSCRUB_DATA_INPUT;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

typedef struct _SCRUB_PARITY_EXTENT {

    LONGLONG Offset;

    ULONGLONG Length;

} SCRUB_PARITY_EXTENT, *PSCRUB_PARITY_EXTENT;

typedef struct _SCRUB_PARITY_EXTENT_DATA {

    //
    // sizeof(SCRUB_PARITY_EXTENT_DATA)
    //

    USHORT Size;

    //
    // Reserved
    //

    USHORT Flags;

    //
    // Number of parity extents
    //

    USHORT NumberOfParityExtents;

    //
    // Maximum number of parity extents in ParityExtents buffer
    //

    USHORT MaximumNumberOfParityExtents;

    //
    // Output buffer for parity extents
    //

    SCRUB_PARITY_EXTENT ParityExtents[ANYSIZE_ARRAY];

} SCRUB_PARITY_EXTENT_DATA, *PSCRUB_PARITY_EXTENT_DATA;

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

typedef struct _SCRUB_DATA_OUTPUT {

    //
    // sizeof(SCRUB_DATA_OUTPUT)
    //

    ULONG Size;

    //
    // Output Flags
    //
    // SCRUB_DATA_OUTPUT_FLAG_INCOMPLETE will be set if there are
    // remaining ranges. ResumeContext provided for the subsequent
    // call.
    //

    ULONG Flags;

    //
    // Operational status
    //

    ULONG Status;

    //
    // Offset of the error range of the user data where the operational errors were found.
    // This value may be -1 if the error were found in non-user data area
    //

    ULONGLONG ErrorFileOffset;

    //
    // Length of the error range of the user data where the operational errors were found.
    // This value may be 0 if the error were found in non-user data area
    //

    ULONGLONG ErrorLength;

    //
    // Number of bytes successfully repaired in the operational error range
    //

    ULONGLONG NumberOfBytesRepaired;

    //
    // Number of bytes failed due to an error in the operational error range
    //

    ULONGLONG NumberOfBytesFailed;

    //
    // Reference number for the file system specific internal file
    //

    ULONGLONG InternalFileReference;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

    //
    // Resume context length
    //
    // Only valid if SCRUB_DATA_OUTPUT_FLAG_RESUME_CONTEXT_LENGTH_SPECIFIED
    // is specified in the Flags.
    //

    USHORT ResumeContextLength;

    //
    // Offset for the parity extent data in the output buffer
    // Only valid if SCRUB_DATA_OUTPUT_FLAG_PARITY_EXTENT_DATA_RETURNED
    // is specified in the Flags.
    //

    USHORT ParityExtentDataOffset;

    //
    // Reserved
    //

    ULONG Reserved[5];

#else /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

    //
    // Reserved
    //

    ULONG Reserved[6];

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

    //
    // Opaque data that the file system returns to the user so that
    // subsequent call can use this data to resume from the previous
    // point for the operation.
    //
    // Resume operation can be requested on a different handle and
    // across the reboot. However, file system may not honor the
    // resume context if not feasible and start from the beginning.
    //
    // This field is only valid when SCRUB_DATA_OUTPUT_FLAG_INCOMPLETE
    // is set.
    //

    UCHAR ResumeContext[816];

} SCRUB_DATA_OUTPUT, *PSCRUB_DATA_OUTPUT;

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
//
//=============== FSCTL_QUERY_SHARED_VIRTUAL_DISK_SUPPORT ====================
//

//
// Whether the file system supports shared virtual disks.
//
typedef enum _SharedVirtualDiskSupportType
{
    //
    // Shared virtual disks are not supported.
    //
    SharedVirtualDisksUnsupported = 0,

    //
    // Shared virtual disks are supported.
    //
    SharedVirtualDisksSupported = 1,

    //
    // The target device supports taking virtual disk
    // snapshots.
    //
    SharedVirtualDiskSnapshotsSupported = 3
} SharedVirtualDiskSupportType;

typedef enum _SharedVirtualDiskHandleState
{
    //
    // The file handle is not related to a shared virtual disk.
    //
    SharedVirtualDiskHandleStateNone = 0,

    //
    // This handle is for the same file where at least one handle is
    // accessing the file in shared mode.
    //
    SharedVirtualDiskHandleStateFileShared = 1,

    //
    // This handle is currently being used to access a shared
    // virtual disk.
    //
    SharedVirtualDiskHandleStateHandleShared = 3
} SharedVirtualDiskHandleState;

//
// Response to FSCTL_QUERY_SHARED_VIRTUAL_DISK_SUPPORT that indicates the level
// of support for shared virtual disks on the target file system.
//
typedef struct _SHARED_VIRTUAL_DISK_SUPPORT {
    //
    // One or more of the above SharedVirtualDiskSupportType flags that indicate the
    // level of shared virtual disk support on this file system.
    //
    SharedVirtualDiskSupportType SharedVirtualDiskSupport;

    //
    // The state of the current shared virtual disk handle.  This is one or more of the
    // above SharedVirtualDiskHandleState flags.
    //
    SharedVirtualDiskHandleState HandleState;
} SHARED_VIRTUAL_DISK_SUPPORT, *PSHARED_VIRTUAL_DISK_SUPPORT;

//
// Determines if the provided virtual disk handle state, from FSCTL_QUERY_SHARED_VIRTUAL_DISK_SUPPORT,
// indicates that the target virtual disk file is opened in shared mode.
//
#define IsVirtualDiskFileShared(HandleState) (((HandleState) & SharedVirtualDiskHandleStateFileShared) != 0)

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
// end_ntifs end_winnt

// begin_ntosifs
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
//
//=============== FSCTL_SHUFFLE_FILE ====================
//

#define SHUFFLE_FILE_FLAG_SKIP_INITIALIZING_NEW_CLUSTERS                (0x00000001)

//
//  Input structure for FSCTL_SHUFFLE_FILE
//

typedef struct _SHUFFLE_FILE_DATA {

    LONGLONG StartingOffset;
    LONGLONG Length;
    ULONG Flags;

} SHUFFLE_FILE_DATA, *PSHUFFLE_FILE_DATA;

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

//
//============== FSCTL_SPARSE_OVERALLOCATE ==============
//

//
//  Input/Output structure for FSCTL_SPARSE_OVERALLOCATE
//
//  It's possible to pass this structure just as input, just as output, or as
//  both input and output.
//

typedef struct _SPARSE_OVERALLOCATE_DATA {

    //
    //  On input:   The desired minimum size (in bytes) that the file system
    //              will allocate for writes to a sparse region of the file.
    //              If a write spans multiple distinct sparse regions of a
    //              file, then this size only applies to the last sparse region
    //              affected (since earlier sparse regions are bounded).
    //              A value of 0 means the file system uses its own default
    //              allocation policy (usually the minimum necessary).
    //
    //  On output:  The effective over-allocate size for the file.  This is
    //              usually the desired minimum size from the input structure,
    //              rounded up to file system-specific alignment requirements
    //              (e.g. on NTFS this would be rounded up to compression unit
    //              alignment).  The file system may also impose a maximum
    //              supported value.
    //

    ULONG SparseOverAllocateSize;

} SPARSE_OVERALLOCATE_DATA, *PSPARSE_OVERALLOCATE_DATA;

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
//
//=============== FSCTL_QUERY_FILE_METADATA_OPTIMIZATION ====================
//

//
//  Output structure for FSCTL_QUERY_FILE_METADATA_OPTIMIZATION
//

typedef enum _FILE_METADATA_OPTIMIZATION_STATE {

    FileMetadataOptimizationNone = 0,
    FileMetadataOptimizationInProgress,
    FileMetadataOptimizationPending

} FILE_METADATA_OPTIMIZATION_STATE, *PFILE_METADATA_OPTIMIZATION_STATE;

typedef struct _FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT {

    FILE_METADATA_OPTIMIZATION_STATE State;

    ULONG AttributeListSize;

    ULONG MetadataSpaceUsed;
    ULONG MetadataSpaceAllocated;

    ULONG NumberOfFileRecords;
    ULONG NumberOfResidentAttributes;
    ULONG NumberOfNonresidentAttributes;

    ULONG TotalInProgress;
    ULONG TotalPending;

} FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT, *PFILE_QUERY_METADATA_OPTIMIZATION_OUTPUT;

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
// end_ntosifs


// begin_winioctl begin_ntosifs
//
//=============== END FileSystem FSCTL Structure Defintions ==================
//
//  end_ntifs end_winnt end_winioctl end_ntosifs
//  begin_ntifs


//
// The following three FSCTLs are placed in this file to facilitate sharing
// between the redirector and the IO subsystem
//
// This FSCTL is used to garner the link tracking information for a file.
// The data structures used for retreving the information are
// LINK_TRACKING_INFORMATION defined further down in this file.
//

#define FSCTL_LMR_GET_LINK_TRACKING_INFORMATION   CTL_CODE(FILE_DEVICE_NETWORK_FILE_SYSTEM,58,METHOD_BUFFERED,FILE_ANY_ACCESS)

//
// This FSCTL is used to update the link tracking information on a server for
// an intra machine/ inter volume move on that server
//

#define FSCTL_LMR_SET_LINK_TRACKING_INFORMATION   CTL_CODE(FILE_DEVICE_NETWORK_FILE_SYSTEM,59,METHOD_BUFFERED,FILE_ANY_ACCESS)

//
// The following IOCTL is used in link tracking implementation. It determines if the
// two file objects passed in are on the same server. This IOCTL is available in
// kernel mode only since it accepts FILE_OBJECT as parameters
//

#define IOCTL_LMR_ARE_FILE_OBJECTS_ON_SAME_SERVER CTL_CODE(FILE_DEVICE_NETWORK_FILE_SYSTEM,60,METHOD_BUFFERED,FILE_ANY_ACCESS)



//
// Named Pipe file control code and structure declarations
//

//
// External named pipe file control operations
//

#define FSCTL_PIPE_ASSIGN_EVENT             CTL_CODE(FILE_DEVICE_NAMED_PIPE, 0, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_DISCONNECT               CTL_CODE(FILE_DEVICE_NAMED_PIPE, 1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_LISTEN                   CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_PEEK                     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 3, METHOD_BUFFERED, FILE_READ_DATA)
#define FSCTL_PIPE_QUERY_EVENT              CTL_CODE(FILE_DEVICE_NAMED_PIPE, 4, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_TRANSCEIVE               CTL_CODE(FILE_DEVICE_NAMED_PIPE, 5, METHOD_NEITHER,  FILE_READ_DATA | FILE_WRITE_DATA)
#define FSCTL_PIPE_WAIT                     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 6, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_IMPERSONATE              CTL_CODE(FILE_DEVICE_NAMED_PIPE, 7, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_CLIENT_PROCESS       CTL_CODE(FILE_DEVICE_NAMED_PIPE, 8, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_QUERY_CLIENT_PROCESS     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 9, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_GET_PIPE_ATTRIBUTE       CTL_CODE(FILE_DEVICE_NAMED_PIPE, 10, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_PIPE_ATTRIBUTE       CTL_CODE(FILE_DEVICE_NAMED_PIPE, 11, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_GET_CONNECTION_ATTRIBUTE CTL_CODE(FILE_DEVICE_NAMED_PIPE, 12, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_CONNECTION_ATTRIBUTE CTL_CODE(FILE_DEVICE_NAMED_PIPE, 13, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_GET_HANDLE_ATTRIBUTE     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 14, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_HANDLE_ATTRIBUTE     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 15, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_FLUSH                    CTL_CODE(FILE_DEVICE_NAMED_PIPE, 16, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_PIPE_SET_CONTAINER_AWARE      CTL_CODE(FILE_DEVICE_NAMED_PIPE, 17, METHOD_BUFFERED, FILE_WRITE_DATA)

//
// Internal named pipe file control operations
//

#define FSCTL_PIPE_INTERNAL_READ        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2045, METHOD_BUFFERED, FILE_READ_DATA)
#define FSCTL_PIPE_INTERNAL_WRITE       CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2046, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_PIPE_INTERNAL_TRANSCEIVE  CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2047, METHOD_NEITHER, FILE_READ_DATA | FILE_WRITE_DATA)
#define FSCTL_PIPE_INTERNAL_READ_OVFLOW CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2048, METHOD_BUFFERED, FILE_READ_DATA)

// end_ntifs

//
// Non-public named pipe file control operations
//

#define FSCTL_PIPE_EVENT_SELECT         CTL_CODE(FILE_DEVICE_NAMED_PIPE, 3071, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_PIPE_EVENT_ENUM           CTL_CODE(FILE_DEVICE_NAMED_PIPE, 3072, METHOD_BUFFERED, FILE_READ_DATA)

//  begin_ntifs

//
// Define entry types for query event information
//

#define FILE_PIPE_READ_DATA             0x00000000
#define FILE_PIPE_WRITE_SPACE           0x00000001

//
// Named pipe file system control structure declarations
//

// Control structure for FSCTL_PIPE_ASSIGN_EVENT

typedef struct _FILE_PIPE_ASSIGN_EVENT_BUFFER {
     HANDLE EventHandle;
     ULONG KeyValue;
} FILE_PIPE_ASSIGN_EVENT_BUFFER, *PFILE_PIPE_ASSIGN_EVENT_BUFFER;

// Control structure for FSCTL_PIPE_PEEK

typedef struct _FILE_PIPE_PEEK_BUFFER {
     ULONG NamedPipeState;
     ULONG ReadDataAvailable;
     ULONG NumberOfMessages;
     ULONG MessageLength;
     CHAR Data[1];
} FILE_PIPE_PEEK_BUFFER, *PFILE_PIPE_PEEK_BUFFER;

// Control structure for FSCTL_PIPE_QUERY_EVENT

typedef struct _FILE_PIPE_EVENT_BUFFER {
     ULONG NamedPipeState;
     ULONG EntryType;
     ULONG ByteCount;
     ULONG KeyValue;
     ULONG NumberRequests;
} FILE_PIPE_EVENT_BUFFER, *PFILE_PIPE_EVENT_BUFFER;

// Control structure for FSCTL_PIPE_WAIT

typedef struct _FILE_PIPE_WAIT_FOR_BUFFER {
     LARGE_INTEGER Timeout;
     ULONG NameLength;
     BOOLEAN TimeoutSpecified;
     WCHAR Name[1];
} FILE_PIPE_WAIT_FOR_BUFFER, *PFILE_PIPE_WAIT_FOR_BUFFER;

// Control structure for FSCTL_PIPE_SET_CLIENT_PROCESS and FSCTL_PIPE_QUERY_CLIENT_PROCESS

typedef struct _FILE_PIPE_CLIENT_PROCESS_BUFFER {
#if !defined(BUILD_WOW6432)
     PVOID ClientSession;
     PVOID ClientProcess;
#else
     ULONGLONG ClientSession;
     ULONGLONG ClientProcess;
#endif
} FILE_PIPE_CLIENT_PROCESS_BUFFER, *PFILE_PIPE_CLIENT_PROCESS_BUFFER;

// This is an extension to the client process info buffer containing the client
// computer name

#define FILE_PIPE_COMPUTER_NAME_LENGTH 15

typedef struct _FILE_PIPE_CLIENT_PROCESS_BUFFER_EX {
#if !defined(BUILD_WOW6432)
    PVOID ClientSession;
    PVOID ClientProcess;
#else
     ULONGLONG ClientSession;
     ULONGLONG ClientProcess;
#endif
    USHORT ClientComputerNameLength; // in bytes
    WCHAR ClientComputerBuffer[FILE_PIPE_COMPUTER_NAME_LENGTH+1]; // terminated
} FILE_PIPE_CLIENT_PROCESS_BUFFER_EX, *PFILE_PIPE_CLIENT_PROCESS_BUFFER_EX;

// end_ntifs

// Control structure for FSCTL_PIPE_EVENT_SELECT

#define FILE_PIPE_READ_READY      0x1
#define FILE_PIPE_WRITE_READY     0x2
#define FILE_PIPE_DISCONNECTED    0x4

#define FILE_PIPE_EVENT_VALID_FLAGS     \
    (FILE_PIPE_READ_READY |             \
     FILE_PIPE_WRITE_READY |            \
     FILE_PIPE_DISCONNECTED)

typedef struct _FILE_PIPE_EVENT_SELECT_BUFFER {
     ULONG EventTypes;
     ULONGLONG EventHandle;
} FILE_PIPE_EVENT_SELECT_BUFFER, *PFILE_PIPE_EVENT_SELECT_BUFFER;

// Output structure for FSCTL_PIPE_EVENT_ENUM

typedef struct _FILE_PIPE_EVENT_ENUM_INPUT_BUFFER {
     ULONGLONG EventHandle;
} FILE_PIPE_EVENT_ENUM_INPUT_BUFFER, *PFILE_PIPE_EVENT_ENUM_INPUT_BUFFER;

// Output structure for FSCTL_PIPE_EVENT_ENUM

typedef struct _FILE_PIPE_EVENT_ENUM_OUTPUT_BUFFER {
     ULONG EventTypes;
} FILE_PIPE_EVENT_ENUM_OUTPUT_BUFFER, *PFILE_PIPE_EVENT_ENUM_OUTPUT_BUFFER;

//  begin_ntifs

//
// Mailslot file control operations.
//

#define FSCTL_MAILSLOT_PEEK             CTL_CODE(FILE_DEVICE_MAILSLOT, 0, METHOD_NEITHER, FILE_READ_DATA) // ntifs

// end_ntifs
// begin_ntifs
//
// Control structure for FSCTL_LMR_GET_LINK_TRACKING_INFORMATION
//

//
// For links on DFS volumes the volume id and machine id are returned for
// link tracking
//

typedef enum _LINK_TRACKING_INFORMATION_TYPE {
    NtfsLinkTrackingInformation,
    DfsLinkTrackingInformation
} LINK_TRACKING_INFORMATION_TYPE, *PLINK_TRACKING_INFORMATION_TYPE;

typedef struct _LINK_TRACKING_INFORMATION {
    LINK_TRACKING_INFORMATION_TYPE Type;
    UCHAR   VolumeId[16];
} LINK_TRACKING_INFORMATION, *PLINK_TRACKING_INFORMATION;

//
// Control structure for FSCTL_LMR_SET_LINK_TRACKING_INFORMATION
//

typedef struct _REMOTE_LINK_TRACKING_INFORMATION_ {
    PVOID       TargetFileObject;
    ULONG   TargetLinkTrackingInformationLength;
    UCHAR   TargetLinkTrackingInformationBuffer[1];
} REMOTE_LINK_TRACKING_INFORMATION,
 *PREMOTE_LINK_TRACKING_INFORMATION;

#if (_WIN32_WINNT >= _WIN32_WINNT_THRESHOLD)
//
//==================== FSCTL_QUERY_EXTENT_READ_CACHE_INFO ======================
//
// Structure for FSCTL_QUERY_EXTENT_READ_CACHE_INFO
//

typedef struct _VCN_RANGE_INPUT_BUFFER {

    LARGE_INTEGER StartingVcn;
    LARGE_INTEGER ClusterCount;

} VCN_RANGE_INPUT_BUFFER, *PVCN_RANGE_INPUT_BUFFER;

typedef struct _EXTENT_READ_CACHE_INFO_BUFFER {

    LARGE_INTEGER AllocatedCache;
    LARGE_INTEGER PopulatedCache;
    LARGE_INTEGER InErrorCache;

} EXTENT_READ_CACHE_INFO_BUFFER, *PEXTENT_READ_CACHE_INFO_BUFFER;


//
//==================== FSCTL_QUERY_REFS_VOLUME_COUNTER_INFO ======================
//
// Structure for FSCTL_QUERY_REFS_VOLUME_COUNTER_INFO
//

typedef struct _REFS_VOLUME_COUNTER_INFO_INPUT_BUFFER {

    BOOLEAN ResetCounters;

} REFS_VOLUME_COUNTER_INFO_INPUT_BUFFER, *PREFS_VOLUME_COUNTER_INFO_INPUT_BUFFER;

typedef struct _VOLUME_REFS_INFO_BUFFER {

    //
    //  These values will not be affected at reset
    //

    LARGE_INTEGER CacheSizeInBytes;
    LARGE_INTEGER AllocatedCacheInBytes;
    LARGE_INTEGER PopulatedCacheInBytes;
    LARGE_INTEGER InErrorCacheInBytes;
    LARGE_INTEGER MemoryUsedForCacheMetadata;
    ULONG CacheLineSize;
    LONG CacheTransactionsOutstanding;
    LONG CacheLinesFree;
    LONG CacheLinesInError;

    //
    //  These values will be affected at reset
    //

    LARGE_INTEGER CacheHitsInBytes;
    LARGE_INTEGER CacheMissesInBytes;
    LARGE_INTEGER CachePopulationUpdatesInBytes;
    LARGE_INTEGER CacheWriteThroughUpdatesInBytes;
    LARGE_INTEGER CacheInvalidationsInBytes;
    LARGE_INTEGER CacheOverReadsInBytes;
    LARGE_INTEGER MetadataWrittenBytes;

    LONG CacheHitCounter;
    LONG CacheMissCounter;
    LONG CacheLineAllocationCounter;
    LONG CacheInvalidationsCounter;
    LONG CachePopulationUpdatesCounter;
    LONG CacheWriteThroughUpdatesCounter;
    LONG MaxCacheTransactionsOutstanding;

//  LONG TimeRequiredForCacheHitIn100us;
//  LONG TimeRequiredForCacheMissIn100us;

    LONG DataWritesReallocationCount;
    LONG DataInPlaceWriteCount;
    LONG MetadataAllocationsFastTierCount;
    LONG MetadataAllocationsSlowTierCount;
    LONG DataAllocationsFastTierCount;
    LONG DataAllocationsSlowTierCount;

    LONG DestagesSlowTierToFastTier;
    LONG DestagesFastTierToSlowTier;
    LONG SlowTierDataFillRatio;
    LONG FastTierDataFillRatio;
    LONG SlowTierMetadataFillRatio;
    LONG FastTierMetadataFillRatio;

    LONG SlowToFastDestageReadLatency;
    LONG SlowToFastDestageReadLatencyBase;

    LONG SlowToFastDestageWriteLatency;
    LONG SlowToFastDestageWriteLatencyBase;

    LONG FastToSlowDestageReadLatency;
    LONG FastToSlowDestageReadLatencyBase;

    LONG FastToSlowDestageWriteLatency;
    LONG FastToSlowDestageWriteLatencyBase;

    LONG SlowTierContainerFillRatio;
    LONG SlowTierContainerFillRatioBase;

    LONG FastTierContainerFillRatio;
    LONG FastTierContainerFillRatioBase;

    LONG SlowToFastTierReallocation;
    LONG FastToSlowTierReallocation;

    LONG TreeUpdateLatency;
    LONG TreeUpdateLatencyBase;

    LONG CheckpointLatency;
    LONG CheckpointLatencyBase;

    LONG TreeUpdateCount;
    LONG CheckpointCount;
    LONG LogWriteCount;
    LONG LogFillRatio;

    LONG ReadCacheInvalidationsForOverwrite;
    LONG ReadCacheInvalidationsForReuse;
    LONG ReadCacheInvalidationsGeneral;

    LONG ReadCacheChecksOnMount;
    LONG ReadCacheIssuesOnMount;

    LONG TrimLatency;
    LONG TrimLatencyBase;

} VOLUME_REFS_INFO_BUFFER, *PVOLUME_REFS_INFO_BUFFER;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_THRESHOLD */

// end_ntifs
// begin_winnt
// begin_access

//
// I/O Completion Specific Access Rights.
//

// end_winnt

#define IO_COMPLETION_QUERY_STATE   0x0001
#define IO_COMPLETION_MODIFY_STATE  0x0002  // winnt
#define IO_COMPLETION_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED|SYNCHRONIZE|0x3) // winnt

// end_access
// begin_wdm begin_ntminiport begin_ntndis
// begin_ntoshvp
// begin_wudfwdm
//
// Define the I/O bus interface types.
//

typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    Vmcs,
    ACPIBus,
    MaximumInterfaceType
}INTERFACE_TYPE, *PINTERFACE_TYPE;

// end_wudfwdm
// end_ntoshvp

//
// Define the DMA transfer widths.
//

typedef enum _DMA_WIDTH {
    Width8Bits,
    Width16Bits,
    Width32Bits,
    Width64Bits,
    WidthNoWrap,
    MaximumDmaWidth
}DMA_WIDTH, *PDMA_WIDTH;

//
// Define DMA transfer speeds.
//

typedef enum _DMA_SPEED {
    Compatible,
    TypeA,
    TypeB,
    TypeC,
    TypeF,
    MaximumDmaSpeed
}DMA_SPEED, *PDMA_SPEED;

// begin_wudfpwdm
//
// Define Interface reference/dereference routines for
//  Interfaces exported by IRP_MN_QUERY_INTERFACE
//

typedef VOID (*PINTERFACE_REFERENCE)(PVOID Context);
typedef VOID (*PINTERFACE_DEREFERENCE)(PVOID Context);

// end_wdm end_wudfpwdm
// begin_ntddk

//
// Define types of bus information.
//

typedef enum _BUS_DATA_TYPE {
    ConfigurationSpaceUndefined = -1,
    Cmos,
    EisaConfiguration,
    Pos,
    CbusConfiguration,
    PCIConfiguration,
    VMEConfiguration,
    NuBusConfiguration,
    PCMCIAConfiguration,
    MPIConfiguration,
    MPSAConfiguration,
    PNPISAConfiguration,
    SgiInternalConfiguration,
    MaximumBusDataType
} BUS_DATA_TYPE, *PBUS_DATA_TYPE;

// end_ntddk end_ntminiport end_ntndis

// begin_winnt begin_ntifs

#define IO_QOS_MAX_RESERVATION 1000000000ULL

// end_winnt end_ntifs

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

#ifdef __cplusplus
}
#endif
