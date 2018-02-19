/* Header file automatically generated from windows.applicationmodel.activation.idl */
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
#ifndef __windows2Eapplicationmodel2Eactivation_h__
#define __windows2Eapplicationmodel2Eactivation_h__
#ifndef __windows2Eapplicationmodel2Eactivation_p_h__
#define __windows2Eapplicationmodel2Eactivation_p_h__


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
#include "Windows.ApplicationModel.Appointments.AppointmentsProvider.h"
#include "Windows.ApplicationModel.Background.h"
#include "Windows.ApplicationModel.Calls.h"
#include "Windows.ApplicationModel.Contacts.h"
#include "Windows.ApplicationModel.Contacts.Provider.h"
#include "Windows.ApplicationModel.Core.h"
#include "Windows.ApplicationModel.DataTransfer.ShareTarget.h"
#include "Windows.ApplicationModel.Search.h"
#include "Windows.ApplicationModel.UserDataAccounts.Provider.h"
#include "Windows.ApplicationModel.Wallet.h"
#include "Windows.Devices.Enumeration.h"
#include "Windows.Devices.Printers.Extensions.h"
#include "Windows.Media.SpeechRecognition.h"
#include "Windows.Security.Authentication.Web.h"
#include "Windows.Security.Authentication.Web.Provider.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Pickers.Provider.h"
#include "Windows.Storage.Provider.h"
#include "Windows.Storage.Search.h"
#include "Windows.System.h"
#include "Windows.UI.Notifications.h"
#include "Windows.UI.ViewManagement.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IActivatedEventArgsWithUser;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser ABI::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IApplicationViewActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderAddAppointmentActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderRemoveAppointmentActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderReplaceAppointmentActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IAppointmentsProviderShowTimeFrameActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IBackgroundActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ICachedFileUpdaterActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ICameraSettingsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ICommandLineActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ICommandLineActivationOperation;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation ABI::Windows::ApplicationModel::Activation::ICommandLineActivationOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactCallActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactMapActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactMessageActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactPanelActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactPickerActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactPostActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactVideoCallActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContactsProviderActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IContinuationActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IDeviceActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IDevicePairingActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IDialReceiverActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IFileActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileActivatedEventArgsWithCallerPackageFamilyName;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName ABI::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileActivatedEventArgsWithNeighboringFiles;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles ABI::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileOpenPickerActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileOpenPickerActivatedEventArgs2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 ABI::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileOpenPickerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs ABI::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileSavePickerActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileSavePickerActivatedEventArgs2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 ABI::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFileSavePickerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs ABI::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IFolderPickerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs ABI::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ILaunchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ILaunchActivatedEventArgs2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2 ABI::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ILockScreenActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ILockScreenCallActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IPickerReturnedActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IPrelaunchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IPrint3DWorkflowActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IPrintTaskSettingsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IProtocolActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData ABI::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IProtocolForResultsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IRestrictedLaunchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ISearchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs ABI::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ISearchActivatedEventArgsWithLinguisticDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails ABI::Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IShareTargetActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ISplashScreen;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen ABI::Windows::ApplicationModel::Activation::ISplashScreen

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IStartupTaskActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface ITileActivatedInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo ABI::Windows::ApplicationModel::Activation::ITileActivatedInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IToastNotificationActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IUserDataAccountProviderActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IViewSwitcherProvider;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider ABI::Windows::ApplicationModel::Activation::IViewSwitcherProvider

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IVoiceCommandActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IWalletActionActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IWebAccountProviderActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs ABI::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                interface IWebAuthenticationBrokerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs ABI::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class BackgroundActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("49a07732-e7b8-5c5b-9de7-22e33cb97004"))
IEventHandler<ABI::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs*, ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.ApplicationModel.Activation.BackgroundActivatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs*> __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_t;
#define __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs ABI::Windows::Foundation::IEventHandler<ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs*>
//#define __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class SplashScreen;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7725b2a5-287d-5ed2-a789-2a6a2673c7fe"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Activation::SplashScreen*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Activation::SplashScreen*, ABI::Windows::ApplicationModel::Activation::ISplashScreen*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Activation.SplashScreen, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Activation::SplashScreen*,IInspectable*> __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Activation::ISplashScreen*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Activation::ISplashScreen*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Background {
                class BackgroundTaskRegistrationGroup;
            } /* Windows */
        } /* ApplicationModel */
    } /* Background */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Background {
                interface IBackgroundTaskRegistrationGroup;
            } /* Windows */
        } /* ApplicationModel */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup ABI::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d4f89768-688f-59ec-bf24-c2af6a310fa4"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup*,ABI::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup*, ABI::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs*, ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Background.BackgroundTaskRegistrationGroup, Windows.ApplicationModel.Activation.BackgroundActivatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup*,ABI::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup*,ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup*,ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                class CoreApplicationView;
            } /* Windows */
        } /* ApplicationModel */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                interface ICoreApplicationView;
            } /* Windows */
        } /* ApplicationModel */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView ABI::Windows::ApplicationModel::Core::ICoreApplicationView

#endif // ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cf193a96-eb13-5e3b-8bdf-87b6efae8339"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Core::CoreApplicationView*,ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Core::CoreApplicationView*, ABI::Windows::ApplicationModel::Core::ICoreApplicationView*>,ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Core.CoreApplicationView, Windows.ApplicationModel.Activation.IActivatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Core::CoreApplicationView*,ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Core::ICoreApplicationView*,ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Core::ICoreApplicationView*,ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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




#ifndef DEF___FIMapChangedEventArgs_1_HSTRING_USE
#define DEF___FIMapChangedEventArgs_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60141efb-f2f9-5377-96fd-f8c60d9558b5"))
IMapChangedEventArgs<HSTRING> : IMapChangedEventArgs_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapChangedEventArgs`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapChangedEventArgs<HSTRING> __FIMapChangedEventArgs_1_HSTRING_t;
#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::__FIMapChangedEventArgs_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
//#define __FIMapChangedEventArgs_1_HSTRING_t ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapChangedEventArgs_1_HSTRING_USE */





#ifndef DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#define DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("24f981e5-ddca-538d-aada-a59906084cf1"))
MapChangedEventHandler<HSTRING,IInspectable*> : MapChangedEventHandler_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.MapChangedEventHandler`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef MapChangedEventHandler<HSTRING,IInspectable*> __FMapChangedEventHandler_2_HSTRING_IInspectable_t;
#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FMapChangedEventHandler_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#define DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("236aac9d-fb12-5c4d-a41c-9e445fb4d7ec"))
IObservableMap<HSTRING,IInspectable*> : IObservableMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IObservableMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IObservableMap<HSTRING,IInspectable*> __FIObservableMap_2_HSTRING_IInspectable_t;
#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIObservableMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
//#define __FIObservableMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIObservableMap_2_HSTRING_IInspectable_USE */



#ifndef ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageItem;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageItem ABI::Windows::Storage::IStorageItem

#endif // ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CIStorageItem_USE
#define DEF___FIIterator_1_Windows__CStorage__CIStorageItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05b487c2-3830-5d3c-98da-25fa11542dbd"))
IIterator<ABI::Windows::Storage::IStorageItem*> : IIterator_impl<ABI::Windows::Storage::IStorageItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.IStorageItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::IStorageItem*> __FIIterator_1_Windows__CStorage__CIStorageItem_t;
#define __FIIterator_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CIStorageItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageItem*>
//#define __FIIterator_1_Windows__CStorage__CIStorageItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CIStorageItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CIStorageItem_USE
#define DEF___FIIterable_1_Windows__CStorage__CIStorageItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb8b8418-65d1-544b-b083-6d172f568c73"))
IIterable<ABI::Windows::Storage::IStorageItem*> : IIterable_impl<ABI::Windows::Storage::IStorageItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.IStorageItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::IStorageItem*> __FIIterable_1_Windows__CStorage__CIStorageItem_t;
#define __FIIterable_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CIStorageItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageItem*>
//#define __FIIterable_1_Windows__CStorage__CIStorageItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CIStorageItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CIStorageItem_USE
#define DEF___FIVectorView_1_Windows__CStorage__CIStorageItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("85575a41-06cb-58d0-b98a-7c8f06e6e9d7"))
IVectorView<ABI::Windows::Storage::IStorageItem*> : IVectorView_impl<ABI::Windows::Storage::IStorageItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.IStorageItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::IStorageItem*> __FIVectorView_1_Windows__CStorage__CIStorageItem_t;
#define __FIVectorView_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CIStorageItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageItem*>
//#define __FIVectorView_1_Windows__CStorage__CIStorageItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CIStorageItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFile ABI::Windows::Storage::IStorageFile

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("43e29f53-0298-55aa-a6c8-4edd323d9598"))
IIterator<ABI::Windows::Storage::StorageFile*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::StorageFile*> __FIIterator_1_Windows__CStorage__CStorageFile_t;
#define __FIIterator_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageFile*>
//#define __FIIterator_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9ac00304-83ea-5688-87b6-ae38aab65d0b"))
IIterable<ABI::Windows::Storage::StorageFile*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::StorageFile*> __FIIterable_1_Windows__CStorage__CStorageFile_t;
#define __FIIterable_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageFile*>
//#define __FIIterable_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("80646519-5e2a-595d-a8cd-2a24b4067f1b"))
IVectorView<ABI::Windows::Storage::StorageFile*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::StorageFile*> __FIVectorView_1_Windows__CStorage__CStorageFile_t;
#define __FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFile*>
//#define __FIVectorView_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                class ShownTileNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                interface IShownTileNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */
#define __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification ABI::Windows::UI::Notifications::IShownTileNotification

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_USE
#define DEF___FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("04d8d70b-7c15-5f60-9894-b21366b427c2"))
IIterator<ABI::Windows::UI::Notifications::ShownTileNotification*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::ShownTileNotification*, ABI::Windows::UI::Notifications::IShownTileNotification*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Notifications.ShownTileNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Notifications::ShownTileNotification*> __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_t;
#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Notifications::IShownTileNotification*>
//#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Notifications::IShownTileNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_USE
#define DEF___FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1863baee-44f1-5e51-bcdf-a3cdab826a15"))
IIterable<ABI::Windows::UI::Notifications::ShownTileNotification*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::ShownTileNotification*, ABI::Windows::UI::Notifications::IShownTileNotification*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Notifications.ShownTileNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Notifications::ShownTileNotification*> __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_t;
#define __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Notifications::IShownTileNotification*>
//#define __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Notifications::IShownTileNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_USE
#define DEF___FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2b23baa9-1d54-5440-bd32-86ed70f15c9e"))
IVectorView<ABI::Windows::UI::Notifications::ShownTileNotification*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::ShownTileNotification*, ABI::Windows::UI::Notifications::IShownTileNotification*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Notifications.ShownTileNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Notifications::ShownTileNotification*> __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_t;
#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Notifications::IShownTileNotification*>
//#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Notifications::IShownTileNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    class AddAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    interface IAddAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    class RemoveAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    interface IRemoveAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    class ReplaceAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    interface IReplaceAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__







