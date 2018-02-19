/* Header file automatically generated from windows.web.http.diagnostics.idl */
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
#ifndef __windows2Eweb2Ehttp2Ediagnostics_h__
#define __windows2Eweb2Ehttp2Ediagnostics_h__
#ifndef __windows2Eweb2Ehttp2Ediagnostics_p_h__
#define __windows2Eweb2Ehttp2Ediagnostics_p_h__


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

#if !defined(WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION)
#define WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.System.Diagnostics.h"
#include "Windows.Web.Http.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    interface IHttpDiagnosticProvider;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    interface IHttpDiagnosticProviderRequestResponseCompletedEventArgs;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    interface IHttpDiagnosticProviderRequestResponseTimestamps;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    interface IHttpDiagnosticProviderRequestSentEventArgs;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    interface IHttpDiagnosticProviderResponseReceivedEventArgs;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    interface IHttpDiagnosticProviderStatics;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    interface IHttpDiagnosticSourceLocation;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    class HttpDiagnosticSourceLocation;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */


#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_USE
#define DEF___FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("807b6ed4-5f42-5199-b231-60cce2c76940"))
IIterator<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation*, ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation*> __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_t;
#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation*>
//#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_USE */


#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_USE
#define DEF___FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4286ca1a-a4c5-5ae8-9da9-5bfa24768e22"))
IIterable<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation*, ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation*> __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_t;
#define __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation*>
//#define __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_USE */


#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_USE
#define DEF___FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9af27d3-80e8-5aff-a7e5-1b221787f096"))
IVectorView<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation*, ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation*> __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_t;
#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation*>
//#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_USE */


#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    class HttpDiagnosticProvider;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    class HttpDiagnosticProviderRequestResponseCompletedEventArgs;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */


#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2281ad23-9c8d-5d82-9b20-bcf157b04fd9"))
ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider*, ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs*, ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Web.Http.Diagnostics.HttpDiagnosticProvider, Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs*> __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_USE */


#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    class HttpDiagnosticProviderRequestSentEventArgs;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */


#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f8e10321-47bd-526a-a9b2-3bf12f725f8b"))
ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider*, ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs*, ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Web.Http.Diagnostics.HttpDiagnosticProvider, Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestSentEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs*> __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_t;
#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs*>
//#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_USE */


#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    class HttpDiagnosticProviderResponseReceivedEventArgs;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */


#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2eef1846-8176-52af-8d2b-e0c932512e9f"))
ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider*, ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs*, ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Web.Http.Diagnostics.HttpDiagnosticProvider, Windows.Web.Http.Diagnostics.HttpDiagnosticProviderResponseReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs*> __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider*,ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_USE */


