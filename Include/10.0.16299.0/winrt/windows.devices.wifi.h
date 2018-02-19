/* Header file automatically generated from windows.devices.wifi.idl */
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
#ifndef __windows2Edevices2Ewifi_h__
#define __windows2Edevices2Ewifi_h__
#ifndef __windows2Edevices2Ewifi_p_h__
#define __windows2Edevices2Ewifi_p_h__


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
#include "Windows.Networking.Connectivity.h"
#include "Windows.Security.Credentials.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                interface IWiFiAdapter;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter ABI::Windows::Devices::WiFi::IWiFiAdapter

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                interface IWiFiAdapter2;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 ABI::Windows::Devices::WiFi::IWiFiAdapter2

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                interface IWiFiAdapterStatics;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics ABI::Windows::Devices::WiFi::IWiFiAdapterStatics

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                interface IWiFiAvailableNetwork;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                interface IWiFiConnectionResult;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult ABI::Windows::Devices::WiFi::IWiFiConnectionResult

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                interface IWiFiNetworkReport;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport ABI::Windows::Devices::WiFi::IWiFiNetworkReport

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                interface IWiFiWpsConfigurationResult;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult ABI::Windows::Devices::WiFi::IWiFiWpsConfigurationResult

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                class WiFiAdapter;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#define DEF___FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("144136c6-b502-5a52-90fc-22a09318f932"))
IIterator<ABI::Windows::Devices::WiFi::WiFiAdapter*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiAdapter*, ABI::Windows::Devices::WiFi::IWiFiAdapter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.WiFi.WiFiAdapter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::WiFi::WiFiAdapter*> __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_t;
#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::WiFi::IWiFiAdapter*>
//#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::WiFi::IWiFiAdapter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#define DEF___FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e0bc76c4-8d0c-53fc-bcd4-228f47210ace"))
IIterable<ABI::Windows::Devices::WiFi::WiFiAdapter*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiAdapter*, ABI::Windows::Devices::WiFi::IWiFiAdapter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.WiFi.WiFiAdapter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::WiFi::WiFiAdapter*> __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_t;
#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::WiFi::IWiFiAdapter*>
//#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::WiFi::IWiFiAdapter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                class WiFiAvailableNetwork;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_USE
#define DEF___FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("468677c4-ebb9-5196-836d-72faa9fe673e"))
IIterator<ABI::Windows::Devices::WiFi::WiFiAvailableNetwork*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiAvailableNetwork*, ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.WiFi.WiFiAvailableNetwork>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::WiFi::WiFiAvailableNetwork*> __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_t;
#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork*>
//#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_USE
#define DEF___FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f17484ea-c71e-5d3e-b74c-3a0e61dd9c20"))
IIterable<ABI::Windows::Devices::WiFi::WiFiAvailableNetwork*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiAvailableNetwork*, ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.WiFi.WiFiAvailableNetwork>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::WiFi::WiFiAvailableNetwork*> __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_t;
#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork*>
//#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                enum WiFiWpsKind : int;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_USE
#define DEF___FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9b19593c-602d-57d9-a852-a48a8204ff42"))
IIterator<enum ABI::Windows::Devices::WiFi::WiFiWpsKind> : IIterator_impl<enum ABI::Windows::Devices::WiFi::WiFiWpsKind> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.WiFi.WiFiWpsKind>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Devices::WiFi::WiFiWpsKind> __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_t;
#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::WiFi::WiFiWpsKind>
//#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::WiFi::WiFiWpsKind>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_USE */





