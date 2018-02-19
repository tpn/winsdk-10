/* Header file automatically generated from windows.applicationmodel.userdataaccounts.provider.idl */
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
#ifndef __windows2Eapplicationmodel2Euserdataaccounts2Eprovider_h__
#define __windows2Eapplicationmodel2Euserdataaccounts2Eprovider_h__
#ifndef __windows2Eapplicationmodel2Euserdataaccounts2Eprovider_p_h__
#define __windows2Eapplicationmodel2Euserdataaccounts2Eprovider_p_h__


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
#include "Windows.ApplicationModel.UserDataAccounts.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    interface IUserDataAccountPartnerAccountInfo;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    interface IUserDataAccountProviderAddAccountOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    interface IUserDataAccountProviderResolveErrorsOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    interface IUserDataAccountProviderSettingsOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    class UserDataAccountPartnerAccountInfo;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac401b26-3ebf-5cbf-9643-c96a40ab40a2"))
IIterator<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo*, ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo*> __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_t;
#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo*>
//#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5cdb425e-da5a-55fa-b349-5467996cab32"))
IIterable<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo*, ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo*> __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_t;
#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo*>
//#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b730f093-e2fb-5b20-9d9e-4f9defe647b0"))
IVectorView<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo*, ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo*> __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_t;
#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo*>
//#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                
                typedef enum UserDataAccountContentKinds : unsigned int UserDataAccountContentKinds;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* UserDataAccounts */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    
                    typedef enum UserDataAccountProviderOperationKind : int UserDataAccountProviderOperationKind;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    
                    typedef enum UserDataAccountProviderPartnerAccountKind : int UserDataAccountProviderPartnerAccountKind;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    class UserDataAccountProviderAddAccountOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    class UserDataAccountProviderResolveErrorsOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    class UserDataAccountProviderSettingsOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */












/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderOperationKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum UserDataAccountProviderOperationKind : int
                    {
                        UserDataAccountProviderOperationKind_AddAccount = 0,
                        UserDataAccountProviderOperationKind_Settings = 1,
                        UserDataAccountProviderOperationKind_ResolveErrors = 2,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderPartnerAccountKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum UserDataAccountProviderPartnerAccountKind : int
                    {
                        UserDataAccountProviderPartnerAccountKind_Exchange = 0,
                        UserDataAccountProviderPartnerAccountKind_PopOrImap = 1,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountPartnerAccountInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountPartnerAccountInfo[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountPartnerAccountInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    /* [object, uuid("5F200037-F6EF-4EC3-8630-012C59C1149F"), exclusiveto, contract] */
                    MIDL_INTERFACE("5F200037-F6EF-4EC3-8630-012C59C1149F")
                    IUserDataAccountPartnerAccountInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Priority(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccountKind(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataAccountPartnerAccountInfo=_uuidof(IUserDataAccountPartnerAccountInfo);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderAddAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderAddAccountOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderAddAccountOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderAddAccountOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    /* [object, uuid("B9C72530-3F84-4B5D-8EAA-45E97AA842ED"), exclusiveto, contract] */
                    MIDL_INTERFACE("B9C72530-3F84-4B5D-8EAA-45E97AA842ED")
                    IUserDataAccountProviderAddAccountOperation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentKinds(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PartnerAccountInfos(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompleted(
                            /* [in] */__RPC__in HSTRING userDataAccountId
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataAccountProviderAddAccountOperation=_uuidof(IUserDataAccountProviderAddAccountOperation);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    /* [object, uuid("A20AAD63-888C-4A62-A3DD-34D07A802B2B"), contract] */
                    MIDL_INTERFACE("A20AAD63-888C-4A62-A3DD-34D07A802B2B")
                    IUserDataAccountProviderOperation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataAccountProviderOperation=_uuidof(IUserDataAccountProviderOperation);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderResolveErrorsOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderResolveErrorsOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderResolveErrorsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderResolveErrorsOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    /* [object, uuid("6235DC15-BFCB-41E1-9957-9759A28846CC"), exclusiveto, contract] */
                    MIDL_INTERFACE("6235DC15-BFCB-41E1-9957-9759A28846CC")
                    IUserDataAccountProviderResolveErrorsOperation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserDataAccountId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompleted(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataAccountProviderResolveErrorsOperation=_uuidof(IUserDataAccountProviderResolveErrorsOperation);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderSettingsOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderSettingsOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderSettingsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderSettingsOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace Provider {
                    /* [object, uuid("92034DB7-8648-4F30-ACFA-3002658CA80D"), exclusiveto, contract] */
                    MIDL_INTERFACE("92034DB7-8648-4F30-ACFA-3002658CA80D")
                    IUserDataAccountProviderSettingsOperation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserDataAccountId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompleted(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataAccountProviderSettingsOperation=_uuidof(IUserDataAccountProviderSettingsOperation);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountPartnerAccountInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountPartnerAccountInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountPartnerAccountInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountPartnerAccountInfo[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderAddAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderAddAccountOperation ** Default Interface **
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderAddAccountOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderAddAccountOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderAddAccountOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderAddAccountOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderResolveErrorsOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderResolveErrorsOperation ** Default Interface **
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderResolveErrorsOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderResolveErrorsOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderResolveErrorsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderResolveErrorsOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderSettingsOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderSettingsOperation ** Default Interface **
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderSettingsOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderSettingsOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderSettingsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderSettingsOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;

typedef struct __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountContentKinds __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountContentKinds;








typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderOperationKind __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderOperationKind;


typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderPartnerAccountKind __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderPartnerAccountKind;




















/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderOperationKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderOperationKind
{
    UserDataAccountProviderOperationKind_AddAccount = 0,
    UserDataAccountProviderOperationKind_Settings = 1,
    UserDataAccountProviderOperationKind_ResolveErrors = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderPartnerAccountKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderPartnerAccountKind
{
    UserDataAccountProviderPartnerAccountKind_Exchange = 0,
    UserDataAccountProviderPartnerAccountKind_PopOrImap = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountPartnerAccountInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountPartnerAccountInfo[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountPartnerAccountInfo";
/* [object, uuid("5F200037-F6EF-4EC3-8630-012C59C1149F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Priority )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccountKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderPartnerAccountKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_get_Priority(This,value) \
    ( (This)->lpVtbl->get_Priority(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_get_AccountKind(This,value) \
    ( (This)->lpVtbl->get_AccountKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderAddAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderAddAccountOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderAddAccountOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderAddAccountOperation";
/* [object, uuid("B9C72530-3F84-4B5D-8EAA-45E97AA842ED"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentKinds )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountContentKinds * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PartnerAccountInfos )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
        /* [in] */__RPC__in HSTRING userDataAccountId
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_get_ContentKinds(This,value) \
    ( (This)->lpVtbl->get_ContentKinds(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_get_PartnerAccountInfos(This,value) \
    ( (This)->lpVtbl->get_PartnerAccountInfos(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_ReportCompleted(This,userDataAccountId) \
    ( (This)->lpVtbl->ReportCompleted(This,userDataAccountId) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation";
/* [object, uuid("A20AAD63-888C-4A62-A3DD-34D07A802B2B"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderOperationKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderResolveErrorsOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderResolveErrorsOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderResolveErrorsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderResolveErrorsOperation";
/* [object, uuid("6235DC15-BFCB-41E1-9957-9759A28846CC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserDataAccountId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_get_UserDataAccountId(This,value) \
    ( (This)->lpVtbl->get_UserDataAccountId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_ReportCompleted(This) \
    ( (This)->lpVtbl->ReportCompleted(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderSettingsOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderSettingsOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderSettingsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderSettingsOperation";
/* [object, uuid("92034DB7-8648-4F30-ACFA-3002658CA80D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserDataAccountId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_get_UserDataAccountId(This,value) \
    ( (This)->lpVtbl->get_UserDataAccountId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_ReportCompleted(This) \
    ( (This)->lpVtbl->ReportCompleted(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountPartnerAccountInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountPartnerAccountInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountPartnerAccountInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountPartnerAccountInfo[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderAddAccountOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderAddAccountOperation ** Default Interface **
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderAddAccountOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderAddAccountOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderAddAccountOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderAddAccountOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderResolveErrorsOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderResolveErrorsOperation ** Default Interface **
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderResolveErrorsOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderResolveErrorsOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderResolveErrorsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderResolveErrorsOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderSettingsOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderSettingsOperation ** Default Interface **
 *    Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderSettingsOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderSettingsOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderSettingsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderSettingsOperation";
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
#endif // __windows2Eapplicationmodel2Euserdataaccounts2Eprovider_p_h__

#endif // __windows2Eapplicationmodel2Euserdataaccounts2Eprovider_h__
