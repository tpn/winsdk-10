/* Header file automatically generated from windows.applicationmodel.socialinfo.provider.idl */
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
#ifndef __windows2Eapplicationmodel2Esocialinfo2Eprovider_h__
#define __windows2Eapplicationmodel2Esocialinfo2Eprovider_h__
#ifndef __windows2Eapplicationmodel2Esocialinfo2Eprovider_p_h__
#define __windows2Eapplicationmodel2Esocialinfo2Eprovider_p_h__


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

#if !defined(WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION)

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
#include "Windows.ApplicationModel.SocialInfo.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                namespace Provider {
                    interface ISocialDashboardItemUpdater;
                } /* Windows */
            } /* ApplicationModel */
        } /* SocialInfo */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                namespace Provider {
                    interface ISocialFeedUpdater;
                } /* Windows */
            } /* ApplicationModel */
        } /* SocialInfo */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                namespace Provider {
                    interface ISocialInfoProviderManagerStatics;
                } /* Windows */
            } /* ApplicationModel */
        } /* SocialInfo */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                namespace Provider {
                    class SocialDashboardItemUpdater;
                } /* Windows */
            } /* ApplicationModel */
        } /* SocialInfo */
    } /* Provider */} /* ABI */


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("33cfd9aa-6c3c-50df-bbc8-34c22a0e5b6b"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater*, ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8bbca9a4-a4fc-5fe2-b6b1-0e5a75d05b07"))
IAsyncOperation<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater*, ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater*> __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                namespace Provider {
                    class SocialFeedUpdater;
                } /* Windows */
            } /* ApplicationModel */
        } /* SocialInfo */
    } /* Provider */} /* ABI */


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0b227474-80c0-5f33-9ff9-234403abd6fa"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater*, ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4efa4da9-c556-59f4-9d99-e7801c5b0f45"))
IAsyncOperation<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater*, ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater*> __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                class SocialFeedItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                interface ISocialFeedItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e7c8cd1f-3907-5da8-9d72-90426dc37072"))
IIterator<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*, ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.SocialInfo.SocialFeedItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t;
#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
//#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ad33d864-9569-5e2d-bd72-182a8ff50cf6"))
IIterable<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*, ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.SocialInfo.SocialFeedItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t;
#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
//#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e6be2bb8-fc75-585c-836c-34f3ff87680f"))
IVectorView<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*, ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.SocialInfo.SocialFeedItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t;
#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
//#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#define DEF___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("36cd5297-36c3-56a7-9656-ec9d5bde7aba"))
IVector<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*, ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.SocialInfo.SocialFeedItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t;
#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
//#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
//#define __FIAsyncOperationCompletedHandler_1_boolean_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */




#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::IAsyncOperation<boolean>
//#define __FIAsyncOperation_1_boolean_t ABI::Windows::Foundation::IAsyncOperation<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_boolean_USE */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                class SocialFeedContent;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                interface ISocialFeedContent;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedContent

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                
                typedef enum SocialFeedKind : int SocialFeedKind;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                
                typedef enum SocialFeedUpdateMode : int SocialFeedUpdateMode;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                class SocialItemThumbnail;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                interface ISocialItemThumbnail;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__





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




















