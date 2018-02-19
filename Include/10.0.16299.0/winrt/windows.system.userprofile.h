/* Header file automatically generated from windows.system.userprofile.idl */
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
#ifndef __windows2Esystem2Euserprofile_h__
#define __windows2Esystem2Euserprofile_h__
#ifndef __windows2Esystem2Euserprofile_p_h__
#define __windows2Esystem2Euserprofile_p_h__


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

#if !defined(WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION)
#define WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION)
#define WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION)

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
#include "Windows.Globalization.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IAdvertisingManagerForUser;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser ABI::Windows::System::UserProfile::IAdvertisingManagerForUser

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IAdvertisingManagerStatics;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics ABI::Windows::System::UserProfile::IAdvertisingManagerStatics

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IAdvertisingManagerStatics2;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 ABI::Windows::System::UserProfile::IAdvertisingManagerStatics2

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IDiagnosticsSettings;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings ABI::Windows::System::UserProfile::IDiagnosticsSettings

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IDiagnosticsSettingsStatics;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics ABI::Windows::System::UserProfile::IDiagnosticsSettingsStatics

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IFirstSignInSettings;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings ABI::Windows::System::UserProfile::IFirstSignInSettings

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IFirstSignInSettingsStatics;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics ABI::Windows::System::UserProfile::IFirstSignInSettingsStatics

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IGlobalizationPreferencesStatics;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics ABI::Windows::System::UserProfile::IGlobalizationPreferencesStatics

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IGlobalizationPreferencesStatics2;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 ABI::Windows::System::UserProfile::IGlobalizationPreferencesStatics2

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface ILockScreenImageFeedStatics;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics ABI::Windows::System::UserProfile::ILockScreenImageFeedStatics

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface ILockScreenStatics;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics ABI::Windows::System::UserProfile::ILockScreenStatics

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IUserInformationStatics;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics ABI::Windows::System::UserProfile::IUserInformationStatics

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IUserProfilePersonalizationSettings;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings ABI::Windows::System::UserProfile::IUserProfilePersonalizationSettings

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                interface IUserProfilePersonalizationSettingsStatics;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics ABI::Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                enum SetAccountPictureResult : int;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("603f3e31-7a51-518c-9280-c188ea4213d8"))
IAsyncOperationCompletedHandler<enum ABI::Windows::System::UserProfile::SetAccountPictureResult> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::System::UserProfile::SetAccountPictureResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.System.UserProfile.SetAccountPictureResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::System::UserProfile::SetAccountPictureResult> __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::UserProfile::SetAccountPictureResult>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::UserProfile::SetAccountPictureResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6809e406-6d3b-5164-8f32-b845b0781405"))
IAsyncOperation<enum ABI::Windows::System::UserProfile::SetAccountPictureResult> : IAsyncOperation_impl<enum ABI::Windows::System::UserProfile::SetAccountPictureResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.System.UserProfile.SetAccountPictureResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::System::UserProfile::SetAccountPictureResult> __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_t;
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::UserProfile::SetAccountPictureResult>
//#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::UserProfile::SetAccountPictureResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_USE */



namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                enum SetImageFeedResult : int;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f214731a-1305-5b44-932c-af9a1e4d78c9"))
IAsyncOperationCompletedHandler<enum ABI::Windows::System::UserProfile::SetImageFeedResult> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::System::UserProfile::SetImageFeedResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.System.UserProfile.SetImageFeedResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::System::UserProfile::SetImageFeedResult> __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::UserProfile::SetImageFeedResult>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::System::UserProfile::SetImageFeedResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5361bfc9-0740-544a-9797-1ffe5e73c54e"))
IAsyncOperation<enum ABI::Windows::System::UserProfile::SetImageFeedResult> : IAsyncOperation_impl<enum ABI::Windows::System::UserProfile::SetImageFeedResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.System.UserProfile.SetImageFeedResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::System::UserProfile::SetImageFeedResult> __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_t;
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::UserProfile::SetImageFeedResult>
//#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::System::UserProfile::SetImageFeedResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_USE */





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





#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::IEventHandler<IInspectable*>
//#define __FIEventHandler_1_IInspectable_t ABI::Windows::Foundation::IEventHandler<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_IInspectable_USE */




