//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of your Microsoft Windows CE
// Source Alliance Program license form.  If you did not accept the terms of
// such a license, you are not authorized to use this source code.
//


#ifndef _ZMEDIALIB_
#define _ZMEDIALIB_

#include <zmediatypes.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <zerror.h>

#define INTERNET_MAX_COOKIE_LENGTH 204800 // 200k: 200*1024

#define ZMEDIALIST_SAFE_RELEASE(hZMediaList) \
    if (NULL != hZMediaList) \
    { \
        ZMediaList_Release(hZMediaList); \
        hZMediaList = NULL; \
    }

__inline ZMEDIAITEM_TYPE ZMEDIAITEM_TYPEOF(
    _In_ ZMEDIAITEM item
    )
{
    return (ZMEDIAITEM_TYPE)(((UINT)item) >> 24);
}

__inline ZMEDIAITEM_ATTRIBUTE_TYPE ZMEDIAITEM_ATTRIBUTE_TYPEOF(
    _In_ ZMEDIAITEM_ATTRIBUTE miAttr
    )
{
    return (ZMEDIAITEM_ATTRIBUTE_TYPE)(miAttr & ZMEDAIITEM_ATTRIBUTE_TYPE_MASK);
}

__inline ZMEDIAITEM ZMEDIAITEM_FROM_ZMDBKEY(
    _In_ ULONG ZmdbKey
    )
{
    return (ZMEDIAITEM)ZmdbKey;
}

__inline ULONG ZMDBKEY_FROM_ZMEDIAITEM(
    _In_ ZMEDIAITEM ZmdbKey
    )
{
    return (ULONG)ZmdbKey;
}

//
// Zune's ZMediaLib_Open/Close are intended for the lifetime of the device.
// On Windows Mobile, we want to allow callers to "require" and "release" the
// ZMDB; thus, when no one is using the ZMDB, it can be unloaded from memory.
//
// You might want to use an auto_ZMediaLibRequirement 
//
HRESULT WINAPI ZMediaLib_RequireLibrary(void);

HRESULT WINAPI ZMediaLib_ReleaseLibrary(void);

struct auto_ZMediaLibRequirement
{
    BOOL m_fRequired;

    auto_ZMediaLibRequirement() : m_fRequired( FALSE )
    {}
    ~auto_ZMediaLibRequirement()
    {
        Release();
    }

    HRESULT Require()
    {
        HRESULT hr = S_OK;
        if ( !m_fRequired )
        {
            hr = ZMediaLib_RequireLibrary();
            if ( SUCCEEDED( hr ) )
            {
                m_fRequired = TRUE;
            }
        }
        return hr;
    }
    VOID Release()
    {
        if ( m_fRequired )
        {
            ZMediaLib_ReleaseLibrary();
            m_fRequired = FALSE;
        }
    }
};


HRESULT WINAPI ZMediaLib_IsOpen(
    _Out_ BOOL* pfOpen
    );

HRESULT WINAPI ZMediaLib_EnableAsync(
    _In_ BOOL fAsync
    );

HRESULT WINAPI ZMediaLib_IsAsyncEnabled(
    _Out_ BOOL* pfAsync
    );

interface DECLSPEC_UUID("DED257DD-53FD-4CD2-9CA9-68359ED2DE3B")
IZMediaLibNotificationListener : IUnknown
{
    STDMETHOD_(void, OnZMediaLibNotification)(const ZMEDIALIB_NOTIFICATION *pNotification) = 0;
};

HRESULT WINAPI ZMediaLib_RegisterNotificationListener(
    _In_ IZMediaLibNotificationListener* pListener
    );

void ZMediaLib_UnregisterNotificationListener(
    _In_ IZMediaLibNotificationListener* pListener
    );

HRESULT WINAPI ZMediaLib_CreateList(
    _In_ ZMEDIALIST_TYPE type,
    _In_opt_ ZMEDIAITEM itemParam,
    _Out_ HZMEDIALIST* phList
    );

HRESULT WINAPI ZMediaLib_CreateListEx(
    _In_ ZMEDIALIST_TYPE type,
    _In_opt_ ZMEDIAITEM itemParam,
    _In_opt_ DWORD rgfStorageFilter,
    _Out_ DWORD* prgfStorageType,
    _Out_ HZMEDIALIST* phList
    );

HRESULT WINAPI ZMediaLib_GetItemIntAttribute(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_INTATTRIBUTE attrib,
    _Out_ int* piVal
    );

