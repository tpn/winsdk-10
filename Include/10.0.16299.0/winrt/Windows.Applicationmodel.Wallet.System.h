/* Header file automatically generated from windows.applicationmodel.wallet.system.idl */
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
#ifndef __windows2Eapplicationmodel2Ewallet2Esystem_h__
#define __windows2Eapplicationmodel2Ewallet2Esystem_h__
#ifndef __windows2Eapplicationmodel2Ewallet2Esystem_p_h__
#define __windows2Eapplicationmodel2Ewallet2Esystem_p_h__


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
#include "Windows.ApplicationModel.Wallet.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    interface IWalletItemSystemStore;
                } /* Windows */
            } /* ApplicationModel */
        } /* Wallet */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    interface IWalletItemSystemStore2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Wallet */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    interface IWalletManagerSystemStatics;
                } /* Windows */
            } /* ApplicationModel */
        } /* Wallet */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics ABI::Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    class WalletItemSystemStore;
                } /* Windows */
            } /* ApplicationModel */
        } /* Wallet */
    } /* System */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fe76bd86-3570-5d56-932e-a6fb8093a557"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*, ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Wallet.System.WalletItemSystemStore>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("587c5f4f-7c55-5f74-b26a-f80e3bc6d4f2"))
IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*, ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Wallet.System.WalletItemSystemStore>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*> __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3c619943-a672-57ee-ad32-f6d97a6f4217"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*, ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Wallet.System.WalletItemSystemStore, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*,IInspectable*> __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                class WalletItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem ABI::Windows::ApplicationModel::Wallet::IWalletItem

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e3ceb002-c2dd-5e63-913c-d7d577561e73"))
IIterator<ABI::Windows::ApplicationModel::Wallet::WalletItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItem*, ABI::Windows::ApplicationModel::Wallet::IWalletItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Wallet.WalletItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Wallet::WalletItem*> __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>
//#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac174c8c-0fdd-5cff-a29f-4e8ce1c8bc81"))
IIterable<ABI::Windows::ApplicationModel::Wallet::WalletItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItem*, ABI::Windows::ApplicationModel::Wallet::IWalletItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Wallet.WalletItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Wallet::WalletItem*> __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>
//#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2dc89188-2b5b-591a-bb3d-d7d57ff7312c"))
IVectorView<ABI::Windows::ApplicationModel::Wallet::WalletItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItem*, ABI::Windows::ApplicationModel::Wallet::IWalletItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Wallet.WalletItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Wallet::WalletItem*> __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>
//#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9302d49e-dda3-5971-b48a-dfdf02c572af"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Wallet.WalletItem>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("23540ddd-166f-5b93-8669-e340b5e1820d"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Wallet.WalletItem>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("88b0349f-503d-5786-a267-55bb37a8a1b1"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::WalletItem*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItem*, ABI::Windows::ApplicationModel::Wallet::IWalletItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Wallet.WalletItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::WalletItem*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8e64ddb0-ea5c-5593-a1f3-0b8209df3905"))
IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::WalletItem*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItem*, ABI::Windows::ApplicationModel::Wallet::IWalletItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Wallet.WalletItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::WalletItem*> __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::IWalletItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


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





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamReference;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference ABI::Windows::Storage::Streams::IRandomAccessStreamReference

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    
                    typedef enum WalletItemAppAssociation : int WalletItemAppAssociation;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Wallet */
    } /* System */} /* ABI */
















