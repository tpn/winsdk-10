/* Header file automatically generated from windows.applicationmodel.lockscreen.idl */
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
#ifndef __windows2Eapplicationmodel2Elockscreen_h__
#define __windows2Eapplicationmodel2Elockscreen_h__
#ifndef __windows2Eapplicationmodel2Elockscreen_p_h__
#define __windows2Eapplicationmodel2Elockscreen_p_h__


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
#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                interface ILockApplicationHost;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost ABI::Windows::ApplicationModel::LockScreen::ILockApplicationHost

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                interface ILockApplicationHostStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics ABI::Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                interface ILockScreenBadge;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge ABI::Windows::ApplicationModel::LockScreen::ILockScreenBadge

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                interface ILockScreenInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo ABI::Windows::ApplicationModel::LockScreen::ILockScreenInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                interface ILockScreenUnlockingDeferral;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral ABI::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                interface ILockScreenUnlockingEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs ABI::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                class LockScreenBadge;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8d38f924-154d-5705-8f0b-ed61353f6ce2"))
IIterator<ABI::Windows::ApplicationModel::LockScreen::LockScreenBadge*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::LockScreen::LockScreenBadge*, ABI::Windows::ApplicationModel::LockScreen::ILockScreenBadge*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.LockScreen.LockScreenBadge>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::LockScreen::LockScreenBadge*> __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_t;
#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::LockScreen::ILockScreenBadge*>
//#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::LockScreen::ILockScreenBadge*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6e82dedc-b74e-503a-b00b-9c6f47f12a0f"))
IIterable<ABI::Windows::ApplicationModel::LockScreen::LockScreenBadge*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::LockScreen::LockScreenBadge*, ABI::Windows::ApplicationModel::LockScreen::ILockScreenBadge*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.LockScreen.LockScreenBadge>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::LockScreen::LockScreenBadge*> __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_t;
#define __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::LockScreen::ILockScreenBadge*>
//#define __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::LockScreen::ILockScreenBadge*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a0734995-94c2-50c2-88a2-d070fcd1d338"))
IVectorView<ABI::Windows::ApplicationModel::LockScreen::LockScreenBadge*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::LockScreen::LockScreenBadge*, ABI::Windows::ApplicationModel::LockScreen::ILockScreenBadge*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.LockScreen.LockScreenBadge>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::LockScreen::LockScreenBadge*> __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_t;
#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::LockScreen::ILockScreenBadge*>
//#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::LockScreen::ILockScreenBadge*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                class LockApplicationHost;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                class LockScreenUnlockingEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("002e5776-8a5b-5b93-8c6c-9c4c8788f5b4"))
ITypedEventHandler<ABI::Windows::ApplicationModel::LockScreen::LockApplicationHost*,ABI::Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::LockScreen::LockApplicationHost*, ABI::Windows::ApplicationModel::LockScreen::ILockApplicationHost*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs*, ABI::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.LockScreen.LockApplicationHost, Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::LockScreen::LockApplicationHost*,ABI::Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::LockScreen::ILockApplicationHost*,ABI::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::LockScreen::ILockApplicationHost*,ABI::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                class LockScreenInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8be9e6a3-f88a-5429-8da3-676b7d4f1a5b"))
ITypedEventHandler<ABI::Windows::ApplicationModel::LockScreen::LockScreenInfo*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::LockScreen::LockScreenInfo*, ABI::Windows::ApplicationModel::LockScreen::ILockScreenInfo*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.LockScreen.LockScreenInfo, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::LockScreen::LockScreenInfo*,IInspectable*> __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::LockScreen::ILockScreenInfo*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::LockScreen::ILockScreenInfo*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIReference_1_UINT32_USE
#define DEF___FIReference_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3"))
IReference<UINT32> : IReference_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT32> __FIReference_1_UINT32_t;
#define __FIReference_1_UINT32 ABI::Windows::Foundation::__FIReference_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT32 ABI::Windows::Foundation::IReference<UINT32>
//#define __FIReference_1_UINT32_t ABI::Windows::Foundation::IReference<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT32_USE */




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





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




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
        namespace ApplicationModel {
            namespace LockScreen {
                class LockScreenUnlockingDeferral;
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */











/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockApplicationHost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockApplicationHost
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockApplicationHost[] = L"Windows.ApplicationModel.LockScreen.ILockApplicationHost";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                /* [object, uuid("38EE31AD-D94F-4E7C-81FA-4F4436506281"), exclusiveto, contract] */
                MIDL_INTERFACE("38EE31AD-D94F-4E7C-81FA-4F4436506281")
                ILockApplicationHost : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RequestUnlock(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Unlocking(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Unlocking(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILockApplicationHost=_uuidof(ILockApplicationHost);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockApplicationHostStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockApplicationHost
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockApplicationHostStatics[] = L"Windows.ApplicationModel.LockScreen.ILockApplicationHostStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                /* [object, uuid("F48FAB8E-23D7-4E63-96A1-666FF52D3B2C"), exclusiveto, contract] */
                MIDL_INTERFACE("F48FAB8E-23D7-4E63-96A1-666FF52D3B2C")
                ILockApplicationHostStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::LockScreen::ILockApplicationHost * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILockApplicationHostStatics=_uuidof(ILockApplicationHostStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockScreenBadge
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockScreenBadge
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenBadge[] = L"Windows.ApplicationModel.LockScreen.ILockScreenBadge";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                /* [object, uuid("E95105D9-2BFF-4DB0-9B4F-3824778B9C9A"), exclusiveto, contract] */
                MIDL_INTERFACE("E95105D9-2BFF-4DB0-9B4F-3824778B9C9A")
                ILockScreenBadge : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStream * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Glyph(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStream * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Number(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomationName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LaunchApp(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILockScreenBadge=_uuidof(ILockScreenBadge);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockScreenInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockScreenInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenInfo[] = L"Windows.ApplicationModel.LockScreen.ILockScreenInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                /* [object, uuid("F59AA65C-9711-4DC9-A630-95B6CB8CDAD0"), exclusiveto, contract] */
                MIDL_INTERFACE("F59AA65C-9711-4DC9-A630-95B6CB8CDAD0")
                ILockScreenInfo : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LockScreenImageChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LockScreenImageChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LockScreenImage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStream * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_BadgesChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_BadgesChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Badges(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DetailTextChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DetailTextChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DetailText(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AlarmIconChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AlarmIconChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlarmIcon(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStream * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILockScreenInfo=_uuidof(ILockScreenInfo);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockScreenUnlockingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockScreenUnlockingDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingDeferral[] = L"Windows.ApplicationModel.LockScreen.ILockScreenUnlockingDeferral";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                /* [object, uuid("7E7D1AD6-5203-43E7-9BD6-7C3947D1E3FE"), exclusiveto, contract] */
                MIDL_INTERFACE("7E7D1AD6-5203-43E7-9BD6-7C3947D1E3FE")
                ILockScreenUnlockingDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILockScreenUnlockingDeferral=_uuidof(ILockScreenUnlockingDeferral);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockScreenUnlockingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs[] = L"Windows.ApplicationModel.LockScreen.ILockScreenUnlockingEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace LockScreen {
                /* [object, uuid("44E6C007-75FB-4ABB-9F8B-824748900C71"), exclusiveto, contract] */
                MIDL_INTERFACE("44E6C007-75FB-4ABB-9F8B-824748900C71")
                ILockScreenUnlockingEventArgs : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral * * deferral
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Deadline(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILockScreenUnlockingEventArgs=_uuidof(ILockScreenUnlockingEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* LockScreen */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LockScreen.LockApplicationHost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.LockScreen.ILockApplicationHostStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.LockScreen.ILockApplicationHost ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockApplicationHost_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockApplicationHost_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockApplicationHost[] = L"Windows.ApplicationModel.LockScreen.LockApplicationHost";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LockScreen.LockScreenBadge
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.LockScreen.ILockScreenBadge ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenBadge_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenBadge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenBadge[] = L"Windows.ApplicationModel.LockScreen.LockScreenBadge";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LockScreen.LockScreenInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.LockScreen.ILockScreenInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenInfo[] = L"Windows.ApplicationModel.LockScreen.LockScreenInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LockScreen.LockScreenUnlockingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.LockScreen.ILockScreenUnlockingDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenUnlockingDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenUnlockingDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenUnlockingDeferral[] = L"Windows.ApplicationModel.LockScreen.LockScreenUnlockingDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.LockScreen.ILockScreenUnlockingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenUnlockingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenUnlockingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenUnlockingEventArgs[] = L"Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost;

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge;

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral;

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;

typedef struct __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIReference_1_UINT32_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT32;

typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, /* [retval][out] */ __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;

interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT32_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT32_INTERFACE_DEFINED__


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




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
























/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockApplicationHost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockApplicationHost
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockApplicationHost[] = L"Windows.ApplicationModel.LockScreen.ILockApplicationHost";
/* [object, uuid("38EE31AD-D94F-4E7C-81FA-4F4436506281"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestUnlock )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Unlocking )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Unlocking )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostVtbl;

interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_RequestUnlock(This) \
    ( (This)->lpVtbl->RequestUnlock(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_add_Unlocking(This,handler,token) \
    ( (This)->lpVtbl->add_Unlocking(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_remove_Unlocking(This,token) \
    ( (This)->lpVtbl->remove_Unlocking(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockApplicationHostStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockApplicationHost
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockApplicationHostStatics[] = L"Windows.ApplicationModel.LockScreen.ILockApplicationHostStatics";
/* [object, uuid("F48FAB8E-23D7-4E63-96A1-666FF52D3B2C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_GetForCurrentView(This,result) \
    ( (This)->lpVtbl->GetForCurrentView(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockScreenBadge
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockScreenBadge
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenBadge[] = L"Windows.ApplicationModel.LockScreen.ILockScreenBadge";
/* [object, uuid("E95105D9-2BFF-4DB0-9B4F-3824778B9C9A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Logo )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Glyph )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Number )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomationName )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *LaunchApp )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadgeVtbl;

interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadgeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_get_Logo(This,value) \
    ( (This)->lpVtbl->get_Logo(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_get_Glyph(This,value) \
    ( (This)->lpVtbl->get_Glyph(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_get_Number(This,value) \
    ( (This)->lpVtbl->get_Number(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_get_AutomationName(This,value) \
    ( (This)->lpVtbl->get_AutomationName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_LaunchApp(This) \
    ( (This)->lpVtbl->LaunchApp(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockScreenInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockScreenInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenInfo[] = L"Windows.ApplicationModel.LockScreen.ILockScreenInfo";
/* [object, uuid("F59AA65C-9711-4DC9-A630-95B6CB8CDAD0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LockScreenImageChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LockScreenImageChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LockScreenImage )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_BadgesChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_BadgesChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Badges )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DetailTextChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DetailTextChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DetailText )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AlarmIconChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AlarmIconChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlarmIcon )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_add_LockScreenImageChanged(This,handler,token) \
    ( (This)->lpVtbl->add_LockScreenImageChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_remove_LockScreenImageChanged(This,token) \
    ( (This)->lpVtbl->remove_LockScreenImageChanged(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_get_LockScreenImage(This,value) \
    ( (This)->lpVtbl->get_LockScreenImage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_add_BadgesChanged(This,handler,token) \
    ( (This)->lpVtbl->add_BadgesChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_remove_BadgesChanged(This,token) \
    ( (This)->lpVtbl->remove_BadgesChanged(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_get_Badges(This,value) \
    ( (This)->lpVtbl->get_Badges(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_add_DetailTextChanged(This,handler,token) \
    ( (This)->lpVtbl->add_DetailTextChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_remove_DetailTextChanged(This,token) \
    ( (This)->lpVtbl->remove_DetailTextChanged(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_get_DetailText(This,value) \
    ( (This)->lpVtbl->get_DetailText(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_add_AlarmIconChanged(This,handler,token) \
    ( (This)->lpVtbl->add_AlarmIconChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_remove_AlarmIconChanged(This,token) \
    ( (This)->lpVtbl->remove_AlarmIconChanged(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_get_AlarmIcon(This,value) \
    ( (This)->lpVtbl->get_AlarmIcon(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockScreenUnlockingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockScreenUnlockingDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingDeferral[] = L"Windows.ApplicationModel.LockScreen.ILockScreenUnlockingDeferral";
/* [object, uuid("7E7D1AD6-5203-43E7-9BD6-7C3947D1E3FE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferralVtbl;

interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.LockScreen.ILockScreenUnlockingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs[] = L"Windows.ApplicationModel.LockScreen.ILockScreenUnlockingEventArgs";
/* [object, uuid("44E6C007-75FB-4ABB-9F8B-824748900C71"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * * deferral
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_GetDeferral(This,deferral) \
    ( (This)->lpVtbl->GetDeferral(This,deferral) )

#define __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_get_Deadline(This,value) \
    ( (This)->lpVtbl->get_Deadline(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LockScreen.LockApplicationHost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.LockScreen.ILockApplicationHostStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.LockScreen.ILockApplicationHost ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockApplicationHost_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockApplicationHost_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockApplicationHost[] = L"Windows.ApplicationModel.LockScreen.LockApplicationHost";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LockScreen.LockScreenBadge
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.LockScreen.ILockScreenBadge ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenBadge_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenBadge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenBadge[] = L"Windows.ApplicationModel.LockScreen.LockScreenBadge";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LockScreen.LockScreenInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.LockScreen.ILockScreenInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenInfo[] = L"Windows.ApplicationModel.LockScreen.LockScreenInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LockScreen.LockScreenUnlockingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.LockScreen.ILockScreenUnlockingDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenUnlockingDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenUnlockingDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenUnlockingDeferral[] = L"Windows.ApplicationModel.LockScreen.LockScreenUnlockingDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.LockScreen.ILockScreenUnlockingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenUnlockingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LockScreen_LockScreenUnlockingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenUnlockingEventArgs[] = L"Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs";
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
#endif // __windows2Eapplicationmodel2Elockscreen_p_h__

#endif // __windows2Eapplicationmodel2Elockscreen_h__