HRESULT WINAPI ZMediaLib_SetItemIntAttribute(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_INTATTRIBUTE attrib,
    _In_ int iVal
    );

HRESULT WINAPI ZMediaLib_GetItemGuidAttribute(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_GUIDATTRIBUTE attrib,
    _Out_ GUID* pVal
    );

HRESULT WINAPI ZMediaLib_SetItemGuidAttribute(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_GUIDATTRIBUTE attrib,
    _In_ GUID val
    );

HRESULT WINAPI ZMediaLib_GetItemStringAttribute(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_STRINGATTRIBUTE attrib,
    _Out_writes_opt_(cchVal) WCHAR* szVal,
    _In_ UINT cchVal,
    _Out_opt_ UINT* pcchValNeeded
    );

HRESULT WINAPI ZMediaLib_GetItemStringAttribute_Kernel(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_STRINGATTRIBUTE attrib,
    _Out_writes_opt_(cchVal) WCHAR* szVal,
    _In_ UINT cchVal,
    _Out_opt_ UINT* pcchValNeeded
    );

HRESULT WINAPI ZMediaLib_SetItemStringAttribute(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_STRINGATTRIBUTE attrib,
    _In_opt_ const WCHAR* szVal
    );

HRESULT WINAPI ZMediaLib_GetItemDateTimeAttribute(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_DATETIMEATTRIBUTE attrib,
    _Out_ FILETIME* pTime
    );

HRESULT WINAPI ZMediaLib_SetItemDateTimeAttribute(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_DATETIMEATTRIBUTE attrib,
    _In_ const FILETIME* pTime
    );

HRESULT WINAPI ZMediaLib_GetItemBlobAttribute(    
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_BLOBATTRIBUTE attribute,
    _Out_writes_opt_(valueSize) BYTE* pValue, 
    _In_ UINT valueSize,
    _Out_opt_ UINT* pValueSizeNeeded);

HRESULT WINAPI ZMediaLib_SetItemBlobAttribute(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_BLOBATTRIBUTE attribute,
    _In_reads_(valueByteCount) const BYTE* pValue,
    _In_ ULONG valueByteCount);

HRESULT WINAPI ZMediaLib_GetNamedItemAttribute(
    _In_ ZMEDIAITEM item,
    _In_ const WCHAR* szAttrib,
    _Out_writes_bytes_opt_(cbVal) void* pvVal,
    _In_ UINT cbVal,
    _Out_opt_ UINT* pcbValNeeded
    );

HRESULT WINAPI ZMediaLib_SetNamedItemAttribute(
    _In_ ZMEDIAITEM item,
    _In_ const WCHAR* szAttrib,
    _In_reads_bytes_opt_(cbVal) const void* pvVal,
    _In_ UINT cbVal
    );

HRESULT WINAPI ZMediaLib_GetTransientItemCookie(
    _In_ ZMEDIAITEM item,
    _Out_ size_t* phProcessId,
    _Out_writes_opt_(cchVal) WCHAR* szVal,
    _In_ UINT cchVal,
    _Out_opt_ UINT* pcchValNeeded
    );

HRESULT WINAPI ZMediaLib_SetTransientItemCookie(
    _In_ ZMEDIAITEM item,
    _In_ size_t hProcessId,
    _In_opt_ const WCHAR* szVal
    );

HRESULT WINAPI ZMediaLib_IncrementItemIntAttribute(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_INTATTRIBUTE attr,
    _In_ int iIncrementValue,
    _Out_opt_ int* piNewValue
    );

HRESULT WINAPI ZMediaLib_AddPlaylistItem(
    _In_ ZMEDIAITEM playlist,
    _In_ ZMEDIAITEM childItem
    );

HRESULT WINAPI ZMediaLib_RemovePlaylistItem(
    _In_ ZMEDIAITEM playlist,
    _In_opt_ ZMEDIAITEM childItem
    );

HRESULT WINAPI ZMediaLib_ClearPlaylist(
    _In_ ZMEDIAITEM playlist
    );

HRESULT WINAPI ZMediaLib_UpdatePlaylist(
    _In_ ZMEDIAITEM playlist,
    _In_reads_(entryCount) ZPlaylistEntry* pEntries,
    _In_ ULONG entryCount);
    
HRESULT ZMediaLib_AddCloudPlaylistItem(
    _In_ ZMEDIAITEM playlist,
    _In_ ZMEDIAITEM childItem,
    _In_ const GUID* pguidItemId
    );