#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#define DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c"))
IReference<struct ABI::Windows::Foundation::DateTime> : IReference_impl<struct ABI::Windows::Foundation::DateTime> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.DateTime>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::DateTime> __FIReference_1_Windows__CFoundation__CDateTime_t;
#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CDateTime_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
//#define __FIReference_1_Windows__CFoundation__CDateTime_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CDateTime_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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
        namespace System {
            namespace Diagnostics {
                class ProcessDiagnosticInfo;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessDiagnosticInfo;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpRequestMessage;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpRequestMessage;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage ABI::Windows::Web::Http::IHttpRequestMessage

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpResponseMessage;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpResponseMessage;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage ABI::Windows::Web::Http::IHttpResponseMessage

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    
                    typedef enum HttpDiagnosticRequestInitiator : int HttpDiagnosticRequestInitiator;
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */










namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    class HttpDiagnosticProviderRequestResponseTimestamps;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */
















/*
 *
 * Struct Windows.Web.Http.Diagnostics.HttpDiagnosticRequestInitiator
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 */

#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    /* [v1_enum, contract] */
                    enum HttpDiagnosticRequestInitiator : int
                    {
                        HttpDiagnosticRequestInitiator_ParsedElement = 0,
                        HttpDiagnosticRequestInitiator_Script = 1,
                        HttpDiagnosticRequestInitiator_Image = 2,
                        HttpDiagnosticRequestInitiator_Link = 3,
                        HttpDiagnosticRequestInitiator_Style = 4,
                        HttpDiagnosticRequestInitiator_XmlHttpRequest = 5,
                        HttpDiagnosticRequestInitiator_Media = 6,
                        HttpDiagnosticRequestInitiator_HtmlDownload = 7,
                        HttpDiagnosticRequestInitiator_Prefetch = 8,
                        HttpDiagnosticRequestInitiator_Other = 9,
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
                        
                        HttpDiagnosticRequestInitiator_CrossOriginPreFlight = 10,
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
                        
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
                        
                        HttpDiagnosticRequestInitiator_Fetch = 11,
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
                        
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
                        
                        HttpDiagnosticRequestInitiator_Beacon = 12,
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
                        
                    };
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProvider
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProvider
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProvider";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    /* [object, uuid("BD811501-A056-4D39-B174-833B7B03B02C"), exclusiveto, contract] */
                    MIDL_INTERFACE("BD811501-A056-4D39-B174-833B7B03B02C")
                    IHttpDiagnosticProvider : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RequestSent(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RequestSent(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ResponseReceived(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ResponseReceived(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RequestResponseCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RequestResponseCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpDiagnosticProvider=_uuidof(IHttpDiagnosticProvider);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseCompletedEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseCompletedEventArgs
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    /* [object, uuid("735F98EE-94F6-4532-B26E-61E1B1E4EFD4"), exclusiveto, contract] */
                    MIDL_INTERFACE("735F98EE-94F6-4532-B26E-61E1B1E4EFD4")
                    IHttpDiagnosticProviderRequestResponseCompletedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamps(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedUri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProcessId(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThreadId(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Initiator(
                            /* [retval, out] */__RPC__out ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceLocations(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpDiagnosticProviderRequestResponseCompletedEventArgs=_uuidof(IHttpDiagnosticProviderRequestResponseCompletedEventArgs);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseTimestamps
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseTimestamps
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseTimestamps";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    /* [object, uuid("E0AFDE10-55CF-4C01-91D4-A20557D849F0"), exclusiveto, contract] */
                    MIDL_INTERFACE("E0AFDE10-55CF-4C01-91D4-A20557D849F0")
                    IHttpDiagnosticProviderRequestResponseTimestamps : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CacheCheckedTimestamp(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionInitiatedTimestamp(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NameResolvedTimestamp(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SslNegotiatedTimestamp(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionCompletedTimestamp(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestSentTimestamp(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestCompletedTimestamp(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResponseReceivedTimestamp(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResponseCompletedTimestamp(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpDiagnosticProviderRequestResponseTimestamps=_uuidof(IHttpDiagnosticProviderRequestResponseTimestamps);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestSentEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestSentEventArgs
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestSentEventArgs";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    /* [object, uuid("3F5196D0-4C1F-4EBE-A57A-06930771C50D"), exclusiveto, contract] */
                    MIDL_INTERFACE("3F5196D0-4C1F-4EBE-A57A-06930771C50D")
                    IHttpDiagnosticProviderRequestSentEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpRequestMessage * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProcessId(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThreadId(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Initiator(
                            /* [retval, out] */__RPC__out ABI::Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceLocations(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpDiagnosticProviderRequestSentEventArgs=_uuidof(IHttpDiagnosticProviderRequestSentEventArgs);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderResponseReceivedEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProviderResponseReceivedEventArgs
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderResponseReceivedEventArgs[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderResponseReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    /* [object, uuid("A0A2566C-AB5F-4D66-BB2D-084CF41635D0"), exclusiveto, contract] */
                    MIDL_INTERFACE("A0A2566C-AB5F-4D66-BB2D-084CF41635D0")
                    IHttpDiagnosticProviderResponseReceivedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpResponseMessage * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpDiagnosticProviderResponseReceivedEventArgs=_uuidof(IHttpDiagnosticProviderResponseReceivedEventArgs);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderStatics
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProvider
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderStatics[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderStatics";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    /* [object, uuid("5B824EC1-6A6C-47CC-AFEC-1E86BC26053B"), exclusiveto, contract] */
                    MIDL_INTERFACE("5B824EC1-6A6C-47CC-AFEC-1E86BC26053B")
                    IHttpDiagnosticProviderStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateFromProcessDiagnosticInfo(
                            /* [in] */__RPC__in_opt ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo * processDiagnosticInfo,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpDiagnosticProviderStatics=_uuidof(IHttpDiagnosticProviderStatics);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticSourceLocation
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticSourceLocation[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticSourceLocation";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Diagnostics {
                    /* [object, uuid("54A9D260-8860-423F-B6FA-D77716F647A7"), exclusiveto, contract] */
                    MIDL_INTERFACE("54A9D260-8860-423F-B6FA-D77716F647A7")
                    IHttpDiagnosticSourceLocation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceUri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LineNumber(
                            /* [retval, out] */__RPC__out UINT64 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnNumber(
                            /* [retval, out] */__RPC__out UINT64 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpDiagnosticSourceLocation=_uuidof(IHttpDiagnosticSourceLocation);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticProvider
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderStatics interface starting with version 1.0 of the Windows.Web.Http.Diagnostics.HttpDiagnosticsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProvider_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProvider[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProvider";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseCompletedEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseCompletedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseCompletedEventArgs[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseCompletedEventArgs";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseTimestamps
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseTimestamps ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseTimestamps_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseTimestamps_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseTimestamps[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseTimestamps";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestSentEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestSentEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestSentEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestSentEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestSentEventArgs[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestSentEventArgs";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticProviderResponseReceivedEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderResponseReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderResponseReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderResponseReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderResponseReceivedEventArgs[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderResponseReceivedEventArgs";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticSourceLocation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticSourceLocation_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticSourceLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticSourceLocation[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;

typedef struct __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl;

interface __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_INTERFACE_DEFINED__

#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;

typedef  struct __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl;

interface __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_INTERFACE_DEFINED__

#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;

typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl;

interface __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation_INTERFACE_DEFINED__

#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000



#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000



#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000



#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CFoundation_CDateTime;

#if !defined(____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;

typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;

interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CDateTime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CHttpDiagnosticRequestInitiator __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CHttpDiagnosticRequestInitiator;

























/*
 *
 * Struct Windows.Web.Http.Diagnostics.HttpDiagnosticRequestInitiator
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 */

#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CHttpDiagnosticRequestInitiator
{
    HttpDiagnosticRequestInitiator_ParsedElement = 0,
    HttpDiagnosticRequestInitiator_Script = 1,
    HttpDiagnosticRequestInitiator_Image = 2,
    HttpDiagnosticRequestInitiator_Link = 3,
    HttpDiagnosticRequestInitiator_Style = 4,
    HttpDiagnosticRequestInitiator_XmlHttpRequest = 5,
    HttpDiagnosticRequestInitiator_Media = 6,
    HttpDiagnosticRequestInitiator_HtmlDownload = 7,
    HttpDiagnosticRequestInitiator_Prefetch = 8,
    HttpDiagnosticRequestInitiator_Other = 9,
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
    
    HttpDiagnosticRequestInitiator_CrossOriginPreFlight = 10,
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
    
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
    
    HttpDiagnosticRequestInitiator_Fetch = 11,
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
    
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
    
    HttpDiagnosticRequestInitiator_Beacon = 12,
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x20000
    
};
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProvider
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProvider
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProvider";
/* [object, uuid("BD811501-A056-4D39-B174-833B7B03B02C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RequestSent )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RequestSent )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ResponseReceived )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ResponseReceived )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RequestResponseCompleted )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RequestResponseCompleted )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_add_RequestSent(This,handler,token) \
    ( (This)->lpVtbl->add_RequestSent(This,handler,token) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_remove_RequestSent(This,token) \
    ( (This)->lpVtbl->remove_RequestSent(This,token) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_add_ResponseReceived(This,handler,token) \
    ( (This)->lpVtbl->add_ResponseReceived(This,handler,token) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_remove_ResponseReceived(This,token) \
    ( (This)->lpVtbl->remove_ResponseReceived(This,token) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_add_RequestResponseCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_RequestResponseCompleted(This,handler,token) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_remove_RequestResponseCompleted(This,token) \
    ( (This)->lpVtbl->remove_RequestResponseCompleted(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseCompletedEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseCompletedEventArgs
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseCompletedEventArgs";
/* [object, uuid("735F98EE-94F6-4532-B26E-61E1B1E4EFD4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamps )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedUri )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProcessId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThreadId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Initiator )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CHttpDiagnosticRequestInitiator * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceLocations )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_get_Timestamps(This,value) \
    ( (This)->lpVtbl->get_Timestamps(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_get_RequestedUri(This,value) \
    ( (This)->lpVtbl->get_RequestedUri(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_get_ProcessId(This,value) \
    ( (This)->lpVtbl->get_ProcessId(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_get_ThreadId(This,value) \
    ( (This)->lpVtbl->get_ThreadId(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_get_Initiator(This,value) \
    ( (This)->lpVtbl->get_Initiator(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_get_SourceLocations(This,value) \
    ( (This)->lpVtbl->get_SourceLocations(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseTimestamps
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseTimestamps
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseTimestamps";
/* [object, uuid("E0AFDE10-55CF-4C01-91D4-A20557D849F0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestampsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CacheCheckedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionInitiatedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NameResolvedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SslNegotiatedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionCompletedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestSentTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestCompletedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResponseReceivedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResponseCompletedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestampsVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestampsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_get_CacheCheckedTimestamp(This,value) \
    ( (This)->lpVtbl->get_CacheCheckedTimestamp(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_get_ConnectionInitiatedTimestamp(This,value) \
    ( (This)->lpVtbl->get_ConnectionInitiatedTimestamp(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_get_NameResolvedTimestamp(This,value) \
    ( (This)->lpVtbl->get_NameResolvedTimestamp(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_get_SslNegotiatedTimestamp(This,value) \
    ( (This)->lpVtbl->get_SslNegotiatedTimestamp(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_get_ConnectionCompletedTimestamp(This,value) \
    ( (This)->lpVtbl->get_ConnectionCompletedTimestamp(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_get_RequestSentTimestamp(This,value) \
    ( (This)->lpVtbl->get_RequestSentTimestamp(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_get_RequestCompletedTimestamp(This,value) \
    ( (This)->lpVtbl->get_RequestCompletedTimestamp(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_get_ResponseReceivedTimestamp(This,value) \
    ( (This)->lpVtbl->get_ResponseReceivedTimestamp(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_get_ResponseCompletedTimestamp(This,value) \
    ( (This)->lpVtbl->get_ResponseCompletedTimestamp(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestSentEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestSentEventArgs
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestSentEventArgs";
/* [object, uuid("3F5196D0-4C1F-4EBE-A57A-06930771C50D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProcessId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThreadId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Initiator )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CHttpDiagnosticRequestInitiator * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceLocations )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgsVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_get_ProcessId(This,value) \
    ( (This)->lpVtbl->get_ProcessId(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_get_ThreadId(This,value) \
    ( (This)->lpVtbl->get_ThreadId(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_get_Initiator(This,value) \
    ( (This)->lpVtbl->get_Initiator(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_get_SourceLocations(This,value) \
    ( (This)->lpVtbl->get_SourceLocations(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderResponseReceivedEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProviderResponseReceivedEventArgs
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderResponseReceivedEventArgs[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderResponseReceivedEventArgs";
/* [object, uuid("A0A2566C-AB5F-4D66-BB2D-084CF41635D0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderStatics
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticProvider
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderStatics[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderStatics";
/* [object, uuid("5B824EC1-6A6C-47CC-AFEC-1E86BC26053B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromProcessDiagnosticInfo )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * processDiagnosticInfo,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStaticsVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_CreateFromProcessDiagnosticInfo(This,processDiagnosticInfo,value) \
    ( (This)->lpVtbl->CreateFromProcessDiagnosticInfo(This,processDiagnosticInfo,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Diagnostics.IHttpDiagnosticSourceLocation
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation
 *
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticSourceLocation[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticSourceLocation";
/* [object, uuid("54A9D260-8860-423F-B6FA-D77716F647A7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceUri )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LineNumber )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnNumber )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocationVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_get_SourceUri(This,value) \
    ( (This)->lpVtbl->get_SourceUri(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_get_LineNumber(This,value) \
    ( (This)->lpVtbl->get_LineNumber(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_get_ColumnNumber(This,value) \
    ( (This)->lpVtbl->get_ColumnNumber(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticProvider
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderStatics interface starting with version 1.0 of the Windows.Web.Http.Diagnostics.HttpDiagnosticsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProvider_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProvider[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProvider";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseCompletedEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseCompletedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseCompletedEventArgs[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseCompletedEventArgs";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseTimestamps
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseTimestamps ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseTimestamps_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseTimestamps_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseTimestamps[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseTimestamps";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestSentEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestSentEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestSentEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestSentEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestSentEventArgs[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestSentEventArgs";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticProviderResponseReceivedEventArgs
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderResponseReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderResponseReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderResponseReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderResponseReceivedEventArgs[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderResponseReceivedEventArgs";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation
 *
 * Introduced to Windows.Web.Http.Diagnostics.HttpDiagnosticsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Diagnostics.IHttpDiagnosticSourceLocation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticSourceLocation_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Diagnostics_HttpDiagnosticSourceLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticSourceLocation[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation";
#endif
#endif // WINDOWS_WEB_HTTP_DIAGNOSTICS_HTTPDIAGNOSTICSCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eweb2Ehttp2Ediagnostics_p_h__

#endif // __windows2Eweb2Ehttp2Ediagnostics_h__
