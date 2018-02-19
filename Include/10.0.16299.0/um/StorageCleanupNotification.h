//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

#ifdef __cplusplus
extern "C" {
#endif

/// <summary>
///     Unregisters the caller from receiving Storage Cleanup Notifications from StorageSvc
/// </summary>
/// <returns>
///     HRESULT
/// </returns>
typedef void (*StorageCleanupNotificationCallback) (void);


/// <summary>
///     Registers the caller for receiving Storage Cleanup Notifications from StorageSvc
/// </summary>
/// <returns>
///     NTSTATUS
/// </returns>
NTSTATUS
RegisterForStorageCleanupNotifications(_In_ StorageCleanupNotificationCallback callback);


/// <summary>
///     Unregisters the caller from receiving Storage Cleanup Notifications from StorageSvc
/// </summary>
/// <returns>
///     HRESULT
/// </returns>
NTSTATUS
UnregisterForStorageCleanupNotifications();


#ifdef __cplusplus
}
#endif