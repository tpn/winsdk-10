/*++

Copyright (c) 1989-2006  Microsoft Corporation

Module Name:

    fltmgrFsrtl.w

Abstract:

    Private interfaces between FLTMGR and FSRTL in kernel.

Author:

Environment:

Revision History:

--*/


#ifdef __cplusplus
extern "C" {
#endif

//
//  Poor man's dynamic import mechanism to permit the kernel to call into
//  the filter manager.
//

typedef struct _FSRTL_FLTMGR_CALLS {

    VOID (*FltMgrEcpCleanupCallback)( PVOID Filter, PVOID EcpContext );

    NTSTATUS (*FltMgrSupportedFeaturesCallback)( PDEVICE_OBJECT Device, PULONG SupportedFeatures );

    NTSTATUS (*FltMgrGetFileNameCallback)( 
        _In_ PFILE_OBJECT FileObject,
        _In_ ULONG NameOptions,
        _Out_ PUNICODE_STRING FileName,
        _Out_ PVOID *FileNameInformation
        );

    VOID (*FltMgrReleaseFileNameInformationCallback)(
        PVOID FilenameInformation
        );

    VOID (*FltMgrAttachDeviceCallback)( PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice );

} FSRTL_FLTMGR_CALLS, *PFSRTL_FLTMGR_CALLS;

typedef struct _FSRTL_FLTMGR_CALLS const *PCFSRTL_FLTMGR_CALLS;

VOID
FsRtlRegisterFltMgrCalls(
    _In_ PCFSRTL_FLTMGR_CALLS FltMgrFsrtlCalls
    );

#ifdef __cplusplus
}
#endif
