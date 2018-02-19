/* Header file automatically generated from windows.networking.idl */
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
#ifndef __windows2Enetworking_h__
#define __windows2Enetworking_h__
#ifndef __windows2Enetworking_p_h__
#define __windows2Enetworking_p_h__


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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IEndpointPair;
        } /* Windows */
    } /* Networking */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CIEndpointPair ABI::Windows::Networking::IEndpointPair

#endif // ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IEndpointPairFactory;
        } /* Windows */
    } /* Networking */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CIEndpointPairFactory ABI::Windows::Networking::IEndpointPairFactory

#endif // ____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CNetworking_CIHostNameFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostNameFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IHostNameFactory;
        } /* Windows */
    } /* Networking */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CIHostNameFactory ABI::Windows::Networking::IHostNameFactory

#endif // ____x_ABI_CWindows_CNetworking_CIHostNameFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CIHostNameStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostNameStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IHostNameStatics;
        } /* Windows */
    } /* Networking */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CIHostNameStatics ABI::Windows::Networking::IHostNameStatics

#endif // ____x_ABI_CWindows_CNetworking_CIHostNameStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Networking {
            class EndpointPair;
        } /* Windows */
    } /* Networking */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CEndpointPair_USE
#define DEF___FIIterator_1_Windows__CNetworking__CEndpointPair_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c899ff9f-e6f5-5673-810c-04e2ff98704f"))
IIterator<ABI::Windows::Networking::EndpointPair*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::EndpointPair*, ABI::Windows::Networking::IEndpointPair*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.EndpointPair>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::EndpointPair*> __FIIterator_1_Windows__CNetworking__CEndpointPair_t;
#define __FIIterator_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CEndpointPair_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::IEndpointPair*>
//#define __FIIterator_1_Windows__CNetworking__CEndpointPair_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::IEndpointPair*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CEndpointPair_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CEndpointPair_USE
#define DEF___FIIterable_1_Windows__CNetworking__CEndpointPair_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7ec83c4-a17b-51bf-8997-aa33b9102dc9"))
IIterable<ABI::Windows::Networking::EndpointPair*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::EndpointPair*, ABI::Windows::Networking::IEndpointPair*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.EndpointPair>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::EndpointPair*> __FIIterable_1_Windows__CNetworking__CEndpointPair_t;
#define __FIIterable_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CEndpointPair_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::IEndpointPair*>
//#define __FIIterable_1_Windows__CNetworking__CEndpointPair_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::IEndpointPair*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CEndpointPair_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            class HostName;
        } /* Windows */
    } /* Networking */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CHostName_USE
#define DEF___FIIterator_1_Windows__CNetworking__CHostName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("557bf83c-a428-5dbd-a0fe-05f6ee543d45"))
IIterator<ABI::Windows::Networking::HostName*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::HostName*, ABI::Windows::Networking::IHostName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.HostName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::HostName*> __FIIterator_1_Windows__CNetworking__CHostName_t;
#define __FIIterator_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CHostName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::IHostName*>
//#define __FIIterator_1_Windows__CNetworking__CHostName_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::IHostName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CHostName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CHostName_USE
#define DEF___FIIterable_1_Windows__CNetworking__CHostName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9e5f3ed0-cf1c-5d38-832c-acea6164bf5c"))
IIterable<ABI::Windows::Networking::HostName*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::HostName*, ABI::Windows::Networking::IHostName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.HostName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::HostName*> __FIIterable_1_Windows__CNetworking__CHostName_t;
#define __FIIterable_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CHostName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::IHostName*>
//#define __FIIterable_1_Windows__CNetworking__CHostName_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::IHostName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CHostName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8780a851-6d48-5006-9288-81f3d7045a96"))
IVectorView<ABI::Windows::Networking::EndpointPair*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::EndpointPair*, ABI::Windows::Networking::IEndpointPair*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.EndpointPair>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::EndpointPair*> __FIVectorView_1_Windows__CNetworking__CEndpointPair_t;
#define __FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CEndpointPair_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>
//#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CHostName_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CHostName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f4706ab1-55a3-5270-afb2-732988fe8227"))
IVectorView<ABI::Windows::Networking::HostName*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::HostName*, ABI::Windows::Networking::IHostName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.HostName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::HostName*> __FIVectorView_1_Windows__CNetworking__CHostName_t;
#define __FIVectorView_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CHostName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IHostName*>
//#define __FIVectorView_1_Windows__CNetworking__CHostName_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IHostName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CHostName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CNetworking__CHostName_USE
#define DEF___FIVector_1_Windows__CNetworking__CHostName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("90c71c29-a9b5-5267-a5ad-8b756736317c"))
IVector<ABI::Windows::Networking::HostName*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::HostName*, ABI::Windows::Networking::IHostName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Networking::HostName*> __FIVector_1_Windows__CNetworking__CHostName_t;
#define __FIVector_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CNetworking__CHostName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::IHostName*>
//#define __FIVector_1_Windows__CNetworking__CHostName_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::IHostName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CNetworking__CHostName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("20d6faab-3b8e-5a1f-8397-b01cb219a18d"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.EndpointPair>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("afc2ff8e-e393-566a-89c4-d043e940050d"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.EndpointPair>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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
                class IPInformation;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IIPInformation;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation ABI::Windows::Networking::Connectivity::IIPInformation

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Networking {
            
            typedef enum DomainNameType : int DomainNameType;
            
        } /* Windows */
    } /* Networking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            
            typedef enum HostNameSortOptions : unsigned int HostNameSortOptions;
            
        } /* Windows */
    } /* Networking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            
            typedef enum HostNameType : int HostNameType;
            
        } /* Windows */
    } /* Networking */} /* ABI */














