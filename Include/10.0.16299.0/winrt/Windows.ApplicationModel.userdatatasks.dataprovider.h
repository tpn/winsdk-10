/* Header file automatically generated from windows.applicationmodel.userdatatasks.dataprovider.idl */
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
#ifndef __windows2Eapplicationmodel2Euserdatatasks2Edataprovider_h__
#define __windows2Eapplicationmodel2Euserdatatasks2Edataprovider_h__
#ifndef __windows2Eapplicationmodel2Euserdatatasks2Edataprovider_p_h__
#define __windows2Eapplicationmodel2Euserdatatasks2Edataprovider_p_h__


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
#include "Windows.ApplicationModel.UserDataTasks.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskDataProviderConnection;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskDataProviderTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskListCompleteTaskRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskListCompleteTaskRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskListCreateOrUpdateTaskRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskListCreateOrUpdateTaskRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskListDeleteTaskRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskListDeleteTaskRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskListSkipOccurrenceRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskListSkipOccurrenceRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskListSyncManagerSyncRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    interface IUserDataTaskListSyncManagerSyncRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskDataProviderConnection;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskListCompleteTaskRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6035f9f7-d4c5-5394-b0e3-5d606987ba47"))
ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*, ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs*, ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection, Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskListCreateOrUpdateTaskRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("28adf45c-6807-5590-a7f1-934747937592"))
ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*, ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs*, ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection, Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskListDeleteTaskRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0b18e688-b269-5ca2-a8f3-d6d10f0fb320"))
ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*, ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs*, ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection, Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskListSkipOccurrenceRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0887b178-c546-5ac8-ae10-3292ab5265bc"))
ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*, ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs*, ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection, Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskListSyncManagerSyncRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b164e8ef-167c-5852-a792-0930b4001871"))
ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*, ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs*, ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection, Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection*,ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                class UserDataTask;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserDataTasks */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                interface IUserDataTask;
            } /* Windows */
        } /* ApplicationModel */
    } /* UserDataTasks */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTask

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask_FWD_DEFINED__





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
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskDataProviderTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskListCompleteTaskRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskListCreateOrUpdateTaskRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskListDeleteTaskRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskListSkipOccurrenceRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    class UserDataTaskListSyncManagerSyncRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */













/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskDataProviderConnection[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderConnection";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("9FF39D1D-A447-428B-AFE9-E5402BDEB041"), exclusiveto, contract] */
                    MIDL_INTERFACE("9FF39D1D-A447-428B-AFE9-E5402BDEB041")
                    IUserDataTaskDataProviderConnection : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CreateOrUpdateTaskRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CreateOrUpdateTaskRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SyncRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SyncRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SkipOccurrenceRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SkipOccurrenceRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CompleteTaskRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CompleteTaskRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DeleteTaskRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DeleteTaskRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskDataProviderConnection=_uuidof(IUserDataTaskDataProviderConnection);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskDataProviderTriggerDetails[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("AE273202-B1C9-453E-AFC5-B30AF3BD217D"), exclusiveto, contract] */
                    MIDL_INTERFACE("AE273202-B1C9-453E-AFC5-B30AF3BD217D")
                    IUserDataTaskDataProviderTriggerDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Connection(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskDataProviderTriggerDetails=_uuidof(IUserDataTaskDataProviderTriggerDetails);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCompleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("F65E14A3-1A42-49DA-8552-2873E52C55EB"), exclusiveto, contract] */
                    MIDL_INTERFACE("F65E14A3-1A42-49DA-8552-2873E52C55EB")
                    IUserDataTaskListCompleteTaskRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskListId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [in] */__RPC__in HSTRING completedTaskId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskListCompleteTaskRequest=_uuidof(IUserDataTaskListCompleteTaskRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCompleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("D77C393D-4CF2-48AD-87FD-963F0EAA7A95"), exclusiveto, contract] */
                    MIDL_INTERFACE("D77C393D-4CF2-48AD-87FD-963F0EAA7A95")
                    IUserDataTaskListCompleteTaskRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskListCompleteTaskRequestEventArgs=_uuidof(IUserDataTaskListCompleteTaskRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCreateOrUpdateTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("2133772C-55C2-4300-8279-04326E07CCE4"), exclusiveto, contract] */
                    MIDL_INTERFACE("2133772C-55C2-4300-8279-04326E07CCE4")
                    IUserDataTaskListCreateOrUpdateTaskRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskListId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Task(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTask * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTask * createdOrUpdatedUserDataTask,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskListCreateOrUpdateTaskRequest=_uuidof(IUserDataTaskListCreateOrUpdateTaskRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCreateOrUpdateTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("12C55A52-E378-419B-AE38-A5E9E604476E"), exclusiveto, contract] */
                    MIDL_INTERFACE("12C55A52-E378-419B-AE38-A5E9E604476E")
                    IUserDataTaskListCreateOrUpdateTaskRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskListCreateOrUpdateTaskRequestEventArgs=_uuidof(IUserDataTaskListCreateOrUpdateTaskRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListDeleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("4B863C68-7657-4F3D-B074-D47EC8DF07E7"), exclusiveto, contract] */
                    MIDL_INTERFACE("4B863C68-7657-4F3D-B074-D47EC8DF07E7")
                    IUserDataTaskListDeleteTaskRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskListId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskListDeleteTaskRequest=_uuidof(IUserDataTaskListDeleteTaskRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListDeleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("6063DAD9-F562-4145-8EFE-D50078C92B7F"), exclusiveto, contract] */
                    MIDL_INTERFACE("6063DAD9-F562-4145-8EFE-D50078C92B7F")
                    IUserDataTaskListDeleteTaskRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskListDeleteTaskRequestEventArgs=_uuidof(IUserDataTaskListDeleteTaskRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSkipOccurrenceRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("AB87E34D-1CD3-431C-9F58-089AA4338D85"), exclusiveto, contract] */
                    MIDL_INTERFACE("AB87E34D-1CD3-431C-9F58-089AA4338D85")
                    IUserDataTaskListSkipOccurrenceRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskListId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskListSkipOccurrenceRequest=_uuidof(IUserDataTaskListSkipOccurrenceRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSkipOccurrenceRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("7A3B924A-CC2F-4E7B-AACD-A5B9D29CFA4E"), exclusiveto, contract] */
                    MIDL_INTERFACE("7A3B924A-CC2F-4E7B-AACD-A5B9D29CFA4E")
                    IUserDataTaskListSkipOccurrenceRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskListSkipOccurrenceRequestEventArgs=_uuidof(IUserDataTaskListSkipOccurrenceRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("40A73807-7590-4149-AE19-B211431A9F48"), exclusiveto, contract] */
                    MIDL_INTERFACE("40A73807-7590-4149-AE19-B211431A9F48")
                    IUserDataTaskListSyncManagerSyncRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskListId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskListSyncManagerSyncRequest=_uuidof(IUserDataTaskListSyncManagerSyncRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataTasks {
                namespace DataProvider {
                    /* [object, uuid("8EAD1C12-768E-43BD-8385-5CDC351FFDEA"), exclusiveto, contract] */
                    MIDL_INTERFACE("8EAD1C12-768E-43BD-8385-5CDC351FFDEA")
                    IUserDataTaskListSyncManagerSyncRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataTaskListSyncManagerSyncRequestEventArgs=_uuidof(IUserDataTaskListSyncManagerSyncRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataTasks */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderConnection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderConnection[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderTriggerDetails[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask_FWD_DEFINED__





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
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskDataProviderConnection[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderConnection";
/* [object, uuid("9FF39D1D-A447-428B-AFE9-E5402BDEB041"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CreateOrUpdateTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CreateOrUpdateTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SkipOccurrenceRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SkipOccurrenceRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CompleteTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CompleteTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DeleteTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DeleteTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnectionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_add_CreateOrUpdateTaskRequested(This,handler,token) \
    ( (This)->lpVtbl->add_CreateOrUpdateTaskRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_remove_CreateOrUpdateTaskRequested(This,token) \
    ( (This)->lpVtbl->remove_CreateOrUpdateTaskRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_add_SyncRequested(This,handler,token) \
    ( (This)->lpVtbl->add_SyncRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_remove_SyncRequested(This,token) \
    ( (This)->lpVtbl->remove_SyncRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_add_SkipOccurrenceRequested(This,handler,token) \
    ( (This)->lpVtbl->add_SkipOccurrenceRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_remove_SkipOccurrenceRequested(This,token) \
    ( (This)->lpVtbl->remove_SkipOccurrenceRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_add_CompleteTaskRequested(This,handler,token) \
    ( (This)->lpVtbl->add_CompleteTaskRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_remove_CompleteTaskRequested(This,token) \
    ( (This)->lpVtbl->remove_CompleteTaskRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_add_DeleteTaskRequested(This,handler,token) \
    ( (This)->lpVtbl->add_DeleteTaskRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_remove_DeleteTaskRequested(This,token) \
    ( (This)->lpVtbl->remove_DeleteTaskRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_Start(This) \
    ( (This)->lpVtbl->Start(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskDataProviderTriggerDetails[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderTriggerDetails";
/* [object, uuid("AE273202-B1C9-453E-AFC5-B30AF3BD217D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_get_Connection(This,value) \
    ( (This)->lpVtbl->get_Connection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCompleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequest";
/* [object, uuid("F65E14A3-1A42-49DA-8552-2873E52C55EB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
        /* [in] */__RPC__in HSTRING completedTaskId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_get_TaskListId(This,value) \
    ( (This)->lpVtbl->get_TaskListId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_get_TaskId(This,value) \
    ( (This)->lpVtbl->get_TaskId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_ReportCompletedAsync(This,completedTaskId,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,completedTaskId,result) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCompleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequestEventArgs";
/* [object, uuid("D77C393D-4CF2-48AD-87FD-963F0EAA7A95"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCreateOrUpdateTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequest";
/* [object, uuid("2133772C-55C2-4300-8279-04326E07CCE4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Task )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * createdOrUpdatedUserDataTask,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_get_TaskListId(This,value) \
    ( (This)->lpVtbl->get_TaskListId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_get_Task(This,value) \
    ( (This)->lpVtbl->get_Task(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_ReportCompletedAsync(This,createdOrUpdatedUserDataTask,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,createdOrUpdatedUserDataTask,result) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCreateOrUpdateTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequestEventArgs";
/* [object, uuid("12C55A52-E378-419B-AE38-A5E9E604476E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListDeleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequest";
/* [object, uuid("4B863C68-7657-4F3D-B074-D47EC8DF07E7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_get_TaskListId(This,value) \
    ( (This)->lpVtbl->get_TaskListId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_get_TaskId(This,value) \
    ( (This)->lpVtbl->get_TaskId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListDeleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequestEventArgs";
/* [object, uuid("6063DAD9-F562-4145-8EFE-D50078C92B7F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSkipOccurrenceRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequest";
/* [object, uuid("AB87E34D-1CD3-431C-9F58-089AA4338D85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_get_TaskListId(This,value) \
    ( (This)->lpVtbl->get_TaskListId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_get_TaskId(This,value) \
    ( (This)->lpVtbl->get_TaskId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSkipOccurrenceRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequestEventArgs";
/* [object, uuid("7A3B924A-CC2F-4E7B-AACD-A5B9D29CFA4E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequest";
/* [object, uuid("40A73807-7590-4149-AE19-B211431A9F48"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_get_TaskListId(This,value) \
    ( (This)->lpVtbl->get_TaskListId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequestEventArgs";
/* [object, uuid("8EAD1C12-768E-43BD-8385-5CDC351FFDEA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderConnection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderConnection[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderTriggerDetails[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Euserdatatasks2Edataprovider_p_h__

#endif // __windows2Eapplicationmodel2Euserdatatasks2Edataprovider_h__