HRESULT WINAPI ZMediaLib_GetItemThumbnail(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_THUMBTYPE thumbType,
    _Out_writes_bytes_opt_(cbVal) void* pvVal,
    _In_ UINT cbVal,
    _Out_opt_ UINT* pcbValNeeded
    );

HRESULT WINAPI ZMediaLib_SetItemThumbnail(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_THUMBTYPE thumbType,
    _In_reads_bytes_opt_(cbVal) const void* pvVal,
    _In_ UINT cbVal
    );

HRESULT WINAPI ZMediaLib_UpdateItemThumbnail(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_THUMBTYPE thumbType
    );

HRESULT WINAPI ZMediaLib_UpdateItemThumbnails(
    _In_ ZMEDIAITEM item
    );

HRESULT WINAPI ZMediaLib_IsItemArtPresent(
    _In_ ZMEDIAITEM item,
    _Out_ BOOL* pfItemArtPresent
    );

HRESULT WINAPI ZMediaLib_IsSpecialItem(
    _In_ ZMEDIAITEM item,
    _In_ const WCHAR* szSpecialItemKey,
    _Out_ BOOL* pfIsSpecialItem
    );

HRESULT WINAPI ZMediaLib_AddItem(
    _In_ ZMEDIAITEM_TYPE type,
    _Out_ ZMEDIAITEM* pItem
    );

HRESULT WINAPI ZMediaLib_RemoveItem(
    _In_ ZMEDIAITEM item,
    _In_ BOOL fPermanent
    );

HRESULT WINAPI ZMediaLib_RemoveCloudSyncItem(
    _In_ ZMEDIAITEM item
    );

HRESULT WINAPI ZMediaLib_RemoveItemAndStaleRelations(
    _In_ ZMEDIAITEM zmi,
    _In_ BOOL fPermanent
    );

#define ZMEDIALIB_REMOVEITEM_FLAG_PERMANENT        (0x00000001UL)
#define ZMEDIALIB_REMOVEITEM_FLAG_DONTFLUSH		   (0x00000002UL)
#define ZMEDIALIB_REMOVEITEM_FLAG_DONTCHANGETRACK  (0x00000004UL)
#define ZMEDIALIB_REMOVEITEM_FLAG_SKIPSIDECAR      (0x00000008UL)

HRESULT WINAPI ZMediaLib_RemoveItemAndStaleRelationsEx(
    _In_ ZMEDIAITEM zmi,
    _In_ ULONG removeFlags
    );

HRESULT WINAPI ZMediaLib_SetRelatedItem(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_RELATION relation,
    _In_opt_ ZMEDIAITEM relatedItem
    );

HRESULT WINAPI ZMediaLib_GetRelatedItem(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_RELATION relation,
    _Out_ ZMEDIAITEM* pItemRelated
    );

HRESULT WINAPI ZMediaLib_ValidateItem(
    _In_ ZMEDIAITEM item
    );

HRESULT WINAPI ZMediaLib_GetSpecialItem(
    _In_ ZMEDIASPECIALITEM itemSpecial,
    _Out_ ZMEDIAITEM* pItem
    );

HRESULT WINAPI ZMediaLib_GetLocale(
    _Out_ LCID* pLocale
    );

HRESULT WINAPI ZMediaLib_SetLocale(
    _In_ LCID locale
    );

HRESULT WINAPI ZMediaLib_Flush(void);

HRESULT WINAPI ZMediaLib_BlockFlush(void);

HRESULT WINAPI ZMediaLib_UnblockFlush(void);

HRESULT WINAPI ZMediaLib_SetItemVisibility(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_VISIBILITY visibility
    );

HRESULT WINAPI ZMediaLib_GetItemVisibility(
    _In_ ZMEDIAITEM item,
    _Out_ ZMEDIAITEM_VISIBILITY *pVisibility
    );

HRESULT WINAPI ZMediaLib_ReIndex(void);

HRESULT WINAPI ZMediaLib_Repair(void);

HRESULT WINAPI ZMediaLib_ClearVideoToken(void);

HRESULT WINAPI ZMediaLib_ClearRichDisplayItem(void);

HRESULT WINAPI ZMediaList_AddRef(
    _In_ HZMEDIALIST hList
    );

HRESULT WINAPI ZMediaList_Release(
    _In_opt_ HZMEDIALIST hList
    );

