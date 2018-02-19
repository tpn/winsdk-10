/* Header file automatically generated from windows.web.atompub.idl */
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
#ifndef __windows2Eweb2Eatompub_h__
#define __windows2Eweb2Eatompub_h__
#ifndef __windows2Eweb2Eatompub_p_h__
#define __windows2Eweb2Eatompub_p_h__


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
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.Streams.h"
#include "Windows.Web.Syndication.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                interface IAtomPubClient;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */
#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient ABI::Windows::Web::AtomPub::IAtomPubClient

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                interface IAtomPubClientFactory;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */
#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory ABI::Windows::Web::AtomPub::IAtomPubClientFactory

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                interface IResourceCollection;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */
#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection ABI::Windows::Web::AtomPub::IResourceCollection

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                interface IServiceDocument;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */
#define __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument ABI::Windows::Web::AtomPub::IServiceDocument

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                interface IWorkspace;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */
#define __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace ABI::Windows::Web::AtomPub::IWorkspace

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                class ResourceCollection;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_USE
#define DEF___FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2b175876-0920-52f0-80bf-dfe79744128d"))
IIterator<ABI::Windows::Web::AtomPub::ResourceCollection*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::ResourceCollection*, ABI::Windows::Web::AtomPub::IResourceCollection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.AtomPub.ResourceCollection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::AtomPub::ResourceCollection*> __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_t;
#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::AtomPub::IResourceCollection*>
//#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::AtomPub::IResourceCollection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_USE
#define DEF___FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d4372a2d-7ab0-5d8e-bd5c-6e9c0a67a8d8"))
IIterable<ABI::Windows::Web::AtomPub::ResourceCollection*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::ResourceCollection*, ABI::Windows::Web::AtomPub::IResourceCollection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.AtomPub.ResourceCollection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::AtomPub::ResourceCollection*> __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_t;
#define __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::AtomPub::IResourceCollection*>
//#define __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::AtomPub::IResourceCollection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                class Workspace;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_USE
#define DEF___FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0cc8c426-d68a-5136-9741-de326764ca32"))
IIterator<ABI::Windows::Web::AtomPub::Workspace*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::Workspace*, ABI::Windows::Web::AtomPub::IWorkspace*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.AtomPub.Workspace>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::AtomPub::Workspace*> __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_t;
#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::AtomPub::IWorkspace*>
//#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::AtomPub::IWorkspace*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_USE
#define DEF___FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f02d0ebe-eac2-502f-9836-1c5482333bfe"))
IIterable<ABI::Windows::Web::AtomPub::Workspace*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::Workspace*, ABI::Windows::Web::AtomPub::IWorkspace*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.AtomPub.Workspace>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::AtomPub::Workspace*> __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_t;
#define __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::AtomPub::IWorkspace*>
//#define __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::AtomPub::IWorkspace*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_USE
#define DEF___FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("32f021c7-368b-5cfa-829c-4acf8a36c810"))
IVectorView<ABI::Windows::Web::AtomPub::ResourceCollection*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::ResourceCollection*, ABI::Windows::Web::AtomPub::IResourceCollection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.AtomPub.ResourceCollection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::AtomPub::ResourceCollection*> __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_t;
#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::AtomPub::IResourceCollection*>
//#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::AtomPub::IResourceCollection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_USE
#define DEF___FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d0d7b58d-d97e-5761-be66-42b85b3d19c8"))
IVectorView<ABI::Windows::Web::AtomPub::Workspace*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::Workspace*, ABI::Windows::Web::AtomPub::IWorkspace*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.AtomPub.Workspace>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::AtomPub::Workspace*> __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_t;
#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::AtomPub::IWorkspace*>
//#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::AtomPub::IWorkspace*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                class ServiceDocument;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                struct RetrievalProgress;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dd2a6d54-55aa-5d09-b790-9520d4eb4f19"))
IAsyncOperationProgressHandler<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::ServiceDocument*, ABI::Windows::Web::AtomPub::IServiceDocument*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Web.AtomPub.ServiceDocument, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5f03b1d3-470d-5be7-8176-1c9a46010900"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::ServiceDocument*, ABI::Windows::Web::AtomPub::IServiceDocument*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Web.AtomPub.ServiceDocument, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("da07abf4-91fa-5c96-84cb-459ea97b934d"))
IAsyncOperationWithProgress<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::ServiceDocument*, ABI::Windows::Web::AtomPub::IServiceDocument*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Web.AtomPub.ServiceDocument, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IInputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream ABI::Windows::Storage::Streams::IInputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6136b327-4152-54e3-aa34-38a0c121dc4d"))
IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IInputStream, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("76772ec1-c26f-5f6e-8d3b-8314107cefeb"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IInputStream, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f71cff65-e737-5345-b38f-fd445d2dc7e2"))
IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IInputStream, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationItem;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationItem;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem ABI::Windows::Web::Syndication::ISyndicationItem

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b670d335-e83b-58b1-ad7b-840396085c65"))
IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9de7422b-4bc3-5546-87b8-2eebfd60be48"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("44fa5a15-1204-521c-85e5-01259301d527"))
IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                struct TransferProgress;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1ffb57b2-d2de-5559-8de2-50109c63539b"))
IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8a796ea9-ff95-50ef-93ea-711bf7946473"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e57d0717-27c0-561e-b4b3-72aa2b1e3fc9"))
IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1610085-94d0-5706-9ac6-10179d7deb92"))
IAsyncActionProgressHandler<struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncActionProgressHandler_impl<struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncActionProgressHandler`1<Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionProgressHandler<struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncActionProgressHandler<ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncActionProgressHandler<ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE */





#ifndef DEF___FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f1c031c8-90bf-5cae-adf6-155b4aedfb60"))
IAsyncActionWithProgressCompletedHandler<struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncActionWithProgressCompletedHandler_impl<struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncActionWithProgressCompletedHandler`1<Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionWithProgressCompletedHandler<struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncActionWithProgressCompletedHandler<ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncActionWithProgressCompletedHandler<ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE */





#ifndef DEF___FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b7eb83f5-a746-50f2-b91f-31803161ccc7"))
IAsyncActionWithProgress<struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncActionWithProgress_impl<struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncActionWithProgress`1<Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionWithProgress<struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncActionWithProgress<ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncActionWithProgress<ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_USE */



namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationCategory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationCategory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory ABI::Windows::Web::Syndication::ISyndicationCategory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#define DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2a9228fa-b088-5690-bb38-b7044e0b502b"))
IIterator<ABI::Windows::Web::Syndication::SyndicationCategory*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationCategory*, ABI::Windows::Web::Syndication::ISyndicationCategory*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Syndication.SyndicationCategory>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Syndication::SyndicationCategory*> __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_t;
#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationCategory*>
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationCategory*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#define DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d151f7d1-eabd-5300-b55c-149eb289cc71"))
IIterable<ABI::Windows::Web::Syndication::SyndicationCategory*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationCategory*, ABI::Windows::Web::Syndication::ISyndicationCategory*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Syndication.SyndicationCategory>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Syndication::SyndicationCategory*> __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_t;
#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationCategory*>
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationCategory*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#define DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a1ac007c-9d94-552e-840e-139f109a9b88"))
IVectorView<ABI::Windows::Web::Syndication::SyndicationCategory*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationCategory*, ABI::Windows::Web::Syndication::ISyndicationCategory*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.Syndication.SyndicationCategory>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::Syndication::SyndicationCategory*> __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_t;
#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationCategory*>
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationCategory*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */




#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
//#define __FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */






namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




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









#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationClient;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient ABI::Windows::Web::Syndication::ISyndicationClient

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationNode;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode ABI::Windows::Web::Syndication::ISyndicationNode

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationText;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText ABI::Windows::Web::Syndication::ISyndicationText

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                
                typedef struct RetrievalProgress RetrievalProgress;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                
                typedef struct TransferProgress TransferProgress;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                class AtomPubClient;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */













/*
 *
 * Interface Windows.Web.AtomPub.IAtomPubClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.AtomPub.AtomPubClient
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_AtomPub_IAtomPubClient[] = L"Windows.Web.AtomPub.IAtomPubClient";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                /* [object, uuid("35392C38-CDED-4D4C-9637-05F15C1C9406"), exclusiveto, contract] */
                MIDL_INTERFACE("35392C38-CDED-4D4C-9637-05F15C1C9406")
                IAtomPubClient : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RetrieveServiceDocumentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RetrieveMediaResourceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RetrieveResourceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateResourceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in HSTRING description,
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationItem * item,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateMediaResourceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in HSTRING mediaType,
                        /* [in] */__RPC__in HSTRING description,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * mediaStream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateMediaResourceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in HSTRING mediaType,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * mediaStream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateResourceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationItem * item,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateResourceItemAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationItem * item,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteResourceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteResourceItemAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationItem * item,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CancelAsyncOperations(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAtomPubClient=_uuidof(IAtomPubClient);
                
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient;
#endif /* !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.AtomPub.IAtomPubClientFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.AtomPub.AtomPubClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_AtomPub_IAtomPubClientFactory[] = L"Windows.Web.AtomPub.IAtomPubClientFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                /* [object, uuid("49D55012-57CB-4BDE-AB9F-2610B172777B"), exclusiveto, contract] */
                MIDL_INTERFACE("49D55012-57CB-4BDE-AB9F-2610B172777B")
                IAtomPubClientFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateAtomPubClientWithCredentials(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * serverCredential,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::AtomPub::IAtomPubClient * * atomPubClient
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAtomPubClientFactory=_uuidof(IAtomPubClientFactory);
                
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.AtomPub.IResourceCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.AtomPub.ResourceCollection
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_AtomPub_IResourceCollection[] = L"Windows.Web.AtomPub.IResourceCollection";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                /* [object, uuid("7F5FD609-BC88-41D4-88FA-3DE6704D428E"), exclusiveto, contract] */
                MIDL_INTERFACE("7F5FD609-BC88-41D4-88FA-3DE6704D428E")
                IResourceCollection : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationText * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Categories(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Accepts(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IResourceCollection=_uuidof(IResourceCollection);
                
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection;
#endif /* !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.AtomPub.IServiceDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.AtomPub.ServiceDocument
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_AtomPub_IServiceDocument[] = L"Windows.Web.AtomPub.IServiceDocument";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                /* [object, uuid("8B7EC771-2AB3-4DBE-8BCC-778F92B75E51"), exclusiveto, contract] */
                MIDL_INTERFACE("8B7EC771-2AB3-4DBE-8BCC-778F92B75E51")
                IServiceDocument : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Workspaces(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IServiceDocument=_uuidof(IServiceDocument);
                
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument;
#endif /* !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.AtomPub.IWorkspace
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.AtomPub.Workspace
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_AtomPub_IWorkspace[] = L"Windows.Web.AtomPub.IWorkspace";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                /* [object, uuid("B41DA63B-A4B8-4036-89C5-83C31266BA49"), exclusiveto, contract] */
                MIDL_INTERFACE("B41DA63B-A4B8-4036-89C5-83C31266BA49")
                IWorkspace : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationText * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Collections(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWorkspace=_uuidof(IWorkspace);
                
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace;
#endif /* !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.AtomPub.AtomPubClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.AtomPub.IAtomPubClientFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.AtomPub.IAtomPubClient ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationClient
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_AtomPub_AtomPubClient_DEFINED
#define RUNTIMECLASS_Windows_Web_AtomPub_AtomPubClient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_AtomPub_AtomPubClient[] = L"Windows.Web.AtomPub.AtomPubClient";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.AtomPub.ResourceCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.AtomPub.IResourceCollection ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_AtomPub_ResourceCollection_DEFINED
#define RUNTIMECLASS_Windows_Web_AtomPub_ResourceCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_AtomPub_ResourceCollection[] = L"Windows.Web.AtomPub.ResourceCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.AtomPub.ServiceDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.AtomPub.IServiceDocument ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_AtomPub_ServiceDocument_DEFINED
#define RUNTIMECLASS_Windows_Web_AtomPub_ServiceDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_AtomPub_ServiceDocument[] = L"Windows.Web.AtomPub.ServiceDocument";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.AtomPub.Workspace
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.AtomPub.IWorkspace ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_AtomPub_Workspace_DEFINED
#define RUNTIMECLASS_Windows_Web_AtomPub_Workspace_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_AtomPub_Workspace[] = L"Windows.Web.AtomPub.Workspace";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient;

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory;

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection;

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument;

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace;

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection;

typedef struct __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollectionVtbl;

interface __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollectionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection;

typedef  struct __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CAtomPub__CResourceCollection **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollectionVtbl;

interface __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollectionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CAtomPub__CResourceCollection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace;

typedef struct __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspaceVtbl;

interface __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspaceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace;

typedef  struct __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CAtomPub__CWorkspace **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspaceVtbl;

interface __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspaceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CAtomPub__CWorkspace_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection;

typedef struct __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollectionVtbl;

interface __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollectionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace;

typedef struct __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspaceVtbl;

interface __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspaceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress;

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


struct __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress;

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress;

typedef interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__



#if !defined(____FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress;

typedef interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__



#if !defined(____FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This,/* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    END_INTERFACE
} __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_GetResults(This)	\
    ( (This)->lpVtbl -> GetResults(This) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory;

typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;

interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory;

typedef  struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;

interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory;

typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;

interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out HSTRING *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_HSTRING * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ HSTRING item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__




#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__









#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress;




typedef struct __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress;





















/*
 *
 * Interface Windows.Web.AtomPub.IAtomPubClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.AtomPub.AtomPubClient
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_AtomPub_IAtomPubClient[] = L"Windows.Web.AtomPub.IAtomPubClient";
/* [object, uuid("35392C38-CDED-4D4C-9637-05F15C1C9406"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RetrieveServiceDocumentAsync )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RetrieveMediaResourceAsync )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RetrieveResourceAsync )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateResourceAsync )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in HSTRING description,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMediaResourceAsync )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in HSTRING mediaType,
        /* [in] */__RPC__in HSTRING description,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * mediaStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateMediaResourceAsync )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in HSTRING mediaType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * mediaStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateResourceAsync )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateResourceItemAsync )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteResourceAsync )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteResourceItemAsync )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CancelAsyncOperations )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientVtbl;

interface __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_RetrieveServiceDocumentAsync(This,uri,operation) \
    ( (This)->lpVtbl->RetrieveServiceDocumentAsync(This,uri,operation) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_RetrieveMediaResourceAsync(This,uri,operation) \
    ( (This)->lpVtbl->RetrieveMediaResourceAsync(This,uri,operation) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_RetrieveResourceAsync(This,uri,operation) \
    ( (This)->lpVtbl->RetrieveResourceAsync(This,uri,operation) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_CreateResourceAsync(This,uri,description,item,operation) \
    ( (This)->lpVtbl->CreateResourceAsync(This,uri,description,item,operation) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_CreateMediaResourceAsync(This,uri,mediaType,description,mediaStream,operation) \
    ( (This)->lpVtbl->CreateMediaResourceAsync(This,uri,mediaType,description,mediaStream,operation) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_UpdateMediaResourceAsync(This,uri,mediaType,mediaStream,operation) \
    ( (This)->lpVtbl->UpdateMediaResourceAsync(This,uri,mediaType,mediaStream,operation) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_UpdateResourceAsync(This,uri,item,operation) \
    ( (This)->lpVtbl->UpdateResourceAsync(This,uri,item,operation) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_UpdateResourceItemAsync(This,item,operation) \
    ( (This)->lpVtbl->UpdateResourceItemAsync(This,item,operation) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_DeleteResourceAsync(This,uri,operation) \
    ( (This)->lpVtbl->DeleteResourceAsync(This,uri,operation) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_DeleteResourceItemAsync(This,item,operation) \
    ( (This)->lpVtbl->DeleteResourceItemAsync(This,item,operation) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_CancelAsyncOperations(This) \
    ( (This)->lpVtbl->CancelAsyncOperations(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient;
#endif /* !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.AtomPub.IAtomPubClientFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.AtomPub.AtomPubClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_AtomPub_IAtomPubClientFactory[] = L"Windows.Web.AtomPub.IAtomPubClientFactory";
/* [object, uuid("49D55012-57CB-4BDE-AB9F-2610B172777B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAtomPubClientWithCredentials )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * serverCredential,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClient * * atomPubClient
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_CreateAtomPubClientWithCredentials(This,serverCredential,atomPubClient) \
    ( (This)->lpVtbl->CreateAtomPubClientWithCredentials(This,serverCredential,atomPubClient) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIAtomPubClientFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.AtomPub.IResourceCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.AtomPub.ResourceCollection
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_AtomPub_IResourceCollection[] = L"Windows.Web.AtomPub.IResourceCollection";
/* [object, uuid("7F5FD609-BC88-41D4-88FA-3DE6704D428E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Categories )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Accepts )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollectionVtbl;

interface __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_get_Categories(This,value) \
    ( (This)->lpVtbl->get_Categories(This,value) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_get_Accepts(This,value) \
    ( (This)->lpVtbl->get_Accepts(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection;
#endif /* !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIResourceCollection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.AtomPub.IServiceDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.AtomPub.ServiceDocument
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_AtomPub_IServiceDocument[] = L"Windows.Web.AtomPub.IServiceDocument";
/* [object, uuid("8B7EC771-2AB3-4DBE-8BCC-778F92B75E51"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Workspaces )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CAtomPub__CWorkspace * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocumentVtbl;

interface __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocumentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_get_Workspaces(This,value) \
    ( (This)->lpVtbl->get_Workspaces(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument;
#endif /* !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.AtomPub.IWorkspace
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.AtomPub.Workspace
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_AtomPub_IWorkspace[] = L"Windows.Web.AtomPub.IWorkspace";
/* [object, uuid("B41DA63B-A4B8-4036-89C5-83C31266BA49"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Collections )(
        __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CAtomPub__CResourceCollection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspaceVtbl;

interface __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspaceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_get_Collections(This,value) \
    ( (This)->lpVtbl->get_Collections(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace;
#endif /* !defined(____x_ABI_CWindows_CWeb_CAtomPub_CIWorkspace_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.AtomPub.AtomPubClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.AtomPub.IAtomPubClientFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.AtomPub.IAtomPubClient ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationClient
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_AtomPub_AtomPubClient_DEFINED
#define RUNTIMECLASS_Windows_Web_AtomPub_AtomPubClient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_AtomPub_AtomPubClient[] = L"Windows.Web.AtomPub.AtomPubClient";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.AtomPub.ResourceCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.AtomPub.IResourceCollection ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_AtomPub_ResourceCollection_DEFINED
#define RUNTIMECLASS_Windows_Web_AtomPub_ResourceCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_AtomPub_ResourceCollection[] = L"Windows.Web.AtomPub.ResourceCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.AtomPub.ServiceDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.AtomPub.IServiceDocument ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_AtomPub_ServiceDocument_DEFINED
#define RUNTIMECLASS_Windows_Web_AtomPub_ServiceDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_AtomPub_ServiceDocument[] = L"Windows.Web.AtomPub.ServiceDocument";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.AtomPub.Workspace
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.AtomPub.IWorkspace ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_AtomPub_Workspace_DEFINED
#define RUNTIMECLASS_Windows_Web_AtomPub_Workspace_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_AtomPub_Workspace[] = L"Windows.Web.AtomPub.Workspace";
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
#endif // __windows2Eweb2Eatompub_p_h__

#endif // __windows2Eweb2Eatompub_h__
