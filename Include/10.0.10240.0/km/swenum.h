/*++

    Copyright (c) 1997 Microsoft Corporation

Module Name:

    swenum.h

Abstract:
    Public header file and bus interface definition for the
    software device enumerator.

--*/

#if !defined( _SWENUM_ )

#define _SWENUM_

// Io controls

#define IOCTL_SWENUM_INSTALL_INTERFACE  CTL_CODE(FILE_DEVICE_BUS_EXTENDER, 0x000, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SWENUM_REMOVE_INTERFACE   CTL_CODE(FILE_DEVICE_BUS_EXTENDER, 0x001, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SWENUM_GET_BUS_ID         CTL_CODE(FILE_DEVICE_BUS_EXTENDER, 0x002, METHOD_NEITHER, FILE_READ_ACCESS)

//
// Io control related structures
//

typedef struct _SWENUM_INSTALL_INTERFACE {
    GUID    DeviceId;
    GUID    InterfaceId;
    WCHAR  ReferenceString[1];
    
} SWENUM_INSTALL_INTERFACE, *PSWENUM_INSTALL_INTERFACE;

#if defined( _KS_ )

#define STATIC_BUSID_SoftwareDeviceEnumerator STATIC_KSMEDIUMSETID_Standard
#define BUSID_SoftwareDeviceEnumerator KSMEDIUMSETID_Standard

#else // !_KS_

#define STATIC_BUSID_SoftwareDeviceEnumerator \
    0x4747B320L, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
#if defined(__cplusplus) && _MSC_VER >= 1100
struct __declspec(uuid("4747B320-62CE-11CF-A5D6-28DB04C10000")) BUSID_SoftwareDeviceEnumerator;
#define BUSID_SoftwareDeviceEnumerator __uuidof(struct BUSID_SoftwareDeviceEnumerator)
#else
DEFINE_GUIDEX(BUSID_SoftwareDeviceEnumerator);
#endif // !(defined(__cplusplus) && _MSC_VER >= 1100)

#endif // !_KS_

#if defined( _NTDDK_ )

typedef 
VOID 
(*PFNREFERENCEDEVICEOBJECT)( 
    _In_ PVOID Context
    );
    
typedef 
VOID 
(*PFNDEREFERENCEDEVICEOBJECT)( 
    _In_ PVOID Context
    );
    
typedef
NTSTATUS
(*PFNQUERYREFERENCESTRING)( 
    _In_ PVOID Context,
    _Inout_ PWCHAR *String
    );

#define BUS_INTERFACE_SWENUM_VERSION    0x100
    
typedef struct _BUS_INTERFACE_SWENUM {
    //
    // Standard interface header
    //
    
    INTERFACE                   Interface;
    
    //
    // SWENUM bus interfaces
    //
    
    PFNREFERENCEDEVICEOBJECT    ReferenceDeviceObject;
    PFNDEREFERENCEDEVICEOBJECT  DereferenceDeviceObject;
    PFNQUERYREFERENCESTRING     QueryReferenceString;
    
} BUS_INTERFACE_SWENUM, *PBUS_INTERFACE_SWENUM;

#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#if defined( _KS_ )

KSDDKAPI
NTSTATUS
NTAPI
KsQuerySoftwareBusInterface(
    _In_ PDEVICE_OBJECT PnpDeviceObject,
    _Out_ PBUS_INTERFACE_SWENUM BusInterface
    );

KSDDKAPI
NTSTATUS
NTAPI
KsReferenceSoftwareBusObject(
    _In_ KSDEVICE_HEADER  Header
    );

KSDDKAPI
VOID
NTAPI
KsDereferenceSoftwareBusObject(
    _In_ KSDEVICE_HEADER  Header
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreateBusEnumObject(
    _In_ PWSTR BusIdentifier,
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_opt_ PDEVICE_OBJECT PnpDeviceObject,
    _In_opt_ REFGUID InterfaceGuid,
    _In_opt_ PWSTR ServiceRelativePath
    );
    
KSDDKAPI
NTSTATUS
NTAPI
KsGetBusEnumIdentifier(
    _Inout_ PIRP Irp
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsGetBusEnumPnpDeviceObject(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PDEVICE_OBJECT *PnpDeviceObject
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsInstallBusEnumInterface(
    _In_ PIRP Irp
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsIsBusEnumChildDevice(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PBOOLEAN ChildDevice
    );
    
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsRemoveBusEnumInterface(
    _In_ PIRP Irp
    );
    
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsServiceBusEnumPnpRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp
    );
    
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsServiceBusEnumCreateRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ PIRP Irp
    );
    
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsGetBusEnumParentFDOFromChildPDO(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PDEVICE_OBJECT *FunctionalDeviceObject
    );

#endif // _KS_

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)

#endif // _NTDDK_

#endif // !_SWENUM_