// FIXME: ZMediaLib_FindItemByXXX should be changed to have an 
//        _Out_ BOOL *pfFound and return S_OK / *pfFound==FALSE if the 
//        item isn't found.
//        The current implementation is to (quiet)-originate ZERROR_E_NOTFOUND.
HRESULT WINAPI ZMediaList_FindItemByStringAttribute(
    _In_ HZMEDIALIST hList,
    _In_ ZMEDIAITEM_STRINGATTRIBUTE attrib,
    _In_ const WCHAR* szVal,
    _Out_ ZMEDIAITEM* pItem
    );

HRESULT WINAPI ZMediaList_FindItemByGuidAttribute(
    _In_ HZMEDIALIST hList,
    _In_ ZMEDIAITEM_GUIDATTRIBUTE attrib,
    _In_ const GUID* pGuid,
    _Out_ ZMEDIAITEM* pItem
    );

HRESULT WINAPI ZMediaList_FindItemByGuidAttributeEx(
    _In_ HZMEDIALIST hList,
    _In_ ZMEDIAITEM_GUIDATTRIBUTE attrib,
    _In_ const GUID* pGuid,
    _Out_ ZMEDIAITEM* pItem
    );

HRESULT WINAPI ZMediaList_GetType(
    _In_ HZMEDIALIST hList,
    _Out_opt_ ZMEDIALIST_TYPE* pType,
    _Out_opt_ ZMEDIAITEM* pItemParam
    );

HRESULT WINAPI ZMediaList_GetItemCount(
    _In_ HZMEDIALIST hList,
    _Out_ UINT* pcItems
    );

HRESULT WINAPI ZMediaList_GetItem(
    _In_ HZMEDIALIST hList,
    _In_ UINT iItem,
    _Out_ ZMEDIAITEM* pItem
    );

HRESULT WINAPI ZMediaList_GetItems(
    _In_ HZMEDIALIST hList,
    _In_ UINT iFirstItem,
    _Out_writes_(cItems) ZMEDIAITEM* rgItems,
    _In_ UINT cItems,
    _Out_opt_ UINT* pcItemsFetched
    );

HRESULT WINAPI ZMediaList_GetItems_Kernel(
    _In_ HZMEDIALIST hList,
    _In_ UINT iFirstItem,
    _Out_writes_(cItems) ZMEDIAITEM* rgItems,
    _In_ UINT cItems,
    _Out_opt_ UINT* pcItemsFetched
    );

HRESULT WINAPI ZMediaList_GetItemIndex(
    _In_ HZMEDIALIST hList,
    _In_ ZMEDIAITEM item,
    _In_ UINT  startIndex,
    _Out_ UINT* piItem
    );
    
HRESULT WINAPI ZMediaList_MoveStart(
    _In_ HZMEDIALIST hList);
    
HRESULT WINAPI ZMediaList_EnumNextItems(
    _In_ HZMEDIALIST hList,
    _Out_writes_(cItems) ZMEDIAITEM* rgItems,
    _In_ UINT cItems,
    _Out_ UINT* pcItemsFetched);

HRESULT WINAPI ZMediaList_Flatten(
    _In_ HZMEDIALIST hList,
    _Out_ HZMEDIALIST* phFlattenedList
    );

HRESULT WINAPI ZMediaList_FlattenEx(
    _In_ HZMEDIALIST hList,
    _In_ UINT iItem,
    _Out_ HZMEDIALIST* phFlattenedList,
    _Out_ UINT* piFlattenedItem
    );

HRESULT WINAPI ZMediaList_AddLetters(
    _In_ HZMEDIALIST hList,
    _Out_ HZMEDIALIST* phLetteredList
    );

HRESULT WINAPI ZMediaList_FilterList(
    _In_ HZMEDIALIST hzmlListToFilter,
    _In_reads_(cAttribs) ZMEDIAITEM_STRINGATTRIBUTE  attribs[],
    _In_ UINT cAttribs,
    _In_ const WCHAR* pwszSubString,
    _Out_ HZMEDIALIST* phzmlFilteredList
    );

HRESULT WINAPI ZMediaList_FilterList_Kernel(
    _In_ HZMEDIALIST hzmlListToFilter,
    _In_reads_(cAttribs) ZMEDIAITEM_STRINGATTRIBUTE  attribs[],
    _In_ UINT cAttribs,
    _In_ const WCHAR* pwszSubString,
    _Out_ HZMEDIALIST* phzmlFilteredList
    );