#ifndef DEF___FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_USE
#define DEF___FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("41e16513-a8f2-55ed-9be4-5665167d49d7"))
IIterable<enum ABI::Windows::Devices::WiFi::WiFiWpsKind> : IIterable_impl<enum ABI::Windows::Devices::WiFi::WiFiWpsKind> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.WiFi.WiFiWpsKind>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Devices::WiFi::WiFiWpsKind> __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_t;
#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::WiFi::WiFiWpsKind>
//#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::WiFi::WiFiWpsKind>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#define DEF___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("670a3c41-ecc8-55c2-84d4-51864496a328"))
IVectorView<ABI::Windows::Devices::WiFi::WiFiAdapter*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiAdapter*, ABI::Windows::Devices::WiFi::IWiFiAdapter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.WiFi.WiFiAdapter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::WiFi::WiFiAdapter*> __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_t;
#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFi::IWiFiAdapter*>
//#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFi::IWiFiAdapter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_USE
#define DEF___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7c65d286-7285-5d63-bdea-5ef951bdf618"))
IVectorView<ABI::Windows::Devices::WiFi::WiFiAvailableNetwork*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiAvailableNetwork*, ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.WiFi.WiFiAvailableNetwork>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::WiFi::WiFiAvailableNetwork*> __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_t;
#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork*>
//#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_USE
#define DEF___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("aae7e5e5-27f0-5b28-8c58-9039356d3dc7"))
IVectorView<enum ABI::Windows::Devices::WiFi::WiFiWpsKind> : IVectorView_impl<enum ABI::Windows::Devices::WiFi::WiFiWpsKind> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.WiFi.WiFiWpsKind>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Devices::WiFi::WiFiWpsKind> __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_t;
#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFi::WiFiWpsKind>
//#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFi::WiFiWpsKind>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_USE */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                enum WiFiAccessStatus : int;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("65e889ca-f6c9-5c75-bef9-05ab88a49a54"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Devices::WiFi::WiFiAccessStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Devices::WiFi::WiFiAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.WiFi.WiFiAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Devices::WiFi::WiFiAccessStatus> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::WiFiAccessStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::WiFiAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f8c75a3a-739a-57aa-986d-1f7604d7e386"))
IAsyncOperation<enum ABI::Windows::Devices::WiFi::WiFiAccessStatus> : IAsyncOperation_impl<enum ABI::Windows::Devices::WiFi::WiFiAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.WiFi.WiFiAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Devices::WiFi::WiFiAccessStatus> __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_t;
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::WiFi::WiFiAccessStatus>
//#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::WiFi::WiFiAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("35362f75-6aae-560d-b3d0-3fae9c7260a8"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::WiFiAdapter*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiAdapter*, ABI::Windows::Devices::WiFi::IWiFiAdapter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.WiFi.WiFiAdapter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::WiFiAdapter*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::IWiFiAdapter*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::IWiFiAdapter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1dcf739d-10b7-59e9-ab47-8b0277e20193"))
IAsyncOperation<ABI::Windows::Devices::WiFi::WiFiAdapter*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiAdapter*, ABI::Windows::Devices::WiFi::IWiFiAdapter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.WiFi.WiFiAdapter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::WiFi::WiFiAdapter*> __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_t;
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::WiFi::IWiFiAdapter*>
//#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::WiFi::IWiFiAdapter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                class WiFiConnectionResult;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f380eb8d-1e52-5350-a288-861c963a84f0"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::WiFiConnectionResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiConnectionResult*, ABI::Windows::Devices::WiFi::IWiFiConnectionResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.WiFi.WiFiConnectionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::WiFiConnectionResult*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::IWiFiConnectionResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::IWiFiConnectionResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ffa41f49-4c30-50d3-9549-e4f055b417b4"))
IAsyncOperation<ABI::Windows::Devices::WiFi::WiFiConnectionResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiConnectionResult*, ABI::Windows::Devices::WiFi::IWiFiConnectionResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.WiFi.WiFiConnectionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::WiFi::WiFiConnectionResult*> __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_t;
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::WiFi::IWiFiConnectionResult*>
//#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::WiFi::IWiFiConnectionResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                class WiFiWpsConfigurationResult;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("33fa345b-28cd-58a8-bcfc-be4cfd108e91"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::WiFiWpsConfigurationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiWpsConfigurationResult*, ABI::Windows::Devices::WiFi::IWiFiWpsConfigurationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.WiFi.WiFiWpsConfigurationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::WiFiWpsConfigurationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::IWiFiWpsConfigurationResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::WiFi::IWiFiWpsConfigurationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4b721d74-0289-583c-a81d-f3be03ea596d"))
IAsyncOperation<ABI::Windows::Devices::WiFi::WiFiWpsConfigurationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiWpsConfigurationResult*, ABI::Windows::Devices::WiFi::IWiFiWpsConfigurationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.WiFi.WiFiWpsConfigurationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::WiFi::WiFiWpsConfigurationResult*> __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_t;
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::WiFi::IWiFiWpsConfigurationResult*>
//#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::WiFi::IWiFiWpsConfigurationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("92902a07-2f18-56e9-87fb-24fe19f70688"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.WiFi.WiFiAdapter>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFi::IWiFiAdapter*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFi::IWiFiAdapter*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3140802b-987c-5c56-a430-90fbc1898dda"))
IAsyncOperation<__FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.WiFi.WiFiAdapter>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter*> __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFi::IWiFiAdapter*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::WiFi::IWiFiAdapter*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f6c02d1b-43e8-5fc8-8e8e-ee7b8094b683"))
ITypedEventHandler<ABI::Windows::Devices::WiFi::WiFiAdapter*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::WiFi::WiFiAdapter*, ABI::Windows::Devices::WiFi::IWiFiAdapter*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.WiFi.WiFiAdapter, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::WiFi::WiFiAdapter*,IInspectable*> __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::WiFi::IWiFiAdapter*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::WiFi::IWiFiAdapter*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class NetworkAdapter;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkAdapter;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter ABI::Windows::Networking::Connectivity::INetworkAdapter

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class NetworkSecuritySettings;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkSecuritySettings;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings ABI::Windows::Networking::Connectivity::INetworkSecuritySettings

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                class PasswordCredential;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                interface IPasswordCredential;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential ABI::Windows::Security::Credentials::IPasswordCredential

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                
                typedef enum WiFiAccessStatus : int WiFiAccessStatus;
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                
                typedef enum WiFiConnectionMethod : int WiFiConnectionMethod;
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                
                typedef enum WiFiConnectionStatus : int WiFiConnectionStatus;
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                
                typedef enum WiFiNetworkKind : int WiFiNetworkKind;
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                
                typedef enum WiFiPhyKind : int WiFiPhyKind;
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                
                typedef enum WiFiReconnectionKind : int WiFiReconnectionKind;
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                
                typedef enum WiFiWpsConfigurationStatus : int WiFiWpsConfigurationStatus;
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                
                typedef enum WiFiWpsKind : int WiFiWpsKind;
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */











namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                class WiFiNetworkReport;
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */











/*
 *
 * Struct Windows.Devices.WiFi.WiFiAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [v1_enum, contract] */
                enum WiFiAccessStatus : int
                {
                    WiFiAccessStatus_Unspecified = 0,
                    WiFiAccessStatus_Allowed = 1,
                    WiFiAccessStatus_DeniedByUser = 2,
                    WiFiAccessStatus_DeniedBySystem = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiConnectionMethod
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [v1_enum, contract] */
                enum WiFiConnectionMethod : int
                {
                    WiFiConnectionMethod_Default = 0,
                    WiFiConnectionMethod_WpsPin = 1,
                    WiFiConnectionMethod_WpsPushButton = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [v1_enum, contract] */
                enum WiFiConnectionStatus : int
                {
                    WiFiConnectionStatus_UnspecifiedFailure = 0,
                    WiFiConnectionStatus_Success = 1,
                    WiFiConnectionStatus_AccessRevoked = 2,
                    WiFiConnectionStatus_InvalidCredential = 3,
                    WiFiConnectionStatus_NetworkNotAvailable = 4,
                    WiFiConnectionStatus_Timeout = 5,
                    WiFiConnectionStatus_UnsupportedAuthenticationProtocol = 6,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiNetworkKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [v1_enum, contract] */
                enum WiFiNetworkKind : int
                {
                    WiFiNetworkKind_Any = 0,
                    WiFiNetworkKind_Infrastructure = 1,
                    WiFiNetworkKind_Adhoc = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiPhyKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [v1_enum, contract] */
                enum WiFiPhyKind : int
                {
                    WiFiPhyKind_Unknown = 0,
                    WiFiPhyKind_Fhss = 1,
                    WiFiPhyKind_Dsss = 2,
                    WiFiPhyKind_IRBaseband = 3,
                    WiFiPhyKind_Ofdm = 4,
                    WiFiPhyKind_Hrdsss = 5,
                    WiFiPhyKind_Erp = 6,
                    WiFiPhyKind_HT = 7,
                    WiFiPhyKind_Vht = 8,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    WiFiPhyKind_Dmg = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiReconnectionKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [v1_enum, contract] */
                enum WiFiReconnectionKind : int
                {
                    WiFiReconnectionKind_Automatic = 0,
                    WiFiReconnectionKind_Manual = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiWpsConfigurationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [v1_enum, contract] */
                enum WiFiWpsConfigurationStatus : int
                {
                    WiFiWpsConfigurationStatus_UnspecifiedFailure = 0,
                    WiFiWpsConfigurationStatus_Success = 1,
                    WiFiWpsConfigurationStatus_Timeout = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiWpsKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [v1_enum, contract] */
                enum WiFiWpsKind : int
                {
                    WiFiWpsKind_Unknown = 0,
                    WiFiWpsKind_Pin = 1,
                    WiFiWpsKind_PushButton = 2,
                    WiFiWpsKind_Nfc = 3,
                    WiFiWpsKind_Ethernet = 4,
                    WiFiWpsKind_Usb = 5,
                };
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAdapter[] = L"Windows.Devices.WiFi.IWiFiAdapter";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [object, uuid("A6C4E423-3D75-43A4-B9DE-11E26B72D9B0"), exclusiveto, contract] */
                MIDL_INTERFACE("A6C4E423-3D75-43A4-B9DE-11E26B72D9B0")
                IWiFiAdapter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkAdapter(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::INetworkAdapter * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ScanAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkReport(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::WiFi::IWiFiNetworkReport * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AvailableNetworksChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * args,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AvailableNetworksChanged(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConnectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork * availableNetwork,
                        /* [in] */ABI::Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConnectWithPasswordCredentialAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork * availableNetwork,
                        /* [in] */ABI::Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * passwordCredential,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConnectWithPasswordCredentialAndSsidAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork * availableNetwork,
                        /* [in] */ABI::Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * passwordCredential,
                        /* [in] */__RPC__in HSTRING ssid,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Disconnect(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiAdapter=_uuidof(IWiFiAdapter);
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiAdapter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAdapter2[] = L"Windows.Devices.WiFi.IWiFiAdapter2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [object, uuid("5BC4501D-81E4-453D-9430-1FCAFBADD6B6"), exclusiveto, contract] */
                MIDL_INTERFACE("5BC4501D-81E4-453D-9430-1FCAFBADD6B6")
                IWiFiAdapter2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetWpsConfigurationAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork * availableNetwork,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::WiFi::IWiFiAvailableNetwork * availableNetwork,
                        /* [in] */ABI::Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * passwordCredential,
                        /* [in] */__RPC__in HSTRING ssid,
                        /* [in] */ABI::Windows::Devices::WiFi::WiFiConnectionMethod connectionMethod,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiAdapter2=_uuidof(IWiFiAdapter2);
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiAdapterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAdapterStatics[] = L"Windows.Devices.WiFi.IWiFiAdapterStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [object, uuid("DA25FDDD-D24C-43E3-AABD-C4659F730F99"), exclusiveto, contract] */
                MIDL_INTERFACE("DA25FDDD-D24C-43E3-AABD-C4659F730F99")
                IWiFiAdapterStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FindAllAdaptersAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * * asyncOp
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiAdapterStatics=_uuidof(IWiFiAdapterStatics);
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiAvailableNetwork
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiAvailableNetwork
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAvailableNetwork[] = L"Windows.Devices.WiFi.IWiFiAvailableNetwork";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [object, uuid("26E96246-183E-4704-9826-71B4A2F0F668"), exclusiveto, contract] */
                MIDL_INTERFACE("26E96246-183E-4704-9826-71B4A2F0F668")
                IWiFiAvailableNetwork : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uptime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ssid(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bssid(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChannelCenterFrequencyInKilohertz(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkRssiInDecibelMilliwatts(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SignalBars(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkKind(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::WiFi::WiFiNetworkKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhyKind(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::WiFi::WiFiPhyKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecuritySettings(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::INetworkSecuritySettings * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BeaconInterval(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsWiFiDirect(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiAvailableNetwork=_uuidof(IWiFiAvailableNetwork);
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiConnectionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiConnectionResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiConnectionResult[] = L"Windows.Devices.WiFi.IWiFiConnectionResult";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [object, uuid("143BDFD9-C37D-40BE-A5C8-857BCE85A931"), exclusiveto, contract] */
                MIDL_INTERFACE("143BDFD9-C37D-40BE-A5C8-857BCE85A931")
                IWiFiConnectionResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::WiFi::WiFiConnectionStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiConnectionResult=_uuidof(IWiFiConnectionResult);
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiNetworkReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiNetworkReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiNetworkReport[] = L"Windows.Devices.WiFi.IWiFiNetworkReport";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [object, uuid("9524DED2-5911-445E-8194-BE4F1A704895"), exclusiveto, contract] */
                MIDL_INTERFACE("9524DED2-5911-445E-8194-BE4F1A704895")
                IWiFiNetworkReport : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AvailableNetworks(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiNetworkReport=_uuidof(IWiFiNetworkReport);
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiWpsConfigurationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiWpsConfigurationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiWpsConfigurationResult[] = L"Windows.Devices.WiFi.IWiFiWpsConfigurationResult";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace WiFi {
                /* [object, uuid("67B49871-17EE-42D1-B14F-5A11F1226FB5"), exclusiveto, contract] */
                MIDL_INTERFACE("67B49871-17EE-42D1-B14F-5A11F1226FB5")
                IWiFiWpsConfigurationResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::WiFi::WiFiWpsConfigurationStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedWpsKinds(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWiFiWpsConfigurationResult=_uuidof(IWiFiWpsConfigurationResult);
                
            } /* Windows */
        } /* Devices */
    } /* WiFi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Devices.WiFi.WiFiAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.WiFi.IWiFiAdapterStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFi.IWiFiAdapter ** Default Interface **
 *    Windows.Devices.WiFi.IWiFiAdapter2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFi_WiFiAdapter_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFi_WiFiAdapter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiAdapter[] = L"Windows.Devices.WiFi.WiFiAdapter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFi.WiFiAvailableNetwork
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFi.IWiFiAvailableNetwork ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFi_WiFiAvailableNetwork_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFi_WiFiAvailableNetwork_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiAvailableNetwork[] = L"Windows.Devices.WiFi.WiFiAvailableNetwork";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFi.WiFiConnectionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFi.IWiFiConnectionResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFi_WiFiConnectionResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFi_WiFiConnectionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiConnectionResult[] = L"Windows.Devices.WiFi.WiFiConnectionResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFi.WiFiNetworkReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFi.IWiFiNetworkReport ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFi_WiFiNetworkReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFi_WiFiNetworkReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiNetworkReport[] = L"Windows.Devices.WiFi.WiFiNetworkReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFi.WiFiWpsConfigurationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFi.IWiFiWpsConfigurationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Devices_WiFi_WiFiWpsConfigurationResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFi_WiFiWpsConfigurationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiWpsConfigurationResult[] = L"Windows.Devices.WiFi.WiFiWpsConfigurationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter;

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2;

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics;

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork;

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult;

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport;

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult;

#endif // ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter;

typedef struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;

interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter;

typedef  struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;

interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;

typedef struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl;

interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;

typedef  struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl;

interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind;
#if !defined(____FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind;

typedef struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl;

interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind;

typedef  struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl;

interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;

typedef struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;

interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;

typedef struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl;

interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind;

typedef struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
            /* [in] */ enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl;

interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiAccessStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiAccessStatus __x_ABI_CWindows_CDevices_CWiFi_CWiFiAccessStatus;


typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionMethod __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionMethod;


typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionStatus __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionStatus;


typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiNetworkKind __x_ABI_CWindows_CDevices_CWiFi_CWiFiNetworkKind;


typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiPhyKind __x_ABI_CWindows_CDevices_CWiFi_CWiFiPhyKind;


typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind __x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind;


typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsConfigurationStatus __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsConfigurationStatus;


typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind;





















/*
 *
 * Struct Windows.Devices.WiFi.WiFiAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiAccessStatus
{
    WiFiAccessStatus_Unspecified = 0,
    WiFiAccessStatus_Allowed = 1,
    WiFiAccessStatus_DeniedByUser = 2,
    WiFiAccessStatus_DeniedBySystem = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiConnectionMethod
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionMethod
{
    WiFiConnectionMethod_Default = 0,
    WiFiConnectionMethod_WpsPin = 1,
    WiFiConnectionMethod_WpsPushButton = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionStatus
{
    WiFiConnectionStatus_UnspecifiedFailure = 0,
    WiFiConnectionStatus_Success = 1,
    WiFiConnectionStatus_AccessRevoked = 2,
    WiFiConnectionStatus_InvalidCredential = 3,
    WiFiConnectionStatus_NetworkNotAvailable = 4,
    WiFiConnectionStatus_Timeout = 5,
    WiFiConnectionStatus_UnsupportedAuthenticationProtocol = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiNetworkKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiNetworkKind
{
    WiFiNetworkKind_Any = 0,
    WiFiNetworkKind_Infrastructure = 1,
    WiFiNetworkKind_Adhoc = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiPhyKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiPhyKind
{
    WiFiPhyKind_Unknown = 0,
    WiFiPhyKind_Fhss = 1,
    WiFiPhyKind_Dsss = 2,
    WiFiPhyKind_IRBaseband = 3,
    WiFiPhyKind_Ofdm = 4,
    WiFiPhyKind_Hrdsss = 5,
    WiFiPhyKind_Erp = 6,
    WiFiPhyKind_HT = 7,
    WiFiPhyKind_Vht = 8,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    WiFiPhyKind_Dmg = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiReconnectionKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind
{
    WiFiReconnectionKind_Automatic = 0,
    WiFiReconnectionKind_Manual = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiWpsConfigurationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsConfigurationStatus
{
    WiFiWpsConfigurationStatus_UnspecifiedFailure = 0,
    WiFiWpsConfigurationStatus_Success = 1,
    WiFiWpsConfigurationStatus_Timeout = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Devices.WiFi.WiFiWpsKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind
{
    WiFiWpsKind_Unknown = 0,
    WiFiWpsKind_Pin = 1,
    WiFiWpsKind_PushButton = 2,
    WiFiWpsKind_Nfc = 3,
    WiFiWpsKind_Ethernet = 4,
    WiFiWpsKind_Usb = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAdapter[] = L"Windows.Devices.WiFi.IWiFiAdapter";
/* [object, uuid("A6C4E423-3D75-43A4-B9DE-11E26B72D9B0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapter )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ScanAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkReport )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AvailableNetworksChanged )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * args,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AvailableNetworksChanged )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * availableNetwork,
        /* [in] */__x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind reconnectionKind,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ConnectWithPasswordCredentialAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * availableNetwork,
        /* [in] */__x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind reconnectionKind,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ConnectWithPasswordCredentialAndSsidAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * availableNetwork,
        /* [in] */__x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind reconnectionKind,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
        /* [in] */__RPC__in HSTRING ssid,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Disconnect )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterVtbl;

interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_get_NetworkAdapter(This,value) \
    ( (This)->lpVtbl->get_NetworkAdapter(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_ScanAsync(This,value) \
    ( (This)->lpVtbl->ScanAsync(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_get_NetworkReport(This,value) \
    ( (This)->lpVtbl->get_NetworkReport(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_add_AvailableNetworksChanged(This,args,eventCookie) \
    ( (This)->lpVtbl->add_AvailableNetworksChanged(This,args,eventCookie) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_remove_AvailableNetworksChanged(This,eventCookie) \
    ( (This)->lpVtbl->remove_AvailableNetworksChanged(This,eventCookie) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_ConnectAsync(This,availableNetwork,reconnectionKind,value) \
    ( (This)->lpVtbl->ConnectAsync(This,availableNetwork,reconnectionKind,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_ConnectWithPasswordCredentialAsync(This,availableNetwork,reconnectionKind,passwordCredential,value) \
    ( (This)->lpVtbl->ConnectWithPasswordCredentialAsync(This,availableNetwork,reconnectionKind,passwordCredential,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_ConnectWithPasswordCredentialAndSsidAsync(This,availableNetwork,reconnectionKind,passwordCredential,ssid,value) \
    ( (This)->lpVtbl->ConnectWithPasswordCredentialAndSsidAsync(This,availableNetwork,reconnectionKind,passwordCredential,ssid,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_Disconnect(This) \
    ( (This)->lpVtbl->Disconnect(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiAdapter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAdapter2[] = L"Windows.Devices.WiFi.IWiFiAdapter2";
/* [object, uuid("5BC4501D-81E4-453D-9430-1FCAFBADD6B6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetWpsConfigurationAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * availableNetwork,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * availableNetwork,
        /* [in] */__x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind reconnectionKind,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
        /* [in] */__RPC__in HSTRING ssid,
        /* [in] */__x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionMethod connectionMethod,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2Vtbl;

interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_GetWpsConfigurationAsync(This,availableNetwork,operation) \
    ( (This)->lpVtbl->GetWpsConfigurationAsync(This,availableNetwork,operation) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync(This,availableNetwork,reconnectionKind,passwordCredential,ssid,connectionMethod,operation) \
    ( (This)->lpVtbl->ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync(This,availableNetwork,reconnectionKind,passwordCredential,ssid,connectionMethod,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiAdapterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAdapterStatics[] = L"Windows.Devices.WiFi.IWiFiAdapterStatics";
/* [object, uuid("DA25FDDD-D24C-43E3-AABD-C4659F730F99"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindAllAdaptersAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceSelector
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * * asyncOp
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_FindAllAdaptersAsync(This,value) \
    ( (This)->lpVtbl->FindAllAdaptersAsync(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_GetDeviceSelector(This,deviceSelector) \
    ( (This)->lpVtbl->GetDeviceSelector(This,deviceSelector) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_FromIdAsync(This,deviceId,asyncOp) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,asyncOp) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_RequestAccessAsync(This,value) \
    ( (This)->lpVtbl->RequestAccessAsync(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiAvailableNetwork
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiAvailableNetwork
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAvailableNetwork[] = L"Windows.Devices.WiFi.IWiFiAvailableNetwork";
/* [object, uuid("26E96246-183E-4704-9826-71B4A2F0F668"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetworkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uptime )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ssid )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bssid )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChannelCenterFrequencyInKilohertz )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkRssiInDecibelMilliwatts )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SignalBars )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkKind )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CWiFi_CWiFiNetworkKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhyKind )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CWiFi_CWiFiPhyKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecuritySettings )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BeaconInterval )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsWiFiDirect )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetworkVtbl;

interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetworkVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_Uptime(This,value) \
    ( (This)->lpVtbl->get_Uptime(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_Ssid(This,value) \
    ( (This)->lpVtbl->get_Ssid(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_Bssid(This,value) \
    ( (This)->lpVtbl->get_Bssid(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_ChannelCenterFrequencyInKilohertz(This,value) \
    ( (This)->lpVtbl->get_ChannelCenterFrequencyInKilohertz(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_NetworkRssiInDecibelMilliwatts(This,value) \
    ( (This)->lpVtbl->get_NetworkRssiInDecibelMilliwatts(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_SignalBars(This,value) \
    ( (This)->lpVtbl->get_SignalBars(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_NetworkKind(This,value) \
    ( (This)->lpVtbl->get_NetworkKind(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_PhyKind(This,value) \
    ( (This)->lpVtbl->get_PhyKind(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_SecuritySettings(This,value) \
    ( (This)->lpVtbl->get_SecuritySettings(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_BeaconInterval(This,value) \
    ( (This)->lpVtbl->get_BeaconInterval(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_get_IsWiFiDirect(This,value) \
    ( (This)->lpVtbl->get_IsWiFiDirect(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiConnectionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiConnectionResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiConnectionResult[] = L"Windows.Devices.WiFi.IWiFiConnectionResult";
/* [object, uuid("143BDFD9-C37D-40BE-A5C8-857BCE85A931"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResultVtbl;

interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_get_ConnectionStatus(This,value) \
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiNetworkReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiNetworkReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiNetworkReport[] = L"Windows.Devices.WiFi.IWiFiNetworkReport";
/* [object, uuid("9524DED2-5911-445E-8194-BE4F1A704895"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AvailableNetworks )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReportVtbl;

interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_get_AvailableNetworks(This,value) \
    ( (This)->lpVtbl->get_AvailableNetworks(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.WiFi.IWiFiWpsConfigurationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.WiFi.WiFiWpsConfigurationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiWpsConfigurationResult[] = L"Windows.Devices.WiFi.IWiFiWpsConfigurationResult";
/* [object, uuid("67B49871-17EE-42D1-B14F-5A11F1226FB5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsConfigurationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedWpsKinds )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResultVtbl;

interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_get_SupportedWpsKinds(This,value) \
    ( (This)->lpVtbl->get_SupportedWpsKinds(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult;
#endif /* !defined(____x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Devices.WiFi.WiFiAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.WiFi.IWiFiAdapterStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFi.IWiFiAdapter ** Default Interface **
 *    Windows.Devices.WiFi.IWiFiAdapter2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFi_WiFiAdapter_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFi_WiFiAdapter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiAdapter[] = L"Windows.Devices.WiFi.WiFiAdapter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFi.WiFiAvailableNetwork
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFi.IWiFiAvailableNetwork ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFi_WiFiAvailableNetwork_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFi_WiFiAvailableNetwork_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiAvailableNetwork[] = L"Windows.Devices.WiFi.WiFiAvailableNetwork";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFi.WiFiConnectionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFi.IWiFiConnectionResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFi_WiFiConnectionResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFi_WiFiConnectionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiConnectionResult[] = L"Windows.Devices.WiFi.WiFiConnectionResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFi.WiFiNetworkReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFi.IWiFiNetworkReport ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_WiFi_WiFiNetworkReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFi_WiFiNetworkReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiNetworkReport[] = L"Windows.Devices.WiFi.WiFiNetworkReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.WiFi.WiFiWpsConfigurationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.WiFi.IWiFiWpsConfigurationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Devices_WiFi_WiFiWpsConfigurationResult_DEFINED
#define RUNTIMECLASS_Windows_Devices_WiFi_WiFiWpsConfigurationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiWpsConfigurationResult[] = L"Windows.Devices.WiFi.WiFiWpsConfigurationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Ewifi_p_h__

#endif // __windows2Edevices2Ewifi_h__
