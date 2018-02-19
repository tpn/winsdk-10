/* Header file automatically generated from windows.networking.servicediscovery.dnssd.idl */
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
#ifndef __windows2Enetworking2Eservicediscovery2Ednssd_h__
#define __windows2Enetworking2Eservicediscovery2Ednssd_h__
#ifndef __windows2Enetworking2Eservicediscovery2Ednssd_p_h__
#define __windows2Enetworking2Eservicediscovery2Ednssd_p_h__


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
#include "Windows.Networking.h"
#include "Windows.Networking.Connectivity.h"
#include "Windows.Networking.Sockets.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    interface IDnssdRegistrationResult;
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult

#endif // ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    interface IDnssdServiceInstance;
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance

#endif // ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    interface IDnssdServiceInstanceFactory;
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory

#endif // ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    interface IDnssdServiceWatcher;
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher

#endif // ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    class DnssdServiceInstance;
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE
#define DEF___FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bc0cca83-44e5-5544-ab5b-e09d66f5fd5f"))
IIterator<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*, ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*> __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t;
#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>
//#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE
#define DEF___FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1de3a3e5-387e-5328-b864-3f0e3475d343"))
IIterable<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*, ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*> __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t;
#define __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>
//#define __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f75ff82a-7e10-5cf6-8064-6ae585e0bd8d"))
IVectorView<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*, ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*> __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t;
#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>
//#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    class DnssdRegistrationResult;
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f3632f52-894a-5345-9be6-8389751c5189"))
IAsyncOperationCompletedHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult*, ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0c251e73-52c9-5026-a875-f685a50cbffd"))
IAsyncOperation<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult*, ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult*> __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult*>
//#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    class DnssdServiceWatcher;
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6a6cc5d5-9f43-545a-91d7-3a40055475da"))
ITypedEventHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher*, ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher*,IInspectable*> __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e617711e-cdd5-5975-8fb3-8eaaaed24e7b"))
ITypedEventHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher*,ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher*, ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*, ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher, Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher*,ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance*> __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher*,ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher*,ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING,HSTRING> : IMapView_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
//#define __FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMap_2_HSTRING_HSTRING_USE
#define DEF___FIMap_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f6d1f700-49c2-52ae-8154-826f9908773c"))
IMap<HSTRING,HSTRING> : IMap_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,HSTRING> __FIMap_2_HSTRING_HSTRING_t;
#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
//#define __FIMap_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_HSTRING_USE */





#ifndef ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IStringable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIStringable ABI::Windows::Foundation::IStringable

#endif // ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__





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
            class HostName;
        } /* Windows */
    } /* Networking */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IHostName;
        } /* Windows */
    } /* Networking */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CIHostName ABI::Windows::Networking::IHostName

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class DatagramSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IDatagramSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket ABI::Windows::Networking::Sockets::IDatagramSocket

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamSocketListener;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketListener;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener ABI::Windows::Networking::Sockets::IStreamSocketListener

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    
                    typedef enum DnssdRegistrationStatus : int DnssdRegistrationStatus;
                    
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    
                    typedef enum DnssdServiceWatcherStatus : int DnssdServiceWatcherStatus;
                    
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    class DnssdServiceInstanceCollection;
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */













/*
 *
 * Struct Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    /* [v1_enum, contract] */
                    enum DnssdRegistrationStatus : int
                    {
                        DnssdRegistrationStatus_Success = 0,
                        DnssdRegistrationStatus_InvalidServiceName = 1,
                        DnssdRegistrationStatus_ServerError = 2,
                        DnssdRegistrationStatus_SecurityError = 3,
                    };
                    
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    /* [v1_enum, contract] */
                    enum DnssdServiceWatcherStatus : int
                    {
                        DnssdServiceWatcherStatus_Created = 0,
                        DnssdServiceWatcherStatus_Started = 1,
                        DnssdServiceWatcherStatus_EnumerationCompleted = 2,
                        DnssdServiceWatcherStatus_Stopping = 3,
                        DnssdServiceWatcherStatus_Stopped = 4,
                        DnssdServiceWatcherStatus_Aborted = 5,
                    };
                    
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.ServiceDiscovery.Dnssd.IDnssdRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdRegistrationResult";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    /* [object, uuid("3D786AD2-E606-5350-73EA-7E97F066162F"), exclusiveto, contract] */
                    MIDL_INTERFACE("3D786AD2-E606-5350-73EA-7E97F066162F")
                    IDnssdRegistrationResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IPAddress(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasInstanceNameChanged(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDnssdRegistrationResult=_uuidof(IDnssdRegistrationResult);
                    
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstance";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    /* [object, uuid("E246DB7E-98A5-4CA1-B9E4-C253D33C35FF"), exclusiveto, contract] */
                    MIDL_INTERFACE("E246DB7E-98A5-4CA1-B9E4-C253D33C35FF")
                    IDnssdServiceInstance : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DnssdServiceInstanceName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DnssdServiceInstanceName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HostName(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HostName(
                            /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Port(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Port(
                            /* [in] */UINT16 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Priority(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Priority(
                            /* [in] */UINT16 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Weight(
                            /* [retval, out] */__RPC__out UINT16 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Weight(
                            /* [in] */UINT16 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextAttributes(
                            /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterStreamSocketListenerAsync1(
                            /* [in] */__RPC__in_opt ABI::Windows::Networking::Sockets::IStreamSocketListener * socket,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterStreamSocketListenerAsync2(
                            /* [in] */__RPC__in_opt ABI::Windows::Networking::Sockets::IStreamSocketListener * socket,
                            /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::INetworkAdapter * adapter,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterDatagramSocketAsync1(
                            /* [in] */__RPC__in_opt ABI::Windows::Networking::Sockets::IDatagramSocket * socket,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterDatagramSocketAsync2(
                            /* [in] */__RPC__in_opt ABI::Windows::Networking::Sockets::IDatagramSocket * socket,
                            /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::INetworkAdapter * adapter,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDnssdServiceInstance=_uuidof(IDnssdServiceInstance);
                    
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstanceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstanceFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    /* [object, uuid("6CB061A1-C478-4331-9684-4AF2186C0A2B"), exclusiveto, contract] */
                    MIDL_INTERFACE("6CB061A1-C478-4331-9684-4AF2186C0A2B")
                    IDnssdServiceInstanceFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in HSTRING dnssdServiceInstanceName,
                            /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * hostName,
                            /* [in] */UINT16 port,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDnssdServiceInstanceFactory=_uuidof(IDnssdServiceInstanceFactory);
                    
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceWatcher";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace ServiceDiscovery {
                namespace Dnssd {
                    /* [object, uuid("CC34D9C1-DB7D-4B69-983D-C6F83F205682"), exclusiveto, contract] */
                    MIDL_INTERFACE("CC34D9C1-DB7D-4B69-983D-C6F83F205682")
                    IDnssdServiceWatcher : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Added(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Added(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EnumerationCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EnumerationCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Stopped(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Stopped(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus * status
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDnssdServiceWatcher=_uuidof(IDnssdServiceWatcher);
                    
                } /* Windows */
            } /* Networking */
        } /* ServiceDiscovery */
    } /* Dnssd */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.ServiceDiscovery.Dnssd.IDnssdRegistrationResult ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdRegistrationResult_DEFINED
#define RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdRegistrationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdRegistrationResult[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstanceFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstance ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstance_DEFINED
#define RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstance_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstance[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstanceCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstanceCollection_DEFINED
#define RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstanceCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstanceCollection[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstanceCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceWatcher ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceWatcher_DEFINED
#define RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceWatcher[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult;

#endif // ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance;

#endif // ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory;

#endif // ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher;

#endif // ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;

typedef struct __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl;

interface __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;

typedef  struct __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl;

interface __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;

typedef struct __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl;

interface __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_HSTRING_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;

typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt HSTRING *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;

interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_HSTRING_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_HSTRING_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;

#endif // ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdRegistrationStatus __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdRegistrationStatus;


typedef enum __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdServiceWatcherStatus __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdServiceWatcherStatus;



















/*
 *
 * Struct Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdRegistrationStatus
{
    DnssdRegistrationStatus_Success = 0,
    DnssdRegistrationStatus_InvalidServiceName = 1,
    DnssdRegistrationStatus_ServerError = 2,
    DnssdRegistrationStatus_SecurityError = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdServiceWatcherStatus
{
    DnssdServiceWatcherStatus_Created = 0,
    DnssdServiceWatcherStatus_Started = 1,
    DnssdServiceWatcherStatus_EnumerationCompleted = 2,
    DnssdServiceWatcherStatus_Stopping = 3,
    DnssdServiceWatcherStatus_Stopped = 4,
    DnssdServiceWatcherStatus_Aborted = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.ServiceDiscovery.Dnssd.IDnssdRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdRegistrationResult";
/* [object, uuid("3D786AD2-E606-5350-73EA-7E97F066162F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdRegistrationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IPAddress )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasInstanceNameChanged )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResultVtbl;

interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_get_IPAddress(This,value) \
    ( (This)->lpVtbl->get_IPAddress(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_get_HasInstanceNameChanged(This,value) \
    ( (This)->lpVtbl->get_HasInstanceNameChanged(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstance";
/* [object, uuid("E246DB7E-98A5-4CA1-B9E4-C253D33C35FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DnssdServiceInstanceName )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DnssdServiceInstanceName )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HostName )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HostName )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Port )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Port )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [in] */UINT16 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Priority )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Priority )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [in] */UINT16 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Weight )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Weight )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [in] */UINT16 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextAttributes )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterStreamSocketListenerAsync1 )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * socket,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterStreamSocketListenerAsync2 )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * socket,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterDatagramSocketAsync1 )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * socket,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterDatagramSocketAsync2 )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * socket,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceVtbl;

interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_get_DnssdServiceInstanceName(This,value) \
    ( (This)->lpVtbl->get_DnssdServiceInstanceName(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_put_DnssdServiceInstanceName(This,value) \
    ( (This)->lpVtbl->put_DnssdServiceInstanceName(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_get_HostName(This,value) \
    ( (This)->lpVtbl->get_HostName(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_put_HostName(This,value) \
    ( (This)->lpVtbl->put_HostName(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_get_Port(This,value) \
    ( (This)->lpVtbl->get_Port(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_put_Port(This,value) \
    ( (This)->lpVtbl->put_Port(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_get_Priority(This,value) \
    ( (This)->lpVtbl->get_Priority(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_put_Priority(This,value) \
    ( (This)->lpVtbl->put_Priority(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_get_Weight(This,value) \
    ( (This)->lpVtbl->get_Weight(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_put_Weight(This,value) \
    ( (This)->lpVtbl->put_Weight(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_get_TextAttributes(This,value) \
    ( (This)->lpVtbl->get_TextAttributes(This,value) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_RegisterStreamSocketListenerAsync1(This,socket,result) \
    ( (This)->lpVtbl->RegisterStreamSocketListenerAsync1(This,socket,result) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_RegisterStreamSocketListenerAsync2(This,socket,adapter,result) \
    ( (This)->lpVtbl->RegisterStreamSocketListenerAsync2(This,socket,adapter,result) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_RegisterDatagramSocketAsync1(This,socket,result) \
    ( (This)->lpVtbl->RegisterDatagramSocketAsync1(This,socket,result) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_RegisterDatagramSocketAsync2(This,socket,adapter,result) \
    ( (This)->lpVtbl->RegisterDatagramSocketAsync2(This,socket,adapter,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstanceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstanceFactory";
/* [object, uuid("6CB061A1-C478-4331-9684-4AF2186C0A2B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This,
        /* [in] */__RPC__in HSTRING dnssdServiceInstanceName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * hostName,
        /* [in] */UINT16 port,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_Create(This,dnssdServiceInstanceName,hostName,port,result) \
    ( (This)->lpVtbl->Create(This,dnssdServiceInstanceName,hostName,port,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceWatcher";
/* [object, uuid("CC34D9C1-DB7D-4B69-983D-C6F83F205682"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdServiceWatcherStatus * status
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcherVtbl;

interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_add_Added(This,handler,token) \
    ( (This)->lpVtbl->add_Added(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_remove_Added(This,token) \
    ( (This)->lpVtbl->remove_Added(This,token) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_add_EnumerationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_remove_EnumerationCompleted(This,token) \
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_add_Stopped(This,handler,token) \
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_remove_Stopped(This,token) \
    ( (This)->lpVtbl->remove_Stopped(This,token) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_get_Status(This,status) \
    ( (This)->lpVtbl->get_Status(This,status) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.ServiceDiscovery.Dnssd.IDnssdRegistrationResult ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdRegistrationResult_DEFINED
#define RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdRegistrationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdRegistrationResult[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstanceFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstance ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstance_DEFINED
#define RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstance_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstance[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstanceCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstanceCollection_DEFINED
#define RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstanceCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstanceCollection[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstanceCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceWatcher ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceWatcher_DEFINED
#define RUNTIMECLASS_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceWatcher[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Enetworking2Eservicediscovery2Ednssd_p_h__

#endif // __windows2Enetworking2Eservicediscovery2Ednssd_h__