/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.Provider.ISocialDashboardItemUpdater
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.ISocialDashboardItemUpdater";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                namespace Provider {
                    /* [object, uuid("3CDE9DC9-4800-46CD-869B-1973EC685BDE"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("3CDE9DC9-4800-46CD-869B-1973EC685BDE")
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    ISocialDashboardItemUpdater : IInspectable
                    {
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_OwnerRemoteId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedContent * * value
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Timestamp(
                            /* [in] */ABI::Windows::Foundation::DateTime value
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Thumbnail(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail * value
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Thumbnail(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail * * value
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CommitAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TargetUri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_TargetUri(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISocialDashboardItemUpdater=_uuidof(ISocialDashboardItemUpdater);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* SocialInfo */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.Provider.ISocialFeedUpdater
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.ISocialFeedUpdater";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                namespace Provider {
                    /* [object, uuid("7A0C0AA7-ED89-4BD5-A8D9-15F4D9861C10"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("7A0C0AA7-ED89-4BD5-A8D9-15F4D9861C10")
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    ISocialFeedUpdater : IInspectable
                    {
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_OwnerRemoteId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::SocialInfo::SocialFeedKind * value
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Items(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * * value
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CommitAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISocialFeedUpdater=_uuidof(ISocialFeedUpdater);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* SocialInfo */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.Provider.ISocialInfoProviderManagerStatics
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.Provider.SocialInfoProviderManager
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics[] = L"Windows.ApplicationModel.SocialInfo.Provider.ISocialInfoProviderManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                namespace Provider {
                    /* [object, uuid("1B88E52B-7787-48D6-AA12-D8E8F47AB85A"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("1B88E52B-7787-48D6-AA12-D8E8F47AB85A")
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    ISocialInfoProviderManagerStatics : IInspectable
                    {
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CreateSocialFeedUpdaterAsync(
                            /* [in] */ABI::Windows::ApplicationModel::SocialInfo::SocialFeedKind kind,
                            /* [in] */ABI::Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode mode,
                            /* [in] */__RPC__in HSTRING ownerRemoteId,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * * operation
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CreateDashboardItemUpdaterAsync(
                            /* [in] */__RPC__in HSTRING ownerRemoteId,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * * operation
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE UpdateBadgeCountValue(
                            /* [in] */__RPC__in HSTRING itemRemoteId,
                            /* [in] */INT32 newCount
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE ReportNewContentAvailable(
                            /* [in] */__RPC__in HSTRING contactRemoteId,
                            /* [in] */ABI::Windows::ApplicationModel::SocialInfo::SocialFeedKind kind
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE ProvisionAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                            ) = 0;
                        
                        #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE DeprovisionAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISocialInfoProviderManagerStatics=_uuidof(ISocialInfoProviderManagerStatics);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* SocialInfo */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.Provider.ISocialDashboardItemUpdater ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialDashboardItemUpdater_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialDashboardItemUpdater_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_Provider_SocialDashboardItemUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.Provider.ISocialFeedUpdater ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialFeedUpdater_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialFeedUpdater_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_Provider_SocialFeedUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.Provider.SocialInfoProviderManager
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.SocialInfo.Provider.ISocialInfoProviderManagerStatics interface starting with version 1.0 of the Windows.ApplicationModel.SocialInfo.SocialInfoContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialInfoProviderManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialInfoProviderManager_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialInfoProviderManager is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_Provider_SocialInfoProviderManager[] = L"Windows.ApplicationModel.SocialInfo.Provider.SocialInfoProviderManager";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

typedef struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

typedef struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *value);

    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;

interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;

interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_boolean_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;

interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_boolean_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__




typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind;


typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode;


#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




















/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.Provider.ISocialDashboardItemUpdater
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.ISocialDashboardItemUpdater";
/* [object, uuid("3CDE9DC9-4800-46CD-869B-1973EC685BDE"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_OwnerRemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CommitAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdaterVtbl;

interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdaterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_get_OwnerRemoteId(This,value) \
    ( (This)->lpVtbl->get_OwnerRemoteId(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_put_Timestamp(This,value) \
    ( (This)->lpVtbl->put_Timestamp(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_put_Thumbnail(This,value) \
    ( (This)->lpVtbl->put_Thumbnail(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_get_Thumbnail(This,value) \
    ( (This)->lpVtbl->get_Thumbnail(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_CommitAsync(This,operation) \
    ( (This)->lpVtbl->CommitAsync(This,operation) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_get_TargetUri(This,value) \
    ( (This)->lpVtbl->get_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_put_TargetUri(This,value) \
    ( (This)->lpVtbl->put_TargetUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.Provider.ISocialFeedUpdater
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.ISocialFeedUpdater";
/* [object, uuid("7A0C0AA7-ED89-4BD5-A8D9-15F4D9861C10"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_OwnerRemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CommitAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdaterVtbl;

interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdaterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_get_OwnerRemoteId(This,value) \
    ( (This)->lpVtbl->get_OwnerRemoteId(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_get_Items(This,value) \
    ( (This)->lpVtbl->get_Items(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_CommitAsync(This,operation) \
    ( (This)->lpVtbl->CommitAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.Provider.ISocialInfoProviderManagerStatics
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.Provider.SocialInfoProviderManager
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics[] = L"Windows.ApplicationModel.SocialInfo.Provider.ISocialInfoProviderManagerStatics";
/* [object, uuid("1B88E52B-7787-48D6-AA12-D8E8F47AB85A"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CreateSocialFeedUpdaterAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind kind,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode mode,
        /* [in] */__RPC__in HSTRING ownerRemoteId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * * operation
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CreateDashboardItemUpdaterAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
        /* [in] */__RPC__in HSTRING ownerRemoteId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * * operation
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *UpdateBadgeCountValue )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
        /* [in] */__RPC__in HSTRING itemRemoteId,
        /* [in] */INT32 newCount
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *ReportNewContentAvailable )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
        /* [in] */__RPC__in HSTRING contactRemoteId,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind kind
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *ProvisionAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *DeprovisionAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_CreateSocialFeedUpdaterAsync(This,kind,mode,ownerRemoteId,operation) \
    ( (This)->lpVtbl->CreateSocialFeedUpdaterAsync(This,kind,mode,ownerRemoteId,operation) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_CreateDashboardItemUpdaterAsync(This,ownerRemoteId,operation) \
    ( (This)->lpVtbl->CreateDashboardItemUpdaterAsync(This,ownerRemoteId,operation) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_UpdateBadgeCountValue(This,itemRemoteId,newCount) \
    ( (This)->lpVtbl->UpdateBadgeCountValue(This,itemRemoteId,newCount) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_ReportNewContentAvailable(This,contactRemoteId,kind) \
    ( (This)->lpVtbl->ReportNewContentAvailable(This,contactRemoteId,kind) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_ProvisionAsync(This,operation) \
    ( (This)->lpVtbl->ProvisionAsync(This,operation) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_DeprovisionAsync(This,operation) \
    ( (This)->lpVtbl->DeprovisionAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.Provider.ISocialDashboardItemUpdater ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialDashboardItemUpdater_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialDashboardItemUpdater_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_Provider_SocialDashboardItemUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.Provider.ISocialFeedUpdater ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialFeedUpdater_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialFeedUpdater_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_Provider_SocialFeedUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.Provider.SocialInfoProviderManager
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.SocialInfo.Provider.ISocialInfoProviderManagerStatics interface starting with version 1.0 of the Windows.ApplicationModel.SocialInfo.SocialInfoContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialInfoProviderManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_Provider_SocialInfoProviderManager_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialInfoProviderManager is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_Provider_SocialInfoProviderManager[] = L"Windows.ApplicationModel.SocialInfo.Provider.SocialInfoProviderManager";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Esocialinfo2Eprovider_p_h__

#endif // __windows2Eapplicationmodel2Esocialinfo2Eprovider_h__