/*
 *
 * Struct Windows.ApplicationModel.Wallet.System.WalletItemAppAssociation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    /* [v1_enum, contract] */
                    enum WalletItemAppAssociation : int
                    {
                        WalletItemAppAssociation_None = 0,
                        WalletItemAppAssociation_AppInstalled = 1,
                        WalletItemAppAssociation_AppNotInstalled = 2,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Wallet */
    } /* System */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.System.WalletItemSystemStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore[] = L"Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    /* [object, uuid("522E2BFF-96A2-4A17-8D19-FE1D9F837561"), exclusiveto, contract] */
                    MIDL_INTERFACE("522E2BFF-96A2-4A17-8D19-FE1D9F837561")
                    IWalletItemSystemStore : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetItemsAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Wallet::IWalletItem * item,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ImportItemAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * stream,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAppStatusForItem(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Wallet::IWalletItem * item,
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LaunchAppForItemAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Wallet::IWalletItem * item,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWalletItemSystemStore=_uuidof(IWalletItemSystemStore);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Wallet */
    } /* System */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.System.WalletItemSystemStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2[] = L"Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    /* [object, uuid("F98D3A4E-BE00-4FDD-9734-6C113C1AC1CB"), exclusiveto, contract] */
                    MIDL_INTERFACE("F98D3A4E-BE00-4FDD-9734-6C113C1AC1CB")
                    IWalletItemSystemStore2 : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ItemsChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ItemsChanged(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWalletItemSystemStore2=_uuidof(IWalletItemSystemStore2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Wallet */
    } /* System */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.System.IWalletManagerSystemStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.System.WalletManagerSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_System_IWalletManagerSystemStatics[] = L"Windows.ApplicationModel.Wallet.System.IWalletManagerSystemStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    /* [object, uuid("BEE8EB89-2634-4B9A-8B23-EE8903C91FE0"), exclusiveto, contract] */
                    MIDL_INTERFACE("BEE8EB89-2634-4B9A-8B23-EE8903C91FE0")
                    IWalletManagerSystemStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE RequestStoreAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWalletManagerSystemStatics=_uuidof(IWalletManagerSystemStatics);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Wallet */
    } /* System */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.System.WalletItemSystemStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore ** Default Interface **
 *    Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletItemSystemStore_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletItemSystemStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_System_WalletItemSystemStore[] = L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.System.WalletManagerSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Wallet.System.IWalletManagerSystemStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletManagerSystem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletManagerSystem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_System_WalletManagerSystem[] = L"Windows.ApplicationModel.Wallet.System.WalletManagerSystem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem;

typedef struct __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_INTERFACE_DEFINED__

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





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CWalletItemAppAssociation __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CWalletItemAppAssociation;
















/*
 *
 * Struct Windows.ApplicationModel.Wallet.System.WalletItemAppAssociation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CWalletItemAppAssociation
{
    WalletItemAppAssociation_None = 0,
    WalletItemAppAssociation_AppInstalled = 1,
    WalletItemAppAssociation_AppNotInstalled = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.System.WalletItemSystemStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore[] = L"Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore";
/* [object, uuid("522E2BFF-96A2-4A17-8D19-FE1D9F837561"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetItemsAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * item,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ImportItemAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * stream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppStatusForItem )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * item,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CWalletItemAppAssociation * result
        );
    HRESULT ( STDMETHODCALLTYPE *LaunchAppForItemAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * item,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStoreVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_GetItemsAsync(This,operation) \
    ( (This)->lpVtbl->GetItemsAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_DeleteAsync(This,item,operation) \
    ( (This)->lpVtbl->DeleteAsync(This,item,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_ImportItemAsync(This,stream,operation) \
    ( (This)->lpVtbl->ImportItemAsync(This,stream,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_GetAppStatusForItem(This,item,result) \
    ( (This)->lpVtbl->GetAppStatusForItem(This,item,result) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_LaunchAppForItemAsync(This,item,operation) \
    ( (This)->lpVtbl->LaunchAppForItemAsync(This,item,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.System.WalletItemSystemStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2[] = L"Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore2";
/* [object, uuid("F98D3A4E-BE00-4FDD-9734-6C113C1AC1CB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ItemsChanged )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ItemsChanged )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_add_ItemsChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_ItemsChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_remove_ItemsChanged(This,cookie) \
    ( (This)->lpVtbl->remove_ItemsChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.System.IWalletManagerSystemStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.System.WalletManagerSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_System_IWalletManagerSystemStatics[] = L"Windows.ApplicationModel.Wallet.System.IWalletManagerSystemStatics";
/* [object, uuid("BEE8EB89-2634-4B9A-8B23-EE8903C91FE0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_RequestStoreAsync(This,operation) \
    ( (This)->lpVtbl->RequestStoreAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.System.WalletItemSystemStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore ** Default Interface **
 *    Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletItemSystemStore_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletItemSystemStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_System_WalletItemSystemStore[] = L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.System.WalletManagerSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Wallet.System.IWalletManagerSystemStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletManagerSystem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletManagerSystem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_System_WalletManagerSystem[] = L"Windows.ApplicationModel.Wallet.System.WalletManagerSystem";
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
#endif // __windows2Eapplicationmodel2Ewallet2Esystem_p_h__

#endif // __windows2Eapplicationmodel2Ewallet2Esystem_h__
