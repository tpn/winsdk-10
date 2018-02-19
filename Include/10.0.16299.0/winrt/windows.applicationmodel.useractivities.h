/* Header file automatically generated from windows.applicationmodel.useractivities.idl */
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
#ifndef __windows2Eapplicationmodel2Euseractivities_h__
#define __windows2Eapplicationmodel2Euseractivities_h__
#ifndef __windows2Eapplicationmodel2Euseractivities_p_h__
#define __windows2Eapplicationmodel2Euseractivities_p_h__


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
#include "Windows.UI.h"
#include "Windows.UI.Shell.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                interface IUserActivity;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity ABI::Windows::ApplicationModel::UserActivities::IUserActivity

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                interface IUserActivityAttribution;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution ABI::Windows::ApplicationModel::UserActivities::IUserActivityAttribution

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                interface IUserActivityAttributionFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory ABI::Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                interface IUserActivityChannel;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel ABI::Windows::ApplicationModel::UserActivities::IUserActivityChannel

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                interface IUserActivityChannelStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics ABI::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                interface IUserActivityContentInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo ABI::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                interface IUserActivityContentInfoStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics ABI::Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                interface IUserActivitySession;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession ABI::Windows::ApplicationModel::UserActivities::IUserActivitySession

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                interface IUserActivityVisualElements;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements ABI::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                class UserActivity;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("652507c7-0bc6-5d0b-82be-97ad2257b685"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::UserActivities::UserActivity*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserActivities::UserActivity*, ABI::Windows::ApplicationModel::UserActivities::IUserActivity*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.UserActivities.UserActivity>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::UserActivities::UserActivity*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::UserActivities::IUserActivity*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::UserActivities::IUserActivity*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("35095983-7790-5974-a660-1c2dbdd2efa7"))
IAsyncOperation<ABI::Windows::ApplicationModel::UserActivities::UserActivity*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserActivities::UserActivity*, ABI::Windows::ApplicationModel::UserActivities::IUserActivity*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.UserActivities.UserActivity>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::UserActivities::UserActivity*> __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::UserActivities::IUserActivity*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::UserActivities::IUserActivity*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



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
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



#ifndef ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Shell {
                interface IAdaptiveCard;
            } /* Windows */
        } /* UI */
    } /* Shell */} /* ABI */
#define __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard ABI::Windows::UI::Shell::IAdaptiveCard

#endif // ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                
                typedef enum UserActivityState : int UserActivityState;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */











namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                class UserActivityAttribution;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                class UserActivityChannel;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                class UserActivityContentInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                class UserActivitySession;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                class UserActivityVisualElements;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */










