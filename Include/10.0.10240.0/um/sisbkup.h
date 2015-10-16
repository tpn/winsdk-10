/*++

Copyright (c) 1998-1999 Microsoft Corporation

Module Name:

    sisbackup.h

Abstract:

    External interface for the SIS Backup dll.


Revision History:

--*/

#ifndef __SISBKUP_H__
#define __SISBKUP_H__

#if _MSC_VER > 1000
#pragma once
#endif
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#ifdef  __cplusplus
extern "C" {
#endif  // __cplusplus

BOOL __stdcall
SisCreateBackupStructure(
    _In_z_ PWSTR                        volumeRoot,
    _Out_ PVOID                         *sisBackupStructure,
    _Out_ PWCHAR                        *commonStoreRootPathname,
    _Out_ PULONG                        countOfCommonStoreFilesToBackup,
    _Out_ PWCHAR                        **commonStoreFilesToBackup);


BOOL __stdcall
SisCSFilesToBackupForLink(
    _In_ PVOID                          sisBackupStructure,
    _In_reads_bytes_(reparseDataSize) PVOID  reparseData,
    _In_ ULONG                          reparseDataSize,
    _In_opt_ PVOID                      thisFileContext,
    _Out_opt_ PVOID                     *matchingFileContext,
    _Out_ PULONG                        countOfCommonStoreFilesToBackup,
    _Out_ PWCHAR                        **commonStoreFilesToBackup);

BOOL __stdcall
SisFreeBackupStructure(
    _In_ PVOID                          sisBackupStructure);

BOOL __stdcall
SisCreateRestoreStructure(
    _In_z_ PWSTR                        volumeRoot,
    _Out_ PVOID                         *sisRestoreStructure,
    _Out_ PWCHAR                        *commonStoreRootPathname,
    _Out_ PULONG                        countOfCommonStoreFilesToRestore,
    _Out_ PWCHAR                        **commonStoreFilesToRestore);

BOOL __stdcall
SisRestoredLink(
    _In_ PVOID                          sisRestoreStructure,
    _In_z_ PWSTR                        restoredFileName,
    _In_reads_bytes_(reparseDataSize) PVOID  reparseData,
    _In_ ULONG                          reparseDataSize,
    _Out_ PULONG                        countOfCommonStoreFilesToRestore,
    _Out_ PWCHAR                        **commonStoreFilesToRestore);

BOOL __stdcall
SisRestoredCommonStoreFile(
    _In_ PVOID                          sisRestoreStructure,
    _In_z_ PWSTR                        commonStoreFileName);

BOOL __stdcall
SisFreeRestoreStructure(
    _In_ PVOID                          sisRestoreStructure);

VOID __stdcall
SisFreeAllocatedMemory(
    _In_ PVOID                          allocatedSpace);


//
// SIS entry function typedefs
//
typedef BOOL ( FAR __stdcall *PF_SISCREATEBACKUPSTRUCTURE )( PWCHAR, PVOID *, PWCHAR *, PULONG, PWCHAR ** );
typedef BOOL ( FAR __stdcall *PF_SISCSFILESTOBACKUPFORLINK )  (PVOID, PVOID, ULONG, PVOID, PVOID *, PULONG, PWCHAR ** ) ;
typedef BOOL ( FAR __stdcall *PF_SISFREEBACKUPSTRUCTURE )  ( PVOID ) ;

typedef BOOL ( FAR __stdcall *PF_SISCREATERESTORESTRUCTURE)  ( PWCHAR, PVOID *, PWCHAR *, PULONG, PWCHAR ** );
typedef BOOL ( FAR __stdcall *PF_SISRESTOREDLINK )  ( PVOID, PWCHAR, PVOID, ULONG, PULONG, PWCHAR ** ) ;
typedef BOOL ( FAR __stdcall *PF_SISRESTOREDCOMMONSTORFILE) ( PVOID, PWCHAR ) ;

typedef BOOL ( FAR __stdcall *PF_SISFREERESTORESTRUCTURE )( PVOID ) ;
typedef BOOL ( FAR __stdcall *PF_SISFREEALLOCATEDMEMORY )( PVOID ) ;

#ifdef  __cplusplus
}
#endif  // __cplusplus


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif  // __SISBKUP_H__
