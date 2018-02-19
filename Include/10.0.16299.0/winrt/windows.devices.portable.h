/* Header file automatically generated from windows.devices.portable.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0206 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Edevices2Eportable_h__
#define __windows2Edevices2Eportable_h__
#ifndef __windows2Edevices2Eportable_p_h__
#define __windows2Edevices2Eportable_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

#pragma push_macro("MIDL_CONST_ID")
#if !defined(_MSC_VER) || (_MSC_VER >= 1910)
#define MIDL_CONST_ID constexpr const
#else
#define MIDL_CONST_ID const __declspec(selectany)
#endif


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION)
#define WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Portable {
                interface IServiceDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Portable */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics ABI::Windows::Devices::Portable::IServiceDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Portable {
                interface IStorageDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Portable */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics ABI::Windows::Devices::Portable::IStorageDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFolder ABI::Windows::Storage::IStorageFolder

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Portable {
                
                typedef enum ServiceDeviceType : int ServiceDeviceType;
                
            } /* Windows */
        } /* Devices */
    } /* Portable */} /* ABI */










/*
 *
 * Struct Windows.Devices.Portable.ServiceDeviceType
 *
 * Introduced to Windows.Devices.Portable.PortableDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Portable {
                /* [v1_enum, contract] */
                enum ServiceDeviceType : int
                {
                    ServiceDeviceType_CalendarService = 0,
                    ServiceDeviceType_ContactsService = 1,
                    ServiceDeviceType_DeviceStatusService = 2,
                    ServiceDeviceType_NotesService = 3,
                    ServiceDeviceType_RingtonesService = 4,
                    ServiceDeviceType_SmsService = 5,
                    ServiceDeviceType_TasksService = 6,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Portable */} /* ABI */
#endif // WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Portable.IServiceDeviceStatics
 *
 * Introduced to Windows.Devices.Portable.PortableDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Portable.ServiceDevice
 *
 *
 */
#if WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Portable_IServiceDeviceStatics[] = L"Windows.Devices.Portable.IServiceDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Portable {
                /* [object, uuid("A88214E1-59C7-4A20-ABA6-9F6707937230"), exclusiveto, contract] */
                MIDL_INTERFACE("A88214E1-59C7-4A20-ABA6-9F6707937230")
                IServiceDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [in] */ABI::Windows::Devices::Portable::ServiceDeviceType serviceType,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromServiceId(
                        /* [in] */GUID serviceId,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IServiceDeviceStatics=_uuidof(IServiceDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Portable */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Portable.IStorageDeviceStatics
 *
 * Introduced to Windows.Devices.Portable.PortableDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Portable.StorageDevice
 *
 *
 */
#if WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Portable_IStorageDeviceStatics[] = L"Windows.Devices.Portable.IStorageDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Portable {
                /* [object, uuid("5ECE44EE-1B23-4DD2-8652-BC164F003128"), exclusiveto, contract] */
                MIDL_INTERFACE("5ECE44EE-1B23-4DD2-8652-BC164F003128")
                IStorageDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromId(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFolder * * deviceRoot
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageDeviceStatics=_uuidof(IStorageDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Portable */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Portable.ServiceDevice
 *
 * Introduced to Windows.Devices.Portable.PortableDeviceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Portable.IServiceDeviceStatics interface starting with version 1.0 of the Windows.Devices.Portable.PortableDeviceContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Portable_ServiceDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Portable_ServiceDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Portable_ServiceDevice[] = L"Windows.Devices.Portable.ServiceDevice";
#endif
#endif // WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Portable.StorageDevice
 *
 * Introduced to Windows.Devices.Portable.PortableDeviceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Portable.IStorageDeviceStatics interface starting with version 1.0 of the Windows.Devices.Portable.PortableDeviceContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Portable_StorageDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Portable_StorageDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Portable_StorageDevice[] = L"Windows.Devices.Portable.StorageDevice";
#endif
#endif // WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType;










/*
 *
 * Struct Windows.Devices.Portable.ServiceDeviceType
 *
 * Introduced to Windows.Devices.Portable.PortableDeviceContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType
{
    ServiceDeviceType_CalendarService = 0,
    ServiceDeviceType_ContactsService = 1,
    ServiceDeviceType_DeviceStatusService = 2,
    ServiceDeviceType_NotesService = 3,
    ServiceDeviceType_RingtonesService = 4,
    ServiceDeviceType_SmsService = 5,
    ServiceDeviceType_TasksService = 6,
};
#endif // WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Portable.IServiceDeviceStatics
 *
 * Introduced to Windows.Devices.Portable.PortableDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Portable.ServiceDevice
 *
 *
 */
#if WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Portable_IServiceDeviceStatics[] = L"Windows.Devices.Portable.IServiceDeviceStatics";
/* [object, uuid("A88214E1-59C7-4A20-ABA6-9F6707937230"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType serviceType,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromServiceId )(
        __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
        /* [in] */GUID serviceId,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_GetDeviceSelector(This,serviceType,selector) \
    ( (This)->lpVtbl->GetDeviceSelector(This,serviceType,selector) )

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_GetDeviceSelectorFromServiceId(This,serviceId,selector) \
    ( (This)->lpVtbl->GetDeviceSelectorFromServiceId(This,serviceId,selector) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Portable.IStorageDeviceStatics
 *
 * Introduced to Windows.Devices.Portable.PortableDeviceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Portable.StorageDevice
 *
 *
 */
#if WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Portable_IStorageDeviceStatics[] = L"Windows.Devices.Portable.IStorageDeviceStatics";
/* [object, uuid("5ECE44EE-1B23-4DD2-8652-BC164F003128"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * deviceRoot
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * selector
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FromId(This,deviceId,deviceRoot) \
    ( (This)->lpVtbl->FromId(This,deviceId,deviceRoot) )

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_GetDeviceSelector(This,selector) \
    ( (This)->lpVtbl->GetDeviceSelector(This,selector) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Portable.ServiceDevice
 *
 * Introduced to Windows.Devices.Portable.PortableDeviceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Portable.IServiceDeviceStatics interface starting with version 1.0 of the Windows.Devices.Portable.PortableDeviceContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Portable_ServiceDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Portable_ServiceDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Portable_ServiceDevice[] = L"Windows.Devices.Portable.ServiceDevice";
#endif
#endif // WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Portable.StorageDevice
 *
 * Introduced to Windows.Devices.Portable.PortableDeviceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Portable.IStorageDeviceStatics interface starting with version 1.0 of the Windows.Devices.Portable.PortableDeviceContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Portable_StorageDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Portable_StorageDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Portable_StorageDevice[] = L"Windows.Devices.Portable.StorageDevice";
#endif
#endif // WINDOWS_DEVICES_PORTABLE_PORTABLEDEVICECONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Eportable_p_h__

#endif // __windows2Edevices2Eportable_h__
