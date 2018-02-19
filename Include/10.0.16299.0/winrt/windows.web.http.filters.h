/* Header file automatically generated from windows.web.http.filters.idl */
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
#ifndef __windows2Eweb2Ehttp2Efilters_h__
#define __windows2Eweb2Ehttp2Efilters_h__
#ifndef __windows2Eweb2Ehttp2Efilters_p_h__
#define __windows2Eweb2Ehttp2Efilters_p_h__


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
#include "Windows.Networking.Sockets.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.Web.Http.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    interface IHttpBaseProtocolFilter;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter ABI::Windows::Web::Http::Filters::IHttpBaseProtocolFilter

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    interface IHttpBaseProtocolFilter2;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 ABI::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    interface IHttpBaseProtocolFilter3;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 ABI::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    interface IHttpBaseProtocolFilter4;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 ABI::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    interface IHttpCacheControl;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl ABI::Windows::Web::Http::Filters::IHttpCacheControl

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    interface IHttpFilter;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter ABI::Windows::Web::Http::Filters::IHttpFilter

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    interface IHttpServerCustomValidationRequestedEventArgs;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs ABI::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#ifndef DEF___FIReference_1_UINT64_USE
#define DEF___FIReference_1_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6755e376-53bb-568b-a11d-17239868309e"))
IReference<UINT64> : IReference_impl<UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT64> __FIReference_1_UINT64_t;
#define __FIReference_1_UINT64 ABI::Windows::Foundation::__FIReference_1_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT64 ABI::Windows::Foundation::IReference<UINT64>
//#define __FIReference_1_UINT64_t ABI::Windows::Foundation::IReference<UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT64_USE */



namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    class HttpBaseProtocolFilter;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    class HttpServerCustomValidationRequestedEventArgs;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ed0260c6-41f2-5a04-9a8b-2930d7ff8a9e"))
ITypedEventHandler<ABI::Windows::Web::Http::Filters::HttpBaseProtocolFilter*,ABI::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Filters::HttpBaseProtocolFilter*, ABI::Windows::Web::Http::Filters::IHttpBaseProtocolFilter*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs*, ABI::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Web.Http.Filters.HttpBaseProtocolFilter, Windows.Web.Http.Filters.HttpServerCustomValidationRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Web::Http::Filters::HttpBaseProtocolFilter*,ABI::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs*> __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Web::Http::Filters::IHttpBaseProtocolFilter*,ABI::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Web::Http::Filters::IHttpBaseProtocolFilter*,ABI::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    enum ChainValidationResult : int;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8bcad2b7-0e3b-5eae-bf69-e1f6d9c888f8"))
IIterator<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IIterator_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */





#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2628f58f-3f02-54f2-808f-e1117709d6d0"))
IIterable<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IIterable_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */





#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cb383486-c2bc-5756-912d-6a708a07e5bd"))
IVectorView<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IVectorView_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */





#ifndef DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7828cf7-4301-58d3-aab5-06e5eefcf79f"))
IVector<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IVector_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */



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
                struct HttpProgress;
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("68e4606a-76ec-5816-b2fe-a04ecde4126a"))
IAsyncOperationProgressHandler<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpResponseMessage*, ABI::Windows::Web::Http::IHttpResponseMessage*>,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Web.Http.HttpResponseMessage, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Http::IHttpResponseMessage*,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Http::IHttpResponseMessage*,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("beadb572-f9a3-5e93-b6ca-e311b65933fc"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpResponseMessage*, ABI::Windows::Web::Http::IHttpResponseMessage*>,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Web.Http.HttpResponseMessage, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Http::IHttpResponseMessage*,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Http::IHttpResponseMessage*,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5d144364-77d7-5eca-8b09-936a69446652"))
IAsyncOperationWithProgress<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpResponseMessage*, ABI::Windows::Web::Http::IHttpResponseMessage*>,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Web.Http.HttpResponseMessage, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Http::IHttpResponseMessage*,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Http::IHttpResponseMessage*,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class Certificate;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificate;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate ABI::Windows::Security::Cryptography::Certificates::ICertificate

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("676fc159-f15c-58bd-91a7-28f7e795c756"))
IIterator<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0c7d1423-e8fd-5a91-b55c-8bfbe7ac2d40"))
IIterable<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("963f7013-77c2-51c5-8038-b5bcef633edb"))
IVectorView<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Deferral;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IDeferral;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIDeferral ABI::Windows::Foundation::IDeferral

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketSslErrorSeverity : int SocketSslErrorSeverity;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */




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
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum ChainValidationResult : int ChainValidationResult;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpCookieManager;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpCookieManager;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager ABI::Windows::Web::Http::IHttpCookieManager

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                
                typedef struct HttpProgress HttpProgress;
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

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
                
                typedef enum HttpVersion : int HttpVersion;
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    
                    typedef enum HttpCacheReadBehavior : int HttpCacheReadBehavior;
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    
                    typedef enum HttpCacheWriteBehavior : int HttpCacheWriteBehavior;
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    
                    typedef enum HttpCookieUsageBehavior : int HttpCookieUsageBehavior;
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    class HttpCacheControl;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */













