/* Header file automatically generated from windows.security.authentication.web.provider.idl */
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
#ifndef __windows2Esecurity2Eauthentication2Eweb2Eprovider_h__
#define __windows2Esecurity2Eauthentication2Eweb2Eprovider_h__
#ifndef __windows2Esecurity2Eauthentication2Eweb2Eprovider_p_h__
#define __windows2Esecurity2Eauthentication2Eweb2Eprovider_p_h__


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
#include "Windows.Security.Authentication.Web.h"
#include "Windows.Security.Authentication.Web.Core.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Security.Cryptography.Core.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include "Windows.Web.Http.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountClientView;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountClientViewFactory;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountManagerStatics;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics ABI::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountManagerStatics2;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2 ABI::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountManagerStatics3;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 ABI::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountManagerStatics4;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4 ABI::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics4

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountMapManagerStatics;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics ABI::Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderAddAccountOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderBaseReportOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderDeleteAccountOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderManageAccountOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderRetrieveCookiesOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderSignOutAccountOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderSilentReportOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderTokenObjects;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderTokenObjects2;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2 ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderTokenOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountProviderUIReportOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebAccountScopeManagerStatics;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics ABI::Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebProviderTokenRequest;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebProviderTokenRequest2;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2 ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebProviderTokenResponse;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        interface IWebProviderTokenResponseFactory;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebAccountClientView;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE
#define DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a5984607-661d-5e9c-a0ba-5c7d5f41af1c"))
IIterator<ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientView*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientView*, ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Authentication.Web.Provider.WebAccountClientView>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientView*> __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t;
#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>
//#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE
#define DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("610e0f9d-aae4-54e1-bb0b-1aca14110abf"))
IIterable<ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientView*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientView*, ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Authentication.Web.Provider.WebAccountClientView>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientView*> __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t;
#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>
//#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebProviderTokenResponse;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE
#define DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eb57825d-5ad6-5ee0-8dc6-a53c1e82e3ab"))
IIterator<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*, ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*> __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t;
#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>
//#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE
#define DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bac236-c077-553a-b4ae-b58fb0b89918"))
IIterable<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*, ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*> __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t;
#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>
//#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3dfd5eff-8fa4-5e9d-8d1c-0f18d542be35"))
IVectorView<ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientView*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientView*, ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Authentication.Web.Provider.WebAccountClientView>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientView*> __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t;
#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>
//#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1ae644b7-9839-585b-8792-ecd5050b88bb"))
IVectorView<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*, ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*> __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t;
#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>
//#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE
#define DEF___FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4e7ad5cf-390f-5ecd-b714-3c654b84cbba"))
IVector<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*, ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse*> __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t;
#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>
//#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3fa6536f-7e7a-5bc9-b20f-d866cacaf81c"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Security.Authentication.Web.Provider.WebAccountClientView>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("116827c1-187e-5095-a14b-df4111c638c2"))
IAsyncOperation<__FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Security.Authentication.Web.Provider.WebAccountClientView>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView*> __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_USE */


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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e0798d3d-2b4a-589a-ab12-02dccc158afc"))
IVectorView<ABI::Windows::Security::Credentials::WebAccount*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Credentials::WebAccount*, ABI::Windows::Security::Credentials::IWebAccount*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Credentials.WebAccount>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Credentials::WebAccount*> __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_t;
#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Credentials::IWebAccount*>
//#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Credentials::IWebAccount*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c2090d8c-37d8-5c47-9581-0f17b91a0cd3"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Security.Credentials.WebAccount>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Credentials::IWebAccount*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Credentials::IWebAccount*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("66b59040-7c93-5f96-b52f-2c098d1557d0"))
IAsyncOperation<__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Security.Credentials.WebAccount>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount*> __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Credentials::IWebAccount*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Credentials::IWebAccount*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpCookie;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

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

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    class CryptographicKey;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface ICryptographicKey;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey ABI::Windows::Security::Cryptography::Core::ICryptographicKey

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("04ca4378-f594-5de6-a555-304f62cb4faf"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Core::CryptographicKey*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Core::CryptographicKey*, ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Cryptography.Core.CryptographicKey>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Core::CryptographicKey*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("81ca789b-98df-5c6a-9531-966238e3e7ae"))
IAsyncOperation<ABI::Windows::Security::Cryptography::Core::CryptographicKey*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Core::CryptographicKey*, ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Cryptography.Core.CryptographicKey>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Cryptography::Core::CryptographicKey*> __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878"))
IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE */


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
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        class WebProviderError;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

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







namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    
                    typedef enum TokenBindingKeyType : int TokenBindingKeyType;
                    
                } /* Windows */
            } /* Security */
        } /* Authentication */
    } /* Web */} /* ABI */















