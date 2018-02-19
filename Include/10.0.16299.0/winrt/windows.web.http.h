/* Header file automatically generated from windows.web.http.idl */
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
#ifndef __windows2Eweb2Ehttp_h__
#define __windows2Eweb2Ehttp_h__
#ifndef __windows2Eweb2Ehttp_p_h__
#define __windows2Eweb2Ehttp_p_h__


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
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.Storage.Streams.h"
#include "Windows.Web.Http.Filters.h"
#include "Windows.Web.Http.Headers.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpBufferContentFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory ABI::Windows::Web::Http::IHttpBufferContentFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpClient;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient ABI::Windows::Web::Http::IHttpClient

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpClientFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory ABI::Windows::Web::Http::IHttpClientFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpContent;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent ABI::Windows::Web::Http::IHttpContent

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpCookie;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie ABI::Windows::Web::Http::IHttpCookie

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpCookieFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory ABI::Windows::Web::Http::IHttpCookieFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpFormUrlEncodedContentFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory ABI::Windows::Web::Http::IHttpFormUrlEncodedContentFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpMethod;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod ABI::Windows::Web::Http::IHttpMethod

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpMethodFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory ABI::Windows::Web::Http::IHttpMethodFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpMethodStatics;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics ABI::Windows::Web::Http::IHttpMethodStatics

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpMultipartContent;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent ABI::Windows::Web::Http::IHttpMultipartContent

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpMultipartContentFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory ABI::Windows::Web::Http::IHttpMultipartContentFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpMultipartFormDataContent;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent ABI::Windows::Web::Http::IHttpMultipartFormDataContent

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpMultipartFormDataContentFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory ABI::Windows::Web::Http::IHttpMultipartFormDataContentFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpRequestMessageFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory ABI::Windows::Web::Http::IHttpRequestMessageFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpResponseMessageFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory ABI::Windows::Web::Http::IHttpResponseMessageFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpStreamContentFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory ABI::Windows::Web::Http::IHttpStreamContentFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpStringContentFactory;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory ABI::Windows::Web::Http::IHttpStringContentFactory

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpTransportInformation;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation ABI::Windows::Web::Http::IHttpTransportInformation

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_FWD_DEFINED__

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
                class HttpCookie;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_USE
#define DEF___FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("626bc177-8403-5030-a88c-7485cc89d730"))
IIterator<ABI::Windows::Web::Http::HttpCookie*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpCookie*, ABI::Windows::Web::Http::IHttpCookie*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Http.HttpCookie>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Http::HttpCookie*> __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_t;
#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Http::IHttpCookie*>
//#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Http::IHttpCookie*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_USE
#define DEF___FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0eb9fa36-88de-590d-8ea0-b613d0ab015f"))
IIterable<ABI::Windows::Web::Http::HttpCookie*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpCookie*, ABI::Windows::Web::Http::IHttpCookie*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Http.HttpCookie>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Http::HttpCookie*> __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_t;
#define __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Http::IHttpCookie*>
//#define __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Http::IHttpCookie*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpMethod;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_USE
#define DEF___FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d13a880f-d612-50cf-a6f9-dd96f916f491"))
IIterator<ABI::Windows::Web::Http::HttpMethod*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpMethod*, ABI::Windows::Web::Http::IHttpMethod*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Http.HttpMethod>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Http::HttpMethod*> __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_t;
#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Http::IHttpMethod*>
//#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Http::IHttpMethod*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_USE
#define DEF___FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c088bb1a-dc61-57e1-b967-78dab3541da5"))
IIterable<ABI::Windows::Web::Http::HttpMethod*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpMethod*, ABI::Windows::Web::Http::IHttpMethod*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Http.HttpMethod>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Http::HttpMethod*> __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_t;
#define __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Http::IHttpMethod*>
//#define __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Http::IHttpMethod*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_USE
#define DEF___FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("59f44f31-695e-5af7-a3c5-85c01939cec8"))
IIterator<ABI::Windows::Web::Http::IHttpContent*> : IIterator_impl<ABI::Windows::Web::Http::IHttpContent*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Http.IHttpContent>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Http::IHttpContent*> __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_t;
#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Http::IHttpContent*>
//#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Http::IHttpContent*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_USE
#define DEF___FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f102157f-b482-5736-9d12-c683bc494942"))
IIterable<ABI::Windows::Web::Http::IHttpContent*> : IIterable_impl<ABI::Windows::Web::Http::IHttpContent*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Http.IHttpContent>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Http::IHttpContent*> __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_t;
#define __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Http::IHttpContent*>
//#define __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Http::IHttpContent*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_USE
#define DEF___FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0064c4f6-3fca-5823-9d92-86c40b28adbc"))
IVectorView<ABI::Windows::Web::Http::HttpCookie*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpCookie*, ABI::Windows::Web::Http::IHttpCookie*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.Http.HttpCookie>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::Http::HttpCookie*> __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_t;
#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Http::IHttpCookie*>
//#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Http::IHttpCookie*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_USE
#define DEF___FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ef132fb7-d286-5327-b38a-be7d008328fe"))
IVectorView<ABI::Windows::Web::Http::HttpMethod*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpMethod*, ABI::Windows::Web::Http::IHttpMethod*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.Http.HttpMethod>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::Http::HttpMethod*> __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_t;
#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Http::IHttpMethod*>
//#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Http::IHttpMethod*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CWeb__CHttp__CHttpCookie_USE
#define DEF___FIVector_1_Windows__CWeb__CHttp__CHttpCookie_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98a6c2fe-469b-5bdd-a16d-7002c3a0853d"))
IVector<ABI::Windows::Web::Http::HttpCookie*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpCookie*, ABI::Windows::Web::Http::IHttpCookie*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Web.Http.HttpCookie>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Web::Http::HttpCookie*> __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_t;
#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CWeb__CHttp__CHttpCookie_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Http::IHttpCookie*>
//#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Http::IHttpCookie*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CWeb__CHttp__CHttpCookie_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CWeb__CHttp__CHttpMethod_USE
#define DEF___FIVector_1_Windows__CWeb__CHttp__CHttpMethod_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("228a73a2-a509-5a78-bd7f-db94ba0bef21"))
IVector<ABI::Windows::Web::Http::HttpMethod*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpMethod*, ABI::Windows::Web::Http::IHttpMethod*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Web.Http.HttpMethod>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Web::Http::HttpMethod*> __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_t;
#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CWeb__CHttp__CHttpMethod_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Http::IHttpMethod*>
//#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Http::IHttpMethod*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CWeb__CHttp__CHttpMethod_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                struct HttpProgress;
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */


#ifndef DEF___FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cf0a03f6-a80a-5b46-9c80-f4ad9ed6e2d6"))
IAsyncOperationProgressHandler<HSTRING,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationProgressHandler_impl<HSTRING,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<String, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<HSTRING,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<HSTRING,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<HSTRING,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_USE */





#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("98ab9acb-38db-588f-a5f9-9f484b2200cd"))
IAsyncOperationWithProgressCompletedHandler<HSTRING,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgressCompletedHandler_impl<HSTRING,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<String, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<HSTRING,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<HSTRING,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<HSTRING,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_USE */





#ifndef DEF___FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("91ecbe45-e889-5518-bd8d-c5bde163109b"))
IAsyncOperationWithProgress<HSTRING,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgress_impl<HSTRING,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<String, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<HSTRING,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<HSTRING,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<HSTRING,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_USE */



