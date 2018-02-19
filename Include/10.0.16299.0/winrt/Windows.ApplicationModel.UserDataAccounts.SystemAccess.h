/* Header file automatically generated from windows.applicationmodel.userdataaccounts.systemaccess.idl */
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
#ifndef __windows2Eapplicationmodel2Euserdataaccounts2Esystemaccess_h__
#define __windows2Eapplicationmodel2Euserdataaccounts2Esystemaccess_h__
#ifndef __windows2Eapplicationmodel2Euserdataaccounts2Esystemaccess_p_h__
#define __windows2Eapplicationmodel2Euserdataaccounts2Esystemaccess_p_h__


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
#include "Windows.Security.Credentials.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    interface IDeviceAccountConfiguration;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    interface IDeviceAccountConfiguration2;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    interface IUserDataAccountSystemAccessManagerStatics;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    interface IUserDataAccountSystemAccessManagerStatics2;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    class DeviceAccountConfiguration;
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("51705a87-8dcb-5971-8d6b-ca8ae6a955ad"))
IIterator<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*, ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*> __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t;
#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>
//#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a9c3ea6e-9dd9-52fe-9d27-f9e4dedd4d3f"))
IIterable<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*, ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*> __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t;
#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>
//#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cbee2c48-e3ed-5ebd-a4ae-56583388a49a"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*, ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("469859f3-6b7b-5399-8a8c-fe615b95ae07"))
IAsyncOperation<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*, ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration*> __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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





#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7c7899be-5f2e-5bf3-ade5-ad98b772c7cd"))
IAsyncOperationCompletedHandler<__FIVectorView_1_HSTRING*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_HSTRING*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_USE */