/*
 *
 * Struct Windows.Web.Http.Filters.HttpCacheReadBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    /* [v1_enum, contract] */
                    enum HttpCacheReadBehavior : int
                    {
                        HttpCacheReadBehavior_Default = 0,
                        HttpCacheReadBehavior_MostRecent = 1,
                        HttpCacheReadBehavior_OnlyFromCache = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        HttpCacheReadBehavior_NoCache = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                    };
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.Filters.HttpCacheWriteBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    /* [v1_enum, contract] */
                    enum HttpCacheWriteBehavior : int
                    {
                        HttpCacheWriteBehavior_Default = 0,
                        HttpCacheWriteBehavior_NoCache = 1,
                    };
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.Filters.HttpCookieUsageBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    /* [v1_enum, contract] */
                    enum HttpCookieUsageBehavior : int
                    {
                        HttpCookieUsageBehavior_Default = 0,
                        HttpCookieUsageBehavior_NoCookies = 1,
                    };
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpBaseProtocolFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpBaseProtocolFilter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Http.Filters.IHttpFilter
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    /* [object, uuid("71C89B09-E131-4B54-A53C-EB43FF37E9BB"), exclusiveto, contract] */
                    MIDL_INTERFACE("71C89B09-E131-4B54-A53C-EB43FF37E9BB")
                    IHttpBaseProtocolFilter : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowAutoRedirect(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowAutoRedirect(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowUI(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowUI(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomaticDecompression(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutomaticDecompression(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CacheControl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::Filters::IHttpCacheControl * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CookieManager(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpCookieManager * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClientCertificate(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClientCertificate(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IgnorableServerCertificateErrors(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxConnectionsPerServer(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxConnectionsPerServer(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProxyCredential(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProxyCredential(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCredential(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServerCredential(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UseProxy(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UseProxy(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpBaseProtocolFilter=_uuidof(IHttpBaseProtocolFilter);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpBaseProtocolFilter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpBaseProtocolFilter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Http.Filters.IHttpFilter
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter2";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    /* [object, uuid("2EC30013-9427-4900-A017-FA7DA3B5C9AE"), exclusiveto, contract] */
                    MIDL_INTERFACE("2EC30013-9427-4900-A017-FA7DA3B5C9AE")
                    IHttpBaseProtocolFilter2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxVersion(
                            /* [retval, out] */__RPC__out ABI::Windows::Web::Http::HttpVersion * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxVersion(
                            /* [in] */ABI::Windows::Web::Http::HttpVersion value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpBaseProtocolFilter2=_uuidof(IHttpBaseProtocolFilter2);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpBaseProtocolFilter3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpBaseProtocolFilter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Http.Filters.IHttpFilter
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter3";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    /* [object, uuid("D43F4D4C-BD42-43AE-8717-AD2C8F4B2937"), exclusiveto, contract] */
                    MIDL_INTERFACE("D43F4D4C-BD42-43AE-8717-AD2C8F4B2937")
                    IHttpBaseProtocolFilter3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CookieUsageBehavior(
                            /* [retval, out] */__RPC__out ABI::Windows::Web::Http::Filters::HttpCookieUsageBehavior * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CookieUsageBehavior(
                            /* [in] */ABI::Windows::Web::Http::Filters::HttpCookieUsageBehavior value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpBaseProtocolFilter3=_uuidof(IHttpBaseProtocolFilter3);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpBaseProtocolFilter4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpBaseProtocolFilter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Http.Filters.IHttpFilter
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter4";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    /* [object, uuid("9FE36CCF-2983-4893-941F-EB518CA8CEF9"), exclusiveto, contract] */
                    MIDL_INTERFACE("9FE36CCF-2983-4893-941F-EB518CA8CEF9")
                    IHttpBaseProtocolFilter4 : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ServerCustomValidationRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * eventHandler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ServerCustomValidationRequested(
                            /* [in] */EventRegistrationToken eventCookie
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ClearAuthenticationCache(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpBaseProtocolFilter4=_uuidof(IHttpBaseProtocolFilter4);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpCacheControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpCacheControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpCacheControl[] = L"Windows.Web.Http.Filters.IHttpCacheControl";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    /* [object, uuid("C77E1CB4-3CEA-4EB5-AC85-04E186E63AB7"), exclusiveto, contract] */
                    MIDL_INTERFACE("C77E1CB4-3CEA-4EB5-AC85-04E186E63AB7")
                    IHttpCacheControl : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReadBehavior(
                            /* [retval, out] */__RPC__out ABI::Windows::Web::Http::Filters::HttpCacheReadBehavior * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReadBehavior(
                            /* [in] */ABI::Windows::Web::Http::Filters::HttpCacheReadBehavior value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WriteBehavior(
                            /* [retval, out] */__RPC__out ABI::Windows::Web::Http::Filters::HttpCacheWriteBehavior * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WriteBehavior(
                            /* [in] */ABI::Windows::Web::Http::Filters::HttpCacheWriteBehavior value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpCacheControl=_uuidof(IHttpCacheControl);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpFilter[] = L"Windows.Web.Http.Filters.IHttpFilter";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    /* [object, uuid("A4CB6DD5-0902-439E-BFD7-E12552B165CE"), contract] */
                    MIDL_INTERFACE("A4CB6DD5-0902-439E-BFD7-E12552B165CE")
                    IHttpFilter : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SendRequestAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpRequestMessage * request,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpFilter=_uuidof(IHttpFilter);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpServerCustomValidationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpServerCustomValidationRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs[] = L"Windows.Web.Http.Filters.IHttpServerCustomValidationRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    /* [object, uuid("3165FE32-E7DD-48B7-A361-939C750E63CC"), exclusiveto, contract] */
                    MIDL_INTERFACE("3165FE32-E7DD-48B7-A361-939C750E63CC")
                    IHttpServerCustomValidationRequestedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestMessage(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpRequestMessage * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificate(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificateErrorSeverity(
                            /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketSslErrorSeverity * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificateErrors(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerIntermediateCertificates(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Reject(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHttpServerCustomValidationRequestedEventArgs=_uuidof(IHttpServerCustomValidationRequestedEventArgs);
                    
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Filters */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Web.Http.Filters.HttpBaseProtocolFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Filters.IHttpBaseProtocolFilter ** Default Interface **
 *    Windows.Web.Http.Filters.IHttpFilter
 *    Windows.Foundation.IClosable
 *    Windows.Web.Http.Filters.IHttpBaseProtocolFilter2
 *    Windows.Web.Http.Filters.IHttpBaseProtocolFilter3
 *    Windows.Web.Http.Filters.IHttpBaseProtocolFilter4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Filters_HttpBaseProtocolFilter_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Filters_HttpBaseProtocolFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpBaseProtocolFilter[] = L"Windows.Web.Http.Filters.HttpBaseProtocolFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Filters.HttpCacheControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Filters.IHttpCacheControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Filters_HttpCacheControl_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Filters_HttpCacheControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpCacheControl[] = L"Windows.Web.Http.Filters.HttpCacheControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Filters.HttpServerCustomValidationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Filters.IHttpServerCustomValidationRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Web_Http_Filters_HttpServerCustomValidationRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Filters_HttpServerCustomValidationRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpServerCustomValidationRequestedEventArgs[] = L"Windows.Web.Http.Filters.HttpServerCustomValidationRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
#if !defined(____FIReference_1_UINT64_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT64_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT64 __FIReference_1_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT64;

typedef struct __FIReference_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT64 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT64 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT64 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT64 * This, /* [retval][out] */ __RPC__out __int64 *value);
    END_INTERFACE
} __FIReference_1_UINT64Vtbl;

interface __FIReference_1_UINT64
{
    CONST_VTBL struct __FIReference_1_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT64_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT64_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
#if !defined(____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef  struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if !defined(____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *value);

    END_INTERFACE
} __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__


struct __x_ABI_CWindows_CWeb_CHttp_CHttpProgress;

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef  struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity;




#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;





#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CWeb_CHttp_CHttpProgress __x_ABI_CWindows_CWeb_CHttp_CHttpProgress;

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__




typedef enum __x_ABI_CWindows_CWeb_CHttp_CHttpVersion __x_ABI_CWindows_CWeb_CHttp_CHttpVersion;





typedef enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior;


typedef enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior;


typedef enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCookieUsageBehavior __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCookieUsageBehavior;





















/*
 *
 * Struct Windows.Web.Http.Filters.HttpCacheReadBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior
{
    HttpCacheReadBehavior_Default = 0,
    HttpCacheReadBehavior_MostRecent = 1,
    HttpCacheReadBehavior_OnlyFromCache = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    HttpCacheReadBehavior_NoCache = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.Filters.HttpCacheWriteBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior
{
    HttpCacheWriteBehavior_Default = 0,
    HttpCacheWriteBehavior_NoCache = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.Filters.HttpCookieUsageBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCookieUsageBehavior
{
    HttpCookieUsageBehavior_Default = 0,
    HttpCookieUsageBehavior_NoCookies = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpBaseProtocolFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpBaseProtocolFilter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Http.Filters.IHttpFilter
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter";
/* [object, uuid("71C89B09-E131-4B54-A53C-EB43FF37E9BB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowAutoRedirect )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowAutoRedirect )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowUI )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowUI )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomaticDecompression )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutomaticDecompression )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CacheControl )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CookieManager )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClientCertificate )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClientCertificate )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IgnorableServerCertificateErrors )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxConnectionsPerServer )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxConnectionsPerServer )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProxyCredential )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProxyCredential )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCredential )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServerCredential )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UseProxy )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UseProxy )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_AllowAutoRedirect(This,value) \
    ( (This)->lpVtbl->get_AllowAutoRedirect(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_AllowAutoRedirect(This,value) \
    ( (This)->lpVtbl->put_AllowAutoRedirect(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_AllowUI(This,value) \
    ( (This)->lpVtbl->get_AllowUI(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_AllowUI(This,value) \
    ( (This)->lpVtbl->put_AllowUI(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_AutomaticDecompression(This,value) \
    ( (This)->lpVtbl->get_AutomaticDecompression(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_AutomaticDecompression(This,value) \
    ( (This)->lpVtbl->put_AutomaticDecompression(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_CacheControl(This,value) \
    ( (This)->lpVtbl->get_CacheControl(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_CookieManager(This,value) \
    ( (This)->lpVtbl->get_CookieManager(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_ClientCertificate(This,value) \
    ( (This)->lpVtbl->get_ClientCertificate(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_ClientCertificate(This,value) \
    ( (This)->lpVtbl->put_ClientCertificate(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_IgnorableServerCertificateErrors(This,value) \
    ( (This)->lpVtbl->get_IgnorableServerCertificateErrors(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_MaxConnectionsPerServer(This,value) \
    ( (This)->lpVtbl->get_MaxConnectionsPerServer(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_MaxConnectionsPerServer(This,value) \
    ( (This)->lpVtbl->put_MaxConnectionsPerServer(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_ProxyCredential(This,value) \
    ( (This)->lpVtbl->get_ProxyCredential(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_ProxyCredential(This,value) \
    ( (This)->lpVtbl->put_ProxyCredential(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_ServerCredential(This,value) \
    ( (This)->lpVtbl->get_ServerCredential(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_ServerCredential(This,value) \
    ( (This)->lpVtbl->put_ServerCredential(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_UseProxy(This,value) \
    ( (This)->lpVtbl->get_UseProxy(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_UseProxy(This,value) \
    ( (This)->lpVtbl->put_UseProxy(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpBaseProtocolFilter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpBaseProtocolFilter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Http.Filters.IHttpFilter
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter2";
/* [object, uuid("2EC30013-9427-4900-A017-FA7DA3B5C9AE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxVersion )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CHttp_CHttpVersion * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxVersion )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
        /* [in] */__x_ABI_CWindows_CWeb_CHttp_CHttpVersion value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2Vtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_get_MaxVersion(This,value) \
    ( (This)->lpVtbl->get_MaxVersion(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_put_MaxVersion(This,value) \
    ( (This)->lpVtbl->put_MaxVersion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpBaseProtocolFilter3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpBaseProtocolFilter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Http.Filters.IHttpFilter
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter3";
/* [object, uuid("D43F4D4C-BD42-43AE-8717-AD2C8F4B2937"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CookieUsageBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCookieUsageBehavior * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CookieUsageBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
        /* [in] */__x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCookieUsageBehavior value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3Vtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_get_CookieUsageBehavior(This,value) \
    ( (This)->lpVtbl->get_CookieUsageBehavior(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_put_CookieUsageBehavior(This,value) \
    ( (This)->lpVtbl->put_CookieUsageBehavior(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpBaseProtocolFilter4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpBaseProtocolFilter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Http.Filters.IHttpFilter
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter4";
/* [object, uuid("9FE36CCF-2983-4893-941F-EB518CA8CEF9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    HRESULT ( STDMETHODCALLTYPE *ClearAuthenticationCache )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4Vtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_add_ServerCustomValidationRequested(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_ServerCustomValidationRequested(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_remove_ServerCustomValidationRequested(This,eventCookie) \
    ( (This)->lpVtbl->remove_ServerCustomValidationRequested(This,eventCookie) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_ClearAuthenticationCache(This) \
    ( (This)->lpVtbl->ClearAuthenticationCache(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpCacheControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpCacheControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpCacheControl[] = L"Windows.Web.Http.Filters.IHttpCacheControl";
/* [object, uuid("C77E1CB4-3CEA-4EB5-AC85-04E186E63AB7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReadBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReadBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
        /* [in] */__x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WriteBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WriteBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
        /* [in] */__x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControlVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_get_ReadBehavior(This,value) \
    ( (This)->lpVtbl->get_ReadBehavior(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_put_ReadBehavior(This,value) \
    ( (This)->lpVtbl->put_ReadBehavior(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_get_WriteBehavior(This,value) \
    ( (This)->lpVtbl->get_WriteBehavior(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_put_WriteBehavior(This,value) \
    ( (This)->lpVtbl->put_WriteBehavior(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpFilter[] = L"Windows.Web.Http.Filters.IHttpFilter";
/* [object, uuid("A4CB6DD5-0902-439E-BFD7-E12552B165CE"), contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SendRequestAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * request,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilterVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_SendRequestAsync(This,request,operation) \
    ( (This)->lpVtbl->SendRequestAsync(This,request,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.Filters.IHttpServerCustomValidationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.Filters.HttpServerCustomValidationRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs[] = L"Windows.Web.Http.Filters.IHttpServerCustomValidationRequestedEventArgs";
/* [object, uuid("3165FE32-E7DD-48B7-A361-939C750E63CC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestMessage )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificate )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrorSeverity )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrors )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerIntermediateCertificates )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Reject )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_get_RequestMessage(This,value) \
    ( (This)->lpVtbl->get_RequestMessage(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_get_ServerCertificate(This,value) \
    ( (This)->lpVtbl->get_ServerCertificate(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_get_ServerCertificateErrorSeverity(This,value) \
    ( (This)->lpVtbl->get_ServerCertificateErrorSeverity(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_get_ServerCertificateErrors(This,value) \
    ( (This)->lpVtbl->get_ServerCertificateErrors(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_get_ServerIntermediateCertificates(This,value) \
    ( (This)->lpVtbl->get_ServerIntermediateCertificates(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_Reject(This) \
    ( (This)->lpVtbl->Reject(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Web.Http.Filters.HttpBaseProtocolFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Filters.IHttpBaseProtocolFilter ** Default Interface **
 *    Windows.Web.Http.Filters.IHttpFilter
 *    Windows.Foundation.IClosable
 *    Windows.Web.Http.Filters.IHttpBaseProtocolFilter2
 *    Windows.Web.Http.Filters.IHttpBaseProtocolFilter3
 *    Windows.Web.Http.Filters.IHttpBaseProtocolFilter4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Filters_HttpBaseProtocolFilter_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Filters_HttpBaseProtocolFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpBaseProtocolFilter[] = L"Windows.Web.Http.Filters.HttpBaseProtocolFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Filters.HttpCacheControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Filters.IHttpCacheControl ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_Filters_HttpCacheControl_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Filters_HttpCacheControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpCacheControl[] = L"Windows.Web.Http.Filters.HttpCacheControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.Filters.HttpServerCustomValidationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.Filters.IHttpServerCustomValidationRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Web_Http_Filters_HttpServerCustomValidationRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Filters_HttpServerCustomValidationRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpServerCustomValidationRequestedEventArgs[] = L"Windows.Web.Http.Filters.HttpServerCustomValidationRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eweb2Ehttp2Efilters_p_h__

#endif // __windows2Eweb2Ehttp2Efilters_h__
