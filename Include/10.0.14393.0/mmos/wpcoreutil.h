//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

#pragma once

#include <windows.h>
#include <sal.h>
#include <shlobj.h>
#include <KnownFolders.h>
#include <StorageTypes.h>
#include <StorageUsageAPI.h>
#include <wpcoreutilext.h>

#if defined(__cplusplus)
extern "C" {
#endif

/// <summary>
///     RecursiveCreateDirectory
///     Recusively creates directores specified in pszPath, if they do not exist
/// </summary>
/// <param name="pszDir">
///     [IN] LPCWSTR
///     Directory path to create
/// </param>
/// <returns>
///     HRESULT, error code
/// </returns>
/// <remarks>
/// </remarks>
EXTERN_C
HRESULT WINAPI RecursiveCreateDirectory(_In_z_ LPCWSTR pszDir);

/// <summary>
///     RemoveDirectoryTree
///
///     This function will delete all the contents of the directory,
///     including subdirectories.  Flags can be passed to control
///     behavior, such as to delete the directory itself.
/// </summary>
/// <param name="DirectoryPath">
///     [IN] Directory to delete.
/// </param>
/// <param name="Flags">
///     [IN] See REMOVE_DIRECTORY_FLAGS.
/// </param>
/// <returns>
///     HRESULT, error code
/// </returns>
EXTERN_C
HRESULT WINAPI RemoveDirectoryTree(
    _In_z_ LPCWSTR DirectoryPath, 
    _In_ DWORD Flags);

typedef enum _REMOVE_DIRECTORY_FLAGS 
{
    // Force deletion of read-only files.
    REMOVE_DIRECTORY_FLAG_DELETE_READ_ONLY = 0x0001,

    // Don't delete the root directory.
    REMOVE_DIRECTORY_FLAG_SKIP_ROOT = 0x0002,

    // Continue deletion even if there are failures during delete.
    REMOVE_DIRECTORY_FLAG_IGNORE_FAILURES = 0x0004,

    REMOVE_DIRECTORY_FLAG_ALL = REMOVE_DIRECTORY_FLAG_DELETE_READ_ONLY |
                                REMOVE_DIRECTORY_FLAG_SKIP_ROOT |
                                REMOVE_DIRECTORY_FLAG_IGNORE_FAILURES

} REMOVE_DIRECTORY_FLAGS;


/// <summary>
///     RecursiveRemoveDirectoryEx
///
///     This function will delete all the contents of the directory and
///     the directory itself. If the directory contains sub-directories,
///     this function will be called recursively on each of those
///     sub-directories
/// </summary>
/// <param name="pszDir">
///     [IN] Directory to delete.
/// </param>
/// <param name="fForceDelete">
///     [IN] If true force delete the files ignoring readonly access.
/// </param>
/// <returns>
///     HRESULT, error code
/// </returns>
/// <remarks>
///     The same functionality is provided by the shell API
///     SHFileOperation(). Whenever possible, it is recommended
///     to use that function because it checks the security against
///     metabase to see if the caller has access to the directory
///     and files they are trying to remove.
///     RecursiveRemoveDirectoryEx should be used only in cases
///     where you know you want to delete some system files or
///     otherwise restricted (in the metabase) files.
///     The fForceDelete parameter, when set to TRUE, will forcefully
///     delete all files, regardless of read only access.
/// </remarks>
EXTERN_C
HRESULT WINAPI RecursiveRemoveDirectoryEx(_In_z_ LPCWSTR pszDir, BOOL fForceDelete);

/// <summary>
///     RecursiveRemoveDirectory
///
///     This function will delete all the contents of the directory and
///     the directory itself. If the directory contains sub-directories,
///     this function will be called recursively on each of those
///     sub-directories
/// </summary>
/// <param name="pszDir">
///     [IN] Directory to delete.
/// </param>
/// <returns>
///     HRESULT, error code
/// </returns>
/// <remarks>
///     The same functionality is provided by the shell API
///     SHFileOperation(). Whenever possible, it is recommended
///     to use that function because it checks the security against
///     metabase to see if the caller has access to the directory
///     and files they are trying to remove.
///     RecursiveRemoveDirectory should be used only in cases
///     where you know you want to delete some system files or
///     otherwise restricted (in the metabase) files.
/// </remarks>
EXTERN_C
HRESULT WINAPI RecursiveRemoveDirectory(_In_z_ LPCWSTR pszDir);

/****************************************************************************
    Converts binary to hex string.

    Parameters:
    [IN] pbData    - The buffer of the binary data.
    [IN ] cbData   - The length of the pbData.
    [OUT] szHexStr - The buffer that will contain a hex representation of
                pbData upon return.
    [IN/OUT] pcchHexStr - On entry it will contain the lenght og the szHexStr
                buffer. On exit it will contain the length of the hex string.
    [IN] fLSBFirst - TRUE if least significant bit is to be first in string.
                FALSE otherwise.
    [IN] fSpaceSeparated - TRUE to insert a apace between the character
                           representation of each byte of data.
                           FALSE otherwise

****************************************************************************/
EXTERN_C
HRESULT WINAPI BinaryToHexStringEx(
        _In_reads_(cbData)              const LPBYTE  pbData,
                                        DWORD   cbData,
        _Out_writes_opt_(*pcchHexStr)   LPWSTR  szHexStr,
        _Inout_                         DWORD  *pcchHexStr,
                                        BOOL    fLSBFirst,
                                        BOOL    fSpaceSeparated
);

/****************************************************************************
    Converts binary to hex string.

    Parameters:
    [IN] pbData    - The buffer of the binary data.
    [IN ] cbData   - The length of the pbData.
    [OUT] szHexStr - The buffer that will contain a hex representation of
                pbData upon return.
    [IN/OUT] pcchHexStr - On entry it will contain the lenght og the szHexStr
                buffer. On exit it will contain the length of the hex string.
    [IN] fLSBFirst - TRUE if least significant bit is to be first in string.
                FALSE otherwise.

****************************************************************************/
EXTERN_C
HRESULT WINAPI BinaryToHexString(
    _In_reads_(cbData)              const LPBYTE  pbData,
                                    DWORD   cbData,
    _Out_writes_opt_(*pcchHexStr)   LPWSTR  szHexStr,
    _Inout_                         DWORD   *pcchHexStr,
                                    BOOL    fLSBFirst
);

//  *************************************************************************
// HexStringToBinary
//
// Purpose:
//      Converts hex string to binary equivalent.
//
// Parameters:
//      LPWSTR      pszHexStr   [in]    Input string
//      LPBYTE      pbData      [out]   Buffer to hold binary data
//      DWORD*      pcbData     [inout] Number of bytes in binary buffer
//      BOOL        fLSBFirst   [in]    Flag indicating translation of least
//                                      significant bit first
// Returns:
//      HRESULT indicating success
//  *************************************************************************
EXTERN_C
HRESULT WINAPI HexStringToBinary(
    _In_z_                      LPCWSTR     pszHexStr,
    _Out_writes_opt_(*pcbData)  LPBYTE      pbData,
    _Inout_                     DWORD       *pcbData,
                                BOOL        fLSBFirst
);

//  *************************************************************************
//  CreateStreamOnFile
//
//  Purpose:
//      Create an IStream Interface on an existing file, or a temporary file
//
//  Parameters:
//      pszFileName    [in]  Pointer to the NULL terminated full path name.
//      dwFlags        [in]  Flags for specifying specific behaviors.
//      ppstm          [out] The newly created IStream object.
//
//  Returns:
//      HRESULT, error code
//
//  Side Effects:
//      none
//  *************************************************************************
EXTERN_C
HRESULT CreateStreamOnFile(
    _In_z_ LPCWSTR pszFileName,
    _In_ DWORD dwFlags,
    _Out_ IStream** ppstm
);

typedef enum // Flags for CreateStreamOnFile
{
    CSOF_READONLY           = 0x00000001,   // Open the file for Read Only
    CSOF_DELETEONCLOSE      = 0x00000002,   // Delete the file when the object is finally released
} CSOF_FLAGS;


//  *************************************************************************
//  CreateStreamOnHandle
//
//  Purpose:
//      Create an IStream Interface on an existing handle.
//
//  Parameters:
//      hFile          [in]  A valid file handle.
//      ppstm          [out] The newly created IStream object.
//
//  Returns:
//      HRESULT, error code
//
//  Side Effects:
//      ppstm will call CloseHandle on hFile when released.
//  *************************************************************************
EXTERN_C
HRESULT CreateStreamOnHandle(
    _In_ HANDLE hFile,
    _Out_ IStream** ppstm
);

//
// Generic implementation of IStream::CopyTo()
// Given two streams, copies cb bytes of data from one to the other.
//
EXTERN_C 
HRESULT StreamCopyTo (
    _In_opt_ IStream *pstmFrom,
    _In_opt_ IStream *pstmTo,
    _In_ ULARGE_INTEGER cb,
    _Out_opt_ ULARGE_INTEGER *pcbRead,
    _Out_opt_ ULARGE_INTEGER *pcbWritten
);

//
// New Known Folders for Windows Phone
//

// {139391C5-BC0F-4EC1-B655-C9EBD78F7F1C}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_TempAppData = { 0x139391c5, 0xbc0f, 0x4ec1, { 0xb6, 0x55, 0xc9, 0xeb, 0xd7, 0x8f, 0x7f, 0x1c } };

// {5B2B3824-FC27-4017-95E2-CD8F5DD4EA2A}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_FrameworkTempAppData = { 0x5b2b3824, 0xfc27, 0x4017, { 0x95, 0xe2, 0xcd, 0x8f, 0x5d, 0xd4, 0xea, 0x2a } };

// {C900CF7D-0FC3-4071-BD6D-FF9098A51216}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_LocalSharedAppData = { 0xc900cf7d, 0xfc3, 0x4071, { 0xbd, 0x6d, 0xff, 0x90, 0x98, 0xa5, 0x12, 0x16 } };

// {8C19F0BC-CFD5-48E0-807B-0682F051E368}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_SystemData = { 0x8c19f0bc, 0xcfd5, 0x48e0, { 0x80, 0x7b, 0x6, 0x82, 0xf0, 0x51, 0xe3, 0x68 } };

// {2856B913-7185-4C9D-9ACC-981269A83C14}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_SharedData = { 0x2856b913, 0x7185, 0x4c9d, { 0x9a, 0xcc, 0x98, 0x12, 0x69, 0xa8, 0x3c, 0x14 } };

// {338749F2-0320-4F46-AB5B-8551E310F53D}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_RemovableSystem = { 0x338749f2, 0x320, 0x4f46, { 0xab, 0x5b, 0x85, 0x51, 0xe3, 0x10, 0xf5, 0x3d } };

// {F5420C87-9725-4D55-A3D6-27DE9A8B3F94}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_SystemRoot = { 0xf5420c87, 0x9725, 0x4d55, { 0xa3, 0xd6, 0x27, 0xde, 0x9a, 0x8b, 0x3f, 0x94 } };

// {82995699-73CA-452A-AE29-52A30FEEC3F6}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_DataRoot = { 0x82995699, 0x73ca, 0x452a, { 0xae, 0x29, 0x52, 0xa3, 0xf, 0xee, 0xc3, 0xf6 } };

// {7CF8AD76-641E-4B26-B5B5-A978094810CA}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_SystemProgramsRoot = { 0x7cf8ad76, 0x641e, 0x4b26, { 0xb5, 0xb5, 0xa9, 0x78, 0x9, 0x48, 0x10, 0xca } };

// {4BB0D493-D676-4371-BB14-4A16A26327CD}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_DataProgramsRoot = { 0x4bb0d493, 0xd676, 0x4371, { 0xbb, 0x14, 0x4a, 0x16, 0xa2, 0x63, 0x27, 0xcd } };

// {9E7AB6ED-E093-4162-B4C7-67865B055296}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_Test = { 0x9e7ab6ed, 0xe093, 0x4162, { 0xb4, 0xc7, 0x67, 0x86, 0x5b, 0x5, 0x52, 0x96 } };

// {8987DF47-FD88-46B4-BAE0-E727143F2040}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_ETW = { 0x8987df47, 0xfd88, 0x46b4, { 0xba, 0xe0, 0xe7, 0x27, 0x14, 0x3f, 0x20, 0x40 } };

// {0FEE625A-4AC9-461E-AC0E-3FECDAF7676A}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_SpeechData = { 0xfee625a, 0x4ac9, 0x461e, { 0xac, 0xe, 0x3f, 0xec, 0xda, 0xf7, 0x67, 0x6a } };

// {A56D7D3E-A611-46D3-9E08-132438B84533}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_SystemSounds = { 0xa56d7d3e, 0xa611, 0x46d3, { 0x9e, 0x8, 0x13, 0x24, 0x38, 0xb8, 0x45, 0x33 } };

// {4DEE6911-47DB-4002-B1D3-CB1949FB4C3D}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_ProgramInstall = { 0x4dee6911, 0x47db, 0x4002, { 0xb1, 0xd3, 0xcb, 0x19, 0x49, 0xfb, 0x4c, 0x3d } };

// {8D640B56-5417-4645-BF81-4051406DAD53}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_MapData = { 0x8d640b56, 0x5417, 0x4645, { 0xbf, 0x81, 0x40, 0x51, 0x40, 0x6d, 0xad, 0x53 } };

// {83668B3D-2893-4434-9759-07B7ECD3361D}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_BlinkData = { 0x83668b3d, 0x2893, 0x4434, { 0x97, 0x59, 0x7, 0xb7, 0xec, 0xd3, 0x36, 0x1d } };

// {1665EC60-CA2D-44A8-BFA8-E4D2131BEB03}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_CommonSystemFiles = { 0x1665ec60, 0xca2d, 0x44a8, { 0xbf, 0xa8, 0xe4, 0xd2, 0x13, 0x1b, 0xeb, 0x3 } };

// {8A04E482-BD16-4AB1-BA9B-5C410C0021A4}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_OEMPublicSystemFolder = { 0x8a04e482, 0xbd16, 0x4ab1, { 0xba, 0x9b, 0x5c, 0x41, 0xc, 0x0, 0x21, 0xa4 } };

// {DA270BAA-3484-479C-A434-04988BDF0853}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_OEMPublicDataFolder = { 0xda270baa, 0x3484, 0x479c, { 0xa4, 0x34, 0x4, 0x98, 0x8b, 0xdf, 0x8, 0x53 } };

// {746780ae-10fc-488f-89f6-88b750121375}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_EnterpriseDataFolder = { 0x746780ae, 0x10fc, 0x488f, { 0x89, 0xf6, 0x88, 0xb7, 0x50, 0x12, 0x13, 0x75 } };

// {6CC58FF6-0FE8-4A68-9EFD-0B297E4568A0}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_PlatformData = { 0x6cc58ff6, 0xfe8, 0x4a68, { 0x9e, 0xfd, 0xb, 0x29, 0x7e, 0x45, 0x68, 0xa0 } };

// {F328993D-CD7D-48B3-B503-A0714526D7CD}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_LiveTiles = { 0xf328993d, 0xcd7d, 0x48b3, { 0xb5, 0x3, 0xa0, 0x71, 0x45, 0x26, 0xd7, 0xcd } };

// {41A7314E-5D6B-4D9E-AA80-290B73BCE6DE}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_AppDataRoot = { 0x41a7314e, 0x5d6b, 0x4d9e, { 0xaa, 0x80, 0x29, 0xb, 0x73, 0xbc, 0xe6, 0xde } };

// {BF211895-03EF-48DA-89D0-0A90B722FD0A}
extern const __declspec(selectany) KNOWNFOLDERID FOLDERID_TempState = { 0xbf211895, 0x3ef, 0x48da, { 0x89, 0xd0, 0xa, 0x90, 0xb7, 0x22, 0xfd, 0xa } };

// 
// Structures for GetAppStorageFolder
//

typedef struct _STORAGE_FOLDER_PARAMS 
{
    // Set to sizeof(STORAGE_FOLDER_PARAMS) by the caller for versioning purposes.
    DWORD Size;

    // The storage device type to target.  See enum STORAGE_DEVICE_TYPE for possible values.
    DWORD StorageDeviceType;

    // The instance index of the storage device to target.  This is a 0-based index.
    DWORD DeviceInstance;

    // The KNOWNFOLDERID that corresponds to the type of folder to obtain.
    KNOWNFOLDERID FolderId;

    // Flags that specify special retrieval options.  See KNOWN_FOLDER_FLAG values.
    DWORD Flags;

} STORAGE_FOLDER_PARAMS, *PSTORAGE_FOLDER_PARAMS;


//  GetAppStorageFolder 
//
//  Returns the path name for the specified folder ID.
//
//  PARAMS
//      pParams -    Pointer to a STORAGE_FOLDER_PARAMS structure containing 
//                   input parameters.
//      ChamberId -  The application ID to obtain the isolated storage folder 
//                   for.  The value NULL can be passed in to obtain an application's 
//                   own isolated storage folder or to obtain a global/public folder. 
//      ppPathName - Returns a pointer to the path.  The calling process is responsible 
//                   for freeing this resource once it is no longer needed by calling 
//                   CoTaskMemFree.
//

EXTERN_C HRESULT WINAPI
GetAppStorageFolder (
    _In_ STORAGE_FOLDER_PARAMS* pParams,
    _In_opt_z_ LPCWSTR ChamberId,
    _Outptr_ PWSTR* ppPathName
);

//  MountVolume 
//
//  Mounts a volume by putting the volume online. Can only be done on removable volumes.
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.  Only STORAGE_DEVICE_SD
//                          is valid.
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//      Flags -             Reserved for future use.  
//

EXTERN_C HRESULT WINAPI
MountVolume( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance, 
    DWORD Flags);


//  DismountVolume 
//
//  Dismounts a volume and puts the volume offline. Can only be done on removable volumes.
//  If the DISMOUNT_FLAG_FORCE is specified, the dismount is forced, even if there are
//  open handles.  If this flag is not specified and there are open handles, then 
//  a pre-dismount notification is sent and the function returns with E_PENDING.
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.  Only STORAGE_DEVICE_SD
//                          is valid.
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//      Flags -             See enum STORAGE_DISMOUNT_FLAGS.  
//

EXTERN_C HRESULT WINAPI
DismountVolume( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance, 
    DWORD Flags);

//  FormatVolume 
//
//  Formats a volume. Can only be done on removable volumes.
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.  Only STORAGE_DEVICE_SD
//                          is valid.
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//      Flags -             Reserved for future use.  
//

EXTERN_C HRESULT WINAPI
FormatVolume( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance,
    DWORD Flags);

//  ScanVolume 
//
//  Scans a volume for corruptions (chkdsk). Can only be done on removable volumes.
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.  Only STORAGE_DEVICE_SD
//                          is valid.
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//      pScanParams -       Input and output parameters for ScanVolume.  
//

EXTERN_C HRESULT WINAPI
ScanVolume( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance,
    __inout STORAGE_SCAN_VOLUME_PARAMS *pScanParams);

//  ProcessStorageCardChange 
//
//  Scans all mounted volumes to look for an SD Card storage volume
//

EXTERN_C HRESULT WINAPI
ProcessStorageCardChange();

//  GetStorageInstanceCount 
//
//  Gets the number of storage instances for a particular storage device type.
//  For SD cards, this corresponds to the number of SD slots.
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.  
//      pInstanceCount -    The number of storage instances for the device type.
//

EXTERN_C HRESULT WINAPI
GetStorageInstanceCount( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    __out DWORD *pInstanceCount);

//  GetStorageDeviceInfo 
//
//  Returns information about the specified storage device.
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.  This can be used to 
//                          query either the internal data volume or the storage card.  
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//      pDeviceInfo -       A pointer to the structure that receives the device info.  
//

EXTERN_C HRESULT WINAPI
GetStorageDeviceInfo( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance,
    __inout STORAGE_DEVICE_INFO *pDeviceInfo);

//  FinalizeVolume
//
//  After settings have been provided, called to indicate that the SD card is ready 
//  and the mount notification can be broadcasted system-wide.
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.    
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//

EXTERN_C HRESULT WINAPI
FinalizeVolume( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance);
    
//  GetStorageSettings
//
//  Get storage configuration settings, such as disabling SD card. 
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.   
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//      StorageSetting -    The setting to retrieve.   
//      pValue -            Pointer to DWORD that receives the setting value.  
//

EXTERN_C HRESULT WINAPI
GetStorageSettings( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance,
    STORAGE_SETTING StorageSetting,
    __out DWORD* pValue);

//  SetStorageSettings
//
//  Set storage configuration settings, such as disabling SD card. 
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.   
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//      StorageSetting -    The setting to set.   
//      Value -             The value of the setting to set.  
//

EXTERN_C HRESULT WINAPI
SetStorageSettings( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance,
    STORAGE_SETTING StorageSetting,
    DWORD Value);

//  TriggerTempFileCleanup
//
//  Trigger a temp file cleanup notification to be sent out.
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.  This can be used to 
//                          query either the internal data volume or the storage card.  
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//

EXTERN_C HRESULT WINAPI
TriggerTempFileCleanup( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance);

//  TriggerStorageCleanup
//
//  Trigger a storage cleanup.
//
//  PARAMS
//      pCleanupParameters - Structure that contains the StorageDeviceType, 
//                           DeviceInstance and CleanupLevel. 
//                           See TriggerTempFileCleanup
//

EXTERN_C HRESULT WINAPI 
TriggerStorageCleanup( 
    PSTORAGE_TRIGGER_CLEANUP_PARAMETERS pCleanupParameters);

//  TriggerDownloadsCleanup 
//
//  Deletes files in public download folder
//
//  PARAMS
//      pCleanupParameters - Structure that contains the StorageDeviceType, 
//                           DeviceInstance and CleanupLevel. 
//                           See TriggerTempFileCleanup 
//

EXTERN_C HRESULT WINAPI 
TriggerDownloadsCleanup( 
    PSTORAGE_TRIGGER_CLEANUP_PARAMETERS pCleanupParameters);

//  TriggerBlinkCleanup 
//
//  Deletes files in blink shared folder
//
//  PARAMS
//      pCleanupParameters - Structure that contains the StorageDeviceType, 
//                           DeviceInstance and CleanupLevel. 
//                           See TriggerTempFileCleanup 
//

EXTERN_C HRESULT WINAPI 
TriggerBlinkCleanup( 
    PSTORAGE_TRIGGER_CLEANUP_PARAMETERS pCleanupParameters);

//  TriggerLowStorageNotification 
//
//  Sends the low storage WNF
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.  This can be used to 
//                          query either the internal data volume or the storage card.  
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//

EXTERN_C HRESULT WINAPI 
TriggerLowStorageNotification( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance);

//  TriggerStorageTypeRefresh
//
//  Refresh the storage type cache
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.  This can be used to 
//                          query either the internal data volume or the storage card.  
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//


EXTERN_C HRESULT WINAPI 
TriggerStorageTypeRefresh( 
    STORAGE_DEVICE_TYPE StorageDeviceType,
    DWORD DeviceInstance);

//  OpenStorageTypeSearch 
//
//  Opens a context handle
//
//  PARAMS
//      StorageDeviceType - The storage device type to target.  This can be used to 
//                          query either the internal data volume or the storage card.  
//      DeviceInstance -    The instance index of the storage device to query.  
//                          This can be used if there are multiple storage devices of 
//                          the same class.  This is a 0-based index.
//

HRESULT OpenStorageTypeSearch(
     _Inout_ PPCONTEXT_HANDLE_TYPE pphContext);
     
//  CloseFindStorageSearch 
//
//  Close a context handle
//
//  PARAMS
//      pphContext - pointer to a PCONTEXT_HANDLE_TYPE 
//
        
HRESULT CloseFindStorageSearch(_Inout_ PPCONTEXT_HANDLE_TYPE pphContext);
    
//  SelectStorageVolume 
//
//  Selects a storage volume to return information on for FindNextStorageType and GetAppSize
//
//  PARAMS
//      phContext - The Context created by OpenStorageTypeSearch()  
//      Store     - The Store type to select (eg STORAGE_DEVICE_INTERNAL or STORAGE_DEVICE_SD)
//      DeviceInstance - 0 based index of Store (for the case when there is more than 1)
//      Node      - The DATA_TYPE_NODE to query, must be DATA_TYPE_ROOT
//      Path      - The Logical Path inside the node, must be NULL
//      TotalSize - The total size of the disk
//      Free      - The free space on the disk
//

HRESULT SelectStorageVolume( 
    /* [in] */ __RPC__in PCONTEXT_HANDLE_TYPE phContext,
    /* [in] */ STORAGE_DEVICE_TYPE Store,
    /* [in] */ DWORD DeviceInstance,
    /* [in] */ DATA_TYPE_NODE Node,
    /* [string][full][in] */ __RPC__in_opt_string LPCWSTR Path,
    /* [out] */ __RPC__out ULONGLONG *TotalSize,
    /* [out] */ __RPC__out ULONGLONG *Free);
    
//  SelectStorageVolumeEx
//
//  Selects a storage volume to return information on for FindNextStorageType and GetAppSize
//
//  PARAMS
//      phContext - The Context created by OpenStorageTypeSearch()  
//      Store     - The Store type to select (eg STORAGE_DEVICE_INTERNAL or STORAGE_DEVICE_SD)
//      DeviceInstance - 0 based index of Store (for the case when there is more than 1)
//      Node      - The DATA_TYPE_NODE to query, must be DATA_TYPE_ROOT
//      Path      - The Logical Path inside the node, must be NULL
//      SlowAndAccurate - true to get more accurate file sizes, false to trust the result from GetCompressedFileSize()
//      TotalSize - The total size of the disk
//      Free      - The free space on the disk
//

HRESULT SelectStorageVolumeEx( 
    /* [in] */ __RPC__in PCONTEXT_HANDLE_TYPE phContext,
    /* [in] */ STORAGE_DEVICE_TYPE Store,
    /* [in] */ DWORD DeviceInstance,
    /* [in] */ DATA_TYPE_NODE Node,
    /* [string][full][in] */ __RPC__in_opt_string LPCWSTR Path,
    /* [in] */ STORAGE_SELECTVOL_FLAGS Flags,
    /* [out] */ __RPC__out ULONGLONG *TotalSize,
    /* [out] */ __RPC__out ULONGLONG *Free);
    

//  FindNextStorageType 
//
//  Returns usage information about the specified storage device.
//  Return error will be HRESULT_FROM_WIN32(ERROR_NO_MORE_ITEMS) for the call
//   after the last known node.
//
//  PARAMS
//      phContext - The Context created by OpenStorageTypeSearch()  
//      Node      - The node the information pertains to
//      Path      - The Logical path inside the node, should be null, needs to be freed if not  
//      Size      - The size (in bytes) of data under this node
//      ItemCount - The number of items in this node
//

HRESULT FindNextStorageType( 
    /* [in] */ __RPC__in PCONTEXT_HANDLE_TYPE phContext,
    /* [out] */ __RPC__out DATA_TYPE_NODE *Node,
    /* [string][full][out][in] */ __RPC__deref_opt_inout_opt_string LPWSTR *Path,
    /* [out] */ __RPC__out ULONGLONG *Size,
    /* [out] */ __RPC__out ULONGLONG *ItemCount);
    
//  FindNextStorageType 
//
//  Returns usage information about the specified storage device.
//  Return error will be HRESULT_FROM_WIN32(ERROR_NO_MORE_ITEMS) for the call
//   after the last known node.
//
//  PARAMS
//      phContext - The Context created by OpenStorageTypeSearch()  
//      Node      - The node to query
//      SubNode   - The Logical path inside the node
//      Path      - The Logical path inside the SubNode, needs to be freed
//      Size      - The size (in bytes) of data under this node
//      ItemCount - The number of items in this node
//

HRESULT FindNextStorageTypeEx( 
    /* [in] */ __RPC__in PCONTEXT_HANDLE_TYPE phContext,
    /* [in] */ __RPC__in DATA_TYPE_NODE Node,
    /* [in] */ __RPC__in_opt_string LPCWSTR Path,
    /* [out] */ __RPC__deref_opt_inout_opt_string LPWSTR *SubPath,
    /* [out] */ __RPC__out ULONGLONG *Size,
    /* [out] */ __RPC__out ULONGLONG *ItemCount);

//  GetAppSize 
//
//  Returns size of given app's data and install directories.
//  SelectStorageVolume(Ex) must be called before calling this function
//  to select the volume the app is installed on.
//
//  If a failure HRESULT is returned, no guarantees are made 
//  about the contents of the Sizes field.
//
//  PARAMS
//      phContext       - The Context created by OpenStorageTypeSearch()  
//      ProductId       - The app's ID from pacman
//      Flags           - Reserved for future use
//      Sizes           - The sizes of the data and install directories
//

HRESULT GetAppSize(
    /* [in] */ __RPC__in PCONTEXT_HANDLE_TYPE phContext,
    /* [in] */ __RPC__in PRODUCTID *ProductId, 
    /* [in] */ __RPC__in DWORD Flags, 
    /* [in][out] */ __RPC__inout PAPP_SIZES Sizes);

//  MoveFileInheritSecurity 
//
//  This function will perform a MoveFileEx.  Once the move is finished, the ACL
//  on the NewFileName will be reset to inherit from the parent directory.
//
//  PARAMS
//      ExistingFileName - The current name of the file or directory.
//      NewFileName      - The new name of the file or directory.
//      Flags            - The flags to pass to MoveFileEx.  
//
//  RETURN
//      If the function fails, GetLastError will contain extended error information.
//

EXTERN_C BOOL WINAPI
MoveFileInheritSecurityW(
    __in LPCWSTR ExistingFileName,
    __in_opt LPCWSTR NewFileName,
    __in DWORD Flags);

#ifdef UNICODE
#define MoveFileInheritSecurity MoveFileInheritSecurityW
#else
#define MoveFileInheritSecurity MoveFileInheritSecurityA
#endif // !UNICODE

#if defined(__cplusplus)
}
#endif

