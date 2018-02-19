/* Header file automatically generated from windows.applicationmodel.wallet.idl */
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
#ifndef __windows2Eapplicationmodel2Ewallet_h__
#define __windows2Eapplicationmodel2Ewallet_h__
#ifndef __windows2Eapplicationmodel2Ewallet_p_h__
#define __windows2Eapplicationmodel2Ewallet_p_h__


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
#include "Windows.Devices.Geolocation.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletBarcode;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode ABI::Windows::ApplicationModel::Wallet::IWalletBarcode

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletBarcodeFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory ABI::Windows::ApplicationModel::Wallet::IWalletBarcodeFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletItemCustomProperty;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletItemCustomPropertyFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomPropertyFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletItemFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory ABI::Windows::ApplicationModel::Wallet::IWalletItemFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletItemStore;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore ABI::Windows::ApplicationModel::Wallet::IWalletItemStore

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletItemStore2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2 ABI::Windows::ApplicationModel::Wallet::IWalletItemStore2

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletManagerStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics ABI::Windows::ApplicationModel::Wallet::IWalletManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletRelevantLocation;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletTransaction;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction ABI::Windows::ApplicationModel::Wallet::IWalletTransaction

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletVerb;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb ABI::Windows::ApplicationModel::Wallet::IWalletVerb

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                interface IWalletVerbFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory ABI::Windows::ApplicationModel::Wallet::IWalletVerbFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                class WalletItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */


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

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                class WalletItemCustomProperty;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1aa9cd86-9376-5ebb-b45c-8dad7e66f9f7"))
IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletItemCustomProperty*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItemCustomProperty*, ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletItemCustomProperty>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletItemCustomProperty*> __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c66d71b4-4336-5693-836e-4915303c183b"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletItemCustomProperty>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3f45154c-0c0d-5df9-a557-259f20c927ae"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletItemCustomProperty>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                class WalletRelevantLocation;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("031812fc-a4f7-5127-9ec4-d92621cb3f90"))
IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletRelevantLocation*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletRelevantLocation*, ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletRelevantLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletRelevantLocation*> __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b5d9a611-5f2c-542c-ae58-276753bbf8c7"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletRelevantLocation>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e55e510c-4028-5df0-b78b-27bd06980b0b"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletRelevantLocation>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                class WalletTransaction;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f50232e9-7ce3-559b-baad-6726ffa4e79b"))
IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletTransaction*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletTransaction*, ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletTransaction>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletTransaction*> __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("75f5591e-31a9-50e9-b9d0-373b1eb0d6b6"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletTransaction>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4fd2ca58-b7a2-5923-9380-49c11c69c39a"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletTransaction>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                class WalletVerb;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1fe3a179-ffa8-5f52-9823-9c3dff73c56a"))
IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletVerb*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletVerb*, ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletVerb>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletVerb*> __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("93b2ca58-f717-56e6-a945-8513c48f915c"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletVerb>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6d2ef172-8ae3-572e-ae44-8ee3fd49d19f"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Wallet.WalletVerb>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE
#define DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("338f0d64-dd4e-5614-b16f-0bd08d19fe02"))
IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletItemCustomProperty*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItemCustomProperty*, ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.ApplicationModel.Wallet.WalletItemCustomProperty>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletItemCustomProperty*> __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t;
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE
#define DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b5622af3-7c67-5158-b39a-4323488e6f87"))
IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletRelevantLocation*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletRelevantLocation*, ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.ApplicationModel.Wallet.WalletRelevantLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletRelevantLocation*> __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t;
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE
#define DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05b768c4-0c95-5305-9b44-ef006b53300f"))
IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletTransaction*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletTransaction*, ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.ApplicationModel.Wallet.WalletTransaction>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletTransaction*> __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t;
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE
#define DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("93ca6ab8-a827-5e28-b21e-01a597457c3e"))
IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletVerb*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletVerb*, ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.ApplicationModel.Wallet.WalletVerb>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletVerb*> __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t;
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE
#define DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5cc135b0-29f3-5113-a097-25e41a32e473"))
IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletItemCustomProperty*> : IMap_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItemCustomProperty*, ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Windows.ApplicationModel.Wallet.WalletItemCustomProperty>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletItemCustomProperty*> __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t;
#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>
//#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_t ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE
#define DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9378c55a-852d-5ddf-b01b-9cc3d47ec52d"))
IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletRelevantLocation*> : IMap_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletRelevantLocation*, ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Windows.ApplicationModel.Wallet.WalletRelevantLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletRelevantLocation*> __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t;
#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>
//#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_t ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletRelevantLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE
#define DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3ef47bcf-8328-5245-8c91-f0ab4c399027"))
IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletTransaction*> : IMap_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletTransaction*, ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Windows.ApplicationModel.Wallet.WalletTransaction>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletTransaction*> __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t;
#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>
//#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_t ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletTransaction*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE
#define DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bda656b0-1139-5fd3-9dfd-d24dbb910509"))
IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletVerb*> : IMap_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletVerb*, ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Windows.ApplicationModel.Wallet.WalletVerb>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::WalletVerb*> __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t;
#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>
//#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_t ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::ApplicationModel::Wallet::IWalletVerb*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_USE */


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

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                class WalletItemStore;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5334975e-205a-5b6c-96fd-896fb93949bd"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::WalletItemStore*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItemStore*, ABI::Windows::ApplicationModel::Wallet::IWalletItemStore*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Wallet.WalletItemStore>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::WalletItemStore*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::IWalletItemStore*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::IWalletItemStore*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9664f3ba-0049-5cbf-845f-8f0bcad2b14c"))
IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::WalletItemStore*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItemStore*, ABI::Windows::ApplicationModel::Wallet::IWalletItemStore*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Wallet.WalletItemStore>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::WalletItemStore*> __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::IWalletItemStore*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::IWalletItemStore*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_USE */


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

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("07fc9084-9ea1-5505-89cc-4d754719f582"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Wallet::WalletItemStore*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItemStore*, ABI::Windows::ApplicationModel::Wallet::IWalletItemStore*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Wallet.WalletItemStore, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Wallet::WalletItemStore*,IInspectable*> __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Wallet::IWalletItemStore*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Wallet::IWalletItemStore*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("60847289-ea0b-5df6-89df-f2c62cba9693"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("65178d50-e6a2-5d16-b244-65e9725e5a0c"))
IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE */


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





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                typedef struct BasicGeoposition BasicGeoposition;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */




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
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */




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
        namespace ApplicationModel {
            namespace Wallet {
                
                typedef enum WalletBarcodeSymbology : int WalletBarcodeSymbology;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                
                typedef enum WalletDetailViewPosition : int WalletDetailViewPosition;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                
                typedef enum WalletItemKind : int WalletItemKind;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                
                typedef enum WalletSummaryViewPosition : int WalletSummaryViewPosition;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */














namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                class WalletBarcode;
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */


















/*
 *
 * Struct Windows.ApplicationModel.Wallet.WalletActionKind
 *
 * Introduced to Windows.ApplicationModel.Wallet.WalletContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [v1_enum, contract] */
                enum WalletActionKind : int
                {
                    WalletActionKind_OpenItem = 0,
                    WalletActionKind_Transaction = 1,
                    WalletActionKind_MoreTransactions = 2,
                    WalletActionKind_Message = 3,
                    WalletActionKind_Verb = 4,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Wallet.WalletBarcodeSymbology
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
                /* [v1_enum, contract] */
                enum WalletBarcodeSymbology : int
                {
                    WalletBarcodeSymbology_Invalid = 0,
                    WalletBarcodeSymbology_Upca = 1,
                    WalletBarcodeSymbology_Upce = 2,
                    WalletBarcodeSymbology_Ean13 = 3,
                    WalletBarcodeSymbology_Ean8 = 4,
                    WalletBarcodeSymbology_Itf = 5,
                    WalletBarcodeSymbology_Code39 = 6,
                    WalletBarcodeSymbology_Code128 = 7,
                    WalletBarcodeSymbology_Qr = 8,
                    WalletBarcodeSymbology_Pdf417 = 9,
                    WalletBarcodeSymbology_Aztec = 10,
                    WalletBarcodeSymbology_Custom = 100000,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Wallet.WalletDetailViewPosition
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
                /* [v1_enum, contract] */
                enum WalletDetailViewPosition : int
                {
                    WalletDetailViewPosition_Hidden = 0,
                    WalletDetailViewPosition_HeaderField1 = 1,
                    WalletDetailViewPosition_HeaderField2 = 2,
                    WalletDetailViewPosition_PrimaryField1 = 3,
                    WalletDetailViewPosition_PrimaryField2 = 4,
                    WalletDetailViewPosition_SecondaryField1 = 5,
                    WalletDetailViewPosition_SecondaryField2 = 6,
                    WalletDetailViewPosition_SecondaryField3 = 7,
                    WalletDetailViewPosition_SecondaryField4 = 8,
                    WalletDetailViewPosition_SecondaryField5 = 9,
                    WalletDetailViewPosition_CenterField1 = 10,
                    WalletDetailViewPosition_FooterField1 = 11,
                    WalletDetailViewPosition_FooterField2 = 12,
                    WalletDetailViewPosition_FooterField3 = 13,
                    WalletDetailViewPosition_FooterField4 = 14,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Wallet.WalletItemKind
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
                /* [v1_enum, contract] */
                enum WalletItemKind : int
                {
                    WalletItemKind_Invalid = 0,
                    WalletItemKind_Deal = 1,
                    WalletItemKind_General = 2,
                    WalletItemKind_PaymentInstrument = 3,
                    WalletItemKind_Ticket = 4,
                    WalletItemKind_BoardingPass = 5,
                    WalletItemKind_MembershipCard = 6,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Wallet.WalletSummaryViewPosition
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
                /* [v1_enum, contract] */
                enum WalletSummaryViewPosition : int
                {
                    WalletSummaryViewPosition_Hidden = 0,
                    WalletSummaryViewPosition_Field1 = 1,
                    WalletSummaryViewPosition_Field2 = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletBarcode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletBarcode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletBarcode[] = L"Windows.ApplicationModel.Wallet.IWalletBarcode";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("4F857B29-DE80-4EA4-A1CD-81CD084DAC27"), exclusiveto, contract] */
                MIDL_INTERFACE("4F857B29-DE80-4EA4-A1CD-81CD084DAC27")
                IWalletBarcode : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Symbology(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Wallet::WalletBarcodeSymbology * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetImageAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletBarcode=_uuidof(IWalletBarcode);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletBarcodeFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletBarcode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletBarcodeFactory[] = L"Windows.ApplicationModel.Wallet.IWalletBarcodeFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("30117161-ED9C-469E-BBFD-306C95EA7108"), exclusiveto, contract] */
                MIDL_INTERFACE("30117161-ED9C-469E-BBFD-306C95EA7108")
                IWalletBarcodeFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWalletBarcode(
                        /* [in] */ABI::Windows::ApplicationModel::Wallet::WalletBarcodeSymbology symbology,
                        /* [in] */__RPC__in HSTRING value,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Wallet::IWalletBarcode * * barcode
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateCustomWalletBarcode(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * streamToBarcodeImage,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Wallet::IWalletBarcode * * barcode
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletBarcodeFactory=_uuidof(IWalletBarcodeFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItem[] = L"Windows.ApplicationModel.Wallet.IWalletItem";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("20B54BE8-118D-4EC4-996C-B963E7BD3E74"), exclusiveto, contract] */
                MIDL_INTERFACE("20B54BE8-118D-4EC4-996C-B963E7BD3E74")
                IWalletItem : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAcknowledged(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsAcknowledged(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IssuerDisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IssuerDisplayName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastUpdated(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LastUpdated(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Wallet::WalletItemKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Barcode(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Wallet::IWalletBarcode * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Barcode(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Wallet::IWalletBarcode * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpirationDate(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ExpirationDate(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Logo159x159(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Logo159x159(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Logo336x336(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Logo336x336(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Logo99x99(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Logo99x99(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayMessage(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayMessage(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDisplayMessageLaunchable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsDisplayMessageLaunchable(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LogoText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LogoText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeaderColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeaderColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BodyColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BodyColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeaderFontColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeaderFontColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BodyFontColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BodyFontColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeaderBackgroundImage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeaderBackgroundImage(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BodyBackgroundImage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BodyBackgroundImage(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LogoImage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LogoImage(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PromotionalImage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PromotionalImage(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RelevantDate(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RelevantDate(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RelevantDateDisplayMessage(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RelevantDateDisplayMessage(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransactionHistory(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RelevantLocations(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMoreTransactionHistoryLaunchable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsMoreTransactionHistoryLaunchable(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayProperties(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Verbs(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletItem=_uuidof(IWalletItem);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItemCustomProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItemCustomProperty
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty[] = L"Windows.ApplicationModel.Wallet.IWalletItemCustomProperty";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("B94B40F3-FA00-40FD-98DC-9DE46697F1E7"), exclusiveto, contract] */
                MIDL_INTERFACE("B94B40F3-FA00-40FD-98DC-9DE46697F1E7")
                IWalletItemCustomProperty : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Name(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoDetectLinks(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoDetectLinks(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DetailViewPosition(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Wallet::WalletDetailViewPosition * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DetailViewPosition(
                        /* [in] */ABI::Windows::ApplicationModel::Wallet::WalletDetailViewPosition value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SummaryViewPosition(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Wallet::WalletSummaryViewPosition * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SummaryViewPosition(
                        /* [in] */ABI::Windows::ApplicationModel::Wallet::WalletSummaryViewPosition value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletItemCustomProperty=_uuidof(IWalletItemCustomProperty);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItemCustomPropertyFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItemCustomProperty
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItemCustomPropertyFactory[] = L"Windows.ApplicationModel.Wallet.IWalletItemCustomPropertyFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("D0046A44-61A1-41AA-B259-A5610AB5D575"), exclusiveto, contract] */
                MIDL_INTERFACE("D0046A44-61A1-41AA-B259-A5610AB5D575")
                IWalletItemCustomPropertyFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWalletItemCustomProperty(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING value,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Wallet::IWalletItemCustomProperty * * walletItemCustomProperty
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletItemCustomPropertyFactory=_uuidof(IWalletItemCustomPropertyFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItemFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItemFactory[] = L"Windows.ApplicationModel.Wallet.IWalletItemFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("53E27470-4F0B-4A3E-99E5-0BBB1EAB38D4"), exclusiveto, contract] */
                MIDL_INTERFACE("53E27470-4F0B-4A3E-99E5-0BBB1EAB38D4")
                IWalletItemFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWalletItem(
                        /* [in] */ABI::Windows::ApplicationModel::Wallet::WalletItemKind kind,
                        /* [in] */__RPC__in HSTRING displayName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Wallet::IWalletItem * * walletItem
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletItemFactory=_uuidof(IWalletItemFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItemStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItemStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItemStore[] = L"Windows.ApplicationModel.Wallet.IWalletItemStore";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("7160484B-6D49-48F8-91A9-40A1D0F13EF4"), exclusiveto, contract] */
                MIDL_INTERFACE("7160484B-6D49-48F8-91A9-40A1D0F13EF4")
                IWalletItemStore : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AddAsync(
                        /* [in] */__RPC__in HSTRING id,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Wallet::IWalletItem * item,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetWalletItemAsync(
                        /* [in] */__RPC__in HSTRING id,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetItemsAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetItemsWithKindAsync(
                        /* [in] */ABI::Windows::ApplicationModel::Wallet::WalletItemKind kind,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ImportItemAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * stream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteAsync(
                        /* [in] */__RPC__in HSTRING id,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowItemAsync(
                        /* [in] */__RPC__in HSTRING id,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Wallet::IWalletItem * item,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletItemStore=_uuidof(IWalletItemStore);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItemStore2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItemStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItemStore2[] = L"Windows.ApplicationModel.Wallet.IWalletItemStore2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("65E682F0-7009-4A15-BD54-4FFF379BFFE2"), exclusiveto, contract] */
                MIDL_INTERFACE("65E682F0-7009-4A15-BD54-4FFF379BFFE2")
                IWalletItemStore2 : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ItemsChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ItemsChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletItemStore2=_uuidof(IWalletItemStore2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletManagerStatics[] = L"Windows.ApplicationModel.Wallet.IWalletManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("5111D6B8-C9A4-4C64-B4DD-E1E548001C0D"), exclusiveto, contract] */
                MIDL_INTERFACE("5111D6B8-C9A4-4C64-B4DD-E1E548001C0D")
                IWalletManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RequestStoreAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletManagerStatics=_uuidof(IWalletManagerStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletRelevantLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletRelevantLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletRelevantLocation[] = L"Windows.ApplicationModel.Wallet.IWalletRelevantLocation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("9FD8782A-E3F9-4DE1-BAB3-BB192E46B3F3"), exclusiveto, contract] */
                MIDL_INTERFACE("9FD8782A-E3F9-4DE1-BAB3-BB192E46B3F3")
                IWalletRelevantLocation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::BasicGeoposition * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Position(
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayMessage(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayMessage(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletRelevantLocation=_uuidof(IWalletRelevantLocation);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletTransaction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletTransaction
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletTransaction[] = L"Windows.ApplicationModel.Wallet.IWalletTransaction";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("40E1E940-2606-4519-81CB-BFF1C60D1F79"), exclusiveto, contract] */
                MIDL_INTERFACE("40E1E940-2606-4519-81CB-BFF1C60D1F79")
                IWalletTransaction : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Description(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayAmount(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayAmount(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IgnoreTimeOfDay(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IgnoreTimeOfDay(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayLocation(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayLocation(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransactionDate(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TransactionDate(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsLaunchable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsLaunchable(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletTransaction=_uuidof(IWalletTransaction);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletVerb
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletVerb
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletVerb[] = L"Windows.ApplicationModel.Wallet.IWalletVerb";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("17B826D6-E3C1-4C74-8A94-217AADBC4884"), exclusiveto, contract] */
                MIDL_INTERFACE("17B826D6-E3C1-4C74-8A94-217AADBC4884")
                IWalletVerb : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Name(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletVerb=_uuidof(IWalletVerb);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletVerbFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletVerb
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletVerbFactory[] = L"Windows.ApplicationModel.Wallet.IWalletVerbFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                /* [object, uuid("76012771-BE58-4D5E-83ED-58B1669C7AD9"), exclusiveto, contract] */
                MIDL_INTERFACE("76012771-BE58-4D5E-83ED-58B1669C7AD9")
                IWalletVerbFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWalletVerb(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Wallet::IWalletVerb * * WalletVerb
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWalletVerbFactory=_uuidof(IWalletVerbFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Wallet */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletBarcode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Wallet.IWalletBarcodeFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletBarcode ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletBarcode_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletBarcode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletBarcode[] = L"Windows.ApplicationModel.Wallet.WalletBarcode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Wallet.IWalletItemFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletItem[] = L"Windows.ApplicationModel.Wallet.WalletItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletItemCustomProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Wallet.IWalletItemCustomPropertyFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletItemCustomProperty ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItemCustomProperty_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItemCustomProperty_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletItemCustomProperty[] = L"Windows.ApplicationModel.Wallet.WalletItemCustomProperty";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletItemStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletItemStore ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItemStore_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItemStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletItemStore[] = L"Windows.ApplicationModel.Wallet.WalletItemStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Wallet.IWalletManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletManager[] = L"Windows.ApplicationModel.Wallet.WalletManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletRelevantLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletRelevantLocation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletRelevantLocation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletRelevantLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletRelevantLocation[] = L"Windows.ApplicationModel.Wallet.WalletRelevantLocation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletTransaction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletTransaction ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletTransaction_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletTransaction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletTransaction[] = L"Windows.ApplicationModel.Wallet.WalletTransaction";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletVerb
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Wallet.IWalletVerbFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletVerb ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletVerb_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletVerb_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletVerb[] = L"Windows.ApplicationModel.Wallet.WalletVerb";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2 __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

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
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty;

typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl;

interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation;

typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl;

interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction;

typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl;

interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb;

typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl;

interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty;

typedef struct __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl;

interface __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomPropertyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation;

typedef struct __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl;

interface __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction;

typedef struct __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl;

interface __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransactionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb;

typedef struct __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl;

interface __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerbVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb_INTERFACE_DEFINED__

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStoreVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStoreVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItemStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStoreVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore_INTERFACE_DEFINED__

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
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

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




typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition;





typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__










typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;





typedef enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletActionKind __x_ABI_CWindows_CApplicationModel_CWallet_CWalletActionKind;


typedef enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletBarcodeSymbology __x_ABI_CWindows_CApplicationModel_CWallet_CWalletBarcodeSymbology;


typedef enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletDetailViewPosition __x_ABI_CWindows_CApplicationModel_CWallet_CWalletDetailViewPosition;


typedef enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletItemKind __x_ABI_CWindows_CApplicationModel_CWallet_CWalletItemKind;


typedef enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletSummaryViewPosition __x_ABI_CWindows_CApplicationModel_CWallet_CWalletSummaryViewPosition;































/*
 *
 * Struct Windows.ApplicationModel.Wallet.WalletActionKind
 *
 * Introduced to Windows.ApplicationModel.Wallet.WalletContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletActionKind
{
    WalletActionKind_OpenItem = 0,
    WalletActionKind_Transaction = 1,
    WalletActionKind_MoreTransactions = 2,
    WalletActionKind_Message = 3,
    WalletActionKind_Verb = 4,
};
#endif // WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Wallet.WalletBarcodeSymbology
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletBarcodeSymbology
{
    WalletBarcodeSymbology_Invalid = 0,
    WalletBarcodeSymbology_Upca = 1,
    WalletBarcodeSymbology_Upce = 2,
    WalletBarcodeSymbology_Ean13 = 3,
    WalletBarcodeSymbology_Ean8 = 4,
    WalletBarcodeSymbology_Itf = 5,
    WalletBarcodeSymbology_Code39 = 6,
    WalletBarcodeSymbology_Code128 = 7,
    WalletBarcodeSymbology_Qr = 8,
    WalletBarcodeSymbology_Pdf417 = 9,
    WalletBarcodeSymbology_Aztec = 10,
    WalletBarcodeSymbology_Custom = 100000,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Wallet.WalletDetailViewPosition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletDetailViewPosition
{
    WalletDetailViewPosition_Hidden = 0,
    WalletDetailViewPosition_HeaderField1 = 1,
    WalletDetailViewPosition_HeaderField2 = 2,
    WalletDetailViewPosition_PrimaryField1 = 3,
    WalletDetailViewPosition_PrimaryField2 = 4,
    WalletDetailViewPosition_SecondaryField1 = 5,
    WalletDetailViewPosition_SecondaryField2 = 6,
    WalletDetailViewPosition_SecondaryField3 = 7,
    WalletDetailViewPosition_SecondaryField4 = 8,
    WalletDetailViewPosition_SecondaryField5 = 9,
    WalletDetailViewPosition_CenterField1 = 10,
    WalletDetailViewPosition_FooterField1 = 11,
    WalletDetailViewPosition_FooterField2 = 12,
    WalletDetailViewPosition_FooterField3 = 13,
    WalletDetailViewPosition_FooterField4 = 14,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Wallet.WalletItemKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletItemKind
{
    WalletItemKind_Invalid = 0,
    WalletItemKind_Deal = 1,
    WalletItemKind_General = 2,
    WalletItemKind_PaymentInstrument = 3,
    WalletItemKind_Ticket = 4,
    WalletItemKind_BoardingPass = 5,
    WalletItemKind_MembershipCard = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Wallet.WalletSummaryViewPosition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CWallet_CWalletSummaryViewPosition
{
    WalletSummaryViewPosition_Hidden = 0,
    WalletSummaryViewPosition_Field1 = 1,
    WalletSummaryViewPosition_Field2 = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletBarcode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletBarcode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletBarcode[] = L"Windows.ApplicationModel.Wallet.IWalletBarcode";
/* [object, uuid("4F857B29-DE80-4EA4-A1CD-81CD084DAC27"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Symbology )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CWalletBarcodeSymbology * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetImageAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_get_Symbology(This,value) \
    ( (This)->lpVtbl->get_Symbology(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_GetImageAsync(This,operation) \
    ( (This)->lpVtbl->GetImageAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletBarcodeFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletBarcode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletBarcodeFactory[] = L"Windows.ApplicationModel.Wallet.IWalletBarcodeFactory";
/* [object, uuid("30117161-ED9C-469E-BBFD-306C95EA7108"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWalletBarcode )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CWallet_CWalletBarcodeSymbology symbology,
        /* [in] */__RPC__in HSTRING value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * * barcode
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCustomWalletBarcode )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * streamToBarcodeImage,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * * barcode
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_CreateWalletBarcode(This,symbology,value,barcode) \
    ( (This)->lpVtbl->CreateWalletBarcode(This,symbology,value,barcode) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_CreateCustomWalletBarcode(This,streamToBarcodeImage,barcode) \
    ( (This)->lpVtbl->CreateCustomWalletBarcode(This,streamToBarcodeImage,barcode) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcodeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItem[] = L"Windows.ApplicationModel.Wallet.IWalletItem";
/* [object, uuid("20B54BE8-118D-4EC4-996C-B963E7BD3E74"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAcknowledged )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsAcknowledged )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IssuerDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IssuerDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastUpdated )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LastUpdated )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CWalletItemKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Barcode )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Barcode )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletBarcode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ExpirationDate )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Logo159x159 )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Logo159x159 )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Logo336x336 )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Logo336x336 )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Logo99x99 )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Logo99x99 )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayMessage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayMessage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDisplayMessageLaunchable )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsDisplayMessageLaunchable )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LogoText )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LogoText )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeaderColor )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeaderColor )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BodyColor )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BodyColor )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeaderFontColor )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeaderFontColor )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BodyFontColor )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BodyFontColor )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeaderBackgroundImage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeaderBackgroundImage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BodyBackgroundImage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BodyBackgroundImage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LogoImage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LogoImage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PromotionalImage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PromotionalImage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RelevantDate )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RelevantDate )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RelevantDateDisplayMessage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RelevantDateDisplayMessage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransactionHistory )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletTransaction * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RelevantLocations )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletRelevantLocation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMoreTransactionHistoryLaunchable )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsMoreTransactionHistoryLaunchable )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayProperties )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletItemCustomProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Verbs )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CApplicationModel__CWallet__CWalletVerb * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_IsAcknowledged(This,value) \
    ( (This)->lpVtbl->get_IsAcknowledged(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_IsAcknowledged(This,value) \
    ( (This)->lpVtbl->put_IsAcknowledged(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_IssuerDisplayName(This,value) \
    ( (This)->lpVtbl->get_IssuerDisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_IssuerDisplayName(This,value) \
    ( (This)->lpVtbl->put_IssuerDisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_LastUpdated(This,value) \
    ( (This)->lpVtbl->get_LastUpdated(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_LastUpdated(This,value) \
    ( (This)->lpVtbl->put_LastUpdated(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_Barcode(This,value) \
    ( (This)->lpVtbl->get_Barcode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_Barcode(This,value) \
    ( (This)->lpVtbl->put_Barcode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_ExpirationDate(This,value) \
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_ExpirationDate(This,value) \
    ( (This)->lpVtbl->put_ExpirationDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_Logo159x159(This,value) \
    ( (This)->lpVtbl->get_Logo159x159(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_Logo159x159(This,value) \
    ( (This)->lpVtbl->put_Logo159x159(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_Logo336x336(This,value) \
    ( (This)->lpVtbl->get_Logo336x336(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_Logo336x336(This,value) \
    ( (This)->lpVtbl->put_Logo336x336(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_Logo99x99(This,value) \
    ( (This)->lpVtbl->get_Logo99x99(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_Logo99x99(This,value) \
    ( (This)->lpVtbl->put_Logo99x99(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_DisplayMessage(This,value) \
    ( (This)->lpVtbl->get_DisplayMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_DisplayMessage(This,value) \
    ( (This)->lpVtbl->put_DisplayMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_IsDisplayMessageLaunchable(This,value) \
    ( (This)->lpVtbl->get_IsDisplayMessageLaunchable(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_IsDisplayMessageLaunchable(This,value) \
    ( (This)->lpVtbl->put_IsDisplayMessageLaunchable(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_LogoText(This,value) \
    ( (This)->lpVtbl->get_LogoText(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_LogoText(This,value) \
    ( (This)->lpVtbl->put_LogoText(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_HeaderColor(This,value) \
    ( (This)->lpVtbl->get_HeaderColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_HeaderColor(This,value) \
    ( (This)->lpVtbl->put_HeaderColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_BodyColor(This,value) \
    ( (This)->lpVtbl->get_BodyColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_BodyColor(This,value) \
    ( (This)->lpVtbl->put_BodyColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_HeaderFontColor(This,value) \
    ( (This)->lpVtbl->get_HeaderFontColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_HeaderFontColor(This,value) \
    ( (This)->lpVtbl->put_HeaderFontColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_BodyFontColor(This,value) \
    ( (This)->lpVtbl->get_BodyFontColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_BodyFontColor(This,value) \
    ( (This)->lpVtbl->put_BodyFontColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_HeaderBackgroundImage(This,value) \
    ( (This)->lpVtbl->get_HeaderBackgroundImage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_HeaderBackgroundImage(This,value) \
    ( (This)->lpVtbl->put_HeaderBackgroundImage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_BodyBackgroundImage(This,value) \
    ( (This)->lpVtbl->get_BodyBackgroundImage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_BodyBackgroundImage(This,value) \
    ( (This)->lpVtbl->put_BodyBackgroundImage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_LogoImage(This,value) \
    ( (This)->lpVtbl->get_LogoImage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_LogoImage(This,value) \
    ( (This)->lpVtbl->put_LogoImage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_PromotionalImage(This,value) \
    ( (This)->lpVtbl->get_PromotionalImage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_PromotionalImage(This,value) \
    ( (This)->lpVtbl->put_PromotionalImage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_RelevantDate(This,value) \
    ( (This)->lpVtbl->get_RelevantDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_RelevantDate(This,value) \
    ( (This)->lpVtbl->put_RelevantDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_RelevantDateDisplayMessage(This,value) \
    ( (This)->lpVtbl->get_RelevantDateDisplayMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_RelevantDateDisplayMessage(This,value) \
    ( (This)->lpVtbl->put_RelevantDateDisplayMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_TransactionHistory(This,value) \
    ( (This)->lpVtbl->get_TransactionHistory(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_RelevantLocations(This,value) \
    ( (This)->lpVtbl->get_RelevantLocations(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_IsMoreTransactionHistoryLaunchable(This,value) \
    ( (This)->lpVtbl->get_IsMoreTransactionHistoryLaunchable(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_put_IsMoreTransactionHistoryLaunchable(This,value) \
    ( (This)->lpVtbl->put_IsMoreTransactionHistoryLaunchable(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_DisplayProperties(This,value) \
    ( (This)->lpVtbl->get_DisplayProperties(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_get_Verbs(This,value) \
    ( (This)->lpVtbl->get_Verbs(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItemCustomProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItemCustomProperty
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItemCustomProperty[] = L"Windows.ApplicationModel.Wallet.IWalletItemCustomProperty";
/* [object, uuid("B94B40F3-FA00-40FD-98DC-9DE46697F1E7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoDetectLinks )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoDetectLinks )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DetailViewPosition )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CWalletDetailViewPosition * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DetailViewPosition )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CWallet_CWalletDetailViewPosition value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SummaryViewPosition )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CWalletSummaryViewPosition * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SummaryViewPosition )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CWallet_CWalletSummaryViewPosition value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_put_Name(This,value) \
    ( (This)->lpVtbl->put_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_get_AutoDetectLinks(This,value) \
    ( (This)->lpVtbl->get_AutoDetectLinks(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_put_AutoDetectLinks(This,value) \
    ( (This)->lpVtbl->put_AutoDetectLinks(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_get_DetailViewPosition(This,value) \
    ( (This)->lpVtbl->get_DetailViewPosition(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_put_DetailViewPosition(This,value) \
    ( (This)->lpVtbl->put_DetailViewPosition(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_get_SummaryViewPosition(This,value) \
    ( (This)->lpVtbl->get_SummaryViewPosition(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_put_SummaryViewPosition(This,value) \
    ( (This)->lpVtbl->put_SummaryViewPosition(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItemCustomPropertyFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItemCustomProperty
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItemCustomPropertyFactory[] = L"Windows.ApplicationModel.Wallet.IWalletItemCustomPropertyFactory";
/* [object, uuid("D0046A44-61A1-41AA-B259-A5610AB5D575"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWalletItemCustomProperty )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomProperty * * walletItemCustomProperty
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_CreateWalletItemCustomProperty(This,name,value,walletItemCustomProperty) \
    ( (This)->lpVtbl->CreateWalletItemCustomProperty(This,name,value,walletItemCustomProperty) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemCustomPropertyFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItemFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItemFactory[] = L"Windows.ApplicationModel.Wallet.IWalletItemFactory";
/* [object, uuid("53E27470-4F0B-4A3E-99E5-0BBB1EAB38D4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWalletItem )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CWallet_CWalletItemKind kind,
        /* [in] */__RPC__in HSTRING displayName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * * walletItem
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_CreateWalletItem(This,kind,displayName,walletItem) \
    ( (This)->lpVtbl->CreateWalletItem(This,kind,displayName,walletItem) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItemStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItemStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItemStore[] = L"Windows.ApplicationModel.Wallet.IWalletItemStore";
/* [object, uuid("7160484B-6D49-48F8-91A9-40A1D0F13EF4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * item,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ClearAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetWalletItemAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
        /* [in] */__RPC__in HSTRING id,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetItemsAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetItemsWithKindAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CWallet_CWalletItemKind kind,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ImportItemAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * stream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
        /* [in] */__RPC__in HSTRING id,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowItemAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
        /* [in] */__RPC__in HSTRING id,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem * item,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStoreVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_AddAsync(This,id,item,operation) \
    ( (This)->lpVtbl->AddAsync(This,id,item,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_ClearAsync(This,operation) \
    ( (This)->lpVtbl->ClearAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_GetWalletItemAsync(This,id,operation) \
    ( (This)->lpVtbl->GetWalletItemAsync(This,id,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_GetItemsAsync(This,operation) \
    ( (This)->lpVtbl->GetItemsAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_GetItemsWithKindAsync(This,kind,operation) \
    ( (This)->lpVtbl->GetItemsWithKindAsync(This,kind,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_ImportItemAsync(This,stream,operation) \
    ( (This)->lpVtbl->ImportItemAsync(This,stream,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_DeleteAsync(This,id,operation) \
    ( (This)->lpVtbl->DeleteAsync(This,id,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_ShowAsync(This,operation) \
    ( (This)->lpVtbl->ShowAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_ShowItemAsync(This,id,operation) \
    ( (This)->lpVtbl->ShowItemAsync(This,id,operation) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_UpdateAsync(This,item,operation) \
    ( (This)->lpVtbl->UpdateAsync(This,item,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletItemStore2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletItemStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletItemStore2[] = L"Windows.ApplicationModel.Wallet.IWalletItemStore2";
/* [object, uuid("65E682F0-7009-4A15-BD54-4FFF379BFFE2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ItemsChanged )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CWalletItemStore_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ItemsChanged )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2 * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_add_ItemsChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_ItemsChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_remove_ItemsChanged(This,cookie) \
    ( (This)->lpVtbl->remove_ItemsChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItemStore2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletManagerStatics[] = L"Windows.ApplicationModel.Wallet.IWalletManagerStatics";
/* [object, uuid("5111D6B8-C9A4-4C64-B4DD-E1E548001C0D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItemStore * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_RequestStoreAsync(This,operation) \
    ( (This)->lpVtbl->RequestStoreAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletRelevantLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletRelevantLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletRelevantLocation[] = L"Windows.ApplicationModel.Wallet.IWalletRelevantLocation";
/* [object, uuid("9FD8782A-E3F9-4DE1-BAB3-BB192E46B3F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayMessage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayMessage )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_put_Position(This,value) \
    ( (This)->lpVtbl->put_Position(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_get_DisplayMessage(This,value) \
    ( (This)->lpVtbl->get_DisplayMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_put_DisplayMessage(This,value) \
    ( (This)->lpVtbl->put_DisplayMessage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletRelevantLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletTransaction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletTransaction
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletTransaction[] = L"Windows.ApplicationModel.Wallet.IWalletTransaction";
/* [object, uuid("40E1E940-2606-4519-81CB-BFF1C60D1F79"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayAmount )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayAmount )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IgnoreTimeOfDay )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IgnoreTimeOfDay )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayLocation )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayLocation )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransactionDate )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TransactionDate )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsLaunchable )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsLaunchable )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransactionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransactionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_put_Description(This,value) \
    ( (This)->lpVtbl->put_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_get_DisplayAmount(This,value) \
    ( (This)->lpVtbl->get_DisplayAmount(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_put_DisplayAmount(This,value) \
    ( (This)->lpVtbl->put_DisplayAmount(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_get_IgnoreTimeOfDay(This,value) \
    ( (This)->lpVtbl->get_IgnoreTimeOfDay(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_put_IgnoreTimeOfDay(This,value) \
    ( (This)->lpVtbl->put_IgnoreTimeOfDay(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_get_DisplayLocation(This,value) \
    ( (This)->lpVtbl->get_DisplayLocation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_put_DisplayLocation(This,value) \
    ( (This)->lpVtbl->put_DisplayLocation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_get_TransactionDate(This,value) \
    ( (This)->lpVtbl->get_TransactionDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_put_TransactionDate(This,value) \
    ( (This)->lpVtbl->put_TransactionDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_get_IsLaunchable(This,value) \
    ( (This)->lpVtbl->get_IsLaunchable(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_put_IsLaunchable(This,value) \
    ( (This)->lpVtbl->put_IsLaunchable(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletTransaction_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletVerb
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletVerb
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletVerb[] = L"Windows.ApplicationModel.Wallet.IWalletVerb";
/* [object, uuid("17B826D6-E3C1-4C74-8A94-217AADBC4884"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_put_Name(This,value) \
    ( (This)->lpVtbl->put_Name(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Wallet.IWalletVerbFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Wallet.WalletVerb
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_IWalletVerbFactory[] = L"Windows.ApplicationModel.Wallet.IWalletVerbFactory";
/* [object, uuid("76012771-BE58-4D5E-83ED-58B1669C7AD9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWalletVerb )(
        __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerb * * WalletVerb
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_CreateWalletVerb(This,name,WalletVerb) \
    ( (This)->lpVtbl->CreateWalletVerb(This,name,WalletVerb) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CIWalletVerbFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletBarcode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Wallet.IWalletBarcodeFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletBarcode ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletBarcode_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletBarcode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletBarcode[] = L"Windows.ApplicationModel.Wallet.WalletBarcode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Wallet.IWalletItemFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletItem[] = L"Windows.ApplicationModel.Wallet.WalletItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletItemCustomProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Wallet.IWalletItemCustomPropertyFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletItemCustomProperty ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItemCustomProperty_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItemCustomProperty_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletItemCustomProperty[] = L"Windows.ApplicationModel.Wallet.WalletItemCustomProperty";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletItemStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletItemStore ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItemStore_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletItemStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletItemStore[] = L"Windows.ApplicationModel.Wallet.WalletItemStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Wallet.IWalletManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletManager[] = L"Windows.ApplicationModel.Wallet.WalletManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletRelevantLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletRelevantLocation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletRelevantLocation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletRelevantLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletRelevantLocation[] = L"Windows.ApplicationModel.Wallet.WalletRelevantLocation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletTransaction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletTransaction ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletTransaction_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletTransaction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletTransaction[] = L"Windows.ApplicationModel.Wallet.WalletTransaction";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Wallet.WalletVerb
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Wallet.IWalletVerbFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Wallet.IWalletVerb ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletVerb_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_WalletVerb_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_WalletVerb[] = L"Windows.ApplicationModel.Wallet.WalletVerb";
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
#endif // __windows2Eapplicationmodel2Ewallet_p_h__

#endif // __windows2Eapplicationmodel2Ewallet_h__
