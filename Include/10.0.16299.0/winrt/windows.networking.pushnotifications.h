/* Header file automatically generated from windows.networking.pushnotifications.idl */
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
#ifndef __windows2Enetworking2Epushnotifications_h__
#define __windows2Enetworking2Epushnotifications_h__
#ifndef __windows2Enetworking2Epushnotifications_p_h__
#define __windows2Enetworking2Epushnotifications_p_h__


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
#include "Windows.System.h"
#include "Windows.UI.Notifications.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                interface IPushNotificationChannel;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel ABI::Windows::Networking::PushNotifications::IPushNotificationChannel

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                interface IPushNotificationChannelManagerForUser;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser ABI::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                interface IPushNotificationChannelManagerForUser2;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 ABI::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                interface IPushNotificationChannelManagerStatics;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics ABI::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                interface IPushNotificationChannelManagerStatics2;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 ABI::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                interface IPushNotificationChannelManagerStatics3;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 ABI::Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                interface IPushNotificationReceivedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs ABI::Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                interface IRawNotification;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification ABI::Windows::Networking::PushNotifications::IRawNotification

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                interface IRawNotification2;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 ABI::Windows::Networking::PushNotifications::IRawNotification2

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                class PushNotificationChannel;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cf7c902f-0f0d-5b22-90b1-85141b5816cd"))
IAsyncOperationCompletedHandler<ABI::Windows::Networking::PushNotifications::PushNotificationChannel*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::PushNotifications::PushNotificationChannel*, ABI::Windows::Networking::PushNotifications::IPushNotificationChannel*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.PushNotifications.PushNotificationChannel>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Networking::PushNotifications::PushNotificationChannel*> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::PushNotifications::IPushNotificationChannel*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::PushNotifications::IPushNotificationChannel*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("70945a09-331a-5e40-b854-66b7a3233bab"))
IAsyncOperation<ABI::Windows::Networking::PushNotifications::PushNotificationChannel*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::PushNotifications::PushNotificationChannel*, ABI::Windows::Networking::PushNotifications::IPushNotificationChannel*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.PushNotifications.PushNotificationChannel>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Networking::PushNotifications::PushNotificationChannel*> __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::PushNotifications::IPushNotificationChannel*>
//#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::PushNotifications::IPushNotificationChannel*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                class PushNotificationReceivedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("55fa217d-1fc3-5863-b980-7094d4379694"))
ITypedEventHandler<ABI::Windows::Networking::PushNotifications::PushNotificationChannel*,ABI::Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::PushNotifications::PushNotificationChannel*, ABI::Windows::Networking::PushNotifications::IPushNotificationChannel*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs*, ABI::Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.PushNotifications.PushNotificationChannel, Windows.Networking.PushNotifications.PushNotificationReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::PushNotifications::PushNotificationChannel*,ABI::Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs*> __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::PushNotifications::IPushNotificationChannel*,ABI::Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::PushNotifications::IPushNotificationChannel*,ABI::Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_USE */


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
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




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
            namespace Notifications {
                class BadgeNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                interface IBadgeNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */
#define __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification ABI::Windows::UI::Notifications::IBadgeNotification

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                class TileNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                interface ITileNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */
#define __x_ABI_CWindows_CUI_CNotifications_CITileNotification ABI::Windows::UI::Notifications::ITileNotification

#endif // ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                class ToastNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                interface IToastNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */
#define __x_ABI_CWindows_CUI_CNotifications_CIToastNotification ABI::Windows::UI::Notifications::IToastNotification

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                
                typedef enum PushNotificationType : int PushNotificationType;
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */












namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                class PushNotificationChannelManagerForUser;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                class RawNotification;
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */










/*
 *
 * Struct Windows.Networking.PushNotifications.PushNotificationType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                /* [v1_enum, contract] */
                enum PushNotificationType : int
                {
                    PushNotificationType_Toast = 0,
                    PushNotificationType_Tile = 1,
                    PushNotificationType_Badge = 2,
                    PushNotificationType_Raw = 3,
                    PushNotificationType_TileFlyout = 4,
                };
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannel[] = L"Windows.Networking.PushNotifications.IPushNotificationChannel";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                /* [object, uuid("2B28102E-EF0B-4F39-9B8A-A3C194DE7081"), exclusiveto, contract] */
                MIDL_INTERFACE("2B28102E-EF0B-4F39-9B8A-A3C194DE7081")
                IPushNotificationChannel : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpirationTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Close(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PushNotificationReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PushNotificationReceived(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPushNotificationChannel=_uuidof(IPushNotificationChannel);
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannelManagerForUser
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                /* [object, uuid("A4C45704-1182-42C7-8890-F563C4890DC4"), exclusiveto, contract] */
                MIDL_INTERFACE("A4C45704-1182-42C7-8890-F563C4890DC4")
                IPushNotificationChannelManagerForUser : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreatePushNotificationChannelForApplicationAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreatePushNotificationChannelForApplicationAsyncWithId(
                        /* [in] */__RPC__in HSTRING applicationId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreatePushNotificationChannelForSecondaryTileAsync(
                        /* [in] */__RPC__in HSTRING tileId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPushNotificationChannelManagerForUser=_uuidof(IPushNotificationChannelManagerForUser);
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannelManagerForUser
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser2[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                /* [object, uuid("C38B066A-7CC1-4DAC-87FD-BE6E920414A4"), exclusiveto, contract] */
                MIDL_INTERFACE("C38B066A-7CC1-4DAC-87FD-BE6E920414A4")
                IPushNotificationChannelManagerForUser2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * appServerKey,
                        /* [in] */__RPC__in HSTRING channelId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * appServerKey,
                        /* [in] */__RPC__in HSTRING channelId,
                        /* [in] */__RPC__in HSTRING appId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPushNotificationChannelManagerForUser2=_uuidof(IPushNotificationChannelManagerForUser2);
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannelManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                /* [object, uuid("8BAF9B65-77A1-4588-BD19-861529A9DCF0"), exclusiveto, contract] */
                MIDL_INTERFACE("8BAF9B65-77A1-4588-BD19-861529A9DCF0")
                IPushNotificationChannelManagerStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreatePushNotificationChannelForApplicationAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreatePushNotificationChannelForApplicationAsyncWithId(
                        /* [in] */__RPC__in HSTRING applicationId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreatePushNotificationChannelForSecondaryTileAsync(
                        /* [in] */__RPC__in HSTRING tileId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPushNotificationChannelManagerStatics=_uuidof(IPushNotificationChannelManagerStatics);
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannelManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics2[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                /* [object, uuid("B444A65D-A7E9-4B28-950E-F375A907F9DF"), exclusiveto, contract] */
                MIDL_INTERFACE("B444A65D-A7E9-4B28-950E-F375A907F9DF")
                IPushNotificationChannelManagerStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForUser(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPushNotificationChannelManagerStatics2=_uuidof(IPushNotificationChannelManagerStatics2);
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannelManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics3[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                /* [object, uuid("4701FEFE-0EDE-4A3F-AE78-BFA471496925"), exclusiveto, contract] */
                MIDL_INTERFACE("4701FEFE-0EDE-4A3F-AE78-BFA471496925")
                IPushNotificationChannelManagerStatics3 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPushNotificationChannelManagerStatics3=_uuidof(IPushNotificationChannelManagerStatics3);
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs[] = L"Windows.Networking.PushNotifications.IPushNotificationReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                /* [object, uuid("D1065E0C-36CD-484C-B935-0A99B753CF00"), exclusiveto, contract] */
                MIDL_INTERFACE("D1065E0C-36CD-484C-B935-0A99B753CF00")
                IPushNotificationReceivedEventArgs : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Cancel(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cancel(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NotificationType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::PushNotifications::PushNotificationType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ToastNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::IToastNotification * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TileNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::ITileNotification * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BadgeNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::IBadgeNotification * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::PushNotifications::IRawNotification * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPushNotificationReceivedEventArgs=_uuidof(IPushNotificationReceivedEventArgs);
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.PushNotifications.IRawNotification
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.RawNotification
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IRawNotification[] = L"Windows.Networking.PushNotifications.IRawNotification";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                /* [object, uuid("1A227281-3B79-42AC-9963-22AB00D4F0B7"), exclusiveto, contract] */
                MIDL_INTERFACE("1A227281-3B79-42AC-9963-22AB00D4F0B7")
                IRawNotification : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRawNotification=_uuidof(IRawNotification);
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.PushNotifications.IRawNotification2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.RawNotification
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IRawNotification2[] = L"Windows.Networking.PushNotifications.IRawNotification2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace PushNotifications {
                /* [object, uuid("E6D0CF19-0C6F-4CDD-9424-EEC5BE014D26"), exclusiveto, contract] */
                MIDL_INTERFACE("E6D0CF19-0C6F-4CDD-9424-EEC5BE014D26")
                IRawNotification2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Headers(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChannelId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRawNotification2=_uuidof(IRawNotification2);
                
            } /* Windows */
        } /* Networking */
    } /* PushNotifications */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Networking.PushNotifications.PushNotificationChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.PushNotifications.IPushNotificationChannel ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannel_DEFINED
#define RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationChannel[] = L"Windows.Networking.PushNotifications.PushNotificationChannel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.PushNotifications.PushNotificationChannelManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannelManager_DEFINED
#define RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannelManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationChannelManager[] = L"Windows.Networking.PushNotifications.PushNotificationChannelManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.PushNotifications.PushNotificationChannelManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser ** Default Interface **
 *    Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannelManagerForUser_DEFINED
#define RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannelManagerForUser_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationChannelManagerForUser[] = L"Windows.Networking.PushNotifications.PushNotificationChannelManagerForUser";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Networking.PushNotifications.PushNotificationReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.PushNotifications.IPushNotificationReceivedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationReceivedEventArgs[] = L"Windows.Networking.PushNotifications.PushNotificationReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.PushNotifications.RawNotification
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.PushNotifications.IRawNotification ** Default Interface **
 *    Windows.Networking.PushNotifications.IRawNotification2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_PushNotifications_RawNotification_DEFINED
#define RUNTIMECLASS_Windows_Networking_PushNotifications_RawNotification_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_RawNotification[] = L"Windows.Networking.PushNotifications.RawNotification";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel;

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser;

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2;

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics;

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2;

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3;

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs;

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification;

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2;

#endif // ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs_INTERFACE_DEFINED__

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




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification;

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileNotification __x_ABI_CWindows_CUI_CNotifications_CITileNotification;

#endif // ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification __x_ABI_CWindows_CUI_CNotifications_CIToastNotification;

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CNetworking_CPushNotifications_CPushNotificationType __x_ABI_CWindows_CNetworking_CPushNotifications_CPushNotificationType;























/*
 *
 * Struct Windows.Networking.PushNotifications.PushNotificationType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CPushNotifications_CPushNotificationType
{
    PushNotificationType_Toast = 0,
    PushNotificationType_Tile = 1,
    PushNotificationType_Badge = 2,
    PushNotificationType_Raw = 3,
    PushNotificationType_TileFlyout = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannel[] = L"Windows.Networking.PushNotifications.IPushNotificationChannel";
/* [object, uuid("2B28102E-EF0B-4F39-9B8A-A3C194DE7081"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PushNotificationReceived )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CPushNotifications__CPushNotificationChannel_Windows__CNetworking__CPushNotifications__CPushNotificationReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PushNotificationReceived )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelVtbl;

interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_get_ExpirationTime(This,value) \
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_Close(This) \
    ( (This)->lpVtbl->Close(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_add_PushNotificationReceived(This,handler,token) \
    ( (This)->lpVtbl->add_PushNotificationReceived(This,handler,token) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_remove_PushNotificationReceived(This,token) \
    ( (This)->lpVtbl->remove_PushNotificationReceived(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannelManagerForUser
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser";
/* [object, uuid("A4C45704-1182-42C7-8890-F563C4890DC4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForApplicationAsync )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForApplicationAsyncWithId )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
        /* [in] */__RPC__in HSTRING applicationId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForSecondaryTileAsync )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
        /* [in] */__RPC__in HSTRING tileId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUserVtbl;

interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUserVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_CreatePushNotificationChannelForApplicationAsync(This,operation) \
    ( (This)->lpVtbl->CreatePushNotificationChannelForApplicationAsync(This,operation) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_CreatePushNotificationChannelForApplicationAsyncWithId(This,applicationId,operation) \
    ( (This)->lpVtbl->CreatePushNotificationChannelForApplicationAsyncWithId(This,applicationId,operation) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_CreatePushNotificationChannelForSecondaryTileAsync(This,tileId,operation) \
    ( (This)->lpVtbl->CreatePushNotificationChannelForSecondaryTileAsync(This,tileId,operation) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannelManagerForUser
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser2[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser2";
/* [object, uuid("C38B066A-7CC1-4DAC-87FD-BE6E920414A4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * appServerKey,
        /* [in] */__RPC__in HSTRING channelId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * appServerKey,
        /* [in] */__RPC__in HSTRING channelId,
        /* [in] */__RPC__in HSTRING appId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2Vtbl;

interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(This,appServerKey,channelId,operation) \
    ( (This)->lpVtbl->CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(This,appServerKey,channelId,operation) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId(This,appServerKey,channelId,appId,operation) \
    ( (This)->lpVtbl->CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId(This,appServerKey,channelId,appId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannelManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics";
/* [object, uuid("8BAF9B65-77A1-4588-BD19-861529A9DCF0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForApplicationAsync )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForApplicationAsyncWithId )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
        /* [in] */__RPC__in HSTRING applicationId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePushNotificationChannelForSecondaryTileAsync )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics * This,
        /* [in] */__RPC__in HSTRING tileId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CPushNotifications__CPushNotificationChannel * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_CreatePushNotificationChannelForApplicationAsync(This,operation) \
    ( (This)->lpVtbl->CreatePushNotificationChannelForApplicationAsync(This,operation) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_CreatePushNotificationChannelForApplicationAsyncWithId(This,applicationId,operation) \
    ( (This)->lpVtbl->CreatePushNotificationChannelForApplicationAsyncWithId(This,applicationId,operation) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_CreatePushNotificationChannelForSecondaryTileAsync(This,tileId,operation) \
    ( (This)->lpVtbl->CreatePushNotificationChannelForSecondaryTileAsync(This,tileId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannelManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics2[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics2";
/* [object, uuid("B444A65D-A7E9-4B28-950E-F375A907F9DF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2Vtbl;

interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_GetForUser(This,user,result) \
    ( (This)->lpVtbl->GetForUser(This,user,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationChannelManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics3[] = L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics3";
/* [object, uuid("4701FEFE-0EDE-4A3F-AE78-BFA471496925"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerForUser * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3Vtbl;

interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_GetDefault(This,value) \
    ( (This)->lpVtbl->GetDefault(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationChannelManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Networking.PushNotifications.IPushNotificationReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.PushNotificationReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs[] = L"Windows.Networking.PushNotifications.IPushNotificationReceivedEventArgs";
/* [object, uuid("D1065E0C-36CD-484C-B935-0A99B753CF00"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NotificationType )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CPushNotifications_CPushNotificationType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ToastNotification )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TileNotification )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BadgeNotification )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawNotification )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_put_Cancel(This,value) \
    ( (This)->lpVtbl->put_Cancel(This,value) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_get_Cancel(This,value) \
    ( (This)->lpVtbl->get_Cancel(This,value) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_get_NotificationType(This,value) \
    ( (This)->lpVtbl->get_NotificationType(This,value) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_get_ToastNotification(This,value) \
    ( (This)->lpVtbl->get_ToastNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_get_TileNotification(This,value) \
    ( (This)->lpVtbl->get_TileNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_get_BadgeNotification(This,value) \
    ( (This)->lpVtbl->get_BadgeNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_get_RawNotification(This,value) \
    ( (This)->lpVtbl->get_RawNotification(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIPushNotificationReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.PushNotifications.IRawNotification
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.RawNotification
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IRawNotification[] = L"Windows.Networking.PushNotifications.IRawNotification";
/* [object, uuid("1A227281-3B79-42AC-9963-22AB00D4F0B7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotificationVtbl;

interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotificationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.PushNotifications.IRawNotification2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.PushNotifications.RawNotification
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_PushNotifications_IRawNotification2[] = L"Windows.Networking.PushNotifications.IRawNotification2";
/* [object, uuid("E6D0CF19-0C6F-4CDD-9424-EEC5BE014D26"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChannelId )(
        __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2Vtbl;

interface __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_get_Headers(This,value) \
    ( (This)->lpVtbl->get_Headers(This,value) )

#define __x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_get_ChannelId(This,value) \
    ( (This)->lpVtbl->get_ChannelId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CPushNotifications_CIRawNotification2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Networking.PushNotifications.PushNotificationChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.PushNotifications.IPushNotificationChannel ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannel_DEFINED
#define RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationChannel[] = L"Windows.Networking.PushNotifications.PushNotificationChannel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.PushNotifications.PushNotificationChannelManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannelManager_DEFINED
#define RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannelManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationChannelManager[] = L"Windows.Networking.PushNotifications.PushNotificationChannelManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.PushNotifications.PushNotificationChannelManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser ** Default Interface **
 *    Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannelManagerForUser_DEFINED
#define RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationChannelManagerForUser_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationChannelManagerForUser[] = L"Windows.Networking.PushNotifications.PushNotificationChannelManagerForUser";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Networking.PushNotifications.PushNotificationReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.PushNotifications.IPushNotificationReceivedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_PushNotifications_PushNotificationReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_PushNotificationReceivedEventArgs[] = L"Windows.Networking.PushNotifications.PushNotificationReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.PushNotifications.RawNotification
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.PushNotifications.IRawNotification ** Default Interface **
 *    Windows.Networking.PushNotifications.IRawNotification2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_PushNotifications_RawNotification_DEFINED
#define RUNTIMECLASS_Windows_Networking_PushNotifications_RawNotification_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_PushNotifications_RawNotification[] = L"Windows.Networking.PushNotifications.RawNotification";
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
#endif // __windows2Enetworking2Epushnotifications_p_h__

#endif // __windows2Enetworking2Epushnotifications_h__