#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream ABI::Windows::Storage::Streams::IRandomAccessStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__





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
                    namespace Provider {
                        
                        typedef enum WebAccountClientViewType : int WebAccountClientViewType;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        
                        typedef enum WebAccountProviderOperationKind : int WebAccountProviderOperationKind;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        
                        typedef enum WebAccountScope : int WebAccountScope;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        
                        typedef enum WebAccountSelectionOptions : unsigned int WebAccountSelectionOptions;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */



























namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebAccountProviderAddAccountOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebAccountProviderDeleteAccountOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebAccountProviderGetTokenSilentOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebAccountProviderManageAccountOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebAccountProviderRequestTokenOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebAccountProviderRetrieveCookiesOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebAccountProviderSignOutAccountOperation;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebAccountProviderTriggerDetails;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        class WebProviderTokenRequest;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */















/*
 *
 * Struct Windows.Security.Authentication.Web.Provider.WebAccountClientViewType
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
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum WebAccountClientViewType : int
                        {
                            WebAccountClientViewType_IdOnly = 0,
                            WebAccountClientViewType_IdAndProperties = 1,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Authentication.Web.Provider.WebAccountProviderOperationKind
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
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum WebAccountProviderOperationKind : int
                        {
                            WebAccountProviderOperationKind_RequestToken = 0,
                            WebAccountProviderOperationKind_GetTokenSilently = 1,
                            WebAccountProviderOperationKind_AddAccount = 2,
                            WebAccountProviderOperationKind_ManageAccount = 3,
                            WebAccountProviderOperationKind_DeleteAccount = 4,
                            WebAccountProviderOperationKind_RetrieveCookies = 5,
                            WebAccountProviderOperationKind_SignOutAccount = 6,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Authentication.Web.Provider.WebAccountScope
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
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum WebAccountScope : int
                        {
                            WebAccountScope_PerUser = 0,
                            WebAccountScope_PerApplication = 1,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Authentication.Web.Provider.WebAccountSelectionOptions
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
                    namespace Provider {
                        /* [v1_enum, flags, contract] */
                        enum WebAccountSelectionOptions : unsigned int
                        {
                            WebAccountSelectionOptions_Default = 0,
                            WebAccountSelectionOptions_New = 0x1,
                        };
                        
                        DEFINE_ENUM_FLAG_OPERATORS(WebAccountSelectionOptions)
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountClientView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountClientView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountClientView[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountClientView";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("E7BD66BA-0BC7-4C66-BFD4-65D3082CBCA8"), exclusiveto, contract] */
                        MIDL_INTERFACE("E7BD66BA-0BC7-4C66-BFD4-65D3082CBCA8")
                        IWebAccountClientView : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationCallbackUri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientViewType * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccountPairwiseId(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountClientView=_uuidof(IWebAccountClientView);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountClientViewFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountClientView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountClientViewFactory[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountClientViewFactory";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("616D16A4-DE22-4855-A326-06CEBF2A3F23"), exclusiveto, contract] */
                        MIDL_INTERFACE("616D16A4-DE22-4855-A326-06CEBF2A3F23")
                        IWebAccountClientViewFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Create(
                                /* [in] */ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientViewType viewType,
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * applicationCallbackUri,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView * * view
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithPairwiseId(
                                /* [in] */ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientViewType viewType,
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * applicationCallbackUri,
                                /* [in] */__RPC__in HSTRING accountPairwiseId,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView * * view
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountClientViewFactory=_uuidof(IWebAccountClientViewFactory);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("B2E8E1A6-D49A-4032-84BF-1A2847747BF1"), exclusiveto, contract] */
                        MIDL_INTERFACE("B2E8E1A6-D49A-4032-84BF-1A2847747BF1")
                        IWebAccountManagerStatics : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE UpdateWebAccountPropertiesAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [in] */__RPC__in HSTRING webAccountUserName,
                                /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * additionalProperties,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddWebAccountAsync(
                                /* [in] */__RPC__in HSTRING webAccountId,
                                /* [in] */__RPC__in HSTRING webAccountUserName,
                                /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE DeleteWebAccountAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE FindAllProviderWebAccountsAsync(
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE PushCookiesAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                                /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * cookies,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetViewAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView * view,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ClearViewAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * applicationCallbackUri,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetViewsAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetWebAccountPictureAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * webAccountPicture,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ClearWebAccountPictureAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountManagerStatics=_uuidof(IWebAccountManagerStatics);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics2[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("68A7A829-2D5F-4653-8BB0-BD2FA6BD2D87"), exclusiveto, contract] */
                        MIDL_INTERFACE("68A7A829-2D5F-4653-8BB0-BD2FA6BD2D87")
                        IWebAccountManagerStatics2 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE PullCookiesAsync(
                                /* [in] */__RPC__in HSTRING uriString,
                                /* [in] */__RPC__in HSTRING callerPFN,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountManagerStatics2=_uuidof(IWebAccountManagerStatics2);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics3";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("DD4523A6-8A4F-4AA2-B15E-03F550AF1359"), exclusiveto, contract] */
                        MIDL_INTERFACE("DD4523A6-8A4F-4AA2-B15E-03F550AF1359")
                        IWebAccountManagerStatics3 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE FindAllProviderWebAccountsForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * * operation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddWebAccountForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [in] */__RPC__in HSTRING webAccountId,
                                /* [in] */__RPC__in HSTRING webAccountUserName,
                                /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * operation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddWebAccountWithScopeForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [in] */__RPC__in HSTRING webAccountId,
                                /* [in] */__RPC__in HSTRING webAccountUserName,
                                /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
                                /* [in] */ABI::Windows::Security::Authentication::Web::Provider::WebAccountScope scope,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * operation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddWebAccountWithScopeAndMapForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [in] */__RPC__in HSTRING webAccountId,
                                /* [in] */__RPC__in HSTRING webAccountUserName,
                                /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
                                /* [in] */ABI::Windows::Security::Authentication::Web::Provider::WebAccountScope scope,
                                /* [in] */__RPC__in HSTRING perUserWebAccountId,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * operation
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountManagerStatics3=_uuidof(IWebAccountManagerStatics3);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics4[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics4";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("59EBC2D2-F7DB-412F-BC3F-F2FEA04430B4"), exclusiveto, contract] */
                        MIDL_INTERFACE("59EBC2D2-F7DB-412F-BC3F-F2FEA04430B4")
                        IWebAccountManagerStatics4 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE InvalidateAppCacheForAllAccountsAsync(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InvalidateAppCacheForAccountAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountManagerStatics4=_uuidof(IWebAccountManagerStatics4);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountMapManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountMapManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("E8FA446F-3A1B-48A4-8E90-1E59CA6F54DB"), exclusiveto, contract] */
                        MIDL_INTERFACE("E8FA446F-3A1B-48A4-8E90-1E59CA6F54DB")
                        IWebAccountMapManagerStatics : IInspectable
                        {
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddWebAccountWithScopeAndMapAsync(
                                /* [in] */__RPC__in HSTRING webAccountId,
                                /* [in] */__RPC__in HSTRING webAccountUserName,
                                /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
                                /* [in] */ABI::Windows::Security::Authentication::Web::Provider::WebAccountScope scope,
                                /* [in] */__RPC__in HSTRING perUserWebAccountId,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetPerAppToPerUserAccountAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * perAppAccount,
                                /* [in] */__RPC__in HSTRING perUserWebAccountId,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetPerUserFromPerAppAccountAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * perAppAccount,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ClearPerUserFromPerAppAccountAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * perAppAccount,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountMapManagerStatics=_uuidof(IWebAccountMapManagerStatics);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderAddAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountProviderAddAccountOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderAddAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderAddAccountOperation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("73EBDCCF-4378-4C79-9335-A5D7AB81594E"), exclusiveto, contract] */
                        MIDL_INTERFACE("73EBDCCF-4378-4C79-9335-A5D7AB81594E")
                        IWebAccountProviderAddAccountOperation : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE ReportCompleted(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderAddAccountOperation=_uuidof(IWebAccountProviderAddAccountOperation);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderBaseReportOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("BBA4ACBB-993B-4D57-BBE4-1421E3668B4C"), contract] */
                        MIDL_INTERFACE("BBA4ACBB-993B-4D57-BBE4-1421E3668B4C")
                        IWebAccountProviderBaseReportOperation : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE ReportCompleted(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ReportError(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Core::IWebProviderError * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderBaseReportOperation=_uuidof(IWebAccountProviderBaseReportOperation);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderDeleteAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountProviderDeleteAccountOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderDeleteAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderDeleteAccountOperation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("0ABB48B8-9E01-49C9-A355-7D48CAF7D6CA"), exclusiveto, contract] */
                        MIDL_INTERFACE("0ABB48B8-9E01-49C9-A355-7D48CAF7D6CA")
                        IWebAccountProviderDeleteAccountOperation : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccount(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IWebAccount * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderDeleteAccountOperation=_uuidof(IWebAccountProviderDeleteAccountOperation);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderManageAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountProviderManageAccountOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderManageAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderManageAccountOperation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("ED20DC5C-D21B-463E-A9B7-C1FD0EDAE978"), exclusiveto, contract] */
                        MIDL_INTERFACE("ED20DC5C-D21B-463E-A9B7-C1FD0EDAE978")
                        IWebAccountProviderManageAccountOperation : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccount(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IWebAccount * * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ReportCompleted(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderManageAccountOperation=_uuidof(IWebAccountProviderManageAccountOperation);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("6D5D2426-10B1-419A-A44E-F9C5161574E6"), contract] */
                        MIDL_INTERFACE("6D5D2426-10B1-419A-A44E-F9C5161574E6")
                        IWebAccountProviderOperation : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderOperation=_uuidof(IWebAccountProviderOperation);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderRetrieveCookiesOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountProviderRetrieveCookiesOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderRetrieveCookiesOperation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("5A040441-0FA3-4AB1-A01C-20B110358594"), exclusiveto, contract] */
                        MIDL_INTERFACE("5A040441-0FA3-4AB1-A01C-20B110358594")
                        IWebAccountProviderRetrieveCookiesOperation : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Context(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * webCookieRequestContext
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cookies(
                                /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * * cookies
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Uri(
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * uri
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationCallbackUri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderRetrieveCookiesOperation=_uuidof(IWebAccountProviderRetrieveCookiesOperation);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderSignOutAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountProviderSignOutAccountOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderSignOutAccountOperation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("B890E21D-0C55-47BC-8C72-04A6FC7CAC07"), exclusiveto, contract] */
                        MIDL_INTERFACE("B890E21D-0C55-47BC-8C72-04A6FC7CAC07")
                        IWebAccountProviderSignOutAccountOperation : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccount(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IWebAccount * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationCallbackUri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClientId(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderSignOutAccountOperation=_uuidof(IWebAccountProviderSignOutAccountOperation);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderSilentReportOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSilentReportOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderSilentReportOperation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("E0B545F8-3B0F-44DA-924C-7B18BAAA62A9"), contract] */
                        MIDL_INTERFACE("E0B545F8-3B0F-44DA-924C-7B18BAAA62A9")
                        IWebAccountProviderSilentReportOperation : IInspectable
                        {
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE ReportUserInteractionRequired(void) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE ReportUserInteractionRequiredWithError(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Core::IWebProviderError * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderSilentReportOperation=_uuidof(IWebAccountProviderSilentReportOperation);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("408F284B-1328-42DB-89A4-0BCE7A717D8E"), contract] */
                        MIDL_INTERFACE("408F284B-1328-42DB-89A4-0BCE7A717D8E")
                        IWebAccountProviderTokenObjects : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Operation(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderTokenObjects=_uuidof(IWebAccountProviderTokenObjects);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects2[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("1020B893-5CA5-4FFF-95FB-B820273FC395"), contract] */
                        MIDL_INTERFACE("1020B893-5CA5-4FFF-95FB-B820273FC395")
                        IWebAccountProviderTokenObjects2 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderTokenObjects2=_uuidof(IWebAccountProviderTokenObjects2);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("95C613BE-2034-4C38-9434-D26C14B2B4B2"), contract] */
                        MIDL_INTERFACE("95C613BE-2034-4C38-9434-D26C14B2B4B2")
                        IWebAccountProviderTokenOperation : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderRequest(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest * * webTokenRequest
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderResponses(
                                /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CacheExpirationTime(
                                /* [in] */ABI::Windows::Foundation::DateTime value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CacheExpirationTime(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderTokenOperation=_uuidof(IWebAccountProviderTokenOperation);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderUIReportOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderUIReportOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderUIReportOperation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("28FF92D3-8F80-42FB-944F-B2107BBD42E6"), contract] */
                        MIDL_INTERFACE("28FF92D3-8F80-42FB-944F-B2107BBD42E6")
                        IWebAccountProviderUIReportOperation : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE ReportUserCanceled(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountProviderUIReportOperation=_uuidof(IWebAccountProviderUIReportOperation);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountScopeManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountScopeManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("5C6CE37C-12B2-423A-BF3D-85B8D7E53656"), exclusiveto, contract] */
                        MIDL_INTERFACE("5C6CE37C-12B2-423A-BF3D-85B8D7E53656")
                        IWebAccountScopeManagerStatics : IInspectable
                        {
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddWebAccountWithScopeAsync(
                                /* [in] */__RPC__in HSTRING webAccountId,
                                /* [in] */__RPC__in HSTRING webAccountUserName,
                                /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
                                /* [in] */ABI::Windows::Security::Authentication::Web::Provider::WebAccountScope scope,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetScopeAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [in] */ABI::Windows::Security::Authentication::Web::Provider::WebAccountScope scope,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetScope(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Web::Provider::WebAccountScope * scope
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebAccountScopeManagerStatics=_uuidof(IWebAccountScopeManagerStatics);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest[] = L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("1E18778B-8805-454B-9F11-468D2AF1095A"), exclusiveto, contract] */
                        MIDL_INTERFACE("1E18778B-8805-454B-9F11-468D2AF1095A")
                        IWebProviderTokenRequest : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClientRequest(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccounts(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccountSelectionOptions(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationCallbackUri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetApplicationTokenBindingKeyAsync(
                                /* [in] */ABI::Windows::Security::Authentication::Web::TokenBindingKeyType keyType,
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * target,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * * asyncInfo
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebProviderTokenRequest=_uuidof(IWebProviderTokenRequest);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest2[] = L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("B5D72E4C-10B1-4AA6-88B1-0B6C9E0C1E46"), exclusiveto, contract] */
                        MIDL_INTERFACE("B5D72E4C-10B1-4AA6-88B1-0B6C9E0C1E46")
                        IWebProviderTokenRequest2 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE GetApplicationTokenBindingKeyIdAsync(
                                /* [in] */ABI::Windows::Security::Authentication::Web::TokenBindingKeyType keyType,
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * target,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * asyncInfo
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebProviderTokenRequest2=_uuidof(IWebProviderTokenRequest2);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponse[] = L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponse";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("EF213793-EF55-4186-B7CE-8CB2E7F9849E"), exclusiveto, contract] */
                        MIDL_INTERFACE("EF213793-EF55-4186-B7CE-8CB2E7F9849E")
                        IWebProviderTokenResponse : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClientResponse(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebProviderTokenResponse=_uuidof(IWebProviderTokenResponse);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponseFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponseFactory[] = L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponseFactory";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Provider {
                        /* [object, uuid("FA49D99A-25BA-4077-9CFA-9DB4DEA7B71A"), exclusiveto, contract] */
                        MIDL_INTERFACE("FA49D99A-25BA-4077-9CFA-9DB4DEA7B71A")
                        IWebProviderTokenResponseFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Create(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenResponse * webTokenResponse,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse * * webProviderTokenResponse
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWebProviderTokenResponseFactory=_uuidof(IWebProviderTokenResponseFactory);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountClientView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Authentication.Web.Provider.IWebAccountClientViewFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountClientView ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountClientView_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountClientView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountClientView[] = L"Windows.Security.Authentication.Web.Provider.WebAccountClientView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountScopeManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountMapManagerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics4 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics2 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountManager_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountManager[] = L"Windows.Security.Authentication.Web.Provider.WebAccountManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderAddAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderAddAccountOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderAddAccountOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderAddAccountOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderAddAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderAddAccountOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderDeleteAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderDeleteAccountOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderDeleteAccountOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderDeleteAccountOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderDeleteAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderDeleteAccountOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderGetTokenSilentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderSilentReportOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderGetTokenSilentOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderGetTokenSilentOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderGetTokenSilentOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderGetTokenSilentOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderManageAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderManageAccountOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderManageAccountOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderManageAccountOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderManageAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderManageAccountOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderRequestTokenOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderUIReportOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderRequestTokenOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderRequestTokenOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderRequestTokenOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderRequestTokenOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderRetrieveCookiesOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderRetrieveCookiesOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderRetrieveCookiesOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderRetrieveCookiesOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderRetrieveCookiesOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderRetrieveCookiesOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderSignOutAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderSignOutAccountOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderSignOutAccountOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderSignOutAccountOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderSignOutAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderSignOutAccountOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderTriggerDetails[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebProviderTokenRequest_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebProviderTokenRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebProviderTokenRequest[] = L"Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponseFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponse ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebProviderTokenResponse_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebProviderTokenResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebProviderTokenResponse[] = L"Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl;

interface __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

typedef  struct __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl;

interface __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse;

typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl;

interface __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse;

typedef  struct __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl;

interface __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

typedef struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl;

interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse;

typedef struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl;

interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse;

typedef struct __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This, /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * *value);

    END_INTERFACE
} __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl;

interface __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse
{
    CONST_VTBL struct __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView_INTERFACE_DEFINED__

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;

typedef struct __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie __x_ABI_CWindows_CWeb_CHttp_CIHttpCookie;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpCookie_FWD_DEFINED__


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

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse_FWD_DEFINED__








typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CTokenBindingKeyType __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CTokenBindingKeyType;















#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__









typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountClientViewType __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountClientViewType;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountProviderOperationKind __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountProviderOperationKind;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountScope __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountScope;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountSelectionOptions __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountSelectionOptions;

















































/*
 *
 * Struct Windows.Security.Authentication.Web.Provider.WebAccountClientViewType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountClientViewType
{
    WebAccountClientViewType_IdOnly = 0,
    WebAccountClientViewType_IdAndProperties = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Authentication.Web.Provider.WebAccountProviderOperationKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountProviderOperationKind
{
    WebAccountProviderOperationKind_RequestToken = 0,
    WebAccountProviderOperationKind_GetTokenSilently = 1,
    WebAccountProviderOperationKind_AddAccount = 2,
    WebAccountProviderOperationKind_ManageAccount = 3,
    WebAccountProviderOperationKind_DeleteAccount = 4,
    WebAccountProviderOperationKind_RetrieveCookies = 5,
    WebAccountProviderOperationKind_SignOutAccount = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Authentication.Web.Provider.WebAccountScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountScope
{
    WebAccountScope_PerUser = 0,
    WebAccountScope_PerApplication = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Authentication.Web.Provider.WebAccountSelectionOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountSelectionOptions
{
    WebAccountSelectionOptions_Default = 0,
    WebAccountSelectionOptions_New = 0x1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountClientView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountClientView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountClientView[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountClientView";
/* [object, uuid("E7BD66BA-0BC7-4C66-BFD4-65D3082CBCA8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationCallbackUri )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountClientViewType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccountPairwiseId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_get_ApplicationCallbackUri(This,value) \
    ( (This)->lpVtbl->get_ApplicationCallbackUri(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_get_AccountPairwiseId(This,value) \
    ( (This)->lpVtbl->get_AccountPairwiseId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountClientViewFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountClientView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountClientViewFactory[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountClientViewFactory";
/* [object, uuid("616D16A4-DE22-4855-A326-06CEBF2A3F23"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountClientViewType viewType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * applicationCallbackUri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * * view
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithPairwiseId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountClientViewType viewType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * applicationCallbackUri,
        /* [in] */__RPC__in HSTRING accountPairwiseId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * * view
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactoryVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_Create(This,viewType,applicationCallbackUri,view) \
    ( (This)->lpVtbl->Create(This,viewType,applicationCallbackUri,view) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_CreateWithPairwiseId(This,viewType,applicationCallbackUri,accountPairwiseId,view) \
    ( (This)->lpVtbl->CreateWithPairwiseId(This,viewType,applicationCallbackUri,accountPairwiseId,view) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientViewFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics";
/* [object, uuid("B2E8E1A6-D49A-4032-84BF-1A2847747BF1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *UpdateWebAccountPropertiesAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [in] */__RPC__in HSTRING webAccountUserName,
        /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * additionalProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddWebAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
        /* [in] */__RPC__in HSTRING webAccountId,
        /* [in] */__RPC__in HSTRING webAccountUserName,
        /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteWebAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllProviderWebAccountsAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *PushCookiesAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CWeb__CHttp__CHttpCookie * cookies,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *SetViewAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountClientView * view,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ClearViewAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * applicationCallbackUri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetViewsAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebAccountClientView * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *SetWebAccountPictureAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * webAccountPicture,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ClearWebAccountPictureAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_UpdateWebAccountPropertiesAsync(This,webAccount,webAccountUserName,additionalProperties,asyncInfo) \
    ( (This)->lpVtbl->UpdateWebAccountPropertiesAsync(This,webAccount,webAccountUserName,additionalProperties,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_AddWebAccountAsync(This,webAccountId,webAccountUserName,props,asyncInfo) \
    ( (This)->lpVtbl->AddWebAccountAsync(This,webAccountId,webAccountUserName,props,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_DeleteWebAccountAsync(This,webAccount,asyncInfo) \
    ( (This)->lpVtbl->DeleteWebAccountAsync(This,webAccount,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_FindAllProviderWebAccountsAsync(This,asyncInfo) \
    ( (This)->lpVtbl->FindAllProviderWebAccountsAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_PushCookiesAsync(This,uri,cookies,asyncInfo) \
    ( (This)->lpVtbl->PushCookiesAsync(This,uri,cookies,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_SetViewAsync(This,webAccount,view,asyncInfo) \
    ( (This)->lpVtbl->SetViewAsync(This,webAccount,view,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_ClearViewAsync(This,webAccount,applicationCallbackUri,asyncInfo) \
    ( (This)->lpVtbl->ClearViewAsync(This,webAccount,applicationCallbackUri,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_GetViewsAsync(This,webAccount,asyncInfo) \
    ( (This)->lpVtbl->GetViewsAsync(This,webAccount,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_SetWebAccountPictureAsync(This,webAccount,webAccountPicture,asyncInfo) \
    ( (This)->lpVtbl->SetWebAccountPictureAsync(This,webAccount,webAccountPicture,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_ClearWebAccountPictureAsync(This,webAccount,asyncInfo) \
    ( (This)->lpVtbl->ClearWebAccountPictureAsync(This,webAccount,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics2[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics2";
/* [object, uuid("68A7A829-2D5F-4653-8BB0-BD2FA6BD2D87"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PullCookiesAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING uriString,
        /* [in] */__RPC__in HSTRING callerPFN,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_PullCookiesAsync(This,uriString,callerPFN,asyncInfo) \
    ( (This)->lpVtbl->PullCookiesAsync(This,uriString,callerPFN,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics3";
/* [object, uuid("DD4523A6-8A4F-4AA2-B15E-03F550AF1359"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindAllProviderWebAccountsForUserAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddWebAccountForUserAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING webAccountId,
        /* [in] */__RPC__in HSTRING webAccountUserName,
        /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddWebAccountWithScopeForUserAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING webAccountId,
        /* [in] */__RPC__in HSTRING webAccountUserName,
        /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountScope scope,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddWebAccountWithScopeAndMapForUserAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING webAccountId,
        /* [in] */__RPC__in HSTRING webAccountUserName,
        /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountScope scope,
        /* [in] */__RPC__in HSTRING perUserWebAccountId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_FindAllProviderWebAccountsForUserAsync(This,user,operation) \
    ( (This)->lpVtbl->FindAllProviderWebAccountsForUserAsync(This,user,operation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_AddWebAccountForUserAsync(This,user,webAccountId,webAccountUserName,props,operation) \
    ( (This)->lpVtbl->AddWebAccountForUserAsync(This,user,webAccountId,webAccountUserName,props,operation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_AddWebAccountWithScopeForUserAsync(This,user,webAccountId,webAccountUserName,props,scope,operation) \
    ( (This)->lpVtbl->AddWebAccountWithScopeForUserAsync(This,user,webAccountId,webAccountUserName,props,scope,operation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_AddWebAccountWithScopeAndMapForUserAsync(This,user,webAccountId,webAccountUserName,props,scope,perUserWebAccountId,operation) \
    ( (This)->lpVtbl->AddWebAccountWithScopeAndMapForUserAsync(This,user,webAccountId,webAccountUserName,props,scope,perUserWebAccountId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics4[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics4";
/* [object, uuid("59EBC2D2-F7DB-412F-BC3F-F2FEA04430B4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InvalidateAppCacheForAllAccountsAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *InvalidateAppCacheForAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_InvalidateAppCacheForAllAccountsAsync(This,asyncInfo) \
    ( (This)->lpVtbl->InvalidateAppCacheForAllAccountsAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_InvalidateAppCacheForAccountAsync(This,webAccount,asyncInfo) \
    ( (This)->lpVtbl->InvalidateAppCacheForAccountAsync(This,webAccount,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountManagerStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountMapManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountMapManagerStatics";
/* [object, uuid("E8FA446F-3A1B-48A4-8E90-1E59CA6F54DB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *AddWebAccountWithScopeAndMapAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics * This,
        /* [in] */__RPC__in HSTRING webAccountId,
        /* [in] */__RPC__in HSTRING webAccountUserName,
        /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountScope scope,
        /* [in] */__RPC__in HSTRING perUserWebAccountId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *SetPerAppToPerUserAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * perAppAccount,
        /* [in] */__RPC__in HSTRING perUserWebAccountId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetPerUserFromPerAppAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * perAppAccount,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ClearPerUserFromPerAppAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * perAppAccount,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_AddWebAccountWithScopeAndMapAsync(This,webAccountId,webAccountUserName,props,scope,perUserWebAccountId,asyncInfo) \
    ( (This)->lpVtbl->AddWebAccountWithScopeAndMapAsync(This,webAccountId,webAccountUserName,props,scope,perUserWebAccountId,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_SetPerAppToPerUserAccountAsync(This,perAppAccount,perUserWebAccountId,asyncInfo) \
    ( (This)->lpVtbl->SetPerAppToPerUserAccountAsync(This,perAppAccount,perUserWebAccountId,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_GetPerUserFromPerAppAccountAsync(This,perAppAccount,asyncInfo) \
    ( (This)->lpVtbl->GetPerUserFromPerAppAccountAsync(This,perAppAccount,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_ClearPerUserFromPerAppAccountAsync(This,perAppAccount,asyncInfo) \
    ( (This)->lpVtbl->ClearPerUserFromPerAppAccountAsync(This,perAppAccount,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountMapManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderAddAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountProviderAddAccountOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderAddAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderAddAccountOperation";
/* [object, uuid("73EBDCCF-4378-4C79-9335-A5D7AB81594E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_ReportCompleted(This) \
    ( (This)->lpVtbl->ReportCompleted(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderAddAccountOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderBaseReportOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation";
/* [object, uuid("BBA4ACBB-993B-4D57-BBE4-1421E3668B4C"), contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation * This
        );
    HRESULT ( STDMETHODCALLTYPE *ReportError )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_ReportCompleted(This) \
    ( (This)->lpVtbl->ReportCompleted(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_ReportError(This,value) \
    ( (This)->lpVtbl->ReportError(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderBaseReportOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderDeleteAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountProviderDeleteAccountOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderDeleteAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderDeleteAccountOperation";
/* [object, uuid("0ABB48B8-9E01-49C9-A355-7D48CAF7D6CA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccount )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_get_WebAccount(This,value) \
    ( (This)->lpVtbl->get_WebAccount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderDeleteAccountOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderManageAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountProviderManageAccountOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderManageAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderManageAccountOperation";
/* [object, uuid("ED20DC5C-D21B-463E-A9B7-C1FD0EDAE978"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccount )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_get_WebAccount(This,value) \
    ( (This)->lpVtbl->get_WebAccount(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_ReportCompleted(This) \
    ( (This)->lpVtbl->ReportCompleted(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderManageAccountOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation";
/* [object, uuid("6D5D2426-10B1-419A-A44E-F9C5161574E6"), contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountProviderOperationKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderRetrieveCookiesOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountProviderRetrieveCookiesOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderRetrieveCookiesOperation";
/* [object, uuid("5A040441-0FA3-4AB1-A01C-20B110358594"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Context )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * webCookieRequestContext
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cookies )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CHttp__CHttpCookie * * cookies
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * uri
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationCallbackUri )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_get_Context(This,webCookieRequestContext) \
    ( (This)->lpVtbl->get_Context(This,webCookieRequestContext) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_get_Cookies(This,cookies) \
    ( (This)->lpVtbl->get_Cookies(This,cookies) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_put_Uri(This,uri) \
    ( (This)->lpVtbl->put_Uri(This,uri) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_get_Uri(This,uri) \
    ( (This)->lpVtbl->get_Uri(This,uri) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_get_ApplicationCallbackUri(This,value) \
    ( (This)->lpVtbl->get_ApplicationCallbackUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderRetrieveCookiesOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderSignOutAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountProviderSignOutAccountOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderSignOutAccountOperation";
/* [object, uuid("B890E21D-0C55-47BC-8C72-04A6FC7CAC07"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccount )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationCallbackUri )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_get_WebAccount(This,value) \
    ( (This)->lpVtbl->get_WebAccount(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_get_ApplicationCallbackUri(This,value) \
    ( (This)->lpVtbl->get_ApplicationCallbackUri(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_get_ClientId(This,value) \
    ( (This)->lpVtbl->get_ClientId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSignOutAccountOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderSilentReportOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSilentReportOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderSilentReportOperation";
/* [object, uuid("E0B545F8-3B0F-44DA-924C-7B18BAAA62A9"), contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *ReportUserInteractionRequired )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ReportUserInteractionRequiredWithError )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_ReportUserInteractionRequired(This) \
    ( (This)->lpVtbl->ReportUserInteractionRequired(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_ReportUserInteractionRequiredWithError(This,value) \
    ( (This)->lpVtbl->ReportUserInteractionRequiredWithError(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderSilentReportOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects";
/* [object, uuid("408F284B-1328-42DB-89A4-0BCE7A717D8E"), contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjectsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Operation )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjectsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjectsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_get_Operation(This,value) \
    ( (This)->lpVtbl->get_Operation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects2[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects2";
/* [object, uuid("1020B893-5CA5-4FFF-95FB-B820273FC395"), contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenObjects2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation";
/* [object, uuid("95C613BE-2034-4C38-9434-D26C14B2B4B2"), contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderRequest )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * * webTokenRequest
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderResponses )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CAuthentication__CWeb__CProvider__CWebProviderTokenResponse * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CacheExpirationTime )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CacheExpirationTime )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_get_ProviderRequest(This,webTokenRequest) \
    ( (This)->lpVtbl->get_ProviderRequest(This,webTokenRequest) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_get_ProviderResponses(This,value) \
    ( (This)->lpVtbl->get_ProviderResponses(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_put_CacheExpirationTime(This,value) \
    ( (This)->lpVtbl->put_CacheExpirationTime(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_get_CacheExpirationTime(This,value) \
    ( (This)->lpVtbl->get_CacheExpirationTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderTokenOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountProviderUIReportOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountProviderUIReportOperation[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderUIReportOperation";
/* [object, uuid("28FF92D3-8F80-42FB-944F-B2107BBD42E6"), contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReportUserCanceled )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_ReportUserCanceled(This) \
    ( (This)->lpVtbl->ReportUserCanceled(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderUIReportOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebAccountScopeManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics[] = L"Windows.Security.Authentication.Web.Provider.IWebAccountScopeManagerStatics";
/* [object, uuid("5C6CE37C-12B2-423A-BF3D-85B8D7E53656"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *AddWebAccountWithScopeAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics * This,
        /* [in] */__RPC__in HSTRING webAccountId,
        /* [in] */__RPC__in HSTRING webAccountUserName,
        /* [in] */__RPC__in_opt __FIMapView_2_HSTRING_HSTRING * props,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountScope scope,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *SetScopeAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountScope scope,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetScope )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountScope * scope
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_AddWebAccountWithScopeAsync(This,webAccountId,webAccountUserName,props,scope,asyncInfo) \
    ( (This)->lpVtbl->AddWebAccountWithScopeAsync(This,webAccountId,webAccountUserName,props,scope,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_SetScopeAsync(This,webAccount,scope,asyncInfo) \
    ( (This)->lpVtbl->SetScopeAsync(This,webAccount,scope,asyncInfo) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_GetScope(This,webAccount,scope) \
    ( (This)->lpVtbl->GetScope(This,webAccount,scope) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountScopeManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest[] = L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest";
/* [object, uuid("1E18778B-8805-454B-9F11-468D2AF1095A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClientRequest )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccounts )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccountSelectionOptions )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CWebAccountSelectionOptions * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationCallbackUri )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetApplicationTokenBindingKeyAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CTokenBindingKeyType keyType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * target,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequestVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_get_ClientRequest(This,value) \
    ( (This)->lpVtbl->get_ClientRequest(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_get_WebAccounts(This,value) \
    ( (This)->lpVtbl->get_WebAccounts(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_get_WebAccountSelectionOptions(This,value) \
    ( (This)->lpVtbl->get_WebAccountSelectionOptions(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_get_ApplicationCallbackUri(This,value) \
    ( (This)->lpVtbl->get_ApplicationCallbackUri(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_GetApplicationTokenBindingKeyAsync(This,keyType,target,asyncInfo) \
    ( (This)->lpVtbl->GetApplicationTokenBindingKeyAsync(This,keyType,target,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest2[] = L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest2";
/* [object, uuid("B5D72E4C-10B1-4AA6-88B1-0B6C9E0C1E46"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetApplicationTokenBindingKeyIdAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2 * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CTokenBindingKeyType keyType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * target,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_GetApplicationTokenBindingKeyIdAsync(This,keyType,target,asyncInfo) \
    ( (This)->lpVtbl->GetApplicationTokenBindingKeyIdAsync(This,keyType,target,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenRequest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponse[] = L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponse";
/* [object, uuid("EF213793-EF55-4186-B7CE-8CB2E7F9849E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClientResponse )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_get_ClientResponse(This,value) \
    ( (This)->lpVtbl->get_ClientResponse(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponseFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponseFactory[] = L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponseFactory";
/* [object, uuid("FA49D99A-25BA-4077-9CFA-9DB4DEA7B71A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * webTokenResponse,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponse * * webProviderTokenResponse
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactoryVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_Create(This,webTokenResponse,webProviderTokenResponse) \
    ( (This)->lpVtbl->Create(This,webTokenResponse,webProviderTokenResponse) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebProviderTokenResponseFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountClientView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Authentication.Web.Provider.IWebAccountClientViewFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountClientView ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountClientView_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountClientView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountClientView[] = L"Windows.Security.Authentication.Web.Provider.WebAccountClientView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountScopeManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountMapManagerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics4 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics2 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountManager_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountManager[] = L"Windows.Security.Authentication.Web.Provider.WebAccountManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderAddAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderAddAccountOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderAddAccountOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderAddAccountOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderAddAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderAddAccountOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderDeleteAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderDeleteAccountOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderDeleteAccountOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderDeleteAccountOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderDeleteAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderDeleteAccountOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderGetTokenSilentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderSilentReportOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderGetTokenSilentOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderGetTokenSilentOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderGetTokenSilentOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderGetTokenSilentOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderManageAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderManageAccountOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderManageAccountOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderManageAccountOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderManageAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderManageAccountOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderRequestTokenOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderUIReportOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderRequestTokenOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderRequestTokenOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderRequestTokenOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderRequestTokenOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderRetrieveCookiesOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderRetrieveCookiesOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderRetrieveCookiesOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderRetrieveCookiesOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderRetrieveCookiesOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderRetrieveCookiesOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderSignOutAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderSignOutAccountOperation ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderSignOutAccountOperation_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderSignOutAccountOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderSignOutAccountOperation[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderSignOutAccountOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebAccountProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebAccountProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebAccountProviderTriggerDetails[] = L"Windows.Security.Authentication.Web.Provider.WebAccountProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest ** Default Interface **
 *    Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebProviderTokenRequest_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebProviderTokenRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebProviderTokenRequest[] = L"Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponseFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponse ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebProviderTokenResponse_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_Provider_WebProviderTokenResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Provider_WebProviderTokenResponse[] = L"Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse";
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
#endif // __windows2Esecurity2Eauthentication2Eweb2Eprovider_p_h__

#endif // __windows2Esecurity2Eauthentication2Eweb2Eprovider_h__