#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Background {
                interface IBackgroundTaskInstance;
            } /* Windows */
        } /* ApplicationModel */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance ABI::Windows::ApplicationModel::Background::IBackgroundTaskInstance

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                class LockScreenCallUI;
            } /* Windows */
        } /* ApplicationModel */
    } /* Calls */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                interface ILockScreenCallUI;
            } /* Windows */
        } /* ApplicationModel */
    } /* Calls */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI ABI::Windows::ApplicationModel::Calls::ILockScreenCallUI

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                class Contact;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                interface IContact;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CIContact ABI::Windows::ApplicationModel::Contacts::IContact

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                class ContactAddress;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                interface IContactAddress;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress ABI::Windows::ApplicationModel::Contacts::IContactAddress

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                class ContactPanel;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                interface IContactPanel;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel ABI::Windows::ApplicationModel::Contacts::IContactPanel

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    class ContactPickerUI;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    interface IContactPickerUI;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI ABI::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__










namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace ShareTarget {
                    class ShareOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* DataTransfer */
    } /* ShareTarget */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace ShareTarget {
                    interface IShareOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* DataTransfer */
    } /* ShareTarget */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation ABI::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Search {
                class SearchPaneQueryLinguisticDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* Search */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Search {
                interface ISearchPaneQueryLinguisticDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails ABI::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    interface IUserDataAccountProviderOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                
                typedef enum WalletActionKind : int WalletActionKind;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation ABI::Windows::Devices::Enumeration::IDeviceInformation

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Printers {
                namespace Extensions {
                    class Print3DWorkflow;
                } /* Windows */
            } /* Devices */
        } /* Printers */
    } /* Extensions */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Printers {
                namespace Extensions {
                    interface IPrint3DWorkflow;
                } /* Windows */
            } /* Devices */
        } /* Printers */
    } /* Extensions */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow ABI::Windows::Devices::Printers::Extensions::IPrint3DWorkflow

#endif // ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Printers {
                namespace Extensions {
                    class PrintTaskConfiguration;
                } /* Windows */
            } /* Devices */
        } /* Printers */
    } /* Extensions */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Printers {
                namespace Extensions {
                    interface IPrintTaskConfiguration;
                } /* Windows */
            } /* Devices */
        } /* Printers */
    } /* Extensions */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration ABI::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration

#endif // ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                class ValueSet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                interface IPropertySet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet ABI::Windows::Foundation::Collections::IPropertySet

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
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
        namespace Media {
            namespace SpeechRecognition {
                class SpeechRecognitionResult;
            } /* Windows */
        } /* Media */
    } /* SpeechRecognition */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechRecognition {
                interface ISpeechRecognitionResult;
            } /* Windows */
        } /* Media */
    } /* SpeechRecognition */} /* ABI */
#define __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult ABI::Windows::Media::SpeechRecognition::ISpeechRecognitionResult

#endif // ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__





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







namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    class WebAuthenticationResult;
                } /* Windows */
            } /* Security */
        } /* Authentication */
    } /* Web */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    interface IWebAuthenticationResult;
                } /* Windows */
            } /* Security */
        } /* Authentication */
    } /* Web */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult ABI::Windows::Security::Authentication::Web::IWebAuthenticationResult

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_FWD_DEFINED__









namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class FileOpenPickerUI;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface IFileOpenPickerUI;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    class FileSavePickerUI;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                namespace Provider {
                    interface IFileSavePickerUI;
                } /* Windows */
            } /* Storage */
        } /* Pickers */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class CachedFileUpdaterUI;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface ICachedFileUpdaterUI;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI ABI::Windows::Storage::Provider::ICachedFileUpdaterUI

#endif // ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class StorageFileQueryResult;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IStorageFileQueryResult;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult ABI::Windows::Storage::Search::IStorageFileQueryResult

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFolder ABI::Windows::Storage::IStorageFolder

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace System {
            class ProtocolForResultsOperation;
        } /* Windows */
    } /* System */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIProtocolForResultsOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIProtocolForResultsOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IProtocolForResultsOperation;
        } /* Windows */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation ABI::Windows::System::IProtocolForResultsOperation