HRESULT WINAPI ZMediaLib_AddYamanoteQuicklaunchItem(
    _In_ ZMEDIAITEM_QUICKLAUNCH_LIST WhichList,
    _In_ LPCWSTR Title,
    _In_ LPCWSTR Context,
    _In_ GUID AppSource,
    _In_ LPCWSTR Reactivation,    
    _In_reads_bytes_opt_(cbVal) const void* pvVal,
    _In_ UINT cbVal
    );
    
HRESULT WINAPI ZMediaLib_CopyItems(
    _In_reads_(cItems) ZMEDIAITEM* rgItems,
    _In_ UINT cItems,
    _In_ ZMEDIALIB_STORAGELOCATION_FLAG eStorageDestination,
    _Out_ HZMEDIAWORKITEM* phWorkItem
    );

#define ZMEDIALIB_COPYITEMS_FLAG_DELAY_FLUSH    (0x00000001UL)

HRESULT WINAPI ZMediaLib_CopyItemsEx(
    ULONG CopyFlags,
    _In_reads_(cItems) ZMEDIAITEM* rgItems,
    _In_ UINT cItems,
    _In_ ZMEDIALIB_STORAGELOCATION_FLAG eStorageDestination,
    _Out_ HZMEDIAWORKITEM* phWorkItem
    );
    
HRESULT WINAPI ZMediaLib_BulkMove(
    _In_ ZMEDIALIB_STORAGELOCATION_FLAG eStorageSource,
    _In_ ZMEDIALIB_STORAGELOCATION_FLAG eStorageDestination,
    _Out_ HZMEDIAWORKITEM* phWorkItem
    );

#define ZMEDIALIB_MOVEITEMS_FLAG_DELAY_FLUSH    (0x00000001UL)

HRESULT WINAPI ZMediaLib_BulkMoveEx(
    ULONG MoveFlags,
    _In_ ZMEDIALIB_STORAGELOCATION_FLAG eStorageSource,
    _In_ ZMEDIALIB_STORAGELOCATION_FLAG eStorageDestination,
    _Out_ HZMEDIAWORKITEM* phWorkItem
    );

HRESULT WINAPI ZMediaLib_IsCopyInProgress(
    _Out_ BOOL* pfCopyInProgress,
    _Out_opt_ LONGLONG* pllCurrentBytes,
    _Out_opt_ LONGLONG* pllTotalBytes
    );

#ifdef _NTEXAPI_
EXTERN_C HRESULT WINAPI ZMediaLib_GetCopyNotificationStateName(
    _Out_ WNF_STATE_NAME* pStateName);
#endif

HRESULT WINAPI ZMediaLib_CancelWork(
    _In_ HZMEDIAWORKITEM hWorkItem
    );

HRESULT ZMediaLib_CopyItemAttributes(
    _In_ ZMEDIAITEM zmi,
    _In_ ZMEDIAITEM zmiNew
    );      


// Call this function to get your process exclusive write access to the ZMDB.
// Until you call ZMediaLib_WriteUnlock, other processes'
// attempts to call ZMediaLib_xxx functions that write to the ZMDB will
// immediately return ZERROR_E_WRITEACCESS_DENIED.
// PC sync will hold exclusive write access, since we don't want the library
// contents shifting during sync.  Regular old simple writes to the ZMDB
// (e.g. editing some metadata) don't need to bother with this.
//
// WARNING: msWaitTime should always be zero if you dare call this on a 
//    UI thread. Wait times greater than zero should only be done on background
//    threads.
//
// Consider using auto_ZMediaLibWriteLock
//
HRESULT WINAPI ZMediaLib_WriteLock(
    ZMEDIALIB_WRITELOCK_TYPE dwWriteLockType,
    DWORD msWaitTime
    );

HRESULT WINAPI ZMediaLib_WriteUnlock(
    );

struct auto_ZMediaLibWriteLock
{
    BOOL m_fLocked;
    auto_ZMediaLibRequirement m_azmlReq;

    auto_ZMediaLibWriteLock() : m_fLocked( FALSE )
    {}
    ~auto_ZMediaLibWriteLock()
    {
        Unlock();
    }

    HRESULT Lock(ZMEDIALIB_WRITELOCK_TYPE dwWriteLockType, DWORD msWaitTime = 0)
    {
        HRESULT hr = S_OK;
        if ( !m_fLocked )
        {
            hr = m_azmlReq.Require();
            if ( SUCCEEDED( hr ) )
            {
                hr = ZMediaLib_WriteLock(dwWriteLockType, msWaitTime);
            }
            if ( SUCCEEDED( hr ) )
            {
                m_fLocked = TRUE;
            }
        }
        if ( FAILED( hr ) )
        {
            Unlock();
        }
        return hr;
    }
    VOID Unlock()
    {
        if ( m_fLocked )
        {
            ZMediaLib_WriteUnlock();
            m_azmlReq.Release();
            m_fLocked = FALSE;
        }
    }
};