#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_HSTRING_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2f92b529-119b-575a-a419-3904b4e41af2"))
IAsyncOperation<__FIVectorView_1_HSTRING*> : IAsyncOperation_impl<__FIVectorView_1_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_HSTRING*> __FIAsyncOperation_1___FIVectorView_1_HSTRING_t;
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
//#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41"))
IAsyncOperationCompletedHandler<HSTRING> : IAsyncOperationCompletedHandler_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<HSTRING> __FIAsyncOperationCompletedHandler_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
//#define __FIAsyncOperationCompletedHandler_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperation_1_HSTRING_USE
#define DEF___FIAsyncOperation_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79"))
IAsyncOperation<HSTRING> : IAsyncOperation_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<HSTRING> __FIAsyncOperation_1_HSTRING_t;
#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<HSTRING>
//#define __FIAsyncOperation_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_HSTRING_USE */





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
        namespace Foundation {
            class Uri;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                class PasswordCredential;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                interface IPasswordCredential;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential ABI::Windows::Security::Credentials::IPasswordCredential

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    
                    typedef enum DeviceAccountAuthenticationType : int DeviceAccountAuthenticationType;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    
                    typedef enum DeviceAccountIconId : int DeviceAccountIconId;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    
                    typedef enum DeviceAccountMailAgeFilter : int DeviceAccountMailAgeFilter;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    
                    typedef enum DeviceAccountServerType : int DeviceAccountServerType;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    
                    typedef enum DeviceAccountSyncScheduleKind : int DeviceAccountSyncScheduleKind;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */

















/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountAuthenticationType
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
                namespace SystemAccess {
                    /* [v1_enum, contract] */
                    enum DeviceAccountAuthenticationType : int
                    {
                        DeviceAccountAuthenticationType_Basic = 0,
                        DeviceAccountAuthenticationType_OAuth = 1,
                        DeviceAccountAuthenticationType_SingleSignOn = 2,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountIconId
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
                namespace SystemAccess {
                    /* [v1_enum, contract] */
                    enum DeviceAccountIconId : int
                    {
                        DeviceAccountIconId_Exchange = 0,
                        DeviceAccountIconId_Msa = 1,
                        DeviceAccountIconId_Outlook = 2,
                        DeviceAccountIconId_Generic = 3,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountMailAgeFilter
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
                namespace SystemAccess {
                    /* [v1_enum, contract] */
                    enum DeviceAccountMailAgeFilter : int
                    {
                        DeviceAccountMailAgeFilter_All = 0,
                        DeviceAccountMailAgeFilter_Last1Day = 1,
                        DeviceAccountMailAgeFilter_Last3Days = 2,
                        DeviceAccountMailAgeFilter_Last7Days = 3,
                        DeviceAccountMailAgeFilter_Last14Days = 4,
                        DeviceAccountMailAgeFilter_Last30Days = 5,
                        DeviceAccountMailAgeFilter_Last90Days = 6,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountServerType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    /* [v1_enum, contract] */
                    enum DeviceAccountServerType : int
                    {
                        DeviceAccountServerType_Exchange = 0,
                        DeviceAccountServerType_Pop = 1,
                        DeviceAccountServerType_Imap = 2,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountSyncScheduleKind
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
                namespace SystemAccess {
                    /* [v1_enum, contract] */
                    enum DeviceAccountSyncScheduleKind : int
                    {
                        DeviceAccountSyncScheduleKind_Manual = 0,
                        DeviceAccountSyncScheduleKind_Every15Minutes = 1,
                        DeviceAccountSyncScheduleKind_Every30Minutes = 2,
                        DeviceAccountSyncScheduleKind_Every60Minutes = 3,
                        DeviceAccountSyncScheduleKind_Every2Hours = 4,
                        DeviceAccountSyncScheduleKind_Daily = 5,
                        DeviceAccountSyncScheduleKind_AsItemsArrive = 6,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    /* [object, uuid("AD0123A3-FBDC-4D1B-BE43-5A27EA4A1B63"), exclusiveto, contract] */
                    MIDL_INTERFACE("AD0123A3-FBDC-4D1B-BE43-5A27EA4A1B63")
                    IDeviceAccountConfiguration : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccountName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AccountName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceAccountTypeId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DeviceAccountTypeId(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerType(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServerType(
                            /* [in] */ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailAddress(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EmailAddress(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Domain(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Domain(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailSyncEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EmailSyncEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactsSyncEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContactsSyncEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CalendarSyncEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CalendarSyncEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncomingServerAddress(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncomingServerAddress(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncomingServerPort(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncomingServerPort(
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncomingServerRequiresSsl(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncomingServerRequiresSsl(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncomingServerUsername(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncomingServerUsername(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutgoingServerAddress(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutgoingServerAddress(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutgoingServerPort(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutgoingServerPort(
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutgoingServerRequiresSsl(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutgoingServerRequiresSsl(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutgoingServerUsername(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutgoingServerUsername(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDeviceAccountConfiguration=_uuidof(IDeviceAccountConfiguration);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    /* [object, uuid("F2B2E5A6-728D-4A4A-8945-2BF8580136DE"), exclusiveto, contract] */
                    MIDL_INTERFACE("F2B2E5A6-728D-4A4A-8945-2BF8580136DE")
                    IDeviceAccountConfiguration2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncomingServerCredential(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncomingServerCredential(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutgoingServerCredential(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutgoingServerCredential(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OAuthRefreshToken(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OAuthRefreshToken(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsExternallyManaged(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsExternallyManaged(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccountIconId(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AccountIconId(
                            /* [in] */ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationType(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AuthenticationType(
                            /* [in] */ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSsoAuthenticationSupported(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SsoAccountId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SsoAccountId(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlwaysDownloadFullMessage(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlwaysDownloadFullMessage(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DoesPolicyAllowMailSync(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SyncScheduleKind(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SyncScheduleKind(
                            /* [in] */ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MailAgeFilter(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MailAgeFilter(
                            /* [in] */ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsClientAuthenticationCertificateRequired(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsClientAuthenticationCertificateRequired(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoSelectAuthenticationCertificate(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoSelectAuthenticationCertificate(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationCertificateId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AuthenticationCertificateId(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CardDavSyncScheduleKind(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CardDavSyncScheduleKind(
                            /* [in] */ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CalDavSyncScheduleKind(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CalDavSyncScheduleKind(
                            /* [in] */ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CardDavServerUrl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CardDavServerUrl(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CardDavRequiresSsl(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CardDavRequiresSsl(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CalDavServerUrl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CalDavServerUrl(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CalDavRequiresSsl(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CalDavRequiresSsl(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WasModifiedByUser(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WasModifiedByUser(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WasIncomingServerCertificateHashConfirmed(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WasIncomingServerCertificateHashConfirmed(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncomingServerCertificateHash(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncomingServerCertificateHash(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOutgoingServerAuthenticationRequired(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsOutgoingServerAuthenticationRequired(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOutgoingServerAuthenticationEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsOutgoingServerAuthenticationEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WasOutgoingServerCertificateHashConfirmed(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WasOutgoingServerCertificateHashConfirmed(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutgoingServerCertificateHash(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutgoingServerCertificateHash(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSyncScheduleManagedBySystem(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsSyncScheduleManagedBySystem(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDeviceAccountConfiguration2=_uuidof(IDeviceAccountConfiguration2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    /* [object, uuid("9D6B11B9-CBE5-45F5-822B-C267B81DBDB6"), exclusiveto, contract] */
                    MIDL_INTERFACE("9D6B11B9-CBE5-45F5-822B-C267B81DBDB6")
                    IUserDataAccountSystemAccessManagerStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE AddAndShowDeviceAccountsAsync(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * accounts,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataAccountSystemAccessManagerStatics=_uuidof(IUserDataAccountSystemAccessManagerStatics);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace UserDataAccounts {
                namespace SystemAccess {
                    /* [object, uuid("943F854D-4B4E-439F-83D3-979B27C05AC7"), exclusiveto, contract] */
                    MIDL_INTERFACE("943F854D-4B4E-439F-83D3-979B27C05AC7")
                    IUserDataAccountSystemAccessManagerStatics2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SuppressLocalAccountWithAccountAsync(
                            /* [in] */__RPC__in HSTRING userDataAccountId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateDeviceAccountAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration * account,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteDeviceAccountAsync(
                            /* [in] */__RPC__in HSTRING accountId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeviceAccountConfigurationAsync(
                            /* [in] */__RPC__in HSTRING accountId,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserDataAccountSystemAccessManagerStatics2=_uuidof(IUserDataAccountSystemAccessManagerStatics2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* UserDataAccounts */
    } /* SystemAccess */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration ** Default Interface **
 *    Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_SystemAccess_DeviceAccountConfiguration_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_SystemAccess_DeviceAccountConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_SystemAccess_DeviceAccountConfiguration[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_SystemAccess_UserDataAccountSystemAccessManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_SystemAccess_UserDataAccountSystemAccessManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_SystemAccess_UserDataAccountSystemAccessManager[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;

typedef struct __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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



#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_HSTRING;

typedef struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__out __FIVectorView_1_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;

interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountAuthenticationType __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountAuthenticationType;


typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountIconId __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountIconId;


typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountMailAgeFilter __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountMailAgeFilter;


typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountServerType __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountServerType;


typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind;

















/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountAuthenticationType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountAuthenticationType
{
    DeviceAccountAuthenticationType_Basic = 0,
    DeviceAccountAuthenticationType_OAuth = 1,
    DeviceAccountAuthenticationType_SingleSignOn = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountIconId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountIconId
{
    DeviceAccountIconId_Exchange = 0,
    DeviceAccountIconId_Msa = 1,
    DeviceAccountIconId_Outlook = 2,
    DeviceAccountIconId_Generic = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountMailAgeFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountMailAgeFilter
{
    DeviceAccountMailAgeFilter_All = 0,
    DeviceAccountMailAgeFilter_Last1Day = 1,
    DeviceAccountMailAgeFilter_Last3Days = 2,
    DeviceAccountMailAgeFilter_Last7Days = 3,
    DeviceAccountMailAgeFilter_Last14Days = 4,
    DeviceAccountMailAgeFilter_Last30Days = 5,
    DeviceAccountMailAgeFilter_Last90Days = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountServerType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountServerType
{
    DeviceAccountServerType_Exchange = 0,
    DeviceAccountServerType_Pop = 1,
    DeviceAccountServerType_Imap = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountSyncScheduleKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind
{
    DeviceAccountSyncScheduleKind_Manual = 0,
    DeviceAccountSyncScheduleKind_Every15Minutes = 1,
    DeviceAccountSyncScheduleKind_Every30Minutes = 2,
    DeviceAccountSyncScheduleKind_Every60Minutes = 3,
    DeviceAccountSyncScheduleKind_Every2Hours = 4,
    DeviceAccountSyncScheduleKind_Daily = 5,
    DeviceAccountSyncScheduleKind_AsItemsArrive = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration";
/* [object, uuid("AD0123A3-FBDC-4D1B-BE43-5A27EA4A1B63"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccountName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AccountName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceAccountTypeId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DeviceAccountTypeId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerType )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountServerType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServerType )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountServerType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EmailAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Domain )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Domain )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EmailSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactsSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContactsSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CalendarSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CalendarSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncomingServerAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncomingServerAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncomingServerPort )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncomingServerPort )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncomingServerRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncomingServerRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncomingServerUsername )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncomingServerUsername )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerPort )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerPort )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerUsername )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerUsername )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfigurationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_AccountName(This,value) \
    ( (This)->lpVtbl->get_AccountName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_AccountName(This,value) \
    ( (This)->lpVtbl->put_AccountName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_DeviceAccountTypeId(This,value) \
    ( (This)->lpVtbl->get_DeviceAccountTypeId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_DeviceAccountTypeId(This,value) \
    ( (This)->lpVtbl->put_DeviceAccountTypeId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_ServerType(This,value) \
    ( (This)->lpVtbl->get_ServerType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_ServerType(This,value) \
    ( (This)->lpVtbl->put_ServerType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_EmailAddress(This,value) \
    ( (This)->lpVtbl->get_EmailAddress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_EmailAddress(This,value) \
    ( (This)->lpVtbl->put_EmailAddress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_Domain(This,value) \
    ( (This)->lpVtbl->get_Domain(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_Domain(This,value) \
    ( (This)->lpVtbl->put_Domain(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_EmailSyncEnabled(This,value) \
    ( (This)->lpVtbl->get_EmailSyncEnabled(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_EmailSyncEnabled(This,value) \
    ( (This)->lpVtbl->put_EmailSyncEnabled(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_ContactsSyncEnabled(This,value) \
    ( (This)->lpVtbl->get_ContactsSyncEnabled(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_ContactsSyncEnabled(This,value) \
    ( (This)->lpVtbl->put_ContactsSyncEnabled(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_CalendarSyncEnabled(This,value) \
    ( (This)->lpVtbl->get_CalendarSyncEnabled(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_CalendarSyncEnabled(This,value) \
    ( (This)->lpVtbl->put_CalendarSyncEnabled(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_IncomingServerAddress(This,value) \
    ( (This)->lpVtbl->get_IncomingServerAddress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_IncomingServerAddress(This,value) \
    ( (This)->lpVtbl->put_IncomingServerAddress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_IncomingServerPort(This,value) \
    ( (This)->lpVtbl->get_IncomingServerPort(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_IncomingServerPort(This,value) \
    ( (This)->lpVtbl->put_IncomingServerPort(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_IncomingServerRequiresSsl(This,value) \
    ( (This)->lpVtbl->get_IncomingServerRequiresSsl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_IncomingServerRequiresSsl(This,value) \
    ( (This)->lpVtbl->put_IncomingServerRequiresSsl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_IncomingServerUsername(This,value) \
    ( (This)->lpVtbl->get_IncomingServerUsername(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_IncomingServerUsername(This,value) \
    ( (This)->lpVtbl->put_IncomingServerUsername(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_OutgoingServerAddress(This,value) \
    ( (This)->lpVtbl->get_OutgoingServerAddress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_OutgoingServerAddress(This,value) \
    ( (This)->lpVtbl->put_OutgoingServerAddress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_OutgoingServerPort(This,value) \
    ( (This)->lpVtbl->get_OutgoingServerPort(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_OutgoingServerPort(This,value) \
    ( (This)->lpVtbl->put_OutgoingServerPort(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_OutgoingServerRequiresSsl(This,value) \
    ( (This)->lpVtbl->get_OutgoingServerRequiresSsl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_OutgoingServerRequiresSsl(This,value) \
    ( (This)->lpVtbl->put_OutgoingServerRequiresSsl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_get_OutgoingServerUsername(This,value) \
    ( (This)->lpVtbl->get_OutgoingServerUsername(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_put_OutgoingServerUsername(This,value) \
    ( (This)->lpVtbl->put_OutgoingServerUsername(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration2";
/* [object, uuid("F2B2E5A6-728D-4A4A-8945-2BF8580136DE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncomingServerCredential )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncomingServerCredential )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerCredential )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerCredential )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OAuthRefreshToken )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OAuthRefreshToken )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsExternallyManaged )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsExternallyManaged )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccountIconId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountIconId * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AccountIconId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountIconId value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountAuthenticationType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AuthenticationType )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountAuthenticationType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSsoAuthenticationSupported )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SsoAccountId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SsoAccountId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlwaysDownloadFullMessage )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlwaysDownloadFullMessage )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DoesPolicyAllowMailSync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MailAgeFilter )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountMailAgeFilter * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MailAgeFilter )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountMailAgeFilter value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsClientAuthenticationCertificateRequired )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsClientAuthenticationCertificateRequired )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoSelectAuthenticationCertificate )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoSelectAuthenticationCertificate )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationCertificateId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AuthenticationCertificateId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CardDavSyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CardDavSyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CalDavSyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CalDavSyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CardDavServerUrl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CardDavServerUrl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CardDavRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CardDavRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CalDavServerUrl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CalDavServerUrl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CalDavRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CalDavRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WasModifiedByUser )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WasModifiedByUser )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WasIncomingServerCertificateHashConfirmed )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WasIncomingServerCertificateHashConfirmed )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncomingServerCertificateHash )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncomingServerCertificateHash )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOutgoingServerAuthenticationRequired )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsOutgoingServerAuthenticationRequired )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOutgoingServerAuthenticationEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsOutgoingServerAuthenticationEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WasOutgoingServerCertificateHashConfirmed )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WasOutgoingServerCertificateHashConfirmed )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerCertificateHash )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerCertificateHash )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSyncScheduleManagedBySystem )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsSyncScheduleManagedBySystem )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_IncomingServerCredential(This,value) \
    ( (This)->lpVtbl->get_IncomingServerCredential(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_IncomingServerCredential(This,value) \
    ( (This)->lpVtbl->put_IncomingServerCredential(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_OutgoingServerCredential(This,value) \
    ( (This)->lpVtbl->get_OutgoingServerCredential(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_OutgoingServerCredential(This,value) \
    ( (This)->lpVtbl->put_OutgoingServerCredential(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_OAuthRefreshToken(This,value) \
    ( (This)->lpVtbl->get_OAuthRefreshToken(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_OAuthRefreshToken(This,value) \
    ( (This)->lpVtbl->put_OAuthRefreshToken(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_IsExternallyManaged(This,value) \
    ( (This)->lpVtbl->get_IsExternallyManaged(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_IsExternallyManaged(This,value) \
    ( (This)->lpVtbl->put_IsExternallyManaged(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_AccountIconId(This,value) \
    ( (This)->lpVtbl->get_AccountIconId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_AccountIconId(This,value) \
    ( (This)->lpVtbl->put_AccountIconId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_AuthenticationType(This,value) \
    ( (This)->lpVtbl->get_AuthenticationType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_AuthenticationType(This,value) \
    ( (This)->lpVtbl->put_AuthenticationType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_IsSsoAuthenticationSupported(This,value) \
    ( (This)->lpVtbl->get_IsSsoAuthenticationSupported(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_SsoAccountId(This,value) \
    ( (This)->lpVtbl->get_SsoAccountId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_SsoAccountId(This,value) \
    ( (This)->lpVtbl->put_SsoAccountId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_AlwaysDownloadFullMessage(This,value) \
    ( (This)->lpVtbl->get_AlwaysDownloadFullMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_AlwaysDownloadFullMessage(This,value) \
    ( (This)->lpVtbl->put_AlwaysDownloadFullMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_DoesPolicyAllowMailSync(This,value) \
    ( (This)->lpVtbl->get_DoesPolicyAllowMailSync(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_SyncScheduleKind(This,value) \
    ( (This)->lpVtbl->get_SyncScheduleKind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_SyncScheduleKind(This,value) \
    ( (This)->lpVtbl->put_SyncScheduleKind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_MailAgeFilter(This,value) \
    ( (This)->lpVtbl->get_MailAgeFilter(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_MailAgeFilter(This,value) \
    ( (This)->lpVtbl->put_MailAgeFilter(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_IsClientAuthenticationCertificateRequired(This,value) \
    ( (This)->lpVtbl->get_IsClientAuthenticationCertificateRequired(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_IsClientAuthenticationCertificateRequired(This,value) \
    ( (This)->lpVtbl->put_IsClientAuthenticationCertificateRequired(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_AutoSelectAuthenticationCertificate(This,value) \
    ( (This)->lpVtbl->get_AutoSelectAuthenticationCertificate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_AutoSelectAuthenticationCertificate(This,value) \
    ( (This)->lpVtbl->put_AutoSelectAuthenticationCertificate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_AuthenticationCertificateId(This,value) \
    ( (This)->lpVtbl->get_AuthenticationCertificateId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_AuthenticationCertificateId(This,value) \
    ( (This)->lpVtbl->put_AuthenticationCertificateId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_CardDavSyncScheduleKind(This,value) \
    ( (This)->lpVtbl->get_CardDavSyncScheduleKind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_CardDavSyncScheduleKind(This,value) \
    ( (This)->lpVtbl->put_CardDavSyncScheduleKind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_CalDavSyncScheduleKind(This,value) \
    ( (This)->lpVtbl->get_CalDavSyncScheduleKind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_CalDavSyncScheduleKind(This,value) \
    ( (This)->lpVtbl->put_CalDavSyncScheduleKind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_CardDavServerUrl(This,value) \
    ( (This)->lpVtbl->get_CardDavServerUrl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_CardDavServerUrl(This,value) \
    ( (This)->lpVtbl->put_CardDavServerUrl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_CardDavRequiresSsl(This,value) \
    ( (This)->lpVtbl->get_CardDavRequiresSsl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_CardDavRequiresSsl(This,value) \
    ( (This)->lpVtbl->put_CardDavRequiresSsl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_CalDavServerUrl(This,value) \
    ( (This)->lpVtbl->get_CalDavServerUrl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_CalDavServerUrl(This,value) \
    ( (This)->lpVtbl->put_CalDavServerUrl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_CalDavRequiresSsl(This,value) \
    ( (This)->lpVtbl->get_CalDavRequiresSsl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_CalDavRequiresSsl(This,value) \
    ( (This)->lpVtbl->put_CalDavRequiresSsl(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_WasModifiedByUser(This,value) \
    ( (This)->lpVtbl->get_WasModifiedByUser(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_WasModifiedByUser(This,value) \
    ( (This)->lpVtbl->put_WasModifiedByUser(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_WasIncomingServerCertificateHashConfirmed(This,value) \
    ( (This)->lpVtbl->get_WasIncomingServerCertificateHashConfirmed(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_WasIncomingServerCertificateHashConfirmed(This,value) \
    ( (This)->lpVtbl->put_WasIncomingServerCertificateHashConfirmed(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_IncomingServerCertificateHash(This,value) \
    ( (This)->lpVtbl->get_IncomingServerCertificateHash(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_IncomingServerCertificateHash(This,value) \
    ( (This)->lpVtbl->put_IncomingServerCertificateHash(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_IsOutgoingServerAuthenticationRequired(This,value) \
    ( (This)->lpVtbl->get_IsOutgoingServerAuthenticationRequired(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_IsOutgoingServerAuthenticationRequired(This,value) \
    ( (This)->lpVtbl->put_IsOutgoingServerAuthenticationRequired(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_IsOutgoingServerAuthenticationEnabled(This,value) \
    ( (This)->lpVtbl->get_IsOutgoingServerAuthenticationEnabled(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_IsOutgoingServerAuthenticationEnabled(This,value) \
    ( (This)->lpVtbl->put_IsOutgoingServerAuthenticationEnabled(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_WasOutgoingServerCertificateHashConfirmed(This,value) \
    ( (This)->lpVtbl->get_WasOutgoingServerCertificateHashConfirmed(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_WasOutgoingServerCertificateHashConfirmed(This,value) \
    ( (This)->lpVtbl->put_WasOutgoingServerCertificateHashConfirmed(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_OutgoingServerCertificateHash(This,value) \
    ( (This)->lpVtbl->get_OutgoingServerCertificateHash(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_OutgoingServerCertificateHash(This,value) \
    ( (This)->lpVtbl->put_OutgoingServerCertificateHash(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_get_IsSyncScheduleManagedBySystem(This,value) \
    ( (This)->lpVtbl->get_IsSyncScheduleManagedBySystem(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_put_IsSyncScheduleManagedBySystem(This,value) \
    ( (This)->lpVtbl->put_IsSyncScheduleManagedBySystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics";
/* [object, uuid("9D6B11B9-CBE5-45F5-822B-C267B81DBDB6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddAndShowDeviceAccountsAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * accounts,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_AddAndShowDeviceAccountsAsync(This,accounts,result) \
    ( (This)->lpVtbl->AddAndShowDeviceAccountsAsync(This,accounts,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics2";
/* [object, uuid("943F854D-4B4E-439F-83D3-979B27C05AC7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SuppressLocalAccountWithAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING userDataAccountId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDeviceAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * account,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteDeviceAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING accountId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceAccountConfigurationAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING accountId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_SuppressLocalAccountWithAccountAsync(This,userDataAccountId,result) \
    ( (This)->lpVtbl->SuppressLocalAccountWithAccountAsync(This,userDataAccountId,result) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_CreateDeviceAccountAsync(This,account,result) \
    ( (This)->lpVtbl->CreateDeviceAccountAsync(This,account,result) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_DeleteDeviceAccountAsync(This,accountId,result) \
    ( (This)->lpVtbl->DeleteDeviceAccountAsync(This,accountId,result) )

#define __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_GetDeviceAccountConfigurationAsync(This,accountId,result) \
    ( (This)->lpVtbl->GetDeviceAccountConfigurationAsync(This,accountId,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration ** Default Interface **
 *    Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_SystemAccess_DeviceAccountConfiguration_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_SystemAccess_DeviceAccountConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_SystemAccess_DeviceAccountConfiguration[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_SystemAccess_UserDataAccountSystemAccessManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_UserDataAccounts_SystemAccess_UserDataAccountSystemAccessManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_SystemAccess_UserDataAccountSystemAccessManager[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager";
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
#endif // __windows2Eapplicationmodel2Euserdataaccounts2Esystemaccess_p_h__

#endif // __windows2Eapplicationmodel2Euserdataaccounts2Esystemaccess_h__