/*
 *
 * Struct Windows.ApplicationModel.UserActivities.UserActivityState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                /* [v1_enum, contract] */
                enum UserActivityState : int
                {
                    UserActivityState_New = 0,
                    UserActivityState_Published = 1,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivity
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivity[] = L"Windows.ApplicationModel.UserActivities.IUserActivity";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                /* [object, uuid("FC103E9E-2CAB-4D36-AEA2-B4BB556CEF0F"), exclusiveto, contract] */
                MIDL_INTERFACE("FC103E9E-2CAB-4D36-AEA2-B4BB556CEF0F")
                IUserActivity : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserActivities::UserActivityState * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VisualElements(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContentUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentType(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContentType(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FallbackUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FallbackUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivationUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ActivationUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentInfo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContentInfo(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSession(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserActivities::IUserActivitySession * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserActivity=_uuidof(IUserActivity);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityAttribution
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityAttribution
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityAttribution[] = L"Windows.ApplicationModel.UserActivities.IUserActivityAttribution";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                /* [object, uuid("34A5C8B5-86DD-4AEC-A491-6A4FAEA5D22E"), exclusiveto, contract] */
                MIDL_INTERFACE("34A5C8B5-86DD-4AEC-A491-6A4FAEA5D22E")
                IUserActivityAttribution : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IconUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IconUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlternateText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlternateText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AddImageQuery(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AddImageQuery(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserActivityAttribution=_uuidof(IUserActivityAttribution);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityAttributionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityAttribution
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityAttributionFactory[] = L"Windows.ApplicationModel.UserActivities.IUserActivityAttributionFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                /* [object, uuid("E62BD252-C566-4F42-9974-916C4D76377E"), exclusiveto, contract] */
                MIDL_INTERFACE("E62BD252-C566-4F42-9974-916C4D76377E")
                IUserActivityAttributionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * iconUri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserActivities::IUserActivityAttribution * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserActivityAttributionFactory=_uuidof(IUserActivityAttributionFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityChannel[] = L"Windows.ApplicationModel.UserActivities.IUserActivityChannel";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                /* [object, uuid("BAC0F8B8-A0E4-483B-B948-9CBABD06070C"), exclusiveto, contract] */
                MIDL_INTERFACE("BAC0F8B8-A0E4-483B-B948-9CBABD06070C")
                IUserActivityChannel : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetOrCreateUserActivityAsync(
                        /* [in] */__RPC__in HSTRING activityId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteActivityAsync(
                        /* [in] */__RPC__in HSTRING activityId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteAllActivitiesAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserActivityChannel=_uuidof(IUserActivityChannel);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics[] = L"Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                /* [object, uuid("C8C005AB-198D-4D80-ABB2-C9775EC4A729"), exclusiveto, contract] */
                MIDL_INTERFACE("C8C005AB-198D-4D80-ABB2-C9775EC4A729")
                IUserActivityChannelStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserActivities::IUserActivityChannel * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserActivityChannelStatics=_uuidof(IUserActivityChannelStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityContentInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityContentInfo[] = L"Windows.ApplicationModel.UserActivities.IUserActivityContentInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                /* [object, uuid("B399E5AD-137F-409D-822D-E1AF27CE08DC"), contract] */
                MIDL_INTERFACE("B399E5AD-137F-409D-822D-E1AF27CE08DC")
                IUserActivityContentInfo : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ToJson(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserActivityContentInfo=_uuidof(IUserActivityContentInfo);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityContentInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityContentInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityContentInfoStatics[] = L"Windows.ApplicationModel.UserActivities.IUserActivityContentInfoStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                /* [object, uuid("9988C34B-0386-4BC9-968A-8200B004144F"), exclusiveto, contract] */
                MIDL_INTERFACE("9988C34B-0386-4BC9-968A-8200B004144F")
                IUserActivityContentInfoStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromJson(
                        /* [in] */__RPC__in HSTRING value,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserActivityContentInfoStatics=_uuidof(IUserActivityContentInfoStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivitySession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivitySession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivitySession[] = L"Windows.ApplicationModel.UserActivities.IUserActivitySession";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                /* [object, uuid("AE434D78-24FA-44A3-AD48-6EDA61AA1924"), exclusiveto, contract] */
                MIDL_INTERFACE("AE434D78-24FA-44A3-AD48-6EDA61AA1924")
                IUserActivitySession : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserActivitySession=_uuidof(IUserActivitySession);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityVisualElements
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityVisualElements
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements[] = L"Windows.ApplicationModel.UserActivities.IUserActivityVisualElements";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserActivities {
                /* [object, uuid("94757513-262F-49EF-BBBF-9B75D2E85250"), exclusiveto, contract] */
                MIDL_INTERFACE("94757513-262F-49EF-BBBF-9B75D2E85250")
                IUserActivityVisualElements : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Description(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackgroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Attribution(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserActivities::IUserActivityAttribution * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Attribution(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::UserActivities::IUserActivityAttribution * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Shell::IAdaptiveCard * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Shell::IAdaptiveCard * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserActivityVisualElements=_uuidof(IUserActivityVisualElements);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserActivities */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivity ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivity_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivity_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivity[] = L"Windows.ApplicationModel.UserActivities.UserActivity";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivityAttribution
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.UserActivities.IUserActivityAttributionFactory interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivityAttribution ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityAttribution_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityAttribution_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityAttribution[] = L"Windows.ApplicationModel.UserActivities.UserActivityAttribution";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivityChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivityChannel ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityChannel_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityChannel[] = L"Windows.ApplicationModel.UserActivities.UserActivityChannel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivityContentInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.UserActivities.IUserActivityContentInfoStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivityContentInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityContentInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityContentInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityContentInfo[] = L"Windows.ApplicationModel.UserActivities.UserActivityContentInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivitySession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivitySession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivitySession_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivitySession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivitySession[] = L"Windows.ApplicationModel.UserActivities.UserActivitySession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivityVisualElements
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivityVisualElements ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityVisualElements_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityVisualElements_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityVisualElements[] = L"Windows.ApplicationModel.UserActivities.UserActivityVisualElements";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;



#ifndef ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard;

#endif // ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CUserActivities_CUserActivityState __x_ABI_CWindows_CApplicationModel_CUserActivities_CUserActivityState;
























/*
 *
 * Struct Windows.ApplicationModel.UserActivities.UserActivityState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CUserActivities_CUserActivityState
{
    UserActivityState_New = 0,
    UserActivityState_Published = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivity
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivity[] = L"Windows.ApplicationModel.UserActivities.IUserActivity";
/* [object, uuid("FC103E9E-2CAB-4D36-AEA2-B4BB556CEF0F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserActivities_CUserActivityState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VisualElements )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContentUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContentType )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FallbackUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FallbackUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivationUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ActivationUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentInfo )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContentInfo )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSession )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_get_VisualElements(This,value) \
    ( (This)->lpVtbl->get_VisualElements(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_get_ContentUri(This,value) \
    ( (This)->lpVtbl->get_ContentUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_put_ContentUri(This,value) \
    ( (This)->lpVtbl->put_ContentUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_get_ContentType(This,value) \
    ( (This)->lpVtbl->get_ContentType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_put_ContentType(This,value) \
    ( (This)->lpVtbl->put_ContentType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_get_FallbackUri(This,value) \
    ( (This)->lpVtbl->get_FallbackUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_put_FallbackUri(This,value) \
    ( (This)->lpVtbl->put_FallbackUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_get_ActivationUri(This,value) \
    ( (This)->lpVtbl->get_ActivationUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_put_ActivationUri(This,value) \
    ( (This)->lpVtbl->put_ActivationUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_get_ContentInfo(This,value) \
    ( (This)->lpVtbl->get_ContentInfo(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_put_ContentInfo(This,value) \
    ( (This)->lpVtbl->put_ContentInfo(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_SaveAsync(This,operation) \
    ( (This)->lpVtbl->SaveAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_CreateSession(This,result) \
    ( (This)->lpVtbl->CreateSession(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityAttribution
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityAttribution
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityAttribution[] = L"Windows.ApplicationModel.UserActivities.IUserActivityAttribution";
/* [object, uuid("34A5C8B5-86DD-4AEC-A491-6A4FAEA5D22E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IconUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IconUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlternateText )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlternateText )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AddImageQuery )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AddImageQuery )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_get_IconUri(This,value) \
    ( (This)->lpVtbl->get_IconUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_put_IconUri(This,value) \
    ( (This)->lpVtbl->put_IconUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_get_AlternateText(This,value) \
    ( (This)->lpVtbl->get_AlternateText(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_put_AlternateText(This,value) \
    ( (This)->lpVtbl->put_AlternateText(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_get_AddImageQuery(This,value) \
    ( (This)->lpVtbl->get_AddImageQuery(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_put_AddImageQuery(This,value) \
    ( (This)->lpVtbl->put_AddImageQuery(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityAttributionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityAttribution
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityAttributionFactory[] = L"Windows.ApplicationModel.UserActivities.IUserActivityAttributionFactory";
/* [object, uuid("E62BD252-C566-4F42-9974-916C4D76377E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * iconUri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_CreateWithUri(This,iconUri,result) \
    ( (This)->lpVtbl->CreateWithUri(This,iconUri,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityChannel[] = L"Windows.ApplicationModel.UserActivities.IUserActivityChannel";
/* [object, uuid("BAC0F8B8-A0E4-483B-B948-9CBABD06070C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetOrCreateUserActivityAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
        /* [in] */__RPC__in HSTRING activityId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteActivityAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
        /* [in] */__RPC__in HSTRING activityId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAllActivitiesAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_GetOrCreateUserActivityAsync(This,activityId,operation) \
    ( (This)->lpVtbl->GetOrCreateUserActivityAsync(This,activityId,operation) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_DeleteActivityAsync(This,activityId,operation) \
    ( (This)->lpVtbl->DeleteActivityAsync(This,activityId,operation) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_DeleteAllActivitiesAsync(This,operation) \
    ( (This)->lpVtbl->DeleteAllActivitiesAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics[] = L"Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics";
/* [object, uuid("C8C005AB-198D-4D80-ABB2-C9775EC4A729"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_GetDefault(This,value) \
    ( (This)->lpVtbl->GetDefault(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityContentInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityContentInfo[] = L"Windows.ApplicationModel.UserActivities.IUserActivityContentInfo";
/* [object, uuid("B399E5AD-137F-409D-822D-E1AF27CE08DC"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ToJson )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_ToJson(This,result) \
    ( (This)->lpVtbl->ToJson(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityContentInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityContentInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityContentInfoStatics[] = L"Windows.ApplicationModel.UserActivities.IUserActivityContentInfoStatics";
/* [object, uuid("9988C34B-0386-4BC9-968A-8200B004144F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromJson )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This,
        /* [in] */__RPC__in HSTRING value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_FromJson(This,value,result) \
    ( (This)->lpVtbl->FromJson(This,value,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivitySession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivitySession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivitySession[] = L"Windows.ApplicationModel.UserActivities.IUserActivitySession";
/* [object, uuid("AE434D78-24FA-44A3-AD48-6EDA61AA1924"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.UserActivities.IUserActivityVisualElements
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserActivities.UserActivityVisualElements
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements[] = L"Windows.ApplicationModel.UserActivities.IUserActivityVisualElements";
/* [object, uuid("94757513-262F-49EF-BBBF-9B75D2E85250"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElementsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayText )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Attribution )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Attribution )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElementsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElementsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_get_DisplayText(This,value) \
    ( (This)->lpVtbl->get_DisplayText(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_put_DisplayText(This,value) \
    ( (This)->lpVtbl->put_DisplayText(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_put_Description(This,value) \
    ( (This)->lpVtbl->put_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_put_BackgroundColor(This,value) \
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_get_Attribution(This,value) \
    ( (This)->lpVtbl->get_Attribution(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_put_Attribution(This,value) \
    ( (This)->lpVtbl->put_Attribution(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivity ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivity_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivity_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivity[] = L"Windows.ApplicationModel.UserActivities.UserActivity";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivityAttribution
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.UserActivities.IUserActivityAttributionFactory interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivityAttribution ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityAttribution_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityAttribution_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityAttribution[] = L"Windows.ApplicationModel.UserActivities.UserActivityAttribution";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivityChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivityChannel ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityChannel_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityChannel[] = L"Windows.ApplicationModel.UserActivities.UserActivityChannel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivityContentInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.UserActivities.IUserActivityContentInfoStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivityContentInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityContentInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityContentInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityContentInfo[] = L"Windows.ApplicationModel.UserActivities.UserActivityContentInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivitySession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivitySession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivitySession_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivitySession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivitySession[] = L"Windows.ApplicationModel.UserActivities.UserActivitySession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.UserActivities.UserActivityVisualElements
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserActivities.IUserActivityVisualElements ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityVisualElements_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserActivities_UserActivityVisualElements_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityVisualElements[] = L"Windows.ApplicationModel.UserActivities.UserActivityVisualElements";
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
#endif // __windows2Eapplicationmodel2Euseractivities_p_h__

#endif // __windows2Eapplicationmodel2Euseractivities_h__
