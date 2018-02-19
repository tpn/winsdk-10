/* Header file automatically generated from windows.ui.notifications.management.idl */
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
#ifndef __windows2Eui2Enotifications2Emanagement_h__
#define __windows2Eui2Enotifications2Emanagement_h__
#ifndef __windows2Eui2Enotifications2Emanagement_p_h__
#define __windows2Eui2Enotifications2Emanagement_p_h__


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
#include "Windows.UI.Notifications.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    interface IUserNotificationListener;
                } /* Windows */
            } /* UI */
        } /* Notifications */
    } /* Management */} /* ABI */
#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener ABI::Windows::UI::Notifications::Management::IUserNotificationListener

#endif // ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    interface IUserNotificationListenerStatics;
                } /* Windows */
            } /* UI */
        } /* Notifications */
    } /* Management */} /* ABI */
#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics ABI::Windows::UI::Notifications::Management::IUserNotificationListenerStatics

#endif // ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    enum UserNotificationListenerAccessStatus : int;
                } /* Windows */
            } /* UI */
        } /* Notifications */
    } /* Management */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f09e843a-13cb-559b-a9fc-015722c2cd57"))
IAsyncOperationCompletedHandler<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.UI.Notifications.Management.UserNotificationListenerAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0fbad8c7-086f-5bf9-81e2-8d79e7184803"))
IAsyncOperation<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> : IAsyncOperation_impl<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.UI.Notifications.Management.UserNotificationListenerAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_t;
#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus>
//#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    class UserNotificationListener;
                } /* Windows */
            } /* UI */
        } /* Notifications */
    } /* Management */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                class UserNotificationChangedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                interface IUserNotificationChangedEventArgs;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */
#define __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs ABI::Windows::UI::Notifications::IUserNotificationChangedEventArgs

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("10242902-b897-5507-9922-2c0a7d34464d"))
ITypedEventHandler<ABI::Windows::UI::Notifications::Management::UserNotificationListener*,ABI::Windows::UI::Notifications::UserNotificationChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::Management::UserNotificationListener*, ABI::Windows::UI::Notifications::Management::IUserNotificationListener*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::UserNotificationChangedEventArgs*, ABI::Windows::UI::Notifications::IUserNotificationChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Notifications.Management.UserNotificationListener, Windows.UI.Notifications.UserNotificationChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Notifications::Management::UserNotificationListener*,ABI::Windows::UI::Notifications::UserNotificationChangedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Notifications::Management::IUserNotificationListener*,ABI::Windows::UI::Notifications::IUserNotificationChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Notifications::Management::IUserNotificationListener*,ABI::Windows::UI::Notifications::IUserNotificationChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                class UserNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIUserNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIUserNotification_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                interface IUserNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */
#define __x_ABI_CWindows_CUI_CNotifications_CIUserNotification ABI::Windows::UI::Notifications::IUserNotification

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIUserNotification_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CUI__CNotifications__CUserNotification_USE
#define DEF___FIIterator_1_Windows__CUI__CNotifications__CUserNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6ee1200d-dd13-5050-88cb-5352af113fd1"))
IIterator<ABI::Windows::UI::Notifications::UserNotification*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::UserNotification*, ABI::Windows::UI::Notifications::IUserNotification*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Notifications.UserNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Notifications::UserNotification*> __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_t;
#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CNotifications__CUserNotification_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Notifications::IUserNotification*>
//#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Notifications::IUserNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CNotifications__CUserNotification_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CUI__CNotifications__CUserNotification_USE
#define DEF___FIIterable_1_Windows__CUI__CNotifications__CUserNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("18170480-1bd8-5cd0-bb32-67e71d5b4d7c"))
IIterable<ABI::Windows::UI::Notifications::UserNotification*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::UserNotification*, ABI::Windows::UI::Notifications::IUserNotification*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Notifications.UserNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Notifications::UserNotification*> __FIIterable_1_Windows__CUI__CNotifications__CUserNotification_t;
#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CNotifications__CUserNotification_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Notifications::IUserNotification*>
//#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Notifications::IUserNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CNotifications__CUserNotification_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#define DEF___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5a08f98c-8e45-5705-af54-f5418e598392"))
IVectorView<ABI::Windows::UI::Notifications::UserNotification*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::UserNotification*, ABI::Windows::UI::Notifications::IUserNotification*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Notifications.UserNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Notifications::UserNotification*> __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t;
#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Notifications::IUserNotification*>
//#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Notifications::IUserNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9e42ed08-45b3-5643-b5c7-b216f5781594"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.UI.Notifications.UserNotification>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Notifications::IUserNotification*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Notifications::IUserNotification*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bf7f3d3c-230f-54ea-ad74-0cf6c55cd8d1"))
IAsyncOperation<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.UI.Notifications.UserNotification>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Notifications::IUserNotification*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Notifications::IUserNotification*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                
                typedef enum NotificationKinds : unsigned int NotificationKinds;
                
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    
                    typedef enum UserNotificationListenerAccessStatus : int UserNotificationListenerAccessStatus;
                    
                } /* Windows */
            } /* UI */
        } /* Notifications */
    } /* Management */} /* ABI */