#ifndef DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41"))
IAsyncOperationCompletedHandler<HSTRING> : IAsyncOperationCompletedHandler_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<HSTRING> __FIAsyncOperationCompletedHandler_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
//#define __FIAsyncOperationCompletedHandler_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperation_1_HSTRING_USE
#define DEF___FIAsyncOperation_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79"))
IAsyncOperation<HSTRING> : IAsyncOperation_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<HSTRING> __FIAsyncOperation_1_HSTRING_t;
#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<HSTRING>
//#define __FIAsyncOperation_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_HSTRING_USE */



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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ad46f1cc-2bb0-585c-9885-03c2780d4d58"))
IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Uri*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Uri*> __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CFoundation__CUri_USE
#define DEF___FIAsyncOperation_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("641cb9dd-a28d-59e2-b8db-a227eda6cf2e"))
IAsyncOperation<ABI::Windows::Foundation::Uri*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Foundation::Uri*> __FIAsyncOperation_1_Windows__CFoundation__CUri_t;
#define __FIAsyncOperation_1_Windows__CFoundation__CUri ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CFoundation__CUri ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIAsyncOperation_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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
        namespace Globalization {
            
            typedef enum DayOfWeek : int DayOfWeek;
            
        } /* Windows */
    } /* Globalization */} /* ABI */



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


namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */




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
        namespace System {
            namespace UserProfile {
                
                typedef enum AccountPictureKind : int AccountPictureKind;
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                
                typedef enum SetAccountPictureResult : int SetAccountPictureResult;
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                
                typedef enum SetImageFeedResult : int SetImageFeedResult;
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
















namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                class AdvertisingManagerForUser;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                class DiagnosticsSettings;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                class FirstSignInSettings;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                class UserProfilePersonalizationSettings;
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */












/*
 *
 * Struct Windows.System.UserProfile.AccountPictureKind
 *
 * Introduced to Windows.System.UserProfile.UserProfileContract in version 1.0
 *
 *
 */

#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [v1_enum, contract] */
                enum AccountPictureKind : int
                {
                    AccountPictureKind_SmallImage = 0,
                    AccountPictureKind_LargeImage = 1,
                    AccountPictureKind_Video = 2,
                };
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.System.UserProfile.SetAccountPictureResult
 *
 * Introduced to Windows.System.UserProfile.UserProfileContract in version 1.0
 *
 *
 */

#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [v1_enum, contract] */
                enum SetAccountPictureResult : int
                {
                    SetAccountPictureResult_Success = 0,
                    SetAccountPictureResult_ChangeDisabled = 1,
                    SetAccountPictureResult_LargeOrDynamicError = 2,
                    SetAccountPictureResult_VideoFrameSizeError = 3,
                    SetAccountPictureResult_FileSizeError = 4,
                    SetAccountPictureResult_Failure = 5,
                };
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.System.UserProfile.SetImageFeedResult
 *
 * Introduced to Windows.System.UserProfile.UserProfileContract in version 1.0
 *
 *
 */

#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [v1_enum, contract] */
                enum SetImageFeedResult : int
                {
                    SetImageFeedResult_Success = 0,
                    SetImageFeedResult_ChangeDisabled = 1,
                    SetImageFeedResult_UserCanceled = 2,
                };
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IAdvertisingManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.AdvertisingManagerForUser
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAdvertisingManagerForUser[] = L"Windows.System.UserProfile.IAdvertisingManagerForUser";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("928BF3D0-CF7C-4AB0-A7DC-6DC5BCD44252"), exclusiveto, contract] */
                MIDL_INTERFACE("928BF3D0-CF7C-4AB0-A7DC-6DC5BCD44252")
                IAdvertisingManagerForUser : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdvertisingId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdvertisingManagerForUser=_uuidof(IAdvertisingManagerForUser);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.UserProfile.IAdvertisingManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.AdvertisingManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAdvertisingManagerStatics[] = L"Windows.System.UserProfile.IAdvertisingManagerStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("ADD3468C-A273-48CB-B346-3544522D5581"), exclusiveto, contract] */
                MIDL_INTERFACE("ADD3468C-A273-48CB-B346-3544522D5581")
                IAdvertisingManagerStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdvertisingId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdvertisingManagerStatics=_uuidof(IAdvertisingManagerStatics);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IAdvertisingManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.AdvertisingManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAdvertisingManagerStatics2[] = L"Windows.System.UserProfile.IAdvertisingManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("DD0947AF-1A6D-46B0-95BC-F3F9D6BEB9FB"), exclusiveto, contract] */
                MIDL_INTERFACE("DD0947AF-1A6D-46B0-95BC-F3F9D6BEB9FB")
                IAdvertisingManagerStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForUser(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::UserProfile::IAdvertisingManagerForUser * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdvertisingManagerStatics2=_uuidof(IAdvertisingManagerStatics2);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.UserProfile.IDiagnosticsSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.DiagnosticsSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IDiagnosticsSettings[] = L"Windows.System.UserProfile.IDiagnosticsSettings";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("E5E9ECCD-2711-44E0-973C-491D78048D24"), exclusiveto, contract] */
                MIDL_INTERFACE("E5E9ECCD-2711-44E0-973C-491D78048D24")
                IDiagnosticsSettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanUseDiagnosticsToTailorExperiences(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDiagnosticsSettings=_uuidof(IDiagnosticsSettings);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.UserProfile.IDiagnosticsSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.DiagnosticsSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IDiagnosticsSettingsStatics[] = L"Windows.System.UserProfile.IDiagnosticsSettingsStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("72D2E80F-5390-4793-990B-3CCC7D6AC9C8"), exclusiveto, contract] */
                MIDL_INTERFACE("72D2E80F-5390-4793-990B-3CCC7D6AC9C8")
                IDiagnosticsSettingsStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::UserProfile::IDiagnosticsSettings * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetForUser(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::UserProfile::IDiagnosticsSettings * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDiagnosticsSettingsStatics=_uuidof(IDiagnosticsSettingsStatics);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.UserProfile.IFirstSignInSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.FirstSignInSettings
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IMapView_2_HSTRING,IInspectable
 *     Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IFirstSignInSettings[] = L"Windows.System.UserProfile.IFirstSignInSettings";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("3E945153-3A5E-452E-A601-F5BAAD2A4870"), exclusiveto, contract] */
                MIDL_INTERFACE("3E945153-3A5E-452E-A601-F5BAAD2A4870")
                IFirstSignInSettings : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IFirstSignInSettings=_uuidof(IFirstSignInSettings);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IFirstSignInSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.FirstSignInSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IFirstSignInSettingsStatics[] = L"Windows.System.UserProfile.IFirstSignInSettingsStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("1CE18F0F-1C41-4EA0-B7A2-6F0C1C7E8438"), exclusiveto, contract] */
                MIDL_INTERFACE("1CE18F0F-1C41-4EA0-B7A2-6F0C1C7E8438")
                IFirstSignInSettingsStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::UserProfile::IFirstSignInSettings * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFirstSignInSettingsStatics=_uuidof(IFirstSignInSettingsStatics);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IGlobalizationPreferencesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.GlobalizationPreferences
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IGlobalizationPreferencesStatics[] = L"Windows.System.UserProfile.IGlobalizationPreferencesStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("01BF4326-ED37-4E96-B0E9-C1340D1EA158"), exclusiveto, contract] */
                MIDL_INTERFACE("01BF4326-ED37-4E96-B0E9-C1340D1EA158")
                IGlobalizationPreferencesStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Calendars(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Clocks(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Currencies(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Languages(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HomeGeographicRegion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WeekStartsOn(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::DayOfWeek * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGlobalizationPreferencesStatics=_uuidof(IGlobalizationPreferencesStatics);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IGlobalizationPreferencesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.GlobalizationPreferences
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IGlobalizationPreferencesStatics2[] = L"Windows.System.UserProfile.IGlobalizationPreferencesStatics2";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("FCCE85F1-4300-4CD0-9CAC-1A8E7B7E18F4"), exclusiveto, contract] */
                MIDL_INTERFACE("FCCE85F1-4300-4CD0-9CAC-1A8E7B7E18F4")
                IGlobalizationPreferencesStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TrySetHomeGeographicRegion(
                        /* [in] */__RPC__in HSTRING region,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySetLanguages(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languageTags,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGlobalizationPreferencesStatics2=_uuidof(IGlobalizationPreferencesStatics2);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.UserProfile.ILockScreenImageFeedStatics
 *
 * Introduced to Windows.System.UserProfile.UserProfileLockScreenContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.LockScreen
 *
 *
 */
#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_ILockScreenImageFeedStatics[] = L"Windows.System.UserProfile.ILockScreenImageFeedStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("2C0D73F6-03A9-41A6-9B01-495251FF51D5"), exclusiveto, contract] */
                MIDL_INTERFACE("2C0D73F6-03A9-41A6-9B01-495251FF51D5")
                ILockScreenImageFeedStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RequestSetImageFeedAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * syndicationFeedUri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryRemoveImageFeed(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILockScreenImageFeedStatics=_uuidof(ILockScreenImageFeedStatics);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.ILockScreenStatics
 *
 * Introduced to Windows.System.UserProfile.UserProfileLockScreenContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.LockScreen
 *
 *
 */
#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_ILockScreenStatics[] = L"Windows.System.UserProfile.ILockScreenStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("3EE9D3AD-B607-40AE-B426-7631D9821269"), exclusiveto, contract] */
                MIDL_INTERFACE("3EE9D3AD-B607-40AE-B426-7631D9821269")
                ILockScreenStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OriginalImageFile(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetImageStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStream * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetImageFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * value,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * Operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetImageStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * value,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * Operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILockScreenStatics=_uuidof(ILockScreenStatics);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IUserInformationStatics
 *
 * Introduced to Windows.System.UserProfile.UserProfileContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.UserInformation
 *
 *
 */
#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IUserInformationStatics[] = L"Windows.System.UserProfile.IUserInformationStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("77F3A910-48FA-489C-934E-2AE85BA8F772"), exclusiveto, contract] */
                MIDL_INTERFACE("77F3A910-48FA-489C-934E-2AE85BA8F772")
                IUserInformationStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccountPictureChangeEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NameAccessAllowed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAccountPicture(
                        /* [in] */ABI::Windows::System::UserProfile::AccountPictureKind kind,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * storageFile
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAccountPictureAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * image,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAccountPicturesAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * smallImage,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * largeImage,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * video,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAccountPictureFromStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * image,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAccountPicturesFromStreamsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * smallImage,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * largeImage,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * video,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AccountPictureChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * changeHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AccountPictureChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDisplayNameAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetFirstNameAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLastNameAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPrincipalNameAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSessionInitiationProtocolUriAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CUri * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDomainNameAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserInformationStatics=_uuidof(IUserInformationStatics);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IUserProfilePersonalizationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.UserProfilePersonalizationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IUserProfilePersonalizationSettings[] = L"Windows.System.UserProfile.IUserProfilePersonalizationSettings";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("8CEDDAB4-7998-46D5-8DD3-184F1C5F9AB9"), exclusiveto, contract] */
                MIDL_INTERFACE("8CEDDAB4-7998-46D5-8DD3-184F1C5F9AB9")
                IUserProfilePersonalizationSettings : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TrySetLockScreenImageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * imageFile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySetWallpaperImageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * imageFile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserProfilePersonalizationSettings=_uuidof(IUserProfilePersonalizationSettings);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IUserProfilePersonalizationSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.UserProfilePersonalizationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IUserProfilePersonalizationSettingsStatics[] = L"Windows.System.UserProfile.IUserProfilePersonalizationSettingsStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace UserProfile {
                /* [object, uuid("91ACB841-5037-454B-9883-BB772D08DD16"), exclusiveto, contract] */
                MIDL_INTERFACE("91ACB841-5037-454B-9883-BB772D08DD16")
                IUserProfilePersonalizationSettingsStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Current(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::UserProfile::IUserProfilePersonalizationSettings * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsSupported(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUserProfilePersonalizationSettingsStatics=_uuidof(IUserProfilePersonalizationSettingsStatics);
                
            } /* Windows */
        } /* System */
    } /* UserProfile */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.AdvertisingManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IAdvertisingManagerStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.UserProfile.IAdvertisingManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_UserProfile_AdvertisingManager_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_AdvertisingManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_AdvertisingManager[] = L"Windows.System.UserProfile.AdvertisingManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.AdvertisingManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.UserProfile.IAdvertisingManagerForUser ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_UserProfile_AdvertisingManagerForUser_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_AdvertisingManagerForUser_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_AdvertisingManagerForUser[] = L"Windows.System.UserProfile.AdvertisingManagerForUser";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.UserProfile.DiagnosticsSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IDiagnosticsSettingsStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.UserProfile.IDiagnosticsSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_UserProfile_DiagnosticsSettings_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_DiagnosticsSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_DiagnosticsSettings[] = L"Windows.System.UserProfile.DiagnosticsSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.UserProfile.FirstSignInSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IFirstSignInSettingsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.UserProfile.IFirstSignInSettings ** Default Interface **
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,IInspectable
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_UserProfile_FirstSignInSettings_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_FirstSignInSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_FirstSignInSettings[] = L"Windows.System.UserProfile.FirstSignInSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.GlobalizationPreferences
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IGlobalizationPreferencesStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.UserProfile.IGlobalizationPreferencesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_UserProfile_GlobalizationPreferences_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_GlobalizationPreferences_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_GlobalizationPreferences[] = L"Windows.System.UserProfile.GlobalizationPreferences";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.LockScreen
 *
 * Introduced to Windows.System.UserProfile.UserProfileLockScreenContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.ILockScreenStatics interface starting with version 1.0 of the Windows.System.UserProfile.UserProfileLockScreenContract API contract
 *   Static Methods exist on the Windows.System.UserProfile.ILockScreenImageFeedStatics interface starting with version 1.0 of the Windows.System.UserProfile.UserProfileLockScreenContract API contract
 *
 */
#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_UserProfile_LockScreen_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_LockScreen_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_LockScreen[] = L"Windows.System.UserProfile.LockScreen";
#endif
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.UserInformation
 *
 * Introduced to Windows.System.UserProfile.UserProfileContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IUserInformationStatics interface starting with version 1.0 of the Windows.System.UserProfile.UserProfileContract API contract
 *
 */
#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_UserProfile_UserInformation_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_UserInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_UserInformation[] = L"Windows.System.UserProfile.UserInformation";
#endif
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.UserProfilePersonalizationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IUserProfilePersonalizationSettingsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.UserProfile.IUserProfilePersonalizationSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_UserProfile_UserProfilePersonalizationSettings_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_UserProfilePersonalizationSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_UserProfilePersonalizationSettings[] = L"Windows.System.UserProfile.UserProfilePersonalizationSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics;

#endif // ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CSystem_CUserProfile_CSetAccountPictureResult;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult;

typedef struct __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSystem_CUserProfile_CSetAccountPictureResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl;

interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CSystem_CUserProfile_CSetImageFeedResult;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult;

typedef struct __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserProfile__CSetImageFeedResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSystem_CUserProfile_CSetImageFeedResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl;

interface __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult_INTERFACE_DEFINED__



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



#if !defined(____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;

typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;

interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_IInspectable_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_IInspectable_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_IInspectable_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;

interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CFoundation__CUri __FIAsyncOperation_1_Windows__CFoundation__CUri;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CFoundation__CUri *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUriVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CFoundation__CUri __FIAsyncOperation_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CFoundation__CUri;

typedef struct __FIAsyncOperation_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CFoundation__CUriVtbl;

interface __FIAsyncOperation_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CFoundation__CUri_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CGlobalization_CDayOfWeek __x_ABI_CWindows_CGlobalization_CDayOfWeek;



#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CSystem_CUserProfile_CAccountPictureKind __x_ABI_CWindows_CSystem_CUserProfile_CAccountPictureKind;


typedef enum __x_ABI_CWindows_CSystem_CUserProfile_CSetAccountPictureResult __x_ABI_CWindows_CSystem_CUserProfile_CSetAccountPictureResult;


typedef enum __x_ABI_CWindows_CSystem_CUserProfile_CSetImageFeedResult __x_ABI_CWindows_CSystem_CUserProfile_CSetImageFeedResult;

































/*
 *
 * Struct Windows.System.UserProfile.AccountPictureKind
 *
 * Introduced to Windows.System.UserProfile.UserProfileContract in version 1.0
 *
 *
 */

#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CUserProfile_CAccountPictureKind
{
    AccountPictureKind_SmallImage = 0,
    AccountPictureKind_LargeImage = 1,
    AccountPictureKind_Video = 2,
};
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.System.UserProfile.SetAccountPictureResult
 *
 * Introduced to Windows.System.UserProfile.UserProfileContract in version 1.0
 *
 *
 */

#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CUserProfile_CSetAccountPictureResult
{
    SetAccountPictureResult_Success = 0,
    SetAccountPictureResult_ChangeDisabled = 1,
    SetAccountPictureResult_LargeOrDynamicError = 2,
    SetAccountPictureResult_VideoFrameSizeError = 3,
    SetAccountPictureResult_FileSizeError = 4,
    SetAccountPictureResult_Failure = 5,
};
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.System.UserProfile.SetImageFeedResult
 *
 * Introduced to Windows.System.UserProfile.UserProfileContract in version 1.0
 *
 *
 */

#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CUserProfile_CSetImageFeedResult
{
    SetImageFeedResult_Success = 0,
    SetImageFeedResult_ChangeDisabled = 1,
    SetImageFeedResult_UserCanceled = 2,
};
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IAdvertisingManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.AdvertisingManagerForUser
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAdvertisingManagerForUser[] = L"Windows.System.UserProfile.IAdvertisingManagerForUser";
/* [object, uuid("928BF3D0-CF7C-4AB0-A7DC-6DC5BCD44252"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdvertisingId )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUserVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUserVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_get_AdvertisingId(This,value) \
    ( (This)->lpVtbl->get_AdvertisingId(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.UserProfile.IAdvertisingManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.AdvertisingManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAdvertisingManagerStatics[] = L"Windows.System.UserProfile.IAdvertisingManagerStatics";
/* [object, uuid("ADD3468C-A273-48CB-B346-3544522D5581"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdvertisingId )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_get_AdvertisingId(This,value) \
    ( (This)->lpVtbl->get_AdvertisingId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IAdvertisingManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.AdvertisingManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IAdvertisingManagerStatics2[] = L"Windows.System.UserProfile.IAdvertisingManagerStatics2";
/* [object, uuid("DD0947AF-1A6D-46B0-95BC-F3F9D6BEB9FB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerForUser * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2Vtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_GetForUser(This,user,value) \
    ( (This)->lpVtbl->GetForUser(This,user,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIAdvertisingManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.UserProfile.IDiagnosticsSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.DiagnosticsSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IDiagnosticsSettings[] = L"Windows.System.UserProfile.IDiagnosticsSettings";
/* [object, uuid("E5E9ECCD-2711-44E0-973C-491D78048D24"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanUseDiagnosticsToTailorExperiences )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_get_CanUseDiagnosticsToTailorExperiences(This,value) \
    ( (This)->lpVtbl->get_CanUseDiagnosticsToTailorExperiences(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.UserProfile.IDiagnosticsSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.DiagnosticsSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IDiagnosticsSettingsStatics[] = L"Windows.System.UserProfile.IDiagnosticsSettingsStatics";
/* [object, uuid("72D2E80F-5390-4793-990B-3CCC7D6AC9C8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettings * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_GetDefault(This,value) \
    ( (This)->lpVtbl->GetDefault(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_GetForUser(This,user,value) \
    ( (This)->lpVtbl->GetForUser(This,user,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIDiagnosticsSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.UserProfile.IFirstSignInSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.FirstSignInSettings
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IMapView_2_HSTRING,IInspectable
 *     Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IFirstSignInSettings[] = L"Windows.System.UserProfile.IFirstSignInSettings";
/* [object, uuid("3E945153-3A5E-452E-A601-F5BAAD2A4870"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IFirstSignInSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.FirstSignInSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IFirstSignInSettingsStatics[] = L"Windows.System.UserProfile.IFirstSignInSettingsStatics";
/* [object, uuid("1CE18F0F-1C41-4EA0-B7A2-6F0C1C7E8438"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettings * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_GetDefault(This,result) \
    ( (This)->lpVtbl->GetDefault(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIFirstSignInSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IGlobalizationPreferencesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.GlobalizationPreferences
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IGlobalizationPreferencesStatics[] = L"Windows.System.UserProfile.IGlobalizationPreferencesStatics";
/* [object, uuid("01BF4326-ED37-4E96-B0E9-C1340D1EA158"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Calendars )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Clocks )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Currencies )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HomeGeographicRegion )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WeekStartsOn )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CDayOfWeek * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_get_Calendars(This,value) \
    ( (This)->lpVtbl->get_Calendars(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_get_Clocks(This,value) \
    ( (This)->lpVtbl->get_Clocks(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_get_Currencies(This,value) \
    ( (This)->lpVtbl->get_Currencies(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_get_Languages(This,value) \
    ( (This)->lpVtbl->get_Languages(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_get_HomeGeographicRegion(This,value) \
    ( (This)->lpVtbl->get_HomeGeographicRegion(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_get_WeekStartsOn(This,value) \
    ( (This)->lpVtbl->get_WeekStartsOn(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IGlobalizationPreferencesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.GlobalizationPreferences
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IGlobalizationPreferencesStatics2[] = L"Windows.System.UserProfile.IGlobalizationPreferencesStatics2";
/* [object, uuid("FCCE85F1-4300-4CD0-9CAC-1A8E7B7E18F4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetHomeGeographicRegion )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
        /* [in] */__RPC__in HSTRING region,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetLanguages )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languageTags,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2Vtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_TrySetHomeGeographicRegion(This,region,result) \
    ( (This)->lpVtbl->TrySetHomeGeographicRegion(This,region,result) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_TrySetLanguages(This,languageTags,result) \
    ( (This)->lpVtbl->TrySetLanguages(This,languageTags,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIGlobalizationPreferencesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.UserProfile.ILockScreenImageFeedStatics
 *
 * Introduced to Windows.System.UserProfile.UserProfileLockScreenContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.LockScreen
 *
 *
 */
#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_ILockScreenImageFeedStatics[] = L"Windows.System.UserProfile.ILockScreenImageFeedStatics";
/* [object, uuid("2C0D73F6-03A9-41A6-9B01-495251FF51D5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestSetImageFeedAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * syndicationFeedUri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetImageFeedResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryRemoveImageFeed )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_RequestSetImageFeedAsync(This,syndicationFeedUri,value) \
    ( (This)->lpVtbl->RequestSetImageFeedAsync(This,syndicationFeedUri,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_TryRemoveImageFeed(This,result) \
    ( (This)->lpVtbl->TryRemoveImageFeed(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenImageFeedStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.ILockScreenStatics
 *
 * Introduced to Windows.System.UserProfile.UserProfileLockScreenContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.LockScreen
 *
 *
 */
#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_ILockScreenStatics[] = L"Windows.System.UserProfile.ILockScreenStatics";
/* [object, uuid("3EE9D3AD-B607-40AE-B426-7631D9821269"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OriginalImageFile )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetImageStream )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetImageFileAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * Operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetImageStreamAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * Operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_get_OriginalImageFile(This,value) \
    ( (This)->lpVtbl->get_OriginalImageFile(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_GetImageStream(This,value) \
    ( (This)->lpVtbl->GetImageStream(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_SetImageFileAsync(This,value,Operation) \
    ( (This)->lpVtbl->SetImageFileAsync(This,value,Operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_SetImageStreamAsync(This,value,Operation) \
    ( (This)->lpVtbl->SetImageStreamAsync(This,value,Operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CILockScreenStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IUserInformationStatics
 *
 * Introduced to Windows.System.UserProfile.UserProfileContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.UserInformation
 *
 *
 */
#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IUserInformationStatics[] = L"Windows.System.UserProfile.IUserInformationStatics";
/* [object, uuid("77F3A910-48FA-489C-934E-2AE85BA8F772"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccountPictureChangeEnabled )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NameAccessAllowed )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccountPicture )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [in] */__x_ABI_CWindows_CSystem_CUserProfile_CAccountPictureKind kind,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * storageFile
        );
    HRESULT ( STDMETHODCALLTYPE *SetAccountPictureAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * image,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetAccountPicturesAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * smallImage,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * largeImage,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * video,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetAccountPictureFromStreamAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * image,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetAccountPicturesFromStreamsAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * smallImage,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * largeImage,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * video,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUserProfile__CSetAccountPictureResult * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AccountPictureChanged )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * changeHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AccountPictureChanged )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetDisplayNameAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetFirstNameAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetLastNameAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetPrincipalNameAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSessionInitiationProtocolUriAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CUri * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDomainNameAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_get_AccountPictureChangeEnabled(This,value) \
    ( (This)->lpVtbl->get_AccountPictureChangeEnabled(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_get_NameAccessAllowed(This,value) \
    ( (This)->lpVtbl->get_NameAccessAllowed(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_GetAccountPicture(This,kind,storageFile) \
    ( (This)->lpVtbl->GetAccountPicture(This,kind,storageFile) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_SetAccountPictureAsync(This,image,operation) \
    ( (This)->lpVtbl->SetAccountPictureAsync(This,image,operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_SetAccountPicturesAsync(This,smallImage,largeImage,video,operation) \
    ( (This)->lpVtbl->SetAccountPicturesAsync(This,smallImage,largeImage,video,operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_SetAccountPictureFromStreamAsync(This,image,operation) \
    ( (This)->lpVtbl->SetAccountPictureFromStreamAsync(This,image,operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_SetAccountPicturesFromStreamsAsync(This,smallImage,largeImage,video,operation) \
    ( (This)->lpVtbl->SetAccountPicturesFromStreamsAsync(This,smallImage,largeImage,video,operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_add_AccountPictureChanged(This,changeHandler,token) \
    ( (This)->lpVtbl->add_AccountPictureChanged(This,changeHandler,token) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_remove_AccountPictureChanged(This,token) \
    ( (This)->lpVtbl->remove_AccountPictureChanged(This,token) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_GetDisplayNameAsync(This,operation) \
    ( (This)->lpVtbl->GetDisplayNameAsync(This,operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_GetFirstNameAsync(This,operation) \
    ( (This)->lpVtbl->GetFirstNameAsync(This,operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_GetLastNameAsync(This,operation) \
    ( (This)->lpVtbl->GetLastNameAsync(This,operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_GetPrincipalNameAsync(This,operation) \
    ( (This)->lpVtbl->GetPrincipalNameAsync(This,operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_GetSessionInitiationProtocolUriAsync(This,operation) \
    ( (This)->lpVtbl->GetSessionInitiationProtocolUriAsync(This,operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_GetDomainNameAsync(This,operation) \
    ( (This)->lpVtbl->GetDomainNameAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IUserProfilePersonalizationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.UserProfilePersonalizationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IUserProfilePersonalizationSettings[] = L"Windows.System.UserProfile.IUserProfilePersonalizationSettings";
/* [object, uuid("8CEDDAB4-7998-46D5-8DD3-184F1C5F9AB9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetLockScreenImageAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * imageFile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetWallpaperImageAsync )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * imageFile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_TrySetLockScreenImageAsync(This,imageFile,operation) \
    ( (This)->lpVtbl->TrySetLockScreenImageAsync(This,imageFile,operation) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_TrySetWallpaperImageAsync(This,imageFile,operation) \
    ( (This)->lpVtbl->TrySetWallpaperImageAsync(This,imageFile,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.UserProfile.IUserProfilePersonalizationSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.UserProfile.UserProfilePersonalizationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_UserProfile_IUserProfilePersonalizationSettingsStatics[] = L"Windows.System.UserProfile.IUserProfilePersonalizationSettingsStatics";
/* [object, uuid("91ACB841-5037-454B-9883-BB772D08DD16"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_get_Current(This,value) \
    ( (This)->lpVtbl->get_Current(This,value) )

#define __x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_IsSupported(This,result) \
    ( (This)->lpVtbl->IsSupported(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CUserProfile_CIUserProfilePersonalizationSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.AdvertisingManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IAdvertisingManagerStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.UserProfile.IAdvertisingManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_UserProfile_AdvertisingManager_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_AdvertisingManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_AdvertisingManager[] = L"Windows.System.UserProfile.AdvertisingManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.AdvertisingManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.UserProfile.IAdvertisingManagerForUser ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_UserProfile_AdvertisingManagerForUser_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_AdvertisingManagerForUser_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_AdvertisingManagerForUser[] = L"Windows.System.UserProfile.AdvertisingManagerForUser";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.UserProfile.DiagnosticsSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IDiagnosticsSettingsStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.UserProfile.IDiagnosticsSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_UserProfile_DiagnosticsSettings_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_DiagnosticsSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_DiagnosticsSettings[] = L"Windows.System.UserProfile.DiagnosticsSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.UserProfile.FirstSignInSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IFirstSignInSettingsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.UserProfile.IFirstSignInSettings ** Default Interface **
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,IInspectable
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_UserProfile_FirstSignInSettings_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_FirstSignInSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_FirstSignInSettings[] = L"Windows.System.UserProfile.FirstSignInSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.GlobalizationPreferences
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IGlobalizationPreferencesStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.UserProfile.IGlobalizationPreferencesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_UserProfile_GlobalizationPreferences_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_GlobalizationPreferences_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_GlobalizationPreferences[] = L"Windows.System.UserProfile.GlobalizationPreferences";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.LockScreen
 *
 * Introduced to Windows.System.UserProfile.UserProfileLockScreenContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.ILockScreenStatics interface starting with version 1.0 of the Windows.System.UserProfile.UserProfileLockScreenContract API contract
 *   Static Methods exist on the Windows.System.UserProfile.ILockScreenImageFeedStatics interface starting with version 1.0 of the Windows.System.UserProfile.UserProfileLockScreenContract API contract
 *
 */
#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_UserProfile_LockScreen_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_LockScreen_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_LockScreen[] = L"Windows.System.UserProfile.LockScreen";
#endif
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILELOCKSCREENCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.UserInformation
 *
 * Introduced to Windows.System.UserProfile.UserProfileContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IUserInformationStatics interface starting with version 1.0 of the Windows.System.UserProfile.UserProfileContract API contract
 *
 */
#if WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_UserProfile_UserInformation_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_UserInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_UserInformation[] = L"Windows.System.UserProfile.UserInformation";
#endif
#endif // WINDOWS_SYSTEM_USERPROFILE_USERPROFILECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.UserProfile.UserProfilePersonalizationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.UserProfile.IUserProfilePersonalizationSettingsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.UserProfile.IUserProfilePersonalizationSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_UserProfile_UserProfilePersonalizationSettings_DEFINED
#define RUNTIMECLASS_Windows_System_UserProfile_UserProfilePersonalizationSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserProfile_UserProfilePersonalizationSettings[] = L"Windows.System.UserProfile.UserProfilePersonalizationSettings";
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
#endif // __windows2Esystem2Euserprofile_p_h__

#endif // __windows2Esystem2Euserprofile_h__
