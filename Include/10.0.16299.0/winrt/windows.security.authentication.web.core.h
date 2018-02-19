/* Header file automatically generated from windows.security.authentication.web.core.idl */
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
#ifndef __windows2Esecurity2Eauthentication2Eweb2Ecore_h__
#define __windows2Esecurity2Eauthentication2Eweb2Ecore_h__
#ifndef __windows2Esecurity2Eauthentication2Eweb2Ecore_p_h__
#define __windows2Esecurity2Eauthentication2Eweb2Ecore_p_h__


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
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebAccountEventArgs;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs ABI::Windows::Security::Authentication::Web::Core::IWebAccountEventArgs

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebAccountMonitor;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebAuthenticationCoreManagerStatics;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics ABI::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebAuthenticationCoreManagerStatics2;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 ABI::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebAuthenticationCoreManagerStatics3;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 ABI::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebProviderError;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError ABI::Windows::Security::Authentication::Web::Core::IWebProviderError

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebProviderErrorFactory;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory ABI::Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebTokenRequest;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebTokenRequest2;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest2

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebTokenRequest3;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest3

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebTokenRequestFactory;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebTokenRequestResult;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebTokenResponse;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebTokenResponseFactory;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        class WebTokenResponse;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_USE
#define DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f080b0c9-a095-5b3a-a1dc-d17e7d2982c7"))
IIterator<ABI::Windows::Security::Authentication::Web::Core::WebTokenResponse*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Core::WebTokenResponse*, ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Authentication.Web.Core.WebTokenResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Authentication::Web::Core::WebTokenResponse*> __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_t;
#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse*>
//#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_USE
#define DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7e5bb7ec-bbd7-5575-9a61-f5815fa22a0e"))
IIterable<ABI::Windows::Security::Authentication::Web::Core::WebTokenResponse*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Core::WebTokenResponse*, ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Authentication.Web.Core.WebTokenResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Authentication::Web::Core::WebTokenResponse*> __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_t;
#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse*>
//#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("199e065c-8195-55da-9c10-8aeaf9ac1062"))
IVectorView<ABI::Windows::Security::Authentication::Web::Core::WebTokenResponse*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Core::WebTokenResponse*, ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Authentication.Web.Core.WebTokenResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Authentication::Web::Core::WebTokenResponse*> __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_t;
#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse*>
//#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        class WebTokenRequestResult;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("deb54b22-70f2-55ab-97c0-6cbdc5ddb6f0"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*, ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Web.Core.WebTokenRequestResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0a815852-7c44-5674-b3d2-fa2e4c1e46c9"))
IAsyncOperation<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*, ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Web.Core.WebTokenRequestResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        class WebAccountMonitor;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c8cb498d-e0da-52a1-abf9-7198c7f5cb42"))
ITypedEventHandler<ABI::Windows::Security::Authentication::Web::Core::WebAccountMonitor*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Core::WebAccountMonitor*, ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Security.Authentication.Web.Core.WebAccountMonitor, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Security::Authentication::Web::Core::WebAccountMonitor*,IInspectable*> __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        class WebAccountEventArgs;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fa704f04-87b6-516b-9596-cd7cc092169b"))
ITypedEventHandler<ABI::Windows::Security::Authentication::Web::Core::WebAccountMonitor*,ABI::Windows::Security::Authentication::Web::Core::WebAccountEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Core::WebAccountMonitor*, ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Core::WebAccountEventArgs*, ABI::Windows::Security::Authentication::Web::Core::IWebAccountEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Security.Authentication.Web.Core.WebAccountMonitor, Windows.Security.Authentication.Web.Core.WebAccountEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Security::Authentication::Web::Core::WebAccountMonitor*,ABI::Windows::Security::Authentication::Web::Core::WebAccountEventArgs*> __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_t;
#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor*,ABI::Windows::Security::Authentication::Web::Core::IWebAccountEventArgs*>
//#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor*,ABI::Windows::Security::Authentication::Web::Core::IWebAccountEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                class WebAccount;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                interface IWebAccount;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount ABI::Windows::Security::Credentials::IWebAccount

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4bd6f1e5-ca89-5240-8f3d-7f1b54ae90a7"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Credentials::WebAccount*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Credentials::WebAccount*, ABI::Windows::Security::Credentials::IWebAccount*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Credentials.WebAccount>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Credentials::WebAccount*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Credentials::IWebAccount*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Credentials::IWebAccount*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("acd76b54-297f-5a18-9143-20a309e2dfd3"))
IAsyncOperation<ABI::Windows::Security::Credentials::WebAccount*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Credentials::WebAccount*, ABI::Windows::Security::Credentials::IWebAccount*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Credentials.WebAccount>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Credentials::WebAccount*> __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Credentials::IWebAccount*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Credentials::IWebAccount*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                class WebAccountProvider;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                interface IWebAccountProvider;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider ABI::Windows::Security::Credentials::IWebAccountProvider

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9477622b-1340-5574-81fc-5013581f57c9"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Credentials::WebAccountProvider*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Credentials::WebAccountProvider*, ABI::Windows::Security::Credentials::IWebAccountProvider*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Credentials.WebAccountProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Credentials::WebAccountProvider*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Credentials::IWebAccountProvider*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Credentials::IWebAccountProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("88c66009-12f7-58e2-8dbe-6efc620c85ba"))
IAsyncOperation<ABI::Windows::Security::Credentials::WebAccountProvider*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Credentials::WebAccountProvider*, ABI::Windows::Security::Credentials::IWebAccountProvider*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Credentials.WebAccountProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Credentials::WebAccountProvider*> __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Credentials::IWebAccountProvider*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Credentials::IWebAccountProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bfb82cca-aebc-567c-95d9-eba25c365faa"))
IIterator<ABI::Windows::Security::Credentials::WebAccount*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Credentials::WebAccount*, ABI::Windows::Security::Credentials::IWebAccount*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Credentials.WebAccount>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Credentials::WebAccount*> __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_t;
#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Credentials::IWebAccount*>
//#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Credentials::IWebAccount*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cb15d439-a910-542a-89ed-7cfe67848a83"))
IIterable<ABI::Windows::Security::Credentials::WebAccount*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Credentials::WebAccount*, ABI::Windows::Security::Credentials::IWebAccount*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Credentials.WebAccount>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Credentials::WebAccount*> __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_t;
#define __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Credentials::IWebAccount*>
//#define __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Credentials::IWebAccount*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_USE */


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
        namespace System {
            class User;
        } /* Windows */
    } /* System */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IUser;
        } /* Windows */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIUser ABI::Windows::System::IUser

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        
                        typedef enum WebTokenRequestPromptType : int WebTokenRequestPromptType;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        
                        typedef enum WebTokenRequestStatus : int WebTokenRequestStatus;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */


















namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        class WebProviderError;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        class WebTokenRequest;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
















/*
 *
 * Struct Windows.Security.Authentication.Web.Core.WebTokenRequestPromptType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [v1_enum, contract] */
                        enum WebTokenRequestPromptType : int
                        {
                            WebTokenRequestPromptType_Default = 0,
                            WebTokenRequestPromptType_ForceAuthentication = 1,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Authentication.Web.Core.WebTokenRequestStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [v1_enum, contract] */
                        enum WebTokenRequestStatus : int
                        {
                            WebTokenRequestStatus_Success = 0,
                            WebTokenRequestStatus_UserCancel = 1,
                            WebTokenRequestStatus_AccountSwitch = 2,
                            WebTokenRequestStatus_UserInteractionRequired = 3,
                            WebTokenRequestStatus_AccountProviderNotAvailable = 4,
                            WebTokenRequestStatus_ProviderError = 5,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebAccountEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebAccountEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAccountEventArgs[] = L"Windows.Security.Authentication.Web.Core.IWebAccountEventArgs";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("6FB7037D-424E-44EC-977C-EF2415462A5A"), exclusiveto, contract] */
                        MIDL_INTERFACE("6FB7037D-424E-44EC-977C-EF2415462A5A")
                        IWebAccountEventArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Account(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IWebAccount * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountEventArgs=_uuidof(IWebAccountEventArgs);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebAccountMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebAccountMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAccountMonitor[] = L"Windows.Security.Authentication.Web.Core.IWebAccountMonitor";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("7445F5FD-AA9D-4619-8D5D-C138A4EDE3E5"), exclusiveto, contract] */
                        MIDL_INTERFACE("7445F5FD-AA9D-4619-8D5D-C138A4EDE3E5")
                        IWebAccountMonitor : IInspectable
                        {
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Updated(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Updated(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Removed(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Removed(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DefaultSignInAccountChanged(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DefaultSignInAccountChanged(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountMonitor=_uuidof(IWebAccountMonitor);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics[] = L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("6ACA7C92-A581-4479-9C10-752EFF44FD34"), exclusiveto, contract] */
                        MIDL_INTERFACE("6ACA7C92-A581-4479-9C10-752EFF44FD34")
                        IWebAuthenticationCoreManagerStatics : IInspectable
                        {
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetTokenSilentlyAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * request,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetTokenSilentlyWithWebAccountAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * request,
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestTokenAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * request,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestTokenWithWebAccountAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * request,
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE FindAccountAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccountProvider * provider,
                                /* [in] */__RPC__in HSTRING webAccountId,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAccountProviderAsync(
                                /* [in] */__RPC__in HSTRING webAccountProviderId,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * asyncInfo
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAccountProviderWithAuthorityAsync(
                                /* [in] */__RPC__in HSTRING webAccountProviderId,
                                /* [in] */__RPC__in HSTRING authority,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * asyncInfo
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAuthenticationCoreManagerStatics=_uuidof(IWebAuthenticationCoreManagerStatics);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics2[] = L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("F584184A-8B57-4820-B6A4-70A5B6FCF44A"), exclusiveto, contract] */
                        MIDL_INTERFACE("F584184A-8B57-4820-B6A4-70A5B6FCF44A")
                        IWebAuthenticationCoreManagerStatics2 : IInspectable
                        {
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAccountProviderWithAuthorityForUserAsync(
                                /* [in] */__RPC__in HSTRING webAccountProviderId,
                                /* [in] */__RPC__in HSTRING authority,
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * asyncInfo
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAuthenticationCoreManagerStatics2=_uuidof(IWebAuthenticationCoreManagerStatics2);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics3[] = L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics3";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("2404EEB2-8924-4D93-AB3A-99688B419D56"), exclusiveto, contract] */
                        MIDL_INTERFACE("2404EEB2-8924-4D93-AB3A-99688B419D56")
                        IWebAuthenticationCoreManagerStatics3 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE CreateWebAccountMonitor(
                                /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * webAccounts,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor * * result
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAuthenticationCoreManagerStatics3=_uuidof(IWebAuthenticationCoreManagerStatics3);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebProviderError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebProviderError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebProviderError[] = L"Windows.Security.Authentication.Web.Core.IWebProviderError";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("DB191BB1-50C5-4809-8DCA-09C99410245C"), exclusiveto, contract] */
                        MIDL_INTERFACE("DB191BB1-50C5-4809-8DCA-09C99410245C")
                        IWebProviderError : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorCode(
                                /* [retval, out] */__RPC__out UINT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorMessage(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                                /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebProviderError=_uuidof(IWebProviderError);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebProviderErrorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebProviderError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebProviderErrorFactory[] = L"Windows.Security.Authentication.Web.Core.IWebProviderErrorFactory";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("E3C40A2D-89EF-4E37-847F-A8B9D5A32910"), exclusiveto, contract] */
                        MIDL_INTERFACE("E3C40A2D-89EF-4E37-847F-A8B9D5A32910")
                        IWebProviderErrorFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Create(
                                /* [in] */UINT32 errorCode,
                                /* [in] */__RPC__in HSTRING errorMessage,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebProviderError * * webProviderError
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebProviderErrorFactory=_uuidof(IWebProviderErrorFactory);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequest[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequest";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("B77B4D68-ADCB-4673-B364-0CF7B35CAF97"), exclusiveto, contract] */
                        MIDL_INTERFACE("B77B4D68-ADCB-4673-B364-0CF7B35CAF97")
                        IWebTokenRequest : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccountProvider(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IWebAccountProvider * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Scope(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClientId(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PromptType(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                                /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * requestProperties
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebTokenRequest=_uuidof(IWebTokenRequest);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenRequest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequest2[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequest2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("D700C079-30C8-4397-9654-961C3BE8B855"), exclusiveto, contract] */
                        MIDL_INTERFACE("D700C079-30C8-4397-9654-961C3BE8B855")
                        IWebTokenRequest2 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppProperties(
                                /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * requestProperties
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebTokenRequest2=_uuidof(IWebTokenRequest2);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenRequest3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequest3[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequest3";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("5A755B51-3BB1-41A5-A63D-90BC32C7DB9A"), exclusiveto, contract] */
                        MIDL_INTERFACE("5A755B51-3BB1-41A5-A63D-90BC32C7DB9A")
                        IWebTokenRequest3 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CorrelationId(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CorrelationId(
                                /* [in] */__RPC__in HSTRING value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebTokenRequest3=_uuidof(IWebTokenRequest3);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenRequestFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequestFactory";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("6CF2141C-0FF0-4C67-B84F-99DDBE4A72C9"), exclusiveto, contract] */
                        MIDL_INTERFACE("6CF2141C-0FF0-4C67-B84F-99DDBE4A72C9")
                        IWebTokenRequestFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Create(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccountProvider * provider,
                                /* [in] */__RPC__in HSTRING scope,
                                /* [in] */__RPC__in HSTRING clientId,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * * webTokenRequest
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithPromptType(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccountProvider * provider,
                                /* [in] */__RPC__in HSTRING scope,
                                /* [in] */__RPC__in HSTRING clientId,
                                /* [in] */ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType promptType,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * * webTokenRequest
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithProvider(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccountProvider * provider,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * * webTokenRequest
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithScope(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccountProvider * provider,
                                /* [in] */__RPC__in HSTRING scope,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * * webTokenRequest
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebTokenRequestFactory=_uuidof(IWebTokenRequestFactory);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenRequestResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenRequestResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequestResult";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("C12A8305-D1F8-4483-8D54-38FE292784FF"), exclusiveto, contract] */
                        MIDL_INTERFACE("C12A8305-D1F8-4483-8D54-38FE292784FF")
                        IWebTokenRequestResult : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResponseData(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResponseStatus(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestStatus * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResponseError(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebProviderError * * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InvalidateCacheAsync(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebTokenRequestResult=_uuidof(IWebTokenRequestResult);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenResponse[] = L"Windows.Security.Authentication.Web.Core.IWebTokenResponse";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("67A7C5CA-83F6-44C6-A3B1-0EB69E41FA8A"), exclusiveto, contract] */
                        MIDL_INTERFACE("67A7C5CA-83F6-44C6-A3B1-0EB69E41FA8A")
                        IWebTokenResponse : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Token(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderError(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebProviderError * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccount(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IWebAccount * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                                /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebTokenResponse=_uuidof(IWebTokenResponse);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenResponseFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory[] = L"Windows.Security.Authentication.Web.Core.IWebTokenResponseFactory";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        /* [object, uuid("AB6BF7F8-5450-4EF6-97F7-052B0431C0F0"), exclusiveto, contract] */
                        MIDL_INTERFACE("AB6BF7F8-5450-4EF6-97F7-052B0431C0F0")
                        IWebTokenResponseFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE CreateWithToken(
                                /* [in] */__RPC__in HSTRING token,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse * * webTokenResponse
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithTokenAndAccount(
                                /* [in] */__RPC__in HSTRING token,
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse * * webTokenResponse
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithTokenAccountAndError(
                                /* [in] */__RPC__in HSTRING token,
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Core::IWebProviderError * error,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse * * webTokenResponse
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebTokenResponseFactory=_uuidof(IWebTokenResponseFactory);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebAccountEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebAccountEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAccountEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAccountEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebAccountEventArgs[] = L"Windows.Security.Authentication.Web.Core.WebAccountEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebAccountMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebAccountMonitor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAccountMonitor_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAccountMonitor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebAccountMonitor[] = L"Windows.Security.Authentication.Web.Core.WebAccountMonitor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAuthenticationCoreManager_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAuthenticationCoreManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebAuthenticationCoreManager[] = L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebProviderError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Authentication.Web.Core.IWebProviderErrorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebProviderError ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebProviderError_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebProviderError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebProviderError[] = L"Windows.Security.Authentication.Web.Core.WebProviderError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebTokenRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Authentication.Web.Core.IWebTokenRequestFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebTokenRequest ** Default Interface **
 *    Windows.Security.Authentication.Web.Core.IWebTokenRequest2
 *    Windows.Security.Authentication.Web.Core.IWebTokenRequest3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenRequest_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebTokenRequest[] = L"Windows.Security.Authentication.Web.Core.WebTokenRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebTokenRequestResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebTokenRequestResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenRequestResult_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenRequestResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebTokenRequestResult[] = L"Windows.Security.Authentication.Web.Core.WebTokenRequestResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebTokenResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Authentication.Web.Core.IWebTokenResponseFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebTokenResponse ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenResponse_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebTokenResponse[] = L"Windows.Security.Authentication.Web.Core.WebTokenResponse";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;

typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl;

interface __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;

typedef  struct __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl;

interface __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;

typedef struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl;

interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount;

typedef struct __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;

interface __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount;

typedef  struct __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;

interface __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

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



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__










#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestPromptType __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestPromptType;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestStatus __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestStatus;


































/*
 *
 * Struct Windows.Security.Authentication.Web.Core.WebTokenRequestPromptType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestPromptType
{
    WebTokenRequestPromptType_Default = 0,
    WebTokenRequestPromptType_ForceAuthentication = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Authentication.Web.Core.WebTokenRequestStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestStatus
{
    WebTokenRequestStatus_Success = 0,
    WebTokenRequestStatus_UserCancel = 1,
    WebTokenRequestStatus_AccountSwitch = 2,
    WebTokenRequestStatus_UserInteractionRequired = 3,
    WebTokenRequestStatus_AccountProviderNotAvailable = 4,
    WebTokenRequestStatus_ProviderError = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebAccountEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebAccountEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAccountEventArgs[] = L"Windows.Security.Authentication.Web.Core.IWebAccountEventArgs";
/* [object, uuid("6FB7037D-424E-44EC-977C-EF2415462A5A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Account )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_get_Account(This,value) \
    ( (This)->lpVtbl->get_Account(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebAccountMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebAccountMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAccountMonitor[] = L"Windows.Security.Authentication.Web.Core.IWebAccountMonitor";
/* [object, uuid("7445F5FD-AA9D-4619-8D5D-C138A4EDE3E5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DefaultSignInAccountChanged )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DefaultSignInAccountChanged )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitorVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_add_Updated(This,handler,token) \
    ( (This)->lpVtbl->add_Updated(This,handler,token) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_remove_Updated(This,token) \
    ( (This)->lpVtbl->remove_Updated(This,token) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_add_Removed(This,handler,token) \
    ( (This)->lpVtbl->add_Removed(This,handler,token) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_remove_Removed(This,token) \
    ( (This)->lpVtbl->remove_Removed(This,token) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_add_DefaultSignInAccountChanged(This,handler,token) \
    ( (This)->lpVtbl->add_DefaultSignInAccountChanged(This,handler,token) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_remove_DefaultSignInAccountChanged(This,token) \
    ( (This)->lpVtbl->remove_DefaultSignInAccountChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics[] = L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics";
/* [object, uuid("6ACA7C92-A581-4479-9C10-752EFF44FD34"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetTokenSilentlyAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetTokenSilentlyWithWebAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestTokenAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestTokenWithWebAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *FindAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
        /* [in] */__RPC__in HSTRING webAccountId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAccountProviderAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
        /* [in] */__RPC__in HSTRING webAccountProviderId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAccountProviderWithAuthorityAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
        /* [in] */__RPC__in HSTRING webAccountProviderId,
        /* [in] */__RPC__in HSTRING authority,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_GetTokenSilentlyAsync(This,request,asyncInfo) \
    ( (This)->lpVtbl->GetTokenSilentlyAsync(This,request,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_GetTokenSilentlyWithWebAccountAsync(This,request,webAccount,asyncInfo) \
    ( (This)->lpVtbl->GetTokenSilentlyWithWebAccountAsync(This,request,webAccount,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_RequestTokenAsync(This,request,asyncInfo) \
    ( (This)->lpVtbl->RequestTokenAsync(This,request,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_RequestTokenWithWebAccountAsync(This,request,webAccount,asyncInfo) \
    ( (This)->lpVtbl->RequestTokenWithWebAccountAsync(This,request,webAccount,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_FindAccountAsync(This,provider,webAccountId,asyncInfo) \
    ( (This)->lpVtbl->FindAccountAsync(This,provider,webAccountId,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_FindAccountProviderAsync(This,webAccountProviderId,asyncInfo) \
    ( (This)->lpVtbl->FindAccountProviderAsync(This,webAccountProviderId,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_FindAccountProviderWithAuthorityAsync(This,webAccountProviderId,authority,asyncInfo) \
    ( (This)->lpVtbl->FindAccountProviderWithAuthorityAsync(This,webAccountProviderId,authority,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics2[] = L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics2";
/* [object, uuid("F584184A-8B57-4820-B6A4-70A5B6FCF44A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAccountProviderWithAuthorityForUserAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING webAccountProviderId,
        /* [in] */__RPC__in HSTRING authority,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_FindAccountProviderWithAuthorityForUserAsync(This,webAccountProviderId,authority,user,asyncInfo) \
    ( (This)->lpVtbl->FindAccountProviderWithAuthorityForUserAsync(This,webAccountProviderId,authority,user,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics3[] = L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics3";
/* [object, uuid("2404EEB2-8924-4D93-AB3A-99688B419D56"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWebAccountMonitor )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * webAccounts,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_CreateWebAccountMonitor(This,webAccounts,result) \
    ( (This)->lpVtbl->CreateWebAccountMonitor(This,webAccounts,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebProviderError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebProviderError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebProviderError[] = L"Windows.Security.Authentication.Web.Core.IWebProviderError";
/* [object, uuid("DB191BB1-50C5-4809-8DCA-09C99410245C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorMessage )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_get_ErrorCode(This,value) \
    ( (This)->lpVtbl->get_ErrorCode(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_get_ErrorMessage(This,value) \
    ( (This)->lpVtbl->get_ErrorMessage(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebProviderErrorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebProviderError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebProviderErrorFactory[] = L"Windows.Security.Authentication.Web.Core.IWebProviderErrorFactory";
/* [object, uuid("E3C40A2D-89EF-4E37-847F-A8B9D5A32910"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This,
        /* [in] */UINT32 errorCode,
        /* [in] */__RPC__in HSTRING errorMessage,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * * webProviderError
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactoryVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_Create(This,errorCode,errorMessage,webProviderError) \
    ( (This)->lpVtbl->Create(This,errorCode,errorMessage,webProviderError) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequest[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequest";
/* [object, uuid("B77B4D68-ADCB-4673-B364-0CF7B35CAF97"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccountProvider )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Scope )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PromptType )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestPromptType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * requestProperties
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_get_WebAccountProvider(This,value) \
    ( (This)->lpVtbl->get_WebAccountProvider(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_get_Scope(This,value) \
    ( (This)->lpVtbl->get_Scope(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_get_ClientId(This,value) \
    ( (This)->lpVtbl->get_ClientId(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_get_PromptType(This,value) \
    ( (This)->lpVtbl->get_PromptType(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_get_Properties(This,requestProperties) \
    ( (This)->lpVtbl->get_Properties(This,requestProperties) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenRequest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequest2[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequest2";
/* [object, uuid("D700C079-30C8-4397-9654-961C3BE8B855"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppProperties )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * requestProperties
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_get_AppProperties(This,requestProperties) \
    ( (This)->lpVtbl->get_AppProperties(This,requestProperties) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenRequest3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequest3[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequest3";
/* [object, uuid("5A755B51-3BB1-41A5-A63D-90BC32C7DB9A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CorrelationId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_get_CorrelationId(This,value) \
    ( (This)->lpVtbl->get_CorrelationId(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_put_CorrelationId(This,value) \
    ( (This)->lpVtbl->put_CorrelationId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenRequestFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequestFactory";
/* [object, uuid("6CF2141C-0FF0-4C67-B84F-99DDBE4A72C9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
        /* [in] */__RPC__in HSTRING scope,
        /* [in] */__RPC__in HSTRING clientId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * * webTokenRequest
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithPromptType )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
        /* [in] */__RPC__in HSTRING scope,
        /* [in] */__RPC__in HSTRING clientId,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestPromptType promptType,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * * webTokenRequest
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithProvider )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * * webTokenRequest
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithScope )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
        /* [in] */__RPC__in HSTRING scope,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * * webTokenRequest
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactoryVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_Create(This,provider,scope,clientId,webTokenRequest) \
    ( (This)->lpVtbl->Create(This,provider,scope,clientId,webTokenRequest) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_CreateWithPromptType(This,provider,scope,clientId,promptType,webTokenRequest) \
    ( (This)->lpVtbl->CreateWithPromptType(This,provider,scope,clientId,promptType,webTokenRequest) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_CreateWithProvider(This,provider,webTokenRequest) \
    ( (This)->lpVtbl->CreateWithProvider(This,provider,webTokenRequest) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_CreateWithScope(This,provider,scope,webTokenRequest) \
    ( (This)->lpVtbl->CreateWithScope(This,provider,scope,webTokenRequest) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenRequestResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenRequestResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequestResult";
/* [object, uuid("C12A8305-D1F8-4483-8D54-38FE292784FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResponseData )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResponseStatus )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResponseError )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * * value
        );
    HRESULT ( STDMETHODCALLTYPE *InvalidateCacheAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResultVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_get_ResponseData(This,value) \
    ( (This)->lpVtbl->get_ResponseData(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_get_ResponseStatus(This,value) \
    ( (This)->lpVtbl->get_ResponseStatus(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_get_ResponseError(This,value) \
    ( (This)->lpVtbl->get_ResponseError(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_InvalidateCacheAsync(This,asyncInfo) \
    ( (This)->lpVtbl->InvalidateCacheAsync(This,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenResponse[] = L"Windows.Security.Authentication.Web.Core.IWebTokenResponse";
/* [object, uuid("67A7C5CA-83F6-44C6-A3B1-0EB69E41FA8A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Token )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderError )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccount )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_get_Token(This,value) \
    ( (This)->lpVtbl->get_Token(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_get_ProviderError(This,value) \
    ( (This)->lpVtbl->get_ProviderError(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_get_WebAccount(This,value) \
    ( (This)->lpVtbl->get_WebAccount(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Core.IWebTokenResponseFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Core.WebTokenResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory[] = L"Windows.Security.Authentication.Web.Core.IWebTokenResponseFactory";
/* [object, uuid("AB6BF7F8-5450-4EF6-97F7-052B0431C0F0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithToken )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
        /* [in] */__RPC__in HSTRING token,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * * webTokenResponse
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTokenAndAccount )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
        /* [in] */__RPC__in HSTRING token,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * * webTokenResponse
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTokenAccountAndError )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
        /* [in] */__RPC__in HSTRING token,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * error,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * * webTokenResponse
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactoryVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_CreateWithToken(This,token,webTokenResponse) \
    ( (This)->lpVtbl->CreateWithToken(This,token,webTokenResponse) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_CreateWithTokenAndAccount(This,token,webAccount,webTokenResponse) \
    ( (This)->lpVtbl->CreateWithTokenAndAccount(This,token,webAccount,webTokenResponse) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_CreateWithTokenAccountAndError(This,token,webAccount,error,webTokenResponse) \
    ( (This)->lpVtbl->CreateWithTokenAccountAndError(This,token,webAccount,error,webTokenResponse) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebAccountEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebAccountEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAccountEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAccountEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebAccountEventArgs[] = L"Windows.Security.Authentication.Web.Core.WebAccountEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebAccountMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebAccountMonitor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAccountMonitor_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAccountMonitor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebAccountMonitor[] = L"Windows.Security.Authentication.Web.Core.WebAccountMonitor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAuthenticationCoreManager_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebAuthenticationCoreManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebAuthenticationCoreManager[] = L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebProviderError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Authentication.Web.Core.IWebProviderErrorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebProviderError ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebProviderError_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebProviderError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebProviderError[] = L"Windows.Security.Authentication.Web.Core.WebProviderError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebTokenRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Authentication.Web.Core.IWebTokenRequestFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebTokenRequest ** Default Interface **
 *    Windows.Security.Authentication.Web.Core.IWebTokenRequest2
 *    Windows.Security.Authentication.Web.Core.IWebTokenRequest3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenRequest_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebTokenRequest[] = L"Windows.Security.Authentication.Web.Core.WebTokenRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebTokenRequestResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebTokenRequestResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenRequestResult_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenRequestResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebTokenRequestResult[] = L"Windows.Security.Authentication.Web.Core.WebTokenRequestResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Core.WebTokenResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Authentication.Web.Core.IWebTokenResponseFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Core.IWebTokenResponse ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenResponse_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Core_WebTokenResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebTokenResponse[] = L"Windows.Security.Authentication.Web.Core.WebTokenResponse";
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
#endif // __windows2Esecurity2Eauthentication2Eweb2Ecore_p_h__

#endif // __windows2Esecurity2Eauthentication2Eweb2Ecore_h__
