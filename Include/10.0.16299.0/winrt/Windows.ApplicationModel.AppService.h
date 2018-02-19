/* Header file automatically generated from windows.applicationmodel.appservice.idl */
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
#ifndef __windows2Eapplicationmodel2Eappservice_h__
#define __windows2Eapplicationmodel2Eappservice_h__
#ifndef __windows2Eapplicationmodel2Eappservice_p_h__
#define __windows2Eapplicationmodel2Eappservice_p_h__


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
#include "Windows.ApplicationModel.h"
#include "Windows.System.h"
#include "Windows.System.RemoteSystems.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceCatalogStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics ABI::Windows::ApplicationModel::AppService::IAppServiceCatalogStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceClosedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs ABI::Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceConnection;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection ABI::Windows::ApplicationModel::AppService::IAppServiceConnection

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceConnection2;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 ABI::Windows::ApplicationModel::AppService::IAppServiceConnection2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceDeferral;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral ABI::Windows::ApplicationModel::AppService::IAppServiceDeferral

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceRequest;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest ABI::Windows::ApplicationModel::AppService::IAppServiceRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceRequestReceivedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs ABI::Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceResponse;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse ABI::Windows::ApplicationModel::AppService::IAppServiceResponse

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceTriggerDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails ABI::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceTriggerDetails2;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2 ABI::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceTriggerDetails3;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3 ABI::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails3

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                enum AppServiceConnectionStatus : int;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b6c6bbf2-72ca-5799-a651-d1990670097b"))
IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.AppService.AppServiceConnectionStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::AppService::AppServiceConnectionStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::AppService::AppServiceConnectionStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0d0e6663-2639-5a9a-9cbc-30d7d4ce533b"))
IAsyncOperation<enum ABI::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> : IAsyncOperation_impl<enum ABI::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.AppService.AppServiceConnectionStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::ApplicationModel::AppService::AppServiceConnectionStatus> __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::AppService::AppServiceConnectionStatus>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::AppService::AppServiceConnectionStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_USE */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                class AppServiceResponse;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7ea7d7ec-e164-52c3-8e32-bba7126d9028"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::AppService::AppServiceResponse*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppService::AppServiceResponse*, ABI::Windows::ApplicationModel::AppService::IAppServiceResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.AppService.AppServiceResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::AppService::AppServiceResponse*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::AppService::IAppServiceResponse*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::AppService::IAppServiceResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("48755a7c-c88f-5ef0-9b4c-876fcc2610b4"))
IAsyncOperation<ABI::Windows::ApplicationModel::AppService::AppServiceResponse*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppService::AppServiceResponse*, ABI::Windows::ApplicationModel::AppService::IAppServiceResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.AppService.AppServiceResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::AppService::AppServiceResponse*> __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::AppService::IAppServiceResponse*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::AppService::IAppServiceResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                enum AppServiceResponseStatus : int;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b824383d-32e0-5579-8670-a06a61457f20"))
IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.AppService.AppServiceResponseStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("98fdb842-5a0b-539a-a35c-55ac5f228612"))
IAsyncOperation<enum ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus> : IAsyncOperation_impl<enum ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.AppService.AppServiceResponseStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus> __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_USE */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                class AppServiceConnection;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                class AppServiceClosedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e4efa98d-4bfc-5e61-a233-688f5f06521f"))
ITypedEventHandler<ABI::Windows::ApplicationModel::AppService::AppServiceConnection*,ABI::Windows::ApplicationModel::AppService::AppServiceClosedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppService::AppServiceConnection*, ABI::Windows::ApplicationModel::AppService::IAppServiceConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppService::AppServiceClosedEventArgs*, ABI::Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.AppService.AppServiceConnection, Windows.ApplicationModel.AppService.AppServiceClosedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::AppService::AppServiceConnection*,ABI::Windows::ApplicationModel::AppService::AppServiceClosedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::AppService::IAppServiceConnection*,ABI::Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::AppService::IAppServiceConnection*,ABI::Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                class AppServiceRequestReceivedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("18c67d61-4176-5553-b18d-d8f57fe79552"))
ITypedEventHandler<ABI::Windows::ApplicationModel::AppService::AppServiceConnection*,ABI::Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppService::AppServiceConnection*, ABI::Windows::ApplicationModel::AppService::IAppServiceConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs*, ABI::Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.AppService.AppServiceConnection, Windows.ApplicationModel.AppService.AppServiceRequestReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::AppService::AppServiceConnection*,ABI::Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::AppService::IAppServiceConnection*,ABI::Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::AppService::IAppServiceConnection*,ABI::Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class AppInfo;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IAppInfo;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIAppInfo ABI::Windows::ApplicationModel::IAppInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CAppInfo_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CAppInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("69cec62c-41eb-5d69-a475-29ee22323dd8"))
IIterator<ABI::Windows::ApplicationModel::AppInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppInfo*, ABI::Windows::ApplicationModel::IAppInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.AppInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::AppInfo*> __FIIterator_1_Windows__CApplicationModel__CAppInfo_t;
#define __FIIterator_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CAppInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IAppInfo*>
//#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IAppInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CAppInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CAppInfo_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CAppInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("63d0bffe-0e34-55b3-83d5-314caff2b137"))
IIterable<ABI::Windows::ApplicationModel::AppInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppInfo*, ABI::Windows::ApplicationModel::IAppInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.AppInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::AppInfo*> __FIIterable_1_Windows__CApplicationModel__CAppInfo_t;
#define __FIIterable_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CAppInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IAppInfo*>
//#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IAppInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CAppInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8246ed12-33e8-52b3-a5c5-19779de9999e"))
IVectorView<ABI::Windows::ApplicationModel::AppInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppInfo*, ABI::Windows::ApplicationModel::IAppInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.AppInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::AppInfo*> __FIVectorView_1_Windows__CApplicationModel__CAppInfo_t;
#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CAppInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>
//#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("07f25b6f-f054-5649-a5ce-b348ddc618b6"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.AppInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("07543d91-8610-5152-b0e4-43d6e4cdd0cb"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.AppInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20"))
IKeyValuePair<HSTRING,IInspectable*> : IKeyValuePair_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,IInspectable*> __FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
//#define __FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8"))
IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204"))
IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e"))
IMapView<HSTRING,IInspectable*> : IMapView_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,IInspectable*> __FIMapView_2_HSTRING_IInspectable_t;
#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
//#define __FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMap_2_HSTRING_IInspectable_USE
#define DEF___FIMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1b0d3570-0877-5ec2-8a2c-3b9539506aca"))
IMap<HSTRING,IInspectable*> : IMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,IInspectable*> __FIMap_2_HSTRING_IInspectable_t;
#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
//#define __FIMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_IInspectable_USE */