// Handy functionality from ZMediaHelpers.cpp.  Has legit link dependencies on
// things like ZDevice_xxx which means it's better done inside
// ZMedia
HRESULT WINAPI ZMediaLib_ReportItemAcquired(
    _In_ ZMEDIAITEM item
    );

HRESULT WINAPI ZMediaLib_ClearAcquiredItems();

HRESULT WINAPI ZMediaLib_ReportItemModified(
    _In_ ZMEDIAITEM item
    );

HRESULT WINAPI ZMediaLib_AddItemToWorkQueue(
    _In_ PCWSTR pszQueueNamedItemAttribute,
    _In_ ZMEDIAITEM item
    );

HRESULT WINAPI ZMediaLib_RemoveItemFromWorkQueue(
    _In_ PCWSTR pszNamedItemAttribute,
    _In_ ZMEDIAITEM item
    );

HRESULT WINAPI ZMediaLib_GetNextWorkItem(
    _In_ PCWSTR pszNamedItemAttribute,
    _In_opt_ ZMEDIAITEM zmiPrevious,
    _Out_ ZMEDIAITEM* pItem
    );

HRESULT WINAPI ZMediaLib_ReportLibraryModified(
    );

HRESULT WINAPI ZMediaLib_GeneratePictureArt(
    _In_ ZMEDIAITEM item,
    _Out_writes_(MAX_PATH) LPWSTR pwzArtFilePath,
    _In_opt_ LPCWSTR pwszScratchFolder
    );

HRESULT WINAPI ZMediaLib_WriteArtBufferToArtPath(
    _In_reads_(MAX_PATH) LPCWSTR wszDestPath,
    _In_reads_bytes_(cbBufferSize) BYTE* pbBuffer,
    _In_ UINT cbBufferSize);

HRESULT WINAPI ZMediaLib_GenerateSmallThumbnail(
    _In_ ZMEDIAITEM item,
    _Out_writes_(MAX_PATH) LPWSTR pwzArtFilePath
    );

HRESULT WINAPI ZMediaLib_GeneratePictureArtFromBuffer(
    _In_ ZMEDIAITEM item,
    _In_ BYTE* pbBuffer, 
    _In_ UINT cbBufferSize
    );

HRESULT WINAPI ZMediaLib_GetItemStreamOnProperty(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_STRINGATTRIBUTE attrib,
    _Out_ ZMEDIAITEMSTREAM *pStream
    );

HRESULT WINAPI ZMediaLib_CloseMediaItemStream(
    _In_ ZMEDIAITEMSTREAM stream
    );

HRESULT WINAPI ZMediaLib_ReadItemStream(
    _In_ ZMEDIAITEMSTREAM stream,
    _Inout_updates_bytes_to_(cbSize, *pcbReadSize) PVOID DataBuffer,
    _In_ ULONG cbSize,
    _Out_ ULONG *pcbReadSize
    );

HRESULT WINAPI ZMediaLib_SeekItemStream(
    _In_ ZMEDIAITEMSTREAM stream,
    _In_ LARGE_INTEGER offset,
    _In_ ULONG origin,
    _Out_ ULARGE_INTEGER *pNewPosition
    );

HRESULT WINAPI ZMediaLib_GetSizeItemStream(
    _In_ ZMEDIAITEMSTREAM stream,
    _Out_ ULARGE_INTEGER *pSize
    );

#define ZMEDIALIB_TRANSFER_BYCOPY 1
#define ZMEDIALIB_TRANSFER_BYMOVE 2

HRESULT WINAPI ZMediaLib_TransferFile(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_STRINGATTRIBUTE attrib,
    _In_ DWORD dwAction,
    _In_ PCWSTR pszDssTokenId
    );

HRESULT WINAPI ZMediaLib_GetCoverImage(
    _In_ ZMEDIAITEM zmiFolder,
    _Out_ ZMEDIAITEM* pCoverPhoto
    );

HRESULT WINAPI ZMediaLib_GetSpecialFolder(
    _In_ ZMEDIAFOLDER_TYPE zmfType,
    _Out_ ZMEDIAITEM *pItem
    );