/*
 *
 * Struct Windows.UI.Notifications.Management.UserNotificationListenerAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    /* [v1_enum, contract] */
                    enum UserNotificationListenerAccessStatus : int
                    {
                        UserNotificationListenerAccessStatus_Unspecified = 0,
                        UserNotificationListenerAccessStatus_Allowed = 1,
                        UserNotificationListenerAccessStatus_Denied = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Notifications */
    } /* Management */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Notifications.Management.IUserNotificationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Notifications.Management.UserNotificationListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_Management_IUserNotificationListener[] = L"Windows.UI.Notifications.Management.IUserNotificationListener";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    /* [object, uuid("62553E41-8A06-4CEF-8215-6033A5BE4B03"), exclusiveto, contract] */
                    MIDL_INTERFACE("62553E41-8A06-4CEF-8215-6033A5BE4B03")
                    IUserNotificationListener : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAccessStatus(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus * accessStatus
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NotificationChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NotificationChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetNotificationsAsync(
                            /* [in] */ABI::Windows::UI::Notifications::NotificationKinds kinds,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetNotification(
                            /* [in] */UINT32 notificationId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::IUserNotification * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ClearNotifications(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveNotification(
                            /* [in] */UINT32 notificationId
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserNotificationListener=_uuidof(IUserNotificationListener);
                    
                } /* Windows */
            } /* UI */
        } /* Notifications */
    } /* Management */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener;
#endif /* !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Notifications.Management.IUserNotificationListenerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Notifications.Management.UserNotificationListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_Management_IUserNotificationListenerStatics[] = L"Windows.UI.Notifications.Management.IUserNotificationListenerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    /* [object, uuid("FF6123CF-4386-4AA3-B73D-B804E5B63B23"), exclusiveto, contract] */
                    MIDL_INTERFACE("FF6123CF-4386-4AA3-B73D-B804E5B63B23")
                    IUserNotificationListenerStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Current(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::Management::IUserNotificationListener * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserNotificationListenerStatics=_uuidof(IUserNotificationListenerStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Notifications */
    } /* Management */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Notifications.Management.UserNotificationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Notifications.Management.IUserNotificationListenerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Notifications.Management.IUserNotificationListener ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Notifications_Management_UserNotificationListener_DEFINED
#define RUNTIMECLASS_Windows_UI_Notifications_Management_UserNotificationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_Management_UserNotificationListener[] = L"Windows.UI.Notifications.Management.UserNotificationListener";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener;

#endif // ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics;

#endif // ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;

typedef struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl;

interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIUserNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIUserNotification_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIUserNotification __x_ABI_CWindows_CUI_CNotifications_CIUserNotification;

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIUserNotification_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CNotifications__CUserNotification __FIIterator_1_Windows__CUI__CNotifications__CUserNotification;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CNotifications__CUserNotification;

typedef struct __FIIterator_1_Windows__CUI__CNotifications__CUserNotificationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CUserNotification * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CNotifications__CUserNotificationVtbl;

interface __FIIterator_1_Windows__CUI__CNotifications__CUserNotification
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CNotifications__CUserNotificationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CNotifications__CUserNotification __FIIterable_1_Windows__CUI__CNotifications__CUserNotification;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CNotifications__CUserNotification;

typedef  struct __FIIterable_1_Windows__CUI__CNotifications__CUserNotificationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CUserNotification * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CNotifications__CUserNotification **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CNotifications__CUserNotificationVtbl;

interface __FIIterable_1_Windows__CUI__CNotifications__CUserNotification
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CNotifications__CUserNotificationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;

typedef struct __FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
            /* [in] */ __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl;

interface __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotificationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000






typedef enum __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds;







typedef enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus;














/*
 *
 * Struct Windows.UI.Notifications.Management.UserNotificationListenerAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus
{
    UserNotificationListenerAccessStatus_Unspecified = 0,
    UserNotificationListenerAccessStatus_Allowed = 1,
    UserNotificationListenerAccessStatus_Denied = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Notifications.Management.IUserNotificationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Notifications.Management.UserNotificationListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_Management_IUserNotificationListener[] = L"Windows.UI.Notifications.Management.IUserNotificationListener";
/* [object, uuid("62553E41-8A06-4CEF-8215-6033A5BE4B03"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccessStatus )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus * accessStatus
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NotificationChanged )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NotificationChanged )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetNotificationsAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
        /* [in] */__x_ABI_CWindows_CUI_CNotifications_CNotificationKinds kinds,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
        /* [in] */UINT32 notificationId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ClearNotifications )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
        /* [in] */UINT32 notificationId
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerVtbl;

interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_RequestAccessAsync(This,result) \
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetAccessStatus(This,accessStatus) \
    ( (This)->lpVtbl->GetAccessStatus(This,accessStatus) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_add_NotificationChanged(This,handler,token) \
    ( (This)->lpVtbl->add_NotificationChanged(This,handler,token) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_remove_NotificationChanged(This,token) \
    ( (This)->lpVtbl->remove_NotificationChanged(This,token) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetNotificationsAsync(This,kinds,result) \
    ( (This)->lpVtbl->GetNotificationsAsync(This,kinds,result) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetNotification(This,notificationId,result) \
    ( (This)->lpVtbl->GetNotification(This,notificationId,result) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_ClearNotifications(This) \
    ( (This)->lpVtbl->ClearNotifications(This) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_RemoveNotification(This,notificationId) \
    ( (This)->lpVtbl->RemoveNotification(This,notificationId) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener;
#endif /* !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Notifications.Management.IUserNotificationListenerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Notifications.Management.UserNotificationListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_Management_IUserNotificationListenerStatics[] = L"Windows.UI.Notifications.Management.IUserNotificationListenerStatics";
/* [object, uuid("FF6123CF-4386-4AA3-B73D-B804E5B63B23"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_get_Current(This,result) \
    ( (This)->lpVtbl->get_Current(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Notifications.Management.UserNotificationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Notifications.Management.IUserNotificationListenerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Notifications.Management.IUserNotificationListener ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Notifications_Management_UserNotificationListener_DEFINED
#define RUNTIMECLASS_Windows_UI_Notifications_Management_UserNotificationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_Management_UserNotificationListener[] = L"Windows.UI.Notifications.Management.UserNotificationListener";
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
#endif // __windows2Eui2Enotifications2Emanagement_p_h__

#endif // __windows2Eui2Enotifications2Emanagement_h__