/*
 *
 * Struct Windows.Networking.DomainNameType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            /* [v1_enum, contract] */
            enum DomainNameType : int
            {
                DomainNameType_Suffix = 0,
                DomainNameType_FullyQualified = 1,
            };
            
        } /* Windows */
    } /* Networking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.HostNameSortOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            /* [v1_enum, flags, contract] */
            enum HostNameSortOptions : unsigned int
            {
                HostNameSortOptions_None = 0,
                HostNameSortOptions_OptimizeForLongConnections = 0x2,
            };
            
            DEFINE_ENUM_FLAG_OPERATORS(HostNameSortOptions)
            
        } /* Windows */
    } /* Networking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.HostNameType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            /* [v1_enum, contract] */
            enum HostNameType : int
            {
                HostNameType_DomainName = 0,
                HostNameType_Ipv4 = 1,
                HostNameType_Ipv6 = 2,
                HostNameType_Bluetooth = 3,
            };
            
        } /* Windows */
    } /* Networking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.IEndpointPair
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.EndpointPair
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CIEndpointPair_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CIEndpointPair_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_IEndpointPair[] = L"Windows.Networking.IEndpointPair";
namespace ABI {
    namespace Windows {
        namespace Networking {
            /* [object, uuid("33A0AA36-F8FA-4B30-B856-76517C3BD06D"), exclusiveto, contract] */
            MIDL_INTERFACE("33A0AA36-F8FA-4B30-B856-76517C3BD06D")
            IEndpointPair : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalHostName(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LocalHostName(
                    /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalServiceName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LocalServiceName(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteHostName(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RemoteHostName(
                    /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteServiceName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RemoteServiceName(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IEndpointPair=_uuidof(IEndpointPair);
            
        } /* Windows */
    } /* Networking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CIEndpointPair;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CIEndpointPair_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.IEndpointPairFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.EndpointPair
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_IEndpointPairFactory[] = L"Windows.Networking.IEndpointPairFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            /* [object, uuid("B609D971-64E0-442B-AA6F-CC8C8F181F78"), exclusiveto, contract] */
            MIDL_INTERFACE("B609D971-64E0-442B-AA6F-CC8C8F181F78")
            IEndpointPairFactory : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE CreateEndpointPair(
                    /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * localHostName,
                    /* [in] */__RPC__in HSTRING localServiceName,
                    /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * remoteHostName,
                    /* [in] */__RPC__in HSTRING remoteServiceName,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IEndpointPair * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IEndpointPairFactory=_uuidof(IEndpointPairFactory);
            
        } /* Windows */
    } /* Networking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CIEndpointPairFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.IHostName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.HostName
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CIHostName_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CIHostName_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_IHostName[] = L"Windows.Networking.IHostName";
namespace ABI {
    namespace Windows {
        namespace Networking {
            /* [object, uuid("BF8ECAAD-ED96-49A7-9084-D416CAE88DCB"), exclusiveto, contract] */
            MIDL_INTERFACE("BF8ECAAD-ED96-49A7-9084-D416CAE88DCB")
            IHostName : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IPInformation(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IIPInformation * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanonicalName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                    /* [retval, out] */__RPC__out ABI::Windows::Networking::HostNameType * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE IsEqual(
                    /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * hostName,
                    /* [retval, out] */__RPC__out boolean * isEqual
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IHostName=_uuidof(IHostName);
            
        } /* Windows */
    } /* Networking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CIHostName;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CIHostName_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.IHostNameFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.HostName
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CIHostNameFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CIHostNameFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_IHostNameFactory[] = L"Windows.Networking.IHostNameFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            /* [object, uuid("458C23ED-712F-4576-ADF1-C20B2C643558"), exclusiveto, contract] */
            MIDL_INTERFACE("458C23ED-712F-4576-ADF1-C20B2C643558")
            IHostNameFactory : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE CreateHostName(
                    /* [in] */__RPC__in HSTRING hostName,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IHostNameFactory=_uuidof(IHostNameFactory);
            
        } /* Windows */
    } /* Networking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CIHostNameFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CIHostNameFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.IHostNameStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.HostName
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CIHostNameStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CIHostNameStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_IHostNameStatics[] = L"Windows.Networking.IHostNameStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            /* [object, uuid("F68CD4BF-A388-4E8B-91EA-54DD6DD901C0"), exclusiveto, contract] */
            MIDL_INTERFACE("F68CD4BF-A388-4E8B-91EA-54DD6DD901C0")
            IHostNameStatics : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE Compare(
                    /* [in] */__RPC__in HSTRING value1,
                    /* [in] */__RPC__in HSTRING value2,
                    /* [retval, out] */__RPC__out INT32 * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IHostNameStatics=_uuidof(IHostNameStatics);
            
        } /* Windows */
    } /* Networking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CIHostNameStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CIHostNameStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.EndpointPair
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.IEndpointPairFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.IEndpointPair ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_EndpointPair_DEFINED
#define RUNTIMECLASS_Windows_Networking_EndpointPair_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_EndpointPair[] = L"Windows.Networking.EndpointPair";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.HostName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.IHostNameFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.IHostNameStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.IHostName ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_HostName_DEFINED
#define RUNTIMECLASS_Windows_Networking_HostName_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_HostName[] = L"Windows.Networking.HostName";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIEndpointPair __x_ABI_CWindows_CNetworking_CIEndpointPair;

#endif // ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIEndpointPairFactory __x_ABI_CWindows_CNetworking_CIEndpointPairFactory;

#endif // ____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CIHostNameFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostNameFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostNameFactory __x_ABI_CWindows_CNetworking_CIHostNameFactory;

#endif // ____x_ABI_CWindows_CNetworking_CIHostNameFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CIHostNameStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostNameStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostNameStatics __x_ABI_CWindows_CNetworking_CIHostNameStatics;

#endif // ____x_ABI_CWindows_CNetworking_CIHostNameStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CEndpointPair __FIIterator_1_Windows__CNetworking__CEndpointPair;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CEndpointPair;

typedef struct __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CIEndpointPair * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIEndpointPair * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl;

interface __FIIterator_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CEndpointPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CEndpointPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CEndpointPair_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CEndpointPair __FIIterable_1_Windows__CNetworking__CEndpointPair;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CEndpointPair;

typedef  struct __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CEndpointPair **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl;

interface __FIIterable_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CEndpointPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CEndpointPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CEndpointPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CEndpointPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CEndpointPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CEndpointPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CEndpointPair_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CHostName __FIIterator_1_Windows__CNetworking__CHostName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CHostName;

typedef struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CHostNameVtbl;

interface __FIIterator_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CHostName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CHostName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CHostName_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CHostName __FIIterable_1_Windows__CNetworking__CHostName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CHostName;

typedef  struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CHostName **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CHostNameVtbl;

interface __FIIterable_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CHostName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CHostName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CHostName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CHostName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CHostName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CHostName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CHostName_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CEndpointPair __FIVectorView_1_Windows__CNetworking__CEndpointPair;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CEndpointPair;

typedef struct __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CIEndpointPair * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CIEndpointPair * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIEndpointPair * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;

interface __FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CHostName __FIVectorView_1_Windows__CNetworking__CHostName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CHostName;

typedef struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CIHostName * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CHostNameVtbl;

interface __FIVectorView_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CHostName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CHostName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CHostName_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CNetworking__CHostName __FIVector_1_Windows__CNetworking__CHostName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CHostName;

typedef struct __FIVector_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, /* [in] */ __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CIHostName * *value);

    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CHostNameVtbl;