HRESULT WINAPI ZMediaLib_TryGetSpecialFolder(
    _In_ ZMEDIAFOLDER_TYPE zmfType,
    _Out_ ZMEDIAITEM *pItem
    );

HRESULT WINAPI ZMediaLib_GetReadToken(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_STRINGATTRIBUTE attrib,
    _In_ ZMEDIAITEM_DSS_ATTRIBUTES dssAttrib,
    _Out_writes_opt_(cchToken) WCHAR* szToken,
    _In_ UINT cchToken,
    _Out_opt_ UINT* pcchTokenNeeded
    );

HRESULT WINAPI ZMediaLib_GetReadHandle(
    _In_ ZMEDIAITEM item,
    _In_ ZMEDIAITEM_STRINGATTRIBUTE attrib,
    _Out_ HANDLE* pHandle
    );

HRESULT WINAPI ZMediaLib_GetDatabaseHandle(
    _In_ LPCWSTR pszShareTarget,
    _Out_ HANDLE* phZuneDB
    );

HRESULT WINAPI ZMediaLib_GetSpecialFolderPath(
    _In_ ZMEDIAFOLDER_TYPE zmfType,
    _In_ DWORD dwStorageDeviceType,
    _In_ DWORD dwStorageDeviceInstance,
    _Out_writes_opt_(cchPath) WCHAR* szPath,
    _In_ UINT cchPath,
    _Out_opt_ UINT* pcchPathNeeded
    );

HRESULT WINAPI ZMediaLib_GetTotalMediaSize(
    _In_ ZMEDIALIST_TYPE listType,
    _In_ DWORD rgfStorageFilter,
    _In_opt_ const GUID *appGuid,
    _Out_ ULONGLONG* pullBytes,
    _Out_ ULONG* pulCount);

HRESULT WINAPI ZMediaLib_MakeFilePathValid(
    _In_ ZMEDIAITEM zmi);

HRESULT WINAPI ZMediaLib_IsItemAvailable(
     _In_ ZMEDIAITEM zmi,
     _Out_ BOOL* pfAvailable);

__inline BOOL ZMediaLib_IsAbstractType( 
     _In_ ZMEDIAITEM_TYPE zmiType)
{
    return ((!(zmiType == ZMEDIAITEM_TYPE_AUDIO ||
              zmiType == ZMEDIAITEM_TYPE_VIDEO ||
              zmiType == ZMEDIAITEM_TYPE_PICTURE ||
              zmiType == ZMEDIAITEM_TYPE_PODCASTAUDIO)) &&      
              (zmiType != ZMEDIAITEM_TYPE_INVALID));    
}

__inline BOOL ZMediaLib_IsAbstractItem( 
     _In_ ZMEDIAITEM zmi)
{
    return ZMediaLib_IsAbstractType(ZMEDIAITEM_TYPEOF(zmi));
}

HRESULT WINAPI ZMediaLib_GetStorageIndex(
    _In_ GUID StorageId, 
    _Out_ ZMEDIALIB_STORAGELOCATION_INDEXID* peStorageCard);

__inline BOOL ZMediaLib_ItemStorageIsExternal(
    _In_ ZMEDIAITEM zmi)
{
    int rgfStorageFlags = 0;

    ZMediaLib_GetItemIntAttribute(
        zmi,
        ZMEDIAITEM_ATTRIBUTE_STORAGELOCATION,
        &rgfStorageFlags);

    return (rgfStorageFlags & ZMEDIALIB_STORAGELOCATION_FLAG_EXTERNAL);
}

__inline BOOL ZMediaLib_ItemStorageIsInternal(
    _In_ ZMEDIAITEM zmi)
{
    int rgfStorageFlags = 0;

    // Ignore failure
    ZMediaLib_GetItemIntAttribute(
        zmi,
        ZMEDIAITEM_ATTRIBUTE_STORAGELOCATION,
        &rgfStorageFlags);

    return (rgfStorageFlags & ZMEDIALIB_STORAGELOCATION_FLAG_INTERNAL);
}

__inline BOOL ZMediaLib_ItemStorageIsCloud(
    _In_ ZMEDIAITEM zmi)
{
    int rgfStorageFlags = 0;

    // Ignore failure
    ZMediaLib_GetItemIntAttribute(
        zmi,
        ZMEDIAITEM_ATTRIBUTE_STORAGELOCATION,
        &rgfStorageFlags);

    return (rgfStorageFlags & ZMEDIALIB_STORAGELOCATION_FLAG_CLOUD);
}

HRESULT WINAPI ZMediaLib_PurgeExternalStorageCards();