#endif // ____x_ABI_CWindows_CSystem_CIProtocolForResultsOperation_FWD_DEFINED__


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
        namespace UI {
            namespace ViewManagement {
                class ActivationViewSwitcher;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                interface IActivationViewSwitcher;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher ABI::Windows::UI::ViewManagement::IActivationViewSwitcher

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__









namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                
                typedef enum ActivationKind : int ActivationKind;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                
                typedef enum ApplicationExecutionState : int ApplicationExecutionState;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */































































namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class AppointmentsProviderAddAppointmentActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class AppointmentsProviderRemoveAppointmentActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class AppointmentsProviderReplaceAppointmentActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class AppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class AppointmentsProviderShowTimeFrameActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class CachedFileUpdaterActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class CameraSettingsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class CommandLineActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class CommandLineActivationOperation;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ContactCallActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ContactMapActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ContactMessageActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ContactPanelActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ContactPickerActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ContactPostActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ContactVideoCallActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class DeviceActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class DevicePairingActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class DialReceiverActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class FileActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class FileOpenPickerActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class FileOpenPickerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class FileSavePickerActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class FileSavePickerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class FolderPickerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class LaunchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class LockScreenActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class LockScreenCallActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class LockScreenComponentActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class PickerReturnedActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class Print3DWorkflowActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class PrintTaskSettingsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ProtocolActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ProtocolForResultsActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class RestrictedLaunchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class SearchActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ShareTargetActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class StartupTaskActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class TileActivatedInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class ToastNotificationActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class UserDataAccountProviderActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class VoiceCommandActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class WalletActionActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class WebAccountProviderActivatedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                class WebAuthenticationBrokerContinuationEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */














/*
 *
 * Struct Windows.ApplicationModel.Activation.ActivationKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [v1_enum, contract] */
                enum ActivationKind : int
                {
                    ActivationKind_Launch = 0,
                    ActivationKind_Search = 1,
                    ActivationKind_ShareTarget = 2,
                    ActivationKind_File = 3,
                    ActivationKind_Protocol = 4,
                    ActivationKind_FileOpenPicker = 5,
                    ActivationKind_FileSavePicker = 6,
                    ActivationKind_CachedFileUpdater = 7,
                    ActivationKind_ContactPicker = 8,
                    ActivationKind_Device = 9,
                    ActivationKind_PrintTaskSettings = 10,
                    ActivationKind_CameraSettings = 11,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_RestrictedLaunch = 12,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_AppointmentsProvider = 13,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_Contact = 14,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_LockScreenCall = 15,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_VoiceCommand = 16,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_LockScreen = 17,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_PickerReturned = 1000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_WalletAction = 1001,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_PickFileContinuation = 1002,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_PickSaveFileContinuation = 1003,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_PickFolderContinuation = 1004,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_WebAuthenticationBrokerContinuation = 1005,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_WebAccountProvider = 1006,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_ComponentUI = 1007,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_ProtocolForResults = 1009,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_ToastNotification = 1010,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    ActivationKind_Print3DWorkflow = 1011,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ActivationKind_DialReceiver = 1012,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    ActivationKind_DevicePairing = 1013,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    ActivationKind_UserDataAccountsProvider = 1014,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    ActivationKind_FilePickerExperience = 1015,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    ActivationKind_LockScreenComponent = 1016,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    ActivationKind_ContactPanel = 1017,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    ActivationKind_PrintWorkflowForegroundTask = 1018,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                    ActivationKind_GameUIProvider = 1019,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                    ActivationKind_StartupTask = 1020,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                    ActivationKind_CommandLineLaunch = 1021,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Activation.ApplicationExecutionState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [v1_enum, contract] */
                enum ApplicationExecutionState : int
                {
                    ApplicationExecutionState_NotRunning = 0,
                    ApplicationExecutionState_Running = 1,
                    ApplicationExecutionState_Suspended = 2,
                    ApplicationExecutionState_Terminated = 3,
                    ApplicationExecutionState_ClosedByUser = 4,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("CF651713-CD08-4FD8-B697-A281B6544E2E"), contract] */
                MIDL_INTERFACE("CF651713-CD08-4FD8-B697-A281B6544E2E")
                IActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Activation::ActivationKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreviousExecutionState(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Activation::ApplicationExecutionState * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SplashScreen(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Activation::ISplashScreen * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IActivatedEventArgs=_uuidof(IActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IActivatedEventArgsWithUser[] = L"Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("1CF09B9E-9962-4936-80FF-AFC8E8AE5C8C"), contract] */
                MIDL_INTERFACE("1CF09B9E-9962-4936-80FF-AFC8E8AE5C8C")
                IActivatedEventArgsWithUser : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IActivatedEventArgsWithUser=_uuidof(IActivatedEventArgsWithUser);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IApplicationViewActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("930CEF4B-B829-40FC-88F4-8513E8A64738"), contract] */
                MIDL_INTERFACE("930CEF4B-B829-40FC-88F4-8513E8A64738")
                IApplicationViewActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentlyShownApplicationViewId(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IApplicationViewActivatedEventArgs=_uuidof(IApplicationViewActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("3364C405-933C-4E7D-A034-500FB8DCD9F3"), contract] */
                MIDL_INTERFACE("3364C405-933C-4E7D-A034-500FB8DCD9F3")
                IAppointmentsProviderActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Verb(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentsProviderActivatedEventArgs=_uuidof(IAppointmentsProviderActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderAddAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderAddAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderAddAppointmentActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("A2861367-CEE5-4E4D-9ED7-41C34EC18B02"), contract] */
                MIDL_INTERFACE("A2861367-CEE5-4E4D-9ED7-41C34EC18B02")
                IAppointmentsProviderAddAppointmentActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AddAppointmentOperation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentsProviderAddAppointmentActivatedEventArgs=_uuidof(IAppointmentsProviderAddAppointmentActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderRemoveAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderRemoveAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderRemoveAppointmentActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("751F3AB8-0B8E-451C-9F15-966E699BAC25"), contract] */
                MIDL_INTERFACE("751F3AB8-0B8E-451C-9F15-966E699BAC25")
                IAppointmentsProviderRemoveAppointmentActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoveAppointmentOperation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentsProviderRemoveAppointmentActivatedEventArgs=_uuidof(IAppointmentsProviderRemoveAppointmentActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderReplaceAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderReplaceAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderReplaceAppointmentActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("1551B7D4-A981-4067-8A62-0524E4ADE121"), contract] */
                MIDL_INTERFACE("1551B7D4-A981-4067-8A62-0524E4ADE121")
                IAppointmentsProviderReplaceAppointmentActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReplaceAppointmentOperation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentsProviderReplaceAppointmentActivatedEventArgs=_uuidof(IAppointmentsProviderReplaceAppointmentActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("3958F065-9841-4CA5-999B-885198B9EF2A"), contract] */
                MIDL_INTERFACE("3958F065-9841-4CA5-999B-885198B9EF2A")
                IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstanceStartDate(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoamingId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs=_uuidof(IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderShowTimeFrameActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderShowTimeFrameActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("9BAEABA6-0E0B-49AA-BABC-12B1DC774986"), contract] */
                MIDL_INTERFACE("9BAEABA6-0E0B-49AA-BABC-12B1DC774986")
                IAppointmentsProviderShowTimeFrameActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeToShow(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentsProviderShowTimeFrameActivatedEventArgs=_uuidof(IAppointmentsProviderShowTimeFrameActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IBackgroundActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IBackgroundActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IBackgroundActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("AB14BEE0-E760-440E-A91C-44796DE3A92D"), contract] */
                MIDL_INTERFACE("AB14BEE0-E760-440E-A91C-44796DE3A92D")
                IBackgroundActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskInstance(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Background::IBackgroundTaskInstance * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundActivatedEventArgs=_uuidof(IBackgroundActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ICachedFileUpdaterActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ICachedFileUpdaterActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ICachedFileUpdaterActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("D06EB1C7-3805-4ECB-B757-6CF15E26FEF3"), contract] */
                MIDL_INTERFACE("D06EB1C7-3805-4ECB-B757-6CF15E26FEF3")
                ICachedFileUpdaterActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CachedFileUpdaterUI(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Provider::ICachedFileUpdaterUI * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICachedFileUpdaterActivatedEventArgs=_uuidof(ICachedFileUpdaterActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ICameraSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivationCameraSettingsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ICameraSettingsActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("FB67A508-2DAD-490A-9170-DCA036EB114B"), contract] */
                MIDL_INTERFACE("FB67A508-2DAD-490A-9170-DCA036EB114B")
                ICameraSettingsActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoDeviceController(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoDeviceExtension(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICameraSettingsActivatedEventArgs=_uuidof(ICameraSettingsActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ICommandLineActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ICommandLineActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ICommandLineActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("4506472C-006A-48EB-8AFB-D07AB25E3366"), contract] */
                MIDL_INTERFACE("4506472C-006A-48EB-8AFB-D07AB25E3366")
                ICommandLineActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Operation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Activation::ICommandLineActivationOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICommandLineActivatedEventArgs=_uuidof(ICommandLineActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ICommandLineActivationOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Activation.CommandLineActivationOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ICommandLineActivationOperation[] = L"Windows.ApplicationModel.Activation.ICommandLineActivationOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("994B2841-C59E-4F69-BCFD-B61ED4E622EB"), exclusiveto, contract] */
                MIDL_INTERFACE("994B2841-C59E-4F69-BCFD-B61ED4E622EB")
                ICommandLineActivationOperation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Arguments(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentDirectoryPath(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ExitCode(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExitCode(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICommandLineActivationOperation=_uuidof(ICommandLineActivationOperation);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("D627A1C4-C025-4C41-9DEF-F1EAFAD075E7"), contract] */
                MIDL_INTERFACE("D627A1C4-C025-4C41-9DEF-F1EAFAD075E7")
                IContactActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Verb(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContactActivatedEventArgs=_uuidof(IContactActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactCallActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("C2DF14C7-30EB-41C6-B3BC-5B1694F9DAB3"), contract] */
                MIDL_INTERFACE("C2DF14C7-30EB-41C6-B3BC-5B1694F9DAB3")
                IContactCallActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceUserId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::IContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContactCallActivatedEventArgs=_uuidof(IContactCallActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactMapActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactMapActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("B32BF870-EEE7-4AD2-AAF1-A87EFFCF00A4"), contract] */
                MIDL_INTERFACE("B32BF870-EEE7-4AD2-AAF1-A87EFFCF00A4")
                IContactMapActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Address(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::IContactAddress * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::IContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContactMapActivatedEventArgs=_uuidof(IContactMapActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactMessageActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactMessageActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("DE598DB2-0E03-43B0-BF56-BCC40B3162DF"), contract] */
                MIDL_INTERFACE("DE598DB2-0E03-43B0-BF56-BCC40B3162DF")
                IContactMessageActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceUserId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::IContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContactMessageActivatedEventArgs=_uuidof(IContactMessageActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactPanelActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactPanelActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("52BB63E4-D3D4-4B63-8051-4AF2082CAB80"), contract] */
                MIDL_INTERFACE("52BB63E4-D3D4-4B63-8051-4AF2082CAB80")
                IContactPanelActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactPanel(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::IContactPanel * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::IContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContactPanelActivatedEventArgs=_uuidof(IContactPanelActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactPickerActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactPickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactPickerActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("CE57AAE7-6449-45A7-971F-D113BE7A8936"), contract] */
                MIDL_INTERFACE("CE57AAE7-6449-45A7-971F-D113BE7A8936")
                IContactPickerActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactPickerUI(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContactPickerActivatedEventArgs=_uuidof(IContactPickerActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactPostActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactPostActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("B35A3C67-F1E7-4655-AD6E-4857588F552F"), contract] */
                MIDL_INTERFACE("B35A3C67-F1E7-4655-AD6E-4857588F552F")
                IContactPostActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceUserId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::IContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContactPostActivatedEventArgs=_uuidof(IContactPostActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactVideoCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactVideoCallActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("61079DB8-E3E7-4B4F-858D-5C63A96EF684"), contract] */
                MIDL_INTERFACE("61079DB8-E3E7-4B4F-858D-5C63A96EF684")
                IContactVideoCallActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceUserId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::IContact * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContactVideoCallActivatedEventArgs=_uuidof(IContactVideoCallActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactsProviderActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactsProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactsProviderActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("4580DCA8-5750-4916-AA52-C0829521EB94"), contract] */
                MIDL_INTERFACE("4580DCA8-5750-4916-AA52-C0829521EB94")
                IContactsProviderActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Verb(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContactsProviderActivatedEventArgs=_uuidof(IContactsProviderActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContinuationActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("E58106B5-155F-4A94-A742-C7E08F4E188C"), contract] */
                MIDL_INTERFACE("E58106B5-155F-4A94-A742-C7E08F4E188C")
                IContinuationActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContinuationData(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContinuationActivatedEventArgs=_uuidof(IContinuationActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IDeviceActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IDeviceActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("CD50B9A9-CE10-44D2-8234-C355A073EF33"), contract] */
                MIDL_INTERFACE("CD50B9A9-CE10-44D2-8234-C355A073EF33")
                IDeviceActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceInformationId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Verb(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceActivatedEventArgs=_uuidof(IDeviceActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IDevicePairingActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IDevicePairingActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IDevicePairingActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("EBA0D1E4-ECC6-4148-94ED-F4B37EC05B3E"), contract] */
                MIDL_INTERFACE("EBA0D1E4-ECC6-4148-94ED-F4B37EC05B3E")
                IDevicePairingActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDevicePairingActivatedEventArgs=_uuidof(IDevicePairingActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IDialReceiverActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IDialReceiverActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IDialReceiverActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("FB777ED7-85EE-456E-A44D-85D730E70AED"), contract] */
                MIDL_INTERFACE("FB777ED7-85EE-456E-A44D-85D730E70AED")
                IDialReceiverActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDialReceiverActivatedEventArgs=_uuidof(IDialReceiverActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IFileActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("BB2AFC33-93B1-42ED-8B26-236DD9C78496"), contract] */
                MIDL_INTERFACE("BB2AFC33-93B1-42ED-8B26-236DD9C78496")
                IFileActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Files(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CIStorageItem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Verb(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileActivatedEventArgs=_uuidof(IFileActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithCallerPackageFamilyName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithCallerPackageFamilyName[] = L"Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithCallerPackageFamilyName";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("2D60F06B-D25F-4D25-8653-E1C5E1108309"), contract] */
                MIDL_INTERFACE("2D60F06B-D25F-4D25-8653-E1C5E1108309")
                IFileActivatedEventArgsWithCallerPackageFamilyName : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CallerPackageFamilyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileActivatedEventArgsWithCallerPackageFamilyName=_uuidof(IFileActivatedEventArgsWithCallerPackageFamilyName);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithNeighboringFiles
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IFileActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithNeighboringFiles[] = L"Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithNeighboringFiles";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("433BA1A4-E1E2-48FD-B7FC-B5D6EEE65033"), contract] */
                MIDL_INTERFACE("433BA1A4-E1E2-48FD-B7FC-B5D6EEE65033")
                IFileActivatedEventArgsWithNeighboringFiles : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NeighboringFilesQuery(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IStorageFileQueryResult * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileActivatedEventArgsWithNeighboringFiles=_uuidof(IFileActivatedEventArgsWithNeighboringFiles);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("72827082-5525-4BF2-BC09-1F5095D4964D"), contract] */
                MIDL_INTERFACE("72827082-5525-4BF2-BC09-1F5095D4964D")
                IFileOpenPickerActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FileOpenPickerUI(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileOpenPickerActivatedEventArgs=_uuidof(IFileOpenPickerActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs2[] = L"Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("5E731F66-8D1F-45FB-AF1D-73205C8FC7A1"), contract] */
                MIDL_INTERFACE("5E731F66-8D1F-45FB-AF1D-73205C8FC7A1")
                IFileOpenPickerActivatedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CallerPackageFamilyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileOpenPickerActivatedEventArgs2=_uuidof(IFileOpenPickerActivatedEventArgs2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileOpenPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileOpenPickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.IFileOpenPickerContinuationEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("F0FA3F3A-D4E8-4AD3-9C34-2308F32FCEC9"), contract] */
                MIDL_INTERFACE("F0FA3F3A-D4E8-4AD3-9C34-2308F32FCEC9")
                IFileOpenPickerContinuationEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Files(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStorageFile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileOpenPickerContinuationEventArgs=_uuidof(IFileOpenPickerContinuationEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("81C19CF1-74E6-4387-82EB-BB8FD64B4346"), contract] */
                MIDL_INTERFACE("81C19CF1-74E6-4387-82EB-BB8FD64B4346")
                IFileSavePickerActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FileSavePickerUI(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileSavePickerActivatedEventArgs=_uuidof(IFileSavePickerActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2[] = L"Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("6B73FE13-2CF2-4D48-8CBC-AF67D23F1CE7"), contract] */
                MIDL_INTERFACE("6B73FE13-2CF2-4D48-8CBC-AF67D23F1CE7")
                IFileSavePickerActivatedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CallerPackageFamilyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnterpriseId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileSavePickerActivatedEventArgs2=_uuidof(IFileSavePickerActivatedEventArgs2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileSavePickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileSavePickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.IFileSavePickerContinuationEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("2C846FE1-3BAD-4F33-8C8B-E46FAE824B4B"), contract] */
                MIDL_INTERFACE("2C846FE1-3BAD-4F33-8C8B-E46FAE824B4B")
                IFileSavePickerContinuationEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_File(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileSavePickerContinuationEventArgs=_uuidof(IFileSavePickerContinuationEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFolderPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFolderPickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.IFolderPickerContinuationEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("51882366-9F4B-498F-BEB0-42684F6E1C29"), contract] */
                MIDL_INTERFACE("51882366-9F4B-498F-BEB0-42684F6E1C29")
                IFolderPickerContinuationEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Folder(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFolder * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFolderPickerContinuationEventArgs=_uuidof(IFolderPickerContinuationEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("FBC93E26-A14A-4B4F-82B0-33BED920AF52"), contract] */
                MIDL_INTERFACE("FBC93E26-A14A-4B4F-82B0-33BED920AF52")
                ILaunchActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Arguments(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TileId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILaunchActivatedEventArgs=_uuidof(ILaunchActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs2[] = L"Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("0FD37EBC-9DC9-46B5-9ACE-BD95D4565345"), contract] */
                MIDL_INTERFACE("0FD37EBC-9DC9-46B5-9ACE-BD95D4565345")
                ILaunchActivatedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TileActivatedInfo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Activation::ITileActivatedInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILaunchActivatedEventArgs2=_uuidof(ILaunchActivatedEventArgs2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ILockScreenActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ILockScreenActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ILockScreenActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("3CA77966-6108-4A41-8220-EE7D133C8532"), contract] */
                MIDL_INTERFACE("3CA77966-6108-4A41-8220-EE7D133C8532")
                ILockScreenActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Info(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILockScreenActivatedEventArgs=_uuidof(ILockScreenActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ILockScreenCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ILockScreenCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ILockScreenCallActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("06F37FBE-B5F2-448B-B13E-E328AC1C516A"), contract] */
                MIDL_INTERFACE("06F37FBE-B5F2-448B-B13E-E328AC1C516A")
                ILockScreenCallActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CallUI(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Calls::ILockScreenCallUI * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILockScreenCallActivatedEventArgs=_uuidof(ILockScreenCallActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IPickerReturnedActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IPickerReturnedActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IPickerReturnedActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("360DEFB9-A9D3-4984-A4ED-9EC734604921"), contract] */
                MIDL_INTERFACE("360DEFB9-A9D3-4984-A4ED-9EC734604921")
                IPickerReturnedActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PickerOperationId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPickerReturnedActivatedEventArgs=_uuidof(IPickerReturnedActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IPrelaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IPrelaunchActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("0C44717B-19F7-48D6-B046-CF22826EAA74"), contract] */
                MIDL_INTERFACE("0C44717B-19F7-48D6-B046-CF22826EAA74")
                IPrelaunchActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrelaunchActivated(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrelaunchActivatedEventArgs=_uuidof(IPrelaunchActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IPrint3DWorkflowActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IPrint3DWorkflowActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IPrint3DWorkflowActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("3F57E78B-F2AC-4619-8302-EF855E1C9B90"), contract] */
                MIDL_INTERFACE("3F57E78B-F2AC-4619-8302-EF855E1C9B90")
                IPrint3DWorkflowActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Workflow(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Printers::Extensions::IPrint3DWorkflow * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrint3DWorkflowActivatedEventArgs=_uuidof(IPrint3DWorkflowActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IPrintTaskSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IPrintTaskSettingsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IPrintTaskSettingsActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("EE30A0C9-CE56-4865-BA8E-8954AC271107"), contract] */
                MIDL_INTERFACE("EE30A0C9-CE56-4865-BA8E-8954AC271107")
                IPrintTaskSettingsActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Configuration(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskSettingsActivatedEventArgs=_uuidof(IPrintTaskSettingsActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("6095F4DD-B7C0-46AB-81FE-D90F36D00D24"), contract] */
                MIDL_INTERFACE("6095F4DD-B7C0-46AB-81FE-D90F36D00D24")
                IProtocolActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtocolActivatedEventArgs=_uuidof(IProtocolActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData[] = L"Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("D84A0C12-5C8F-438C-83CB-C28FCC0B2FDB"), contract] */
                MIDL_INTERFACE("D84A0C12-5C8F-438C-83CB-C28FCC0B2FDB")
                IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CallerPackageFamilyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData=_uuidof(IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IProtocolForResultsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IProtocolForResultsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IProtocolForResultsActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("E75132C2-7AE7-4517-80AC-DBE8D7CC5B9C"), contract] */
                MIDL_INTERFACE("E75132C2-7AE7-4517-80AC-DBE8D7CC5B9C")
                IProtocolForResultsActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtocolForResultsOperation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IProtocolForResultsOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtocolForResultsActivatedEventArgs=_uuidof(IProtocolForResultsActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IRestrictedLaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IRestrictedLaunchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IRestrictedLaunchActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("E0B7AC81-BFC3-4344-A5DA-19FD5A27BAAE"), contract] */
                MIDL_INTERFACE("E0B7AC81-BFC3-4344-A5DA-19FD5A27BAAE")
                IRestrictedLaunchActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SharedContext(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRestrictedLaunchActivatedEventArgs=_uuidof(IRestrictedLaunchActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ISearchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ISearchActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("8CB36951-58C8-43E3-94BC-41D33F8B630E"), contract] */
                MIDL_INTERFACE("8CB36951-58C8-43E3-94BC-41D33F8B630E")
                ISearchActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QueryText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Language(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISearchActivatedEventArgs=_uuidof(ISearchActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ISearchActivatedEventArgsWithLinguisticDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ISearchActivatedEventArgsWithLinguisticDetails[] = L"Windows.ApplicationModel.Activation.ISearchActivatedEventArgsWithLinguisticDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("C09F33DA-08AB-4931-9B7C-451025F21F81"), contract] */
                MIDL_INTERFACE("C09F33DA-08AB-4931-9B7C-451025F21F81")
                ISearchActivatedEventArgsWithLinguisticDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LinguisticDetails(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISearchActivatedEventArgsWithLinguisticDetails=_uuidof(ISearchActivatedEventArgsWithLinguisticDetails);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IShareTargetActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IShareTargetActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IShareTargetActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("4BDAF9C8-CDB2-4ACB-BFC3-6648563378EC"), contract] */
                MIDL_INTERFACE("4BDAF9C8-CDB2-4ACB-BFC3-6648563378EC")
                IShareTargetActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShareOperation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IShareTargetActivatedEventArgs=_uuidof(IShareTargetActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ISplashScreen
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Activation.SplashScreen
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ISplashScreen[] = L"Windows.ApplicationModel.Activation.ISplashScreen";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("CA4D975C-D4D6-43F0-97C0-0833C6391C24"), exclusiveto, contract] */
                MIDL_INTERFACE("CA4D975C-D4D6-43F0-97C0-0833C6391C24")
                ISplashScreen : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImageLocation(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Dismissed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Dismissed(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISplashScreen=_uuidof(ISplashScreen);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IStartupTaskActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IStartupTaskActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IStartupTaskActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("03B11A58-5276-4D91-8621-54611864D5FA"), contract] */
                MIDL_INTERFACE("03B11A58-5276-4D91-8621-54611864D5FA")
                IStartupTaskActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStartupTaskActivatedEventArgs=_uuidof(IStartupTaskActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ITileActivatedInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Activation.TileActivatedInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ITileActivatedInfo[] = L"Windows.ApplicationModel.Activation.ITileActivatedInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("80E4A3B1-3980-4F17-B738-89194E0B8F65"), exclusiveto, contract] */
                MIDL_INTERFACE("80E4A3B1-3980-4F17-B738-89194E0B8F65")
                ITileActivatedInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RecentlyShownNotifications(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITileActivatedInfo=_uuidof(ITileActivatedInfo);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IToastNotificationActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IToastNotificationActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("92A86F82-5290-431D-BE85-C4AAEEB8685F"), contract] */
                MIDL_INTERFACE("92A86F82-5290-431D-BE85-C4AAEEB8685F")
                IToastNotificationActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Argument(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * argument
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserInput(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IToastNotificationActivatedEventArgs=_uuidof(IToastNotificationActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IUserDataAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IUserDataAccountProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IUserDataAccountProviderActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("1BC9F723-8EF1-4A51-A63A-FE711EEAB607"), contract] */
                MIDL_INTERFACE("1BC9F723-8EF1-4A51-A63A-FE711EEAB607")
                IUserDataAccountProviderActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Operation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserDataAccountProviderActivatedEventArgs=_uuidof(IUserDataAccountProviderActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IViewSwitcherProvider[] = L"Windows.ApplicationModel.Activation.IViewSwitcherProvider";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("33F288A6-5C2C-4D27-BAC7-7536088F1219"), contract] */
                MIDL_INTERFACE("33F288A6-5C2C-4D27-BAC7-7536088F1219")
                IViewSwitcherProvider : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewSwitcher(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ViewManagement::IActivationViewSwitcher * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IViewSwitcherProvider=_uuidof(IViewSwitcherProvider);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IVoiceCommandActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IVoiceCommandActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IVoiceCommandActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("AB92DCFD-8D43-4DE6-9775-20704B581B00"), contract] */
                MIDL_INTERFACE("AB92DCFD-8D43-4DE6-9775-20704B581B00")
                IVoiceCommandActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Result(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::SpeechRecognition::ISpeechRecognitionResult * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandActivatedEventArgs=_uuidof(IVoiceCommandActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IWalletActionActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Wallet.WalletContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IWalletActionActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("FCFC027B-1A1A-4D22-923F-AE6F45FA52D9"), contract] */
                MIDL_INTERFACE("FCFC027B-1A1A-4D22-923F-AE6F45FA52D9")
                IWalletActionActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActionKind(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Wallet::WalletActionKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActionId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletActionActivatedEventArgs=_uuidof(IWalletActionActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IWebAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IWebAccountProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IWebAccountProviderActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("72B71774-98EA-4CCF-9752-46D9051004F1"), contract] */
                MIDL_INTERFACE("72B71774-98EA-4CCF-9752-46D9051004F1")
                IWebAccountProviderActivatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Operation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebAccountProviderActivatedEventArgs=_uuidof(IWebAccountProviderActivatedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IWebAuthenticationBrokerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IWebAuthenticationBrokerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.IWebAuthenticationBrokerContinuationEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Activation {
                /* [object, uuid("75DDA3D4-7714-453D-B7FF-B95E3A1709DA"), contract] */
                MIDL_INTERFACE("75DDA3D4-7714-453D-B7FF-B95E3A1709DA")
                IWebAuthenticationBrokerContinuationEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAuthenticationResult(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::IWebAuthenticationResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebAuthenticationBrokerContinuationEventArgs=_uuidof(IWebAuthenticationBrokerContinuationEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Activation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.AppointmentsProviderAddAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderAddAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderAddAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderAddAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_AppointmentsProviderAddAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.AppointmentsProviderAddAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.AppointmentsProviderRemoveAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderRemoveAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderRemoveAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderRemoveAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_AppointmentsProviderRemoveAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.AppointmentsProviderRemoveAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.AppointmentsProviderReplaceAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderReplaceAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderReplaceAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderReplaceAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_AppointmentsProviderReplaceAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.AppointmentsProviderReplaceAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.AppointmentsProviderShowAppointmentDetailsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderShowAppointmentDetailsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderShowAppointmentDetailsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_AppointmentsProviderShowAppointmentDetailsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.AppointmentsProviderShowAppointmentDetailsActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.AppointmentsProviderShowTimeFrameActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderShowTimeFrameActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderShowTimeFrameActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderShowTimeFrameActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_AppointmentsProviderShowTimeFrameActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.AppointmentsProviderShowTimeFrameActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.BackgroundActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IBackgroundActivatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_BackgroundActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_BackgroundActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_BackgroundActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.BackgroundActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Activation.CachedFileUpdaterActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICachedFileUpdaterActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_CachedFileUpdaterActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_CachedFileUpdaterActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_CachedFileUpdaterActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.CachedFileUpdaterActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.CameraSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivationCameraSettingsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICameraSettingsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_CameraSettingsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_CameraSettingsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_CameraSettingsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.CameraSettingsActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.CommandLineActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICommandLineActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_CommandLineActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_CommandLineActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_CommandLineActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.CommandLineActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Activation.CommandLineActivationOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICommandLineActivationOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_CommandLineActivationOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_CommandLineActivationOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_CommandLineActivationOperation[] = L"Windows.ApplicationModel.Activation.CommandLineActivationOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactMapActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactMapActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactMapActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactMapActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactMapActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactMapActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactMessageActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactMessageActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactMessageActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactMessageActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactMessageActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactMessageActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactPanelActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPanelActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPanelActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPanelActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactPanelActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactPanelActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactPickerActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactPickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactPickerActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactPostActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPostActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPostActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPostActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactPostActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactPostActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactVideoCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactVideoCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactVideoCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactVideoCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactVideoCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactVideoCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.DeviceActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDeviceActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_DeviceActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_DeviceActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_DeviceActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.DeviceActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.DevicePairingActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDevicePairingActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_DevicePairingActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_DevicePairingActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_DevicePairingActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.DevicePairingActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.ApplicationModel.Activation.DialReceiverActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDialReceiverActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_DialReceiverActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_DialReceiverActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_DialReceiverActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.DialReceiverActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FileActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithNeighboringFiles
 *    Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithCallerPackageFamilyName
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FileActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FileActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FileActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.FileActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FileOpenPickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs2
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FileOpenPickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FileOpenPickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FileOpenPickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.FileOpenPickerActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FileOpenPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileOpenPickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FileOpenPickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FileOpenPickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FileOpenPickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.FileOpenPickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FileSavePickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs2
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FileSavePickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FileSavePickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FileSavePickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.FileSavePickerActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FileSavePickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileSavePickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FileSavePickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FileSavePickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FileSavePickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.FileSavePickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FolderPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFolderPickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FolderPickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FolderPickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FolderPickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.FolderPickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.LaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IPrelaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs2
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_LaunchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_LaunchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_LaunchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.LaunchActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.LockScreenActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILockScreenActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_LockScreenActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.LockScreenActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.LockScreenCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILockScreenCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_LockScreenCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.LockScreenCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.LockScreenComponentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenComponentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenComponentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_LockScreenComponentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.LockScreenComponentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Activation.PickerReturnedActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IPickerReturnedActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_PickerReturnedActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_PickerReturnedActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_PickerReturnedActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.PickerReturnedActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.Print3DWorkflowActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IPrint3DWorkflowActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_Print3DWorkflowActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_Print3DWorkflowActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_Print3DWorkflowActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.Print3DWorkflowActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.PrintTaskSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IPrintTaskSettingsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_PrintTaskSettingsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_PrintTaskSettingsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_PrintTaskSettingsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.PrintTaskSettingsActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ProtocolActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ProtocolActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ProtocolActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ProtocolForResultsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IProtocolForResultsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ProtocolForResultsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ProtocolForResultsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ProtocolForResultsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ProtocolForResultsActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.RestrictedLaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IRestrictedLaunchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_RestrictedLaunchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_RestrictedLaunchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_RestrictedLaunchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.RestrictedLaunchActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.SearchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ISearchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.ISearchActivatedEventArgsWithLinguisticDetails
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_SearchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_SearchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_SearchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.SearchActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ShareTargetActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IShareTargetActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ShareTargetActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ShareTargetActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ShareTargetActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ShareTargetActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.SplashScreen
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ISplashScreen ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_SplashScreen_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_SplashScreen_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_SplashScreen[] = L"Windows.ApplicationModel.Activation.SplashScreen";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.StartupTaskActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IStartupTaskActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_StartupTaskActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_StartupTaskActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_StartupTaskActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.StartupTaskActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Activation.TileActivatedInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ITileActivatedInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_TileActivatedInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_TileActivatedInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_TileActivatedInfo[] = L"Windows.ApplicationModel.Activation.TileActivatedInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Activation.ToastNotificationActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IToastNotificationActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ToastNotificationActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ToastNotificationActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ToastNotificationActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ToastNotificationActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.UserDataAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IUserDataAccountProviderActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_UserDataAccountProviderActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_UserDataAccountProviderActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_UserDataAccountProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.UserDataAccountProviderActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Activation.VoiceCommandActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IVoiceCommandActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_VoiceCommandActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_VoiceCommandActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_VoiceCommandActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.VoiceCommandActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.WalletActionActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Wallet.WalletContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWalletActionActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_WalletActionActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_WalletActionActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_WalletActionActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.WalletActionActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.WebAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWebAccountProviderActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_WebAccountProviderActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_WebAccountProviderActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_WebAccountProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.WebAccountProviderActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.WebAuthenticationBrokerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWebAuthenticationBrokerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_WebAuthenticationBrokerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_WebAuthenticationBrokerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_WebAuthenticationBrokerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.WebAuthenticationBrokerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2 __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs;

typedef struct __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl;

interface __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup;

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView;

#endif // ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if !defined(____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;

typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;

interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapChangedEventArgs_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapChangedEventArgs_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapChangedEventArgs_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapChangedEventArgs_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapChangedEventArgs_1_HSTRING_get_CollectionChange(This,value)	\
    ( (This)->lpVtbl -> get_CollectionChange(This,value) ) 
#define __FIMapChangedEventArgs_1_HSTRING_get_Key(This,value)	\
    ( (This)->lpVtbl -> get_Key(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;

//Forward declare IObservableMap and IMapChangedEventArgs
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This, 
        /* [in] */ __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender, 
        /* [in] */ __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;

interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;

typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
        /* [retval][out] */ __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;

interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIObservableMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_add_MapChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_remove_MapChanged(This,token)	\
    ( (This)->lpVtbl -> remove_MapChanged(This,token) ) 
#endif /* COBJMACROS */



#endif // ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;

#endif // ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CIStorageItem __FIIterator_1_Windows__CStorage__CIStorageItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CIStorageItem;

typedef struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CIStorageItemVtbl;

interface __FIIterator_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CIStorageItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CIStorageItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CIStorageItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CIStorageItem __FIIterable_1_Windows__CStorage__CIStorageItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CIStorageItem;

typedef  struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CIStorageItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CIStorageItemVtbl;

interface __FIIterable_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CIStorageItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CIStorageItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CIStorageItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CIStorageItem __FIVectorView_1_Windows__CStorage__CIStorageItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CIStorageItem;

typedef struct __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CIStorageItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;

interface __FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CIStorageItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CIStorageItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CIStorageItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CStorageFile __FIIterator_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageFile;

typedef struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageFileVtbl;

interface __FIIterator_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CStorageFile_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CStorageFile __FIIterable_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageFile;

typedef  struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageFile **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageFileVtbl;

interface __FIIterable_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CStorageFile_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CStorageFile __FIVectorView_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageFile;

typedef struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CIStorageFile * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageFileVtbl;

interface __FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification;

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification;

typedef struct __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl;

interface __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification;

typedef  struct __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl;

interface __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification;

typedef struct __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
            /* [in] */ __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl;

interface __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__







#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance;

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact __x_ABI_CWindows_CApplicationModel_CContacts_CIContact;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__










#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletActionKind __x_ABI_CWindows_CApplicationModel_CWallet_CWalletActionKind;





#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow;

#endif // ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration;

#endif // ____x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult;

#endif // ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation_FWD_DEFINED__







#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_FWD_DEFINED__









#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI;

#endif // ____x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CSystem_CIProtocolForResultsOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIProtocolForResultsOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation;

#endif // ____x_ABI_CWindows_CSystem_CIProtocolForResultsOperation_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__








#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher_FWD_DEFINED__










typedef enum __x_ABI_CWindows_CApplicationModel_CActivation_CActivationKind __x_ABI_CWindows_CApplicationModel_CActivation_CActivationKind;


typedef enum __x_ABI_CWindows_CApplicationModel_CActivation_CApplicationExecutionState __x_ABI_CWindows_CApplicationModel_CActivation_CApplicationExecutionState;


























































































































/*
 *
 * Struct Windows.ApplicationModel.Activation.ActivationKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CActivation_CActivationKind
{
    ActivationKind_Launch = 0,
    ActivationKind_Search = 1,
    ActivationKind_ShareTarget = 2,
    ActivationKind_File = 3,
    ActivationKind_Protocol = 4,
    ActivationKind_FileOpenPicker = 5,
    ActivationKind_FileSavePicker = 6,
    ActivationKind_CachedFileUpdater = 7,
    ActivationKind_ContactPicker = 8,
    ActivationKind_Device = 9,
    ActivationKind_PrintTaskSettings = 10,
    ActivationKind_CameraSettings = 11,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_RestrictedLaunch = 12,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_AppointmentsProvider = 13,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_Contact = 14,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_LockScreenCall = 15,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_VoiceCommand = 16,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_LockScreen = 17,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_PickerReturned = 1000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_WalletAction = 1001,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_PickFileContinuation = 1002,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_PickSaveFileContinuation = 1003,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_PickFolderContinuation = 1004,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_WebAuthenticationBrokerContinuation = 1005,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_WebAccountProvider = 1006,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_ComponentUI = 1007,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_ProtocolForResults = 1009,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_ToastNotification = 1010,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    ActivationKind_Print3DWorkflow = 1011,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ActivationKind_DialReceiver = 1012,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    ActivationKind_DevicePairing = 1013,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    ActivationKind_UserDataAccountsProvider = 1014,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    ActivationKind_FilePickerExperience = 1015,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    ActivationKind_LockScreenComponent = 1016,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    ActivationKind_ContactPanel = 1017,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    ActivationKind_PrintWorkflowForegroundTask = 1018,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    ActivationKind_GameUIProvider = 1019,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    ActivationKind_StartupTask = 1020,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    ActivationKind_CommandLineLaunch = 1021,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Activation.ApplicationExecutionState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CActivation_CApplicationExecutionState
{
    ApplicationExecutionState_NotRunning = 0,
    ApplicationExecutionState_Running = 1,
    ApplicationExecutionState_Suspended = 2,
    ApplicationExecutionState_Terminated = 3,
    ApplicationExecutionState_ClosedByUser = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IActivatedEventArgs";
/* [object, uuid("CF651713-CD08-4FD8-B697-A281B6544E2E"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CActivation_CActivationKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreviousExecutionState )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CActivation_CApplicationExecutionState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SplashScreen )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_get_PreviousExecutionState(This,value) \
    ( (This)->lpVtbl->get_PreviousExecutionState(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_get_SplashScreen(This,value) \
    ( (This)->lpVtbl->get_SplashScreen(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IActivatedEventArgsWithUser[] = L"Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser";
/* [object, uuid("1CF09B9E-9962-4936-80FF-AFC8E8AE5C8C"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUserVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUserVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgsWithUser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IApplicationViewActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs";
/* [object, uuid("930CEF4B-B829-40FC-88F4-8513E8A64738"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentlyShownApplicationViewId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_get_CurrentlyShownApplicationViewId(This,value) \
    ( (This)->lpVtbl->get_CurrentlyShownApplicationViewId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIApplicationViewActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs";
/* [object, uuid("3364C405-933C-4E7D-A034-500FB8DCD9F3"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Verb )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_get_Verb(This,value) \
    ( (This)->lpVtbl->get_Verb(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderAddAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderAddAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderAddAppointmentActivatedEventArgs";
/* [object, uuid("A2861367-CEE5-4E4D-9ED7-41C34EC18B02"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AddAppointmentOperation )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_get_AddAppointmentOperation(This,value) \
    ( (This)->lpVtbl->get_AddAppointmentOperation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderAddAppointmentActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderRemoveAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderRemoveAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderRemoveAppointmentActivatedEventArgs";
/* [object, uuid("751F3AB8-0B8E-451C-9F15-966E699BAC25"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoveAppointmentOperation )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_get_RemoveAppointmentOperation(This,value) \
    ( (This)->lpVtbl->get_RemoveAppointmentOperation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderRemoveAppointmentActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderReplaceAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderReplaceAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderReplaceAppointmentActivatedEventArgs";
/* [object, uuid("1551B7D4-A981-4067-8A62-0524E4ADE121"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReplaceAppointmentOperation )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_get_ReplaceAppointmentOperation(This,value) \
    ( (This)->lpVtbl->get_ReplaceAppointmentOperation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderReplaceAppointmentActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs";
/* [object, uuid("3958F065-9841-4CA5-999B-885198B9EF2A"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstanceStartDate )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoamingId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_get_InstanceStartDate(This,value) \
    ( (This)->lpVtbl->get_InstanceStartDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_get_LocalId(This,value) \
    ( (This)->lpVtbl->get_LocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_get_RoamingId(This,value) \
    ( (This)->lpVtbl->get_RoamingId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IAppointmentsProviderShowTimeFrameActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IAppointmentsProviderShowTimeFrameActivatedEventArgs";
/* [object, uuid("9BAEABA6-0E0B-49AA-BABC-12B1DC774986"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeToShow )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_get_TimeToShow(This,value) \
    ( (This)->lpVtbl->get_TimeToShow(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIAppointmentsProviderShowTimeFrameActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IBackgroundActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IBackgroundActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IBackgroundActivatedEventArgs";
/* [object, uuid("AB14BEE0-E760-440E-A91C-44796DE3A92D"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskInstance )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_get_TaskInstance(This,value) \
    ( (This)->lpVtbl->get_TaskInstance(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ICachedFileUpdaterActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ICachedFileUpdaterActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ICachedFileUpdaterActivatedEventArgs";
/* [object, uuid("D06EB1C7-3805-4ECB-B757-6CF15E26FEF3"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CachedFileUpdaterUI )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_get_CachedFileUpdaterUI(This,value) \
    ( (This)->lpVtbl->get_CachedFileUpdaterUI(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICachedFileUpdaterActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ICameraSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivationCameraSettingsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ICameraSettingsActivatedEventArgs";
/* [object, uuid("FB67A508-2DAD-490A-9170-DCA036EB114B"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceController )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceExtension )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_get_VideoDeviceController(This,value) \
    ( (This)->lpVtbl->get_VideoDeviceController(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_get_VideoDeviceExtension(This,value) \
    ( (This)->lpVtbl->get_VideoDeviceExtension(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICameraSettingsActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ICommandLineActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ICommandLineActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ICommandLineActivatedEventArgs";
/* [object, uuid("4506472C-006A-48EB-8AFB-D07AB25E3366"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Operation )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_get_Operation(This,value) \
    ( (This)->lpVtbl->get_Operation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ICommandLineActivationOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Activation.CommandLineActivationOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ICommandLineActivationOperation[] = L"Windows.ApplicationModel.Activation.ICommandLineActivationOperation";
/* [object, uuid("994B2841-C59E-4F69-BCFD-B61ED4E622EB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentDirectoryPath )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ExitCode )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExitCode )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_get_Arguments(This,value) \
    ( (This)->lpVtbl->get_Arguments(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_get_CurrentDirectoryPath(This,value) \
    ( (This)->lpVtbl->get_CurrentDirectoryPath(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_put_ExitCode(This,value) \
    ( (This)->lpVtbl->put_ExitCode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_get_ExitCode(This,value) \
    ( (This)->lpVtbl->get_ExitCode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactActivatedEventArgs";
/* [object, uuid("D627A1C4-C025-4C41-9DEF-F1EAFAD075E7"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Verb )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_get_Verb(This,value) \
    ( (This)->lpVtbl->get_Verb(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactCallActivatedEventArgs";
/* [object, uuid("C2DF14C7-30EB-41C6-B3BC-5B1694F9DAB3"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceUserId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_get_ServiceId(This,value) \
    ( (This)->lpVtbl->get_ServiceId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_get_ServiceUserId(This,value) \
    ( (This)->lpVtbl->get_ServiceUserId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactCallActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactMapActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactMapActivatedEventArgs";
/* [object, uuid("B32BF870-EEE7-4AD2-AAF1-A87EFFCF00A4"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_get_Address(This,value) \
    ( (This)->lpVtbl->get_Address(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMapActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactMessageActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactMessageActivatedEventArgs";
/* [object, uuid("DE598DB2-0E03-43B0-BF56-BCC40B3162DF"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceUserId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_get_ServiceId(This,value) \
    ( (This)->lpVtbl->get_ServiceId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_get_ServiceUserId(This,value) \
    ( (This)->lpVtbl->get_ServiceUserId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactMessageActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactPanelActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactPanelActivatedEventArgs";
/* [object, uuid("52BB63E4-D3D4-4B63-8051-4AF2082CAB80"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactPanel )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_get_ContactPanel(This,value) \
    ( (This)->lpVtbl->get_ContactPanel(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPanelActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactPickerActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactPickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactPickerActivatedEventArgs";
/* [object, uuid("CE57AAE7-6449-45A7-971F-D113BE7A8936"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactPickerUI )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_get_ContactPickerUI(This,value) \
    ( (This)->lpVtbl->get_ContactPickerUI(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPickerActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactPostActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactPostActivatedEventArgs";
/* [object, uuid("B35A3C67-F1E7-4655-AD6E-4857588F552F"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceUserId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_get_ServiceId(This,value) \
    ( (This)->lpVtbl->get_ServiceId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_get_ServiceUserId(This,value) \
    ( (This)->lpVtbl->get_ServiceUserId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactPostActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactVideoCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactVideoCallActivatedEventArgs";
/* [object, uuid("61079DB8-E3E7-4B4F-858D-5C63A96EF684"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceUserId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_get_ServiceId(This,value) \
    ( (This)->lpVtbl->get_ServiceId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_get_ServiceUserId(This,value) \
    ( (This)->lpVtbl->get_ServiceUserId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactVideoCallActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContactsProviderActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContactsProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContactsProviderActivatedEventArgs";
/* [object, uuid("4580DCA8-5750-4916-AA52-C0829521EB94"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Verb )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_get_Verb(This,value) \
    ( (This)->lpVtbl->get_Verb(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContactsProviderActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IContinuationActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs";
/* [object, uuid("E58106B5-155F-4A94-A742-C7E08F4E188C"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContinuationData )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_get_ContinuationData(This,value) \
    ( (This)->lpVtbl->get_ContinuationData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIContinuationActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IDeviceActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IDeviceActivatedEventArgs";
/* [object, uuid("CD50B9A9-CE10-44D2-8234-C355A073EF33"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceInformationId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Verb )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_get_DeviceInformationId(This,value) \
    ( (This)->lpVtbl->get_DeviceInformationId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_get_Verb(This,value) \
    ( (This)->lpVtbl->get_Verb(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDeviceActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IDevicePairingActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IDevicePairingActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IDevicePairingActivatedEventArgs";
/* [object, uuid("EBA0D1E4-ECC6-4148-94ED-F4B37EC05B3E"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_get_DeviceInformation(This,value) \
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDevicePairingActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IDialReceiverActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IDialReceiverActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IDialReceiverActivatedEventArgs";
/* [object, uuid("FB777ED7-85EE-456E-A44D-85D730E70AED"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppName )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_get_AppName(This,value) \
    ( (This)->lpVtbl->get_AppName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIDialReceiverActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IFileActivatedEventArgs";
/* [object, uuid("BB2AFC33-93B1-42ED-8B26-236DD9C78496"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Files )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CIStorageItem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Verb )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_get_Files(This,value) \
    ( (This)->lpVtbl->get_Files(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_get_Verb(This,value) \
    ( (This)->lpVtbl->get_Verb(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithCallerPackageFamilyName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithCallerPackageFamilyName[] = L"Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithCallerPackageFamilyName";
/* [object, uuid("2D60F06B-D25F-4D25-8653-E1C5E1108309"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CallerPackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyNameVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyNameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_get_CallerPackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_CallerPackageFamilyName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithCallerPackageFamilyName_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithNeighboringFiles
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IFileActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithNeighboringFiles[] = L"Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithNeighboringFiles";
/* [object, uuid("433BA1A4-E1E2-48FD-B7FC-B5D6EEE65033"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFilesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NeighboringFilesQuery )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFilesVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFilesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_get_NeighboringFilesQuery(This,value) \
    ( (This)->lpVtbl->get_NeighboringFilesQuery(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileActivatedEventArgsWithNeighboringFiles_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs";
/* [object, uuid("72827082-5525-4BF2-BC09-1F5095D4964D"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FileOpenPickerUI )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileOpenPickerUI * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_get_FileOpenPickerUI(This,value) \
    ( (This)->lpVtbl->get_FileOpenPickerUI(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs2[] = L"Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs2";
/* [object, uuid("5E731F66-8D1F-45FB-AF1D-73205C8FC7A1"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CallerPackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_get_CallerPackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_CallerPackageFamilyName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerActivatedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileOpenPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileOpenPickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.IFileOpenPickerContinuationEventArgs";
/* [object, uuid("F0FA3F3A-D4E8-4AD3-9C34-2308F32FCEC9"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Files )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStorageFile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_get_Files(This,value) \
    ( (This)->lpVtbl->get_Files(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileOpenPickerContinuationEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs";
/* [object, uuid("81C19CF1-74E6-4387-82EB-BB8FD64B4346"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FileSavePickerUI )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CPickers_CProvider_CIFileSavePickerUI * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_get_FileSavePickerUI(This,value) \
    ( (This)->lpVtbl->get_FileSavePickerUI(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2[] = L"Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs2";
/* [object, uuid("6B73FE13-2CF2-4D48-8CBC-AF67D23F1CE7"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CallerPackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnterpriseId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_get_CallerPackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_CallerPackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_get_EnterpriseId(This,value) \
    ( (This)->lpVtbl->get_EnterpriseId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerActivatedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFileSavePickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFileSavePickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.IFileSavePickerContinuationEventArgs";
/* [object, uuid("2C846FE1-3BAD-4F33-8C8B-E46FAE824B4B"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_get_File(This,value) \
    ( (This)->lpVtbl->get_File(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFileSavePickerContinuationEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IFolderPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IFolderPickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.IFolderPickerContinuationEventArgs";
/* [object, uuid("51882366-9F4B-498F-BEB0-42684F6E1C29"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Folder )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_get_Folder(This,value) \
    ( (This)->lpVtbl->get_Folder(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIFolderPickerContinuationEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs";
/* [object, uuid("FBC93E26-A14A-4B4F-82B0-33BED920AF52"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TileId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_get_Arguments(This,value) \
    ( (This)->lpVtbl->get_Arguments(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_get_TileId(This,value) \
    ( (This)->lpVtbl->get_TileId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs2[] = L"Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs2";
/* [object, uuid("0FD37EBC-9DC9-46B5-9ACE-BD95D4565345"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TileActivatedInfo )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_get_TileActivatedInfo(This,value) \
    ( (This)->lpVtbl->get_TileActivatedInfo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ILockScreenActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ILockScreenActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ILockScreenActivatedEventArgs";
/* [object, uuid("3CA77966-6108-4A41-8220-EE7D133C8532"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Info )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_get_Info(This,value) \
    ( (This)->lpVtbl->get_Info(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ILockScreenCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ILockScreenCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ILockScreenCallActivatedEventArgs";
/* [object, uuid("06F37FBE-B5F2-448B-B13E-E328AC1C516A"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CallUI )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCalls_CILockScreenCallUI * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_get_CallUI(This,value) \
    ( (This)->lpVtbl->get_CallUI(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CILockScreenCallActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IPickerReturnedActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IPickerReturnedActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IPickerReturnedActivatedEventArgs";
/* [object, uuid("360DEFB9-A9D3-4984-A4ED-9EC734604921"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PickerOperationId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_get_PickerOperationId(This,value) \
    ( (This)->lpVtbl->get_PickerOperationId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPickerReturnedActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IPrelaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IPrelaunchActivatedEventArgs";
/* [object, uuid("0C44717B-19F7-48D6-B046-CF22826EAA74"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrelaunchActivated )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_get_PrelaunchActivated(This,value) \
    ( (This)->lpVtbl->get_PrelaunchActivated(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrelaunchActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IPrint3DWorkflowActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IPrint3DWorkflowActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IPrint3DWorkflowActivatedEventArgs";
/* [object, uuid("3F57E78B-F2AC-4619-8302-EF855E1C9B90"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Workflow )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrint3DWorkflow * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_get_Workflow(This,value) \
    ( (This)->lpVtbl->get_Workflow(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrint3DWorkflowActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IPrintTaskSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IPrintTaskSettingsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IPrintTaskSettingsActivatedEventArgs";
/* [object, uuid("EE30A0C9-CE56-4865-BA8E-8954AC271107"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPrinters_CExtensions_CIPrintTaskConfiguration * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_get_Configuration(This,value) \
    ( (This)->lpVtbl->get_Configuration(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIPrintTaskSettingsActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs";
/* [object, uuid("6095F4DD-B7C0-46AB-81FE-D90F36D00D24"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData[] = L"Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData";
/* [object, uuid("D84A0C12-5C8F-438C-83CB-C28FCC0B2FDB"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CallerPackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_get_CallerPackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_CallerPackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IProtocolForResultsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IProtocolForResultsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IProtocolForResultsActivatedEventArgs";
/* [object, uuid("E75132C2-7AE7-4517-80AC-DBE8D7CC5B9C"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtocolForResultsOperation )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_get_ProtocolForResultsOperation(This,value) \
    ( (This)->lpVtbl->get_ProtocolForResultsOperation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIProtocolForResultsActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IRestrictedLaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IRestrictedLaunchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IRestrictedLaunchActivatedEventArgs";
/* [object, uuid("E0B7AC81-BFC3-4344-A5DA-19FD5A27BAAE"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SharedContext )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_get_SharedContext(This,value) \
    ( (This)->lpVtbl->get_SharedContext(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIRestrictedLaunchActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ISearchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ISearchActivatedEventArgs";
/* [object, uuid("8CB36951-58C8-43E3-94BC-41D33F8B630E"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QueryText )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_get_QueryText(This,value) \
    ( (This)->lpVtbl->get_QueryText(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_get_Language(This,value) \
    ( (This)->lpVtbl->get_Language(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ISearchActivatedEventArgsWithLinguisticDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ISearchActivatedEventArgsWithLinguisticDetails[] = L"Windows.ApplicationModel.Activation.ISearchActivatedEventArgsWithLinguisticDetails";
/* [object, uuid("C09F33DA-08AB-4931-9B7C-451025F21F81"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LinguisticDetails )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_get_LinguisticDetails(This,value) \
    ( (This)->lpVtbl->get_LinguisticDetails(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISearchActivatedEventArgsWithLinguisticDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IShareTargetActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IShareTargetActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IShareTargetActivatedEventArgs";
/* [object, uuid("4BDAF9C8-CDB2-4ACB-BFC3-6648563378EC"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShareOperation )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_get_ShareOperation(This,value) \
    ( (This)->lpVtbl->get_ShareOperation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIShareTargetActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ISplashScreen
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Activation.SplashScreen
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ISplashScreen[] = L"Windows.ApplicationModel.Activation.ISplashScreen";
/* [object, uuid("CA4D975C-D4D6-43F0-97C0-0833C6391C24"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreenVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ImageLocation )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Dismissed )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CActivation__CSplashScreen_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Dismissed )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreenVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreenVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_get_ImageLocation(This,value) \
    ( (This)->lpVtbl->get_ImageLocation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_add_Dismissed(This,handler,cookie) \
    ( (This)->lpVtbl->add_Dismissed(This,handler,cookie) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_remove_Dismissed(This,cookie) \
    ( (This)->lpVtbl->remove_Dismissed(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CISplashScreen_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IStartupTaskActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IStartupTaskActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IStartupTaskActivatedEventArgs";
/* [object, uuid("03B11A58-5276-4D91-8621-54611864D5FA"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_get_TaskId(This,value) \
    ( (This)->lpVtbl->get_TaskId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIStartupTaskActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Activation.ITileActivatedInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Activation.TileActivatedInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_ITileActivatedInfo[] = L"Windows.ApplicationModel.Activation.ITileActivatedInfo";
/* [object, uuid("80E4A3B1-3980-4F17-B738-89194E0B8F65"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RecentlyShownNotifications )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_get_RecentlyShownNotifications(This,value) \
    ( (This)->lpVtbl->get_RecentlyShownNotifications(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CITileActivatedInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IToastNotificationActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IToastNotificationActivatedEventArgs";
/* [object, uuid("92A86F82-5290-431D-BE85-C4AAEEB8685F"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Argument )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * argument
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserInput )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_get_Argument(This,argument) \
    ( (This)->lpVtbl->get_Argument(This,argument) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_get_UserInput(This,value) \
    ( (This)->lpVtbl->get_UserInput(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIToastNotificationActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IUserDataAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IUserDataAccountProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IUserDataAccountProviderActivatedEventArgs";
/* [object, uuid("1BC9F723-8EF1-4A51-A63A-FE711EEAB607"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Operation )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_get_Operation(This,value) \
    ( (This)->lpVtbl->get_Operation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIUserDataAccountProviderActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IViewSwitcherProvider[] = L"Windows.ApplicationModel.Activation.IViewSwitcherProvider";
/* [object, uuid("33F288A6-5C2C-4D27-BAC7-7536088F1219"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewSwitcher )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProviderVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_get_ViewSwitcher(This,value) \
    ( (This)->lpVtbl->get_ViewSwitcher(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIViewSwitcherProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IVoiceCommandActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IVoiceCommandActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IVoiceCommandActivatedEventArgs";
/* [object, uuid("AB92DCFD-8D43-4DE6-9775-20704B581B00"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_get_Result(This,value) \
    ( (This)->lpVtbl->get_Result(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIVoiceCommandActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IWalletActionActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Wallet.WalletContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IWalletActionActivatedEventArgs";
/* [object, uuid("FCFC027B-1A1A-4D22-923F-AE6F45FA52D9"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActionKind )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CWalletActionKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActionId )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_get_ItemId(This,value) \
    ( (This)->lpVtbl->get_ItemId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_get_ActionKind(This,value) \
    ( (This)->lpVtbl->get_ActionKind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_get_ActionId(This,value) \
    ( (This)->lpVtbl->get_ActionId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWalletActionActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IWebAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IWebAccountProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.IWebAccountProviderActivatedEventArgs";
/* [object, uuid("72B71774-98EA-4CCF-9752-46D9051004F1"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Operation )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CProvider_CIWebAccountProviderOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_get_Operation(This,value) \
    ( (This)->lpVtbl->get_Operation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAccountProviderActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Activation.IWebAuthenticationBrokerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *     Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Activation_IWebAuthenticationBrokerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.IWebAuthenticationBrokerContinuationEventArgs";
/* [object, uuid("75DDA3D4-7714-453D-B7FF-B95E3A1709DA"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAuthenticationResult )(
        __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_get_WebAuthenticationResult(This,result) \
    ( (This)->lpVtbl->get_WebAuthenticationResult(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CActivation_CIWebAuthenticationBrokerContinuationEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.AppointmentsProviderAddAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderAddAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderAddAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderAddAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_AppointmentsProviderAddAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.AppointmentsProviderAddAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.AppointmentsProviderRemoveAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderRemoveAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderRemoveAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderRemoveAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_AppointmentsProviderRemoveAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.AppointmentsProviderRemoveAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.AppointmentsProviderReplaceAppointmentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderReplaceAppointmentActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderReplaceAppointmentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderReplaceAppointmentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_AppointmentsProviderReplaceAppointmentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.AppointmentsProviderReplaceAppointmentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.AppointmentsProviderShowAppointmentDetailsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderShowAppointmentDetailsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderShowAppointmentDetailsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_AppointmentsProviderShowAppointmentDetailsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.AppointmentsProviderShowAppointmentDetailsActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.AppointmentsProviderShowTimeFrameActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderShowTimeFrameActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IAppointmentsProviderActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderShowTimeFrameActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_AppointmentsProviderShowTimeFrameActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_AppointmentsProviderShowTimeFrameActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.AppointmentsProviderShowTimeFrameActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.BackgroundActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IBackgroundActivatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_BackgroundActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_BackgroundActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_BackgroundActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.BackgroundActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Activation.CachedFileUpdaterActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICachedFileUpdaterActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_CachedFileUpdaterActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_CachedFileUpdaterActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_CachedFileUpdaterActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.CachedFileUpdaterActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.CameraSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivationCameraSettingsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICameraSettingsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_CameraSettingsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_CameraSettingsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_CameraSettingsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.CameraSettingsActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.CommandLineActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICommandLineActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_CommandLineActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_CommandLineActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_CommandLineActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.CommandLineActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Activation.CommandLineActivationOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ICommandLineActivationOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_CommandLineActivationOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_CommandLineActivationOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_CommandLineActivationOperation[] = L"Windows.ApplicationModel.Activation.CommandLineActivationOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactMapActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactMapActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactMapActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactMapActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactMapActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactMapActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactMessageActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactMessageActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactMessageActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactMessageActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactMessageActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactMessageActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactPanelActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPanelActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPanelActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPanelActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactPanelActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactPanelActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactPickerActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactPickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactPickerActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactPostActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactPostActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPostActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactPostActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactPostActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactPostActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ContactVideoCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ContactActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IContactVideoCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContactActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactVideoCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ContactVideoCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ContactVideoCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ContactVideoCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.DeviceActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDeviceActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_DeviceActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_DeviceActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_DeviceActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.DeviceActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.DevicePairingActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDevicePairingActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_DevicePairingActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_DevicePairingActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_DevicePairingActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.DevicePairingActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.ApplicationModel.Activation.DialReceiverActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IDialReceiverActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_DialReceiverActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_DialReceiverActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_DialReceiverActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.DialReceiverActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FileActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithNeighboringFiles
 *    Windows.ApplicationModel.Activation.IFileActivatedEventArgsWithCallerPackageFamilyName
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FileActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FileActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FileActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.FileActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FileOpenPickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IFileOpenPickerActivatedEventArgs2
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FileOpenPickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FileOpenPickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FileOpenPickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.FileOpenPickerActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FileOpenPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileOpenPickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FileOpenPickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FileOpenPickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FileOpenPickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.FileOpenPickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FileSavePickerActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IFileSavePickerActivatedEventArgs2
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FileSavePickerActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FileSavePickerActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FileSavePickerActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.FileSavePickerActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FileSavePickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFileSavePickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FileSavePickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FileSavePickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FileSavePickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.FileSavePickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.FolderPickerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IFolderPickerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_FolderPickerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_FolderPickerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_FolderPickerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.FolderPickerContinuationEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.LaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IPrelaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs2
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_LaunchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_LaunchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_LaunchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.LaunchActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.LockScreenActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILockScreenActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_LockScreenActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.LockScreenActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.LockScreenCallActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ILockScreenCallActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.ILaunchActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenCallActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenCallActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_LockScreenCallActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.LockScreenCallActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.LockScreenComponentActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenComponentActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_LockScreenComponentActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_LockScreenComponentActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.LockScreenComponentActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Activation.PickerReturnedActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IPickerReturnedActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_PickerReturnedActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_PickerReturnedActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_PickerReturnedActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.PickerReturnedActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.Print3DWorkflowActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IPrint3DWorkflowActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_Print3DWorkflowActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_Print3DWorkflowActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_Print3DWorkflowActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.Print3DWorkflowActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.PrintTaskSettingsActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Activation.ActivatedEventsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IPrintTaskSettingsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_PrintTaskSettingsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_PrintTaskSettingsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_PrintTaskSettingsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.PrintTaskSettingsActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ProtocolActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ProtocolActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ProtocolActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ProtocolForResultsActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IProtocolForResultsActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ProtocolForResultsActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ProtocolForResultsActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ProtocolForResultsActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ProtocolForResultsActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.RestrictedLaunchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IRestrictedLaunchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_RestrictedLaunchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_RestrictedLaunchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_RestrictedLaunchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.RestrictedLaunchActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.SearchActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ISearchActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *    Windows.ApplicationModel.Activation.ISearchActivatedEventArgsWithLinguisticDetails
 *    Windows.ApplicationModel.Activation.IViewSwitcherProvider
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_SearchActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_SearchActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_SearchActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.SearchActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.ShareTargetActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IShareTargetActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ShareTargetActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ShareTargetActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ShareTargetActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ShareTargetActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.SplashScreen
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ISplashScreen ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_SplashScreen_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_SplashScreen_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_SplashScreen[] = L"Windows.ApplicationModel.Activation.SplashScreen";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.StartupTaskActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IStartupTaskActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_StartupTaskActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_StartupTaskActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_StartupTaskActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.StartupTaskActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Activation.TileActivatedInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.ITileActivatedInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_TileActivatedInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_TileActivatedInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_TileActivatedInfo[] = L"Windows.ApplicationModel.Activation.TileActivatedInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Activation.ToastNotificationActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IToastNotificationActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *    Windows.ApplicationModel.Activation.IApplicationViewActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_ToastNotificationActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_ToastNotificationActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_ToastNotificationActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.ToastNotificationActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.UserDataAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IUserDataAccountProviderActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_UserDataAccountProviderActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_UserDataAccountProviderActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_UserDataAccountProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.UserDataAccountProviderActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Activation.VoiceCommandActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IVoiceCommandActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_VoiceCommandActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_VoiceCommandActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_VoiceCommandActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.VoiceCommandActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.WalletActionActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Wallet.WalletContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWalletActionActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_WalletActionActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_WalletActionActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_WalletActionActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.WalletActionActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.WebAccountProviderActivatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWebAccountProviderActivatedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgsWithUser
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_WebAccountProviderActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_WebAccountProviderActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_WebAccountProviderActivatedEventArgs[] = L"Windows.ApplicationModel.Activation.WebAccountProviderActivatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Activation.WebAuthenticationBrokerContinuationEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Activation.IWebAuthenticationBrokerContinuationEventArgs ** Default Interface **
 *    Windows.ApplicationModel.Activation.IContinuationActivatedEventArgs
 *    Windows.ApplicationModel.Activation.IActivatedEventArgs
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Activation_WebAuthenticationBrokerContinuationEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Activation_WebAuthenticationBrokerContinuationEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Activation_WebAuthenticationBrokerContinuationEventArgs[] = L"Windows.ApplicationModel.Activation.WebAuthenticationBrokerContinuationEventArgs";
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
#endif // __windows2Eapplicationmodel2Eactivation_p_h__

#endif // __windows2Eapplicationmodel2Eactivation_h__
