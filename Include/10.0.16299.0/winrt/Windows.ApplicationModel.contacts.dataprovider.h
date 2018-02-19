/* Header file automatically generated from windows.applicationmodel.contacts.dataprovider.idl */
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
#ifndef __windows2Eapplicationmodel2Econtacts2Edataprovider_h__
#define __windows2Eapplicationmodel2Econtacts2Edataprovider_h__
#ifndef __windows2Eapplicationmodel2Econtacts2Edataprovider_p_h__
#define __windows2Eapplicationmodel2Econtacts2Edataprovider_p_h__


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
#include "Windows.ApplicationModel.Contacts.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactDataProviderConnection;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactDataProviderConnection2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactDataProviderTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactListCreateOrUpdateContactRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactListCreateOrUpdateContactRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactListDeleteContactRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactListDeleteContactRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactListServerSearchReadBatchRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactListServerSearchReadBatchRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactListSyncManagerSyncRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    interface IContactListSyncManagerSyncRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    class ContactDataProviderConnection;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    class ContactListCreateOrUpdateContactRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9b90aab6-7ba3-5169-b73c-7e6413d2bd57"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*, ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs*, ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection, Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    class ContactListDeleteContactRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9ff3c767-b488-53e2-a494-32706161ca01"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*, ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs*, ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection, Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    class ContactListServerSearchReadBatchRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("baee1b2f-a5b6-5a03-ae59-fb18f3e025b7"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*, ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs*, ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection, Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    class ContactListSyncManagerSyncRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bb9f410f-a739-5280-9bb7-b6a938c7a620"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*, ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs*, ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection, Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection*,ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                class Contact;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                interface IContact;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CIContact ABI::Windows::ApplicationModel::Contacts::IContact

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                
                typedef enum ContactBatchStatus : int ContactBatchStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                class ContactQueryOptions;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                interface IContactQueryOptions;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions ABI::Windows::ApplicationModel::Contacts::IContactQueryOptions

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Deferral;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IDeferral;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIDeferral ABI::Windows::Foundation::IDeferral

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


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
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    class ContactDataProviderTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    class ContactListCreateOrUpdateContactRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    class ContactListDeleteContactRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    class ContactListServerSearchReadBatchRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    class ContactListSyncManagerSyncRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */













/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("1A398A52-8C9D-4D6F-A4E0-111E9A125A30"), exclusiveto, contract] */
                    MIDL_INTERFACE("1A398A52-8C9D-4D6F-A4E0-111E9A125A30")
                    IContactDataProviderConnection : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SyncRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SyncRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ServerSearchReadBatchRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ServerSearchReadBatchRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactDataProviderConnection=_uuidof(IContactDataProviderConnection);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("A1D327B0-196C-4BFD-8F0F-C68D67F249D3"), exclusiveto, contract] */
                    MIDL_INTERFACE("A1D327B0-196C-4BFD-8F0F-C68D67F249D3")
                    IContactDataProviderConnection2 : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CreateOrUpdateContactRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CreateOrUpdateContactRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DeleteContactRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DeleteContactRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactDataProviderConnection2=_uuidof(IContactDataProviderConnection2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("527104BE-3C62-43C8-9AE7-DB531685CD99"), exclusiveto, contract] */
                    MIDL_INTERFACE("527104BE-3C62-43C8-9AE7-DB531685CD99")
                    IContactDataProviderTriggerDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Connection(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactDataProviderTriggerDetails=_uuidof(IContactDataProviderTriggerDetails);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("B4AF411F-C849-47D0-B119-91CF605B2F2A"), exclusiveto, contract] */
                    MIDL_INTERFACE("B4AF411F-C849-47D0-B119-91CF605B2F2A")
                    IContactListCreateOrUpdateContactRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactListId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::IContact * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Contacts::IContact * createdOrUpdatedContact,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactListCreateOrUpdateContactRequest=_uuidof(IContactListCreateOrUpdateContactRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("851C1690-1A51-4B0C-AEEF-1240AC5BED75"), exclusiveto, contract] */
                    MIDL_INTERFACE("851C1690-1A51-4B0C-AEEF-1240AC5BED75")
                    IContactListCreateOrUpdateContactRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactListCreateOrUpdateContactRequestEventArgs=_uuidof(IContactListCreateOrUpdateContactRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("5E114687-CE03-4DE5-8557-9CCF552D472A"), exclusiveto, contract] */
                    MIDL_INTERFACE("5E114687-CE03-4DE5-8557-9CCF552D472A")
                    IContactListDeleteContactRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactListId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactListDeleteContactRequest=_uuidof(IContactListDeleteContactRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("B22054A1-E8FA-4DB5-9389-2D12EE7D15EE"), exclusiveto, contract] */
                    MIDL_INTERFACE("B22054A1-E8FA-4DB5-9389-2D12EE7D15EE")
                    IContactListDeleteContactRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactListDeleteContactRequestEventArgs=_uuidof(IContactListDeleteContactRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("BA776A97-4030-4925-9FB4-143B295E653B"), exclusiveto, contract] */
                    MIDL_INTERFACE("BA776A97-4030-4925-9FB4-143B295E653B")
                    IContactListServerSearchReadBatchRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactListId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::IContactQueryOptions * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SuggestedBatchSize(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SaveContactAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Contacts::IContact * contact,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [in] */ABI::Windows::ApplicationModel::Contacts::ContactBatchStatus batchStatus,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactListServerSearchReadBatchRequest=_uuidof(IContactListServerSearchReadBatchRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("1A27E87B-69D7-4E4E-8042-861CBA61471E"), exclusiveto, contract] */
                    MIDL_INTERFACE("1A27E87B-69D7-4E4E-8042-861CBA61471E")
                    IContactListServerSearchReadBatchRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactListServerSearchReadBatchRequestEventArgs=_uuidof(IContactListServerSearchReadBatchRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("3C0E57A4-C4E7-4970-9A8F-9A66A2BB6C1A"), exclusiveto, contract] */
                    MIDL_INTERFACE("3C0E57A4-C4E7-4970-9A8F-9A66A2BB6C1A")
                    IContactListSyncManagerSyncRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactListId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactListSyncManagerSyncRequest=_uuidof(IContactListSyncManagerSyncRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace DataProvider {
                    /* [object, uuid("158E4DAC-446D-4F10-AFC2-02683EC533A6"), exclusiveto, contract] */
                    MIDL_INTERFACE("158E4DAC-446D-4F10-AFC2-02683EC533A6")
                    IContactListSyncManagerSyncRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactListSyncManagerSyncRequestEventArgs=_uuidof(IContactListSyncManagerSyncRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection ** Default Interface **
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderConnection[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact __x_ABI_CWindows_CApplicationModel_CContacts_CIContact;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactBatchStatus __x_ABI_CWindows_CApplicationModel_CContacts_CContactBatchStatus;

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__




































/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection";
/* [object, uuid("1A398A52-8C9D-4D6F-A4E0-111E9A125A30"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ServerSearchReadBatchRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ServerSearchReadBatchRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnectionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_add_SyncRequested(This,handler,token) \
    ( (This)->lpVtbl->add_SyncRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_remove_SyncRequested(This,token) \
    ( (This)->lpVtbl->remove_SyncRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_add_ServerSearchReadBatchRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ServerSearchReadBatchRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_remove_ServerSearchReadBatchRequested(This,token) \
    ( (This)->lpVtbl->remove_ServerSearchReadBatchRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_Start(This) \
    ( (This)->lpVtbl->Start(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection2";
/* [object, uuid("A1D327B0-196C-4BFD-8F0F-C68D67F249D3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CreateOrUpdateContactRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CreateOrUpdateContactRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DeleteContactRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DeleteContactRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_add_CreateOrUpdateContactRequested(This,handler,token) \
    ( (This)->lpVtbl->add_CreateOrUpdateContactRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_remove_CreateOrUpdateContactRequested(This,token) \
    ( (This)->lpVtbl->remove_CreateOrUpdateContactRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_add_DeleteContactRequested(This,handler,token) \
    ( (This)->lpVtbl->add_DeleteContactRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_remove_DeleteContactRequested(This,token) \
    ( (This)->lpVtbl->remove_DeleteContactRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderTriggerDetails";
/* [object, uuid("527104BE-3C62-43C8-9AE7-DB531685CD99"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_get_Connection(This,value) \
    ( (This)->lpVtbl->get_Connection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequest";
/* [object, uuid("B4AF411F-C849-47D0-B119-91CF605B2F2A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * createdOrUpdatedContact,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_get_ContactListId(This,value) \
    ( (This)->lpVtbl->get_ContactListId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_ReportCompletedAsync(This,createdOrUpdatedContact,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,createdOrUpdatedContact,result) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequestEventArgs";
/* [object, uuid("851C1690-1A51-4B0C-AEEF-1240AC5BED75"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequest";
/* [object, uuid("5E114687-CE03-4DE5-8557-9CCF552D472A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_get_ContactListId(This,value) \
    ( (This)->lpVtbl->get_ContactListId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_get_ContactId(This,value) \
    ( (This)->lpVtbl->get_ContactId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequestEventArgs";
/* [object, uuid("B22054A1-E8FA-4DB5-9389-2D12EE7D15EE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequest";
/* [object, uuid("BA776A97-4030-4925-9FB4-143B295E653B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SuggestedBatchSize )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CContacts_CContactBatchStatus batchStatus,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_get_SessionId(This,value) \
    ( (This)->lpVtbl->get_SessionId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_get_ContactListId(This,value) \
    ( (This)->lpVtbl->get_ContactListId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_get_Options(This,value) \
    ( (This)->lpVtbl->get_Options(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_get_SuggestedBatchSize(This,value) \
    ( (This)->lpVtbl->get_SuggestedBatchSize(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_SaveContactAsync(This,contact,result) \
    ( (This)->lpVtbl->SaveContactAsync(This,contact,result) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_ReportFailedAsync(This,batchStatus,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,batchStatus,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequestEventArgs";
/* [object, uuid("1A27E87B-69D7-4E4E-8042-861CBA61471E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequest";
/* [object, uuid("3C0E57A4-C4E7-4970-9A8F-9A66A2BB6C1A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_get_ContactListId(This,value) \
    ( (This)->lpVtbl->get_ContactListId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequestEventArgs";
/* [object, uuid("158E4DAC-446D-4F10-AFC2-02683EC533A6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection ** Default Interface **
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderConnection[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequestEventArgs";
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
#endif // __windows2Eapplicationmodel2Econtacts2Edataprovider_p_h__

#endif // __windows2Eapplicationmodel2Econtacts2Edataprovider_h__