#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9eb2b852-e019-5440-8f88-0dd7d56fea47"))
IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b0cf2f85-6992-52be-8f0b-93964b14d963"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("88d9bb75-afb4-5f32-9d7e-d3bf3785354c"))
IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_USE */


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

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("04682e89-6e8b-54b1-a466-432e130cf9a6"))
IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IInputStream, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("504a34ec-5499-5a16-bffc-3ccb64a3547a"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IInputStream, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0b97c784-df17-571f-8337-447dff068a9c"))
IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Http::HttpProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IInputStream, Windows.Web.Http.HttpProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Http::HttpProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Http::HttpProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpResponseMessage;
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




#ifndef DEF___FIAsyncOperationProgressHandler_2_UINT64_UINT64_USE
#define DEF___FIAsyncOperationProgressHandler_2_UINT64_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ffb2b65d-4120-5d13-826d-107851e6bb1c"))
IAsyncOperationProgressHandler<UINT64,UINT64> : IAsyncOperationProgressHandler_impl<UINT64,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<UInt64, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<UINT64,UINT64> __FIAsyncOperationProgressHandler_2_UINT64_UINT64_t;
#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_UINT64_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64 ABI::Windows::Foundation::IAsyncOperationProgressHandler<UINT64,UINT64>
//#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<UINT64,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_UINT64_UINT64_USE */




#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d2024e41-5500-5b5a-ba46-cb7009596a2f"))
IAsyncOperationWithProgressCompletedHandler<UINT64,UINT64> : IAsyncOperationWithProgressCompletedHandler_impl<UINT64,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<UInt64, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<UINT64,UINT64> __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<UINT64,UINT64>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<UINT64,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_USE */




#ifndef DEF___FIAsyncOperationWithProgress_2_UINT64_UINT64_USE
#define DEF___FIAsyncOperationWithProgress_2_UINT64_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8f1db6e3-6556-5516-825c-1021ee27cd0c"))
IAsyncOperationWithProgress<UINT64,UINT64> : IAsyncOperationWithProgress_impl<UINT64,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<UInt64, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<UINT64,UINT64> __FIAsyncOperationWithProgress_2_UINT64_UINT64_t;
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_UINT64_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_UINT64_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgress<UINT64,UINT64>
//#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgress<UINT64,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_UINT64_UINT64_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d17f5eb6-b422-5e26-a817-7e0fd08f75d5"))
IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64> : IAsyncOperationProgressHandler_impl<ABI::Windows::Storage::Streams::IBuffer*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64> __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("abc81235-39c7-59bf-9948-2d14a93d40fd"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ad960e7f-d73b-56e4-a58c-6ec7678cfd88"))
IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT64> : IAsyncOperationWithProgress_impl<ABI::Windows::Storage::Streams::IBuffer*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT64> __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t;
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f9b2e7f6-762f-50db-95dd-7f6c6ec47090"))
IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64> : IAsyncOperationProgressHandler_impl<ABI::Windows::Storage::Streams::IInputStream*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IInputStream, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64> __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8db69706-3dd1-5a28-986a-93be0776d9c3"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Storage::Streams::IInputStream*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IInputStream, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("455aa601-f13e-5dee-b9cb-16b531996327"))
IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,UINT64> : IAsyncOperationWithProgress_impl<ABI::Windows::Storage::Streams::IInputStream*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IInputStream, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,UINT64> __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t;
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationProgressHandler_2_HSTRING_UINT64_USE
#define DEF___FIAsyncOperationProgressHandler_2_HSTRING_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("14da7de7-40df-5d4c-823f-cf310625ad39"))
IAsyncOperationProgressHandler<HSTRING,UINT64> : IAsyncOperationProgressHandler_impl<HSTRING,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<String, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<HSTRING,UINT64> __FIAsyncOperationProgressHandler_2_HSTRING_UINT64_t;
#define __FIAsyncOperationProgressHandler_2_HSTRING_UINT64 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_HSTRING_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_HSTRING_UINT64 ABI::Windows::Foundation::IAsyncOperationProgressHandler<HSTRING,UINT64>
//#define __FIAsyncOperationProgressHandler_2_HSTRING_UINT64_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<HSTRING,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_HSTRING_UINT64_USE */




#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bd75eebe-e7b5-5af6-8415-a4b9c9045202"))
IAsyncOperationWithProgressCompletedHandler<HSTRING,UINT64> : IAsyncOperationWithProgressCompletedHandler_impl<HSTRING,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<String, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<HSTRING,UINT64> __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<HSTRING,UINT64>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<HSTRING,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_USE */




#ifndef DEF___FIAsyncOperationWithProgress_2_HSTRING_UINT64_USE
#define DEF___FIAsyncOperationWithProgress_2_HSTRING_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c8bbcb29-6b64-5ce2-a831-038f6e02199e"))
IAsyncOperationWithProgress<HSTRING,UINT64> : IAsyncOperationWithProgress_impl<HSTRING,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<String, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<HSTRING,UINT64> __FIAsyncOperationWithProgress_2_HSTRING_UINT64_t;
#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_HSTRING_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgress<HSTRING,UINT64>
//#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgress<HSTRING,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_HSTRING_UINT64_USE */



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





#ifndef DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20"))
IKeyValuePair<HSTRING,IInspectable*> : IKeyValuePair_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,IInspectable*> __FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
//#define __FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8"))
IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204"))
IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e"))
IMapView<HSTRING,IInspectable*> : IMapView_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,IInspectable*> __FIMapView_2_HSTRING_IInspectable_t;
#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
//#define __FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMap_2_HSTRING_IInspectable_USE
#define DEF___FIMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1b0d3570-0877-5ec2-8a2c-3b9539506aca"))
IMap<HSTRING,IInspectable*> : IMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,IInspectable*> __FIMap_2_HSTRING_IInspectable_t;
#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
//#define __FIMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_IInspectable_USE */



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
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketSslErrorSeverity : int SocketSslErrorSeverity;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */





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







#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IOutputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream ABI::Windows::Storage::Streams::IOutputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                
                typedef enum UnicodeEncoding : int UnicodeEncoding;
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */




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






namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Headers {
                    class HttpContentHeaderCollection;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Headers */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Headers {
                    interface IHttpContentHeaderCollection;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Headers */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection ABI::Windows::Web::Http::Headers::IHttpContentHeaderCollection

#endif // ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Headers {
                    class HttpRequestHeaderCollection;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Headers */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Headers {
                    interface IHttpRequestHeaderCollection;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Headers */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection ABI::Windows::Web::Http::Headers::IHttpRequestHeaderCollection

#endif // ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Headers {
                    class HttpResponseHeaderCollection;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Headers */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Headers {
                    interface IHttpResponseHeaderCollection;
                } /* Windows */
            } /* Web */
        } /* Http */
    } /* Headers */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection ABI::Windows::Web::Http::Headers::IHttpResponseHeaderCollection

#endif // ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                
                typedef enum HttpCompletionOption : int HttpCompletionOption;
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                
                typedef enum HttpProgressStage : int HttpProgressStage;
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                
                typedef enum HttpResponseMessageSource : int HttpResponseMessageSource;
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                
                typedef enum HttpStatusCode : int HttpStatusCode;
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

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
                
                typedef struct HttpProgress HttpProgress;
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */























namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpBufferContent;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpClient;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpCookieCollection;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpCookieManager;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpFormUrlEncodedContent;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpMultipartContent;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpMultipartFormDataContent;
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



namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpStreamContent;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpStringContent;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpTransportInformation;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */










/*
 *
 * Struct Windows.Web.Http.HttpCompletionOption
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
                /* [v1_enum, contract] */
                enum HttpCompletionOption : int
                {
                    HttpCompletionOption_ResponseContentRead = 0,
                    HttpCompletionOption_ResponseHeadersRead = 1,
                };
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.HttpProgressStage
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
                /* [v1_enum, contract] */
                enum HttpProgressStage : int
                {
                    HttpProgressStage_None = 0,
                    HttpProgressStage_DetectingProxy = 10,
                    HttpProgressStage_ResolvingName = 20,
                    HttpProgressStage_ConnectingToServer = 30,
                    HttpProgressStage_NegotiatingSsl = 40,
                    HttpProgressStage_SendingHeaders = 50,
                    HttpProgressStage_SendingContent = 60,
                    HttpProgressStage_WaitingForResponse = 70,
                    HttpProgressStage_ReceivingHeaders = 80,
                    HttpProgressStage_ReceivingContent = 90,
                };
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.HttpResponseMessageSource
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
                /* [v1_enum, contract] */
                enum HttpResponseMessageSource : int
                {
                    HttpResponseMessageSource_None = 0,
                    HttpResponseMessageSource_Cache = 1,
                    HttpResponseMessageSource_Network = 2,
                };
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.HttpStatusCode
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
                /* [v1_enum, contract] */
                enum HttpStatusCode : int
                {
                    HttpStatusCode_None = 0,
                    HttpStatusCode_Continue = 100,
                    HttpStatusCode_SwitchingProtocols = 101,
                    HttpStatusCode_Processing = 102,
                    HttpStatusCode_Ok = 200,
                    HttpStatusCode_Created = 201,
                    HttpStatusCode_Accepted = 202,
                    HttpStatusCode_NonAuthoritativeInformation = 203,
                    HttpStatusCode_NoContent = 204,
                    HttpStatusCode_ResetContent = 205,
                    HttpStatusCode_PartialContent = 206,
                    HttpStatusCode_MultiStatus = 207,
                    HttpStatusCode_AlreadyReported = 208,
                    HttpStatusCode_IMUsed = 226,
                    HttpStatusCode_MultipleChoices = 300,
                    HttpStatusCode_MovedPermanently = 301,
                    HttpStatusCode_Found = 302,
                    HttpStatusCode_SeeOther = 303,
                    HttpStatusCode_NotModified = 304,
                    HttpStatusCode_UseProxy = 305,
                    HttpStatusCode_TemporaryRedirect = 307,
                    HttpStatusCode_PermanentRedirect = 308,
                    HttpStatusCode_BadRequest = 400,
                    HttpStatusCode_Unauthorized = 401,
                    HttpStatusCode_PaymentRequired = 402,
                    HttpStatusCode_Forbidden = 403,
                    HttpStatusCode_NotFound = 404,
                    HttpStatusCode_MethodNotAllowed = 405,
                    HttpStatusCode_NotAcceptable = 406,
                    HttpStatusCode_ProxyAuthenticationRequired = 407,
                    HttpStatusCode_RequestTimeout = 408,
                    HttpStatusCode_Conflict = 409,
                    HttpStatusCode_Gone = 410,
                    HttpStatusCode_LengthRequired = 411,
                    HttpStatusCode_PreconditionFailed = 412,
                    HttpStatusCode_RequestEntityTooLarge = 413,
                    HttpStatusCode_RequestUriTooLong = 414,
                    HttpStatusCode_UnsupportedMediaType = 415,
                    HttpStatusCode_RequestedRangeNotSatisfiable = 416,
                    HttpStatusCode_ExpectationFailed = 417,
                    HttpStatusCode_UnprocessableEntity = 422,
                    HttpStatusCode_Locked = 423,
                    HttpStatusCode_FailedDependency = 424,
                    HttpStatusCode_UpgradeRequired = 426,
                    HttpStatusCode_PreconditionRequired = 428,
                    HttpStatusCode_TooManyRequests = 429,
                    HttpStatusCode_RequestHeaderFieldsTooLarge = 431,
                    HttpStatusCode_InternalServerError = 500,
                    HttpStatusCode_NotImplemented = 501,
                    HttpStatusCode_BadGateway = 502,
                    HttpStatusCode_ServiceUnavailable = 503,
                    HttpStatusCode_GatewayTimeout = 504,
                    HttpStatusCode_HttpVersionNotSupported = 505,
                    HttpStatusCode_VariantAlsoNegotiates = 506,
                    HttpStatusCode_InsufficientStorage = 507,
                    HttpStatusCode_LoopDetected = 508,
                    HttpStatusCode_NotExtended = 510,
                    HttpStatusCode_NetworkAuthenticationRequired = 511,
                };
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.HttpVersion
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
                /* [v1_enum, contract] */
                enum HttpVersion : int
                {
                    HttpVersion_None = 0,
                    HttpVersion_Http10 = 1,
                    HttpVersion_Http11 = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    HttpVersion_Http20 = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.HttpProgress
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
                /* [contract] */
                struct HttpProgress
                {
                    ABI::Windows::Web::Http::HttpProgressStage Stage;
                    UINT64 BytesSent;
                    __FIReference_1_UINT64 * TotalBytesToSend;
                    UINT64 BytesReceived;
                    __FIReference_1_UINT64 * TotalBytesToReceive;
                    UINT32 Retries;
                };
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpBufferContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpBufferContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpBufferContentFactory[] = L"Windows.Web.Http.IHttpBufferContentFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("BC20C193-C41F-4FF7-9123-6435736EADC2"), exclusiveto, contract] */
                MIDL_INTERFACE("BC20C193-C41F-4FF7-9123-6435736EADC2")
                IHttpBufferContentFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * content,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * bufferContent
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromBufferWithOffset(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * content,
                        /* [in] */UINT32 offset,
                        /* [in] */UINT32 count,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * bufferContent
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpBufferContentFactory=_uuidof(IHttpBufferContentFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpClient
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpClient[] = L"Windows.Web.Http.IHttpClient";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("7FDA1151-3574-4880-A8BA-E6B1E0061F3D"), exclusiveto, contract] */
                MIDL_INTERFACE("7FDA1151-3574-4880-A8BA-E6B1E0061F3D")
                IHttpClient : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE DeleteAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetWithOptionAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */ABI::Windows::Web::Http::HttpCompletionOption completionOption,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBufferAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetInputStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetStringAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PostAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpContent * content,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PutAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpContent * content,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SendRequestAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpRequestMessage * request,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SendRequestWithOptionAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpRequestMessage * request,
                        /* [in] */ABI::Windows::Web::Http::HttpCompletionOption completionOption,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultRequestHeaders(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::Headers::IHttpRequestHeaderCollection * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpClient=_uuidof(IHttpClient);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpClient;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpClientFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpClientFactory[] = L"Windows.Web.Http.IHttpClientFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("C30C4ECA-E3FA-4F99-AFB4-63CC65009462"), exclusiveto, contract] */
                MIDL_INTERFACE("C30C4ECA-E3FA-4F99-AFB4-63CC65009462")
                IHttpClientFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::Filters::IHttpFilter * filter,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpClient * * client
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpClientFactory=_uuidof(IHttpClientFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpContent
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
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpContent[] = L"Windows.Web.Http.IHttpContent";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("6B14A441-FBA7-4BD2-AF0A-839DE7C295DA"), contract] */
                MIDL_INTERFACE("6B14A441-FBA7-4BD2-AF0A-839DE7C295DA")
                IHttpContent : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Headers(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::Headers::IHttpContentHeaderCollection * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE BufferAllAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadAsBufferAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadAsInputStreamAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadAsStringAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryComputeLength(
                        /* [out] */__RPC__out UINT64 * length,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteToStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * outputStream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpContent=_uuidof(IHttpContent);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpContent;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpCookie
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpCookie
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpCookie[] = L"Windows.Web.Http.IHttpCookie";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("1F5488E2-CC2D-4779-86A7-88F10687D249"), exclusiveto, contract] */
                MIDL_INTERFACE("1F5488E2-CC2D-4779-86A7-88F10687D249")
                IHttpCookie : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Domain(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Path(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Expires(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Expires(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HttpOnly(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HttpOnly(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Secure(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Secure(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpCookie=_uuidof(IHttpCookie);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpCookie;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpCookieFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpCookie
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpCookieFactory[] = L"Windows.Web.Http.IHttpCookieFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("6A0585A9-931C-4CD1-A96D-C21701785C5F"), exclusiveto, contract] */
                MIDL_INTERFACE("6A0585A9-931C-4CD1-A96D-C21701785C5F")
                IHttpCookieFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING domain,
                        /* [in] */__RPC__in HSTRING path,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpCookie * * cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpCookieFactory=_uuidof(IHttpCookieFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpCookieManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpCookieManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpCookieManager[] = L"Windows.Web.Http.IHttpCookieManager";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("7A431780-CD4F-4E57-A84A-5B0A53D6BB96"), exclusiveto, contract] */
                MIDL_INTERFACE("7A431780-CD4F-4E57-A84A-5B0A53D6BB96")
                IHttpCookieManager : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetCookie(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpCookie * cookie,
                        /* [retval, out] */__RPC__out boolean * replaced
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetCookieWithThirdParty(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpCookie * cookie,
                        /* [in] */boolean thirdParty,
                        /* [retval, out] */__RPC__out boolean * replaced
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteCookie(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpCookie * cookie
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCookies(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpCookieManager=_uuidof(IHttpCookieManager);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpFormUrlEncodedContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpFormUrlEncodedContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpFormUrlEncodedContentFactory[] = L"Windows.Web.Http.IHttpFormUrlEncodedContentFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("43F0138C-2F73-4302-B5F3-EAE9238A5E01"), exclusiveto, contract] */
                MIDL_INTERFACE("43F0138C-2F73-4302-B5F3-EAE9238A5E01")
                IHttpFormUrlEncodedContentFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * content,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * formUrlEncodedContent
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpFormUrlEncodedContentFactory=_uuidof(IHttpFormUrlEncodedContentFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMethod
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMethod
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMethod[] = L"Windows.Web.Http.IHttpMethod";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("728D4022-700D-4FE0-AFA5-40299C58DBFD"), exclusiveto, contract] */
                MIDL_INTERFACE("728D4022-700D-4FE0-AFA5-40299C58DBFD")
                IHttpMethod : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Method(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpMethod=_uuidof(IHttpMethod);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMethod;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMethodFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMethod
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMethodFactory[] = L"Windows.Web.Http.IHttpMethodFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("3C51D10D-36D7-40F8-A86D-E759CAF2F83F"), exclusiveto, contract] */
                MIDL_INTERFACE("3C51D10D-36D7-40F8-A86D-E759CAF2F83F")
                IHttpMethodFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING method,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpMethod * * httpMethod
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpMethodFactory=_uuidof(IHttpMethodFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMethodStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMethod
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMethodStatics[] = L"Windows.Web.Http.IHttpMethodStatics";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("64D171F0-D99A-4153-8DC6-D68CC4CCE317"), exclusiveto, contract] */
                MIDL_INTERFACE("64D171F0-D99A-4153-8DC6-D68CC4CCE317")
                IHttpMethodStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Delete(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpMethod * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Get(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpMethod * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Head(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpMethod * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpMethod * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Patch(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpMethod * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Post(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpMethod * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Put(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpMethod * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpMethodStatics=_uuidof(IHttpMethodStatics);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMultipartContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMultipartContent
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IIterable_1_Windows.Web.Http.IHttpContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMultipartContent[] = L"Windows.Web.Http.IHttpMultipartContent";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("DF916AFF-9926-4AC9-AAF1-E0D04EF09BB9"), exclusiveto, contract] */
                MIDL_INTERFACE("DF916AFF-9926-4AC9-AAF1-E0D04EF09BB9")
                IHttpMultipartContent : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Add(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpContent * content
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpMultipartContent=_uuidof(IHttpMultipartContent);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMultipartContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMultipartContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMultipartContentFactory[] = L"Windows.Web.Http.IHttpMultipartContentFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("7EB42E62-0222-4F20-B372-47D5DB5D33B4"), exclusiveto, contract] */
                MIDL_INTERFACE("7EB42E62-0222-4F20-B372-47D5DB5D33B4")
                IHttpMultipartContentFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSubtype(
                        /* [in] */__RPC__in HSTRING subtype,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * multipartContent
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSubtypeAndBoundary(
                        /* [in] */__RPC__in HSTRING subtype,
                        /* [in] */__RPC__in HSTRING boundary,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * multipartContent
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpMultipartContentFactory=_uuidof(IHttpMultipartContentFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMultipartFormDataContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMultipartFormDataContent
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IIterable_1_Windows.Web.Http.IHttpContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMultipartFormDataContent[] = L"Windows.Web.Http.IHttpMultipartFormDataContent";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("64D337E2-E967-4624-B6D1-CF74604A4A42"), exclusiveto, contract] */
                MIDL_INTERFACE("64D337E2-E967-4624-B6D1-CF74604A4A42")
                IHttpMultipartFormDataContent : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Add(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpContent * content
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddWithName(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpContent * content,
                        /* [in] */__RPC__in HSTRING name
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddWithNameAndFileName(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpContent * content,
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING fileName
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpMultipartFormDataContent=_uuidof(IHttpMultipartFormDataContent);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMultipartFormDataContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMultipartFormDataContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMultipartFormDataContentFactory[] = L"Windows.Web.Http.IHttpMultipartFormDataContentFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("A04D7311-5017-4622-93A8-49B24A4FCBFC"), exclusiveto, contract] */
                MIDL_INTERFACE("A04D7311-5017-4622-93A8-49B24A4FCBFC")
                IHttpMultipartFormDataContentFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithBoundary(
                        /* [in] */__RPC__in HSTRING boundary,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * multipartFormDataContent
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpMultipartFormDataContentFactory=_uuidof(IHttpMultipartFormDataContentFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpRequestMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpRequestMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpRequestMessage[] = L"Windows.Web.Http.IHttpRequestMessage";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("F5762B3C-74D4-4811-B5DC-9F8B4E2F9ABF"), exclusiveto, contract] */
                MIDL_INTERFACE("F5762B3C-74D4-4811-B5DC-9F8B4E2F9ABF")
                IHttpRequestMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpContent * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Headers(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::Headers::IHttpRequestHeaderCollection * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Method(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpMethod * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Method(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpMethod * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_IInspectable * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequestUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransportInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpTransportInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpRequestMessage=_uuidof(IHttpRequestMessage);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpRequestMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpRequestMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpRequestMessageFactory[] = L"Windows.Web.Http.IHttpRequestMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("5BAC994E-3886-412E-AEC3-52EC7F25616F"), exclusiveto, contract] */
                MIDL_INTERFACE("5BAC994E-3886-412E-AEC3-52EC7F25616F")
                IHttpRequestMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpMethod * method,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpRequestMessage * * httpRequestMessage
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpRequestMessageFactory=_uuidof(IHttpRequestMessageFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpResponseMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpResponseMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpResponseMessage[] = L"Windows.Web.Http.IHttpResponseMessage";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("FEE200FB-8664-44E0-95D9-42696199BFFC"), exclusiveto, contract] */
                MIDL_INTERFACE("FEE200FB-8664-44E0-95D9-42696199BFFC")
                IHttpResponseMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpContent * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Headers(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::Headers::IHttpResponseHeaderCollection * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSuccessStatusCode(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReasonPhrase(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReasonPhrase(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestMessage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpRequestMessage * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequestMessage(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpRequestMessage * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */__RPC__out ABI::Windows::Web::Http::HttpResponseMessageSource * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */ABI::Windows::Web::Http::HttpResponseMessageSource value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StatusCode(
                        /* [retval, out] */__RPC__out ABI::Windows::Web::Http::HttpStatusCode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StatusCode(
                        /* [in] */ABI::Windows::Web::Http::HttpStatusCode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Version(
                        /* [retval, out] */__RPC__out ABI::Windows::Web::Http::HttpVersion * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Version(
                        /* [in] */ABI::Windows::Web::Http::HttpVersion value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE EnsureSuccessStatusCode(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpResponseMessage * * httpResponseMessage
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpResponseMessage=_uuidof(IHttpResponseMessage);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpResponseMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpResponseMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpResponseMessageFactory[] = L"Windows.Web.Http.IHttpResponseMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("52A8AF99-F095-43DA-B60F-7CFC2BC7EA2F"), exclusiveto, contract] */
                MIDL_INTERFACE("52A8AF99-F095-43DA-B60F-7CFC2BC7EA2F")
                IHttpResponseMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Web::Http::HttpStatusCode statusCode,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpResponseMessage * * httpResponseMessage
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpResponseMessageFactory=_uuidof(IHttpResponseMessageFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpStreamContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpStreamContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpStreamContentFactory[] = L"Windows.Web.Http.IHttpStreamContentFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("F3E64D9D-F725-407E-942F-0EDA189809F4"), exclusiveto, contract] */
                MIDL_INTERFACE("F3E64D9D-F725-407E-942F-0EDA189809F4")
                IHttpStreamContentFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromInputStream(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * content,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * streamContent
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpStreamContentFactory=_uuidof(IHttpStreamContentFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpStringContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpStringContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpStringContentFactory[] = L"Windows.Web.Http.IHttpStringContentFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("46649D5B-2E93-48EB-8E61-19677878E57F"), exclusiveto, contract] */
                MIDL_INTERFACE("46649D5B-2E93-48EB-8E61-19677878E57F")
                IHttpStringContentFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromString(
                        /* [in] */__RPC__in HSTRING content,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * stringContent
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromStringWithEncoding(
                        /* [in] */__RPC__in HSTRING content,
                        /* [in] */ABI::Windows::Storage::Streams::UnicodeEncoding encoding,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * stringContent
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromStringWithEncodingAndMediaType(
                        /* [in] */__RPC__in HSTRING content,
                        /* [in] */ABI::Windows::Storage::Streams::UnicodeEncoding encoding,
                        /* [in] */__RPC__in HSTRING mediaType,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpContent * * stringContent
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpStringContentFactory=_uuidof(IHttpStringContentFactory);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpTransportInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpTransportInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpTransportInformation[] = L"Windows.Web.Http.IHttpTransportInformation";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                /* [object, uuid("70127198-C6A7-4ED0-833A-83FD8B8F178D"), exclusiveto, contract] */
                MIDL_INTERFACE("70127198-C6A7-4ED0-833A-83FD8B8F178D")
                IHttpTransportInformation : IInspectable
                {
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
                    
                };

                extern MIDL_CONST_ID IID & IID_IHttpTransportInformation=_uuidof(IHttpTransportInformation);
                
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpBufferContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpBufferContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpBufferContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpBufferContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpBufferContent[] = L"Windows.Web.Http.HttpBufferContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpClientFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpClient ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpClient_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpClient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpClient[] = L"Windows.Web.Http.HttpClient";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpCookie
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpCookieFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpCookie ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpCookie_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpCookie_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpCookie[] = L"Windows.Web.Http.HttpCookie";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpCookieCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Web.Http.HttpCookie ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Web.Http.HttpCookie
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpCookieCollection_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpCookieCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpCookieCollection[] = L"Windows.Web.Http.HttpCookieCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpCookieManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpCookieManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpCookieManager_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpCookieManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpCookieManager[] = L"Windows.Web.Http.HttpCookieManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpFormUrlEncodedContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpFormUrlEncodedContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpFormUrlEncodedContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpFormUrlEncodedContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpFormUrlEncodedContent[] = L"Windows.Web.Http.HttpFormUrlEncodedContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpMethod
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpMethodFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Web.Http.IHttpMethodStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpMethod ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpMethod_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpMethod_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpMethod[] = L"Windows.Web.Http.HttpMethod";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpMultipartContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpMultipartContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Web.Http.IHttpMultipartContent
 *    Windows.Foundation.Collections.IIterable_1_Windows.Web.Http.IHttpContent
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpMultipartContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpMultipartContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpMultipartContent[] = L"Windows.Web.Http.HttpMultipartContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpMultipartFormDataContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpMultipartFormDataContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Web.Http.IHttpMultipartFormDataContent
 *    Windows.Foundation.Collections.IIterable_1_Windows.Web.Http.IHttpContent
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpMultipartFormDataContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpMultipartFormDataContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpMultipartFormDataContent[] = L"Windows.Web.Http.HttpMultipartFormDataContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpRequestMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpRequestMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpRequestMessage ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpRequestMessage_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpRequestMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpRequestMessage[] = L"Windows.Web.Http.HttpRequestMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpResponseMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpResponseMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpResponseMessage ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpResponseMessage_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpResponseMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpResponseMessage[] = L"Windows.Web.Http.HttpResponseMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpStreamContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpStreamContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpStreamContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpStreamContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpStreamContent[] = L"Windows.Web.Http.HttpStreamContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpStringContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpStringContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpStringContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpStringContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpStringContent[] = L"Windows.Web.Http.HttpStringContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpTransportInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpTransportInformation ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpTransportInformation_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpTransportInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpTransportInformation[] = L"Windows.Web.Http.HttpTransportInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpClient __x_ABI_CWindows_CWeb_CHttp_CIHttpClient;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpContent __x_ABI_CWindows_CWeb_CHttp_CIHttpContent;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_FWD_DEFINED__

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
#if !defined(____FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHttpCookie;

typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHttpCookieVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHttpCookieVtbl;

interface __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHttpCookieVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHttpCookie;

typedef  struct __FIIterable_1_Windows__CWeb__CHttp__CHttpCookieVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHttpCookie **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHttpCookieVtbl;

interface __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHttpCookieVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHttpMethod;

typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHttpMethodVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHttpMethodVtbl;

interface __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHttpMethodVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHttpMethod;

typedef  struct __FIIterable_1_Windows__CWeb__CHttp__CHttpMethodVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHttpMethodVtbl;

interface __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHttpMethodVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CIHttpContent;

typedef struct __FIIterator_1_Windows__CWeb__CHttp__CIHttpContentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CIHttpContentVtbl;

interface __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CIHttpContentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CHttp__CIHttpContent_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CIHttpContent;

typedef  struct __FIIterable_1_Windows__CWeb__CHttp__CIHttpContentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CIHttpContent **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CIHttpContentVtbl;

interface __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CIHttpContentVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CHttp__CIHttpContent_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie;

typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookieVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookieVtbl;

interface __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookieVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod;

typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethodVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethodVtbl;

interface __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethodVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CWeb__CHttp__CHttpCookie __FIVector_1_Windows__CWeb__CHttp__CHttpCookie;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHttpCookie;

typedef struct __FIVector_1_Windows__CWeb__CHttp__CHttpCookieVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This, /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * *value);

    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHttpCookieVtbl;

interface __FIVector_1_Windows__CWeb__CHttp__CHttpCookie
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHttpCookieVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpCookie_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CWeb__CHttp__CHttpCookie_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CWeb__CHttp__CHttpMethod __FIVector_1_Windows__CWeb__CHttp__CHttpMethod;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHttpMethod;

typedef struct __FIVector_1_Windows__CWeb__CHttp__CHttpMethodVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This, /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *value);

    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHttpMethodVtbl;

interface __FIVector_1_Windows__CWeb__CHttp__CHttpMethod
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHttpMethodVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CWeb__CHttp__CHttpMethod_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CWeb__CHttp__CHttpMethod_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CWeb_CHttp_CHttpProgress;

#if !defined(____FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress;

typedef interface __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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


#if !defined(____FIAsyncOperationProgressHandler_2_UINT64_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_UINT64_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_UINT64_UINT64 __FIAsyncOperationProgressHandler_2_UINT64_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_UINT64_UINT64;

typedef interface __FIAsyncOperationWithProgress_2_UINT64_UINT64 __FIAsyncOperationWithProgress_2_UINT64_UINT64;

typedef struct __FIAsyncOperationProgressHandler_2_UINT64_UINT64Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT64_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT64_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT64_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT64_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_UINT64_UINT64Vtbl;

interface __FIAsyncOperationProgressHandler_2_UINT64_UINT64
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_UINT64_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_UINT64_UINT64_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_UINT64_UINT64 __FIAsyncOperationWithProgress_2_UINT64_UINT64;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgress_2_UINT64_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_UINT64_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_UINT64_UINT64 __FIAsyncOperationWithProgress_2_UINT64_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_UINT64_UINT64;

typedef struct __FIAsyncOperationWithProgress_2_UINT64_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_UINT64_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_UINT64_UINT64 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __int64 *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_UINT64_UINT64Vtbl;

interface __FIAsyncOperationWithProgress_2_UINT64_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_UINT64_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_UINT64_UINT64_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationProgressHandler_2_HSTRING_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_HSTRING_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_HSTRING_UINT64 __FIAsyncOperationProgressHandler_2_HSTRING_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_HSTRING_UINT64;

typedef interface __FIAsyncOperationWithProgress_2_HSTRING_UINT64 __FIAsyncOperationWithProgress_2_HSTRING_UINT64;

typedef struct __FIAsyncOperationProgressHandler_2_HSTRING_UINT64Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_HSTRING_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_HSTRING_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_HSTRING_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_HSTRING_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_HSTRING_UINT64 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_HSTRING_UINT64Vtbl;

interface __FIAsyncOperationProgressHandler_2_HSTRING_UINT64
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_HSTRING_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_HSTRING_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_HSTRING_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_HSTRING_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_HSTRING_UINT64_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_HSTRING_UINT64_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64 __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_HSTRING_UINT64 __FIAsyncOperationWithProgress_2_HSTRING_UINT64;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_HSTRING_UINT64 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgress_2_HSTRING_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_HSTRING_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_HSTRING_UINT64 __FIAsyncOperationWithProgress_2_HSTRING_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_HSTRING_UINT64;

typedef struct __FIAsyncOperationWithProgress_2_HSTRING_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_HSTRING_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_HSTRING_UINT64 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_HSTRING_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_HSTRING_UINT64Vtbl;

interface __FIAsyncOperationWithProgress_2_HSTRING_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_HSTRING_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_HSTRING_UINT64_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_HSTRING_UINT64_INTERFACE_DEFINED__


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



#if !defined(____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_IInspectable_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;

typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt IInspectable * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;

interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_IInspectable_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_IInspectable_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_IInspectable_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_IInspectable_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


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



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;

#endif // ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity;






typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;







#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding;




#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CWeb_CHttp_CHttpCompletionOption __x_ABI_CWindows_CWeb_CHttp_CHttpCompletionOption;


typedef enum __x_ABI_CWindows_CWeb_CHttp_CHttpProgressStage __x_ABI_CWindows_CWeb_CHttp_CHttpProgressStage;


typedef enum __x_ABI_CWindows_CWeb_CHttp_CHttpResponseMessageSource __x_ABI_CWindows_CWeb_CHttp_CHttpResponseMessageSource;


typedef enum __x_ABI_CWindows_CWeb_CHttp_CHttpStatusCode __x_ABI_CWindows_CWeb_CHttp_CHttpStatusCode;


typedef enum __x_ABI_CWindows_CWeb_CHttp_CHttpVersion __x_ABI_CWindows_CWeb_CHttp_CHttpVersion;


typedef struct __x_ABI_CWindows_CWeb_CHttp_CHttpProgress __x_ABI_CWindows_CWeb_CHttp_CHttpProgress;













































/*
 *
 * Struct Windows.Web.Http.HttpCompletionOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CHttp_CHttpCompletionOption
{
    HttpCompletionOption_ResponseContentRead = 0,
    HttpCompletionOption_ResponseHeadersRead = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.HttpProgressStage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CHttp_CHttpProgressStage
{
    HttpProgressStage_None = 0,
    HttpProgressStage_DetectingProxy = 10,
    HttpProgressStage_ResolvingName = 20,
    HttpProgressStage_ConnectingToServer = 30,
    HttpProgressStage_NegotiatingSsl = 40,
    HttpProgressStage_SendingHeaders = 50,
    HttpProgressStage_SendingContent = 60,
    HttpProgressStage_WaitingForResponse = 70,
    HttpProgressStage_ReceivingHeaders = 80,
    HttpProgressStage_ReceivingContent = 90,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.HttpResponseMessageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CHttp_CHttpResponseMessageSource
{
    HttpResponseMessageSource_None = 0,
    HttpResponseMessageSource_Cache = 1,
    HttpResponseMessageSource_Network = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.HttpStatusCode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CHttp_CHttpStatusCode
{
    HttpStatusCode_None = 0,
    HttpStatusCode_Continue = 100,
    HttpStatusCode_SwitchingProtocols = 101,
    HttpStatusCode_Processing = 102,
    HttpStatusCode_Ok = 200,
    HttpStatusCode_Created = 201,
    HttpStatusCode_Accepted = 202,
    HttpStatusCode_NonAuthoritativeInformation = 203,
    HttpStatusCode_NoContent = 204,
    HttpStatusCode_ResetContent = 205,
    HttpStatusCode_PartialContent = 206,
    HttpStatusCode_MultiStatus = 207,
    HttpStatusCode_AlreadyReported = 208,
    HttpStatusCode_IMUsed = 226,
    HttpStatusCode_MultipleChoices = 300,
    HttpStatusCode_MovedPermanently = 301,
    HttpStatusCode_Found = 302,
    HttpStatusCode_SeeOther = 303,
    HttpStatusCode_NotModified = 304,
    HttpStatusCode_UseProxy = 305,
    HttpStatusCode_TemporaryRedirect = 307,
    HttpStatusCode_PermanentRedirect = 308,
    HttpStatusCode_BadRequest = 400,
    HttpStatusCode_Unauthorized = 401,
    HttpStatusCode_PaymentRequired = 402,
    HttpStatusCode_Forbidden = 403,
    HttpStatusCode_NotFound = 404,
    HttpStatusCode_MethodNotAllowed = 405,
    HttpStatusCode_NotAcceptable = 406,
    HttpStatusCode_ProxyAuthenticationRequired = 407,
    HttpStatusCode_RequestTimeout = 408,
    HttpStatusCode_Conflict = 409,
    HttpStatusCode_Gone = 410,
    HttpStatusCode_LengthRequired = 411,
    HttpStatusCode_PreconditionFailed = 412,
    HttpStatusCode_RequestEntityTooLarge = 413,
    HttpStatusCode_RequestUriTooLong = 414,
    HttpStatusCode_UnsupportedMediaType = 415,
    HttpStatusCode_RequestedRangeNotSatisfiable = 416,
    HttpStatusCode_ExpectationFailed = 417,
    HttpStatusCode_UnprocessableEntity = 422,
    HttpStatusCode_Locked = 423,
    HttpStatusCode_FailedDependency = 424,
    HttpStatusCode_UpgradeRequired = 426,
    HttpStatusCode_PreconditionRequired = 428,
    HttpStatusCode_TooManyRequests = 429,
    HttpStatusCode_RequestHeaderFieldsTooLarge = 431,
    HttpStatusCode_InternalServerError = 500,
    HttpStatusCode_NotImplemented = 501,
    HttpStatusCode_BadGateway = 502,
    HttpStatusCode_ServiceUnavailable = 503,
    HttpStatusCode_GatewayTimeout = 504,
    HttpStatusCode_HttpVersionNotSupported = 505,
    HttpStatusCode_VariantAlsoNegotiates = 506,
    HttpStatusCode_InsufficientStorage = 507,
    HttpStatusCode_LoopDetected = 508,
    HttpStatusCode_NotExtended = 510,
    HttpStatusCode_NetworkAuthenticationRequired = 511,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.HttpVersion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CHttp_CHttpVersion
{
    HttpVersion_None = 0,
    HttpVersion_Http10 = 1,
    HttpVersion_Http11 = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    HttpVersion_Http20 = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Http.HttpProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CWeb_CHttp_CHttpProgress
{
    __x_ABI_CWindows_CWeb_CHttp_CHttpProgressStage Stage;
    UINT64 BytesSent;
    __FIReference_1_UINT64 * TotalBytesToSend;
    UINT64 BytesReceived;
    __FIReference_1_UINT64 * TotalBytesToReceive;
    UINT32 Retries;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpBufferContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpBufferContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpBufferContentFactory[] = L"Windows.Web.Http.IHttpBufferContentFactory";
/* [object, uuid("BC20C193-C41F-4FF7-9123-6435736EADC2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * content,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * bufferContent
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromBufferWithOffset )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * content,
        /* [in] */UINT32 offset,
        /* [in] */UINT32 count,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * bufferContent
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_CreateFromBuffer(This,content,bufferContent) \
    ( (This)->lpVtbl->CreateFromBuffer(This,content,bufferContent) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_CreateFromBufferWithOffset(This,content,offset,count,bufferContent) \
    ( (This)->lpVtbl->CreateFromBufferWithOffset(This,content,offset,count,bufferContent) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpBufferContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpClient
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpClient[] = L"Windows.Web.Http.IHttpClient";
/* [object, uuid("7FDA1151-3574-4880-A8BA-E6B1E0061F3D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetWithOptionAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__x_ABI_CWindows_CWeb_CHttp_CHttpCompletionOption completionOption,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetBufferAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetInputStreamAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetStringAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_HSTRING_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *PostAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * content,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *PutAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * content,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SendRequestAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * request,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SendRequestWithOptionAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * request,
        /* [in] */__x_ABI_CWindows_CWeb_CHttp_CHttpCompletionOption completionOption,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultRequestHeaders )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpClientVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpClient
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpClientVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_DeleteAsync(This,uri,operation) \
    ( (This)->lpVtbl->DeleteAsync(This,uri,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_GetAsync(This,uri,operation) \
    ( (This)->lpVtbl->GetAsync(This,uri,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_GetWithOptionAsync(This,uri,completionOption,operation) \
    ( (This)->lpVtbl->GetWithOptionAsync(This,uri,completionOption,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_GetBufferAsync(This,uri,operation) \
    ( (This)->lpVtbl->GetBufferAsync(This,uri,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_GetInputStreamAsync(This,uri,operation) \
    ( (This)->lpVtbl->GetInputStreamAsync(This,uri,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_GetStringAsync(This,uri,operation) \
    ( (This)->lpVtbl->GetStringAsync(This,uri,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_PostAsync(This,uri,content,operation) \
    ( (This)->lpVtbl->PostAsync(This,uri,content,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_PutAsync(This,uri,content,operation) \
    ( (This)->lpVtbl->PutAsync(This,uri,content,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_SendRequestAsync(This,request,operation) \
    ( (This)->lpVtbl->SendRequestAsync(This,request,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_SendRequestWithOptionAsync(This,request,completionOption,operation) \
    ( (This)->lpVtbl->SendRequestWithOptionAsync(This,request,completionOption,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient_get_DefaultRequestHeaders(This,value) \
    ( (This)->lpVtbl->get_DefaultRequestHeaders(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpClient;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpClientFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpClientFactory[] = L"Windows.Web.Http.IHttpClientFactory";
/* [object, uuid("C30C4ECA-E3FA-4F99-AFB4-63CC65009462"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * filter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * * client
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_Create(This,filter,client) \
    ( (This)->lpVtbl->Create(This,filter,client) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpClientFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpContent
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
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpContent[] = L"Windows.Web.Http.IHttpContent";
/* [object, uuid("6B14A441-FBA7-4BD2-AF0A-839DE7C295DA"), contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * * value
        );
    HRESULT ( STDMETHODCALLTYPE *BufferAllAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReadAsBufferAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReadAsInputStreamAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReadAsStringAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_HSTRING_UINT64 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryComputeLength )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
        /* [out] */__RPC__out UINT64 * length,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *WriteToStreamAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * outputStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpContentVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpContent
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpContentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_get_Headers(This,value) \
    ( (This)->lpVtbl->get_Headers(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_BufferAllAsync(This,operation) \
    ( (This)->lpVtbl->BufferAllAsync(This,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_ReadAsBufferAsync(This,operation) \
    ( (This)->lpVtbl->ReadAsBufferAsync(This,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_ReadAsInputStreamAsync(This,operation) \
    ( (This)->lpVtbl->ReadAsInputStreamAsync(This,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_ReadAsStringAsync(This,operation) \
    ( (This)->lpVtbl->ReadAsStringAsync(This,operation) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_TryComputeLength(This,length,succeeded) \
    ( (This)->lpVtbl->TryComputeLength(This,length,succeeded) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpContent_WriteToStreamAsync(This,outputStream,operation) \
    ( (This)->lpVtbl->WriteToStreamAsync(This,outputStream,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpContent;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpCookie
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpCookie
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpCookie[] = L"Windows.Web.Http.IHttpCookie";
/* [object, uuid("1F5488E2-CC2D-4779-86A7-88F10687D249"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Domain )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Expires )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Expires )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HttpOnly )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HttpOnly )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Secure )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Secure )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_get_Domain(This,value) \
    ( (This)->lpVtbl->get_Domain(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_get_Path(This,value) \
    ( (This)->lpVtbl->get_Path(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_get_Expires(This,value) \
    ( (This)->lpVtbl->get_Expires(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_put_Expires(This,value) \
    ( (This)->lpVtbl->put_Expires(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_get_HttpOnly(This,value) \
    ( (This)->lpVtbl->get_HttpOnly(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_put_HttpOnly(This,value) \
    ( (This)->lpVtbl->put_HttpOnly(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_get_Secure(This,value) \
    ( (This)->lpVtbl->get_Secure(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_put_Secure(This,value) \
    ( (This)->lpVtbl->put_Secure(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpCookie;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpCookieFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpCookie
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpCookieFactory[] = L"Windows.Web.Http.IHttpCookieFactory";
/* [object, uuid("6A0585A9-931C-4CD1-A96D-C21701785C5F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING domain,
        /* [in] */__RPC__in HSTRING path,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * * cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_Create(This,name,domain,path,cookie) \
    ( (This)->lpVtbl->Create(This,name,domain,path,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpCookieManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpCookieManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpCookieManager[] = L"Windows.Web.Http.IHttpCookieManager";
/* [object, uuid("7A431780-CD4F-4E57-A84A-5B0A53D6BB96"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *SetCookie )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * cookie,
        /* [retval, out] */__RPC__out boolean * replaced
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetCookieWithThirdParty )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * cookie,
        /* [in] */boolean thirdParty,
        /* [retval, out] */__RPC__out boolean * replaced
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteCookie )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie * cookie
        );
    HRESULT ( STDMETHODCALLTYPE *GetCookies )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManagerVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_SetCookie(This,cookie,replaced) \
    ( (This)->lpVtbl->SetCookie(This,cookie,replaced) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_SetCookieWithThirdParty(This,cookie,thirdParty,replaced) \
    ( (This)->lpVtbl->SetCookieWithThirdParty(This,cookie,thirdParty,replaced) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_DeleteCookie(This,cookie) \
    ( (This)->lpVtbl->DeleteCookie(This,cookie) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_GetCookies(This,uri,value) \
    ( (This)->lpVtbl->GetCookies(This,uri,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpFormUrlEncodedContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpFormUrlEncodedContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpFormUrlEncodedContentFactory[] = L"Windows.Web.Http.IHttpFormUrlEncodedContentFactory";
/* [object, uuid("43F0138C-2F73-4302-B5F3-EAE9238A5E01"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * content,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * formUrlEncodedContent
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_Create(This,content,formUrlEncodedContent) \
    ( (This)->lpVtbl->Create(This,content,formUrlEncodedContent) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpFormUrlEncodedContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMethod
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMethod
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMethod[] = L"Windows.Web.Http.IHttpMethod";
/* [object, uuid("728D4022-700D-4FE0-AFA5-40299C58DBFD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Method )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_get_Method(This,value) \
    ( (This)->lpVtbl->get_Method(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMethod;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethod_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMethodFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMethod
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMethodFactory[] = L"Windows.Web.Http.IHttpMethodFactory";
/* [object, uuid("3C51D10D-36D7-40F8-A86D-E759CAF2F83F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory * This,
        /* [in] */__RPC__in HSTRING method,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * * httpMethod
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_Create(This,method,httpMethod) \
    ( (This)->lpVtbl->Create(This,method,httpMethod) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMethodStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMethod
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMethodStatics[] = L"Windows.Web.Http.IHttpMethodStatics";
/* [object, uuid("64D171F0-D99A-4153-8DC6-D68CC4CCE317"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delete )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Get )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Head )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Patch )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Post )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Put )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStaticsVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_get_Delete(This,value) \
    ( (This)->lpVtbl->get_Delete(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_get_Get(This,value) \
    ( (This)->lpVtbl->get_Get(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_get_Head(This,value) \
    ( (This)->lpVtbl->get_Head(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_get_Options(This,value) \
    ( (This)->lpVtbl->get_Options(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_get_Patch(This,value) \
    ( (This)->lpVtbl->get_Patch(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_get_Post(This,value) \
    ( (This)->lpVtbl->get_Post(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_get_Put(This,value) \
    ( (This)->lpVtbl->get_Put(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMethodStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMultipartContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMultipartContent
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IIterable_1_Windows.Web.Http.IHttpContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMultipartContent[] = L"Windows.Web.Http.IHttpMultipartContent";
/* [object, uuid("DF916AFF-9926-4AC9-AAF1-E0D04EF09BB9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * content
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_Add(This,content) \
    ( (This)->lpVtbl->Add(This,content) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMultipartContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMultipartContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMultipartContentFactory[] = L"Windows.Web.Http.IHttpMultipartContentFactory";
/* [object, uuid("7EB42E62-0222-4F20-B372-47D5DB5D33B4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithSubtype )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory * This,
        /* [in] */__RPC__in HSTRING subtype,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * multipartContent
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithSubtypeAndBoundary )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory * This,
        /* [in] */__RPC__in HSTRING subtype,
        /* [in] */__RPC__in HSTRING boundary,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * multipartContent
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_CreateWithSubtype(This,subtype,multipartContent) \
    ( (This)->lpVtbl->CreateWithSubtype(This,subtype,multipartContent) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_CreateWithSubtypeAndBoundary(This,subtype,boundary,multipartContent) \
    ( (This)->lpVtbl->CreateWithSubtypeAndBoundary(This,subtype,boundary,multipartContent) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMultipartFormDataContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMultipartFormDataContent
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IIterable_1_Windows.Web.Http.IHttpContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMultipartFormDataContent[] = L"Windows.Web.Http.IHttpMultipartFormDataContent";
/* [object, uuid("64D337E2-E967-4624-B6D1-CF74604A4A42"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * content
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddWithName )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * content,
        /* [in] */__RPC__in HSTRING name
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddWithNameAndFileName )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * content,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING fileName
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_Add(This,content) \
    ( (This)->lpVtbl->Add(This,content) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_AddWithName(This,content,name) \
    ( (This)->lpVtbl->AddWithName(This,content,name) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_AddWithNameAndFileName(This,content,name,fileName) \
    ( (This)->lpVtbl->AddWithNameAndFileName(This,content,name,fileName) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpMultipartFormDataContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpMultipartFormDataContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpMultipartFormDataContentFactory[] = L"Windows.Web.Http.IHttpMultipartFormDataContentFactory";
/* [object, uuid("A04D7311-5017-4622-93A8-49B24A4FCBFC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithBoundary )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory * This,
        /* [in] */__RPC__in HSTRING boundary,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * multipartFormDataContent
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_CreateWithBoundary(This,boundary,multipartFormDataContent) \
    ( (This)->lpVtbl->CreateWithBoundary(This,boundary,multipartFormDataContent) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpMultipartFormDataContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpRequestMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpRequestMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpRequestMessage[] = L"Windows.Web.Http.IHttpRequestMessage";
/* [object, uuid("F5762B3C-74D4-4811-B5DC-9F8B4E2F9ABF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Method )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Method )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestUri )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequestUri )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransportInformation )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_get_Headers(This,value) \
    ( (This)->lpVtbl->get_Headers(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_get_Method(This,value) \
    ( (This)->lpVtbl->get_Method(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_put_Method(This,value) \
    ( (This)->lpVtbl->put_Method(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_get_RequestUri(This,value) \
    ( (This)->lpVtbl->get_RequestUri(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_put_RequestUri(This,value) \
    ( (This)->lpVtbl->put_RequestUri(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_get_TransportInformation(This,value) \
    ( (This)->lpVtbl->get_TransportInformation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpRequestMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpRequestMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpRequestMessageFactory[] = L"Windows.Web.Http.IHttpRequestMessageFactory";
/* [object, uuid("5BAC994E-3886-412E-AEC3-52EC7F25616F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * method,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * * httpRequestMessage
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_Create(This,method,uri,httpRequestMessage) \
    ( (This)->lpVtbl->Create(This,method,uri,httpRequestMessage) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpResponseMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpResponseMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpResponseMessage[] = L"Windows.Web.Http.IHttpResponseMessage";
/* [object, uuid("FEE200FB-8664-44E0-95D9-42696199BFFC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSuccessStatusCode )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReasonPhrase )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReasonPhrase )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestMessage )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequestMessage )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CHttp_CHttpResponseMessageSource * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [in] */__x_ABI_CWindows_CWeb_CHttp_CHttpResponseMessageSource value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CHttp_CHttpStatusCode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StatusCode )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [in] */__x_ABI_CWindows_CWeb_CHttp_CHttpStatusCode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CHttp_CHttpVersion * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Version )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [in] */__x_ABI_CWindows_CWeb_CHttp_CHttpVersion value
        );
    HRESULT ( STDMETHODCALLTYPE *EnsureSuccessStatusCode )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * httpResponseMessage
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_get_Headers(This,value) \
    ( (This)->lpVtbl->get_Headers(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_get_IsSuccessStatusCode(This,value) \
    ( (This)->lpVtbl->get_IsSuccessStatusCode(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_get_ReasonPhrase(This,value) \
    ( (This)->lpVtbl->get_ReasonPhrase(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_put_ReasonPhrase(This,value) \
    ( (This)->lpVtbl->put_ReasonPhrase(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_get_RequestMessage(This,value) \
    ( (This)->lpVtbl->get_RequestMessage(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_put_RequestMessage(This,value) \
    ( (This)->lpVtbl->put_RequestMessage(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_put_Source(This,value) \
    ( (This)->lpVtbl->put_Source(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_get_StatusCode(This,value) \
    ( (This)->lpVtbl->get_StatusCode(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_put_StatusCode(This,value) \
    ( (This)->lpVtbl->put_StatusCode(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_get_Version(This,value) \
    ( (This)->lpVtbl->get_Version(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_put_Version(This,value) \
    ( (This)->lpVtbl->put_Version(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_EnsureSuccessStatusCode(This,httpResponseMessage) \
    ( (This)->lpVtbl->EnsureSuccessStatusCode(This,httpResponseMessage) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpResponseMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpResponseMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpResponseMessageFactory[] = L"Windows.Web.Http.IHttpResponseMessageFactory";
/* [object, uuid("52A8AF99-F095-43DA-B60F-7CFC2BC7EA2F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory * This,
        /* [in] */__x_ABI_CWindows_CWeb_CHttp_CHttpStatusCode statusCode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * httpResponseMessage
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_Create(This,statusCode,httpResponseMessage) \
    ( (This)->lpVtbl->Create(This,statusCode,httpResponseMessage) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpStreamContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpStreamContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpStreamContentFactory[] = L"Windows.Web.Http.IHttpStreamContentFactory";
/* [object, uuid("F3E64D9D-F725-407E-942F-0EDA189809F4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromInputStream )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * content,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * streamContent
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_CreateFromInputStream(This,content,streamContent) \
    ( (This)->lpVtbl->CreateFromInputStream(This,content,streamContent) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpStreamContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpStringContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpStringContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpStringContentFactory[] = L"Windows.Web.Http.IHttpStringContentFactory";
/* [object, uuid("46649D5B-2E93-48EB-8E61-19677878E57F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromString )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory * This,
        /* [in] */__RPC__in HSTRING content,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * stringContent
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromStringWithEncoding )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory * This,
        /* [in] */__RPC__in HSTRING content,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * stringContent
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromStringWithEncodingAndMediaType )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory * This,
        /* [in] */__RPC__in HSTRING content,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding encoding,
        /* [in] */__RPC__in HSTRING mediaType,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpContent * * stringContent
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_CreateFromString(This,content,stringContent) \
    ( (This)->lpVtbl->CreateFromString(This,content,stringContent) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_CreateFromStringWithEncoding(This,content,encoding,stringContent) \
    ( (This)->lpVtbl->CreateFromStringWithEncoding(This,content,encoding,stringContent) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_CreateFromStringWithEncodingAndMediaType(This,content,encoding,mediaType,stringContent) \
    ( (This)->lpVtbl->CreateFromStringWithEncodingAndMediaType(This,content,encoding,mediaType,stringContent) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpStringContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Http.IHttpTransportInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Http.HttpTransportInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_IHttpTransportInformation[] = L"Windows.Web.Http.IHttpTransportInformation";
/* [object, uuid("70127198-C6A7-4ED0-833A-83FD8B8F178D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificate )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrorSeverity )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrors )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerIntermediateCertificates )(
        __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformationVtbl;

interface __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_get_ServerCertificate(This,value) \
    ( (This)->lpVtbl->get_ServerCertificate(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_get_ServerCertificateErrorSeverity(This,value) \
    ( (This)->lpVtbl->get_ServerCertificateErrorSeverity(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_get_ServerCertificateErrors(This,value) \
    ( (This)->lpVtbl->get_ServerCertificateErrors(This,value) )

#define __x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_get_ServerIntermediateCertificates(This,value) \
    ( (This)->lpVtbl->get_ServerIntermediateCertificates(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation;
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CIHttpTransportInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpBufferContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpBufferContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpBufferContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpBufferContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpBufferContent[] = L"Windows.Web.Http.HttpBufferContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpClientFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpClient ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpClient_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpClient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpClient[] = L"Windows.Web.Http.HttpClient";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpCookie
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpCookieFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpCookie ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpCookie_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpCookie_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpCookie[] = L"Windows.Web.Http.HttpCookie";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpCookieCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Web.Http.HttpCookie ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Web.Http.HttpCookie
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpCookieCollection_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpCookieCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpCookieCollection[] = L"Windows.Web.Http.HttpCookieCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpCookieManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpCookieManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpCookieManager_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpCookieManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpCookieManager[] = L"Windows.Web.Http.HttpCookieManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpFormUrlEncodedContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpFormUrlEncodedContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpFormUrlEncodedContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpFormUrlEncodedContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpFormUrlEncodedContent[] = L"Windows.Web.Http.HttpFormUrlEncodedContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpMethod
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpMethodFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Web.Http.IHttpMethodStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpMethod ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpMethod_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpMethod_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpMethod[] = L"Windows.Web.Http.HttpMethod";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpMultipartContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpMultipartContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Web.Http.IHttpMultipartContent
 *    Windows.Foundation.Collections.IIterable_1_Windows.Web.Http.IHttpContent
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpMultipartContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpMultipartContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpMultipartContent[] = L"Windows.Web.Http.HttpMultipartContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpMultipartFormDataContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpMultipartFormDataContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Web.Http.IHttpMultipartFormDataContent
 *    Windows.Foundation.Collections.IIterable_1_Windows.Web.Http.IHttpContent
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpMultipartFormDataContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpMultipartFormDataContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpMultipartFormDataContent[] = L"Windows.Web.Http.HttpMultipartFormDataContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpRequestMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpRequestMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpRequestMessage ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpRequestMessage_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpRequestMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpRequestMessage[] = L"Windows.Web.Http.HttpRequestMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpResponseMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpResponseMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpResponseMessage ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpResponseMessage_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpResponseMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpResponseMessage[] = L"Windows.Web.Http.HttpResponseMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpStreamContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpStreamContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpStreamContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpStreamContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpStreamContent[] = L"Windows.Web.Http.HttpStreamContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpStringContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Http.IHttpStringContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpContent ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpStringContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpStringContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpStringContent[] = L"Windows.Web.Http.HttpStringContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Http.HttpTransportInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Web.Http.IHttpTransportInformation ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Http_HttpTransportInformation_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_HttpTransportInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_HttpTransportInformation[] = L"Windows.Web.Http.HttpTransportInformation";
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
#endif // __windows2Eweb2Ehttp_p_h__

#endif // __windows2Eweb2Ehttp_h__
