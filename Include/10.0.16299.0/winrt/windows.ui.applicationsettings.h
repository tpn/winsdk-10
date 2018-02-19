/* Header file automatically generated from windows.ui.applicationsettings.idl */
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
#ifndef __windows2Eui2Eapplicationsettings_h__
#define __windows2Eui2Eapplicationsettings_h__
#ifndef __windows2Eui2Eapplicationsettings_p_h__
#define __windows2Eui2Eapplicationsettings_p_h__


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

#if !defined(WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION)
#define WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION)

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
#include "Windows.UI.Popups.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface ICredentialCommandCredentialDeletedHandler;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler ABI::Windows::UI::ApplicationSettings::ICredentialCommandCredentialDeletedHandler

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IWebAccountCommandInvokedHandler;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler ABI::Windows::UI::ApplicationSettings::IWebAccountCommandInvokedHandler

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IWebAccountProviderCommandInvokedHandler;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommandInvokedHandler

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IAccountsSettingsPane;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPane

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IAccountsSettingsPaneCommandsRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IAccountsSettingsPaneEventDeferral;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IAccountsSettingsPaneStatics;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IAccountsSettingsPaneStatics2;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface ICredentialCommand;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand ABI::Windows::UI::ApplicationSettings::ICredentialCommand

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface ICredentialCommandFactory;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory ABI::Windows::UI::ApplicationSettings::ICredentialCommandFactory

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface ISettingsCommandFactory;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory ABI::Windows::UI::ApplicationSettings::ISettingsCommandFactory

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface ISettingsCommandStatics;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics ABI::Windows::UI::ApplicationSettings::ISettingsCommandStatics

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface ISettingsPane;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane ABI::Windows::UI::ApplicationSettings::ISettingsPane

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface ISettingsPaneCommandsRequest;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest ABI::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface ISettingsPaneCommandsRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs ABI::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface ISettingsPaneStatics;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics ABI::Windows::UI::ApplicationSettings::ISettingsPaneStatics

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IWebAccountCommand;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand ABI::Windows::UI::ApplicationSettings::IWebAccountCommand

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IWebAccountCommandFactory;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory ABI::Windows::UI::ApplicationSettings::IWebAccountCommandFactory

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IWebAccountInvokedArgs;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs ABI::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IWebAccountProviderCommand;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                interface IWebAccountProviderCommandFactory;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class CredentialCommand;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE
#define DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9f1177f1-85bb-5cd0-9b08-a0b47a764c75"))
IIterator<ABI::Windows::UI::ApplicationSettings::CredentialCommand*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::CredentialCommand*, ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.ApplicationSettings.CredentialCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::ApplicationSettings::CredentialCommand*> __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t;
#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>
//#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE
#define DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("883ed18d-4dbb-58f2-8fd2-e4b018509553"))
IIterable<ABI::Windows::UI::ApplicationSettings::CredentialCommand*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::CredentialCommand*, ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.ApplicationSettings.CredentialCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::ApplicationSettings::CredentialCommand*> __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t;
#define __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>
//#define __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class SettingsCommand;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                interface IUICommand;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#define __x_ABI_CWindows_CUI_CPopups_CIUICommand ABI::Windows::UI::Popups::IUICommand

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE
#define DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f071c24-4a58-5a00-a294-c7162e98c2a0"))
IIterator<ABI::Windows::UI::ApplicationSettings::SettingsCommand*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::SettingsCommand*, ABI::Windows::UI::Popups::IUICommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.ApplicationSettings.SettingsCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::ApplicationSettings::SettingsCommand*> __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t;
#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE
#define DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6308e7e8-cb85-5339-a3e9-9a7500d19c68"))
IIterable<ABI::Windows::UI::ApplicationSettings::SettingsCommand*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::SettingsCommand*, ABI::Windows::UI::Popups::IUICommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.ApplicationSettings.SettingsCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::ApplicationSettings::SettingsCommand*> __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t;
#define __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class WebAccountCommand;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE
#define DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8cbb62b6-bd9c-5486-9d14-9cc4627b32d4"))
IIterator<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*, ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.ApplicationSettings.WebAccountCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*> __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t;
#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>
//#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE
#define DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bd0d999c-b2ba-51b2-bcc0-d4a5cd821555"))
IIterable<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*, ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.ApplicationSettings.WebAccountCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*> __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t;
#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>
//#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class WebAccountProviderCommand;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE
#define DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("82d7cd74-8e33-5f06-92fc-915138aacbde"))
IIterator<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*, ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.ApplicationSettings.WebAccountProviderCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*> __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t;
#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>
//#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE
#define DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("15165367-2e93-59a6-b5c7-16d3b58fd2e7"))
IIterable<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*, ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.ApplicationSettings.WebAccountProviderCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*> __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t;
#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>
//#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE
#define DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("95cc1bba-c279-5ee5-a524-78012b7fe17e"))
IVectorView<ABI::Windows::UI::ApplicationSettings::CredentialCommand*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::CredentialCommand*, ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.ApplicationSettings.CredentialCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::ApplicationSettings::CredentialCommand*> __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t;
#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>
//#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE
#define DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("67b64d17-4245-5d7c-bfb4-6b68dd525877"))
IVectorView<ABI::Windows::UI::ApplicationSettings::SettingsCommand*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::SettingsCommand*, ABI::Windows::UI::Popups::IUICommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.ApplicationSettings.SettingsCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::ApplicationSettings::SettingsCommand*> __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t;
#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE
#define DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("207eaa3e-5ec9-5bd4-a1d2-73179a8128a8"))
IVectorView<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*, ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.ApplicationSettings.WebAccountCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*> __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t;
#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>
//#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE
#define DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b2d19260-1827-5d88-b948-9688cfcd63ae"))
IVectorView<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*, ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.ApplicationSettings.WebAccountProviderCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*> __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t;
#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>
//#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE
#define DEF___FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b6af1cb5-f60e-5b08-b312-2eb51135cfc6"))
IVector<ABI::Windows::UI::ApplicationSettings::CredentialCommand*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::CredentialCommand*, ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.ApplicationSettings.CredentialCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::ApplicationSettings::CredentialCommand*> __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t;
#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>
//#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::ApplicationSettings::ICredentialCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE
#define DEF___FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("10bd9cdd-3767-5e96-9022-f00f9cbd6241"))
IVector<ABI::Windows::UI::ApplicationSettings::SettingsCommand*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::SettingsCommand*, ABI::Windows::UI::Popups::IUICommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.ApplicationSettings.SettingsCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::ApplicationSettings::SettingsCommand*> __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t;
#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE
#define DEF___FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("64e864c8-7fef-5df5-a624-50b577f48554"))
IVector<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*, ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.ApplicationSettings.WebAccountCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::ApplicationSettings::WebAccountCommand*> __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t;
#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>
//#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::ApplicationSettings::IWebAccountCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE
#define DEF___FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d376abf3-f0c1-5233-9f42-de531884963e"))
IVector<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*, ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.ApplicationSettings.WebAccountProviderCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand*> __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t;
#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>
//#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class AccountsSettingsPane;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class AccountsSettingsPaneCommandsRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("69b8847e-7d72-5a15-bc1c-4ca39c93b162"))
ITypedEventHandler<ABI::Windows::UI::ApplicationSettings::AccountsSettingsPane*,ABI::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::AccountsSettingsPane*, ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPane*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs*, ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.ApplicationSettings.AccountsSettingsPane, Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::ApplicationSettings::AccountsSettingsPane*,ABI::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPane*,ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPane*,ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class SettingsPane;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class SettingsPaneCommandsRequestedEventArgs;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */


#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f39a56a2-7db1-5c48-9e13-7dc485a4a99e"))
ITypedEventHandler<ABI::Windows::UI::ApplicationSettings::SettingsPane*,ABI::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::SettingsPane*, ABI::Windows::UI::ApplicationSettings::ISettingsPane*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs*, ABI::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.ApplicationSettings.SettingsPane, Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::ApplicationSettings::SettingsPane*,ABI::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ApplicationSettings::ISettingsPane*,ABI::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ApplicationSettings::ISettingsPane*,ABI::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_USE */


#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000



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






#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                interface IUICommandInvokedHandler;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#define __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler ABI::Windows::UI::Popups::IUICommandInvokedHandler

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                
                typedef enum SettingsEdgeLocation : int SettingsEdgeLocation;
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                
                typedef enum SupportedWebAccountActions : unsigned int SupportedWebAccountActions;
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                
                typedef enum WebAccountAction : int WebAccountAction;
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
























namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class AccountsSettingsPaneEventDeferral;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class SettingsPaneCommandsRequest;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                class WebAccountInvokedArgs;
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */












/*
 *
 * Struct Windows.UI.ApplicationSettings.SettingsEdgeLocation
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 */

#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [v1_enum, deprecated, contract] */
                enum 
                #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                DEPRECATED("SettingsEdgeLocation is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                SettingsEdgeLocation : int
                {
                    SettingsEdgeLocation_Right = 0,
                    SettingsEdgeLocation_Left = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ApplicationSettings.SupportedWebAccountActions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [v1_enum, flags, contract] */
                enum SupportedWebAccountActions : unsigned int
                {
                    SupportedWebAccountActions_None = 0,
                    SupportedWebAccountActions_Reconnect = 0x1,
                    SupportedWebAccountActions_Remove = 0x2,
                    SupportedWebAccountActions_ViewDetails = 0x4,
                    SupportedWebAccountActions_Manage = 0x8,
                    SupportedWebAccountActions_More = 0x10,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(SupportedWebAccountActions)
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ApplicationSettings.WebAccountAction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [v1_enum, contract] */
                enum WebAccountAction : int
                {
                    WebAccountAction_Reconnect = 0,
                    WebAccountAction_Remove = 1,
                    WebAccountAction_ViewDetails = 2,
                    WebAccountAction_Manage = 3,
                    WebAccountAction_More = 4,
                };
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.ApplicationSettings.CredentialCommandCredentialDeletedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("61C0E185-0977-4678-B4E2-98727AFBEED9"), contract] */
                MIDL_INTERFACE("61C0E185-0977-4678-B4E2-98727AFBEED9")
                ICredentialCommandCredentialDeletedHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::ApplicationSettings::ICredentialCommand * command
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICredentialCommandCredentialDeletedHandler=_uuidof(ICredentialCommandCredentialDeletedHandler);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.ApplicationSettings.WebAccountCommandInvokedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("1EE6E459-1705-4A9A-B599-A0C3D6921973"), contract] */
                MIDL_INTERFACE("1EE6E459-1705-4A9A-B599-A0C3D6921973")
                IWebAccountCommandInvokedHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::ApplicationSettings::IWebAccountCommand * command,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs * args
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebAccountCommandInvokedHandler=_uuidof(IWebAccountCommandInvokedHandler);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.ApplicationSettings.WebAccountProviderCommandInvokedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("B7DE5527-4C8F-42DD-84DA-5EC493ABDB9A"), contract] */
                MIDL_INTERFACE("B7DE5527-4C8F-42DD-84DA-5EC493ABDB9A")
                IWebAccountProviderCommandInvokedHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand * command
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebAccountProviderCommandInvokedHandler=_uuidof(IWebAccountProviderCommandInvokedHandler);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IAccountsSettingsPane
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.AccountsSettingsPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPane[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPane";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("81EA942C-4F09-4406-A538-838D9B14B7E6"), exclusiveto, contract] */
                MIDL_INTERFACE("81EA942C-4F09-4406-A538-838D9B14B7E6")
                IAccountsSettingsPane : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AccountCommandsRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AccountCommandsRequested(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAccountsSettingsPane=_uuidof(IAccountsSettingsPane);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("3B68C099-DB19-45D0-9ABF-95D3773C9330"), exclusiveto, contract] */
                MIDL_INTERFACE("3B68C099-DB19-45D0-9ABF-95D3773C9330")
                IAccountsSettingsPaneCommandsRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccountProviderCommands(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccountCommands(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CredentialCommands(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Commands(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeaderText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeaderText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral * * deferral
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAccountsSettingsPaneCommandsRequestedEventArgs=_uuidof(IAccountsSettingsPaneCommandsRequestedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IAccountsSettingsPaneEventDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneEventDeferral";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("CBF25D3F-E5BA-40EF-93DA-65E096E5FB04"), exclusiveto, contract] */
                MIDL_INTERFACE("CBF25D3F-E5BA-40EF-93DA-65E096E5FB04")
                IAccountsSettingsPaneEventDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAccountsSettingsPaneEventDeferral=_uuidof(IAccountsSettingsPaneEventDeferral);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.AccountsSettingsPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("561F8B60-B0EC-4150-A8DC-208EE44B068A"), exclusiveto, contract] */
                MIDL_INTERFACE("561F8B60-B0EC-4150-A8DC-208EE44B068A")
                IAccountsSettingsPaneStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPane * * current
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Show(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAccountsSettingsPaneStatics=_uuidof(IAccountsSettingsPaneStatics);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.AccountsSettingsPane
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("D21DF7C2-CE0D-484F-B8E8-E823C215765E"), exclusiveto, contract] */
                MIDL_INTERFACE("D21DF7C2-CE0D-484F-B8E8-E823C215765E")
                IAccountsSettingsPaneStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ShowManageAccountsAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowAddAccountAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAccountsSettingsPaneStatics2=_uuidof(IAccountsSettingsPaneStatics2);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ICredentialCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.CredentialCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ICredentialCommand[] = L"Windows.UI.ApplicationSettings.ICredentialCommand";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("A5F665E6-6143-4A7A-A971-B017BA978CE2"), exclusiveto, contract] */
                MIDL_INTERFACE("A5F665E6-6143-4A7A-A971-B017BA978CE2")
                ICredentialCommand : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PasswordCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CredentialDeleted(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::ICredentialCommandCredentialDeletedHandler  * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICredentialCommand=_uuidof(ICredentialCommand);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ICredentialCommandFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.CredentialCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ICredentialCommandFactory[] = L"Windows.UI.ApplicationSettings.ICredentialCommandFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("27E88C17-BC3E-4B80-9495-4ED720E48A91"), exclusiveto, contract] */
                MIDL_INTERFACE("27E88C17-BC3E-4B80-9495-4ED720E48A91")
                ICredentialCommandFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateCredentialCommand(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * passwordCredential,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::ICredentialCommand * * instance
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateCredentialCommandWithHandler(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * passwordCredential,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::ApplicationSettings::ICredentialCommandCredentialDeletedHandler  * deleted,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::ICredentialCommand * * instance
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICredentialCommandFactory=_uuidof(ICredentialCommandFactory);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsCommandFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsCommandFactory[] = L"Windows.UI.ApplicationSettings.ISettingsCommandFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("68E15B33-1C83-433A-AA5A-CEEEA5BD4764"), exclusiveto, contract] */
                MIDL_INTERFACE("68E15B33-1C83-433A-AA5A-CEEEA5BD4764")
                ISettingsCommandFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSettingsCommand(
                        /* [in] */__RPC__in_opt IInspectable * settingsCommandId,
                        /* [in] */__RPC__in HSTRING label,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Popups::IUICommandInvokedHandler  * handler,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Popups::IUICommand * * instance
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISettingsCommandFactory=_uuidof(ISettingsCommandFactory);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsCommandStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsCommandStatics[] = L"Windows.UI.ApplicationSettings.ISettingsCommandStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("749AE954-2F69-4B17-8ABA-D05CE5778E46"), exclusiveto, contract] */
                MIDL_INTERFACE("749AE954-2F69-4B17-8ABA-D05CE5778E46")
                ISettingsCommandStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccountsCommand(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Popups::IUICommand * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISettingsCommandStatics=_uuidof(ISettingsCommandStatics);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsPane
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsPane
 *
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPane[] = L"Windows.UI.ApplicationSettings.ISettingsPane";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("B1CD0932-4570-4C69-8D38-89446561ACE0"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("B1CD0932-4570-4C69-8D38-89446561ACE0")
                
                #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                ISettingsPane : IInspectable
                {
                    
                    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_CommandsRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    
                    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_CommandsRequested(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISettingsPane=_uuidof(ISettingsPane);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequest
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsPaneCommandsRequest
 *
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequest[] = L"Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequest";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("44DF23AE-5D6E-4068-A168-F47643182114"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("44DF23AE-5D6E-4068-A168-F47643182114")
                
                #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                ISettingsPaneCommandsRequest : IInspectable
                {
                    
                    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationCommands(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISettingsPaneCommandsRequest=_uuidof(ISettingsPaneCommandsRequest);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequestedEventArgs
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs
 *
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("205F5D24-1B48-4629-A6CA-2FDFEDAFB75D"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("205F5D24-1B48-4629-A6CA-2FDFEDAFB75D")
                
                #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                ISettingsPaneCommandsRequestedEventArgs : IInspectable
                {
                    
                    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest * * request
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISettingsPaneCommandsRequestedEventArgs=_uuidof(ISettingsPaneCommandsRequestedEventArgs);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsPaneStatics
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsPane
 *
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPaneStatics[] = L"Windows.UI.ApplicationSettings.ISettingsPaneStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("1C6A52C5-FF19-471B-BA6B-F8F35694AD9A"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("1C6A52C5-FF19-471B-BA6B-F8F35694AD9A")
                
                #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                ISettingsPaneStatics : IInspectable
                {
                    
                    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::ISettingsPane * * current
                        ) = 0;
                    
                    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Show(void) = 0;
                    
                    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Edge(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ApplicationSettings::SettingsEdgeLocation * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISettingsPaneStatics=_uuidof(ISettingsPaneStatics);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IWebAccountCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.WebAccountCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountCommand[] = L"Windows.UI.ApplicationSettings.IWebAccountCommand";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("CAA39398-9CFA-4246-B0C4-A913A3896541"), exclusiveto, contract] */
                MIDL_INTERFACE("CAA39398-9CFA-4246-B0C4-A913A3896541")
                IWebAccountCommand : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccount(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IWebAccount * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Invoked(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::IWebAccountCommandInvokedHandler  * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Actions(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ApplicationSettings::SupportedWebAccountActions * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebAccountCommand=_uuidof(IWebAccountCommand);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IWebAccountCommandFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.WebAccountCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountCommandFactory[] = L"Windows.UI.ApplicationSettings.IWebAccountCommandFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("BFA6CDFF-2F2D-42F5-81DE-1D56BAFC496D"), exclusiveto, contract] */
                MIDL_INTERFACE("BFA6CDFF-2F2D-42F5-81DE-1D56BAFC496D")
                IWebAccountCommandFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWebAccountCommand(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::ApplicationSettings::IWebAccountCommandInvokedHandler  * invoked,
                        /* [in] */ABI::Windows::UI::ApplicationSettings::SupportedWebAccountActions actions,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::IWebAccountCommand * * instance
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebAccountCommandFactory=_uuidof(IWebAccountCommandFactory);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IWebAccountInvokedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.WebAccountInvokedArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs[] = L"Windows.UI.ApplicationSettings.IWebAccountInvokedArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("E7ABCC40-A1D8-4C5D-9A7F-1D34B2F90AD2"), exclusiveto, contract] */
                MIDL_INTERFACE("E7ABCC40-A1D8-4C5D-9A7F-1D34B2F90AD2")
                IWebAccountInvokedArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Action(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::ApplicationSettings::WebAccountAction * action
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebAccountInvokedArgs=_uuidof(IWebAccountInvokedArgs);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IWebAccountProviderCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.WebAccountProviderCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountProviderCommand[] = L"Windows.UI.ApplicationSettings.IWebAccountProviderCommand";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("D69BDD9A-A0A6-4E9B-88DC-C71E757A3501"), exclusiveto, contract] */
                MIDL_INTERFACE("D69BDD9A-A0A6-4E9B-88DC-C71E757A3501")
                IWebAccountProviderCommand : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebAccountProvider(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IWebAccountProvider * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Invoked(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommandInvokedHandler  * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebAccountProviderCommand=_uuidof(IWebAccountProviderCommand);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IWebAccountProviderCommandFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.WebAccountProviderCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory[] = L"Windows.UI.ApplicationSettings.IWebAccountProviderCommandFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ApplicationSettings {
                /* [object, uuid("D5658A1B-B176-4776-8469-A9D3FF0B3F59"), exclusiveto, contract] */
                MIDL_INTERFACE("D5658A1B-B176-4776-8469-A9D3FF0B3F59")
                IWebAccountProviderCommandFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWebAccountProviderCommand(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccountProvider * webAccountProvider,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommandInvokedHandler  * invoked,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand * * instance
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebAccountProviderCommandFactory=_uuidof(IWebAccountProviderCommandFactory);
                
            } /* Windows */
        } /* UI */
    } /* ApplicationSettings */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.AccountsSettingsPane
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IAccountsSettingsPane ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPane_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPane_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_AccountsSettingsPane[] = L"Windows.UI.ApplicationSettings.AccountsSettingsPane";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPaneCommandsRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPaneCommandsRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_AccountsSettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IAccountsSettingsPaneEventDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPaneEventDeferral_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPaneEventDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_AccountsSettingsPaneEventDeferral[] = L"Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.CredentialCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.ApplicationSettings.ICredentialCommandFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.ICredentialCommand ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_CredentialCommand_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_CredentialCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_CredentialCommand[] = L"Windows.UI.ApplicationSettings.CredentialCommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.SettingsCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.ApplicationSettings.ISettingsCommandFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ApplicationSettings.ISettingsCommandStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Popups.IUICommand ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsCommand_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsCommand[] = L"Windows.UI.ApplicationSettings.SettingsCommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.SettingsPane
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ApplicationSettings.ISettingsPaneStatics interface starting with version 1.0 of the Windows.UI.ApplicationSettings.ApplicationsSettingsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.ISettingsPane ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPane_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPane_DEFINED

#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsPane[] = L"Windows.UI.ApplicationSettings.SettingsPane";
#endif
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.SettingsPaneCommandsRequest
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequest_DEFINED

#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequest[] = L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequest";
#endif
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequestedEventArgs_DEFINED

#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs";
#endif
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.WebAccountCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.ApplicationSettings.IWebAccountCommandFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IWebAccountCommand ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountCommand_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_WebAccountCommand[] = L"Windows.UI.ApplicationSettings.WebAccountCommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.WebAccountInvokedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IWebAccountInvokedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountInvokedArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountInvokedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_WebAccountInvokedArgs[] = L"Windows.UI.ApplicationSettings.WebAccountInvokedArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.WebAccountProviderCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.ApplicationSettings.IWebAccountProviderCommandFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IWebAccountProviderCommand ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountProviderCommand_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountProviderCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_WebAccountProviderCommand[] = L"Windows.UI.ApplicationSettings.WebAccountProviderCommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory;

#endif // ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand;

typedef struct __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl;

interface __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand;

typedef  struct __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl;

interface __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommand __x_ABI_CWindows_CUI_CPopups_CIUICommand;

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand;

typedef struct __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl;

interface __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand;

typedef  struct __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl;

interface __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;

typedef struct __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl;

interface __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;

typedef  struct __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl;

interface __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;

typedef struct __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl;

interface __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;

typedef  struct __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl;

interface __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand;

typedef struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
            /* [in] */ __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl;

interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand;

typedef struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
            /* [in] */ __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl;

interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;

typedef struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
            /* [in] */ __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl;

interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;

typedef struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
            /* [in] */ __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl;

interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand;

typedef struct __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl;

interface __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand;

typedef struct __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl;

interface __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;

typedef struct __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl;

interface __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;

typedef struct __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl;

interface __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler;

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CUI_CApplicationSettings_CSettingsEdgeLocation __x_ABI_CWindows_CUI_CApplicationSettings_CSettingsEdgeLocation;


typedef enum __x_ABI_CWindows_CUI_CApplicationSettings_CSupportedWebAccountActions __x_ABI_CWindows_CUI_CApplicationSettings_CSupportedWebAccountActions;


typedef enum __x_ABI_CWindows_CUI_CApplicationSettings_CWebAccountAction __x_ABI_CWindows_CUI_CApplicationSettings_CWebAccountAction;










































/*
 *
 * Struct Windows.UI.ApplicationSettings.SettingsEdgeLocation
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 */

#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsEdgeLocation is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CUI_CApplicationSettings_CSettingsEdgeLocation
{
    SettingsEdgeLocation_Right = 0,
    SettingsEdgeLocation_Left = 1,
};
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ApplicationSettings.SupportedWebAccountActions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CApplicationSettings_CSupportedWebAccountActions
{
    SupportedWebAccountActions_None = 0,
    SupportedWebAccountActions_Reconnect = 0x1,
    SupportedWebAccountActions_Remove = 0x2,
    SupportedWebAccountActions_ViewDetails = 0x4,
    SupportedWebAccountActions_Manage = 0x8,
    SupportedWebAccountActions_More = 0x10,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.ApplicationSettings.WebAccountAction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CApplicationSettings_CWebAccountAction
{
    WebAccountAction_Reconnect = 0,
    WebAccountAction_Remove = 1,
    WebAccountAction_ViewDetails = 2,
    WebAccountAction_Manage = 3,
    WebAccountAction_More = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.ApplicationSettings.CredentialCommandCredentialDeletedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_INTERFACE_DEFINED__
/* [object, uuid("61C0E185-0977-4678-B4E2-98727AFBEED9"), contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * command
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandlerVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_Invoke(This,command) \
    ( (This)->lpVtbl->Invoke(This,command) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.ApplicationSettings.WebAccountCommandInvokedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_INTERFACE_DEFINED__
/* [object, uuid("1EE6E459-1705-4A9A-B599-A0C3D6921973"), contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * command,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * args
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandlerVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_Invoke(This,command,args) \
    ( (This)->lpVtbl->Invoke(This,command,args) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.ApplicationSettings.WebAccountProviderCommandInvokedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_INTERFACE_DEFINED__
/* [object, uuid("B7DE5527-4C8F-42DD-84DA-5EC493ABDB9A"), contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * command
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandlerVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_Invoke(This,command) \
    ( (This)->lpVtbl->Invoke(This,command) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IAccountsSettingsPane
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.AccountsSettingsPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPane[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPane";
/* [object, uuid("81EA942C-4F09-4406-A538-838D9B14B7E6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AccountCommandsRequested )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AccountCommandsRequested )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_add_AccountCommandsRequested(This,handler,cookie) \
    ( (This)->lpVtbl->add_AccountCommandsRequested(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_remove_AccountCommandsRequested(This,cookie) \
    ( (This)->lpVtbl->remove_AccountCommandsRequested(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs";
/* [object, uuid("3B68C099-DB19-45D0-9ABF-95D3773C9330"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccountProviderCommands )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccountCommands )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CredentialCommands )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeaderText )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeaderText )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * * deferral
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_get_WebAccountProviderCommands(This,value) \
    ( (This)->lpVtbl->get_WebAccountProviderCommands(This,value) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_get_WebAccountCommands(This,value) \
    ( (This)->lpVtbl->get_WebAccountCommands(This,value) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_get_CredentialCommands(This,value) \
    ( (This)->lpVtbl->get_CredentialCommands(This,value) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_get_Commands(This,value) \
    ( (This)->lpVtbl->get_Commands(This,value) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_get_HeaderText(This,value) \
    ( (This)->lpVtbl->get_HeaderText(This,value) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_put_HeaderText(This,value) \
    ( (This)->lpVtbl->put_HeaderText(This,value) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_GetDeferral(This,deferral) \
    ( (This)->lpVtbl->GetDeferral(This,deferral) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IAccountsSettingsPaneEventDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneEventDeferral";
/* [object, uuid("CBF25D3F-E5BA-40EF-93DA-65E096E5FB04"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferralVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.AccountsSettingsPane
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics";
/* [object, uuid("561F8B60-B0EC-4150-A8DC-208EE44B068A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * * current
        );
    HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStaticsVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_GetForCurrentView(This,current) \
    ( (This)->lpVtbl->GetForCurrentView(This,current) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_Show(This) \
    ( (This)->lpVtbl->Show(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.AccountsSettingsPane
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics2";
/* [object, uuid("D21DF7C2-CE0D-484F-B8E8-E823C215765E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowManageAccountsAsync )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAddAccountAsync )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_ShowManageAccountsAsync(This,asyncInfo) \
    ( (This)->lpVtbl->ShowManageAccountsAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_ShowAddAccountAsync(This,asyncInfo) \
    ( (This)->lpVtbl->ShowAddAccountAsync(This,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ICredentialCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.CredentialCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ICredentialCommand[] = L"Windows.UI.ApplicationSettings.ICredentialCommand";
/* [object, uuid("A5F665E6-6143-4A7A-A971-B017BA978CE2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PasswordCredential )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CredentialDeleted )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler  * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_get_PasswordCredential(This,value) \
    ( (This)->lpVtbl->get_PasswordCredential(This,value) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_get_CredentialDeleted(This,value) \
    ( (This)->lpVtbl->get_CredentialDeleted(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ICredentialCommandFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.CredentialCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ICredentialCommandFactory[] = L"Windows.UI.ApplicationSettings.ICredentialCommandFactory";
/* [object, uuid("27E88C17-BC3E-4B80-9495-4ED720E48A91"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCredentialCommand )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCredentialCommandWithHandler )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler  * deleted,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactoryVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_CreateCredentialCommand(This,passwordCredential,instance) \
    ( (This)->lpVtbl->CreateCredentialCommand(This,passwordCredential,instance) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_CreateCredentialCommandWithHandler(This,passwordCredential,deleted,instance) \
    ( (This)->lpVtbl->CreateCredentialCommandWithHandler(This,passwordCredential,deleted,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsCommandFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsCommandFactory[] = L"Windows.UI.ApplicationSettings.ISettingsCommandFactory";
/* [object, uuid("68E15B33-1C83-433A-AA5A-CEEEA5BD4764"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSettingsCommand )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This,
        /* [in] */__RPC__in_opt IInspectable * settingsCommandId,
        /* [in] */__RPC__in HSTRING label,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler  * handler,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactoryVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_CreateSettingsCommand(This,settingsCommandId,label,handler,instance) \
    ( (This)->lpVtbl->CreateSettingsCommand(This,settingsCommandId,label,handler,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsCommandStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsCommandStatics[] = L"Windows.UI.ApplicationSettings.ISettingsCommandStatics";
/* [object, uuid("749AE954-2F69-4B17-8ABA-D05CE5778E46"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccountsCommand )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStaticsVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_get_AccountsCommand(This,value) \
    ( (This)->lpVtbl->get_AccountsCommand(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsPane
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsPane
 *
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPane[] = L"Windows.UI.ApplicationSettings.ISettingsPane";
/* [object, uuid("B1CD0932-4570-4C69-8D38-89446561ACE0"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_CommandsRequested )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_CommandsRequested )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_add_CommandsRequested(This,handler,cookie) \
    ( (This)->lpVtbl->add_CommandsRequested(This,handler,cookie) )


#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_remove_CommandsRequested(This,cookie) \
    ( (This)->lpVtbl->remove_CommandsRequested(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequest
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsPaneCommandsRequest
 *
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequest[] = L"Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequest";
/* [object, uuid("44DF23AE-5D6E-4068-A168-F47643182114"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationCommands )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_get_ApplicationCommands(This,value) \
    ( (This)->lpVtbl->get_ApplicationCommands(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequestedEventArgs
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs
 *
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequestedEventArgs";
/* [object, uuid("205F5D24-1B48-4629-A6CA-2FDFEDAFB75D"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * * request
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_get_Request(This,request) \
    ( (This)->lpVtbl->get_Request(This,request) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.ISettingsPaneStatics
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.SettingsPane
 *
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPaneStatics[] = L"Windows.UI.ApplicationSettings.ISettingsPaneStatics";
/* [object, uuid("1C6A52C5-FF19-471B-BA6B-F8F35694AD9A"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * * current
        );
    
    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This
        );
    
    #if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Edge )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CSettingsEdgeLocation * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStaticsVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_GetForCurrentView(This,current) \
    ( (This)->lpVtbl->GetForCurrentView(This,current) )


#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_Show(This) \
    ( (This)->lpVtbl->Show(This) )


#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_get_Edge(This,value) \
    ( (This)->lpVtbl->get_Edge(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IWebAccountCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.WebAccountCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountCommand[] = L"Windows.UI.ApplicationSettings.IWebAccountCommand";
/* [object, uuid("CAA39398-9CFA-4246-B0C4-A913A3896541"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccount )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Invoked )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler  * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Actions )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CSupportedWebAccountActions * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_get_WebAccount(This,value) \
    ( (This)->lpVtbl->get_WebAccount(This,value) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_get_Invoked(This,value) \
    ( (This)->lpVtbl->get_Invoked(This,value) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_get_Actions(This,value) \
    ( (This)->lpVtbl->get_Actions(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IWebAccountCommandFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.WebAccountCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountCommandFactory[] = L"Windows.UI.ApplicationSettings.IWebAccountCommandFactory";
/* [object, uuid("BFA6CDFF-2F2D-42F5-81DE-1D56BAFC496D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWebAccountCommand )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler  * invoked,
        /* [in] */__x_ABI_CWindows_CUI_CApplicationSettings_CSupportedWebAccountActions actions,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactoryVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_CreateWebAccountCommand(This,webAccount,invoked,actions,instance) \
    ( (This)->lpVtbl->CreateWebAccountCommand(This,webAccount,invoked,actions,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IWebAccountInvokedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.WebAccountInvokedArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs[] = L"Windows.UI.ApplicationSettings.IWebAccountInvokedArgs";
/* [object, uuid("E7ABCC40-A1D8-4C5D-9A7F-1D34B2F90AD2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Action )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CWebAccountAction * action
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgsVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_get_Action(This,action) \
    ( (This)->lpVtbl->get_Action(This,action) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IWebAccountProviderCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.WebAccountProviderCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountProviderCommand[] = L"Windows.UI.ApplicationSettings.IWebAccountProviderCommand";
/* [object, uuid("D69BDD9A-A0A6-4E9B-88DC-C71E757A3501"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccountProvider )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Invoked )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler  * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_get_WebAccountProvider(This,value) \
    ( (This)->lpVtbl->get_WebAccountProvider(This,value) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_get_Invoked(This,value) \
    ( (This)->lpVtbl->get_Invoked(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.ApplicationSettings.IWebAccountProviderCommandFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ApplicationSettings.WebAccountProviderCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory[] = L"Windows.UI.ApplicationSettings.IWebAccountProviderCommandFactory";
/* [object, uuid("D5658A1B-B176-4776-8469-A9D3FF0B3F59"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWebAccountProviderCommand )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * webAccountProvider,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler  * invoked,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactoryVtbl;

interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_CreateWebAccountProviderCommand(This,webAccountProvider,invoked,instance) \
    ( (This)->lpVtbl->CreateWebAccountProviderCommand(This,webAccountProvider,invoked,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.AccountsSettingsPane
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IAccountsSettingsPane ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPane_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPane_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_AccountsSettingsPane[] = L"Windows.UI.ApplicationSettings.AccountsSettingsPane";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPaneCommandsRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPaneCommandsRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_AccountsSettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IAccountsSettingsPaneEventDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPaneEventDeferral_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_AccountsSettingsPaneEventDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_AccountsSettingsPaneEventDeferral[] = L"Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.CredentialCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.ApplicationSettings.ICredentialCommandFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.ICredentialCommand ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_CredentialCommand_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_CredentialCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_CredentialCommand[] = L"Windows.UI.ApplicationSettings.CredentialCommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.SettingsCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.ApplicationSettings.ISettingsCommandFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ApplicationSettings.ISettingsCommandStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Popups.IUICommand ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsCommand_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsCommand[] = L"Windows.UI.ApplicationSettings.SettingsCommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.SettingsPane
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ApplicationSettings.ISettingsPaneStatics interface starting with version 1.0 of the Windows.UI.ApplicationSettings.ApplicationsSettingsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.ISettingsPane ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPane_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPane_DEFINED

#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsPane[] = L"Windows.UI.ApplicationSettings.SettingsPane";
#endif
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.SettingsPaneCommandsRequest
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequest_DEFINED

#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequest[] = L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequest";
#endif
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs
 *
 * Introduced to Windows.UI.ApplicationSettings.ApplicationsSettingsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequestedEventArgs_DEFINED

#if WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs";
#endif
#endif // WINDOWS_UI_APPLICATIONSETTINGS_APPLICATIONSSETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.WebAccountCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.ApplicationSettings.IWebAccountCommandFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IWebAccountCommand ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountCommand_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_WebAccountCommand[] = L"Windows.UI.ApplicationSettings.WebAccountCommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.WebAccountInvokedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IWebAccountInvokedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountInvokedArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountInvokedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_WebAccountInvokedArgs[] = L"Windows.UI.ApplicationSettings.WebAccountInvokedArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ApplicationSettings.WebAccountProviderCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.ApplicationSettings.IWebAccountProviderCommandFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ApplicationSettings.IWebAccountProviderCommand ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountProviderCommand_DEFINED
#define RUNTIMECLASS_Windows_UI_ApplicationSettings_WebAccountProviderCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_WebAccountProviderCommand[] = L"Windows.UI.ApplicationSettings.WebAccountProviderCommand";
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
#endif // __windows2Eui2Eapplicationsettings_p_h__

#endif // __windows2Eui2Eapplicationsettings_h__