#ifndef DEF___FIMapChangedEventArgs_1_HSTRING_USE
#define DEF___FIMapChangedEventArgs_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60141efb-f2f9-5377-96fd-f8c60d9558b5"))
IMapChangedEventArgs<HSTRING> : IMapChangedEventArgs_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapChangedEventArgs`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapChangedEventArgs<HSTRING> __FIMapChangedEventArgs_1_HSTRING_t;
#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::__FIMapChangedEventArgs_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
//#define __FIMapChangedEventArgs_1_HSTRING_t ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapChangedEventArgs_1_HSTRING_USE */





#ifndef DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#define DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("24f981e5-ddca-538d-aada-a59906084cf1"))
MapChangedEventHandler<HSTRING,IInspectable*> : MapChangedEventHandler_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.MapChangedEventHandler`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef MapChangedEventHandler<HSTRING,IInspectable*> __FMapChangedEventHandler_2_HSTRING_IInspectable_t;
#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FMapChangedEventHandler_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#define DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("236aac9d-fb12-5c4d-a41c-9e445fb4d7ec"))
IObservableMap<HSTRING,IInspectable*> : IObservableMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IObservableMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IObservableMap<HSTRING,IInspectable*> __FIObservableMap_2_HSTRING_IInspectable_t;
#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIObservableMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
//#define __FIObservableMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIObservableMap_2_HSTRING_IInspectable_USE */




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








namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                class ValueSet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                interface IPropertySet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet ABI::Windows::Foundation::Collections::IPropertySet

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemConnectionRequest;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemConnectionRequest;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest ABI::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__





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
        namespace ApplicationModel {
            namespace AppService {
                
                typedef enum AppServiceClosedStatus : int AppServiceClosedStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                
                typedef enum AppServiceConnectionStatus : int AppServiceConnectionStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                
                typedef enum AppServiceResponseStatus : int AppServiceResponseStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */















namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                class AppServiceDeferral;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                class AppServiceRequest;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                class AppServiceTriggerDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */










/*
 *
 * Struct Windows.ApplicationModel.AppService.AppServiceClosedStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [v1_enum, contract] */
                enum AppServiceClosedStatus : int
                {
                    AppServiceClosedStatus_Completed = 0,
                    AppServiceClosedStatus_Canceled = 1,
                    AppServiceClosedStatus_ResourceLimitsExceeded = 2,
                    AppServiceClosedStatus_Unknown = 3,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.AppService.AppServiceConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [v1_enum, contract] */
                enum AppServiceConnectionStatus : int
                {
                    AppServiceConnectionStatus_Success = 0,
                    AppServiceConnectionStatus_AppNotInstalled = 1,
                    AppServiceConnectionStatus_AppUnavailable = 2,
                    AppServiceConnectionStatus_AppServiceUnavailable = 3,
                    AppServiceConnectionStatus_Unknown = 4,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    AppServiceConnectionStatus_RemoteSystemUnavailable = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    AppServiceConnectionStatus_RemoteSystemNotSupportedByApp = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    AppServiceConnectionStatus_NotAuthorized = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.AppService.AppServiceResponseStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [v1_enum, contract] */
                enum AppServiceResponseStatus : int
                {
                    AppServiceResponseStatus_Success = 0,
                    AppServiceResponseStatus_Failure = 1,
                    AppServiceResponseStatus_ResourceLimitsExceeded = 2,
                    AppServiceResponseStatus_Unknown = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    AppServiceResponseStatus_RemoteSystemUnavailable = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    AppServiceResponseStatus_MessageSizeTooLarge = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceCatalogStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceCatalog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceCatalogStatics[] = L"Windows.ApplicationModel.AppService.IAppServiceCatalogStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("EF0D2507-D132-4C85-8395-3C31D5A1E941"), exclusiveto, contract] */
                MIDL_INTERFACE("EF0D2507-D132-4C85-8395-3C31D5A1E941")
                IAppServiceCatalogStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FindAppServiceProvidersAsync(
                        /* [in] */__RPC__in HSTRING appServiceName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceCatalogStatics=_uuidof(IAppServiceCatalogStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceClosedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceClosedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceClosedEventArgs[] = L"Windows.ApplicationModel.AppService.IAppServiceClosedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("DE6016F6-CB03-4D35-AC8D-CC6303239731"), exclusiveto, contract] */
                MIDL_INTERFACE("DE6016F6-CB03-4D35-AC8D-CC6303239731")
                IAppServiceClosedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::AppService::AppServiceClosedStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceClosedEventArgs=_uuidof(IAppServiceClosedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceConnection
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceConnection[] = L"Windows.ApplicationModel.AppService.IAppServiceConnection";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("9DD474A2-871F-4D52-89A9-9E090531BD27"), exclusiveto, contract] */
                MIDL_INTERFACE("9DD474A2-871F-4D52-89A9-9E090531BD27")
                IAppServiceConnection : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppServiceName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppServiceName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackageFamilyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PackageFamilyName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE OpenAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendMessageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * message,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RequestReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RequestReceived(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ServiceClosed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ServiceClosed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceConnection=_uuidof(IAppServiceConnection);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceConnection2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceConnection2[] = L"Windows.ApplicationModel.AppService.IAppServiceConnection2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("8BDFCD5F-2302-4FBD-8061-52511C2F8BF9"), exclusiveto, contract] */
                MIDL_INTERFACE("8BDFCD5F-2302-4FBD-8061-52511C2F8BF9")
                IAppServiceConnection2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE OpenRemoteAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest * remoteSystemConnectionRequest,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_User(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceConnection2=_uuidof(IAppServiceConnection2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceDeferral[] = L"Windows.ApplicationModel.AppService.IAppServiceDeferral";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("7E1B5322-EAB0-4248-AE04-FDF93838E472"), exclusiveto, contract] */
                MIDL_INTERFACE("7E1B5322-EAB0-4248-AE04-FDF93838E472")
                IAppServiceDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceDeferral=_uuidof(IAppServiceDeferral);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceRequest[] = L"Windows.ApplicationModel.AppService.IAppServiceRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("20E58D9D-18DE-4B01-80BA-90A76204E3C8"), exclusiveto, contract] */
                MIDL_INTERFACE("20E58D9D-18DE-4B01-80BA-90A76204E3C8")
                IAppServiceRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendResponseAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * message,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceRequest=_uuidof(IAppServiceRequest);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceRequestReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceRequestReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceRequestReceivedEventArgs[] = L"Windows.ApplicationModel.AppService.IAppServiceRequestReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("6E122360-FF65-44AE-9E45-857FE4180681"), exclusiveto, contract] */
                MIDL_INTERFACE("6E122360-FF65-44AE-9E45-857FE4180681")
                IAppServiceRequestReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::AppService::IAppServiceRequest * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::AppService::IAppServiceDeferral * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceRequestReceivedEventArgs=_uuidof(IAppServiceRequestReceivedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceResponse[] = L"Windows.ApplicationModel.AppService.IAppServiceResponse";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("8D503CEC-9AA3-4E68-9559-9DE63E372CE4"), exclusiveto, contract] */
                MIDL_INTERFACE("8D503CEC-9AA3-4E68-9559-9DE63E372CE4")
                IAppServiceResponse : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::AppService::AppServiceResponseStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceResponse=_uuidof(IAppServiceResponse);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails[] = L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("88A2DCAC-AD28-41B8-80BB-BDF1B2169E19"), exclusiveto, contract] */
                MIDL_INTERFACE("88A2DCAC-AD28-41B8-80BB-BDF1B2169E19")
                IAppServiceTriggerDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CallerPackageFamilyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppServiceConnection(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::AppService::IAppServiceConnection * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceTriggerDetails=_uuidof(IAppServiceTriggerDetails);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceTriggerDetails2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails2[] = L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("E83D54B2-28CC-43F2-B465-C0482E59E2DC"), exclusiveto, contract] */
                MIDL_INTERFACE("E83D54B2-28CC-43F2-B465-C0482E59E2DC")
                IAppServiceTriggerDetails2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRemoteSystemConnection(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceTriggerDetails2=_uuidof(IAppServiceTriggerDetails2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceTriggerDetails3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails3[] = L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                /* [object, uuid("FBD71E21-7939-4E68-9E3C-7780147AABB6"), exclusiveto, contract] */
                MIDL_INTERFACE("FBD71E21-7939-4E68-9E3C-7780147AABB6")
                IAppServiceTriggerDetails3 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CheckCallerForCapabilityAsync(
                        /* [in] */__RPC__in HSTRING capabilityName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppServiceTriggerDetails3=_uuidof(IAppServiceTriggerDetails3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceCatalog
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.AppService.IAppServiceCatalogStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceCatalog_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceCatalog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceCatalog[] = L"Windows.ApplicationModel.AppService.AppServiceCatalog";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceClosedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceClosedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceClosedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceClosedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceClosedEventArgs[] = L"Windows.ApplicationModel.AppService.AppServiceClosedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceConnection ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.ApplicationModel.AppService.IAppServiceConnection2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceConnection[] = L"Windows.ApplicationModel.AppService.AppServiceConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceDeferral ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceDeferral[] = L"Windows.ApplicationModel.AppService.AppServiceDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceRequest[] = L"Windows.ApplicationModel.AppService.AppServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceRequestReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceRequestReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceRequestReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceRequestReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceRequestReceivedEventArgs[] = L"Windows.ApplicationModel.AppService.AppServiceRequestReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceResponse ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceResponse_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceResponse[] = L"Windows.ApplicationModel.AppService.AppServiceResponse";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceTriggerDetails ** Default Interface **
 *    Windows.ApplicationModel.AppService.IAppServiceTriggerDetails2
 *    Windows.ApplicationModel.AppService.IAppServiceTriggerDetails3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceTriggerDetails[] = L"Windows.ApplicationModel.AppService.AppServiceTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2 __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3 __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceConnectionStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceConnectionStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatusVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponse **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceResponseStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceResponseStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatusVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppInfo __x_ABI_CWindows_CApplicationModel_CIAppInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CAppInfo __FIIterator_1_Windows__CApplicationModel__CAppInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppInfo;

typedef struct __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIAppInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CAppInfo __FIIterable_1_Windows__CApplicationModel__CAppInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppInfo;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIVectorView_1_Windows__CApplicationModel__CAppInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIAppInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CIAppInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_IInspectable_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;

typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt IInspectable * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;

interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_IInspectable_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_IInspectable_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_IInspectable_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_IInspectable_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;

typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;

interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapChangedEventArgs_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapChangedEventArgs_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapChangedEventArgs_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapChangedEventArgs_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapChangedEventArgs_1_HSTRING_get_CollectionChange(This,value)	\
    ( (This)->lpVtbl -> get_CollectionChange(This,value) ) 
#define __FIMapChangedEventArgs_1_HSTRING_get_Key(This,value)	\
    ( (This)->lpVtbl -> get_Key(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;

//Forward declare IObservableMap and IMapChangedEventArgs
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This, 
        /* [in] */ __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender, 
        /* [in] */ __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;

interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;

typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
        /* [retval][out] */ __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;

interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIObservableMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_add_MapChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_remove_MapChanged(This,token)	\
    ( (This)->lpVtbl -> remove_MapChanged(This,token) ) 
#endif /* COBJMACROS */



#endif // ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


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






#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceClosedStatus __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceClosedStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceConnectionStatus __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceConnectionStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceResponseStatus __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceResponseStatus;




























/*
 *
 * Struct Windows.ApplicationModel.AppService.AppServiceClosedStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceClosedStatus
{
    AppServiceClosedStatus_Completed = 0,
    AppServiceClosedStatus_Canceled = 1,
    AppServiceClosedStatus_ResourceLimitsExceeded = 2,
    AppServiceClosedStatus_Unknown = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.AppService.AppServiceConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceConnectionStatus
{
    AppServiceConnectionStatus_Success = 0,
    AppServiceConnectionStatus_AppNotInstalled = 1,
    AppServiceConnectionStatus_AppUnavailable = 2,
    AppServiceConnectionStatus_AppServiceUnavailable = 3,
    AppServiceConnectionStatus_Unknown = 4,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AppServiceConnectionStatus_RemoteSystemUnavailable = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AppServiceConnectionStatus_RemoteSystemNotSupportedByApp = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AppServiceConnectionStatus_NotAuthorized = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.AppService.AppServiceResponseStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceResponseStatus
{
    AppServiceResponseStatus_Success = 0,
    AppServiceResponseStatus_Failure = 1,
    AppServiceResponseStatus_ResourceLimitsExceeded = 2,
    AppServiceResponseStatus_Unknown = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AppServiceResponseStatus_RemoteSystemUnavailable = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AppServiceResponseStatus_MessageSizeTooLarge = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceCatalogStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceCatalog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceCatalogStatics[] = L"Windows.ApplicationModel.AppService.IAppServiceCatalogStatics";
/* [object, uuid("EF0D2507-D132-4C85-8395-3C31D5A1E941"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindAppServiceProvidersAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics * This,
        /* [in] */__RPC__in HSTRING appServiceName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_FindAppServiceProvidersAsync(This,appServiceName,operation) \
    ( (This)->lpVtbl->FindAppServiceProvidersAsync(This,appServiceName,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceCatalogStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceClosedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceClosedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceClosedEventArgs[] = L"Windows.ApplicationModel.AppService.IAppServiceClosedEventArgs";
/* [object, uuid("DE6016F6-CB03-4D35-AC8D-CC6303239731"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceClosedStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceClosedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceConnection
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceConnection[] = L"Windows.ApplicationModel.AppService.IAppServiceConnection";
/* [object, uuid("9DD474A2-871F-4D52-89A9-9E090531BD27"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppServiceName )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppServiceName )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SendMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * message,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponse * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RequestReceived )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceRequestReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RequestReceived )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ServiceClosed )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppService__CAppServiceConnection_Windows__CApplicationModel__CAppService__CAppServiceClosedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ServiceClosed )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnectionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_get_AppServiceName(This,value) \
    ( (This)->lpVtbl->get_AppServiceName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_put_AppServiceName(This,value) \
    ( (This)->lpVtbl->put_AppServiceName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_get_PackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_PackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_put_PackageFamilyName(This,value) \
    ( (This)->lpVtbl->put_PackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_OpenAsync(This,operation) \
    ( (This)->lpVtbl->OpenAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_SendMessageAsync(This,message,operation) \
    ( (This)->lpVtbl->SendMessageAsync(This,message,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_add_RequestReceived(This,handler,token) \
    ( (This)->lpVtbl->add_RequestReceived(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_remove_RequestReceived(This,token) \
    ( (This)->lpVtbl->remove_RequestReceived(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_add_ServiceClosed(This,handler,token) \
    ( (This)->lpVtbl->add_ServiceClosed(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_remove_ServiceClosed(This,token) \
    ( (This)->lpVtbl->remove_ServiceClosed(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceConnection2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceConnection2[] = L"Windows.ApplicationModel.AppService.IAppServiceConnection2";
/* [object, uuid("8BDFCD5F-2302-4FBD-8061-52511C2F8BF9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenRemoteAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * remoteSystemConnectionRequest,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceConnectionStatus * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_User )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_OpenRemoteAsync(This,remoteSystemConnectionRequest,operation) \
    ( (This)->lpVtbl->OpenRemoteAsync(This,remoteSystemConnectionRequest,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_put_User(This,value) \
    ( (This)->lpVtbl->put_User(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceDeferral[] = L"Windows.ApplicationModel.AppService.IAppServiceDeferral";
/* [object, uuid("7E1B5322-EAB0-4248-AE04-FDF93838E472"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferralVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceRequest[] = L"Windows.ApplicationModel.AppService.IAppServiceRequest";
/* [object, uuid("20E58D9D-18DE-4B01-80BA-90A76204E3C8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SendResponseAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * message,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppService__CAppServiceResponseStatus * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_SendResponseAsync(This,message,operation) \
    ( (This)->lpVtbl->SendResponseAsync(This,message,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceRequestReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceRequestReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceRequestReceivedEventArgs[] = L"Windows.ApplicationModel.AppService.IAppServiceRequestReceivedEventArgs";
/* [object, uuid("6E122360-FF65-44AE-9E45-857FE4180681"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceRequestReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceResponse[] = L"Windows.ApplicationModel.AppService.IAppServiceResponse";
/* [object, uuid("8D503CEC-9AA3-4E68-9559-9DE63E372CE4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppService_CAppServiceResponseStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponseVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails[] = L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails";
/* [object, uuid("88A2DCAC-AD28-41B8-80BB-BDF1B2169E19"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CallerPackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppServiceConnection )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_get_CallerPackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_CallerPackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_get_AppServiceConnection(This,value) \
    ( (This)->lpVtbl->get_AppServiceConnection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceTriggerDetails2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails2[] = L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails2";
/* [object, uuid("E83D54B2-28CC-43F2-B465-C0482E59E2DC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRemoteSystemConnection )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_get_IsRemoteSystemConnection(This,value) \
    ( (This)->lpVtbl->get_IsRemoteSystemConnection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.AppService.IAppServiceTriggerDetails3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppService.AppServiceTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppService_IAppServiceTriggerDetails3[] = L"Windows.ApplicationModel.AppService.IAppServiceTriggerDetails3";
/* [object, uuid("FBD71E21-7939-4E68-9E3C-7780147AABB6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CheckCallerForCapabilityAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3 * This,
        /* [in] */__RPC__in HSTRING capabilityName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_CheckCallerForCapabilityAsync(This,capabilityName,operation) \
    ( (This)->lpVtbl->CheckCallerForCapabilityAsync(This,capabilityName,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceCatalog
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.AppService.IAppServiceCatalogStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceCatalog_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceCatalog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceCatalog[] = L"Windows.ApplicationModel.AppService.AppServiceCatalog";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceClosedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceClosedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceClosedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceClosedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceClosedEventArgs[] = L"Windows.ApplicationModel.AppService.AppServiceClosedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceConnection ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.ApplicationModel.AppService.IAppServiceConnection2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceConnection[] = L"Windows.ApplicationModel.AppService.AppServiceConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceDeferral ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceDeferral[] = L"Windows.ApplicationModel.AppService.AppServiceDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceRequest[] = L"Windows.ApplicationModel.AppService.AppServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceRequestReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceRequestReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceRequestReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceRequestReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceRequestReceivedEventArgs[] = L"Windows.ApplicationModel.AppService.AppServiceRequestReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceResponse ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceResponse_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceResponse[] = L"Windows.ApplicationModel.AppService.AppServiceResponse";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppService.AppServiceTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.AppService.IAppServiceTriggerDetails ** Default Interface **
 *    Windows.ApplicationModel.AppService.IAppServiceTriggerDetails2
 *    Windows.ApplicationModel.AppService.IAppServiceTriggerDetails3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppService_AppServiceTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppService_AppServiceTriggerDetails[] = L"Windows.ApplicationModel.AppService.AppServiceTriggerDetails";
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
#endif // __windows2Eapplicationmodel2Eappservice_p_h__

#endif // __windows2Eapplicationmodel2Eappservice_h__