interface __FIVector_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CNetworking__CHostName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CNetworking__CHostName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CNetworking__CHostName_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CNetworking__CHostName_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CEndpointPair * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;

#endif // ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CNetworking_CDomainNameType __x_ABI_CWindows_CNetworking_CDomainNameType;


typedef enum __x_ABI_CWindows_CNetworking_CHostNameSortOptions __x_ABI_CWindows_CNetworking_CHostNameSortOptions;


typedef enum __x_ABI_CWindows_CNetworking_CHostNameType __x_ABI_CWindows_CNetworking_CHostNameType;














/*
 *
 * Struct Windows.Networking.DomainNameType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CDomainNameType
{
    DomainNameType_Suffix = 0,
    DomainNameType_FullyQualified = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.HostNameSortOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CNetworking_CHostNameSortOptions
{
    HostNameSortOptions_None = 0,
    HostNameSortOptions_OptimizeForLongConnections = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.HostNameType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CHostNameType
{
    HostNameType_DomainName = 0,
    HostNameType_Ipv4 = 1,
    HostNameType_Ipv6 = 2,
    HostNameType_Bluetooth = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.IEndpointPair
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.EndpointPair
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CIEndpointPair_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CIEndpointPair_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_IEndpointPair[] = L"Windows.Networking.IEndpointPair";
/* [object, uuid("33A0AA36-F8FA-4B30-B856-76517C3BD06D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CIEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPair * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPair * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalHostName )(
        __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LocalHostName )(
        __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalServiceName )(
        __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LocalServiceName )(
        __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteHostName )(
        __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RemoteHostName )(
        __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteServiceName )(
        __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RemoteServiceName )(
        __x_ABI_CWindows_CNetworking_CIEndpointPair * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CIEndpointPairVtbl;

interface __x_ABI_CWindows_CNetworking_CIEndpointPair
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CIEndpointPairVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CIEndpointPair_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_get_LocalHostName(This,value) \
    ( (This)->lpVtbl->get_LocalHostName(This,value) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_put_LocalHostName(This,value) \
    ( (This)->lpVtbl->put_LocalHostName(This,value) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_get_LocalServiceName(This,value) \
    ( (This)->lpVtbl->get_LocalServiceName(This,value) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_put_LocalServiceName(This,value) \
    ( (This)->lpVtbl->put_LocalServiceName(This,value) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_get_RemoteHostName(This,value) \
    ( (This)->lpVtbl->get_RemoteHostName(This,value) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_put_RemoteHostName(This,value) \
    ( (This)->lpVtbl->put_RemoteHostName(This,value) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_get_RemoteServiceName(This,value) \
    ( (This)->lpVtbl->get_RemoteServiceName(This,value) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPair_put_RemoteServiceName(This,value) \
    ( (This)->lpVtbl->put_RemoteServiceName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CIEndpointPair;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CIEndpointPair_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.IEndpointPairFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.EndpointPair
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_IEndpointPairFactory[] = L"Windows.Networking.IEndpointPairFactory";
/* [object, uuid("B609D971-64E0-442B-AA6F-CC8C8F181F78"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CIEndpointPairFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPairFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPairFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPairFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPairFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPairFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIEndpointPairFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateEndpointPair )(
        __x_ABI_CWindows_CNetworking_CIEndpointPairFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * localHostName,
        /* [in] */__RPC__in HSTRING localServiceName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
        /* [in] */__RPC__in HSTRING remoteServiceName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIEndpointPair * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CIEndpointPairFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CIEndpointPairFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CIEndpointPairFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CIEndpointPairFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPairFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPairFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPairFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPairFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPairFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CIEndpointPairFactory_CreateEndpointPair(This,localHostName,localServiceName,remoteHostName,remoteServiceName,value) \
    ( (This)->lpVtbl->CreateEndpointPair(This,localHostName,localServiceName,remoteHostName,remoteServiceName,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CIEndpointPairFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CIEndpointPairFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.IHostName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.HostName
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CIHostName_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CIHostName_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_IHostName[] = L"Windows.Networking.IHostName";
/* [object, uuid("BF8ECAAD-ED96-49A7-9084-D416CAE88DCB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CIHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IPInformation )(
        __x_ABI_CWindows_CNetworking_CIHostName * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawName )(
        __x_ABI_CWindows_CNetworking_CIHostName * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CNetworking_CIHostName * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanonicalName )(
        __x_ABI_CWindows_CNetworking_CIHostName * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CNetworking_CIHostName * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CHostNameType * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsEqual )(
        __x_ABI_CWindows_CNetworking_CIHostName * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * hostName,
        /* [retval, out] */__RPC__out boolean * isEqual
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CIHostNameVtbl;

interface __x_ABI_CWindows_CNetworking_CIHostName
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CIHostNameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CIHostName_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CIHostName_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CIHostName_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CIHostName_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CIHostName_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CIHostName_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CIHostName_get_IPInformation(This,value) \
    ( (This)->lpVtbl->get_IPInformation(This,value) )

#define __x_ABI_CWindows_CNetworking_CIHostName_get_RawName(This,value) \
    ( (This)->lpVtbl->get_RawName(This,value) )

#define __x_ABI_CWindows_CNetworking_CIHostName_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CNetworking_CIHostName_get_CanonicalName(This,value) \
    ( (This)->lpVtbl->get_CanonicalName(This,value) )

#define __x_ABI_CWindows_CNetworking_CIHostName_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CNetworking_CIHostName_IsEqual(This,hostName,isEqual) \
    ( (This)->lpVtbl->IsEqual(This,hostName,isEqual) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CIHostName;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CIHostName_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.IHostNameFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.HostName
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CIHostNameFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CIHostNameFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_IHostNameFactory[] = L"Windows.Networking.IHostNameFactory";
/* [object, uuid("458C23ED-712F-4576-ADF1-C20B2C643558"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CIHostNameFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateHostName )(
        __x_ABI_CWindows_CNetworking_CIHostNameFactory * This,
        /* [in] */__RPC__in HSTRING hostName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CIHostNameFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CIHostNameFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CIHostNameFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_CreateHostName(This,hostName,value) \
    ( (This)->lpVtbl->CreateHostName(This,hostName,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CIHostNameFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CIHostNameFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.IHostNameStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.HostName
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CIHostNameStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CIHostNameStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_IHostNameStatics[] = L"Windows.Networking.IHostNameStatics";
/* [object, uuid("F68CD4BF-A388-4E8B-91EA-54DD6DD901C0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CIHostNameStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CIHostNameStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Compare )(
        __x_ABI_CWindows_CNetworking_CIHostNameStatics * This,
        /* [in] */__RPC__in HSTRING value1,
        /* [in] */__RPC__in HSTRING value2,
        /* [retval, out] */__RPC__out INT32 * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CIHostNameStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CIHostNameStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CIHostNameStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_Compare(This,value1,value2,result) \
    ( (This)->lpVtbl->Compare(This,value1,value2,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CIHostNameStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CIHostNameStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.EndpointPair
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.IEndpointPairFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.IEndpointPair ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_EndpointPair_DEFINED
#define RUNTIMECLASS_Windows_Networking_EndpointPair_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_EndpointPair[] = L"Windows.Networking.EndpointPair";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.HostName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.IHostNameFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.IHostNameStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.IHostName ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_HostName_DEFINED
#define RUNTIMECLASS_Windows_Networking_HostName_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_HostName[] = L"Windows.Networking.HostName";
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
#endif // __windows2Enetworking_p_h__

#endif // __windows2Enetworking_h__