HRESULT WINAPI ZMediaLib_AddItemsToReactiveLicenseAcquisitionQueue(
    _In_reads_(cItems) ZMEDIAITEM * pItems,
    _In_ UINT cItems );

///<summary>Returns the name of the service a client can use as the sharing target when creating the DSS token.</summary>
__inline LPCWSTR ZMediaLib_GetSharingTarget()
{
    return L"MediaDataSvc"; 
}

HRESULT WINAPI ZMediaLib_SaveSong(
    _In_ LPCWSTR pwszFilenameToken,
    _In_opt_ const ZMEDIALIB_SONGMETADATA* pSongMetadata,
    _In_ ZMEDIALIB_SAVESONGOPERATION eOperation,
    _Out_ ZMEDIAITEM* pzmiAdded);

HRESULT WINAPI ZMediaLib_DeleteSong(_In_ ZMEDIAITEM zmi);

HRESULT WINAPI ZMediaLib_SaveUgc(
    _In_ LPCWSTR pwszFilenameToken,
    _In_ ZMEDIALIB_SAVEUGCOPERATION eOperation,
    _In_ ZMEDIAFOLDER_TYPE zmfType,
    _In_ ZMEDIAITEM_TYPE zmiType,
    _In_ BOOL fGenerateUniqueName,
    _In_ const ZMEDIALIB_UGCMETADATA* pUgcMetadata,
    _Out_ ZMEDIAITEM* pzmiAdded);

HRESULT WINAPI ZMediaLib_DeleteUgc(
    _In_ ZMEDIAITEM zmi,
    _In_ BOOL fPermanent);

HRESULT WINAPI ZMediaLib_GeneratePictureArtByFilePath(
    _In_ LPCWSTR pwszFilePath,
    _Out_writes_(cchArtFilePath) LPWSTR pwzArtFilePath,
    _In_ UINT cchArtFilePath,
    _In_opt_ LPCWSTR pwszScratchFolder
    );

HRESULT WINAPI ZMediaLib_GenerateSmallThumbnailByFilePath(
    _In_ LPCWSTR pwszFilePath,
    _In_ ZMEDIAITEM_TYPE zmiType,
    _In_ int nOrientation,
    _Out_writes_(cchArtFilePath) LPWSTR pwzArtFilePath,
    _In_ UINT cchArtFilePath
    );

HRESULT WINAPI ZMediaLib_GeneratePictureArtFromBufferByFilePath(
    _In_reads_(MAX_PATH) LPCWSTR wszArtPath,
    _In_reads_(cbBufferSize) BYTE* pbBuffer, 
    _In_ UINT cbBufferSize
    );

/// <summary>
/// Returns the list of change items since revision count. The items can be deletions as well as additions/changes
/// When asked for deletion, the API removes all the deletions from before the revisionCount requested
/// This makes it a single caller API
/// </summary>
/// <param name="revisionCount">Revision count</param>
/// <param name="pChangeCount">Change count </param>
/// <param name="ppChanges">Actual changes, Caller must call LocalFree to free when done</param>
EXTERN_C HRESULT WINAPI ZMediaLib_GetChangedItems(
    _In_ ULONG revisionCount,
    _Out_ ULONG* pChangeCount,
    _Outptr_result_buffer_(*pChangeCount) ZMEDIALIB_CHANGE_RECORD** ppChanges);

EXTERN_C HRESULT WINAPI ZMediaLib_GetItemsUnderFolder(
    _In_ ZMEDIAITEM_TYPE itemType,
    _In_z_ LPCWSTR pFolderPath,
    _Out_ HZMEDIALIST *pZmdbListHandle);

EXTERN_C HRESULT WINAPI ZMediaLib_CreateListSnapshot(
    _In_  HZMEDIALIST listHandle,
    _Out_ HZMEDIALIST* pSnapshotList);

EXTERN_C HRESULT WINAPI ZMediaLib_MoveItemsUnderFolder(
    _In_z_ LPCWSTR pOriginalPath,
    _In_z_ LPCWSTR pNewPath);

EXTERN_C HRESULT WINAPI ZMediaLib_SuppressNotification( 
    _In_ ZMEDIA_NOTIFICATIONTYPE notificationType,
    _In_z_ LPCWSTR pFilePath);

EXTERN_C HRESULT WINAPI ZMediaLib_AddPhotoIntoDBForGeoTaggingAndUpload(
    _In_z_ LPCWSTR pFilePath);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _ZMEDIALIB_

