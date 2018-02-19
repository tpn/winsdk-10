/* Header file automatically generated from windows.security.authentication.identity.provider.idl */
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
#ifndef __windows2Esecurity2Eauthentication2Eidentity2Eprovider_h__
#define __windows2Esecurity2Eauthentication2Eidentity2Eprovider_h__
#ifndef __windows2Esecurity2Eauthentication2Eidentity2Eprovider_p_h__
#define __windows2Esecurity2Eauthentication2Eidentity2Eprovider_p_h__


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
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorAuthentication;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorAuthenticationResult;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorAuthenticationStageInfo;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorAuthenticationStatics;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorInfo;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorInfo2;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorRegistration;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorRegistrationResult;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        interface ISecondaryAuthenticationFactorRegistrationStatics;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        class SecondaryAuthenticationFactorInfo;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE
#define DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0eedbda6-2de0-50af-abc4-46073245fb2d"))
IIterator<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo*, ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo*> __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t;
#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>
//#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE
#define DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("43b7bbe4-f096-53dd-8c16-1faa4b468c86"))
IIterable<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo*, ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo*> __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t;
#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>
//#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("63c2e57e-3b00-5752-8fa7-cb9cbe8fe088"))
IVectorView<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo*, ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo*> __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t;
#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>
//#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        class SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("10409b3c-42e4-586f-84c1-803da23765af"))
IEventHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs*, ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs*> __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_t;
#define __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs ABI::Windows::Foundation::IEventHandler<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs*>
//#define __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("06752d25-d43e-5d2e-a305-4e1576846fee"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("47eb155b-abe0-55a5-9310-feb1dd57dca5"))
IAsyncOperation<__FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo*> __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        class SecondaryAuthenticationFactorAuthenticationResult;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2547373d-9684-5e5b-a9b8-a6f90ce632ad"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult*, ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("18b0a73c-db59-5279-a76d-02416b2d90b6"))
IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult*, ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult*> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        class SecondaryAuthenticationFactorAuthenticationStageInfo;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7811d384-2eb8-58f1-afed-4b4b888f4357"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo*, ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("864a2317-b440-5e9e-ae55-4550bb6307df"))
IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo*, ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo*> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        enum SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus : int;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2294a212-9061-5e99-a226-a44ac8f8f4dd"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7f37ecea-e3e8-53fc-b0e5-7aa471970edd"))
IAsyncOperation<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> : IAsyncOperation_impl<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_USE */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        enum SecondaryAuthenticationFactorFinishAuthenticationStatus : int;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ae1d7146-3d91-50e3-8f13-613cf2801207"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorFinishAuthenticationStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9159437a-4397-546e-be61-2ef161717e06"))
IAsyncOperation<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> : IAsyncOperation_impl<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorFinishAuthenticationStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_USE */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        class SecondaryAuthenticationFactorRegistrationResult;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a04902e8-f830-50ea-89ea-96e2a6fb9453"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult*, ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("05da520c-aba4-584c-bc08-19c5389a70e2"))
IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult*, ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult*> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



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





namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorAuthenticationMessage : int SecondaryAuthenticationFactorAuthenticationMessage;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorAuthenticationScenario : int SecondaryAuthenticationFactorAuthenticationScenario;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorAuthenticationStage : int SecondaryAuthenticationFactorAuthenticationStage;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorAuthenticationStatus : int SecondaryAuthenticationFactorAuthenticationStatus;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorDeviceCapabilities : unsigned int SecondaryAuthenticationFactorDeviceCapabilities;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorDeviceFindScope : int SecondaryAuthenticationFactorDeviceFindScope;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorDevicePresence : int SecondaryAuthenticationFactorDevicePresence;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorDevicePresenceMonitoringMode : int SecondaryAuthenticationFactorDevicePresenceMonitoringMode;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus : int SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorFinishAuthenticationStatus : int SecondaryAuthenticationFactorFinishAuthenticationStatus;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        
                        typedef enum SecondaryAuthenticationFactorRegistrationStatus : int SecondaryAuthenticationFactorRegistrationStatus;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */












namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        class SecondaryAuthenticationFactorAuthentication;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        class SecondaryAuthenticationFactorRegistration;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */















/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum SecondaryAuthenticationFactorAuthenticationMessage : int
                        {
                            SecondaryAuthenticationFactorAuthenticationMessage_Invalid = 0,
                            SecondaryAuthenticationFactorAuthenticationMessage_SwipeUpWelcome = 1,
                            SecondaryAuthenticationFactorAuthenticationMessage_TapWelcome = 2,
                            SecondaryAuthenticationFactorAuthenticationMessage_DeviceNeedsAttention = 3,
                            SecondaryAuthenticationFactorAuthenticationMessage_LookingForDevice = 4,
                            SecondaryAuthenticationFactorAuthenticationMessage_LookingForDevicePluggedin = 5,
                            SecondaryAuthenticationFactorAuthenticationMessage_BluetoothIsDisabled = 6,
                            SecondaryAuthenticationFactorAuthenticationMessage_NfcIsDisabled = 7,
                            SecondaryAuthenticationFactorAuthenticationMessage_WiFiIsDisabled = 8,
                            SecondaryAuthenticationFactorAuthenticationMessage_ExtraTapIsRequired = 9,
                            SecondaryAuthenticationFactorAuthenticationMessage_DisabledByPolicy = 10,
                            SecondaryAuthenticationFactorAuthenticationMessage_TapOnDeviceRequired = 11,
                            SecondaryAuthenticationFactorAuthenticationMessage_HoldFinger = 12,
                            SecondaryAuthenticationFactorAuthenticationMessage_ScanFinger = 13,
                            SecondaryAuthenticationFactorAuthenticationMessage_UnauthorizedUser = 14,
                            SecondaryAuthenticationFactorAuthenticationMessage_ReregisterRequired = 15,
                            SecondaryAuthenticationFactorAuthenticationMessage_TryAgain = 16,
                            SecondaryAuthenticationFactorAuthenticationMessage_SayPassphrase = 17,
                            SecondaryAuthenticationFactorAuthenticationMessage_ReadyToSignIn = 18,
                            SecondaryAuthenticationFactorAuthenticationMessage_UseAnotherSignInOption = 19,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationScenario
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum SecondaryAuthenticationFactorAuthenticationScenario : int
                        {
                            SecondaryAuthenticationFactorAuthenticationScenario_SignIn = 0,
                            SecondaryAuthenticationFactorAuthenticationScenario_CredentialPrompt = 1,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum SecondaryAuthenticationFactorAuthenticationStage : int
                        {
                            SecondaryAuthenticationFactorAuthenticationStage_NotStarted = 0,
                            SecondaryAuthenticationFactorAuthenticationStage_WaitingForUserConfirmation = 1,
                            SecondaryAuthenticationFactorAuthenticationStage_CollectingCredential = 2,
                            SecondaryAuthenticationFactorAuthenticationStage_SuspendingAuthentication = 3,
                            SecondaryAuthenticationFactorAuthenticationStage_CredentialCollected = 4,
                            SecondaryAuthenticationFactorAuthenticationStage_CredentialAuthenticated = 5,
                            SecondaryAuthenticationFactorAuthenticationStage_StoppingAuthentication = 6,
                            SecondaryAuthenticationFactorAuthenticationStage_ReadyForLock = 7,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                            
                            SecondaryAuthenticationFactorAuthenticationStage_CheckingDevicePresence = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                            
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum SecondaryAuthenticationFactorAuthenticationStatus : int
                        {
                            SecondaryAuthenticationFactorAuthenticationStatus_Failed = 0,
                            SecondaryAuthenticationFactorAuthenticationStatus_Started = 1,
                            SecondaryAuthenticationFactorAuthenticationStatus_UnknownDevice = 2,
                            SecondaryAuthenticationFactorAuthenticationStatus_DisabledByPolicy = 3,
                            SecondaryAuthenticationFactorAuthenticationStatus_InvalidAuthenticationStage = 4,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDeviceCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, flags, contract] */
                        enum SecondaryAuthenticationFactorDeviceCapabilities : unsigned int
                        {
                            SecondaryAuthenticationFactorDeviceCapabilities_None = 0,
                            SecondaryAuthenticationFactorDeviceCapabilities_SecureStorage = 0x1,
                            SecondaryAuthenticationFactorDeviceCapabilities_StoreKeys = 0x2,
                            SecondaryAuthenticationFactorDeviceCapabilities_ConfirmUserIntentToAuthenticate = 0x4,
                            SecondaryAuthenticationFactorDeviceCapabilities_SupportSecureUserPresenceCheck = 0x8,
                            SecondaryAuthenticationFactorDeviceCapabilities_TransmittedDataIsEncrypted = 0x10,
                            SecondaryAuthenticationFactorDeviceCapabilities_HMacSha256 = 0x20,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                            
                            SecondaryAuthenticationFactorDeviceCapabilities_CloseRangeDataTransmission = 0x40,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                            
                        };
                        
                        DEFINE_ENUM_FLAG_OPERATORS(SecondaryAuthenticationFactorDeviceCapabilities)
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDeviceFindScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum SecondaryAuthenticationFactorDeviceFindScope : int
                        {
                            SecondaryAuthenticationFactorDeviceFindScope_User = 0,
                            SecondaryAuthenticationFactorDeviceFindScope_AllUsers = 1,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum SecondaryAuthenticationFactorDevicePresence : int
                        {
                            SecondaryAuthenticationFactorDevicePresence_Absent = 0,
                            SecondaryAuthenticationFactorDevicePresence_Present = 1,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresenceMonitoringMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum SecondaryAuthenticationFactorDevicePresenceMonitoringMode : int
                        {
                            SecondaryAuthenticationFactorDevicePresenceMonitoringMode_Unsupported = 0,
                            SecondaryAuthenticationFactorDevicePresenceMonitoringMode_AppManaged = 1,
                            SecondaryAuthenticationFactorDevicePresenceMonitoringMode_SystemManaged = 2,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus : int
                        {
                            SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_Unsupported = 0,
                            SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_Succeeded = 1,
                            SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_DisabledByPolicy = 2,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorFinishAuthenticationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum SecondaryAuthenticationFactorFinishAuthenticationStatus : int
                        {
                            SecondaryAuthenticationFactorFinishAuthenticationStatus_Failed = 0,
                            SecondaryAuthenticationFactorFinishAuthenticationStatus_Completed = 1,
                            SecondaryAuthenticationFactorFinishAuthenticationStatus_NonceExpired = 2,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [v1_enum, contract] */
                        enum SecondaryAuthenticationFactorRegistrationStatus : int
                        {
                            SecondaryAuthenticationFactorRegistrationStatus_Failed = 0,
                            SecondaryAuthenticationFactorRegistrationStatus_Started = 1,
                            SecondaryAuthenticationFactorRegistrationStatus_CanceledByUser = 2,
                            SecondaryAuthenticationFactorRegistrationStatus_PinSetupRequired = 3,
                            SecondaryAuthenticationFactorRegistrationStatus_DisabledByPolicy = 4,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthentication
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthentication
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthentication";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("020A16E5-6A25-40A3-8C00-50A023F619D1"), exclusiveto, contract] */
                        MIDL_INTERFACE("020A16E5-6A25-40A3-8C00-50A023F619D1")
                        ISecondaryAuthenticationFactorAuthentication : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceAuthenticationHmac(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionNonce(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceNonce(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceConfigurationData(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE FinishAuthenticationAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * deviceHmac,
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * sessionHmac,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * * result
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE AbortAuthenticationAsync(
                                /* [in] */__RPC__in HSTRING errorLogMessage,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorAuthentication=_uuidof(ISecondaryAuthenticationFactorAuthentication);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationResult[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationResult";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("9CBB5987-EF6D-4BC2-BF49-4617515A0F9A"), exclusiveto, contract] */
                        MIDL_INTERFACE("9CBB5987-EF6D-4BC2-BF49-4617515A0F9A")
                        ISecondaryAuthenticationFactorAuthenticationResult : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Authentication(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorAuthenticationResult=_uuidof(ISecondaryAuthenticationFactorAuthenticationResult);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("D4A5EE56-7291-4073-BC1F-CCB8F5AFDF96"), exclusiveto, contract] */
                        MIDL_INTERFACE("D4A5EE56-7291-4073-BC1F-CCB8F5AFDF96")
                        ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StageInfo(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs=_uuidof(ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("56FEC28B-E8AA-4C0F-8E4C-A559E73ADD88"), exclusiveto, contract] */
                        MIDL_INTERFACE("56FEC28B-E8AA-4C0F-8E4C-A559E73ADD88")
                        ISecondaryAuthenticationFactorAuthenticationStageInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Stage(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Scenario(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorAuthenticationStageInfo=_uuidof(ISecondaryAuthenticationFactorAuthenticationStageInfo);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthentication
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("3F582656-28F8-4E0F-AE8C-5898B9AE2469"), exclusiveto, contract] */
                        MIDL_INTERFACE("3F582656-28F8-4E0F-AE8C-5898B9AE2469")
                        ISecondaryAuthenticationFactorAuthenticationStatics : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE ShowNotificationMessageAsync(
                                /* [in] */__RPC__in HSTRING deviceName,
                                /* [in] */ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage message,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE StartAuthenticationAsync(
                                /* [in] */__RPC__in HSTRING deviceId,
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * serviceAuthenticationNonce,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * * operation
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AuthenticationStageChanged(
                                /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AuthenticationStageChanged(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetAuthenticationStageInfoAsync(
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * * result
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorAuthenticationStatics=_uuidof(ISecondaryAuthenticationFactorAuthenticationStatics);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("90499A19-7EF2-4523-951C-A417A24ACF93"), exclusiveto, contract] */
                        MIDL_INTERFACE("90499A19-7EF2-4523-951C-A417A24ACF93")
                        ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics : IInspectable
                        {
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterDevicePresenceMonitoringAsync(
                                /* [in] */__RPC__in HSTRING deviceId,
                                /* [in] */__RPC__in HSTRING deviceInstancePath,
                                /* [in] */ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode monitoringMode,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * * operation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterDevicePresenceMonitoringWithNewDeviceAsync(
                                /* [in] */__RPC__in HSTRING deviceId,
                                /* [in] */__RPC__in HSTRING deviceInstancePath,
                                /* [in] */ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode monitoringMode,
                                /* [in] */__RPC__in HSTRING deviceFriendlyName,
                                /* [in] */__RPC__in HSTRING deviceModelNumber,
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * deviceConfigurationData,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE UnregisterDevicePresenceMonitoringAsync(
                                /* [in] */__RPC__in HSTRING deviceId,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE IsDevicePresenceMonitoringSupported(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics=_uuidof(ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("1E2BA861-8533-4FCE-839B-ECB72410AC14"), exclusiveto, contract] */
                        MIDL_INTERFACE("1E2BA861-8533-4FCE-839B-ECB72410AC14")
                        ISecondaryAuthenticationFactorInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceId
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceFriendlyName(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceModelNumber(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceConfigurationData(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorInfo=_uuidof(ISecondaryAuthenticationFactorInfo);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("14D981A3-FC26-4FF7-ABC3-48E82A512A0A"), exclusiveto, contract] */
                        MIDL_INTERFACE("14D981A3-FC26-4FF7-ABC3-48E82A512A0A")
                        ISecondaryAuthenticationFactorInfo2 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PresenceMonitoringMode(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE UpdateDevicePresenceAsync(
                                /* [in] */ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence presenceState,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAuthenticationSupported(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorInfo2=_uuidof(ISecondaryAuthenticationFactorInfo2);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistration[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistration";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("9F4CBBB4-8CBA-48B0-840D-DBB22A54C678"), exclusiveto, contract] */
                        MIDL_INTERFACE("9F4CBBB4-8CBA-48B0-840D-DBB22A54C678")
                        ISecondaryAuthenticationFactorRegistration : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE FinishRegisteringDeviceAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * deviceConfigurationData,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE AbortRegisteringDeviceAsync(
                                /* [in] */__RPC__in HSTRING errorLogMessage,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorRegistration=_uuidof(ISecondaryAuthenticationFactorRegistration);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationResult[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationResult";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("A4FE35F0-ADE3-4981-AF6B-EC195921682A"), exclusiveto, contract] */
                        MIDL_INTERFACE("A4FE35F0-ADE3-4981-AF6B-EC195921682A")
                        ISecondaryAuthenticationFactorRegistrationResult : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Registration(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorRegistrationResult=_uuidof(ISecondaryAuthenticationFactorRegistrationResult);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Provider {
                        /* [object, uuid("1ADF0F65-E3B7-4155-997F-B756EF65BEBA"), exclusiveto, contract] */
                        MIDL_INTERFACE("1ADF0F65-E3B7-4155-997F-B756EF65BEBA")
                        ISecondaryAuthenticationFactorRegistrationStatics : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE RequestStartRegisteringDeviceAsync(
                                /* [in] */__RPC__in HSTRING deviceId,
                                /* [in] */ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities capabilities,
                                /* [in] */__RPC__in HSTRING deviceFriendlyName,
                                /* [in] */__RPC__in HSTRING deviceModelNumber,
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * deviceKey,
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * mutualAuthenticationKey,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE FindAllRegisteredDeviceInfoAsync(
                                /* [in] */ABI::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope queryType,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * * deviceInfoList
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE UnregisterDeviceAsync(
                                /* [in] */__RPC__in HSTRING deviceId,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE UpdateDeviceConfigurationDataAsync(
                                /* [in] */__RPC__in HSTRING deviceId,
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * deviceConfigurationData,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISecondaryAuthenticationFactorRegistrationStatics=_uuidof(ISecondaryAuthenticationFactorRegistrationStatics);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthentication
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthentication ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthentication_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthentication_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthentication[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthentication";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationResult_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationResult[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageInfo[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo ** Default Interface **
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorInfo[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistration ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistration_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistration[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistrationResult_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistrationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistrationResult[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl;

interface __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

typedef  struct __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl;

interface __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

typedef struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl;

interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;

typedef struct __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl;

interface __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorFinishAuthenticationStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorFinishAuthenticationStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationMessage __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationMessage;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationScenario __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationScenario;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStage __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStage;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStatus;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceCapabilities __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceCapabilities;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceFindScope __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceFindScope;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresence __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresence;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorFinishAuthenticationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorFinishAuthenticationStatus;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorRegistrationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorRegistrationStatus;































/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationMessage
{
    SecondaryAuthenticationFactorAuthenticationMessage_Invalid = 0,
    SecondaryAuthenticationFactorAuthenticationMessage_SwipeUpWelcome = 1,
    SecondaryAuthenticationFactorAuthenticationMessage_TapWelcome = 2,
    SecondaryAuthenticationFactorAuthenticationMessage_DeviceNeedsAttention = 3,
    SecondaryAuthenticationFactorAuthenticationMessage_LookingForDevice = 4,
    SecondaryAuthenticationFactorAuthenticationMessage_LookingForDevicePluggedin = 5,
    SecondaryAuthenticationFactorAuthenticationMessage_BluetoothIsDisabled = 6,
    SecondaryAuthenticationFactorAuthenticationMessage_NfcIsDisabled = 7,
    SecondaryAuthenticationFactorAuthenticationMessage_WiFiIsDisabled = 8,
    SecondaryAuthenticationFactorAuthenticationMessage_ExtraTapIsRequired = 9,
    SecondaryAuthenticationFactorAuthenticationMessage_DisabledByPolicy = 10,
    SecondaryAuthenticationFactorAuthenticationMessage_TapOnDeviceRequired = 11,
    SecondaryAuthenticationFactorAuthenticationMessage_HoldFinger = 12,
    SecondaryAuthenticationFactorAuthenticationMessage_ScanFinger = 13,
    SecondaryAuthenticationFactorAuthenticationMessage_UnauthorizedUser = 14,
    SecondaryAuthenticationFactorAuthenticationMessage_ReregisterRequired = 15,
    SecondaryAuthenticationFactorAuthenticationMessage_TryAgain = 16,
    SecondaryAuthenticationFactorAuthenticationMessage_SayPassphrase = 17,
    SecondaryAuthenticationFactorAuthenticationMessage_ReadyToSignIn = 18,
    SecondaryAuthenticationFactorAuthenticationMessage_UseAnotherSignInOption = 19,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationScenario
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationScenario
{
    SecondaryAuthenticationFactorAuthenticationScenario_SignIn = 0,
    SecondaryAuthenticationFactorAuthenticationScenario_CredentialPrompt = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStage
{
    SecondaryAuthenticationFactorAuthenticationStage_NotStarted = 0,
    SecondaryAuthenticationFactorAuthenticationStage_WaitingForUserConfirmation = 1,
    SecondaryAuthenticationFactorAuthenticationStage_CollectingCredential = 2,
    SecondaryAuthenticationFactorAuthenticationStage_SuspendingAuthentication = 3,
    SecondaryAuthenticationFactorAuthenticationStage_CredentialCollected = 4,
    SecondaryAuthenticationFactorAuthenticationStage_CredentialAuthenticated = 5,
    SecondaryAuthenticationFactorAuthenticationStage_StoppingAuthentication = 6,
    SecondaryAuthenticationFactorAuthenticationStage_ReadyForLock = 7,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    SecondaryAuthenticationFactorAuthenticationStage_CheckingDevicePresence = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStatus
{
    SecondaryAuthenticationFactorAuthenticationStatus_Failed = 0,
    SecondaryAuthenticationFactorAuthenticationStatus_Started = 1,
    SecondaryAuthenticationFactorAuthenticationStatus_UnknownDevice = 2,
    SecondaryAuthenticationFactorAuthenticationStatus_DisabledByPolicy = 3,
    SecondaryAuthenticationFactorAuthenticationStatus_InvalidAuthenticationStage = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDeviceCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceCapabilities
{
    SecondaryAuthenticationFactorDeviceCapabilities_None = 0,
    SecondaryAuthenticationFactorDeviceCapabilities_SecureStorage = 0x1,
    SecondaryAuthenticationFactorDeviceCapabilities_StoreKeys = 0x2,
    SecondaryAuthenticationFactorDeviceCapabilities_ConfirmUserIntentToAuthenticate = 0x4,
    SecondaryAuthenticationFactorDeviceCapabilities_SupportSecureUserPresenceCheck = 0x8,
    SecondaryAuthenticationFactorDeviceCapabilities_TransmittedDataIsEncrypted = 0x10,
    SecondaryAuthenticationFactorDeviceCapabilities_HMacSha256 = 0x20,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    SecondaryAuthenticationFactorDeviceCapabilities_CloseRangeDataTransmission = 0x40,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDeviceFindScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceFindScope
{
    SecondaryAuthenticationFactorDeviceFindScope_User = 0,
    SecondaryAuthenticationFactorDeviceFindScope_AllUsers = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresence
{
    SecondaryAuthenticationFactorDevicePresence_Absent = 0,
    SecondaryAuthenticationFactorDevicePresence_Present = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresenceMonitoringMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode
{
    SecondaryAuthenticationFactorDevicePresenceMonitoringMode_Unsupported = 0,
    SecondaryAuthenticationFactorDevicePresenceMonitoringMode_AppManaged = 1,
    SecondaryAuthenticationFactorDevicePresenceMonitoringMode_SystemManaged = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus
{
    SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_Unsupported = 0,
    SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_Succeeded = 1,
    SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_DisabledByPolicy = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorFinishAuthenticationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorFinishAuthenticationStatus
{
    SecondaryAuthenticationFactorFinishAuthenticationStatus_Failed = 0,
    SecondaryAuthenticationFactorFinishAuthenticationStatus_Completed = 1,
    SecondaryAuthenticationFactorFinishAuthenticationStatus_NonceExpired = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorRegistrationStatus
{
    SecondaryAuthenticationFactorRegistrationStatus_Failed = 0,
    SecondaryAuthenticationFactorRegistrationStatus_Started = 1,
    SecondaryAuthenticationFactorRegistrationStatus_CanceledByUser = 2,
    SecondaryAuthenticationFactorRegistrationStatus_PinSetupRequired = 3,
    SecondaryAuthenticationFactorRegistrationStatus_DisabledByPolicy = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthentication
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthentication
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthentication";
/* [object, uuid("020A16E5-6A25-40A3-8C00-50A023F619D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceAuthenticationHmac )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionNonce )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceNonce )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceConfigurationData )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FinishAuthenticationAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * deviceHmac,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * sessionHmac,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AbortAuthenticationAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
        /* [in] */__RPC__in HSTRING errorLogMessage,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_get_ServiceAuthenticationHmac(This,value) \
    ( (This)->lpVtbl->get_ServiceAuthenticationHmac(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_get_SessionNonce(This,value) \
    ( (This)->lpVtbl->get_SessionNonce(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_get_DeviceNonce(This,value) \
    ( (This)->lpVtbl->get_DeviceNonce(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_get_DeviceConfigurationData(This,value) \
    ( (This)->lpVtbl->get_DeviceConfigurationData(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_FinishAuthenticationAsync(This,deviceHmac,sessionHmac,result) \
    ( (This)->lpVtbl->FinishAuthenticationAsync(This,deviceHmac,sessionHmac,result) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_AbortAuthenticationAsync(This,errorLogMessage,result) \
    ( (This)->lpVtbl->AbortAuthenticationAsync(This,errorLogMessage,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationResult[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationResult";
/* [object, uuid("9CBB5987-EF6D-4BC2-BF49-4617515A0F9A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Authentication )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResultVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_get_Authentication(This,value) \
    ( (This)->lpVtbl->get_Authentication(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs";
/* [object, uuid("D4A5EE56-7291-4073-BC1F-CCB8F5AFDF96"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StageInfo )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_get_StageInfo(This,value) \
    ( (This)->lpVtbl->get_StageInfo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageInfo";
/* [object, uuid("56FEC28B-E8AA-4C0F-8E4C-A559E73ADD88"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Stage )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStage * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Scenario )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationScenario * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_get_Stage(This,value) \
    ( (This)->lpVtbl->get_Stage(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_get_Scenario(This,value) \
    ( (This)->lpVtbl->get_Scenario(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthentication
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStatics";
/* [object, uuid("3F582656-28F8-4E0F-AE8C-5898B9AE2469"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowNotificationMessageAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
        /* [in] */__RPC__in HSTRING deviceName,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationMessage message,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *StartAuthenticationAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * serviceAuthenticationNonce,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AuthenticationStageChanged )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AuthenticationStageChanged )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetAuthenticationStageInfoAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_ShowNotificationMessageAsync(This,deviceName,message,result) \
    ( (This)->lpVtbl->ShowNotificationMessageAsync(This,deviceName,message,result) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_StartAuthenticationAsync(This,deviceId,serviceAuthenticationNonce,operation) \
    ( (This)->lpVtbl->StartAuthenticationAsync(This,deviceId,serviceAuthenticationNonce,operation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_add_AuthenticationStageChanged(This,handler,token) \
    ( (This)->lpVtbl->add_AuthenticationStageChanged(This,handler,token) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_remove_AuthenticationStageChanged(This,token) \
    ( (This)->lpVtbl->remove_AuthenticationStageChanged(This,token) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_GetAuthenticationStageInfoAsync(This,result) \
    ( (This)->lpVtbl->GetAuthenticationStageInfoAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics";
/* [object, uuid("90499A19-7EF2-4523-951C-A417A24ACF93"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterDevicePresenceMonitoringAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__RPC__in HSTRING deviceInstancePath,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode monitoringMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterDevicePresenceMonitoringWithNewDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__RPC__in HSTRING deviceInstancePath,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode monitoringMode,
        /* [in] */__RPC__in HSTRING deviceFriendlyName,
        /* [in] */__RPC__in HSTRING deviceModelNumber,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * deviceConfigurationData,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UnregisterDevicePresenceMonitoringAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsDevicePresenceMonitoringSupported )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_RegisterDevicePresenceMonitoringAsync(This,deviceId,deviceInstancePath,monitoringMode,operation) \
    ( (This)->lpVtbl->RegisterDevicePresenceMonitoringAsync(This,deviceId,deviceInstancePath,monitoringMode,operation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_RegisterDevicePresenceMonitoringWithNewDeviceAsync(This,deviceId,deviceInstancePath,monitoringMode,deviceFriendlyName,deviceModelNumber,deviceConfigurationData,operation) \
    ( (This)->lpVtbl->RegisterDevicePresenceMonitoringWithNewDeviceAsync(This,deviceId,deviceInstancePath,monitoringMode,deviceFriendlyName,deviceModelNumber,deviceConfigurationData,operation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_UnregisterDevicePresenceMonitoringAsync(This,deviceId,result) \
    ( (This)->lpVtbl->UnregisterDevicePresenceMonitoringAsync(This,deviceId,result) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_IsDevicePresenceMonitoringSupported(This,value) \
    ( (This)->lpVtbl->IsDevicePresenceMonitoringSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo";
/* [object, uuid("1E2BA861-8533-4FCE-839B-ECB72410AC14"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * deviceId
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceFriendlyName )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceModelNumber )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceConfigurationData )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_get_DeviceId(This,deviceId) \
    ( (This)->lpVtbl->get_DeviceId(This,deviceId) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_get_DeviceFriendlyName(This,value) \
    ( (This)->lpVtbl->get_DeviceFriendlyName(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_get_DeviceModelNumber(This,value) \
    ( (This)->lpVtbl->get_DeviceModelNumber(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_get_DeviceConfigurationData(This,value) \
    ( (This)->lpVtbl->get_DeviceConfigurationData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo2";
/* [object, uuid("14D981A3-FC26-4FF7-ABC3-48E82A512A0A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PresenceMonitoringMode )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateDevicePresenceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresence presenceState,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAuthenticationSupported )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_get_PresenceMonitoringMode(This,value) \
    ( (This)->lpVtbl->get_PresenceMonitoringMode(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_UpdateDevicePresenceAsync(This,presenceState,result) \
    ( (This)->lpVtbl->UpdateDevicePresenceAsync(This,presenceState,result) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_get_IsAuthenticationSupported(This,value) \
    ( (This)->lpVtbl->get_IsAuthenticationSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistration[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistration";
/* [object, uuid("9F4CBBB4-8CBA-48B0-840D-DBB22A54C678"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FinishRegisteringDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * deviceConfigurationData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AbortRegisteringDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
        /* [in] */__RPC__in HSTRING errorLogMessage,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_FinishRegisteringDeviceAsync(This,deviceConfigurationData,result) \
    ( (This)->lpVtbl->FinishRegisteringDeviceAsync(This,deviceConfigurationData,result) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_AbortRegisteringDeviceAsync(This,errorLogMessage,result) \
    ( (This)->lpVtbl->AbortRegisteringDeviceAsync(This,errorLogMessage,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationResult[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationResult";
/* [object, uuid("A4FE35F0-ADE3-4981-AF6B-EC195921682A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorRegistrationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Registration )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResultVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_get_Registration(This,value) \
    ( (This)->lpVtbl->get_Registration(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationStatics";
/* [object, uuid("1ADF0F65-E3B7-4155-997F-B756EF65BEBA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStartRegisteringDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceCapabilities capabilities,
        /* [in] */__RPC__in HSTRING deviceFriendlyName,
        /* [in] */__RPC__in HSTRING deviceModelNumber,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * deviceKey,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * mutualAuthenticationKey,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllRegisteredDeviceInfoAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceFindScope queryType,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * * deviceInfoList
        );
    HRESULT ( STDMETHODCALLTYPE *UnregisterDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateDeviceConfigurationDataAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * deviceConfigurationData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_RequestStartRegisteringDeviceAsync(This,deviceId,capabilities,deviceFriendlyName,deviceModelNumber,deviceKey,mutualAuthenticationKey,operation) \
    ( (This)->lpVtbl->RequestStartRegisteringDeviceAsync(This,deviceId,capabilities,deviceFriendlyName,deviceModelNumber,deviceKey,mutualAuthenticationKey,operation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_FindAllRegisteredDeviceInfoAsync(This,queryType,deviceInfoList) \
    ( (This)->lpVtbl->FindAllRegisteredDeviceInfoAsync(This,queryType,deviceInfoList) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_UnregisterDeviceAsync(This,deviceId,result) \
    ( (This)->lpVtbl->UnregisterDeviceAsync(This,deviceId,result) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_UpdateDeviceConfigurationDataAsync(This,deviceId,deviceConfigurationData,result) \
    ( (This)->lpVtbl->UpdateDeviceConfigurationDataAsync(This,deviceId,deviceConfigurationData,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthentication
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthentication ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthentication_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthentication_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthentication[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthentication";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationResult_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationResult[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageInfo[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo ** Default Interface **
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorInfo[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistration ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistration_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistration[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistrationResult_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistrationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistrationResult[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationResult";
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
#endif // __windows2Esecurity2Eauthentication2Eidentity2Eprovider_p_h__

#endif // __windows2Esecurity2Eauthentication2Eidentity2Eprovider_h__
