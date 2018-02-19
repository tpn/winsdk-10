/* Header file automatically generated from windows.applicationmodel.store.licensemanagement.idl */
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
#ifndef __windows2Eapplicationmodel2Estore2Elicensemanagement_h__
#define __windows2Eapplicationmodel2Estore2Elicensemanagement_h__
#ifndef __windows2Eapplicationmodel2Estore2Elicensemanagement_p_h__
#define __windows2Eapplicationmodel2Estore2Elicensemanagement_p_h__


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
#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    interface ILicenseManagerStatics;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    interface ILicenseManagerStatics2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    interface ILicenseSatisfactionInfo;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    interface ILicenseSatisfactionResult;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    class LicenseSatisfactionInfo;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("69426b8f-88d8-5546-92ee-53f75307845b"))
IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo*, ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo*> __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("168d4306-e80a-5e37-ae46-2ceecdd7fc9a"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac935021-e04b-5226-8119-5b73d0b8be5b"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE
#define DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("19df5e64-c2b2-5bfd-a259-f02c23574cd3"))
IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo*, ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo*> __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t;
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo*>
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    class LicenseSatisfactionResult;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("936e8471-252f-5339-89c3-9428412086ca"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult*, ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b8447bc9-a9f8-5867-8b30-cd34720edc31"))
IAsyncOperation<ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult*, ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult*> __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


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
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    
                    typedef enum LicenseRefreshOption : int LicenseRefreshOption;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */


















/*
 *
 * Struct Windows.ApplicationModel.Store.LicenseManagement.LicenseRefreshOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    /* [v1_enum, contract] */
                    enum LicenseRefreshOption : int
                    {
                        LicenseRefreshOption_RunningLicenses = 0,
                        LicenseRefreshOption_AllLicenses = 1,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.LicenseManagement.LicenseManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    /* [object, uuid("B5AC3AE0-DA47-4F20-9A23-09182C9476FF"), exclusiveto, contract] */
                    MIDL_INTERFACE("B5AC3AE0-DA47-4F20-9A23-09182C9476FF")
                    ILicenseManagerStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE AddLicenseAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * license,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSatisfactionInfosAsync(
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * contentIds,
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * keyIds,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILicenseManagerStatics=_uuidof(ILicenseManagerStatics);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.LicenseManagement.LicenseManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics2[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    /* [object, uuid("AB2EC47B-1F79-4480-B87E-2C499E601BA3"), exclusiveto, contract] */
                    MIDL_INTERFACE("AB2EC47B-1F79-4480-B87E-2C499E601BA3")
                    ILicenseManagerStatics2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE RefreshLicensesAsync(
                            /* [in] */ABI::Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption refreshOption,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILicenseManagerStatics2=_uuidof(ILicenseManagerStatics2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    /* [object, uuid("3CCBB08F-DB31-48D5-8384-FA17C81474E2"), exclusiveto, contract] */
                    MIDL_INTERFACE("3CCBB08F-DB31-48D5-8384-FA17C81474E2")
                    ILicenseSatisfactionInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SatisfiedByDevice(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SatisfiedByOpenLicense(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SatisfiedByTrial(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SatisfiedByPass(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SatisfiedByInstallMedia(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SatisfiedBySignedInUser(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSatisfied(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILicenseSatisfactionInfo=_uuidof(ILicenseSatisfactionInfo);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionResult[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionResult";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace LicenseManagement {
                    /* [object, uuid("3C674F73-3C87-4EE1-8201-F428359BD3AF"), exclusiveto, contract] */
                    MIDL_INTERFACE("3C674F73-3C87-4EE1-8201-F428359BD3AF")
                    ILicenseSatisfactionResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LicenseSatisfactionInfos(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                            /* [retval, out] */__RPC__out HRESULT * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILicenseSatisfactionResult=_uuidof(ILicenseSatisfactionResult);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* LicenseManagement */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Store.LicenseManagement.LicenseManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseManagement_LicenseManager[] = L"Windows.ApplicationModel.Store.LicenseManagement.LicenseManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionInfo[] = L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionResult[] = L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;

typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl;

interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

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



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CLicenseRefreshOption __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CLicenseRefreshOption;


















/*
 *
 * Struct Windows.ApplicationModel.Store.LicenseManagement.LicenseRefreshOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CLicenseRefreshOption
{
    LicenseRefreshOption_RunningLicenses = 0,
    LicenseRefreshOption_AllLicenses = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.LicenseManagement.LicenseManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics";
/* [object, uuid("B5AC3AE0-DA47-4F20-9A23-09182C9476FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddLicenseAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * license,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *GetSatisfactionInfosAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * contentIds,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * keyIds,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_AddLicenseAsync(This,license,action) \
    ( (This)->lpVtbl->AddLicenseAsync(This,license,action) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_GetSatisfactionInfosAsync(This,contentIds,keyIds,operation) \
    ( (This)->lpVtbl->GetSatisfactionInfosAsync(This,contentIds,keyIds,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.LicenseManagement.LicenseManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics2[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics2";
/* [object, uuid("AB2EC47B-1F79-4480-B87E-2C499E601BA3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RefreshLicensesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CLicenseRefreshOption refreshOption,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_RefreshLicensesAsync(This,refreshOption,action) \
    ( (This)->lpVtbl->RefreshLicensesAsync(This,refreshOption,action) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionInfo";
/* [object, uuid("3CCBB08F-DB31-48D5-8384-FA17C81474E2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SatisfiedByDevice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SatisfiedByOpenLicense )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SatisfiedByTrial )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SatisfiedByPass )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SatisfiedByInstallMedia )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SatisfiedBySignedInUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSatisfied )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_get_SatisfiedByDevice(This,value) \
    ( (This)->lpVtbl->get_SatisfiedByDevice(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_get_SatisfiedByOpenLicense(This,value) \
    ( (This)->lpVtbl->get_SatisfiedByOpenLicense(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_get_SatisfiedByTrial(This,value) \
    ( (This)->lpVtbl->get_SatisfiedByTrial(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_get_SatisfiedByPass(This,value) \
    ( (This)->lpVtbl->get_SatisfiedByPass(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_get_SatisfiedByInstallMedia(This,value) \
    ( (This)->lpVtbl->get_SatisfiedByInstallMedia(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_get_SatisfiedBySignedInUser(This,value) \
    ( (This)->lpVtbl->get_SatisfiedBySignedInUser(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_get_IsSatisfied(This,value) \
    ( (This)->lpVtbl->get_IsSatisfied(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionResult[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionResult";
/* [object, uuid("3C674F73-3C87-4EE1-8201-F428359BD3AF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LicenseSatisfactionInfos )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResultVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_get_LicenseSatisfactionInfos(This,value) \
    ( (This)->lpVtbl->get_LicenseSatisfactionInfos(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Store.LicenseManagement.LicenseManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseManagement_LicenseManager[] = L"Windows.ApplicationModel.Store.LicenseManagement.LicenseManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionInfo[] = L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionResult[] = L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult";
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
#endif // __windows2Eapplicationmodel2Estore2Elicensemanagement_p_h__

#endif // __windows2Eapplicationmodel2Estore2Elicensemanagement_h__
