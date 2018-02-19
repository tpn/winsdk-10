/* Header file automatically generated from windows.services.cortana.idl */
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
#ifndef __windows2Eservices2Ecortana_h__
#define __windows2Eservices2Ecortana_h__
#ifndef __windows2Eservices2Ecortana_p_h__
#define __windows2Eservices2Ecortana_p_h__


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
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                interface ICortanaPermissionsManager;
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */
#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager ABI::Windows::Services::Cortana::ICortanaPermissionsManager

#endif // ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                interface ICortanaPermissionsManagerStatics;
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */
#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics ABI::Windows::Services::Cortana::ICortanaPermissionsManagerStatics

#endif // ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                interface ICortanaSettings;
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */
#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettings ABI::Windows::Services::Cortana::ICortanaSettings

#endif // ____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                interface ICortanaSettingsStatics;
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */
#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics ABI::Windows::Services::Cortana::ICortanaSettingsStatics

#endif // ____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                enum CortanaPermission : int;
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_USE
#define DEF___FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0f1ac33c-511a-52e8-af09-d89f7004e8c5"))
IIterator<enum ABI::Windows::Services::Cortana::CortanaPermission> : IIterator_impl<enum ABI::Windows::Services::Cortana::CortanaPermission> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Cortana.CortanaPermission>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Services::Cortana::CortanaPermission> __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_t;
#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Cortana::CortanaPermission>
//#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Cortana::CortanaPermission>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_USE */





#ifndef DEF___FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_USE
#define DEF___FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("36a12eae-2e24-5e07-bfd0-344a92990916"))
IIterable<enum ABI::Windows::Services::Cortana::CortanaPermission> : IIterable_impl<enum ABI::Windows::Services::Cortana::CortanaPermission> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Cortana.CortanaPermission>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Services::Cortana::CortanaPermission> __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_t;
#define __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Cortana::CortanaPermission>
//#define __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Cortana::CortanaPermission>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_USE */



namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                enum CortanaPermissionsChangeResult : int;
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ec1c6586-5e0d-5bc0-b84f-20052c5ac7a9"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Services::Cortana::CortanaPermissionsChangeResult> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Services::Cortana::CortanaPermissionsChangeResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Services.Cortana.CortanaPermissionsChangeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Services::Cortana::CortanaPermissionsChangeResult> __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Cortana::CortanaPermissionsChangeResult>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Cortana::CortanaPermissionsChangeResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_USE
#define DEF___FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("838a3dd0-f0a3-508f-846a-d3c19e4fe7a0"))
IAsyncOperation<enum ABI::Windows::Services::Cortana::CortanaPermissionsChangeResult> : IAsyncOperation_impl<enum ABI::Windows::Services::Cortana::CortanaPermissionsChangeResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Services.Cortana.CortanaPermissionsChangeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Services::Cortana::CortanaPermissionsChangeResult> __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_t;
#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Cortana::CortanaPermissionsChangeResult>
//#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Cortana::CortanaPermissionsChangeResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_USE */




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
        namespace Services {
            namespace Cortana {
                
                typedef enum CortanaPermission : int CortanaPermission;
                
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                
                typedef enum CortanaPermissionsChangeResult : int CortanaPermissionsChangeResult;
                
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                class CortanaPermissionsManager;
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                class CortanaSettings;
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */










/*
 *
 * Struct Windows.Services.Cortana.CortanaPermission
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                /* [v1_enum, contract] */
                enum CortanaPermission : int
                {
                    CortanaPermission_BrowsingHistory = 0,
                    CortanaPermission_Calendar = 1,
                    CortanaPermission_CallHistory = 2,
                    CortanaPermission_Contacts = 3,
                    CortanaPermission_Email = 4,
                    CortanaPermission_InputPersonalization = 5,
                    CortanaPermission_Location = 6,
                    CortanaPermission_Messaging = 7,
                    CortanaPermission_Microphone = 8,
                    CortanaPermission_Personalization = 9,
                    CortanaPermission_PhoneCall = 10,
                };
                
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Cortana.CortanaPermissionsChangeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                /* [v1_enum, contract] */
                enum CortanaPermissionsChangeResult : int
                {
                    CortanaPermissionsChangeResult_Success = 0,
                    CortanaPermissionsChangeResult_Unavailable = 1,
                    CortanaPermissionsChangeResult_DisabledByPolicy = 2,
                };
                
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Cortana.ICortanaPermissionsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Cortana.CortanaPermissionsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaPermissionsManager[] = L"Windows.Services.Cortana.ICortanaPermissionsManager";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                /* [object, uuid("191330E0-8695-438A-9545-3DA4E822DDB4"), exclusiveto, contract] */
                MIDL_INTERFACE("191330E0-8695-438A-9545-3DA4E822DDB4")
                ICortanaPermissionsManager : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsSupported(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ArePermissionsGrantedAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * permissions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * getGrantedPermissionsOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GrantPermissionsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * permissions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * * grantOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RevokePermissionsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * permissions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * * revokeOperation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICortanaPermissionsManager=_uuidof(ICortanaPermissionsManager);
                
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager;
#endif /* !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Cortana.ICortanaPermissionsManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Cortana.CortanaPermissionsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaPermissionsManagerStatics[] = L"Windows.Services.Cortana.ICortanaPermissionsManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                /* [object, uuid("76B1E67A-B045-4414-9D6D-2AD3A5FE3A7E"), exclusiveto, contract] */
                MIDL_INTERFACE("76B1E67A-B045-4414-9D6D-2AD3A5FE3A7E")
                ICortanaPermissionsManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Cortana::ICortanaPermissionsManager * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICortanaPermissionsManagerStatics=_uuidof(ICortanaPermissionsManagerStatics);
                
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Cortana.ICortanaSettings
 *
 * Introduced to Windows.System.SystemManagementContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Cortana.CortanaSettings
 *
 *
 */
#if WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaSettings[] = L"Windows.Services.Cortana.ICortanaSettings";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                /* [object, uuid("54D571A7-8062-40F4-ABE7-DEDFD697B019"), exclusiveto, contract] */
                MIDL_INTERFACE("54D571A7-8062-40F4-ABE7-DEDFD697B019")
                ICortanaSettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasUserConsentToVoiceActivation(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsVoiceActivationEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsVoiceActivationEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICortanaSettings=_uuidof(ICortanaSettings);
                
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaSettings;
#endif /* !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Cortana.ICortanaSettingsStatics
 *
 * Introduced to Windows.System.SystemManagementContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Cortana.CortanaSettings
 *
 *
 */
#if WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaSettingsStatics[] = L"Windows.Services.Cortana.ICortanaSettingsStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Cortana {
                /* [object, uuid("8B2CCD7E-2EC0-446D-9285-33F07CE8AC04"), exclusiveto, contract] */
                MIDL_INTERFACE("8B2CCD7E-2EC0-446D-9285-33F07CE8AC04")
                ICortanaSettingsStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Cortana::ICortanaSettings * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICortanaSettingsStatics=_uuidof(ICortanaSettingsStatics);
                
            } /* Windows */
        } /* Services */
    } /* Cortana */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Services.Cortana.CortanaPermissionsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Cortana.ICortanaPermissionsManagerStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Cortana.ICortanaPermissionsManager ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Cortana_CortanaPermissionsManager_DEFINED
#define RUNTIMECLASS_Windows_Services_Cortana_CortanaPermissionsManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Cortana_CortanaPermissionsManager[] = L"Windows.Services.Cortana.CortanaPermissionsManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Cortana.CortanaSettings
 *
 * Introduced to Windows.System.SystemManagementContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Cortana.ICortanaSettingsStatics interface starting with version 3.0 of the Windows.System.SystemManagementContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Cortana.ICortanaSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Services_Cortana_CortanaSettings_DEFINED
#define RUNTIMECLASS_Windows_Services_Cortana_CortanaSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Cortana_CortanaSettings[] = L"Windows.Services.Cortana.CortanaSettings";
#endif
#endif // WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager;

#endif // ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics;

#endif // ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaSettings __x_ABI_CWindows_CServices_CCortana_CICortanaSettings;

#endif // ____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics;

#endif // ____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermission;
#if !defined(____FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CCortana__CCortanaPermission;

typedef struct __FIIterator_1_Windows__CServices__CCortana__CCortanaPermissionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermission *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermission *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CCortana__CCortanaPermissionVtbl;

interface __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CCortana__CCortanaPermissionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CCortana__CCortanaPermission_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CCortana__CCortanaPermission;

typedef  struct __FIIterable_1_Windows__CServices__CCortana__CCortanaPermissionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CCortana__CCortanaPermission **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CCortana__CCortanaPermissionVtbl;

interface __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CCortana__CCortanaPermissionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CCortana__CCortanaPermission_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermissionsChangeResult;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult;

typedef struct __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermissionsChangeResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl;

interface __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult_INTERFACE_DEFINED__


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










typedef enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermission __x_ABI_CWindows_CServices_CCortana_CCortanaPermission;


typedef enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermissionsChangeResult __x_ABI_CWindows_CServices_CCortana_CCortanaPermissionsChangeResult;















/*
 *
 * Struct Windows.Services.Cortana.CortanaPermission
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermission
{
    CortanaPermission_BrowsingHistory = 0,
    CortanaPermission_Calendar = 1,
    CortanaPermission_CallHistory = 2,
    CortanaPermission_Contacts = 3,
    CortanaPermission_Email = 4,
    CortanaPermission_InputPersonalization = 5,
    CortanaPermission_Location = 6,
    CortanaPermission_Messaging = 7,
    CortanaPermission_Microphone = 8,
    CortanaPermission_Personalization = 9,
    CortanaPermission_PhoneCall = 10,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Cortana.CortanaPermissionsChangeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CCortana_CCortanaPermissionsChangeResult
{
    CortanaPermissionsChangeResult_Success = 0,
    CortanaPermissionsChangeResult_Unavailable = 1,
    CortanaPermissionsChangeResult_DisabledByPolicy = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Cortana.ICortanaPermissionsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Cortana.CortanaPermissionsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaPermissionsManager[] = L"Windows.Services.Cortana.ICortanaPermissionsManager";
/* [object, uuid("191330E0-8695-438A-9545-3DA4E822DDB4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ArePermissionsGrantedAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * permissions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * getGrantedPermissionsOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GrantPermissionsAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * permissions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * * grantOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RevokePermissionsAsync )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CServices__CCortana__CCortanaPermission * permissions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CCortana__CCortanaPermissionsChangeResult * * revokeOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerVtbl;

interface __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_IsSupported(This,result) \
    ( (This)->lpVtbl->IsSupported(This,result) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_ArePermissionsGrantedAsync(This,permissions,getGrantedPermissionsOperation) \
    ( (This)->lpVtbl->ArePermissionsGrantedAsync(This,permissions,getGrantedPermissionsOperation) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_GrantPermissionsAsync(This,permissions,grantOperation) \
    ( (This)->lpVtbl->GrantPermissionsAsync(This,permissions,grantOperation) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_RevokePermissionsAsync(This,permissions,revokeOperation) \
    ( (This)->lpVtbl->RevokePermissionsAsync(This,permissions,revokeOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager;
#endif /* !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Cortana.ICortanaPermissionsManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Cortana.CortanaPermissionsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaPermissionsManagerStatics[] = L"Windows.Services.Cortana.ICortanaPermissionsManagerStatics";
/* [object, uuid("76B1E67A-B045-4414-9D6D-2AD3A5FE3A7E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManager * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStaticsVtbl;

interface __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_GetDefault(This,result) \
    ( (This)->lpVtbl->GetDefault(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaPermissionsManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Cortana.ICortanaSettings
 *
 * Introduced to Windows.System.SystemManagementContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Cortana.CortanaSettings
 *
 *
 */
#if WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaSettings[] = L"Windows.Services.Cortana.ICortanaSettings";
/* [object, uuid("54D571A7-8062-40F4-ABE7-DEDFD697B019"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasUserConsentToVoiceActivation )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsVoiceActivationEnabled )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsVoiceActivationEnabled )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsVtbl;

interface __x_ABI_CWindows_CServices_CCortana_CICortanaSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettings_get_HasUserConsentToVoiceActivation(This,value) \
    ( (This)->lpVtbl->get_HasUserConsentToVoiceActivation(This,value) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettings_get_IsVoiceActivationEnabled(This,value) \
    ( (This)->lpVtbl->get_IsVoiceActivationEnabled(This,value) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettings_put_IsVoiceActivationEnabled(This,value) \
    ( (This)->lpVtbl->put_IsVoiceActivationEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaSettings;
#endif /* !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Cortana.ICortanaSettingsStatics
 *
 * Introduced to Windows.System.SystemManagementContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Cortana.CortanaSettings
 *
 *
 */
#if WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Cortana_ICortanaSettingsStatics[] = L"Windows.Services.Cortana.ICortanaSettingsStatics";
/* [object, uuid("8B2CCD7E-2EC0-446D-9285-33F07CE8AC04"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CCortana_CICortanaSettings * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStaticsVtbl;

interface __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_IsSupported(This,value) \
    ( (This)->lpVtbl->IsSupported(This,value) )

#define __x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_GetDefault(This,result) \
    ( (This)->lpVtbl->GetDefault(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CCortana_CICortanaSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Services.Cortana.CortanaPermissionsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Cortana.ICortanaPermissionsManagerStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Cortana.ICortanaPermissionsManager ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Cortana_CortanaPermissionsManager_DEFINED
#define RUNTIMECLASS_Windows_Services_Cortana_CortanaPermissionsManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Cortana_CortanaPermissionsManager[] = L"Windows.Services.Cortana.CortanaPermissionsManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Cortana.CortanaSettings
 *
 * Introduced to Windows.System.SystemManagementContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Cortana.ICortanaSettingsStatics interface starting with version 3.0 of the Windows.System.SystemManagementContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Cortana.ICortanaSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Services_Cortana_CortanaSettings_DEFINED
#define RUNTIMECLASS_Windows_Services_Cortana_CortanaSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Cortana_CortanaSettings[] = L"Windows.Services.Cortana.CortanaSettings";
#endif
#endif // WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION >= 0x30000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eservices2Ecortana_p_h__

#endif // __windows2Eservices2Ecortana_h__
