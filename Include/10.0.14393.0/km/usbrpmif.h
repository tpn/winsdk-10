//
//    Copyright (C) Microsoft.  All rights reserved.
//

#if !defined(_USBRPMIF_H_)
#define _USBRPMIF_H_

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include "windef.h"
#include "usb100.h"

#if !defined(_USBRPM_DRIVER_)
#define USBRPMAPI DECLSPEC_IMPORT
#else
#define USBRPMAPI
#endif

typedef struct _USBRPM_DEVICE_INFORMATION
{
    // Device is on which hub and connection index
    ULONG64      HubId;
    ULONG        ConnectionIndex;

    // Device specific information
    UCHAR        DeviceClass;
    USHORT       VendorId;
    USHORT       ProductId;
    WCHAR        ManufacturerString[MAXIMUM_USB_STRING_LENGTH];
    WCHAR        ProductString[MAXIMUM_USB_STRING_LENGTH];

    WCHAR        HubSymbolicLinkName[MAX_PATH];
} USBRPM_DEVICE_INFORMATION, *PUSBRPM_DEVICE_INFORMATION;

typedef struct _USBRPM_DEVICE_LIST
{
    ULONG                        NumberOfDevices;
    USBRPM_DEVICE_INFORMATION    Device[0];
} USBRPM_DEVICE_LIST, *PUSBRPM_DEVICE_LIST;

USBRPMAPI
NTSTATUS
RPMRegisterAlternateDriver(IN PDRIVER_OBJECT  DriverObject,
                            IN LPCWSTR CompatibleId, 
                            OUT PHANDLE RegisteredDriver);

USBRPMAPI
NTSTATUS 
RPMUnregisterAlternateDriver(IN HANDLE RegisteredDriver);

USBRPMAPI
NTSTATUS
RPMGetAvailableDevices(IN HANDLE RegisteredDriver,
                        IN USHORT Locale,
                        OUT PUSBRPM_DEVICE_LIST *DeviceList);

USBRPMAPI
NTSTATUS
RPMLoadAlternateDriverForDevice(IN HANDLE RegisteredDriver,
                                 IN ULONG64 HubID,
                                 IN ULONG ConnectionIndex,
                                 IN OPTIONAL REFGUID OwnerGuid);

USBRPMAPI
NTSTATUS
RPMUnloadAlternateDriverForDevice(IN HANDLE RegisteredDriver,
                                   IN ULONG64 HubID,
                                   IN ULONG ConnectionIndex);


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif  // _USBRPMIF_H_

